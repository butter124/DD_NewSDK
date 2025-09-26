#pragma once
#include "SDK.hpp"
#include "events.h"
#include <SDK/DD_Core_structs.hpp>
#include <SDK/DD_Engine_classes.hpp>
#include <SDK/DD_UDKGame_classes.hpp>
#include <memory>
#include <vector>

class Config;

class PlayerHelper {

public:
  static PlayerHelper &getInstance();
  void myHud();
  int getPlayerHealth(int playerNum);
  void setPlayerHealth(int playerNum, int value);
  Classes::FVector getPlayerLocation(int playerNum);
  void setPlayerLocation(int playerNum);
  void setPlayerMovePoint(int playerNum, Classes::FVector pos);
  void setPlayerRotationPoint(int playerNum, Classes::FRotator rot);
  void setPlayerRotationPoint(int playerNum, Classes::FVector pos);
  void doEvents();

  std::vector<std::unique_ptr<Event>> &getEvents();

private:
  std::vector<std::unique_ptr<Event>> events;
  Config &config;
  PlayerHelper *Instance;
  PlayerHelper();
  PlayerHelper(const PlayerHelper &) = delete;            // no copy
  PlayerHelper &operator=(const PlayerHelper &) = delete; // no assign
};
