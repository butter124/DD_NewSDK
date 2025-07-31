// clang-format off
#include "config.h"
#include "ent.h"
#include "pch.h"
#include "includes/player.h"
#include "includes/config.h"
// clang-format on

Player::Player(Classes::ADunDefPlayerController *c, Classes::ADunDefPawn *p)
    : Entity(static_cast<Classes::AController *>(c), p) {}

Player::Player() {}

void Player::myHud() {}
