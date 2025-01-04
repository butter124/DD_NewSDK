#pragma once

#include "menu_item.h"
#include "menu_template.h"
#include <vector>

class MenuMain : public Menu_template {

public:
  enum Menus { MenuBasic, MenuConfig, MenuPlayer };
  void Init() override;
  void OnBegin() override;
  void RenderUI() override;
  void Thread() override;

  void AddItem(Classes::UHeroEquipment *item);
  void RemoveItem(Classes::UHeroEquipment *item);

private:
  Menus selectedMenu = Menus::MenuBasic;
  std::vector<MenuItem> itemsVec;

  void RenderMenuButton(std::string name, std::function<void()> func,
                        bool isSelected);

  int GetKeydown();

  bool ChangeKeybindRequest(int &keyToChange, int changeTo);
  std::string VirtualKeyCodeToString(UCHAR virtualKey);
  bool HandleKeyChange(int &key, bool &shouldChange);

protected:
  void BasicCheats();
  void Config();
  void PlayerCheats();
};
