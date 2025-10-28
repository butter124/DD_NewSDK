// clang-format off
#include "lua_engine.h"
#include "pch.h"
#include "includes/config.h"
#include <SDK/DD_Basic.hpp>
#include <SDK/DD_Core_classes.hpp>
#include <SDK/DD_Core_structs.hpp>
#include <SDK/DD_Engine_classes.hpp>
#include <SDK/DD_Engine_parameters.hpp>
#include <SDK/DD_UDKGame_classes.hpp>
#include <chrono>
#include <cmath>
#include <fstream>
#include <regex>
#include <string>
#include <variant>
#include <winuser.h>
#include <algorithm>

// clang-format on
Config *config = &Config::getInstance();
//  Config::Config() : logFileName("log.txt"), logger(logFileName) {}
Config::Config() : logFileName("log.txt"), logger(logFileName) {}

Config::~Config() {}

bool Config::Init() {

  config->LogToFile("Init config.");
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
  RegisterKeybind("Toggle menu",Config::KeyBinds::ToggleKey,519,[this](){bShowMenu = !bShowMenu; 
                                                                         bBlockInput = bShowMenu;});
  RegisterKeybind("End menu",Config::KeyBinds::EndKey,520,[this](){bEndMenu = true;});
  RegisterKeybind("Teleport players",Config::KeyBinds::TeleportPlayers,521,[this](){bTeleportPlayers = !bTeleportPlayers;});
  RegisterKeybind("Vacuum pos",Config::KeyBinds::UpdateVacuumPos,522,[this](){SetVacPos(GetPlayerPos());});
  RegisterKeybind("No clip",Config::KeyBinds::ToggleNoClipKeybind,523,[this](){bNoClip = !bNoClip;});

  bool invert = !bPlayerGodMode;
  RegisterBlockedFunction("Function DunDefPlayerController.Dead.BeginState", invert);
  RegisterBlockedFunction("Function UDKGame.DunDefPlayer.Dying.BeginState", invert);
  RegisterBlockedFunction("Function UDKGame.DunDefPlayerController.JumpPressed", bBlockInput);
  RegisterBlockedFunction("Function UDKGame.DunDefPlayerController.PlayerWalking.PlayerTick", bBlockInput);

  // clang-format on

  GetKeybinds();
  SetupFilter();

  std::srand(static_cast<unsigned int>(std::time(nullptr)));

  L = &LUA_ENGINE::get_instance();
  return true;
}

void Config::InitSDK() {
  // std::stringstream ss;
  //
  // ss << "GObjects: " << std::hex << GObjectsAddr << " GNames: " <<
  // GNamesAddr;
  //
  // config->LogToFile(ss.str());
}

void Config::BlockInputInMenu(PROCESS_EVENT_ARGS) {
  if (bShowMenu)
    return;
}

bool Config::Cleanup() {
  config->LogToFile("Cleanup config");
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

  config->LogToFile("Registering function " + key);
  hookedFuncMap[key] = func;
}

void Config::RegisterHookedObject(
    // if you call a class method of obj it will enter an infinite loop
    // the caller must account for that
    const std::string &key, std::function<void(PROCESS_EVENT_ARGS)> func) {
  config->LogToFile("Registering hooked Object " + key);
  hookedObjects[key] = func;
}

void Config::RegisterBlockedFunction(const std::string &key, bool &flag) {
  config->LogToFile("Registering blocked funtion " + key);
  blockedFuncMap[key] = &flag;
}

