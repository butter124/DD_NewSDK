
// clang-format off
#include "pch.h"
#include "events.h"
#include "includes/config.h"
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
