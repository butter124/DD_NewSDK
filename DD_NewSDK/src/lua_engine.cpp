
// clang-format off
#include "pch.h"
#include <SDK/DD_Core_structs.hpp>
#include <mutex>
#include <sol/forward.hpp>
#include <sol/sol.hpp>
#include <sol/state_view.hpp>
#include <stdexcept>
#include <thread>
#include "includes/lua_engine.h"


Player LUA_ENGINE::luaPlayer;
std::mutex LUA_ENGINE::mtx;
bool LUA_ENGINE::bRunning;
std::queue<sol::coroutine> LUA_ENGINE::coroutine_queue;

LUA_ENGINE::LUA_ENGINE()  {
  // Init the lua state
}

bool LUA_ENGINE::init() {

  if (is_init)
    return false;
  is_init = true;

  Classes::ADunDefPlayerController*playerController =  config->GetADunDefPlayerController();
  Classes::ADunDefPawn*playerPawn =  config->GetPlayerPawn();
  luaPlayer = Player(playerController,playerPawn);
  log("Initalizing Lua engine");
  L.open_libraries(sol::lib::base, sol::lib::string, sol::lib::coroutine);
  init_lua_classes();
  init_lua_functions();


  bRunning = true;
  thread_worker = std::thread(thread_main);
  thread_worker.detach();
  //L.script_file("D:\\Projects\\cpp\\DD_NewSDK\\Debug\\test.lua");

  return true;
};


void LUA_ENGINE::thread_main(){
  while(bRunning){
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    std::lock_guard<std::mutex> lock(mtx);

    size_t n = coroutine_queue.size();
    for (int i = 0; i < n; i++) {
      auto co = coroutine_queue.front();
      coroutine_queue.pop();

      if(co.valid()){
        sol::protected_function_result res = co();
        if (!res.valid()) {
            sol::error err = res;
            log(std::string("Lua error: ") + err.what());
        }
        else if(res.status() == sol::call_status::yielded) {
            coroutine_queue.push(co);
        }
        else if(co.valid()){

        }
      }
    }
  }
}

void LUA_ENGINE::push_lua_task(sol::object lua_callable){
  sol::state_view lua = lua_callable.lua_state();
  sol::coroutine co;

  if(lua_callable.get_type() == sol::type::function)
  {
    sol::function f = lua_callable;
    sol::thread new_thread = sol::thread::create(lua);
    sol::state_view thread_state = new_thread.state();
    thread_state["entry"] = f;
    co = sol::coroutine(thread_state["entry"]);
  }
  else if (lua_callable.get_type() == sol::type::thread)
  {
    co = sol::coroutine(lua_callable);
  }
  else
  {
    throw std::runtime_error("Not a callable or coroutine");
  }

  if(co.valid()){
    std::lock_guard<std::mutex> lock(mtx);
    coroutine_queue.push(co);
  }
}

bool LUA_ENGINE::init_lua_classes() { 
  log("Registering lua classes.");

  L.new_usertype<Classes::FVector>("FVector",
      sol::constructors<Classes::FVector(float, float, float)>(),
      "X", &Classes::FVector::X,
      "Y", &Classes::FVector::Y,
      "Z", &Classes::FVector::Z
  );



  L.new_usertype<Entity>("Entity",
                         sol::no_constructor,
                         "getHealth", &Entity::getHealth,
                         "setHealth", &Entity::setHealth,
                         "setPos", &Entity::setPos,
                         "getPos", &Entity::getPos
                         );

L.new_usertype<Player>("Player",
                       sol::no_constructor,
                       sol::base_classes, sol::bases<Entity>());
  return true; }

bool LUA_ENGINE::cleanup() {
  if (!is_init)
    return false;
  log("Cleaning up Lua engine");
  bRunning = false;
  coroutine_queue = std::queue<sol::coroutine>();
  return true;
};

bool LUA_ENGINE::init_lua_functions() {

  log("Registering lua functions.");
  // Put any lua functions here for the lua api
  // L.set_function("set_player_health", set_player_health);
  L.set_function("get_player", get_player);
  L.set_function("test", test);
  L.set_function("push_lua_task", push_lua_task);

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
  config->logger.log("[LUA_ENGINE] %s", s.c_str());
  return true;
}

LUA_ENGINE &LUA_ENGINE::get_instance() {
  static LUA_ENGINE L;
  return L;
}

// GAME FUNCTIONS
int LUA_ENGINE::set_player_health(int var) {
  config->GetPlayerPawn()->Health = var;
  return var;
}


Entity* LUA_ENGINE::get_player(){
std::ostringstream oss;
  return &luaPlayer;
}

  Classes::FVector LUA_ENGINE::test(){
  return {1337,1337,1337};
}
// clang-format on
