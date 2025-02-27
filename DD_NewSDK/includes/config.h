#pragma once

#include "SDK.hpp"
#include "includes/logger.h"
#include <SDK/DD_Core_structs.hpp>
#include <SDK/DD_UDKGame_classes.hpp>
#include <algorithm>
#include <format>
#include <functional>
#include <iostream>
#include <mutex>
#include <queue>
#include <string>
#include <string_view>
#include <unordered_map>
#include <windows.h>

#define PROCESS_EVENT_ARGS                                                     \
  Classes::UObject *obj, void *edx, Classes::UFunction *pFunction,             \
      void *pParms, void *pResult

#define REGISTER_HOOKED_FUNCTION(key, func)                                    \
  RegisterHookedFunction(key, [this](Classes::UObject *obj, void *edx,         \
                                     Classes::UFunction *pFunction,            \
                                     void *pParms, void *pResult) {            \
    func(obj, edx, pFunction, pParms, pResult);                                \
  })

#define REGISTER_HOOKED_OBJECT(key, func)                                      \
  RegisterHookedObject(key, [this](Classes::UObject *obj, void *edx,           \
                                   Classes::UFunction *pFunction,              \
                                   void *pParms, void *pResult) {              \
    func(obj, edx, pFunction, pParms, pResult);                                \
  })

enum Stats {
  eUnknown,
  eHHealth,
  eHSpeed,
  eHDamage,
  eHCast,
  Ability1,
  Ability2,
  eTHealth,
  eTSpeed,
  eTDamage,
  eTRange
};
enum TARGET_TEAM { NONE, ENEMYS, PLAYERS };

struct KeybindsStruct {
  int key;
  bool bShouldChange;
  std::function<void()> func;
  std::string name;
};

class Config {
private:
  FILE *f = nullptr;
  std::string logFileName;

public:
  Config();
  ~Config();
  Logger logger;
  bool Init();
  bool Cleanup();

  HWND gameHWND = 0;
  bool bEndMenu = false;
  bool bShowMenu = true;
#if LOGGING
  bool bConsoleAttached = true;
#else
  bool bConsoleAttached = false;
#endif // LOGGING

  bool bLoggingProcessEvents = false;
  bool bLoggingToFile = false;

  bool bBlockInput = true;
  bool bPlayerGodMode = false;
  bool bCrystalGodMode = false;
  bool bKillAllEnemys = false;
  bool bKillOneToAdvance = false;
  bool bShowVacuumPos = false;
  bool bUpdateVacuumPos = false;
  bool bVacHack = false;
  bool bSkipWave = false;
  bool bLockWave = false;
  int waveToSkipTo = 0;
  bool bLootShower = false;
  bool bAutoLoot = false;
  bool bAutoOpenChest = false;
  int itemsLooted = 0;
  int itemsChecked = 0;
  int lootFilter[0xB] = {};
  int itemFilterQuality = 0;
  int itemFilterQualityULT = 0;
  bool bAutoLootULT = false;
  bool bTeleportPlayers = false;
  bool bShowPlayerTeleportPos = false;
  bool bNoClip = false;
  float fNoClipSpeed = 35;
  bool bMultiplyReward = false;
  int MultiplyRewardsBy = 10;
  int iManaForTowers = 9000;
  bool bUnlimitedManaTowers = false;
  bool bUnlimitedManaShop = false;
  bool bUnlockAllAchievments = false;
  bool bAutoReady = false;

  Classes::FVector vacPos = {0, 0, 0};
  Classes::FVector playerTeleportPos = {0, 0, 0};

  // register a function to be hooked in process events
  std::unordered_map<std::string, std::function<void(PROCESS_EVENT_ARGS)>>
      hookedFuncMap;
  void RegisterHookedFunction(const std::string &key,
                              std::function<void(PROCESS_EVENT_ARGS)> func);
  std::unordered_map<std::string, std::function<void(PROCESS_EVENT_ARGS)>>
      hookedObjects;
  void RegisterHookedObject(const std::string &key,
                            std::function<void(PROCESS_EVENT_ARGS)> func);

  // block functions from running in process event
  std::unordered_map<std::string, bool> blockedFuncMap;
  void RegisterBlockedFunction(const std::string &key, bool &flag);

  std::unordered_map<std::string, bool> vProcessEventFunctionFilter;
  std::unordered_map<std::string, bool> vProcessEventObjectFilter;
  void SetupFilter();

