
// clang-format off
#include "pch.h"
#include "includes/menu_main.h"
#include "includes/menu_item.h"
// clang-format on

void MenuMain::Init() {
  AddItem(config.GetADunDefPlayerController()->myHero->HeroEquipments[0]);
}

void MenuMain::OnBegin() {
  ImGui::Begin("MainMenu");

  for (auto item : items) {
    item.Render();
  }
}

void MenuMain::RenderUI() {
  BasicCheats();
  VacuumCheats();
}

void MenuMain::BasicCheats() {
  if (ImGui::Checkbox("Player Godmode", &config.bPlayerGodMode)) {
    config.TogglePlayerGodMode();
  }

  ImGui::Checkbox("Auto Kill", &config.bKillAllEnemys);

  ImGui::Checkbox("One kill to advance", &config.bKillOneToAdvance);
  if (config.bKillOneToAdvance) {
    auto main = config.GetGameInfo();
    if (main && main->CurrentKillCountUI &&
        main->CurrentKillCountUI->KillCountRemaining > 1)
      main->CurrentKillCountUI->KillCountRemaining = 1;
  }
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
  items.push_back(menu);
}
void MenuMain::RemoveItem(Classes::UHeroEquipment *item) {}
