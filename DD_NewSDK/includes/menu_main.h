#pragma once

#include "includes/ImGui/imgui.h"
#include "includes/menu_template.h"

#include "includes/Menu_Item.h"
#include "includes/config.h"
#include <vector>

class MenuMain : public Menu_template {
private:
  std::vector<MenuItem> items;

protected:
  void Init() override;
  void OnBegin() override;
  void RenderUI() override;

  void BasicCheats();
  void VacuumCheats();
  void AddItem(Classes::UHeroEquipment *item);
  void RemoveItem(Classes::UHeroEquipment *item);
};
