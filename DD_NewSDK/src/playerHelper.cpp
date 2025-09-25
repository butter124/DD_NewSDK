// clang-format off
#include "events.h"
#include "pch.h"
#include "includes/playerHelper.h"
#include "includes/config.h"
#include <algorithm>
#include <memory>
// clang-format on

PlayerHelper::PlayerHelper() : config(Config::getInstance()) {}

PlayerHelper &PlayerHelper::getInstance() {
  static PlayerHelper instance;
  return instance;
}

void PlayerHelper::myHud() {}

int PlayerHelper::getPlayerHealth(int index) { return 1; }

void PlayerHelper::setPlayerHealth(int index, int value) {}

Classes::FVector PlayerHelper::getPlayerLocation(int index) {
  return {0, 0, 0};
}

void PlayerHelper::setPlayerLocation(int index) {}

std::vector<std::unique_ptr<Event>> &PlayerHelper::getEvents(){
  return events;
}

void PlayerHelper::doEvents(){
  for(auto&e : events){
    if(!e->doEvent()) continue;

    // remove the event in O(1) time
    std::swap(e,events.back());
    events.pop_back();
  }
}

void PlayerHelper::setPlayerMovePoint(int playerNum, Classes::FVector pos){
  // check if a move event already exist for player and change the location
  for(auto& e : events){
    if(e->getType() == Event::Type::Move && e->playerIndex == playerNum){
      static_cast<MovePlayerEvent*>(e.get())->changeMove(pos);
      return;
    }
  }
  // add a new event if it does not exist
  events.push_back(std::make_unique<MovePlayerEvent>(playerNum,pos));
}
