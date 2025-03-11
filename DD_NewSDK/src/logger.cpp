// clang-format off
#include "pch.h"
#include "Logger.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
// clang-format on

// std::ofstream Logger::logFile;
// std::string Logger::fileName;

Logger::Logger(std::string filename) {
  setfilename(filename);
  return;
}

void Logger::setfilename(std::string &filename) {
  fileName = filename;
  return;
}

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
    logFile << "[" << timestamp.str() << "] " << msg << "\n";
  }
}

void Logger::openfile(bool clear) {
  if (!logFile.is_open() || clear) {
    // Clear file if 'clear' is true, or reopen if not open
    logFile.open(fileName,
                 clear ? std::ios::trunc | std::ios::app : std::ios::app);
  }
}

void Logger::closefile() { logFile.close(); }

 LONG WINAPI Logger::ExceptionHandler(int sig) {
   if (!logFile.is_open())
     openfile(false);
   std::stringstream ss;
   ss << "Crash detected! " << sig;

   log(ss.str()); // Convert to string and log
   return EXCEPTION_EXECUTE_HANDLER;
 }

Logger::~Logger() {
  // File closes automatically when logFile goes out of scope
  closefile();
}
