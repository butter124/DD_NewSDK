
// clang-format off
#include "pch.h"
#include "includes/menu_main.h"
// clang-format on

void MenuMain::Init() {
  AddItem(config.GetADunDefPlayerController()->myHero->HeroEquipments[0]);
}

void MenuMain::OnBegin() {
  ImGui::Begin("MainMenu");

  for (auto item : itemsVec) {
    item.Render();
  }
}

void MenuMain::RenderMenuButton(std::string name, std::function<void()> func,
                                bool isSelected) {
  ImVec4 selectedColor = isSelected
                             ? ImGui::GetStyle().Colors[ImGuiCol_ButtonActive]
                             : ImGui::GetStyle().Colors[ImGuiCol_Button];

  float avalibleWidth = ImGui::GetContentRegionAvail().x;
  ImVec2 buttonSize(avalibleWidth, 30.0f);

  ImGui::PushStyleColor(ImGuiCol_Button, selectedColor);
  if (ImGui::Button(name.c_str(), buttonSize))
    func();
  ImGui::PopStyleColor();
}

bool MenuMain::ChangeKeybindRequest(bool &_bKeyChangeRequest, int &_Key) {
  ImGuiIO &io = ImGui::GetIO();

  static bool localKeyGrabbed = false; // Changed to 'false' for C++ standard
  static int KeyChangeWindow = 0;
  static int KeyPressed = -1; // Initialized to -1 (invalid key)

  if (_bKeyChangeRequest) {
    // If we have a key change request, handle key grab
    if (!localKeyGrabbed) {
      ImGui::Text("Press a key to set a keybind");

      // Loop through all keys and check if any are pressed
      for (int i = 0; i < IM_ARRAYSIZE(io.KeysData); i++) {
        if (io.KeysData[i].Down) { // Check if the key is pressed
          KeyPressed = i;
          localKeyGrabbed = true;
          break; // Exit loop once the key is pressed
        }
      }
    } else {
      // If key is grabbed, wait for 6 frames to complete key selection
      if (KeyChangeWindow > 5) {
        KeyChangeWindow = 0;
        localKeyGrabbed = false;
        _Key = KeyPressed;          // Set the new keybind
        config.SaveKeybinds();      // Save the new keybinding
        _bKeyChangeRequest = false; // Reset the change request flag
      } else {
        KeyChangeWindow++;
        ImGui::Text("Press key: Waiting for %d frames",
                    6 - KeyChangeWindow); // Inform user of remaining wait time
        return false; // Return false while waiting for window to finish
      }
    }
  }
  return true; // Return true if key change is either not requested or completed
}

void MenuMain::RenderUI() {
  ImGui::SetNextWindowSize(ImVec2(500, 440), ImGuiCond_FirstUseEver);
  // left
  {
    ImGui::BeginChild("left pane", ImVec2(150, 0),
                      ImGuiChildFlags_Borders | ImGuiChildFlags_ResizeX);

    RenderMenuButton(
        "Basic Cheats", [this]() { selectedMenu = Menus::MenuBasic; },
        selectedMenu == 0);
    RenderMenuButton(
        "Config Cheats", [this]() { selectedMenu = Menus::MenuConfig; },
        selectedMenu == 1);

    ImGui::EndChild();
  }
  ImGui::SameLine();

  // right
  {
    ImGui::BeginGroup();
    ImGui::BeginChild(
        "item view",
        ImVec2(0, -ImGui::GetFrameHeightWithSpacing())); // Leave room for 1
    switch (selectedMenu) {
    case Menus::MenuBasic:
      BasicCheats();
      break;

    case Menus::MenuConfig:
      Config();
      break;

    default:
      BasicCheats();
      break;
    }
    ImGui::EndChild();
    ImGui::EndGroup();
  }
}

void MenuMain::BasicCheats() {
  // basic cheats
  {
    if (ImGui::Checkbox("Player Godmode", &config.bPlayerGodMode)) {
      config.TogglePlayerGodMode();
    }
    ImGui::Checkbox("Auto Kill", &config.bKillAllEnemys);
    ImGui::Checkbox("One kill to advance", &config.bKillOneToAdvance);
    ImGui::Checkbox("Enemys drop items", &config.bLootShower);
  }

  // vacuum cheats
  {
    if (ImGui::Button("Update vacuum pos")) {
      config.SetVacPos(config.GetPlayerPos());
    }
    ImGui::Checkbox("Vacuum hack", &config.bVacHack);
    if (config.bVacHack) {
      config.MoveEnemyPawns(config.vacPos);
    }
    // Vacuum point is done in postrender
    ImGui::Checkbox("Show vacuum point", &config.bShowVacuumPos);
  }

  // level cheats
  {
    ImGui::PushItemWidth(75);
    ImGui::InputInt("##waveskip", &config.waveToSkipTo);
    ImGui::SameLine();
    ImGui::Checkbox("Level skip", &config.bSkipWave);
    ImGui::PopItemWidth();
  }
}

void MenuMain::AddItem(Classes::UHeroEquipment *item) {
  MenuItem menu;
  menu.SetItem(item);
  itemsVec.push_back(menu);
}