void Config::RegisterKeybind(std::string name, Config::KeyBinds keyBindName,
                             int keyCode, std::function<void()> func) {

  config->LogToFile("Registering keybind " + name);
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

  HandlePathfinding();
  DrawingOnScreen(obj, edx, pFunction, pParms, pResult);
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

  for (auto point : vPointsToDraw) {
    FloatingTextinWorld(point.backing_wstr.c_str(), point.pos, {1, 0, 0, 1});
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

  pController->Score = 0;

  // unlimited mana for towers
  if (bUnlimitedManaTowers)
    pController->ManaPower = config->iManaForTowers;

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

  if (config->bIsSpawnEnemyOpen)
  {
  std::set<Classes::UObject *> templates = GetEnemyTemplates();
  for (size_t i = 0; i < qEnemysToSpawn.size(); i++) {
    auto front = qEnemysToSpawn.front();
    qEnemysToSpawn.pop();
    SpawnEnemyAt(front, vacPos);
  }
  }
  HandleAutoReady();
  HandleThreadSafeLuaRequest();

  // lua events
  L->handleThreadSafeContent();
}

void Config::HandleThreadSafeLuaRequest() {
  int n = L->threadsafe_lua_tasks.size();
  for (int i = 0; i < n; i++) {
    std::function<void()> func = L->threadsafe_lua_tasks.front();
    L->threadsafe_lua_tasks.pop();
    func();
  }
}
void Config::DrawingOnScreen(PROCESS_EVENT_ARGS) {
    return;
  auto canvas =
      ((Classes::UGameViewportClient_PostRender_Params *)(pParms))->Canvas;

  auto screenpoint = canvas->ProjectNoClip(pathfindNextPoint);
  if (screenpoint.Z > 0.0f && screenpoint.Z < 1.0f) {
    if (GetPlayerPawn() != NULL) {
      float d = Distance(GetPlayerPawn()->Location, config->pathfindNextPoint);
      std::wstring s = std::to_wstring(d);
      DrawTextCentered(canvas, s.c_str(), screenpoint.X, screenpoint.Y,
                       {0, 255, 0, 255});
    }
  }

  auto screenpoint2 = canvas->ProjectNoClip(pathfindToPoint);
  if (screenpoint2.Z > 0.0f && screenpoint2.Z < 1.0f)
    DrawTextCentered(canvas, L"ToPoint", screenpoint2.X, screenpoint2.Y,
                     {0, 255, 0, 255});


  GetADunDefPlayerController()->myHUD->Draw3DLine(
      GetPlayerPawn()->Location, pathfindNextPoint, {0, 0, 255, 255});

  // if (bShowPath)
  //   config->GetADunDefPlayerController()->NavigationHandle->DrawPathCache(
  //       {0, 1, 0}, 0, {255, 0, 0, 255});
}

void Config::DrawTextCentered(Classes::UCanvas *canvas, Classes::FString _Text,
                              float _x, float _y, Classes::FColor _Color) {
  Classes::FVector2D tmpCanvasPos = {canvas->CurX, canvas->CurY};
  Classes::FColor tmpCanvasColor = canvas->DrawColor;

  float MaxX = 0;
  float MaxY = 0;
  canvas->TextSize(_Text, &MaxX, &MaxY);
  _x = _x - (MaxX / 2);
  _y = _y - (MaxY / 2);

  canvas->SetPos(_x, _y);
  canvas->DrawColor = _Color;

  canvas->DrawText_(_Text, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL,
                    NULL);

  canvas->DrawColor = tmpCanvasColor;
  canvas->SetPos(tmpCanvasPos.X, tmpCanvasPos.Y);
}

void Config::HandleAutoReady() {
  auto pMapInfo = ((Classes::UDunDefMapInfo *)(GetWorldInfo()->MyMapInfo));
  Classes::ADunDefPlayerController *pController = GetADunDefPlayerController();

  if (!pController || !pMapInfo)
    return;

  static std::chrono::high_resolution_clock::time_point timeLast;
  static bool cachedTime = false;

  // check for entering build phase
  if (!cachedTime && config->GetGRI()->STATIC_IsNonLobbyBuildPhase()) {
    timeLast = std::chrono::high_resolution_clock::now();
    cachedTime = true;
  }

  auto timeNow = std::chrono::high_resolution_clock::now();
  auto timePassed = timeNow - timeLast;
  bool bShouldReady = timePassed > tAutoReadyAfterXSeconds;

  if (bAutoReady && !pMapInfo->IsLobbyLevel && bShouldReady) {
    pController->ActivateCrystal();
    cachedTime = false;
  }
  if (bSuperAutoReady && !pMapInfo->IsLobbyLevel && bShouldReady) {
    pController->ActivateCrystalForAllPlayers();
    cachedTime = false;
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

  if (currentRewardInteration < config->MultiplyRewardsBy) {
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

  auto pPawn = config->GetPlayerPawn();
  auto pHeroManager = config->GetHeroManager();

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
  auto pWorld = config->GetGameInfo();
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
  auto pAchievementManager = config->GetAchievementManager();
  auto pController = config->GetADunDefPlayerController();

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

  // handle other stats
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

Classes::ADunDefEnemy *Config::SpawnEnemyAt(Classes::ADunDefEnemy *enemy,
                                            Classes::FVector pos) {
  auto pMain = GetGameInfo();
  auto pSpawner = GetWaveSpawner();

  if (!pSpawner || !pMain)
    return nullptr;

  return pMain->WaveSpawnerCreateEnemy(pSpawner, enemy, pos, {0, 0, 0});
}

void Config::SpawnEnemyAt(std::string &s, Classes::FVector pos) {
  auto pEnemy = (Classes::ADunDefEnemy *)GetInstanceByName(
      Classes::ADunDefEnemy::StaticClass(), s);
  if (pEnemy)
    SpawnEnemyAt(pEnemy, pos);
}

Classes::ADunDefEnemy *Config::GetEnemyTemplate(std::string &s) {
  return (Classes::ADunDefEnemy *)GetInstanceByName(
      Classes::ADunDefEnemy::StaticClass(), s);
}

std::string Config::FStringToString(Classes::FString &s) {
  return std::string(s.ToString());
}

Classes::FString Config::StringToFString(const std::string &s) {
  std::wstring wstr(s.begin(), s.end());
  return Classes::FString(wstr.c_str());
}

Classes::UObject *Config::GetInstanceByName(Classes::UClass *Class,
                                            std::string &name) {
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

Classes::TArray<Classes::ULocalPlayer *> Config::GetDunDefPlayers() {
  Classes::UEngine *uengine = GetEngine();
  if (uengine == nullptr)
    return Classes::TArray<Classes::ULocalPlayer *>{};
  return uengine->GamePlayers;
}

Classes::ADunDefPlayerController *Config::GetADunDefPlayerController() {
  Classes::UEngine *uengine = GetEngine();

  if (!uengine || !uengine->GamePlayers.IsValidIndex(0))
    return nullptr;

  return (Classes::ADunDefPlayerController *)uengine->GamePlayers[0]->Actor;
}

Classes::ADunDefPlayerController *
Config::GetADunDefPlayerControllerByIndex(int i) {
  Classes::UEngine *uengine = GetEngine();

  if (!uengine || !uengine->GamePlayers.IsValidIndex(i))
    return nullptr;

  return (Classes::ADunDefPlayerController *)uengine->GamePlayers[i]->Actor;
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

Classes::ADunDefPawn *Config::GetPlayerPawnByIndex(int i) {
  Classes::ADunDefPlayerController *playerController =
      GetADunDefPlayerControllerByIndex(i);

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

  if(entityFilterMap.find(pawn->Class) == entityFilterMap.end())
  {
    entityFilterMap[pawn->Class] = std::pair<std::string,bool>(pawn->GetName(),false);
  }
  // check if entity is filtered
  if(entityFilterMap[pawn->Class].second == true)
  {
    return;
  }
  pawn->TakeDamage(pawn->HealthMax, NULL, tempVec, tempVec, NULL, tempHit, NULL, NULL);
}

void Config::KillPawn(Classes::ADunDefDamageableTarget *pawn) {
  Classes::FVector tempVec = Classes::FVector();
  Classes::FTraceHitInfo tempHit = Classes::FTraceHitInfo();
  pawn->TakeDamage(pawn->MaxHealth, NULL, tempVec, tempVec, NULL, tempHit, NULL,
                   NULL);
}

void Config::KillAllEnemyPawns() {

  auto pWorld = config->GetGameInfo();
  auto pInfo = config->GetWorldInfo();

  if (!pWorld || pWorld->TargetableActors.Num() == 0 || pInfo == nullptr)
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
        config->KillPawn(
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
                                 Classes::FLinearColor dColor, float time) {
  auto playerController = config->GetADunDefPlayerController();
  if (!playerController || !playerController->myHUD)
    return;
  auto GRI = playerController->GetGRI();
  if (!GRI)
    return;

  GRI->AddCustomFloatingText(string, pos, 0, time, 2, TRUE, dColor);
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

  config->LogToFile("Giving item.");
  config->LogToFile("Item name : " + _item->GetFullName());
  // CopyItem(item, _item);

  Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *pItemGiver =
      GetEquipmentGiver();
  config->LogToFile("Found item giver class: " + pItemGiver->GetFullName());
  Classes::ADunDefPlayerController *pController = GetADunDefPlayerController();
  config->LogToFile("Found player controller: " + pController->GetFullName());

  if (!pItemGiver || !pController)
    return false;

  config->LogToFile("Setting up item structure.");
  // create net info to create an equipment
  auto netInfo = _item->GetNetInfo(1, 0);
  netInfo.EquipmentID1 = std::rand() % 2000000000;
  netInfo.EquipmentID2 = std::rand() % 2000000000;

  // copy over the base item
  Classes::UHeroEquipment *item = netInfo.EquipmentTemplate;

  config->LogToFile("Giving item " + item->GetName());
  // save old info to restore later
  auto oldNetInfo = item->GetNetInfo(1, 0);

  // init the netinfo
  item->InitFromNetInfo(netInfo, nullptr);
  item->CopyStatsFromNetInfo(netInfo);

  config->LogToFile("Done setting up item structure.");
  // save old template
  Classes::FGiveEquipmentEntry oldtemp;
  oldtemp = pItemGiver->GiveEquipmentEntries.GetByIndex(0);

  // setup new template
  Classes::FGiveEquipmentEntry newtemp = oldtemp;

  newtemp.ForHeroArchetype = NULL;
  newtemp.EquipmentArchetype = item;
  newtemp.EquipmentArchetype->EquipmentID1 =
      oldtemp.EquipmentArchetype->EquipmentID1;
  newtemp.EquipmentArchetype->EquipmentID2 =
      oldtemp.EquipmentArchetype->EquipmentID2;
  // newtemp.EquipmentArchetypesRandom;
  newtemp.BaseForceRandomizationQuality = 0;
  newtemp.MaxRandomizationQuality = 0;
  newtemp.RandomizerMultiplierOverride = 0;
  newtemp.bUseEquipmentArchetypeAsTemplate = 0;
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
  pItemGiver->GiveEquipmentEntries.GetByIndex(0) = newtemp;
  pItemGiver->GiveEquipment(pController);

  config->LogToFile("Gave item sucessfully.");

  // cleanup templates
  pItemGiver->GiveEquipmentEntries.GetByIndex(0) = oldtemp;

  // cleanup archtype
  item->InitFromNetInfo(oldNetInfo, nullptr);

  config->LogToFile("Gave item " + item->GetFullName());
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
  config->LogToFile(
      "Found UDunDef_SeqAct_GiveEquipmentToPlayers for GetEquipmentGiver()");
  return obj;
}

Classes::ADunDefForge *Config::GetForge() {

  config->LogToFile("Found ADunDefForge.");
  return ((Classes::ADunDefForge *)(Classes::ADunDefForge::StaticClass()))
      ->STATIC_GetAForge();
}

Classes::UDunDefAchievementManager *Config::GetAchievementManager() {

  static Classes::UDunDefAchievementManager *obj = nullptr;
  if (!obj)
    obj = ((Classes::UDunDefAchievementManager *)
               Classes::UDunDefAchievementManager::StaticClass())
              ->STATIC_GetAchievementManager();

  config->LogToFile("Found UDunDefAchievementManager.");
  return obj;
}

Classes::UDunDef_SeqAct_EnemyWaveSpawner *Config::GetWaveSpawner() {
  static Classes::UDunDef_SeqAct_EnemyWaveSpawner *obj = nullptr;

  if (!obj)
    obj = (Classes::UDunDef_SeqAct_EnemyWaveSpawner *)GetInstanceOf(
        Classes::UDunDef_SeqAct_EnemyWaveSpawner::StaticClass());

  config->LogToFile("Found UDunDef_SeqAct_EnemyWaveSpawner.");
  return obj;
}

std::set<Classes::UClass*> Config::GetEnemyClasses() {
  static std::set<Classes::UClass*> rSet = {};
  auto enemys = GetAllInstanceOf(Classes::ADunDefEnemy::StaticClass());

  for(auto& e: enemys) {
    Classes::UClass* enemyClass = e->Class;
    rSet.insert(enemyClass);
  }
  return rSet;
}

std::set<Classes::UObject *> Config::GetEnemyTemplates() {
  // TODO: THERE IS A BETTER WAY TO DO THIS
  // This is dumb as fuck calling GetAllInstaceOf every frame causes way too
  // much lag. to fix this find a way to tell when switching levels

  static std::set<Classes::UObject *> rSet = {};

  sEnemyTemplates.clear();
  auto enemys = GetAllInstanceOf(Classes::ADunDefEnemy::StaticClass());

  for (auto e : enemys) {

    if (ContainsNumber(e->GetName()))
      continue;

    rSet.insert(e);
    sEnemyTemplates.insert(e->GetName());
  }

  config->LogToFile("Found ADunDefEnemy.");
  return rSet;
}

void Config::PushItemToQueue(Classes::UHeroEquipment *item) {
  std::lock_guard<std::mutex> lock(queueMutex);
  qItemsToGive.push(item);

  config->LogToFile("Found UHeroEquipment.");
}

Classes::UHeroEquipment *Config::PopItemFromQueue() {
  std::lock_guard<std::mutex> lock(queueMutex);
  if (!qItemsToGive.empty()) {

    auto item = qItemsToGive.front();
    config->LogToFile("Popping item from queue " + item->GetFullName());
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

  config->LogToFile("Mutex lock for PushItemToQueueWithString: " + s);
  std::lock_guard<std::mutex> lock(queueMutex);
  qItemsToGive.push(instance);
}

std::vector<std::string> Config::ScanForAllItems() {

  config->LogToFile("ScanForAllItems called.");
  // this function could be done better
  std::vector<std::string> retVec;
  auto equipVector = GetAllInstanceOf(Classes::UHeroEquipment::StaticClass());

  for (auto v : equipVector) {
    Classes::UHeroEquipment *item = (Classes::UHeroEquipment *)v;

    if (item->RandomBaseNames.IsValidIndex(0))
      if (item->RandomBaseNames.GetByIndex(0).StringValue.ToString().find(
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
  PrintToConsole("[+] Successfully attached to process.");

  bConsoleAttached = true;
  logger.ConsoleAttached();
}

void Config::DettachConsole() {
  logger.ConsoleDettached();
  fclose(f);
  FreeConsole();
  bConsoleAttached = false;
}

void Config::PrintToConsole(const std::string &s) {
  if (!bConsoleAttached)
    return;
  logger.log("[CONFIG] %s", s.c_str());
}

void Config::InitLog() {
  bLoggingToFile = true;
  logger.openfile();
  logger.log("Init logger.");

  auto version = config->GetViewportClient()->versionString.ToString();
  logger.log("Game version: %s", version);
}

void Config::CleanLog() {
  bLoggingToFile = false;
  logger.log("Cleanup()");
  logger.closefile();
}

void Config::LogToFile(const std::string &s) {
  if (bLoggingToFile)
    logger.log(s.c_str());
}

void Config::SetupFilter() {
  // clang-format off
  //vProcessEventFilter
      vProcessEventFunctionFilter["Function Engine.WorldInfo.GetMapInfo"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefViewportClient.GetViewportClient"] = true;
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
      vProcessEventFunctionFilter["Function CDT3.MultiZoneMinimap.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function DunDefTrigger.DunDefTrigger.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.CollisionChanged"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.HitWall"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.OnChangeCollision"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.OnToggleHidden"] = true;
      vProcessEventFunctionFilter["Function Engine.Actor.Timer"] = true;
      vProcessEventFunctionFilter["Function Engine.AmbientSoundSimpleToggleable.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.InterpActor.InterpolationChanged"] = true;
      vProcessEventFunctionFilter["Function Engine.InterpActor.InterpolationStarted"] = true;
      vProcessEventFunctionFilter["Function Engine.Light.OnToggle"] = true;
      vProcessEventFunctionFilter["Function Engine.MatineeActor.CheckPriorityRefresh"] = true;
      vProcessEventFunctionFilter["Function Engine.NavMeshGoal_At.Recycle"] = true;
      vProcessEventFunctionFilter["Function Engine.NavMeshPath_Toward.Recycle"] = true;
      vProcessEventFunctionFilter["Function Engine.PlayerController.ServerUpdateLevelVisibility"] = true;
      vProcessEventFunctionFilter["Function Engine.PointLightComponent.OnUpdatePropertyBrightness"] = true;
      vProcessEventFunctionFilter["Function Engine.Terrain.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.TriggerVolume.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function Engine.Volume.CollisionChanged"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefAchievementTrophy.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefCagedPet.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefCrystalCore.GetEnemyTargetingDesirability"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemy.BaseChange"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemy.CheckAlive"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemy.InvincibilityEffectFinished"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemy.RemoveEnemySpawnCollision"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemy.SpawningIn.EndState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemy.SpawningIn.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemyController.CheckIndirectReachability"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemyController.GetSpreadValue"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemyController.Seeking.Tick"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefEnemyController.UpdateAggro"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefGameReplicationInfo.CreateLobbyEquipment"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefHUD.Destroyed"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefInputNative.PlayerInput"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefNPC_BarKeep.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayer.GetEnemyTargetingDesirability"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.ActivateCrystal"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.Dead.BeginState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.Dead.EndState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.HotKeyOff"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.HotKeyOne"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.HotKeyThree"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.HotKeyTwo"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.LockedMovementEnableFire.StartFire"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.PlayerWalking.EndState"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPracticeDummy.GetEnemyTargetingDesirability"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefToolTipMesh.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefTowerPreventionRadius.UnTouch"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefUIScene.OnWidgetClicked"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.Update"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_OpenKillCountUI.Update"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_SaveHeroes.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_SetHidden.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_ShowUIScene.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_ToggleEmitter.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqAct_UnlockRestrictedDifficultyMission.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_CustomMetaFlag.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IntSwitchMega.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IsDLCInstalled.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IsDemoMode.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IsLocalPlayer.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqCond_IsMissionUnlocked.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqEvent_CustomEvent.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDef_SeqEvent_DifficultyChanged.Activated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.PlayerShopManager.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.ReplicatedInterpActor.PostBeginPlay"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIButton_Scripted.ButtonClicked"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_Button.ButtonClicked"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_GameSetup.PostInitialSceneUpdate"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_GameSetup.SceneActivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_KillCount.SceneDeactivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_LoadingScreen.SceneActivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_PlayerHUD.SceneDeactivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefGameReplicationInfo.IsNonLobbyBuildPhase"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefHUD.ToggleHUD"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefPlayerController.ShowMyHeroInfo"] = true;
      vProcessEventFunctionFilter["Function UDKGame.DunDefViewportInput.InputKey"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_EquipmentIconButton.Initialized"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_EquipmentIconButton.RenderGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_HealthManaIcon.RenderGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_HeroIcon.RenderGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_HeroInfoExpBar.RenderGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UIScriptWidget_HeroStat.RenderGame"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_HeroInfo.SceneDeactivated"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_HeroInfoNew.OnReceivedInputKey"] = true;
      vProcessEventFunctionFilter["Function UDKGame.UI_HeroInfoNew.SceneActivated"] = true;
  // clang-format on
}

bool Config::ContainsNumber(const std::string &str) {
  std::regex pattern("\\d");
  return std::regex_search(str, pattern);
}

float Config::DotProduct(const Classes::FVector& a, const Classes::FVector& b)
{
    return a.X * b.X + a.Y * b.Y + a.Z * b.Z;
}

float Config::Distance(const Classes::FVector &a, const Classes::FVector &b) {
  float dx = a.X - b.X;
  float dy = a.Y - b.Y;
  float dz = a.Z - b.Z;
  return sqrtf(dx * dx + dy * dy + dz * dz);
}

Classes::FVector Config::RotToVector(const Classes::FRotator &R){
  constexpr float PI = 3.14159265f;
  float cp = cosf(R.Pitch * PI / 32768.f); // Pitch in radians
  float sp = sinf(R.Pitch * PI / 32768.f);
  float cy = cosf(R.Yaw * PI / 32768.f);
  float sy = sinf(R.Yaw * PI / 32768.f);

  return Classes::FVector(cp * cy, cp * sy, sp);
}

float Config::AngleBetween(const Classes::FRotator &A, const Classes::FRotator &B){
  constexpr float PI = 3.14159265f;
  Classes::FVector v1 = RotToVector(A);
  Classes::FVector v2 = RotToVector(B);

  float dot = DotProduct(v1,v2);
  dot = fmaxf(-1.0f, fminf(1.0f, dot));

  return acosf(dot) * (180.0f / PI);
}


Classes::FRotator Config::LerpRot(const Classes::FRotator& From, const Classes::FRotator& To, float MaxStep)
{
    Classes::FRotator Out;

    auto ClampAngle = [MaxStep](int from, int to) -> int {
        float ffrom = static_cast<float>(from);
        float fto   = static_cast<float>(to);

        float delta = fto - ffrom;

        // Wraparound short path
        if (delta > 32768.f) delta -= 65536.f;
        if (delta < -32768.f) delta += 65536.f;

        // Clamp by MaxStep
        if (delta > MaxStep) delta = MaxStep;
        if (delta < -MaxStep) delta = -MaxStep;

        return static_cast<int>(ffrom + delta);
    };

    Out.Pitch = ClampAngle(From.Pitch, To.Pitch);
    Out.Yaw   = ClampAngle(From.Yaw,   To.Yaw);
    Out.Roll  = ClampAngle(From.Roll,  To.Roll);

    return Out;
}

Classes::FRotator Config::VectorToRot(const Classes::FVector& dir)
{
    Classes::FRotator rot;

    // Compute yaw (around Z axis)
    float yawRad = atan2f(dir.Y, dir.X); 
    rot.Yaw = static_cast<int>(yawRad * 32768.f / 3.14159265f);

    // Compute pitch (around Y axis)
    float flatDist = sqrtf(dir.X*dir.X + dir.Y*dir.Y);
    float pitchRad = atan2f(dir.Z, flatDist);
    rot.Pitch = static_cast<int>(pitchRad * 32768.f / 3.14159265f);

    // Roll = 0 by default
    rot.Roll = 0;

    return rot;
}

Classes::FVector Config::NormalizeVector(const Classes::FVector& v){
    float len = sqrtf(v.X*v.X + v.Y*v.Y + v.Z*v.Z);
    if(len > 0.f) return {v.X/len, v.Y/len, v.Z/len};
    return {0.f,0.f,0.f};
}

Classes::FVector Config::VectorTo(const Classes::FVector& from,const Classes::FVector& to){
  return {to.X - from.X, to.Y-from.Y,to.Z-from.Z};
}

static bool LastLineCheckPolySearch = 0;
static Classes::FVector PreviousGoalLocation = {0, 0, 0};
static Classes::FVector ReturnPoint = {0, 0, 0};
Classes::FVector Config::GeneratePathToPoint(Classes::APawn *pPawn,
                                             Classes::FVector GoalPoint,
                                             float WithinDistance,
                                             bool bAllowPartialPath) {
  Classes::FVector NextDest = GoalPoint;
  Classes::FVector GoalLocationTest = GoalPoint;
  Classes::FVector PreviousGoalLocationTest = PreviousGoalLocation;
  Classes::FVector newGoal;

  Classes::UNavigationHandle *NavigationHandle =
      pPawn->Controller->NavigationHandle;
  auto WorldInfo = config->GetWorldInfo();
  float NavMeshArrivalDistance = 10.0f;
  if (config->GetWorldInfo()->WorldInfo->bTreatNavMeshAsPlane) {
    GoalLocationTest.Z = 0.0f;
    PreviousGoalLocationTest.Z = 0.0f;
  }

  if (!NavigationHandle) {
    pPawn->Controller->InitNavigationHandle();
  } else {
    Classes::FVector dVec(GoalLocationTest.X - PreviousGoalLocationTest.X,
                          GoalLocationTest.Y - PreviousGoalLocationTest.Y,
                          GoalLocationTest.Z - PreviousGoalLocationTest.Z);
    float dSquared = dVec.X * dVec.X + dVec.Y * dVec.Y + dVec.Z * dVec.Z;
    if (dSquared < 22500.0f) {
      bool bNextMove = NavigationHandle->GetNextMoveLocation(
          NavMeshArrivalDistance, &NextDest);
      bool bReachable = WorldInfo->bTreatNavMeshAsPlane
                            ? true
                            : NavigationHandle->PointReachable(NextDest);

      bool isZero = NextDest.X == 0 && NextDest.Y == 0 && NextDest.Z == 0;
      if (bNextMove && !isZero && bReachable)
        return NextDest;
    }
  }

  PreviousGoalLocation = GoalPoint;
  NavigationHandle->ClearConstraints();
  Classes::UNavMeshPath_Toward *mesh =
      (Classes::UNavMeshPath_Toward *)NavigationHandle->CreatePathConstraint(
          Classes::UNavMeshPath_Toward::StaticClass());
  mesh->STATIC_TowardPoint(NavigationHandle, GoalPoint);

  auto goalAtEvaluator = NavigationHandle->CreatePathGoalEvaluator(
      Classes::UNavMeshGoal_At::StaticClass());

  auto atEval = static_cast<Classes::UNavMeshGoal_At *>(goalAtEvaluator);
  atEval->STATIC_AtLocation(NavigationHandle, GoalPoint, WithinDistance, true);

  if (NavigationHandle->FindPath(nullptr, nullptr)) {
    NavigationHandle->GetNextMoveLocation(NavMeshArrivalDistance, &NextDest);

    bool isZero = NextDest.X == 0 && NextDest.Y == 0 && NextDest.Z == 0;
    if (isZero) {
      if (NavigationHandle->GetNearestNavMeshPoint(
              GoalPoint, Classes::FVector(512, 512, 1024), false, 1000.0f, true,
              &newGoal)) {
        ReturnPoint = newGoal;
        return pPawn->Location;
      } else {

        // TODO: reimplement this for player use
        //  ObstructionJump(Classes::FVector(300, 0, 0),
        //                  Classes::FVector(0, 130, 0));
        //  SetIdleEnemy(true, true);
        return NextDest;
      }
    }
  } else {
    float PawnVelocitySquared = pPawn->Velocity.X * pPawn->Velocity.X +
                                pPawn->Velocity.Y * pPawn->Velocity.Y +
                                pPawn->Velocity.Z * pPawn->Velocity.Z;

    if (PawnVelocitySquared < 0.005625f) {
      bool doLineChecks = true;
      if ((WorldInfo->TimeSeconds - LastLineCheckPolySearch) < 5.0f)
        doLineChecks = false;
      else
        LastLineCheckPolySearch = WorldInfo->TimeSeconds;

      if (!NavigationHandle->GetNearestNavMeshPoint(
              pPawn->Location, Classes::FVector(1024, 1024, 1024), doLineChecks,
              3000.0f, true, &NextDest)) {
        // TODO: reimplement  this
        //  ObstructionJump(Classes::FVector(300, 0, 0),
        //                  Classes::FVector(0, 130, 0));
        //  SetIdleEnemy(true, true);
        //  return NextDest;
      } else {
        if (NavigationHandle->GetNearestNavMeshPoint(
                GoalPoint, Classes::FVector(512, 512, 512), doLineChecks,
                1000.0f, false, &newGoal)) {
          ReturnPoint = newGoal;
          NextDest = newGoal;
        } else {
          // SetIdleEnemy(true, true);
          return NextDest;
        }

        // TODO: reimplement  this
        // bForceMove = true;

        // Classes::FVector Dir = (NextDest - pPawn->Location);
        Classes::FVector Dir(NextDest.X - pPawn->Location.X,
                             NextDest.Y - pPawn->Location.Y,
                             NextDest.Z - pPawn->Location.Z);
        Dir.Z = 0;
        float mag = sqrt(Dir.X * Dir.X + Dir.Y * Dir.Y + Dir.Z * Dir.Z);

        if (mag > 0.0001f) {
          Dir.X /= mag;
          Dir.Y /= mag;
          Dir.Z /= mag;

          float Radius = pPawn->GetCollisionRadius() *
                         8.0; // get collision radius manually
          NextDest.X += Dir.X * Radius * 8.0f;
          NextDest.Y += Dir.Y * Radius * 8.0f;
          NextDest.Z += Dir.Z * Radius * 8.0f;
        } else {
          Dir = Classes::FVector(0, 0, 0); // or leave unchanged
        }
        // NextDest += Dir * pPawn->GetCollisionRadius() * 8.0f;

        NextDest.X += Dir.X * pPawn->GetCollisionRadius() * 8.0f;
        NextDest.Y += Dir.Y * pPawn->GetCollisionRadius() * 8.0f;
        NextDest.Z += Dir.Z * pPawn->GetCollisionRadius() * 8.0f;
        return NextDest;
      }
    }
  }

  return NextDest;
}

void Config::HandlePathfinding() {

  // start pathfinding
  if (!config->bPathFind) {
    return;
    // config->bPathFind = false;
  }

  GetADunDefPlayerController()->NavigationHandle->SuggestMovePreparation(
      config->pathfindNextPoint, GetADunDefPlayerController());

  if (!GetADunDefPlayerController()->NavigationHandle->PointReachable(
          config->pathfindNextPoint)) {

    config->pathfindNextPoint = config->GeneratePathToPoint(
        GetPlayerPawn(), config->pathfindToPoint, config->minDist, 1);

    GetADunDefPlayerController()->NavigationHandle->SuggestMovePreparation(
        config->pathfindNextPoint, GetADunDefPlayerController());
    return;
  }

  GetADunDefPlayerController()->MoveToDirectNonPathPos(
      config->pathfindNextPoint, GetGameInfo()->TargetableActors[0], 20, 0);

  float DistanceTo =
      Distance(GetPlayerPawn()->Location, config->pathfindNextPoint);

  if (DistanceTo < config->pathfindthreshhold) {

    GetADunDefPlayerController()->NavigationHandle->GetNextMoveLocation(
        minDist, &config->pathfindNextPoint);

    if (config->pathfindNextPoint.X == 0 && config->pathfindNextPoint.Y == 0 &&
        config->pathfindNextPoint.Z == 0)

      config->pathfindNextPoint = GeneratePathToPoint(
          GetPlayerPawn(), config->pathfindToPoint, config->minDist, 1);

    // GetADunDefPlayerController()->MoveToDirectNonPathPos(
    //     config->pathfindNextPoint, GetGameInfo()->TargetableActors[0], 20,
    //     0);
  }
}

Config &Config::getInstance() {
  static Config c;
  return c;
}

void Config::AddPointToScreenDrawingQueue(const std::string &s,

                                          Classes::FVector v) {
  std::wstring wstr(s.begin(), s.end());
  auto t = PointToRender(wstr.c_str(), v);
  vPointsToDraw.push_back(std::move(t));
}
void Config::RemovePointToScreenDrawingQueue(const std::string &s) {

  auto it = std::find_if(vPointsToDraw.begin(), vPointsToDraw.end(),
                         [&](const PointToRender &p) {
                           std::wstring wstr(s.begin(), s.end());
                           return p.backing_wstr == wstr;
                         });

  if (it != vPointsToDraw.end()) {
    vPointsToDraw.erase(it);
  } else {
    config->PrintToConsole("Failed to remove " + s);
  }
}

void Config::setPlayerHealth(int playerNum, int health) {
  auto player = GetPlayerPawnByIndex(playerNum);
  if (!player)
    return;

  player->Health = health;
}

int Config::getPlayerHealth(int playerNum) {
  auto player = GetPlayerPawnByIndex(playerNum);
  if (!player)
    return -1;

  return player->Health;
}

void Config::setPlayerLocation(int playerNum, Classes::FVector pos) {
  auto player = GetPlayerPawnByIndex(playerNum);
  if (!player)
    return;
  player->Location = pos;
}

Classes::FVector Config::getPlayerLocation(int playerNum) {
  auto player = GetPlayerPawnByIndex(playerNum);
  if (!player)
    return {0, 0, 0};
  return player->Location;
}

void Config::playerMoveTo(int playerNum, Classes::FVector pos, float distanceOffset) {
  auto player = GetPlayerPawnByIndex(playerNum);
  if (!player)
    return;
  //working
  player->Controller->MoveToDirectNonPathPos(pos, nullptr, distanceOffset, 0);
  //void MoveToDirectNonPathPos(const struct FVector& NewDestination, class AActor* ViewFocus, float DestinationOffset, unsigned long bShouldWalk);

  // does nothing
  // void MoveTo(const struct FVector& NewDestination, class AActor* ViewFocus, float DestinationOffset, unsigned long bShouldWalk);
  //pPlayerPawn->Controller->MoveTo(config->vacPos,nullptr,distanceOffset, 0);
}

void Config::playerRotateTo(int playerNum, const Classes::FRotator& rot){
  GetPlayerPawnByIndex(playerNum)->Rotation = rot;
}

void Config::playerLookAt(int playerNum, const Classes::FVector& pos){
  GetPlayerPawnByIndex(playerNum)->UpdateLookAtAngles(pos);
}

void Config::playerUseAbility(int playerNum, int abilityIndex){
  auto player = GetADunDefPlayerControllerByIndex(playerNum);
  if(!player) return;

  auto ability = player->myHero->PlayerAbilityTemplates.GetByIndex(abilityIndex);

  player->StartCastingAbility(ability);
}
