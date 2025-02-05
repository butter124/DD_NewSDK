#pragma once

#include <fstream>
#include <string>

class Logger {
private:
  std::ofstream logFile;

public:
  Logger(const std::string &filename);
  void log(const std::string &msg);
  ~Logger();
};
