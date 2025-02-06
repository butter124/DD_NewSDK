// clang-format off
#include "pch.h"
#include "Logger.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
// clang-format on

Logger::Logger(const std::string &filename)
    : logFile(filename, std::ios::app) {}

void Logger::log(const std::string &msg) {
  if (logFile) {
    // Get current time
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    std::tm tm;

    // Use localtime_s for Windows
    localtime_s(&tm, &now_time);

    // Format timestamp
    std::ostringstream timestamp;
    timestamp << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");

    // Write timestamp and message to log file
    logFile << "[" << timestamp.str() << "] " << msg << std::endl;
  }
}

Logger::~Logger() {
  // File closes automatically when logFile goes out of scope
}
