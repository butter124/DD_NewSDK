#pragma once

#include "SDK.hpp"
#include <functional>
#include <mutex>
#include <queue>
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

struct KeybindsStruct {
  int key;
  bool bShouldChange;
  std::function<void()> func;
  std::string name;
};

class Config {
private:
public:
  bool Init();
  bool Cleanup();

  HWND gameHWND;
  bool bEndMenu = false;
  bool bShowMenu = true;
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
  int itemsLooted = 0;
  int itemsChecked = 0;
  int lootFilter[0xB] = {};
  int itemFilterQuality;
  bool bTeleportPlayers = false;
  bool bShowPlayerTeleportPos = false;
  bool bNoClip = false;
  float fNoClipSpeed = 10;
  bool bMultiplyReward = false;
  int MultiplyRewardsBy = 10;

  Classes::FVector vacPos = {0, 0, 0};
  Classes::FVector playerTeleportPos = {0, 0, 0};

  /* useful functions */
  // register a function to be hooked in process events
  std::unordered_map<std::string, std::function<void(PROCESS_EVENT_ARGS)>>
      hookedFuncMap;
  void RegisterHookedFunction(const std::string &key,
                              std::function<void(PROCESS_EVENT_ARGS)> func);

  // block functions from running in process event
  std::unordered_map<std::string, bool> blockedFuncMap;
  void RegisterBlockedFunction(const std::string &key, bool &flag);
  bool ShouldLootItem(Classes::UHeroEquipment *item);

  // item giving
  std::queue<Classes::UHeroEquipment *> qItemsToGive;
  std::mutex queueMutex;
  void PushItemToQueue(Classes::UHeroEquipment *item);
  Classes::UHeroEquipment *PopItemFromQueue();
  bool GiveItem(Classes::UHeroEquipment *item);
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
  void NoClip();
  void ToggleNoClip();

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
  Classes::UDunDefHeroManager *GetHeroManager();
  Classes::UDunDefSceneClient *GetClientManager();
  Classes::UDunDef_SeqAct_GiveEquipmentToPlayers *GetEquipmentGiver();

  void PawnLoop(const std::function<void(Classes::ADunDefPawn *)> &func,
                bool applyToEnemy, bool applyToPlayer);
  void KillPawn(Classes::ADunDefPawn *pawn);
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
};
extern Config config;
