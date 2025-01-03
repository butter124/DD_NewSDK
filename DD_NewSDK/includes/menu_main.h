#pragma once

#include "menu_item.h"
#include "menu_template.h"
#include <vector>

class MenuMain : public Menu_template {

public:
  enum Menus { Basic, Vacuum };
  void Init() override;
  void OnBegin() override;
  void RenderUI() override;

  void AddItem(Classes::UHeroEquipment *item);
  void RemoveItem(Classes::UHeroEquipment *item);

private:
  Menus selectedMenu = Menus::Basic;
  std::vector<MenuItem> itemsVec;

  void RenderMenuButton(std::string name, std::function<void()> func,
                        bool isSelected);

protected:
  void BasicCheats();
  void VacuumCheats();
};
