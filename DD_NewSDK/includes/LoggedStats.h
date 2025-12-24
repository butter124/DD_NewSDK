#pragma once
#include "config.h"
#include <string>
#include <chrono>
#include <array>

class LoggedStats
{
public:
	int TotalKillCount{};
	int TotalItemsDropped{};
  std::time_t StartTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
  std::array<int, 20> DroppedItemsCount{};

  static LoggedStats &getInstance()
  {
    static LoggedStats instance;
    return instance;
  }

  void logKill() { TotalKillCount++; }
  void logItemDrop() { TotalItemsDropped++; }
  int getTotalKills() const { return TotalKillCount; }
  int getTotalItemsDropped() const { return TotalItemsDropped; }
  void handleLogging(const std::string& funcName, const std::string& objectName, PROCESS_EVENT_ARGS);
  void getPlaytime(std::string& outStr) const;


private:
  LoggedStats() = default;
  ~LoggedStats() = default;
  LoggedStats(const LoggedStats &) = delete;
  LoggedStats &operator=(const LoggedStats &) = delete;

  void handleDroppedEquipment(PROCESS_EVENT_ARGS);
};

