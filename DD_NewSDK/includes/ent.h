#pragma once
#include "SDK.hpp"
#include <SDK/DD_UDKGame_classes.hpp>

class Entity {
public:
  Entity();
  Entity(Classes::AController *controller, Classes::ADunDefPawn *pawn);
  Classes::AController *controller;
  Classes::ADunDefPawn *pawn;

  Classes::FVector getPos();
  void setPos(Classes::FVector pos);

  int getHealth();
  void setHealth(int i);

  Entity nextEntity(Classes::AController &controller,
                    Classes::ADunDefPawn &pawn);
};
