#pragma once

#include <fstream>
#include <string>
#include <windows.h>

class Logger {
private:
  std::ofstream logFile;
  std::string fileName;

public:
  Logger(std::string filename);
  void setfilename(std::string &filename);
  void openfile(bool clear = false);
  void closefile();
  void log(const std::string &msg);
  static LONG WINAPI ExceptionHandler(EXCEPTION_POINTERS *pExceptionInfo);
  ~Logger();
};
