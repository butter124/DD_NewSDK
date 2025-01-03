#pragma once

#include "SDK.hpp"
#include <functional>
#include <string>
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

class Config {
private:
public:
  bool Init();
  bool Cleanup();

  HWND gameHWND;
  bool bShowMenu = true;
  bool bBlockInput = true;
  bool bPlayerGodMode = false;
  bool bCrystalGodMode = false;
  bool bKillAllEnemys = false;
  bool bKillOneToAdvance = false;
  bool bShowVacuumPos = false;
  bool bVacHack = false;
  bool bSkipWave = false;
  bool bLockWave = false;
  int waveToSkipTo = 0;
  bool bLootShower = false;
  bool bAutoLoot = false;
  int itemsLooted = false;
  int itemsChecked = false;
  int lootFilter[0xB] = {};
  int itemFilterQuality;

  Classes::FVector vacPos = {0, 0, 0};
  /* useful functions */
  // register a function to be hooked in process events
  std::unordered_map<std::string, std::function<void(PROCESS_EVENT_ARGS)>>
      hookedFuncMap;
  void RegisterHookedFunction(const std::string &key,
                              std::function<void(PROCESS_EVENT_ARGS)> func);
  // block functions from running in process event
  std::unordered_map<std::string, bool> blockedFuncMap;
  void RegisterBlockedFunction(const std::string &key, bool &flag);
  bool ShouldLootItem(Classes::ADunDefDroppedEquipment *item);

  /* sdk funcs */
  void PostRenderHookFunc(PROCESS_EVENT_ARGS);
  void WaveSkipHookFunc(PROCESS_EVENT_ARGS);
  void AutoLootHookFunc(PROCESS_EVENT_ARGS);

  bool TogglePlayerGodMode();
  bool TurnOffPlayerGodMod();
  bool ToggleCrystalGodMode();
  Classes::UEngine *GetEngine();
  Classes::ADunDefPlayerController *GetADunDefPlayerController();
  Classes::ADunDefPawn *GetPlayerPawn();
  Classes::APawn *GetFirstPawnInList();
  Classes::AWorldInfo *GetWorldInfo();
  Classes::AMain *GetGameInfo();
  Classes::ADunDefGameReplicationInfo *GetGRI();
  void PawnLoop(const std::function<void(Classes::ADunDefPawn *)> &func,
                bool applyToEnemy, bool applyToPlayer);
  void KillPawn(Classes::ADunDefPawn *pawn);
  void KillAllEnemyPawns();
  void MovePawn(Classes::ADunDefPawn *pawn, Classes::FVector pos);
  void MoveEnemyPawns(Classes::FVector pos);
  void SpawnItemsfromPawns();
  void SetVacPos(Classes::FVector pos);
  Classes::FVector GetVacPos();
  Classes::FVector GetPlayerPos();
  Classes::FVector SetPlayerPos(Classes::FVector pos);
  void FloatingTextinWorld(const Classes::FString &string, Classes::FVector pos,
                           Classes::FLinearColor dColor = {0, 1, 0, 1});
  std::string GetItemQualityString(Classes::UHeroEquipment *item);
  Classes::UObject *GetInstanceByName(Classes::UClass *Class, std::string name);
  Classes::UObject *GetInstanceOf(Classes::UClass *Class);
  std::vector<Classes::UObject *> GetAllInstanceOf(Classes::UClass *Class);
  std::string FStringToString(Classes::FString s);
  Classes::FString StringToFString(std::string s);

  // keybinds
  int ToggleKey = VK_INSERT;
  bool bToggleKeyChangeRequest = FALSE;

  int EndKey = VK_END;
  bool bEndKeyKeyChangeRequest = FALSE;

  bool bGetNewTeleportLocation = FALSE;
  bool bTeleportPlayer = FALSE;

  int NewTeleportKey = VK_F3;
  bool NewTeleportKeyKeyChangeRequest = FALSE;

  int TeleportPlayerKey = VK_F4;
  bool TeleportPlayerKeyKeyChangeRequest = FALSE;
  void GetKeybinds();
  void SaveKeybinds();
};
extern Config config;
