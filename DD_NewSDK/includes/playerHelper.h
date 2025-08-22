#pragma once
#include "SDK.hpp"
#include "includes/ent.h"
#include <SDK/DD_Engine_classes.hpp>
#include <SDK/DD_UDKGame_classes.hpp>

class Config;
class PlayerHelper {

public:
  static PlayerHelper &getInstance();
  void myHud();
  int getPlayerHealth(int playerNum);
  void setPlayerHealth(int playerNum, int value);
  Classes::FVector getPlayerLocation(int playerNum);
  void setPlayerLocation(int playerNum);

private:
  PlayerHelper *Instance;
  PlayerHelper();
  PlayerHelper(const PlayerHelper &) = delete;            // no copy
  PlayerHelper &operator=(const PlayerHelper &) = delete; // no assign
};
