// clang-format off
#include "pch.h"
#include "includes/config.h"
#include <fstream>
// clang-format on

bool Config::Init() {

  gameHWND = FindWindow(NULL, "Dungeon Defenders");

  // clang-format off
  // graphics
  REGISTER_HOOKED_FUNCTION("Function Engine.Interaction.PostRender",
                           PostRenderHookFunc);
  REGISTER_HOOKED_FUNCTION("Function UDKGame.DunDef_SeqAct_SetWaveNumber.Activated",
                           WaveSkipHookFunc);
  REGISTER_HOOKED_FUNCTION("Function UDKGame.DunDefDroppedEquipment.ReportEquipmentToStats",
                           AutoLootHookFunc);
  REGISTER_HOOKED_FUNCTION("Function UDKGame.DunDef_SeqAct_GiveEquipmentToPlayers.Activated",
                           PlayerRewardHookFunc);
  REGISTER_HOOKED_FUNCTION(
      "Function UDKGame.DunDefTreasureChest.SpawningIn.Tick",
      [this](PROCESS_EVENT_ARGS) {
      auto pPawn = GetPlayerPawn();
        if (bAutoOpenChest && pPawn)
      {
          ((Classes::ADunDefTreasureChest *)obj)
              ->Bump(pPawn, nullptr, {0, 0, 0});
      }
      });

  RegisterKeybind("Toggle menu",Config::KeyBinds::ToggleKey,519,[this](){bShowMenu = !bShowMenu;});
  RegisterKeybind("End menu",Config::KeyBinds::EndKey,520,[this](){bEndMenu = true;});
  RegisterKeybind("Teleport players",Config::KeyBinds::TeleportPlayers,521,[this](){bTeleportPlayers = !bTeleportPlayers;});
  RegisterKeybind("Vacuum pos",Config::KeyBinds::UpdateVacuumPos,522,[this](){SetVacPos(GetPlayerPos());});
  RegisterKeybind("No clip",Config::KeyBinds::ToggleNoClipKeybind,523,[this](){bNoClip = !bNoClip;});

  bool invert= !bPlayerGodMode;
  RegisterBlockedFunction("Function DunDefPlayerController.Dead.BeginState", invert);
  // clang-format on

  GetKeybinds();

  return true;
}

bool Config::Cleanup() {
  TurnOffPlayerGodMod();
  SaveKeybinds();
  // turn off no clip
  auto pPlayerPawn = GetPlayerPawn();
  if (pPlayerPawn) {
    pPlayerPawn->bCollideWorld = 1;
    pPlayerPawn->bCollideActors = 1;
    pPlayerPawn->GravityZMultiplier = 1;
  }
  // cleanup the equipment vector before closing
  vHeroEquipmentStrings.clear();

  if (bConsoleAttached)
    DettachConsole();

  return true;
}

void Config::RegisterHookedFunction(
    const std::string &key,
    std::function<void(Classes::UObject *, void *, Classes::UFunction *, void *,
                       void *)>
        func) {
  hookedFuncMap[key] = func;
}

void Config::RegisterBlockedFunction(const std::string &key, bool &flag) {
  blockedFuncMap[key] = flag;
}

void Config::RegisterKeybind(std::string name, Config::KeyBinds keyBindName,
                             int keyCode, std::function<void()> func) {
  KeybindsStruct key;
  key.name = name;
  key.key = keyCode;
  key.func = func;
  key.bShouldChange = false;
  keyBindsmap[keyBindName] = key;
}

