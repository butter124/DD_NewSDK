
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

void MenuMain::RenderUI() {
  ImGui::SetNextWindowSize(ImVec2(500, 440), ImGuiCond_FirstUseEver);
  // left
  {
    ImGui::BeginChild("left pane", ImVec2(150, 0),
                      ImGuiChildFlags_Borders | ImGuiChildFlags_ResizeX);

    RenderMenuButton(
        "Basic Cheats", [this]() { selectedMenu = Menus::Basic; },
        selectedMenu == 0);
    RenderMenuButton(
        "Vacuum Cheats", [this]() { selectedMenu = Menus::Vacuum; },
        selectedMenu == 1);

    ImGui::EndChild();
  }
  ImGui::SameLine();

  // Right
  {
    ImGui::BeginGroup();
    ImGui::BeginChild(
        "item view",
        ImVec2(0, -ImGui::GetFrameHeightWithSpacing())); // Leave room for 1
                                                         // line below us
    ImGui::Text("MyObject: %d", selectedMenu);
    ImGui::Separator();

    switch (selectedMenu) {
    case Menus::Basic:
      BasicCheats();
      break;

    case Menus::Vacuum:
      VacuumCheats();
      break;
    }
    ImGui::EndChild();
    ImGui::EndGroup();
  }

  // BasicCheats();
  // VacuumCheats();
}

void MenuMain::BasicCheats() {
  if (ImGui::Checkbox("Player Godmode", &config.bPlayerGodMode)) {
    config.TogglePlayerGodMode();
  }

  ImGui::Checkbox("Auto Kill", &config.bKillAllEnemys);

  ImGui::Checkbox("One kill to advance", &config.bKillOneToAdvance);

  ImGui::PushItemWidth(75);
  ImGui::InputInt("##waveskip", &config.waveToSkipTo);
  ImGui::SameLine();
  ImGui::Checkbox("Level skip", &config.bSkipWave);
  ImGui::PopItemWidth();

  ImGui::Checkbox("Enemys drop items", &config.bLootShower);
}

void MenuMain::VacuumCheats() {
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

void MenuMain::AddItem(Classes::UHeroEquipment *item) {
  MenuItem menu;
  menu.SetItem(item);
  itemsVec.push_back(menu);
}

void MenuMain::RemoveItem(Classes::UHeroEquipment *item) {}
