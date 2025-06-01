// clang-format off
#include "ent.h"
#include "pch.h"
#include "includes/player.h"
// clang-format on

Player::Player(Classes::ADunDefPlayerController *c, Classes::ADunDefPawn *p)
    : Entity(static_cast<Classes::AController *>(c), p) {}

Player::Player() {}