void Config::PostRenderHookFunc(PROCESS_EVENT_ARGS) {
  // noclip
  NoClip();

  // show mouse cursor
  if (bShowMenu) {
    GetClientManager()->bRenderCursor = 1;
  }

  // player pos
  if (bShowPlayerTeleportPos) {
    Classes::FString v(L"V");
    FloatingTextinWorld(v, GetTeleportPos(), {0, 1, 0, 1});
  }

  // show vacuum hack
  if (bShowVacuumPos) {
    Classes::FString v(L"V");
    FloatingTextinWorld(v, GetVacPos(), {1, 0, 0, 1});
  }

  // vacuum hack
  if (bVacHack) {
    MoveEnemyPawns(vacPos);
  }

  // kill all enemys
  if (bKillAllEnemys) {
    KillAllEnemyPawns();
  }

  // kill one to advance
  if (bKillOneToAdvance) {
    auto main = GetGameInfo();
    if (main && main->CurrentKillCountUI &&
        main->CurrentKillCountUI->KillCountRemaining > 1)
      main->CurrentKillCountUI->KillCountRemaining = 1;
  }

  // loot shower
  if (bLootShower) {
    SpawnItemsfromPawns();
  }

  // teleport players
  if (bTeleportPlayers) {
    MovePlayerPawns(playerTeleportPos);
  }

  // give item
  if (!qItemsToGive.empty()) {
    // doing this in post render stops a crash from happening
    // doing this one at a time should give a better user experience
    auto item = PopItemFromQueue();
    GiveItem(item);
  }

  // handle mana
  auto pController = config.GetADunDefPlayerController();
  if (!pController)
    return;

  // unlimited mana for towers
  if (config.bUnlimitedManaTowers)
    pController->ManaPower = config.iManaForTowers;

  // unlimited mana for shops
  if (config.bUnlimitedManaShop) {
    Classes::FHighDigitInt tmp = {1, 1, 1, 1};
    pController->SetBankedMana(tmp, 0, 1);
  }
}

void Config::NoClip() {
  auto pPlayerPawn = GetPlayerPawn();

  if (!pPlayerPawn)
    return;

  if (bNoClip) {
    pPlayerPawn->bCollideWorld = 0;
    pPlayerPawn->bCollideActors = 0;
    pPlayerPawn->GravityZMultiplier = 0;
  } else {
    pPlayerPawn->GravityZMultiplier = 1;
    pPlayerPawn->bCollideWorld = 1;
    pPlayerPawn->bCollideActors = 1;
  }
}

void Config::WaveSkipHookFunc(PROCESS_EVENT_ARGS) {
  if (!bSkipWave)
    return;

  auto wave = (Classes::UDunDef_SeqAct_SetWaveNumber *)(obj);

  if (obj)
    wave->waveNumber = waveToSkipTo;
  if (!bLockWave)
    bSkipWave = false;
}

void Config::PlayerRewardHookFunc(PROCESS_EVENT_ARGS) {
  if (!bMultiplyReward)
    return;

  Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *rewarditems =
      ((Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *)(obj));

  static int currentRewardInteration = 0;

  if (currentRewardInteration < config.MultiplyRewardsBy) {
    currentRewardInteration++;
    rewarditems->Activated();
    // tmpItemEntry = rewarditems->GiveEquipmentEntries;
  } else {
    currentRewardInteration = 0;
  }
}

void Config::AutoLootHookFunc(PROCESS_EVENT_ARGS) {
  Classes::UHeroEquipment *tempweap =
      ((Classes::ADunDefDroppedEquipment *)(obj))->MyEquipmentObject;

  if (!bAutoLoot || !tempweap)
    return;

  itemsChecked += 1;
  bool isValid = ShouldLootItem(tempweap);

  if (!isValid)
    return;

  auto pPawn = config.GetPlayerPawn();
  auto pHeroManager = config.GetHeroManager();

  if (!pHeroManager || !pPawn ||
      !((Classes::ADunDefPlayer *)pPawn)->MyPlayerHero)
    return;

  itemsLooted += 1;
  pHeroManager->AddEquipmentObjectToItemBox(
      ((Classes::ADunDefPlayer *)pPawn)->MyPlayerHero, tempweap, true);
}

bool Config::TogglePlayerGodMode() {
  Classes::ADunDefPlayerController *playerController =
      GetADunDefPlayerController();
  if (!playerController)
    return false;

  playerController->bGodMode = bPlayerGodMode;
  ToggleCrystalGodMode();

  return bPlayerGodMode;
}

bool Config::ToggleCrystalGodMode() {
  // This function is not needed because TogglePlayerGodMode()
  // applys both to the player and the crystal
  Classes::AMain *gameInfo = GetGameInfo();

  if (!gameInfo)
    return false;

  gameInfo->bCrystalCoreInvincible = bCrystalGodMode;

  return gameInfo->bCrystalCoreInvincible;
}

bool Config::TurnOffPlayerGodMod() {
  Classes::ADunDefPlayerController *playerController =
      GetADunDefPlayerController();

  if (!playerController)
    return false;

  playerController->bGodMode = false;

  return bPlayerGodMode;
}

