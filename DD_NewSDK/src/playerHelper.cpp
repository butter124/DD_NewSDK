// clang-format off
#include "config.h"
#include "ent.h"
#include "pch.h"
#include "includes/playerHelper.h"
#include "includes/config.h"
// clang-format on

PlayerHelper::PlayerHelper() {}

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
