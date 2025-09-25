// clang-format off
#include "pch.h"
#include "includes/ent.h"
#include <SDK/DD_Core_structs.hpp>
#include <SDK/DD_Engine_classes.hpp>
#include <SDK/DD_UDKGame_classes.hpp>
// clang-format on

const Classes::FVector EntityHelper::getPos(){
  return pawn->Location;
}
void EntityHelper::setPos(Classes::FVector pos){
  pawn->Location = pos;
}

int EntityHelper::getHealth(bool max) const {
  return pawn->GetHealth(max);
}

void EntityHelper::setHealth(int i) {
  pawn->Health = i;
}

void EntityHelper::takeDamage(int damage){
  pawn->TakeDamage(damage, nullptr, {}, {}, nullptr, {}, nullptr,nullptr);
}