bool Config::ShouldLootItem(Classes::UHeroEquipment *item) {
  if (!item)
    return false;

  // always loot above a certain quality
  if (item->NameIndex_QualityDescriptor >= itemFilterQualityULT + 12)
    return true;

  // if any of the stats are below the filter and the filter is valid
  for (int i = 0; i < 0xB; i++) {
    int curstat = item->StatModifiers[i];
    if (lootFilter[i] > 0 && curstat < lootFilter[i])
      return false;
  }

  // check for item filter
  if (item->NameIndex_QualityDescriptor < itemFilterQuality + 12)
    return false;

  return true;
}

std::string Config::FStringToString(Classes::FString s) {
  return std::string(s.ToString());
}

Classes::FString Config::StringToFString(std::string s) {
  std::wstring wstr(s.begin(), s.end());
  return Classes::FString(wstr.c_str());
}

Classes::UObject *Config::GetInstanceByName(Classes::UClass *Class,
                                            std::string name) {
  static Classes::UObject *ObjectInstance = NULL;

  for (size_t i = 0; i < Classes::UObject::GetGlobalObjects().Num(); ++i) {
    Classes::UObject *CheckObject = Classes::UObject::GetGlobalObjects()[i];
    if (CheckObject && CheckObject->IsA(Class)) {
      std::string newname = CheckObject->GetFullName();
      if (!strstr(newname.c_str(), "Default")) {
        if (newname.find(name) != std::string::npos) {
          ObjectInstance = CheckObject;
          return ObjectInstance;
        }
      }
    }
  }
  return ObjectInstance;
};

Classes::UObject *Config::GetInstanceOf(Classes::UClass *Class) {

  static Classes::UObject *ObjectInstance = NULL;

  for (size_t i = 0; i < Classes::UObject::GetGlobalObjects().Num(); ++i) {
    Classes::UObject *CheckObject = Classes::UObject::GetGlobalObjects()[i];

    if (!CheckObject)
      continue;

    if (!CheckObject->IsA(Class))
      continue;

    if (!strstr(CheckObject->GetFullName().c_str(), "Default")) {
      ObjectInstance = CheckObject;
    }
  }
  return ObjectInstance;
}

std::vector<Classes::UObject *>
Config::GetAllInstanceOf(Classes::UClass *Class) {
  std::vector<Classes::UObject *> ret;
  static Classes::UObject *ObjectInstance = NULL;

  for (size_t i = 0; i < Classes::UObject::GetGlobalObjects().Num(); ++i) {
    Classes::UObject *CheckObject = Classes::UObject::GetGlobalObjects()[i];
    if (CheckObject && CheckObject->IsA(Class)) {
      if (!strstr(CheckObject->GetFullName().c_str(), "Default")) {
        ObjectInstance = CheckObject;
        ret.push_back(ObjectInstance);
      }
    }
  }
  return ret;
}

Classes::UEngine *Config::GetEngine() {
  static Classes::UEngine *obj = nullptr;

  if (obj == nullptr)
    obj = (Classes::UEngine *)GetInstanceOf(Classes::UEngine::StaticClass());
  return obj;
}

Classes::ADunDefPlayerController *Config::GetADunDefPlayerController() {
  Classes::UEngine *uengine = GetEngine();

  if (!uengine || !uengine->GamePlayers.IsValidIndex(0))
    return nullptr;

  return (Classes::ADunDefPlayerController *)uengine->GamePlayers[0]->Actor;
}

Classes::ADunDefPawn *Config::GetPlayerPawn() {
  Classes::ADunDefPlayerController *playerController =
      GetADunDefPlayerController();

  if (playerController == nullptr) {
    return nullptr;
  }

  if (playerController->Pawn == nullptr) {
    return nullptr;
  }

  return (Classes::ADunDefPlayer *)playerController->Pawn;
}

Classes::APawn *Config::GetFirstPawnInList() {
  auto playerController = GetADunDefPlayerController();

  if (!playerController)
    return nullptr;

  if (!playerController->Pawn || !playerController->Pawn->WorldInfo ||
      !playerController->Pawn->WorldInfo->PawnList)
    return nullptr;

  return reinterpret_cast<Classes::APawn *>(
      playerController->Pawn->WorldInfo->PawnList);
}

