// clang-format off
#include "pch.h"
#include "includes/config.h"
#include <SDK/DD_Basic.hpp>
#include <SDK/DD_UDKGame_classes.hpp>
#include <fstream>
#include <regex>
#include <variant>
// clang-format on
Config config;
// Config::Config() : logFileName("log.txt"), logger(logFileName) {}
Config::Config() : logFileName("log.txt"), logger(logFileName) {}

Config::~Config() {}

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
  REGISTER_HOOKED_OBJECT("DunDefTreasureChest", 
                           OpenChest);


  // TODO: register keybinds needs to be changed in a way that handles a single point of definition
  RegisterKeybind("Toggle menu",Config::KeyBinds::ToggleKey,519,[this](){bShowMenu = !bShowMenu;});
  RegisterKeybind("End menu",Config::KeyBinds::EndKey,520,[this](){bEndMenu = true;});
  RegisterKeybind("Teleport players",Config::KeyBinds::TeleportPlayers,521,[this](){bTeleportPlayers = !bTeleportPlayers;});
  RegisterKeybind("Vacuum pos",Config::KeyBinds::UpdateVacuumPos,522,[this](){SetVacPos(GetPlayerPos());});
  RegisterKeybind("No clip",Config::KeyBinds::ToggleNoClipKeybind,523,[this](){bNoClip = !bNoClip;});

  bool invert = !bPlayerGodMode;
  RegisterBlockedFunction("Function DunDefPlayerController.Dead.BeginState", invert);
  RegisterBlockedFunction("Function UDKGame.DunDefPlayer.Dying.BeginState", invert);
  RegisterBlockedFunction("Function UDKGame.DunDefPlayerController.JumpPressed", bShowMenu);
  RegisterBlockedFunction("Function UDKGame.DunDefPlayerController.PlayerWalking.PlayerTick", bShowMenu);

  // clang-format on

  GetKeybinds();
  SetupFilter();

  return true;
}

void Config::BlockInputInMenu(PROCESS_EVENT_ARGS) {
  if (bShowMenu)
    return;
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

  if (bLoggingToFile)
    CleanLog();

  return true;
}

void Config::RegisterHookedFunction(
    const std::string &key, std::function<void(PROCESS_EVENT_ARGS)> func) {
  hookedFuncMap[key] = func;
}

void Config::RegisterHookedObject(
    // if you call a class method of obj it will enter an infinite loop
    // the caller must account for that
    const std::string &key, std::function<void(PROCESS_EVENT_ARGS)> func) {
  hookedObjects[key] = func;
}

void Config::RegisterBlockedFunction(const std::string &key, bool &flag) {
  blockedFuncMap[key] = &flag;
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

  auto pMapInfo = ((Classes::UDunDefMapInfo *)(GetWorldInfo()->MyMapInfo));
  if (pMapInfo->IsLoadingLevel)
    return;

  // noclip
  NoClip();

  // unlock all achievements
  if (bUnlockAllAchievments) {
    UnlockAllAchievements();
  }

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
  Classes::ADunDefPlayerController *pController = GetADunDefPlayerController();
  if (!pController)
    return;

  // unlimited mana for towers
  if (bUnlimitedManaTowers)
    pController->ManaPower = config.iManaForTowers;

  // unlimited mana for shops
  if (bUnlimitedManaShop) {
    Classes::FHighDigitInt tmp = {1, 1, 1, 1};
    pController->SetBankedMana(tmp, 0, 1);
  }

  // god mode
  auto pWorld = GetGameInfo();
  if (pWorld) {
    pWorld->bPlayersAreInvincible = bPlayerGodMode;
    pWorld->bCrystalCoreInvincible = bPlayerGodMode;
    pController->bGodMode = bPlayerGodMode;
    pWorld->bPlayersAreInvincible = bPlayerGodMode;
  }

  // spawn enemys
  std::set<Classes::UObject *> templates = GetEnemyTemplates();
  for (size_t i = 0; i < qEnemysToSpawn.size(); i++) {
    auto front = qEnemysToSpawn.front();
    qEnemysToSpawn.pop();
    SpawnEnemyAt(front, vacPos);
  }

  // auto ready
  if (bAutoReady && !pMapInfo->IsLobbyLevel) {
    pController->ActivateCrystal();
  }
}

