
// clang-format off
#include "pch.h"
#include "includes/config.h"
#include "SDK.hpp"
#include <unordered_map>
#include "includes/menu.h"

// clang-format on

bool Config::TogglePlayerGodMode() {
  Classes::ADunDefPlayerController *playerController =
      GetADunDefPlayerController();
  if (!playerController)
    return false;

  playerController->bGodMode = bPlayerGodMode;

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

bool Config::Init() {
  gameHWND = FindWindow(NULL, "Dungeon Defenders");

  REGISTER_FUNCTION("Function Engine.Interaction.PostRender", PostRender);

  return true;
}

void Config::RegisterFunction(
    const std::string &key,
    std::function<void(Classes::UObject *, void *, Classes::UFunction *, void *,
                       void *)>
        func) {
  funcMap[key] = func;
}

void Config::PostRender(Classes::UObject *obj, void *edx,
                        Classes::UFunction *pFunction, void *pParms,
                        void *pResult) {
  if (config.bShowVacuumPos) {
    Classes::FString v(L"V");
    FloatingTextinWorld(v, config.GetVacPos());
  }
  if (config.bKillAllEnemys) {
    config.KillAllEnemyPawns();
  }

  // Classes::FString v(L"V");
  // auto GRI = config.GetGRI();
  // GRI->AddCustomFloatingText(L"v", config.vacPos, 0, 0.1f, 2, TRUE,
  // {0,1,0,1});
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

  for (int i = 0; i < Classes::UObject::GetGlobalObjects().Num(); ++i) {
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

  for (int i = 0; i < Classes::UObject::GetGlobalObjects().Num(); ++i) {
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

  for (int i = 0; i < Classes::UObject::GetGlobalObjects().Num(); ++i) {
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
    Menu::PrintToConsole("Failed to get player->Controller");
    return nullptr;
  }

  if (playerController->Pawn == nullptr) {
    Menu::PrintToConsole("Failed to get playerController->Pawn");
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

void Config::PawnLoop(const std::function<void(Classes::ADunDefPawn *)> &func,
                      bool applyToEnemy = true, bool applyToPlayer = false) {
  Classes::APawn *curPawn = GetFirstPawnInList();
  // Classes::ADunDefPawn* player = curPawn;

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

void Config::SetVacPos(Classes::FVector pos) { vacPos = pos; }

Classes::FVector Config::GetVacPos() { return vacPos; }

Classes::FVector Config::GetPlayerPos() {
  auto playerPawn = GetPlayerPawn();
  if (!playerPawn) {
    Menu::PrintToConsole("Tried to move playerPawn with nullptr");
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
