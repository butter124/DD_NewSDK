#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

class Logger {
private:
  std::ofstream logFile;
  std::string fileName;
  bool bLogging = true;

public:
  Logger(std::string filename);

  void ConsoleAttached();
  void ConsoleDettached();
  bool bConsoleAttached = false;

  void setfilename(std::string &filename);
  void openfile(bool clear = false);
  void closefile();
  template <typename... Args> void log(const char *format, Args... args) {
    if (!bLogging || !bConsoleAttached)
      return;

    int size = std::snprintf(nullptr, 0, format, args...) +
               1; // +1 for null terminator
    std::vector<char> buf(size);
    std::snprintf(buf.data(), size, format, args...);

    std::cout << std::string(buf.data(), buf.data() + size - 1) << std::endl;
  }
  void logToFile(const std::string &msg);

  LONG WINAPI ExceptionHandler(int sig);
  ~Logger();
};
