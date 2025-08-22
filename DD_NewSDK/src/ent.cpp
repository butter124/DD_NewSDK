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
// EntityHelper::EntityHelper() : controller(nullptr), pawn(nullptr) {}
// EntityHelper::EntityHelper(Classes::AController *controller,
// Classes::ADunDefPawn *pawn) {
//   this->pawn = pawn;
//   this->controller = controller;
// }
//
// Classes::FVector EntityHelper::getPos() {
//   if (pawn)
//     return {0, 0, 0};
//
//   return pawn->Location;
// }
//
// void EntityHelper::setPos(Classes::FVector pos) {
//   if (controller->Pawn)
//     pawn->Location = pos;
// }
//
// int EntityHelper::getHealth() {
//   if (pawn)
//     return pawn->Health;
//   return -1;
// }
//
// void EntityHelper::setHealth(int i) {
//   if (pawn)
//     pawn->Health = i;
// }
//
// bool EntityHelper::moveTo(Classes::FVector &pos, float offset) {
//   LUA_ENGINE::get_instance().insert_thread_safe_request([this, pos, offset]()
//   {
//     controller->MoveToDirectNonPathPos(pos, nullptr, offset, false);
//   });
//
//   return distanceToPoint(pos) <= offset;
// }
//
// float EntityHelper::distanceToPoint(Classes::FVector &point) {
//
//   return config->Distance(pawn->Location, point);
// }
