#include "pch.h"
#include "events.h"
#include "includes/config.h"


bool MovePlayerEvent::doEvent() {
  auto& config = Config::getInstance();

  config.playerMoveTo(playerIndex, moveLocation);
  if(config.Distance(config.getPlayerLocation(playerIndex), moveLocation) > 20)
    return false;

  return true;
}

void MovePlayerEvent::changeMove(Classes::FVector pos){
  moveLocation = pos;
}
