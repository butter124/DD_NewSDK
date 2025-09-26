#include "pch.h"
#include "events.h"
#include "includes/config.h"


bool MovePlayerEvent::doEvent() {
  auto& config = Config::getInstance();

  config.playerMoveTo(playerIndex, moveLocation);

  auto playerLocation = config.getPlayerLocation(playerIndex);
  auto dist = config.Distance(playerLocation, moveLocation);

  if (dist <= 100)
  {
	  config.GetPlayerPawnByIndex(playerIndex)->Velocity = Classes::FVector{ 0,0,0 };
	  //config.playerMoveTo(playerIndex, moveLocation);
	  return true;
  }

  return false;
}

void MovePlayerEvent::changeMove(Classes::FVector pos){
  moveLocation = pos;
}
