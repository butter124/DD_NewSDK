#pragma once
#include "SDK.hpp"
#include "includes/ent.h"
#include <SDK/DD_Engine_classes.hpp>
#include <SDK/DD_UDKGame_classes.hpp>

class Config;
class Player : public Entity {

public:
  Player();
  Player(Classes::ADunDefPlayerController *controller,
         Classes::ADunDefPawn *pawn);

  void myHud();
};