void MenuMain::Config() {

  static const char *itemQualitys[] = {"None",      "Mythical",  "Transcendent",
                                       "Supreme",   "Ultimate",  "Ultimate93",
                                       "Ultimate+", "Ultimate++"};
  ImGui::Text("Configs");
  ImGui::Separator();
  ImVec2 settingsbuttonProperty = ImVec2(275, 20);

  if (ImGui::TreeNode("Menu Settings")) {

    if (ImGui::Button("Set Menu Toggle Keybind", settingsbuttonProperty)) {
      config.bToggleKeyChangeRequest = TRUE;
    }
    ImGui::SameLine();

    std::string tmpString =
        "Current : " + VirtualKeyCodeToString(config.ToggleKey);
    ImGui::Text(tmpString.c_str(), config.ToggleKey, config.ToggleKey);

    if (ImGui::Button("Set Menu End Keybind", settingsbuttonProperty)) {
      config.bEndKeyKeyChangeRequest = TRUE;
    }
    ImGui::SameLine();
    tmpString = "Current : " + VirtualKeyCodeToString(config.EndKey);
    ImGui::Text(tmpString.c_str(), config.EndKey, config.EndKey);

    if (ImGui::Button("Set Get Teleport Keybind", settingsbuttonProperty)) {
      config.NewTeleportKeyKeyChangeRequest = TRUE;
    }
    ImGui::SameLine();
    tmpString = "Current : " + VirtualKeyCodeToString(config.NewTeleportKey);
    ImGui::Text(tmpString.c_str(), config.NewTeleportKey,
                config.NewTeleportKey);

    if (ImGui::Button("Set Teleport Keybind", settingsbuttonProperty)) {
      config.TeleportPlayerKeyKeyChangeRequest = TRUE;
    }
    ImGui::SameLine();
    tmpString = "Current : " + VirtualKeyCodeToString(config.TeleportPlayerKey);
    ImGui::Text(tmpString.c_str(), config.TeleportPlayerKey,
                config.TeleportPlayerKey);

    if (config.bToggleKeyChangeRequest)
      ChangeKeybindRequest(config.bToggleKeyChangeRequest, config.ToggleKey);
    if (config.bEndKeyKeyChangeRequest)
      ChangeKeybindRequest(config.bEndKeyKeyChangeRequest, config.EndKey);
    if (config.NewTeleportKeyKeyChangeRequest)
      ChangeKeybindRequest(config.NewTeleportKeyKeyChangeRequest,
                           config.NewTeleportKey);
    if (config.TeleportPlayerKeyKeyChangeRequest)
      ChangeKeybindRequest(config.TeleportPlayerKeyKeyChangeRequest,
                           config.TeleportPlayerKey);

    ImGui::TreePop();
  }
  // if (ImGui::TreeNode("Cheat Settings")) {
  //   ImGui::InputInt("Multiply By", &MultiplyRewardsBy);
  //   // ImGui::SliderInt("Reward Multiply", &MultiplyRewardsBy, 0, 10000);
  //   ImGui::TreePop();
  // }
  if (ImGui::TreeNode("AutoLoot Settings")) {
    int FilterMax = 500;
    ImGui::InputInt("Hero Health", &config.lootFilter[eHHealth]);
    ImGui::InputInt("Hero Speed", &config.lootFilter[eHSpeed]);
    ImGui::InputInt("Hero Damage", &config.lootFilter[eHDamage]);
    ImGui::InputInt("Hero Cast", &config.lootFilter[eHCast]);
    ImGui::InputInt("Ability1", &config.lootFilter[Ability1]);
    ImGui::InputInt("Ability2", &config.lootFilter[Ability2]);
    ImGui::InputInt("Tower Health", &config.lootFilter[eTHealth]);
    ImGui::InputInt("Tower Speed", &config.lootFilter[eTSpeed]);
    ImGui::InputInt("Tower Damage", &config.lootFilter[eTDamage]);
    ImGui::InputInt("Tower Range", &config.lootFilter[eTRange]);

    ImGui::Combo("Quality", &config.itemFilterQuality, itemQualitys,
                 IM_ARRAYSIZE(itemQualitys));

    // ImGui::Combo("combo 3 (array)", &item_current_3, items,
    // IM_ARRAYSIZE(items));

    ImGui::Text("Items Added : %d   |  Items Filtered : %d", config.itemsLooted,
                config.itemsChecked);
    ImGui::SameLine();
    if (ImGui::Button("Reset")) {
      config.itemsLooted = 0;
      config.itemsChecked = 0;
    }
    ImGui::TreePop();
  }
}

std::string MenuMain::VirtualKeyCodeToString(UCHAR virtualKey) {
  UINT scanCode = MapVirtualKey(virtualKey, MAPVK_VK_TO_VSC);

  CHAR szName[128];
  int result = 0;
  switch (virtualKey) {
  case VK_LEFT:
  case VK_UP:
  case VK_RIGHT:
  case VK_DOWN:
  case VK_RCONTROL:
  case VK_RMENU:
  case VK_LWIN:
  case VK_RWIN:
  case VK_APPS:
  case VK_PRIOR:
  case VK_NEXT:
  case VK_END:
  case VK_HOME:
  case VK_INSERT:
  case VK_DELETE:
  case VK_DIVIDE:
  case VK_NUMLOCK:
    scanCode |= KF_EXTENDED;
  default:
    result = GetKeyNameTextA(scanCode << 16, szName, 128);
  }
  if (result == 0)
    throw std::system_error(
        std::error_code(GetLastError(), std::system_category()),
        "WinAPI Error occured.");
  return szName;
}

void MenuMain::RemoveItem(Classes::UHeroEquipment *item) {}