Classes::AWorldInfo *Config::GetWorldInfo() {
  Classes::UEngine *engine = GetEngine();

  if (!engine)
    return nullptr;

  auto worldinfo = engine->STATIC_GetCurrentWorldInfo();

  return worldinfo;
}

Classes::AMain *Config::GetGameInfo() {
  Classes::AWorldInfo *worldInfo = GetWorldInfo();

  if (worldInfo == nullptr || worldInfo->Game == nullptr)
    return nullptr;

  return (Classes::AMain *)(worldInfo->Game);
}

Classes::ADunDefGameReplicationInfo *Config::GetGRI() {

  auto playerController = GetADunDefPlayerController();
  if (playerController == nullptr)
    return nullptr;

  Classes::ADunDefGameReplicationInfo *GRI = nullptr;
  GRI = playerController->GetGRI();

  return GRI;
}

Classes::UDunDefHeroManager *Config::GetHeroManager() {
  Classes::ADunDefPlayerController *pController = GetADunDefPlayerController();

  if (!pController)
    return nullptr;

  static Classes::UDunDefHeroManager *obj = nullptr;

  if (!obj) {
    obj = pController->GetHeroManager();

    if (bConsoleAttached) {
      std::string format = std::format("Found HeroManager : {:p}", (void *)obj);
      PrintToConsole(format);
    }
  }

  return obj;
}

Classes::UDunDefSceneClient *Config::GetClientManager() {

  static Classes::UDunDefSceneClient *client =
      (Classes::UDunDefSceneClient *)GetInstanceOf(
          Classes::UDunDefSceneClient::StaticClass());

  if (!client)
    return nullptr;

  return client;
}

void Config::PawnLoop(const std::function<void(Classes::ADunDefPawn *)> &func,
                      bool applyToEnemy = true, bool applyToPlayer = false) {
  Classes::APawn *curPawn = GetFirstPawnInList();

  while (curPawn != nullptr) {
    if (!curPawn->IsA(Classes::ADunDefPawn::StaticClass())) {
      curPawn = curPawn->NextPawn;
      continue;
    }

    Classes::ADunDefPawn *curDunDefPawn = (Classes::ADunDefPawn *)curPawn;
    bool isPlayer = curPawn->IsPlayerPawn();

    if (isPlayer && applyToPlayer) {
      func(curDunDefPawn);
    } else if (!isPlayer && applyToEnemy) {
      func(curDunDefPawn);
    }
    curPawn = (Classes::ADunDefPawn *)curPawn->NextPawn;
  }
}

void Config::KillPawn(Classes::ADunDefPawn *pawn) {
  Classes::FVector tempVec = Classes::FVector();
  Classes::FTraceHitInfo tempHit = Classes::FTraceHitInfo();
  pawn->TakeDamage(pawn->HealthMax, NULL, tempVec, tempVec, NULL, tempHit, NULL,
                   NULL);
}

void Config::KillAllEnemyPawns() {
  PawnLoop([this](Classes::ADunDefPawn *curPawn) { KillPawn(curPawn); }, true,
           false);
}

void Config::MovePawn(Classes::ADunDefPawn *pawn, Classes::FVector pos) {
  pawn->Location = pos;
}

void Config::MoveEnemyPawns(Classes::FVector pos) {
  PawnLoop([this, pos](Classes::ADunDefPawn *pawn) { MovePawn(pawn, pos); },
           true, false);
}

void Config::MovePlayerPawns(Classes::FVector pos) {
  PawnLoop([this, pos](Classes::ADunDefPawn *pawn) { MovePawn(pawn, pos); },
           false, true);
}

void Config::SpawnItemsfromPawns() {
  PawnLoop([](Classes::ADunDefPawn *pawn) {
    ((Classes::ADunDefEnemy *)pawn)->SpawnDroppedEquipment();
  });
}

void Config::SetVacPos(Classes::FVector pos) {
  vacPos = pos;
  return;
}

Classes::FVector Config::GetVacPos() {
  // returns the vacuum position
  return vacPos;
}

Classes::FVector Config::GetTeleportPos() {
  // returns the player position
  return playerTeleportPos;
}

void Config::SetTeleportPos(Classes::FVector pos) {
  playerTeleportPos = pos;
  return;
}

