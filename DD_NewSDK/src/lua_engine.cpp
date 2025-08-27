
// clang-format off
#include "pch.h"
#include <SDK/DD_Core_structs.hpp>
#include <algorithm>
#include <mutex>
#include <sol/forward.hpp>
#include <sol/sol.hpp>
#include <sol/state_view.hpp>
#include <sol/types.hpp>
#include <stdexcept>
#include <thread>
#include "includes/lua_engine.h"


std::mutex LUA_ENGINE::coroutine_mtx;
bool LUA_ENGINE::bRunning;
std::queue<std::pair<sol::thread,sol::coroutine>> LUA_ENGINE::coroutine_queue;
std::queue<std::function<void()>> LUA_ENGINE::threadsafe_lua_tasks;

LUA_ENGINE::LUA_ENGINE()  {
  // Init the lua state
}

bool LUA_ENGINE::init() {

  if (is_init)
    return false;
  is_init = true;

  Classes::ADunDefPlayerController*playerController =  config->GetADunDefPlayerController();
  Classes::ADunDefPawn*playerPawn1 =  config->GetPlayerPawnByIndex(0);
  Classes::ADunDefPawn*playerPawn2 =  config->GetPlayerPawnByIndex(1);
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



void LUA_ENGINE::thread_main() {
    while (bRunning) {
      //log(std::format("coroutines: {}", coroutine_queue.size()));

        std::this_thread::sleep_for(std::chrono::milliseconds(1));

        std::queue<std::pair<sol::thread,sol::coroutine>> temp_queue;
        {
            std::lock_guard<std::mutex> lock(coroutine_mtx);
            if (!coroutine_queue.empty()) {
              temp_queue.swap(coroutine_queue);
            }
      }

    while(!temp_queue.empty())
    {
      sol::coroutine co = temp_queue.front().second;
	  sol::thread th = temp_queue.front().first;
      temp_queue.pop();

      if(co.valid()){
        sol::protected_function_result res = co();
        if(!res.valid()){
          sol::error err = res;
          std::cerr << "Error: " << err.what() << "\n";
        }
        else if(res.status() == sol::call_status::yielded && co) {
          std::lock_guard<std::mutex> lock(coroutine_mtx);
          coroutine_queue.push(std::pair(th,co));
        }
      }
    }
}

}
void LUA_ENGINE::push_lua_task(sol::object lua_callable){

  if (lua_callable.get_type() == sol::type::function) {
    sol::thread thread = sol::thread::create(LUA_ENGINE::get_instance().L);

    sol::state_view thread_lua = thread.state();

    sol::coroutine co(thread_lua,lua_callable);
    std::lock_guard<std::mutex> lock(coroutine_mtx);
    coroutine_queue.push(std::pair(std::move(thread),std::move(co)));
  }
  // else if (lua_callable.get_type() == sol::type::thread)
  // {
  //   co = lua_callable.as<sol::coroutine>();
  // }
  else
  {
    throw std::runtime_error("Not a callable or coroutine");
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

  // Outdated exmaple of binding cpp to the lua engine
  // L.new_usertype<Entity>("Entity",
  //                        sol::no_constructor,
  //                        "getHealth", &Entity::getHealth,
  //                        "setHealth", &Entity::setHealth,
  //                        "setPos", &Entity::setPos,
  //                        "getPos", &Entity::getPos,
  //                        "moveTo", &Entity::moveTo,
  //                        "distanceToPoint",&Entity::distanceToPoint
  //                        );

  return true; 
}

bool LUA_ENGINE::cleanup() {
  if (!is_init)
    return false;
  log("Cleaning up Lua engine");
  bRunning = false;
  coroutine_queue.empty();
  return true;
};

bool LUA_ENGINE::init_lua_functions() {

  log("Registering lua functions.");
  // Put any lua functions here for the lua api
  // L.set_function("set_player_health", set_player_health);
  L.set_function("push_lua_task", push_lua_task);
  L.set_function("add_floating_text_in_world",add_floating_text_in_world);
  L.set_function("remove_floating_text_in_world",remove_floating_text_in_world);
  L.set_function("distance_between", distance_between);

  L.set_function("set_player_health", set_player_health);
  L.set_function("get_player_health", get_player_health);
  L.set_function("set_player_location", set_player_location);
  L.set_function("get_player_location", get_player_location);
  L.set_function("player_move_to", player_move_to);
  L.set_function("block_inputs", block_inputs);


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

bool LUA_ENGINE::execute_lua_string(const std::string &str) {
  try {
    L.script(str);
    return true;
  } catch (const sol::error &e) {
    log(std::string("Failed to execute   : ") + e.what());
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

Classes::FVector LUA_ENGINE::test(){
return {1337,1337,1337};
}

void LUA_ENGINE::add_floating_text_in_world(const std::string &s,
                                        Classes::FVector pos
                                         ){
  config->AddPointToScreenDrawingQueue(s,pos);
}

void LUA_ENGINE::remove_floating_text_in_world(const std::string &s){
  config->RemovePointToScreenDrawingQueue(s);
}

void LUA_ENGINE::insert_thread_safe_request(std::function<void()> v) {
  std::lock_guard<std::mutex> lock(threadsafe_lua_task_mtx);
  threadsafe_lua_tasks.push(v);
}


float LUA_ENGINE::distance_between(Classes::FVector to, Classes::FVector from){
  return config->Distance(to,from);
}


int LUA_ENGINE::set_player_health(int playerNum, int health) {
  config->setPlayerHealth(playerNum, health);
  return health;
}

int LUA_ENGINE::get_player_health(int playerNum){
  return config->getPlayerHealth(playerNum);
}

void LUA_ENGINE::set_player_location(int playerNum, Classes::FVector pos){
  config->setPlayerLocation(playerNum, pos);
}

Classes::FVector LUA_ENGINE::get_player_location(int playerNum){
  return config->getPlayerLocation(playerNum);
}

void LUA_ENGINE::player_move_to(int playerNum, Classes::FVector pos){
  config->playerMoveTo(playerNum, pos);
}
void LUA_ENGINE::block_inputs(bool block){
  config->bBlockInput = block;
}
