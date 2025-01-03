#pragma once

#include "SDK.hpp"
#include "config.h"
#include "menu_template.h"

class MenuItem : public Menu_template {
protected:
  void OnBegin() override;
  void RenderUI() override;

public:
  char itemName[255];
  Classes::UHeroEquipment *uHeroEquipment;
  void SetItem(Classes::UHeroEquipment *obj);
  void ChangeFString(Classes::FString &str, char *to);
  void RenderItem();
  void FoldStatsAndDamage();
  void FeaturesAndRequirements();
};