Classes::FVector Config::GetPlayerPos() {
  auto playerPawn = GetPlayerPawn();
  if (!playerPawn) {
    return {0, 0, 0};
  }

  return playerPawn->Location;
}

Classes::FVector Config::SetPlayerPos(Classes::FVector pos) {
  auto playerPawn = GetPlayerPawn();
  return playerPawn->Location = pos;
}

void Config::FloatingTextinWorld(const Classes::FString &string,
                                 Classes::FVector pos,
                                 Classes::FLinearColor dColor) {
  auto playerController = config.GetADunDefPlayerController();
  if (!playerController || !playerController->myHUD)
    return;
  auto GRI = playerController->GetGRI();
  if (!GRI)
    return;

  GRI->AddCustomFloatingText(string, pos, 0, 0.1f, 2, TRUE, dColor);
}

std::string Config::GetItemQualityString(Classes::UHeroEquipment *item) {
  if (!item)
    return std::string("Unknown item");

  std::string itemname =
      std::string(item->QualityDescriptorRealNames
                      .GetByIndex(item->NameIndex_QualityDescriptor)
                      .StringValue.ToString());
  return itemname;
}

void Config::GetKeybinds() {
  std::ifstream SettingsFile("data");
  if (!SettingsFile.is_open())
    return;
  SettingsFile >> keyBindsmap[KeyBinds::ToggleKey].key;
  SettingsFile >> keyBindsmap[KeyBinds::EndKey].key;
  SettingsFile >> keyBindsmap[KeyBinds::TeleportPlayers].key;
  SettingsFile >> keyBindsmap[KeyBinds::UpdateVacuumPos].key;
  SettingsFile >> keyBindsmap[KeyBinds::ToggleNoClipKeybind].key;
  SettingsFile.close();

  PrintToConsole("Loaded keybinds");
}

void Config::SaveKeybinds() {
  std::ofstream SettingsFile("data");
  SettingsFile << keyBindsmap[KeyBinds::ToggleKey].key;
  SettingsFile << "\n";
  SettingsFile << keyBindsmap[KeyBinds::EndKey].key;
  SettingsFile << "\n";
  SettingsFile << keyBindsmap[KeyBinds::TeleportPlayers].key;
  SettingsFile << "\n";
  SettingsFile << keyBindsmap[KeyBinds::UpdateVacuumPos].key;
  SettingsFile << "\n";
  SettingsFile << keyBindsmap[KeyBinds::ToggleNoClipKeybind].key;
  SettingsFile.close();

  PrintToConsole("Saved keybinds");
}

Classes::FVector Config::GetForward(float yaw, float pitch) {
  // convert to radians (assuming 360 degrees = 65536 range)
  float radPitch = pitch * (3.14159f / 32768.0f);
  float radYaw = yaw * (3.14159f / 32768.0f);

  // calculate forward direction
  float outX = cos(radYaw) * cos(radPitch);
  float outY = sin(radYaw) * cos(radPitch);
  float outZ = sin(radPitch);

  return {outX, outY, outZ};
}

Classes::FVector Config::AddFVector(Classes::FVector vec1,
                                    Classes::FVector vec2) {
  Classes::FVector temp;
  temp.X = vec1.X + vec2.X;
  temp.Y = vec1.Y + vec2.Y;
  temp.Z = vec1.Z + vec2.Z;
  return temp;
}

