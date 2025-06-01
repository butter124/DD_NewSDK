// clang-format off
#include "pch.h"
#include "includes/ent.h"
#include <SDK/DD_Core_structs.hpp>
#include <SDK/DD_Engine_classes.hpp>
#include <SDK/DD_UDKGame_classes.hpp>
#include "includes/config.h"
// clang-format on
Entity::Entity() : controller(nullptr), pawn(nullptr) {}
Entity::Entity(Classes::AController *controller, Classes::ADunDefPawn *pawn) {
  this->pawn = pawn;
  this->controller = controller;
}

Classes::FVector Entity::getPos() {
  if (!this->pawn)
    return {0, 0, 0};

  return pawn->Location;
}

void Entity::setPos(Classes::FVector pos) {
  if (this->pawn)
    pawn->Location = pos;
}

int Entity::getHealth() {
  if (pawn)
    return pawn->Health;
  return -1;
}

void Entity::setHealth(int i) {
  if (pawn)
    pawn->Health = i;
}
