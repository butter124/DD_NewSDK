#pragma once

#include "menu_item.h"
#include "menu_template.h"
#include <vector>

class MenuMain : public Menu_template {

public:
  enum Menus {
    MenuBasic,
    MenuPlayer,
    MenuModding,
    MenuConfig,
  };
  void Init() override;
  void OnBegin() override;
  void RenderUI() override;
  void Thread() override;

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
  void Debug();
  void NoClipHandleInput();
  void ImGuiItem(Classes::UHeroEquipment *item);
  void ShowCombo(Classes::TArray<Classes::FEG_StatMatchingString> names,
                 Classes::FString CurrentSelected, unsigned char &_changeChar,
                 std::string comboName);

  void ChangeFString(Classes::FString &str, char *to);
  void ItemModding();
};
