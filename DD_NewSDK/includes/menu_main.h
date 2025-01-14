#pragma once

#include "SDK.hpp"
#include "menu_template.h"
#include <functional>
#include <string>
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
  void ImGuiTArrayOfItems(Classes::TArray<Classes::UHeroEquipment *> items,
                          std::string foldname);

  void ChangeFString(Classes::FString &str, char *to);
  void ItemModding();

  std::string ToLower(const std::string &str);
};