bool Config::RenameHero(const std::string &newName) {
  auto pPlayerController = GetADunDefPlayerController();

  if (!pPlayerController)
    return false;

  auto pPlayerHero = pPlayerController->GetHero(false);

  if (!pPlayerHero)
    return false;

  std::wstring ws = std::wstring(newName.begin(), newName.end());
  Classes::FString s = Classes::FString(ws.c_str());

  pPlayerHero->SetName(s);

  return true;
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

void Config::OpenChest(PROCESS_EVENT_ARGS) {
  if (pFunction->GetName().find("Tick") == std::string::npos)
    return;
  auto pPawn = GetPlayerPawn();
  if (bAutoOpenChest && pPawn) {
    ((Classes::ADunDefTreasureChest *)obj)->Bump(pPawn, nullptr, {0, 0, 0});
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
  auto pWorld = config.GetGameInfo();
  if (!playerController || !pWorld)
    return false;

  playerController->bGodMode = bPlayerGodMode;
  pWorld->bPlayersAreInvincible = bPlayerGodMode;
  ToggleCrystalGodMode();

  return bPlayerGodMode;
}

bool Config::ToggleCrystalGodMode() {
  // This function is not needed because TogglePlayerGodMode()
  // applys both to the player and the crystal
  Classes::AMain *gameInfo = GetGameInfo();

  if (!gameInfo)
    return false;

  bCrystalGodMode = !bCrystalGodMode;
  gameInfo->bCrystalCoreInvincible = bCrystalGodMode;

  return gameInfo->bCrystalCoreInvincible;
}

bool Config::UnlockAllAchievements() {
  auto pAchievementManager = config.GetAchievementManager();
  auto pController = config.GetADunDefPlayerController();

  if (!pAchievementManager || !pController)
    return false;

  for (size_t i = 0; i < pAchievementManager->AchievementEntries.Num(); i++) {
    if (!pAchievementManager->AchievementEntries.IsValidIndex(i))
      continue;

    pAchievementManager->DoUnlockAchivement(
        pController, pAchievementManager->AchievementEntries[i].AchievementId,
        1, 0, 0, 0);
  }
  bUnlockAllAchievments = false;
  return true;
}

bool Config::TurnOffPlayerGodMod() {
  Classes::ADunDefPlayerController *playerController =
      GetADunDefPlayerController();

  if (!playerController)
    return false;

  playerController->bGodMode = false;

  return bPlayerGodMode;
}

bool Config::HandleLootFilterStat(StatFilter &stat,
                                  Classes::UHeroEquipment &item) {
  if (!stat.enabled)
    return true;

  if (std::holds_alternative<int>(stat.min)) {
    if (std::get<int>(stat.min) < std::get<int>(stat.memberGetter(&item)) &&
        std::get<int>(stat.max) > std::get<int>(stat.memberGetter(&item)))
      return true;
  } else {
    if (std::get<float>(stat.min) < std::get<float>(stat.memberGetter(&item)) &&
        std::get<float>(stat.max) > std::get<float>(stat.memberGetter(&item)))
      return true;
  }

  return false;
}

bool Config::ShouldLootItem(Classes::UHeroEquipment *item) {
  if (!item)
    return false;

  // always loot above a certain quality
  if (bAutoLootULT &&
      item->NameIndex_QualityDescriptor >= itemFilterQualityULT + 12)
    return true;

  // if any of the stats are below the filter and the filter is valid and
  // enabled
  for (int i = 0; i < 0xB; i++) {

    if (!lootFilterEnabled[i])
      continue;

    int curstat = item->StatModifiers[i];
    if (lootFilterMin[i] > curstat || curstat > lootFilterMax[i])
      return false;
  }

  for (auto var : lootStatFilters) {
    if (!HandleLootFilterStat(var, *item))
      return false;
  }

  // check for item filter
  if (itemFilterQuality &&
      item->NameIndex_QualityDescriptor < itemFilterQuality + 12)
    return false;

  return true;
}

void Config::SpawnEnemyAt(Classes::ADunDefEnemy *enemy, Classes::FVector pos) {
  auto pMain = GetGameInfo();
  auto pSpawner = GetWaveSpawner();

  if (!pSpawner || !pMain)
    return;

  pMain->WaveSpawnerCreateEnemy(pSpawner, enemy, pos, {0, 0, 0});
}

void Config::SpawnEnemyAt(std::string s, Classes::FVector pos) {
  auto pEnemy = (Classes::ADunDefEnemy *)GetInstanceByName(
      Classes::ADunDefEnemy::StaticClass(), s);
  if (pEnemy)
    SpawnEnemyAt(pEnemy, pos);
}

Classes::ADunDefEnemy *Config::GetEnemyTemplate(std::string s) {
  return (Classes::ADunDefEnemy *)GetInstanceByName(
      Classes::ADunDefEnemy::StaticClass(), s);
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
  Classes::AWorldInfo *worldinfo = nullptr;

  Classes::UEngine *engine = GetEngine();
  if (!engine)
    return nullptr;

  worldinfo = engine->STATIC_GetCurrentWorldInfo();
  // PrintToConsole("Found world info.");

  return worldinfo;
}

Classes::UDunDefViewportClient *Config::GetViewportClient() {
  return ((Classes::UDunDefViewportClient
               *)(Classes::UDunDefViewportClient::StaticClass()))
      ->STATIC_GetViewportClient();
}

Classes::AMain *Config::GetGameInfo() {
  Classes::AWorldInfo *worldInfo = GetWorldInfo();

  if (worldInfo == nullptr || worldInfo->Game == nullptr)
    return nullptr;

  return (Classes::AMain *)(worldInfo->Game);
}

Classes::ADunDefGameReplicationInfo *Config::GetGRI() {

  auto pWorldInfo = GetWorldInfo();
  if (pWorldInfo == nullptr)
    return nullptr;

  return (Classes::ADunDefGameReplicationInfo *)pWorldInfo->GRI;
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

void Config::KillPawn(Classes::ADunDefDamageableTarget *pawn) {
  Classes::FVector tempVec = Classes::FVector();
  Classes::FTraceHitInfo tempHit = Classes::FTraceHitInfo();
  pawn->TakeDamage(pawn->MaxHealth, NULL, tempVec, tempVec, NULL, tempHit, NULL,
                   NULL);
}

void Config::KillAllEnemyPawns() {

  auto pWorld = config.GetGameInfo();
  auto pInfo = config.GetWorldInfo();

  if (!pWorld || pWorld->TargetableActors.Data == nullptr || pInfo == nullptr)
    return;

  for (size_t i = 0; i < pWorld->TargetableActors.Num(); i++) {
    if (!pWorld->TargetableActors.IsValidIndex(i))
      continue;

    auto pActor = pWorld->TargetableActors[i];
    if (pActor == nullptr || pActor->IsPlayerOwned())
      continue;

    // wait 1 second for object to init before killing it
    if (pActor->CreationTime + 5 < pInfo->TimeSeconds)
      if (((Classes::ADunDefDamageableTarget *)pActor)->TargetingTeam ==
          TARGET_TEAM::PLAYERS) {
        config.KillPawn(
            reinterpret_cast<Classes::ADunDefDamageableTarget *>(pActor));
      }
  }

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

bool Config::GiveItem(Classes::UHeroEquipment *_item) {

  Classes::UHeroEquipment *item =
      (Classes::UHeroEquipment *)(_item->GetBaseArchetype());
  CopyItem(item, _item);

  Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *pItemGiver =
      GetEquipmentGiver();
  Classes::ADunDefPlayerController *pController = GetADunDefPlayerController();

  config.LogToFile("Giving item " + item->GetName());

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

  config.LogToFile("Gave item " + item->GetName());
  return true;
}

void Config::CopyItem(Classes::UHeroEquipment *to,
                      Classes::UHeroEquipment *from) {
  memcpy(to->StatModifiers, from->StatModifiers,
         11 * sizeof(int)); // to->StatModifiers = from->StatModifiers;
  memcpy(to->DamageReductions, from->DamageReductions,
         4 * sizeof(Classes::FDamageReduction)); // to->DamageReductions =
                                                 // from->DamageReductions;
  to->WeaponDamageBonus = from->WeaponDamageBonus;
  to->WeaponNumberOfProjectilesBonus = from->WeaponNumberOfProjectilesBonus;
  to->WeaponSpeedOfProjectilesBonus = from->WeaponSpeedOfProjectilesBonus;
  to->WeaponAdditionalDamageType = from->WeaponAdditionalDamageType;
  to->WeaponAdditionalDamageAmount = from->WeaponAdditionalDamageAmount;
  to->WeaponDrawScaleMultiplier = from->WeaponDrawScaleMultiplier;
  to->MaxRandomElementalDamageMultiplier =
      from->MaxRandomElementalDamageMultiplier;
  to->WeaponSwingSpeedMultiplier = from->WeaponSwingSpeedMultiplier;
  to->WeaponReloadSpeedBonusUse = from->WeaponReloadSpeedBonusUse;
  to->bIgnoreLevelRequirement = from->bIgnoreLevelRequirement;
  to->WeaponKnockbackBonusUse = from->WeaponKnockbackBonusUse;
  to->bCanBeUpgraded = from->bCanBeUpgraded;
  to->AllowRenamingAtMaxUpgrade = from->AllowRenamingAtMaxUpgrade;
  to->bForceUseParentTemplate = from->bForceUseParentTemplate;
  to->WeaponAltDamageBonusUse = from->WeaponAltDamageBonusUse;
  to->bDisableTheRandomization = from->bDisableTheRandomization;
  to->WeaponBlockingBonusUse = from->WeaponBlockingBonusUse;
  to->bDontCalculateLevelRequirement = from->bDontCalculateLevelRequirement;
  to->WeaponClipAmmoBonusUse = from->WeaponClipAmmoBonusUse;
  to->bDontUseLevelName = from->bDontUseLevelName;
  to->WeaponChargeSpeedBonusUse = from->WeaponChargeSpeedBonusUse;
  to->WeaponShotsPerSecondBonusUse = from->WeaponShotsPerSecondBonusUse;
  to->UseWeaponCoreStats = from->UseWeaponCoreStats;
  to->bIsLocked = from->bIsLocked;
  to->bWasAttached = from->bWasAttached;
  to->bIsShopEquipment = from->bIsShopEquipment;
  to->bIsSecondary = from->bIsSecondary;
  to->bIsNameOnlineVerified = from->bIsNameOnlineVerified;
  to->bIsForgerNameOnlineVerified = from->bIsForgerNameOnlineVerified;
  to->bWasAddedToDefenderStore = from->bWasAddedToDefenderStore;
  to->WeaponReloadSpeedBonus = from->WeaponReloadSpeedBonus;
  to->WeaponKnockbackBonus = from->WeaponKnockbackBonus;
  to->WeaponAltDamageBonus = from->WeaponAltDamageBonus;
  to->WeaponBlockingBonus = from->WeaponBlockingBonus;
  to->WeaponClipAmmoBonus = from->WeaponClipAmmoBonus;
  to->AdditionalAllowedUpgradeResistancePoints =
      from->AdditionalAllowedUpgradeResistancePoints;
  to->RequirementLevelOverride = from->RequirementLevelOverride;
  to->WeaponChargeSpeedBonus = from->WeaponChargeSpeedBonus;
  to->WeaponShotsPerSecondBonus = from->WeaponShotsPerSecondBonus;
  to->NameIndex_Base = from->NameIndex_Base;
  to->NameIndex_QualityDescriptor = from->NameIndex_QualityDescriptor;
  to->NameIndex_DamageReduction = from->NameIndex_DamageReduction;
  to->PrimaryColorSet = from->PrimaryColorSet;
  to->SecondaryColorSet = from->SecondaryColorSet;
  to->bCantBeDropped = from->bCantBeDropped;
  to->bCantBeSold = from->bCantBeSold;
  to->bAutoLockInItemBox = from->bAutoLockInItemBox;
  to->bDidOnetimeEffect = from->bDidOnetimeEffect;
  to->ManualLR = from->ManualLR;
  to->EquipmentType = from->EquipmentType;
  to->PrimaryColorSets = from->PrimaryColorSets;
  to->SecondaryColorSets = from->SecondaryColorSets;
  to->PrimaryColorOverride = from->PrimaryColorOverride;
  to->SecondaryColorOverride = from->SecondaryColorOverride;
  to->MaximumSellWorth = from->MaximumSellWorth;
  to->MinimumSellWorth = from->MinimumSellWorth;
  to->ShopMinimumSellWorth = from->ShopMinimumSellWorth;
  to->MaxEquipmentLevel = from->MaxEquipmentLevel;
  to->UserEquipmentName = from->UserEquipmentName;
  to->EquipmentDescription = from->EquipmentDescription;
  to->UserForgerName = from->UserForgerName;
  to->DroppedLocation = from->DroppedLocation;
  to->FolderID = from->FolderID;
  to->Level = from->Level;
  to->StoredMana = from->StoredMana;
  to->UserID = from->UserID;
  to->MyRatingPercent = from->MyRatingPercent;
  to->MyRating = from->MyRating;
  // to->EquipmentID1 = from->EquipmentID1;
  // to->EquipmentID2 = from->EquipmentID2;
  to->EquipmentName = from->EquipmentName;
  memcpy(
      to->StatModifierRandomizers, from->StatModifierRandomizers,
      11 * sizeof(
               Classes::FEG_StatRandomizer)); // to->StatModifierRandomizers =
                                              // from->StatModifierRandomizers;
  to->bForceRandomDLCColor = from->bForceRandomDLCColor;
  to->bUseShotsPerSecondRandomizerMult = from->bUseShotsPerSecondRandomizerMult;
  to->bForceAllowDropping = from->bForceAllowDropping;
  to->bForceAllowSelling = from->bForceAllowSelling;
  to->bDoTranscendentLevelBoost = from->bDoTranscendentLevelBoost;
  to->bUseLevelRequirementOverrides = from->bUseLevelRequirementOverrides;
  to->bForceRandomizerWithMinEquipmentLevel =
      from->bForceRandomizerWithMinEquipmentLevel;
  to->bAllowSellingToExceedSoftManaCap = from->bAllowSellingToExceedSoftManaCap;
  to->bCanBeEquipped = from->bCanBeEquipped;
  to->bForceUseEquipmentDrawScale = from->bForceUseEquipmentDrawScale;
  to->bDistributeManaUponDroppedDestruction =
      from->bDistributeManaUponDroppedDestruction;
  to->bAllowDroppedDestruction = from->bAllowDroppedDestruction;
  to->bDontHideEquipmentAttachmentInFPV =
      from->bDontHideEquipmentAttachmentInFPV;
  to->bEncumberHero = from->bEncumberHero;
  to->bIconUseEquipmentRating = from->bIconUseEquipmentRating;
  to->bPlayerShopForceToMinimumSellWorth =
      from->bPlayerShopForceToMinimumSellWorth;
  to->bMaxEquipLevelUseAltCalc = from->bMaxEquipLevelUseAltCalc;
  to->AllowNameRandomization = from->AllowNameRandomization;
  to->OnlyRandomizeBaseName = from->OnlyRandomizeBaseName;
  to->bNoNegativeRandomizations = from->bNoNegativeRandomizations;
  to->UsesEquipmentAttachments = from->UsesEquipmentAttachments;
  to->UseColorSets = from->UseColorSets;
  to->RandomizeColorSets = from->RandomizeColorSets;
  to->bUsePreviewZOffsetting = from->bUsePreviewZOffsetting;
  to->bUseSelectionPreviewScale = from->bUseSelectionPreviewScale;
  to->bUsePawnWeaponDamageCallback = from->bUsePawnWeaponDamageCallback;
  to->bUsePawnDamageCallback = from->bUsePawnDamageCallback;
  to->bCantSave = from->bCantSave;
  to->bCantPutInItemBox = from->bCantPutInItemBox;
  to->bSetRandomizerMultipliers = from->bSetRandomizerMultipliers;
  to->bPlayerShopPurchasePending = from->bPlayerShopPurchasePending;
  to->bCanModifyParticleColour = from->bCanModifyParticleColour;
  to->bUseHighDigitManaTokenValue = from->bUseHighDigitManaTokenValue;
  to->RandomizerStatModifierGoNegativeThreshold =
      from->RandomizerStatModifierGoNegativeThreshold;
  to->RandomizerStatModifierGoNegativeMultiplier =
      from->RandomizerStatModifierGoNegativeMultiplier;
  to->RandomizerStatModifierGoNegativeChance =
      from->RandomizerStatModifierGoNegativeChance;
  to->EquipmentWeaponTemplate = from->EquipmentWeaponTemplate;
  to->RandomizerQualityMultiplier = from->RandomizerQualityMultiplier;
  to->LevelRequirementRatingOffset = from->LevelRequirementRatingOffset;
  to->MinElementalDamageIncreasePerLevel =
      from->MinElementalDamageIncreasePerLevel;
  to->HighLevelRequirementsRatingThreshold =
      from->HighLevelRequirementsRatingThreshold;
  to->MaximumSellWorthUpgradeDepreciationFactor =
      from->MaximumSellWorthUpgradeDepreciationFactor;
  to->TranscendentLevelBoostAmount = from->TranscendentLevelBoostAmount;
  to->TranscendentLevelBoostRandomizerPower =
      from->TranscendentLevelBoostRandomizerPower;
  to->HighResaleWorthPower = from->HighResaleWorthPower;
  to->SupremeLevelBoostAmount = from->SupremeLevelBoostAmount;
  to->SupremeLevelBoostRandomizerPower = from->SupremeLevelBoostRandomizerPower;
  to->UltimateLevelBoostAmount = from->UltimateLevelBoostAmount;
  to->UltimateLevelBoostRandomizerPower =
      from->UltimateLevelBoostRandomizerPower;
  to->LevelRequirementOverrides = from->LevelRequirementOverrides;
  to->WeaponDamageBonusRandomizer = from->WeaponDamageBonusRandomizer;
  to->OneTime_ExpBonus = from->OneTime_ExpBonus;
  to->HighLevelThreshold = from->HighLevelThreshold;
  to->MaxHeroStatValue = from->MaxHeroStatValue;
  to->TranscendentMaxHeroStatValue = from->TranscendentMaxHeroStatValue;
  to->SupremeMaxHeroStatValue = from->SupremeMaxHeroStatValue;
  to->MinTranscendentLevel = from->MinTranscendentLevel;
  to->MinSupremeLevel = from->MinSupremeLevel;
  to->UltimateMaxHeroStatValue = from->UltimateMaxHeroStatValue;
  to->UltimatePlusMaxHeroStatValue = from->UltimatePlusMaxHeroStatValue;
  to->MinUltimateLevel = from->MinUltimateLevel;
  to->DescriptionStringOriginalReplacements =
      from->DescriptionStringOriginalReplacements;
  to->DescriptionStringNewReplacements = from->DescriptionStringNewReplacements;
  to->WeaponAltDamageBonusRandomizer = from->WeaponAltDamageBonusRandomizer;
  memcpy(
      to->DamageReductionRandomizers, from->DamageReductionRandomizers,
      4 * sizeof(Classes::
                     FEG_StatRandomizer)); // to->DamageReductionRandomizers =
                                           // from->DamageReductionRandomizers;
  to->WeaponClipAmmoBonusRandomizer = from->WeaponClipAmmoBonusRandomizer;
  to->WeaponReloadSpeedBonusRandomizer = from->WeaponReloadSpeedBonusRandomizer;
  to->WeaponKnockbackBonusRandomizer = from->WeaponKnockbackBonusRandomizer;
  to->WeaponChargeSpeedBonusRandomizer = from->WeaponChargeSpeedBonusRandomizer;
  to->WeaponBlockingBonusRandomizer = from->WeaponBlockingBonusRandomizer;
  to->MaxEquipmentLevelRandomizer = from->MaxEquipmentLevelRandomizer;
  to->SellWorthLinearFactor = from->SellWorthLinearFactor;
  to->SellWorthExponentialFactor = from->SellWorthExponentialFactor;
  to->SellWorthMin = from->SellWorthMin;
  to->SellWorthMax = from->SellWorthMax;
  to->SellRatingExponent = from->SellRatingExponent;
  to->SellWorthEquipmentRatingBase = from->SellWorthEquipmentRatingBase;
  to->ElementalDamageMultiplier = from->ElementalDamageMultiplier;
  to->ShopSellWorthLinearFactor = from->ShopSellWorthLinearFactor;
  to->ShopSellWorthExponentialFactor = from->ShopSellWorthExponentialFactor;
  to->ShopSellWorthMin = from->ShopSellWorthMin;
  to->ShopSellWorthMax = from->ShopSellWorthMax;
  to->ShopSellRatingExponent = from->ShopSellRatingExponent;
  to->ShopSellWorthEquipmentRatingBase = from->ShopSellWorthEquipmentRatingBase;
  to->ShopSellWorthWeaponMultiplier = from->ShopSellWorthWeaponMultiplier;
  to->ShopSellWorthWeaponExponentialFactorMult =
      from->ShopSellWorthWeaponExponentialFactorMult;
  to->AltDamageRandomizerMult = from->AltDamageRandomizerMult;
  to->MaxShopSellWorth = from->MaxShopSellWorth;
  to->ShopSellWorthMinWeaponMultiplier = from->ShopSellWorthMinWeaponMultiplier;
  to->ShopSellWorthMaxWeaponMultiplier = from->ShopSellWorthMaxWeaponMultiplier;
  to->ShopSellWorthRatingWeaponMultiplier =
      from->ShopSellWorthRatingWeaponMultiplier;
  to->ManaCostPerLevelMaxQualityMultiplierAdditional =
      from->ManaCostPerLevelMaxQualityMultiplierAdditional;
  to->HighLevelManaCostPerLevelMaxQualityMultiplierAdditional =
      from->HighLevelManaCostPerLevelMaxQualityMultiplierAdditional;
  to->ManaCostPerLevelExponentialFactorAdditional =
      from->ManaCostPerLevelExponentialFactorAdditional;
  to->HighLevelManaCostPerLevelExponentialFactorAdditional =
      from->HighLevelManaCostPerLevelExponentialFactorAdditional;
  to->WeaponDrawScaleRandomizerExtraMultiplier =
      from->WeaponDrawScaleRandomizerExtraMultiplier;
  to->EquipLevelRequirements = from->EquipLevelRequirements;
  to->ElementalDamageIncreasePerLevelMultiplier =
      from->ElementalDamageIncreasePerLevelMultiplier;
  to->DamageIncreasePerLevelMultiplier = from->DamageIncreasePerLevelMultiplier;
  to->UltimateDamageIncreasePerLevelMultiplier =
      from->UltimateDamageIncreasePerLevelMultiplier;
  to->MaxElementalDamageIncreasePerLevel =
      from->MaxElementalDamageIncreasePerLevel;
  to->MaxDamageIncreasePerLevel = from->MaxDamageIncreasePerLevel;
  to->UltimateMaxDamageIncreasePerLevel =
      from->UltimateMaxDamageIncreasePerLevel;
  to->SelectionPreviewScaleMultiplier = from->SelectionPreviewScaleMultiplier;
  to->AltDamageIncreasePerLevelMultiplier =
      from->AltDamageIncreasePerLevelMultiplier;
  to->AltMaxDamageIncreasePerLevel = from->AltMaxDamageIncreasePerLevel;
  to->PrimaryColorOverrideMultiplier = from->PrimaryColorOverrideMultiplier;
  to->SecondaryColorOverrideMultiplier = from->SecondaryColorOverrideMultiplier;
  to->GlobalSelectionPreviewScaleMultiplier =
      from->GlobalSelectionPreviewScaleMultiplier;
  to->ShopSellWorthMaxExponentAbsolute = from->ShopSellWorthMaxExponentAbsolute;
  to->EquipmentRatingPercentBase = from->EquipmentRatingPercentBase;
  to->WeaponEquipmentRatingPercentBase = from->WeaponEquipmentRatingPercentBase;
  to->QualityShopCostMultipliers = from->QualityShopCostMultipliers;
  to->QualityShopCostCaps = from->QualityShopCostCaps;
  to->WeaponKnockbackMax = from->WeaponKnockbackMax;
  to->MaxNonTranscendentStatRollValue = from->MaxNonTranscendentStatRollValue;
  to->MinDamageBonus = from->MinDamageBonus;
  to->MinEquipmentLevels = from->MinEquipmentLevels;
  to->LevelRequirementOffset = from->LevelRequirementOffset;
  to->WeaponShotsPerSecondBonusRandomizer =
      from->WeaponShotsPerSecondBonusRandomizer;
  to->WeaponNumberOfProjectilesQualityBaseline =
      from->WeaponNumberOfProjectilesQualityBaseline;
  to->DamageReductionUpgradeInterval = from->DamageReductionUpgradeInterval;
  to->WeaponNumberOfProjectilesBonusRandomizer =
      from->WeaponNumberOfProjectilesBonusRandomizer;
  to->WeaponSpeedOfProjectilesBonusRandomizer =
      from->WeaponSpeedOfProjectilesBonusRandomizer;
  to->WeaponAdditionalDamageAmountRandomizer =
      from->WeaponAdditionalDamageAmountRandomizer;
  to->WeaponDrawScaleMultiplierRandomizer =
      from->WeaponDrawScaleMultiplierRandomizer;
  to->DroppedEquipmentTemplates = from->DroppedEquipmentTemplates;
  to->weaponType = from->weaponType;
  to->EquipmentSetID = from->EquipmentSetID;
  to->AccessoryRequirements = from->AccessoryRequirements;
  to->ManaCostPerLevelLinearFactor = from->ManaCostPerLevelLinearFactor;
  to->IconColorMultPrimary = from->IconColorMultPrimary;
  to->IconColorMultSecondary = from->IconColorMultSecondary;
  to->ManaCostPerLevelExponentialFactor =
      from->ManaCostPerLevelExponentialFactor;
  to->ManaCostPerLevelMinQualityMultiplier =
      from->ManaCostPerLevelMinQualityMultiplier;
  to->ManaCostPerLevelMaxQualityMultiplier =
      from->ManaCostPerLevelMaxQualityMultiplier;
  to->RespawnTimeMultiplier = from->RespawnTimeMultiplier;
  to->TotalRandomizerMultiplier = from->TotalRandomizerMultiplier;
  to->EquipmentAttachmentInfos = from->EquipmentAttachmentInfos;
  to->LevelString = from->LevelString;
  to->ForgedByDescription = from->ForgedByDescription;
  to->PrimaryColorSetIntensity = from->PrimaryColorSetIntensity;
  to->PrimaryColorSetPow = from->PrimaryColorSetPow;
  to->SecondaryColorSetIntensity = from->SecondaryColorSetIntensity;
  to->SecondaryColorSetPow = from->SecondaryColorSetPow;
  to->WeaponDrawScaleGlobalMultiplier = from->WeaponDrawScaleGlobalMultiplier;
  to->IconScaleMultiplier = from->IconScaleMultiplier;
  to->FullEquipmentSetStatMultiplier = from->FullEquipmentSetStatMultiplier;
  to->MythicalFullEquipmentSetStatMultiplier =
      from->MythicalFullEquipmentSetStatMultiplier;
  to->TranscendentFullEquipmentSetStatMultiplier =
      from->TranscendentFullEquipmentSetStatMultiplier;
  to->SupremeFullEquipmentSetStatMultiplier =
      from->SupremeFullEquipmentSetStatMultiplier;
  to->UltimateFullEquipmentSetStatMultiplier =
      from->UltimateFullEquipmentSetStatMultiplier;
  to->WeaponDamageDisplayValueScale = from->WeaponDamageDisplayValueScale;
  to->RatingPercentForLevelUpCostExponent =
      from->RatingPercentForLevelUpCostExponent;
  to->WeaponDamageBonusRandomizerMultiplier =
      from->WeaponDamageBonusRandomizerMultiplier;
  to->AdditionalWeaponDamageBonusRandomizerMultiplier =
      from->AdditionalWeaponDamageBonusRandomizerMultiplier;
  to->SellWorthMultiplierLevelBase = from->SellWorthMultiplierLevelBase;
  to->SellWorthMultiplierLevelMin = from->SellWorthMultiplierLevelMin;
  to->SellWorthMultiplierLevelMax = from->SellWorthMultiplierLevelMax;
  to->ExtraEquipmentColorMultiplier = from->ExtraEquipmentColorMultiplier;
  to->ExtraEquipmentColorMultiplierMaterialParamName =
      from->ExtraEquipmentColorMultiplierMaterialParamName;
  to->PreviewMinOffsetScale = from->PreviewMinOffsetScale;
  to->PreviewMinOffsetZ = from->PreviewMinOffsetZ;
  to->PreviewMaxOffsetScale = from->PreviewMaxOffsetScale;
  to->PreviewMaxOffsetZ = from->PreviewMaxOffsetZ;
  to->EquipmentIconMat = from->EquipmentIconMat;
  to->AdditionalDescription = from->AdditionalDescription;
  to->DamageDescription = from->DamageDescription;
  to->EquipmentStatNames = from->EquipmentStatNames;
  to->EquipmentStatDescriptions = from->EquipmentStatDescriptions;
  to->EquipmentStatIcons = from->EquipmentStatIcons;
  to->IconColorAddPrimary = from->IconColorAddPrimary;
  to->IconColorAddSecondary = from->IconColorAddSecondary;
  to->BaseForgerName = from->BaseForgerName;
  to->ComparisonSimilarRatingAllowance = from->ComparisonSimilarRatingAllowance;
  to->ComparisonRatingExponent = from->ComparisonRatingExponent;
  to->PlayerSpeedMultiplier = from->PlayerSpeedMultiplier;
  to->PlayerGravityMultiplier = from->PlayerGravityMultiplier;
  to->GivenEquipmentMessageColor = from->GivenEquipmentMessageColor;
  to->GivenEquipmentMessageString = from->GivenEquipmentMessageString;
  to->RequiredLevelString = from->RequiredLevelString;
  to->RequiredClassString = from->RequiredClassString;
  to->EquipSound = from->EquipSound;
  to->PreviewTranslationOffset = from->PreviewTranslationOffset;
  to->ProtonChargeBlastDamageMultiplier =
      from->ProtonChargeBlastDamageMultiplier;
  to->BackupUserForgerName = from->BackupUserForgerName;
  to->BackupUserEquipmentName = from->BackupUserEquipmentName;
  to->MyNonUpgradeLevelRating = from->MyNonUpgradeLevelRating;
  to->PlayerShopSellAmount = from->PlayerShopSellAmount;
  to->PlayerShopSellAmountHDI = from->PlayerShopSellAmountHDI;
  to->DebugPreTranscendentEquipmentRating =
      from->DebugPreTranscendentEquipmentRating;
  to->RandomBaseNames = from->RandomBaseNames;
  to->DamageReductionNames = from->DamageReductionNames;
  to->QualityDescriptorNames = from->QualityDescriptorNames;
  to->QualityDescriptorRealNames = from->QualityDescriptorRealNames;
  to->MinWeaponScale = from->MinWeaponScale;
  to->WeaponDamageMultiplier = from->WeaponDamageMultiplier;
  to->WeaponAltDamageMultiplier = from->WeaponAltDamageMultiplier;
  to->CosmeticSet = from->CosmeticSet;
  to->MaxLevelRangeDifficultyArray = from->MaxLevelRangeDifficultyArray;
  to->compareSets = from->compareSets;
  to->EquipmentHero = from->EquipmentHero;
}

Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *Config::GetEquipmentGiver() {
  Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *obj;
  obj = (Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *)GetInstanceOf(
      Classes::UDunDef_SeqAct_GiveEquipmentToPlayers::StaticClass());
  config.LogToFile(
      "Found UDunDef_SeqAct_GiveEquipmentToPlayers for GetEquipmentGiver()");
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

Classes::UDunDefAchievementManager *Config::GetAchievementManager() {

  static Classes::UDunDefAchievementManager *obj = nullptr;
  if (!obj)
    obj = ((Classes::UDunDefAchievementManager *)
               Classes::UDunDefAchievementManager::StaticClass())
              ->STATIC_GetAchievementManager();

  return obj;
}

Classes::UDunDef_SeqAct_EnemyWaveSpawner *Config::GetWaveSpawner() {
  static Classes::UDunDef_SeqAct_EnemyWaveSpawner *obj = nullptr;

  if (!obj)
    obj = (Classes::UDunDef_SeqAct_EnemyWaveSpawner *)GetInstanceOf(
        Classes::UDunDef_SeqAct_EnemyWaveSpawner::StaticClass());

  return obj;
}

std::set<Classes::UObject *> Config::GetEnemyTemplates() {
  // TODO: THERE IS A BETTER WAY TO DO THIS

  static std::set<Classes::UObject *> rSet = {};
  sEnemyTemplates.clear();

  auto enemys = GetAllInstanceOf(Classes::ADunDefEnemy::StaticClass());

  for (auto e : enemys) {

    if (ContainsNumber(e->GetName()))
      continue;

    rSet.insert(e);
    sEnemyTemplates.insert(e->GetName());
  }

  return rSet;
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

  std::sort(retVec.begin(), retVec.end());

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

bool Config::GiveAllItems() {
  for (size_t i = 0; i < vHeroEquipmentStrings.size(); i++) {
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
  std::cout << s << "\n";
}

void Config::InitLog() {
  bLoggingToFile = true;
  logger.openfile();
  logger.log("Init logger.");
}

void Config::CleanLog() {
  bLoggingToFile = false;
  logger.log("Cleanup()");
  logger.closefile();
}

void Config::LogToFile(const std::string &s) {
  if (bLoggingToFile)
    logger.log(s);
}

void Config::SetupFilter() {
  // clang-format off
  //vProcessEventFilter
      vProcessEventFunctionFilter["Function Core.Object.EndState"] = true;
      vProcessEventFunctionFilter["Function DunDefArabia.DunDefDjinnManager.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.AllowSpawn"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.AnimTreeUpdated"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.Attach"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.BecomeViewTarget"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.EndViewTarget"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.GainedChild"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.InterpolationChanged"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.InterpolationFinished"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.InterpolationStarted"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.IsPlayerOwned"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.ModifyHearSoundComponent"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.OnDestroy"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.PhysicsVolumeChange"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.PlayParticleEffect"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.PostInitAnimTree"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.PreBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.ReceivedNewEvent"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.SetInitialState"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.SpawnedByKismet"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.Touch"] = true;
      vProcessEventFunctionFilter["Function Engine.AnimNode.OnBecomeRelevant"] = true;
      vProcessEventFunctionFilter["Function Engine.AnimNode.OnCeaseRelevant"] = true;
      vProcessEventFunctionFilter["Function Engine.AnimNode.OnInit"] = true;
      vProcessEventFunctionFilter["Function Engine.AnimNotify_ViewShake.Notify"] = true;
      vProcessEventFunctionFilter["Function Engine.Camera.UpdateCamera"] = true;
      vProcessEventFunctionFilter["Function Engine.Canvas.Reset"] = true;
      vProcessEventFunctionFilter["Function Engine.Console.InputChar"] = true;
      vProcessEventFunctionFilter["Function Engine.Console.InputKey"] = true;
      vProcessEventFunctionFilter["Function Engine.DecalManager.DecalFinished"] = true;
      vProcessEventFunctionFilter["Function Engine.Emitter.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.EmitterPool.OnParticleSystemFinished"] = true;
      vProcessEventFunctionFilter["Function Engine.Engine.GetCurrentWorldInfo"] = true;
      vProcessEventFunctionFilter["Function Engine.GameInfo.OnStartOnlineGameComplete"] = true;
      vProcessEventFunctionFilter["Function Engine.GameInfo.Timer"] = true;
      vProcessEventFunctionFilter["Function Engine.GameInfoDataProvider.ProviderInstanceBound"] = true;
      vProcessEventFunctionFilter["Function Engine.GameReplicationInfo.ShouldShowGore"] = true;
      vProcessEventFunctionFilter["Function Engine.GameReplicationInfo.Timer"] = true;
      vProcessEventFunctionFilter["Function Engine.GameViewportClient.GetSubtitleRegion"] = true;
      vProcessEventFunctionFilter["Function Engine.GameViewportClient.LayoutPlayers"] = true;
      vProcessEventFunctionFilter["Function Engine.HeightFog.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.Interaction.PostRender"] = true;
      vProcessEventFunctionFilter["Function Engine.Interaction.Tick"] = true;
      vProcessEventFunctionFilter["Function Engine.InterpActor.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.InventoryManager.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.LocalPlayer.PreHUDRender"] = true;
      vProcessEventFunctionFilter["Function Engine.MatineeActor.Update"] = true;
      vProcessEventFunctionFilter["Function Engine.Pawn.BecomeViewTarget"] = true;
      vProcessEventFunctionFilter["Function Engine.Pawn.HeadVolumeChange"] = true;
      vProcessEventFunctionFilter["Function Engine.Pawn.IsPlayerPawn"] = true;
      vProcessEventFunctionFilter["Function Engine.Pawn.PostInitAnimTree"] = true;
      vProcessEventFunctionFilter["Function Engine.Pawn.PreBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.PhysicsVolume.ActorEnteredVolume"] = true;
      vProcessEventFunctionFilter["Function Engine.PhysicsVolume.ActorLeavingVolume"] = true;
      vProcessEventFunctionFilter["Function Engine.PhysicsVolume.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.ClientHearSound"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.ClientSetViewTarget"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.Destroyed"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.GetFOVAngle"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.HearSoundFinished"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.InitInputSystem"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.Kismet_ClientPlaySound"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.NotifyLanded"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.PreRender"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.ServerNotifyLoadedWorld"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.StartAltFire"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.StopAltFire"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.StopFire"] = true;
      vProcessEventFunctionFilter["Function Engine.Projectile.PreBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.SceneDataStore.Registered"] = true;
      vProcessEventFunctionFilter["Function Engine.SequenceEvent.RegisterEvent"] = true;
      vProcessEventFunctionFilter["Function Engine.SequenceOp.Activated"] = true;
      vProcessEventFunctionFilter["Function Engine.SequenceOp.Deactivated"] = true;
      vProcessEventFunctionFilter["Function Engine.SkeletalMeshActor.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.SkeletalMeshComponent.PlayParticleEffect"] = true;
      vProcessEventFunctionFilter["Function Engine.UIDataStore.Registered"] = true;
      vProcessEventFunctionFilter["Function Engine.UIDataStore.SubscriberAttached"] = true;
      vProcessEventFunctionFilter["Function Engine.UIDataStore.SubscriberDetached"] = true;
      vProcessEventFunctionFilter["Function Engine.UIDataStore.Unregistered"] = true;
      vProcessEventFunctionFilter["Function Engine.UIDynamicDataProvider.ProviderInstanceBound"] = true;
      vProcessEventFunctionFilter["Function Engine.UIDynamicDataProvider.ProviderInstanceUnbound"] = true;
      vProcessEventFunctionFilter["Function Engine.UIEvent.ShouldAlwaysInstance"] = true;
      vProcessEventFunctionFilter["Function Engine.UIEvent_SceneActivated.Deactivated"] = true;
      vProcessEventFunctionFilter["Function Engine.UIInteraction.GetLoginStatus"] = true;
      vProcessEventFunctionFilter["Function Engine.UIList.Initialized"] = true;
      vProcessEventFunctionFilter["Function Engine.UIList.OnStateChanged"] = true;
      vProcessEventFunctionFilter["Function Engine.UIList.PostInitialize"] = true;
      vProcessEventFunctionFilter["Function Engine.UIObject.AllowInputAlias"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScene.AddedChild"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScene.CalculateInputMask"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScene.GetFocusHint"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScene.RemovedChild"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScene.UIAnimationEnded"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScene.UIAnimationStarted"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.ActivateFocusHint"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.ActivateKeyFrameCompletedDelegates"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.AddedChild"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.Initialized"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.PostInitialize"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.RemovedChild"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.RemovedFromParent"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.SetVisibility"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.UIAnimationEnded"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScreenObject.UIAnimationStarted"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScrollbar.Initialized"] = true;
      vProcessEventFunctionFilter["Function Engine.UIScrollbar.PostInitialize"] = true;
      vProcessEventFunctionFilter["Function Engine.UIState.ActivateState"] = true;
      vProcessEventFunctionFilter["Function Engine.UIState.DeactivateState"] = true;
      vProcessEventFunctionFilter["Function Engine.UIState.IsStateAllowed"] = true;
      vProcessEventFunctionFilter["Function Engine.UIState.OnActivate"] = true;
      vProcessEventFunctionFilter["Function Engine.UIState.OnDeactivate"] = true;
      vProcessEventFunctionFilter["Function Engine.UIState_Disabled.ActivateState"] = true;
      vProcessEventFunctionFilter["Function Engine.UIState_Focused.ActivateState"] = true;
      vProcessEventFunctionFilter["Function Engine.Volume.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.VolumeTimer.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.VolumeTimer.Timer"] = true;
      vProcessEventFunctionFilter["Function Engine.Weapon.RefireCheckTimer"] = true;
      vProcessEventFunctionFilter["Function Engine.Weapon.WeaponEquipping.BeginState"] = true;
      vProcessEventFunctionFilter["Function Engine.Weapon.WeaponEquipping.EndState"] = true;
      vProcessEventFunctionFilter["Function Engine.WorldInfo.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.WorldInfo.PreBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefBasePlayerController.CheckMovie"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefBasePlayerController.PostSpawn"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefBasePlayerController.ServerCheckMovie"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefBasePlayerController.SkippedMovie"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefBuffManager.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefBuffManager.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefCagedPet.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefCrystalCore.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefCustomNode.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefDamageableTarget.SpawnDefaultBuffs"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefDroppedEquipment.RotateSkelMesh"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEmitterSpawnable.AllowSpawn"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEmitterSpawnable.Destroyed"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEmitterSpawnable.OnParticleSystemFinished"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEmitterSpawnable.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEmitterSpawnable.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefForge.CheckCombatPhase"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefForge.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefForge.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefGameReplicationInfo.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefGameReplicationInfo.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefHUD.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefHUD.PostRender"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefLocalPlayer.PostHUDRender"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefMiniMap.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefNPC_BarKeep.PlayIdleQuipSound"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefNPC_BarKeep.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefNativeUIScene.IsKeyboardOwned"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPawn.AnimNotify_ResetWeaponSwingDamage"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPawn.AnimNotify_StartWeaponSwingDamage"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPawn.AnimNotify_StopWeaponSwingDamage"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPawn.BaseChange"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPawn.PlayFootStepSound"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayer.Bump"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayer.DoKnockback"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayer.Landed"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayer.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayer.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerAbility.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerAbility_BuildTower.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerAbility_RepairTower.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerAbility_SellTower.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerAbility_UpgradeTower.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerCamera.CalculateSpinOffset"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerCamera.OverTheShoulder.BeginState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerCamera.OverTheShoulder.EndState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerCamera.OverTheShoulder.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerCamera.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerCamera.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.CheckForStartWave"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.CheckRespawn"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.CreateHUD"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.GetHeroManager"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.GetPlayerViewPoint"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.GetSeamlessTravelActorList"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.InCinematic.PlayerTick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.InCinematic.PoppedState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.InCinematic.PushedState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.InCinematic.StartFire"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.IncreasePlacementTowerRadius"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.JumpPressed"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.JumpReleased"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.LockedMovement.PlayerTick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.LockedMovement.PoppedState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.LockedMovement.PushedState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.NotifyDirectorControl"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.NotifyLoadedWorld"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.Pause"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWaiting.BeginState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWaiting.EndState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWaiting.PlayerTick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWalking.BeginState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWalking.ContinuedState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWalking.PausedState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWalking.PlayerTick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWalking.StartFire"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.ReceivedPlayer"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.SpawnPlayerCamera"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerReplicationInfo.Destroyed"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerReplicationInfo.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerReplicationInfo.Timer"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPracticeDummy.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPracticeDummy.StartTimer"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefProjectile.Destroyed"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefProjectile.HitWall"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefProjectile.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefProjectile.RefreshSpeedLifeSpan"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefSceneClient.PauseGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTowerAllowanceVolume.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTowerPreventionRadius.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTowerPreventionRadius.Touch"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTowerPreventionVolume.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTreasureChest.Destroyed"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTreasureChest.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTreasureChest.SpawningIn.BeginState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTreasureChest.SpawningIn.EndState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTreasureChest.SpawningIn.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefUIController.InputKey"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefUIScene.OnInterceptedInputKey"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefUIScene.OnLabelChange"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefUIScene.PostInitialSceneUpdate"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefUIScene.RenderGamepadKey"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefUIScene.SceneActivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefUIScene.SceneDeactivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefViewportClient.GameSessionEnded"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefViewportClient.OnInputAxis"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefViewportClient.PostRender"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefViewportClient.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWaveBillboard.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon.WeaponEquipping.WeaponEquipped"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.Active.BeginState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.Active.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.AltFiring.BeginState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.AltFiring.EndState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.AltFiring.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.WeaponFiring.BeginState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.WeaponFiring.EndState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MagicStaff.WeaponFiring.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MeleeSword.CheckUpdateBlocking"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefWeapon_MeleeSword.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_AppPurchased.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_CheckForLevelUps.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_GameplayMovie.Update"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_GetGameSettings.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_GetMissionSwitchValue.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_LockContent.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_OpenBuildUI.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_OpenBuildUI.Update"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_RefreshWaveEntries.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_RegisterEnemyWaveEntry.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_ResetEnemyWaveEntries.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_ResetEnemyWaveEntries.Update"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_RessurectPlayers.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_ScaleEnemyWave.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_ScaleFloatForPlayerCount.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_SetFinalWaveNumber.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_SetMixEnemies.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_SetNightmareUnlocked.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_SetWaveBillboardSpawnPoints.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_SetWaveNumber.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_ShowNotification.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_UnlockCostumes.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_UnlockMission.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_DifficultySwitch.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_GetMultiplayerMode.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IntSwitch.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IsAchievementUnlocked.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IsInCombatPhase.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IsInVolume.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IsPureStrategy.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_ShowTutorial.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_UIAction_PlaySound.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.HUDWidgetScene.SceneActivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.HUDWidgetScene.SceneDeactivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.HUDWidgetScene.UIPostRender"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.GetSeamlessTravelActorList"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.Heartbeat"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.InitGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.PostSeamlessTravel"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.PreBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.RunAntiCheat"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.SetGameType"] = true;
      vProcessEventFunctionFilter["Function UDKGame.Main.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.PlayerShopManager.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIButton_Scripted.ActiveStateChanged"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_Button.RenderGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_HeroPlayerListButton.RenderGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScript_ActionWheelHotkey.RenderGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_BuildTimer.SceneActivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_GameSetup.UIPostRender"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_GlobalHUD.SceneActivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_PauseMenu.OnReceivedInputKey"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_PauseMenu.PostInitialSceneUpdate"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_PauseMenu.SceneActivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_PauseMenu.SceneDeactivated"] = true;
  // clang-format on
}

bool Config::ContainsNumber(const std::string &str) {
  std::regex pattern("\\d");
  return std::regex_search(str, pattern);
}
