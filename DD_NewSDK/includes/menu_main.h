#pragma once

#include "menu_item.h"
#include "menu_template.h"
#include <vector>

class MenuMain : public Menu_template {
public:
  std::vector<MenuItem> itemsVec;

protected:
  void Init() override;
  void OnBegin() override;
  void RenderUI() override;

  void BasicCheats();
  void VacuumCheats();
  void AddItem(Classes::UHeroEquipment *item);
  void RemoveItem(Classes::UHeroEquipment *item);
};
