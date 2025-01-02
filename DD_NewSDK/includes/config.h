#pragma once

#define REGISTER_FUNCTION(key, func)                                           \
  RegisterFunction(key, [this](Classes::UObject *obj, void *edx,               \
                               Classes::UFunction *pFunction, void *pParms,    \
                               void *pResult) {                                \
    func(obj, edx, pFunction, pParms, pResult);                                \
  })

class Config {
public:
  bool bShowMenu = true;
  bool bPlayerGodMode = false;
  bool bCrystalGodMode = false;
  bool bKillAllEnemys = false;
  bool bKillOneToAdvance = false;
  bool bShowVacuumPos = false;

  bool bVacHack = false;
  Classes::FVector vacPos = {0, 0, 0};

  std::unordered_map<std::string,
                     std::function<void(Classes::UObject *, void *,
                                        Classes::UFunction *, void *, void *)>>
      funcMap;
  void
  RegisterFunction(const std::string &key,
                   std::function<void(Classes::UObject *, void *,
                                      Classes::UFunction *, void *, void *)>
                       func);

  bool TogglePlayerGodMode();
  bool ToggleCrystalGodMode();

  HWND gameHWND;
  bool Init();
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
  void SetVacPos(Classes::FVector pos);
  Classes::FVector GetVacPos();
  Classes::FVector GetPlayerPos();
  Classes::FVector SetPlayerPos(Classes::FVector pos);
  void FloatingTextinWorld(const Classes::FString &string, Classes::FVector pos,
                           Classes::FLinearColor dColor = {0, 1, 0, 1});
  Classes::UObject *GetInstanceByName(Classes::UClass *Class, std::string name);
  Classes::UObject *GetInstanceOf(Classes::UClass *Class);
  std::vector<Classes::UObject *> GetAllInstanceOf(Classes::UClass *Class);
  std::string FStringToString(Classes::FString s);
  Classes::FString StringToFString(std::string s);

  void PostRender(Classes::UObject *obj, void *edx,
                  Classes::UFunction *pFunction, void *pParms, void *pResult);
};
extern Config config;
