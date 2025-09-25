#pragma once
#include "SDK.hpp"
#include <SDK/DD_UDKGame_classes.hpp>

class EntityHelper {
  Classes::ADunDefPawn *pawn;
public:
  EntityHelper(Classes::ADunDefPawn *ent = nullptr) : pawn(ent){}

  void setEntity(Classes::ADunDefPawn *ent) { pawn = ent; }
  const Classes::FVector getPos();
  void setPos(Classes::FVector pos);
  int getHealth(bool max) const;
  void setHealth(int i);
  void takeDamage(int damage);
};
