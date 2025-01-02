#pragma once
#include "menu_template.h"

#include "SDK.hpp"
#include "includes/config.h"

class MenuItem : public Menu_template {
private:
protected:
  void OnBegin() override;
  void RenderUI() override;

  void RenderItem();
  void FoldStatsAndDamage();
  void FeaturesAndRequirements();

public:
  char itemName[255];
  Classes::UHeroEquipment *uHeroEquipment;
  void SetItem(Classes::UHeroEquipment *obj);
  void ChangeFString(Classes::FString &str, char *to);
};
