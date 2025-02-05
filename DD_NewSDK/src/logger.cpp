// clang-format off
#include "pch.h"
#include "Logger.h"
// clang-format on

Logger::Logger(const std::string &filename)
    : logFile(filename, std::ios::app) {}

void Logger::log(const std::string &msg) {
  if (logFile)
    logFile << msg << std::endl;
}

Logger::~Logger() {
  // File closes automatically when logFile goes out of scope
}
