#pragma once

// clang-format off
#include "pch.h"
#include "includes/config.h"
#include <string>
// clang-format on

#include <sol/sol.hpp>
class LUA_ENGINE {
public:
  static LUA_ENGINE &get_instance();
  bool init();
  bool cleanup();
  bool execute_lua_file(const std::string &filename);

  // API FUNCTIONS
  static int set_player_health(int var);

private:
  LUA_ENGINE();
  LUA_ENGINE(const LUA_ENGINE &) = delete;
  LUA_ENGINE &operator=(const LUA_ENGINE &) = delete;
  sol::state L;

  bool is_init = false;
  bool init_lua_functions();
  bool log(const std::string &s);
};
