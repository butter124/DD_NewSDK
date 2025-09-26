#pragma once

// clang-format off
#include "pch.h"
#include "includes/config.h"
#include "includes/ent.h"
#include "includes/playerHelper.h"
#include <SDK/DD_Core_structs.hpp>
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
  bool execute_lua_string(const std::string &str);

  void handleThreadSafeContent();

  static Classes::FVector test();
  sol::state L;

  std::mutex threadsafe_lua_task_mtx;
  static std::queue<std::function<void()>> threadsafe_lua_tasks;
  void insert_thread_safe_request(std::function<void()> v);
  int get_event_count() const;

private:
  LUA_ENGINE();
  LUA_ENGINE(const LUA_ENGINE &) = delete;
  LUA_ENGINE &operator=(const LUA_ENGINE &) = delete;

  static void thread_main();
  static std::mutex coroutine_mtx;
  static std::queue<std::pair<sol::thread,sol::coroutine>> coroutine_queue;
  std::thread thread_worker;
  static bool bRunning;
  static void push_lua_task(sol::object lua_callable);

  bool is_init = false;
  bool init_lua_functions();
  bool init_lua_classes();
  static bool log(const std::string &s);

  // API FUNCTION
  static PlayerHelper &playerHelper;
  static void block_inputs(bool block);

  static float distance_between(Classes::FVector to, Classes::FVector from);
  static void add_floating_text_in_world(const std::string &s,
                                         Classes::FVector pos);
  static void remove_floating_text_in_world(const std::string &s);

  static int set_player_health(int playerNum, int var);
  static int get_player_health(int playerNum);

  static void set_player_location(int playerNum, Classes::FVector pos);
  static Classes::FVector get_player_location(int playerNum);
  static void player_move_to_event(int playerNum, Classes::FVector pos);
};
