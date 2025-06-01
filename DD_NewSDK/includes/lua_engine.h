#pragma once

// clang-format off
#include "pch.h"
#include "includes/config.h"
#include "includes/ent.h"
#include "includes/player.h"
#include <mutex>
#include <sol/forward.hpp>
#include <string>
#include <thread>
#include <queue>
// clang-format on

#include <sol/sol.hpp>
class LUA_ENGINE {
public:
  static LUA_ENGINE &get_instance();
  bool init();
  bool cleanup();
  bool execute_lua_file(const std::string &filename);

  static int set_player_health(int var);
  static Entity *get_player();
  static Classes::FVector test();
  sol::state L;

private:
  LUA_ENGINE();
  LUA_ENGINE(const LUA_ENGINE &) = delete;
  LUA_ENGINE &operator=(const LUA_ENGINE &) = delete;

  static void thread_main();
  static std::mutex mtx;
  static std::queue<sol::coroutine> coroutine_queue;
  std::thread thread_worker;
  static bool bRunning;
  static void push_lua_task(sol::object lua_callable);

  bool is_init = false;
  bool init_lua_functions();
  bool init_lua_classes();
  static bool log(const std::string &s);

  // API FUNCTION
  static Player luaPlayer;
};
