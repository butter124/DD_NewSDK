// clang-format off
#include "pch.h"
#include "includes/ent.h"
#include <SDK/DD_Core_structs.hpp>
#include <SDK/DD_Engine_classes.hpp>
#include <SDK/DD_UDKGame_classes.hpp>
#include <mutex>
#include "includes/config.h"
#include "includes/lua_engine.h"
// clang-format on
Entity::Entity() : controller(nullptr), pawn(nullptr) {}
Entity::Entity(Classes::AController *controller, Classes::ADunDefPawn *pawn) {
  this->pawn = pawn;
  this->controller = controller;
}

Classes::FVector Entity::getPos() {
  if (pawn)
    return {0, 0, 0};

  return pawn->Location;
}

void Entity::setPos(Classes::FVector pos) {
  if (controller->Pawn)
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

bool Entity::moveTo(Classes::FVector &pos, float offset) {
  LUA_ENGINE::get_instance().insert_thread_safe_request([this, pos, offset]() {
    controller->MoveToDirectNonPathPos(pos, nullptr, offset, false);
  });

  return distanceToPoint(pos) <= offset;
}

float Entity::distanceToPoint(Classes::FVector &point) {

  return config->Distance(pawn->Location, point);
}
