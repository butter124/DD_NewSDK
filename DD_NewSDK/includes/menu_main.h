#pragma once

#include "menu_item.h"
#include "menu_template.h"
#include <vector>

class MenuMain : public Menu_template {

public:
  enum Menus { MenuBasic, MenuConfig };
  void Init() override;
  void OnBegin() override;
  void RenderUI() override;

  void AddItem(Classes::UHeroEquipment *item);
  void RemoveItem(Classes::UHeroEquipment *item);

private:
  Menus selectedMenu = Menus::MenuBasic;
  std::vector<MenuItem> itemsVec;

  void RenderMenuButton(std::string name, std::function<void()> func,
                        bool isSelected);
  bool ChangeKeybindRequest(bool &_bKeyChangeRequest, int &_Key);
  std::string VirtualKeyCodeToString(UCHAR virtualKey);

protected:
  void BasicCheats();
  void Config();
};