bool Config::GiveItem(Classes::UHeroEquipment *item) {
  Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *pItemGiver =
      GetEquipmentGiver();
  Classes::ADunDefPlayerController *pController = GetADunDefPlayerController();

  if (!pItemGiver || !pController)
    return false;

  // save old template
  Classes::FGiveEquipmentEntry oldtemp;
  oldtemp = pItemGiver->GiveEquipmentEntries.Data[0];

  // setup new template
  Classes::FGiveEquipmentEntry newtemp = oldtemp;

  newtemp.ForHeroArchetype = NULL;
  newtemp.EquipmentArchetype = (Classes::UHeroEquipment *)item;
  // newtemp.EquipmentArchetypesRandom;
  newtemp.BaseForceRandomizationQuality = 1.5f;
  newtemp.MaxRandomizationQuality = 1.5f;
  newtemp.RandomizerMultiplierOverride = 9.0f;
  newtemp.bUseEquipmentArchetypeAsTemplate = 1;
  newtemp.bRandomGlobalDontUseAdditionalItemEntries = 0;
  newtemp.ForceHeroArchetypeExactMatch = 0;
  newtemp.bDontIgnoreEquipmentMinUpgradeLevels = 0;
  newtemp.bGetRandomGlobalEquipmentDrop = 0;
  newtemp.bRandomGlobalDontUseShopDrops = 0;
  newtemp.RandomGlobalEquipmentDropExtraRarityWeighting = 0;
  newtemp.RandomGlobalEquipmentDropValueMin = 0;
  newtemp.RandomGlobalEquipmentDropValueMax = 0;
  newtemp.bUsed = 0;

  // change the itemGiver to my items
  pItemGiver->GiveEquipmentEntries.Data[0] = newtemp;

  pItemGiver->GiveEquipment(pController);

  // cleanup templates
  pItemGiver->GiveEquipmentEntries.Data[0] = oldtemp;

  return true;
}

Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *Config::GetEquipmentGiver() {
  Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *obj;
  obj = (Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *)GetInstanceOf(
      Classes::UDunDef_SeqAct_GiveEquipmentToPlayers::StaticClass());
  return obj;
}

Classes::ADunDefForge *Config::GetForge() {
  return ((Classes::ADunDefForge *)(Classes::ADunDefForge::StaticClass()))
      ->STATIC_GetAForge();

  auto obj = (Classes::ADunDefForge *)GetInstanceOf(
      Classes::ADunDefForge::StaticClass());

  if (!obj)
    return nullptr;

  return obj;
}

void Config::PushItemToQueue(Classes::UHeroEquipment *item) {
  std::lock_guard<std::mutex> lock(queueMutex);
  qItemsToGive.push(item);
}

Classes::UHeroEquipment *Config::PopItemFromQueue() {
  std::lock_guard<std::mutex> lock(queueMutex);
  if (!qItemsToGive.empty()) {
    auto item = qItemsToGive.front();
    qItemsToGive.pop();
    return item;
  }
  return nullptr;
}

void Config::PushItemToQueueWithString(std::string s) {
  Classes::UHeroEquipment *instance =
      (Classes::UHeroEquipment *)GetInstanceByName(
          Classes::UHeroEquipmentNative::StaticClass(), s);
  if (!instance)
    return;
  std::lock_guard<std::mutex> lock(queueMutex);
  qItemsToGive.push(instance);
}

std::vector<std::string> Config::ScanForAllItems() {
  // this function could be done better
  std::vector<std::string> retVec;
  auto equipVector = GetAllInstanceOf(Classes::UHeroEquipment::StaticClass());

  for (auto v : equipVector) {
    Classes::UHeroEquipment *item = (Classes::UHeroEquipment *)v;

    if (item->RandomBaseNames.Data)
      if (item->RandomBaseNames.Data[0].StringValue.ToString().find(
              "Generic Random") != std::string::npos)
        continue;

    std::string name = item->GetName();

    if (std::find(retVec.begin(), retVec.end(), name) == retVec.end()) {
      retVec.push_back(name);
    }
  }

  // setup bool array for imgui menu
  bool *newItemSelectable = new bool[retVec.size()];
  if (!newItemSelectable) {
    return std::vector<std::string>{};
  }
  // delete old one
  if (pItemSelectable) {
    delete[] pItemSelectable;
    pItemSelectable = nullptr;
  }
  // make new one the correct one
  pItemSelectable = newItemSelectable;

  // zero it out
  memset(pItemSelectable, 0, retVec.size() * sizeof(bool));

  return retVec;
}

bool Config::GiveSelectedItems() {
  for (size_t i = 0; i < vHeroEquipmentStrings.size(); i++) {
    if (!pItemSelectable[i])
      continue;
    PushItemToQueueWithString(vHeroEquipmentStrings[i]);
  }
  return true;
}

void Config::AttachConsole() {
  AllocConsole();
  freopen_s(&f, "CONOUT$", "w", stdout);
  std::cout << "[+] Successfully attached to process.\n";

  bConsoleAttached = true;
}

void Config::DettachConsole() {
  fclose(f);
  FreeConsole();
  bConsoleAttached = false;
}

void Config::PrintToConsole(const std::string &s) {
  if (!bConsoleAttached)
    return;
  std::cout << s << std::endl;
}