  // item giving
  // handling item giving in process event stops a crash from happening
  std::vector<std::string> vHeroEquipmentStrings;
  std::queue<Classes::UHeroEquipment *> qItemsToGive;
  std::mutex queueMutex;
  bool *pItemSelectable = nullptr;
  void PushItemToQueue(Classes::UHeroEquipment *item);
  Classes::UHeroEquipment *PopItemFromQueue();
  bool GiveItem(Classes::UHeroEquipment *item);
  bool GiveSelectedItems();
  bool GiveAllItems();
  void PushItemToQueueWithString(std::string s);
  std::vector<std::string> ScanForAllItems();
  bool ShouldLootItem(Classes::UHeroEquipment *item);

  // spawning enemys
  // TODO: put a mutix lock on this
  // TODO: find a better way to handle this
  bool GotEnemyTemplates = false;
  std::set<std::string> sEnemyTemplates;
  std::queue<std::string> qEnemysToSpawn;
  void SpawnEnemyAt(Classes::ADunDefEnemy *enemy, Classes::FVector pos);
  void SpawnEnemyAt(std::string s, Classes::FVector pos);
  Classes::ADunDefEnemy *GetEnemyTemplate(std::string s);
  std::set<Classes::UObject *> GetEnemyTemplates();

  // handle key presses
  enum KeyBinds {
    ToggleKey,
    EndKey,
    TeleportPlayers,
    UpdateVacuumPos,
    ToggleNoClipKeybind
  };
  std::unordered_map<KeyBinds, KeybindsStruct> keyBindsmap;
  void RegisterKeybind(std::string name, KeyBinds keyBindName, int keyCode,
                       std::function<void()> func);

  void GetKeybinds();
  void SaveKeybinds();

  /* sdk funcs */
  void PostRenderHookFunc(PROCESS_EVENT_ARGS);
  void WaveSkipHookFunc(PROCESS_EVENT_ARGS);
  void AutoLootHookFunc(PROCESS_EVENT_ARGS);
  void PlayerRewardHookFunc(PROCESS_EVENT_ARGS);
  void OpenChest(PROCESS_EVENT_ARGS);

  void NoClip();
  void ToggleNoClip();
  bool TogglePlayerGodMode();
  bool TurnOffPlayerGodMod();
  bool ToggleCrystalGodMode();
  bool UnlockAllAchievements();
  bool RenameHero(const std::string &newName);
  Classes::UEngine *GetEngine();
  Classes::UDunDefViewportClient *GetViewportClient();
  Classes::ADunDefPlayerController *GetADunDefPlayerController();
  Classes::ADunDefPawn *GetPlayerPawn();
  Classes::APawn *GetFirstPawnInList();
  Classes::AWorldInfo *GetWorldInfo();
  Classes::AMain *GetGameInfo();
  Classes::ADunDefGameReplicationInfo *GetGRI();
  Classes::UDunDefHeroManager *GetHeroManager();
  Classes::UDunDefSceneClient *GetClientManager();
  Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *GetEquipmentGiver();
  Classes::ADunDefForge *GetForge();
  Classes::UDunDefAchievementManager *GetAchievementManager();
  Classes::UDunDef_SeqAct_EnemyWaveSpawner *GetWaveSpawner();

  void PawnLoop(const std::function<void(Classes::ADunDefPawn *)> &func,
                bool applyToEnemy, bool applyToPlayer);
  void KillPawn(Classes::ADunDefPawn *pawn);
  void KillPawn(Classes::ADunDefDamageableTarget *pawn);
  void KillAllEnemyPawns();
  void MovePawn(Classes::ADunDefPawn *pawn, Classes::FVector pos);
  void MoveEnemyPawns(Classes::FVector pos);
  void SpawnItemsfromPawns();
  void SetVacPos(Classes::FVector pos);
  void SetTeleportPos(Classes::FVector pos);
  void MovePlayerPawns(Classes::FVector pos);
  void FloatingTextinWorld(const Classes::FString &string, Classes::FVector pos,
                           Classes::FLinearColor dColor = {0, 1, 0, 1});
  Classes::FVector GetTeleportPos();
  Classes::FVector GetVacPos();
  Classes::FVector GetPlayerPos();
  Classes::FVector SetPlayerPos(Classes::FVector pos);
  std::string GetItemQualityString(Classes::UHeroEquipment *item);
  Classes::UObject *GetInstanceByName(Classes::UClass *Class, std::string name);
  Classes::UObject *GetInstanceOf(Classes::UClass *Class);
  std::vector<Classes::UObject *> GetAllInstanceOf(Classes::UClass *Class);
  std::string FStringToString(Classes::FString s);
  Classes::FString StringToFString(std::string s);
  Classes::FVector GetForward(float yaw, float pitch);
  Classes::FVector AddFVector(Classes::FVector vec1, Classes::FVector vec2);
  bool ContainsNumber(const std::string &str);
  void AttachConsole();
  void DettachConsole();
  void PrintToConsole(const std::string &s);
  void InitLog();
  void CleanLog();
  void LogToFile(const std::string &s);
};
extern Config config;
