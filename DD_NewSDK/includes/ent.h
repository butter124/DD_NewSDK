#pragma once
#include "SDK.hpp"
#include <SDK/DD_UDKGame_classes.hpp>

class EntityHelper {
public:
  EntityHelper();
  EntityHelper(Classes::AController *controller, Classes::ADunDefPawn *pawn);

  Classes::FVector getPos();
  void setPos(Classes::FVector pos);

  int getHealth();
  void setHealth(int i);
  bool moveTo(Classes::FVector &pos, float offset);
  float distanceToPoint(Classes::FVector &point);

  EntityHelper nextEntity(Classes::AController &controller,
                          Classes::ADunDefPawn &pawn);

private:
  bool bPathing = false;
};
