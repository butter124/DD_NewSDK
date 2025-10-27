// clang-format off
#include "events.h"
#include "pch.h"
#include "includes/playerHelper.h"
#include "includes/config.h"
#include <algorithm>
#include <memory>
#include <stdexcept>
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

std::vector<std::unique_ptr<Event>> &PlayerHelper::getEvents() {
  return events;
}

void PlayerHelper::doEvents() {
    std::lock_guard<std::mutex> guard(lock);
    for (size_t i = 0; i < events.size(); ) {
        if (!events[i]->doEvent()) {
            ++i;
            continue;
        }

        std::swap(events[i], events.back());
        events.pop_back();
        // Don't increment i — we need to reprocess the swapped-in event
    }
}

void PlayerHelper::setPlayerMovePoint(int playerNum, Classes::FVector pos) {
  // check if a move event already exist for player and change the location
  {
    std::lock_guard<std::mutex> guard(lock);
    for (auto &e : events) {
      if (e->getType() == Event::Type::MoveTo && e->playerIndex == playerNum) {
        static_cast<MoveToPlayerEvent *>(e.get())->changeMove(pos);
        return;
      }
    }
  }
  // add a new event if it does not exist
  addEvent<MoveToPlayerEvent>(playerNum, pos);
}

void PlayerHelper::setPlayerRotationPoint(int playerNum,
                                          Classes::FRotator rot) {
  // check for existing event
  {
    std::lock_guard<std::mutex> guard(lock);
    for (auto &e : events) {
      if (e->getType() == Event::Type::RotateToAngle &&
          e->playerIndex == playerNum) {
        static_cast<RotateToAngleEvent *>(e.get())->changeRotation(rot);
        return;
      }
    }
  }
  // add a new event if it does not exist
  addEvent<RotateToAngleEvent>(playerNum, rot);
}

void PlayerHelper::setPlayerRotationPoint(int playerNum, Classes::FVector pos) {
  // check for existing event
  {
    std::lock_guard<std::mutex> guard(lock);
    for (auto &e : events) {
      if (e->getType() == Event::Type::RotateToAngle &&
          e->playerIndex == playerNum) {
        static_cast<RotateToLocationEvent *>(e.get())->changeRotation(pos);
        return;
      }
    }
  }
  // add a new event if it does not exist
  addEvent<RotateToLocationEvent>(playerNum, pos);
}

void PlayerHelper::buildPlayerTower(int playerNum, int towerIndex,
                                    Classes::FVector pos,
                                    float rot) {
  if (towerIndex < 6 || towerIndex > 10) {
    throw std::runtime_error("towerIndex out of bound");
  }

  --towerIndex;

  addEvent<BuildTowerEvent>(playerNum, towerIndex, pos, rot);
}
