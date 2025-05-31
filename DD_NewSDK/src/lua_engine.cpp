
// clang-format off
#include "pch.h"
#include "lua_engine.h"
#include "config.h"
// clang-format on

LUA_ENGINE::LUA_ENGINE() {
  // Init the lua state
}

bool LUA_ENGINE::init() {

  if (is_init)
    return false;
  is_init = true;

  log("Initalizing Lua engine");
  L.open_libraries(sol::lib::base);
  init_lua_functions();
  return true;
};
bool LUA_ENGINE::cleanup() {
  if (!is_init)
    return false;
  log("Cleaning up Lua engine");
  return true;
};

bool LUA_ENGINE::init_lua_functions() {
  log("Loading Lua api");
  // Put any lua functions here for the lua api
  L.set_function("set_player_health", set_player_health);

  return true;
}

bool LUA_ENGINE::execute_lua_file(const std::string &filename) {
  try {
    L.script_file(filename);
    log("Executed " + filename);
    return true;
  } catch (const sol::error &e) {
    log("Failed to execute " + filename + " : " + e.what());
    return false;
  }
}

bool LUA_ENGINE::log(const std::string &s) {
  config.logger.log("[LUA_ENGINE] %s", s.c_str());
  return true;
}

LUA_ENGINE &LUA_ENGINE::get_instance() {
  static LUA_ENGINE L;
  return L;
}

// GAME FUNCTIONS
int LUA_ENGINE::set_player_health(int var) {
  config.GetPlayerPawn()->Health = var;
  return var;
}
