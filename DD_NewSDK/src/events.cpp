
// clang-format off
#include "pch.h"
#include "events.h"
#include "includes/config.h"
#include <SDK/DD_Core_structs.hpp>
#include <SDK/DD_UDKGame_classes.hpp>
#include <cstddef>
// clang-format on

bool MoveToPlayerEvent::doEvent() {
  auto &config = Config::getInstance();

  config.playerMoveTo(playerIndex, moveLocation);

  auto playerLocation = config.getPlayerLocation(playerIndex);
  auto dist = config.Distance(playerLocation, moveLocation);

  if (dist <= 50) {
    //config.GetPlayerPawnByIndex(playerIndex)->Velocity = Classes::FVector{0, 0, 0};
    config.playerMoveTo(playerIndex, moveLocation);
    return true;
  }

  return false;
}

void MoveToPlayerEvent::changeMove(Classes::FVector pos) { moveLocation = pos; }

bool BuildTowerEvent::doEvent() {
  auto playerPawn = config->GetPlayerPawnByIndex(playerIndex);
  auto playerController = static_cast<Classes::ADunDefPlayerController*>(playerPawn->Controller);
  auto ability  = static_cast<Classes::ADunDefPlayerAbility_BuildTower *>(playerController->CurrentCastingAbility);

  // check if player is already building something
  if(ability != nullptr) return false;
  
  playerController->ActivateHotKey(towerIndex);

  ability  = static_cast<Classes::ADunDefPlayerAbility_BuildTower *>(playerController->CurrentCastingAbility);

  // there is a small delay between spells
  if(ability == nullptr) return false;
  int gameAngle = static_cast<int>((static_cast<float>(towerRotation) / 360.0f) * 65565.0f);
  ability->PlacementLocation = towerLocation;
  ability->PlacementRotation = Classes::FRotator{0, gameAngle, 0};
  ability->StartSummoningState();

  return true;
}

bool RotateToAngleEvent::doEvent(){

  auto &config = Config::getInstance();
  auto playerPawn = config.GetPlayerPawnByIndex(playerIndex);
  
  float angle = config.AngleBetween(playerPawn->Rotation, rotation);
  if(angle > 10)
  {
    auto newRotation = config.LerpRot(playerPawn->Rotation, rotation, 1000);
    playerPawn->Rotation = newRotation;
    return false;
  }

  return true;
}


bool RotateToLocationEvent::doEvent(){
    auto &config = Config::getInstance();
    auto playerPawn = config.GetPlayerPawnByIndex(playerIndex);

    auto dir = config.NormalizeVector(config.VectorTo(playerPawn->Location, location));
    if(dir.X==0.f && dir.Y==0.f && dir.Z==0.f)
        return true; // already at target

    auto rot = config.VectorToRot(dir);

    float angle = config.AngleBetween(playerPawn->Rotation, rot); // returns degrees
    if(angle > 10.f) {
        auto newRotation = config.LerpRot(playerPawn->Rotation, rot, 1000);
        playerPawn->Rotation = newRotation;
        return false;
    }

    return true;
}
