#include "pch.h"
#include "LoggedStats.h"
#include "format"


  void LoggedStats::handleLogging(const std::string& funcName, const std::string& objectName, PROCESS_EVENT_ARGS){
  if (strcmp(funcName.c_str(), "Function UDKGame.DunDefEnemy.Dying.EndState") == 0) {
    TotalKillCount++;
    return;
  }

  if (strcmp(funcName.c_str(), "Function UDKGame.DunDefDroppedEquipment.AddToFloorStats") == 0) {
    TotalItemsDropped++;
    return;
  }

  if (strcmp(funcName.c_str(), "Function UDKGame.DunDefDroppedEquipment.ReportEquipmentToStats") == 0) {
    handleDroppedEquipment(obj, edx, pFunction, pParms, pResult);
    return;
  }
}

void LoggedStats::handleDroppedEquipment(PROCESS_EVENT_ARGS) {
  Classes::UHeroEquipment *tempweap = ((Classes::ADunDefDroppedEquipment *)(obj))->MyEquipmentObject;
  auto itemQuality = tempweap->NameIndex_QualityDescriptor;
  DroppedItemsCount[itemQuality]++;
}

void LoggedStats::getPlaytime(std::string &outStr) const {
  auto now = std::chrono::system_clock::now();
  auto duration = now - std::chrono::system_clock::from_time_t(StartTime);
  auto hours = std::chrono::duration_cast<std::chrono::hours>(duration).count();
  auto minutes = std::chrono::duration_cast<std::chrono::minutes>(duration).count() % 60;
  auto seconds = std::chrono::duration_cast<std::chrono::seconds>(duration).count() % 60;

  outStr = std::format("{:02}:{:02}:{:02}", hours, minutes, seconds);
}
