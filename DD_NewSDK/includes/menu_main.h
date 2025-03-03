#pragma once

#include "SDK.hpp"
#include "includes/config.h"
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
    MenuWorld,
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
  void WorldCheats();
  void Debug();
  void ImGuiLootFilter();
  void ImGuiLootFilterPair(StatFilter &filter);
  void NoClipHandleInput();
  void ImGuiPawn(Classes::ADunDefPawn *pPawn);
  void ImGuiTargetableActor(Classes::ADunDefDamageableTarget *pPawn);
  void ImGuiItem(Classes::UHeroEquipment *item);
  void ShowCombo(Classes::TArray<Classes::FEG_StatMatchingString> names,
                 Classes::FString CurrentSelected, unsigned char &_changeChar,
                 std::string comboName);
  void ImGuiTArrayOfItems(Classes::TArray<Classes::UHeroEquipment *> items,
                          std::string foldname,
                          std::function<void()> func = nullptr);
  void HelpMarker(std::string s);

  void ChangeFString(Classes::FString &str, char *to);
  void ItemModding();

  std::string ToLower(const std::string &str);
};
