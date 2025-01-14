
// clang-format off
#include "ImGui/imgui.h"
#include "pch.h"
#include "includes/menu_main.h"
#include "includes/config.h"
#include <SDK/DD_UDKGame_classes.hpp>
// clang-format on

#define IMGUI_BITFIELD(s, item)                                                \
  {                                                                            \
    bool bs = item->s;                                                         \
    if (ImGui::Checkbox(#s, &bs))                                              \
      item->s = bs;                                                            \
  }
// https://stackoverflow.com/questions/154136/why-use-apparently-meaningless-do-while-and-if-else-statements-in-macros
#define IMGUI_FVECTOR(s, item)                                                 \
  do {                                                                         \
    if ((item) != nullptr) {                                                   \
      float values[3] = {(item)->s.X, (item)->s.Y, (item)->s.Z};               \
      if (ImGui::InputFloat3(#s, values)) {                                    \
        (item)->s.X = values[0];                                               \
        (item)->s.Y = values[1];                                               \
        (item)->s.Z = values[2];                                               \
      }                                                                        \
    }                                                                          \
  } while (0);

void MenuMain::Init() {
  // AddItem(config.GetADunDefPlayerController()->myHero->HeroEquipments[0]);
}

void MenuMain::OnBegin() {
  ImGui::Begin("MainMenu");

  // for (auto item : itemsVec) {
  // item.Render();
  //}
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

int MenuMain::GetKeydown() {
  ImGuiIO &io = ImGui::GetIO();
  ImGuiKey start_key = ImGuiKey_NamedKey_BEGIN;
  for (ImGuiKey key = start_key; key < ImGuiKey_NamedKey_END;
       key = (ImGuiKey)(key + 1)) {
    if (!ImGui::IsKeyPressed(key))
      continue;
    // ImGui::Text((key < ImGuiKey_NamedKey_BEGIN) ? "\"%s\"" : "\"%s\" %d",
    //            ImGui::GetKeyName(key), key);
    return key;
  }

  return -1;
}

bool MenuMain::ChangeKeybindRequest(int &keyToChange, int changeTo) {
  if (changeTo >= ImGuiKey_NamedKey_BEGIN &&
      changeTo <= ImGuiKey_NamedKey_END) {
    keyToChange = changeTo;
    return true;
  }
  return false;
}

void MenuMain::RenderUI() {
  ImGui::SetNextWindowSize(ImVec2(500, 440), ImGuiCond_FirstUseEver);
  // left
  {
    ImGui::BeginChild("left pane", ImVec2(150, 0),
                      ImGuiChildFlags_Borders | ImGuiChildFlags_ResizeX);

    // the order the button is registered with determine the order in the menu
    RenderMenuButton(
        "Basic Cheats", [this]() { selectedMenu = Menus::MenuBasic; },
        selectedMenu == Menus::MenuBasic);
    RenderMenuButton(
        "Player Cheats", [this]() { selectedMenu = Menus::MenuPlayer; },
        selectedMenu == Menus::MenuPlayer);
    RenderMenuButton(
        "Item Modding", [this]() { selectedMenu = Menus::MenuModding; },
        selectedMenu == Menus::MenuModding);
    RenderMenuButton(
        "World", [this]() { selectedMenu = Menus::MenuWorld; },
        selectedMenu == Menus::MenuWorld);
    RenderMenuButton(
        "Config", [this]() { selectedMenu = Menus::MenuConfig; },
        selectedMenu == Menus::MenuConfig);

    ImGui::EndChild();
  }
  ImGui::SameLine();

  // right
  {
    ImGui::BeginGroup();
    ImGui::BeginChild("item view");
    // ImVec2(0, -ImGui::GetWindowHeight())); // Leave room for 1
    switch (selectedMenu) {
    case Menus::MenuBasic:
      BasicCheats();
      break;

    case Menus::MenuConfig:
      Config();
      break;

    case Menus::MenuPlayer:
      PlayerCheats();
      break;

    case Menus::MenuModding:
      ItemModding();
      break;

    case Menus::MenuWorld:
      WorldCheats();
      break;

    default:
      BasicCheats();
      break;
    }
    ImGui::EndChild();
    ImGui::EndGroup();
  }
}

void MenuMain::Thread() {
  // any thing in this function will be handled in proc events

  // handle keybinds
  for (auto &pair : config.keyBindsmap) {
    if (ImGui::IsKeyPressed((ImGuiKey)pair.second.key, false) &&
        !pair.second.bShouldChange) {
      pair.second.func();
    }
  }
  NoClipHandleInput();
}

void MenuMain::NoClipHandleInput() {
  if (!config.bNoClip)
    return;

  auto pController = config.GetADunDefPlayerController();
  auto pPlayerPawn = config.GetPlayerPawn();

  if (pController == nullptr || pPlayerPawn == nullptr)
    return;

  if (!pController || !pController->PlayerCamera)
    return;

  auto rot = pController->PlayerCamera->CameraCache.POV.Rotation;

  pPlayerPawn->Velocity = {0, 0, 0};
  pPlayerPawn->Acceleration = {0, 0, 0};

  if (ImGui::IsKeyDown(ImGuiKey_W)) {
    auto forward = config.GetForward(static_cast<float>(rot.Yaw),
                                     static_cast<float>(rot.Pitch));
    float t[3] = {static_cast<float>(forward.X) * config.fNoClipSpeed,
                  static_cast<float>(forward.Y) * config.fNoClipSpeed,
                  static_cast<float>(forward.Z) * config.fNoClipSpeed};
    pPlayerPawn->Location =
        config.AddFVector(pPlayerPawn->Location, {t[0], t[1], t[2]});
  }

  if (ImGui::IsKeyDown(ImGuiKey_S)) {
    auto forward = config.GetForward(static_cast<float>(rot.Yaw),
                                     static_cast<float>(rot.Pitch));
    float t[3] = {static_cast<float>(forward.X) * config.fNoClipSpeed,
                  static_cast<float>(forward.Y) * config.fNoClipSpeed,
                  static_cast<float>(forward.Z) * config.fNoClipSpeed};
    pPlayerPawn->Location =
        config.AddFVector(pPlayerPawn->Location, {-t[0], -t[1], -t[2]});
  }

  if (ImGui::IsKeyDown(ImGuiKey_D)) {
    auto forward = config.GetForward(static_cast<float>(rot.Yaw),
                                     static_cast<float>(rot.Pitch));
    // Define the up vector (assuming Z is up)
    Classes::FVector up = {0.0f, 0.0f, 1.0f};

    // Calculate the right direction using cross product
    Classes::FVector right = {
        static_cast<float>(forward.Y) * up.Z - forward.Z * up.Y,
        static_cast<float>(forward.Z) * up.X - forward.X * up.Z,
        static_cast<float>(forward.X) * up.Y - forward.Y * up.X};

    // Normalize the right vector (if needed) and scale it
    float tRight[3] = {static_cast<float>(right.X) * config.fNoClipSpeed,
                       static_cast<float>(right.Y) * config.fNoClipSpeed,
                       static_cast<float>(right.Z) * config.fNoClipSpeed};

    pPlayerPawn->Location = config.AddFVector(
        pPlayerPawn->Location, {-tRight[0], -tRight[1], -tRight[2]});
  }

  if (ImGui::IsKeyDown(ImGuiKey_A)) {
    auto forward = config.GetForward(static_cast<float>(rot.Yaw),
                                     static_cast<float>(rot.Pitch));
    // Define the up vector (assuming Z is up)
    Classes::FVector up = {0.0f, 0.0f, 1.0f};

    // Calculate the right direction using cross product
    Classes::FVector left = {
        static_cast<float>(forward.Y) * up.Z - forward.Z * up.Y,
        static_cast<float>(forward.Z) * up.X - forward.X * up.Z,
        static_cast<float>(forward.X) * up.Y - forward.Y * up.X};

    // Normalize the left vector (if needed) and scale it
    float tLeft[3] = {static_cast<float>(left.X) * config.fNoClipSpeed,
                      static_cast<float>(left.Y) * config.fNoClipSpeed,
                      static_cast<float>(left.Z) * config.fNoClipSpeed};

    pPlayerPawn->Location = config.AddFVector(pPlayerPawn->Location,
                                              {tLeft[0], tLeft[1], tLeft[2]});
  }

  if (ImGui::IsKeyDown(ImGuiKey_Space)) {
    pPlayerPawn->Location.Z += config.fNoClipSpeed;
  }

  if (ImGui::IsKeyDown(ImGuiKey_LeftCtrl)) {
    pPlayerPawn->Location.Z -= config.fNoClipSpeed;
  }
}

void MenuMain::BasicCheats() {
  {
    ImGui::PushItemWidth(75);
    ImGui::Text("Basic cheats");
    ImGui::Separator();
    if (ImGui::Checkbox("Godmode", &config.bPlayerGodMode)) {
      config.TogglePlayerGodMode();
    }
    ImGui::Checkbox("Auto Kill", &config.bKillAllEnemys);
    ImGui::Checkbox("Auto Loot", &config.bAutoLoot);
    ImGui::Checkbox("One kill to advance", &config.bKillOneToAdvance);
    ImGui::Checkbox("Enemys drop items", &config.bLootShower);
    ImGui::Checkbox("Auto open chest", &config.bAutoOpenChest);
    ImGui::Checkbox("Unlimited mana for towers", &config.bUnlimitedManaTowers);
    ImGui::Checkbox("Unlimited mana for shop", &config.bUnlimitedManaShop);
    if (ImGui::Checkbox("NoClip", &config.bNoClip)) {
      auto pPlayerPawn = config.GetADunDefPlayerController();
      if (config.bNoClip) {
        if (pPlayerPawn) {
          pPlayerPawn->Pawn->bCollideWorld = false;
          pPlayerPawn->Pawn->bCollideActors = false;
          pPlayerPawn->Pawn->bCollideComplex = false;
          pPlayerPawn->Pawn->GravityZMultiplier = 0;
        }
      } else {
        if (pPlayerPawn) {
          pPlayerPawn->Pawn->GravityZMultiplier = 1;
          pPlayerPawn->Pawn->bCollideWorld = true;
          pPlayerPawn->Pawn->bCollideActors = true;
          pPlayerPawn->Pawn->bCollideComplex = true;
        }
      }
    }

    ImGui::InputFloat("No clip speed", &config.fNoClipSpeed);

    // level cheats
    ImGui::InputInt("##waveskip", &config.waveToSkipTo);
    ImGui::SameLine();
    ImGui::Checkbox("Level skip", &config.bSkipWave);
    ImGui::SameLine();
    ImGui::Checkbox("lock level", &config.bLockWave);
  }

  // multiply rewards
  ImGui::InputInt("##reward count", &config.MultiplyRewardsBy);
  ImGui::SameLine();
  ImGui::Checkbox("Multiply Wave rewards", &config.bMultiplyReward);

  // teleport cheats
  {
    ImGui::Separator();
    /* Vacuum cheats */
    if (ImGui::Button("Update vacuum pos")) {
      config.SetVacPos(config.GetPlayerPos());
    }

    // Vacuum point is done in postrender
    ImGui::Checkbox("Show vacuum point", &config.bShowVacuumPos);
    ImGui::Checkbox("Vacuum hack", &config.bVacHack);
    ImGui::Separator();

    /* teleport cheats */
    if (ImGui::Button("Update teleport pos")) {
      config.SetTeleportPos(config.GetPlayerPos());
    }
    // teleport point is done in postrender
    ImGui::Checkbox("Show teleport pos", &config.bShowPlayerTeleportPos);
    ImGui::Checkbox("Teleport players", &config.bTeleportPlayers);
  }

  // debugging
#ifdef _DEBUG
  Debug();
#endif

  ImGui::PopItemWidth();
}

void MenuMain::PlayerCheats() {
  ImGui::Text("Player Cheats");
  ImGui::Separator();
  Classes::ADunDefPlayerController *pController =
      config.GetADunDefPlayerController();

  if (!pController)
    return;
  // player controller
  {
    // ImGui::InputInt("Score", &pController->Score);

    if (ImGui::Button("Max all towers")) {
      pController->UpgradeAllTowers(5);
    }
    ImGui::SameLine();
    if (ImGui::Button("Repair all towers")) {
      pController->RepairAllTowers();
    }
  }

  if (!pController->myHero)
    return;
  // player hero
  {
    // scale this down so it manageable
    if (ImGui::TreeNode("Colors")) {
      ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x * .15f);
      ImGui::ColorPicker4("color 1",
                          &(*(float *)&pController->myHero->color1.R));
      ImGui::SameLine();
      ImGui::ColorPicker4("color 2",
                          &(*(float *)&pController->myHero->color2.R));
      ImGui::SameLine();
      ImGui::ColorPicker4("color 3",
                          &(*(float *)&pController->myHero->color3.R));
      ImGui::PopItemWidth();
      ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f),
                         "Swap hero for color changes take effect");
      ImGui::TreePop();
    }

    if (ImGui::TreeNode("Player abilitys")) {

      for (size_t i = 0; i < pController->PlayerAbilities.Num(); i++) {
        if (!pController->PlayerAbilities.IsValidIndex(i))
          continue;
        auto ability = pController->PlayerAbilities[i];

        if (ImGui::TreeNode(ability->GetName().c_str())) {

          ImGui::InputFloat("ActivationInterval", &ability->ActivationInterval);
          ImGui::InputFloat("CastRateHeroHeroStatExponent",
                            &ability->CastRateHeroHeroStatExponent);
          ImGui::InputFloat("CastingCharacterAnimationBlendInTime",
                            &ability->CastingCharacterAnimationBlendInTime);
          ImGui::InputFloat("CastingCharacterAnimationBlendOutTime",
                            &ability->CastingCharacterAnimationBlendOutTime);
          ImGui::InputFloat("CastingColorFlashIntensity",
                            &ability->CastingColorFlashIntensity);
          ImGui::InputFloat("CastingColorFlashPower",
                            &ability->CastingColorFlashPower);
          ImGui::InputFloat("CastingColorFlashSpeed",
                            &ability->CastingColorFlashSpeed);
          ImGui::InputFloat("ColorFlashingBasePercent",
                            &ability->ColorFlashingBasePercent);
          ImGui::InputFloat("FlashingCounter", &ability->FlashingCounter);
          ImGui::InputFloat("LastActivationTime", &ability->LastActivationTime);
          ImGui::InputFloat("LastCompletionTime", &ability->LastCompletionTime);
          ImGui::InputFloat("LastFailedActivationTime",
                            &ability->LastFailedActivationTime);
          ImGui::InputFloat("LastSuccessfulActivationTime",
                            &ability->LastSuccessfulActivationTime);
          ImGui::InputFloat("LastUnprocessedRequestActivationTime",
                            &ability->LastUnprocessedRequestActivationTime);
          ImGui::InputFloat("LobbyActivationInterval",
                            &ability->LobbyActivationInterval);
          ImGui::InputFloat("ManaAttractionRadiusMultiplier",
                            &ability->ManaAttractionRadiusMultiplier);
          ImGui::InputFloat("MinimumReactivationInterval",
                            &ability->MinimumReactivationInterval);
          ImGui::InputFloat("MinimumRefireTime", &ability->MinimumRefireTime);
          ImGui::InputFloat("SizeFlashingPercent",
                            &ability->SizeFlashingPercent);
          ImGui::InputFloat("SizeFlashingPower", &ability->SizeFlashingPower);
          ImGui::InputFloat("SizeFlashingSpeed", &ability->SizeFlashingSpeed);
          ImGui::InputFloat("TimeFromEndToFinishFullBodyAnimation",
                            &ability->TimeFromEndToFinishFullBodyAnimation);
          ImGui::InputInt("RequiredHeroLevel", &ability->RequiredHeroLevel);

          IMGUI_BITFIELD(InitializedForOwner, ability);
          IMGUI_BITFIELD(bAllowNegativeStatusAffects, ability);
          IMGUI_BITFIELD(bDisableAbilityInBuildPhase, ability);
          IMGUI_BITFIELD(bDisableAbilityInCombatPhase, ability);
          IMGUI_BITFIELD(bDisableInPureStrategy, ability);
          IMGUI_BITFIELD(bForceAllowInBuildPhase, ability);
          IMGUI_BITFIELD(bForceDisableAbilitiesInOverlord, ability);
          IMGUI_BITFIELD(bIgnoreAbilityCoolDownReset, ability);
          IMGUI_BITFIELD(bIgnoreLevelVictoryCancel, ability);
          IMGUI_BITFIELD(bIgnoreMomentumWhileCasting, ability);
          IMGUI_BITFIELD(bIgnorePureStratDisabling, ability);
          IMGUI_BITFIELD(bInitialCooldownOnCreation, ability);
          IMGUI_BITFIELD(bInvincibleAbility, ability);
          IMGUI_BITFIELD(bInvincibleWhileCasting, ability);
          IMGUI_BITFIELD(bOnlyExtendManaAttractionRadiusWhileCasting, ability);
          IMGUI_BITFIELD(bPlayFullBodyAnimation, ability);
          IMGUI_BITFIELD(bPressAndHoldAbility, ability);
          IMGUI_BITFIELD(bRemoveBuffsOnCompletion, ability);
          IMGUI_BITFIELD(bRemoveBuffsOnDeactivate, ability);
          IMGUI_BITFIELD(bRequiresWalking, ability);
          IMGUI_BITFIELD(bSetAsOverlordCastingAbility, ability);
          IMGUI_BITFIELD(bSimulateLocally, ability);
          IMGUI_BITFIELD(bUseManaAttractionMultiplier, ability);
          IMGUI_BITFIELD(bWaitingOnFullBodyAnimation, ability);
          IMGUI_BITFIELD(bWasCoolingDown, ability);
          IMGUI_BITFIELD(bWasUnderRequiredLevel, ability);

          ImGui::TreePop();
        }
      }
      ImGui::TreePop();
    }
  }

  if (!pController->Pawn)
    return;
  if (ImGui::TreeNode("Player pawn")) {
    ImGui::InputInt("Hero level", &pController->myHero->HeroLevel);
    ImGui::InputInt("Hero Experience", &pController->myHero->HeroExperience);
    ImGui::InputInt("Mana power", &pController->myHero->ManaPower);
    ImGui::InputInt("Health", &pController->Pawn->Health);
    ImGui::InputInt("Max Health", &pController->Pawn->HealthMax);

    static float loc[3] = {0, 0, 0};
    ImGui::InputFloat3("##Position", loc);
    ImGui::SameLine();
    if (ImGui::Button("Update position")) {
      Classes::FVector temp = {loc[0], loc[1], loc[2]};
      pController->Pawn->Location = temp;
    }

    static float drawScale[3] = {0, 0, 0};
    ImGui::InputFloat3("##Draw scale", drawScale);
    ImGui::SameLine();
    if (ImGui::Button("Update 3d draw scale")) {
      Classes::FVector temp = {drawScale[0], drawScale[1], drawScale[2]};
      pController->Pawn->DrawScale3D = temp;
    }
    ImGui::InputFloat("Draw scale", &pController->Pawn->DrawScale);
    // ImGui::InputFloat("Tick frequency", &pController->TickFrequency);
    ImGui::InputFloat("Gravity", &pController->Pawn->GravityZMultiplier);
    ImGui::InputFloat("Jump height", &pController->Pawn->JumpZ);
    ImGui::InputFloat("Ground speed", &pController->Pawn->GroundSpeed);

    // bool tempCollideActors = pController->Pawn->bCollideActors;
    // if (ImGui::Checkbox("Collide actors", &tempCollideActors)) {
    //   pController->Pawn->bCollideActors = tempCollideActors;
    // }

    // bool tempCollideWorld = pController->Pawn->bCollideWorld;
    // if (ImGui::Checkbox("Collide world", &tempCollideWorld)) {
    //   pController->Pawn->bCollideWorld = tempCollideWorld;
    // }
    ImGui::TreePop();
  }

  return;
}

void MenuMain::WorldCheats() {
  ImGui::Text("World settings");
  ImGui::Separator();

  auto pWorld = config.GetGameInfo();

  if (!pWorld)
    return;

  if (ImGui::TreeNode("Targetable actors")) {

    if (ImGui::Button("Kill all but players")) {

      for (size_t i = 0; i < pWorld->TargetableActors.Num(); i++) {
        if (!pWorld->TargetableActors.IsValidIndex(i))
          continue;

        auto pActor = pWorld->TargetableActors[i];

        if (pActor->IsPlayerOwned())
          continue;

        if (!pActor->IsA(Classes::ADunDefDamageableTarget::StaticClass()))
          continue;
        config.KillPawn(
            reinterpret_cast<Classes::ADunDefDamageableTarget *>(pActor));
      }
    }

    for (size_t i = 0; i < pWorld->TargetableActors.Num(); i++) {
      if (!pWorld->TargetableActors.IsValidIndex(i))
        continue;
      auto pActor = pWorld->TargetableActors[i];
      if (ImGui::TreeNode(
              (pActor->GetName() + "##" + std::to_string(i)).c_str())) {

        if (!pActor->IsA(Classes::ADunDefDamageableTarget::StaticClass()))
          continue;
        if (pActor->IsPlayerOwned())
          continue;

        ImGuiTargetableActor(
            reinterpret_cast<Classes::ADunDefDamageableTarget *>(pActor));
        ImGui::TreePop();
      }
    }
    ImGui::TreePop();
  }

  if (ImGui::TreeNode("World settings")) {
    ImGui::InputInt("DunDefMaxPlayers", &pWorld->DunDefMaxPlayers);
    ImGui::InputInt("MaxNumberOfDroppedMana", &pWorld->MaxNumberOfDroppedMana);
    ImGui::InputInt("MaxNumberOfDroppedManaOnline",
                    &pWorld->MaxNumberOfDroppedManaOnline);
    ImGui::InputInt("NightmareAdditionalMaxEnemies",
                    &pWorld->NightmareAdditionalMaxEnemies);
    ImGui::InputInt("StartWave", &pWorld->StartWave);
    {
      IMGUI_BITFIELD(bPlayersAreInvincible, pWorld);
      IMGUI_BITFIELD(bCrystalCoreInvincible, pWorld);
      IMGUI_BITFIELD(bTowersInvincible, pWorld);
      IMGUI_BITFIELD(AllowFriendlyFire, pWorld);
      IMGUI_BITFIELD(bDisableAddingXP, pWorld);
      IMGUI_BITFIELD(bDisableItemDrops, pWorld);
      IMGUI_BITFIELD(bDisableWaveScalingForNumPlayers, pWorld);
      IMGUI_BITFIELD(bDoSpawnNotifications, pWorld);
      IMGUI_BITFIELD(bDropManaUponDeath, pWorld);
      IMGUI_BITFIELD(bGiveEquipmentRewardsOnFirstWave, pWorld);
      IMGUI_BITFIELD(bIgnoreEnemyStuckChecks, pWorld);
      IMGUI_BITFIELD(bRandomExcludeLastSpawnPoint, pWorld);
      IMGUI_BITFIELD(bRandomSpawnPoints, pWorld);
      IMGUI_BITFIELD(bRandomWithoutReplacementSpawnPoints, pWorld);
      IMGUI_BITFIELD(bScaleBossHealths, pWorld);
      IMGUI_BITFIELD(bSurvivalTimeLimitMap, pWorld);
    }

    {
      ImGui::InputFloat("CrystalCoreHealthMultiplier",
                        &pWorld->CrystalCoreHealthMultiplier);
      ImGui::InputFloat("EnemyLifeSpanMultiplier",
                        &pWorld->EnemyLifeSpanMultiplier);
      ImGui::InputFloat("EquipmentQualityOverlayMultiplier",
                        &pWorld->EquipmentQualityOverlayMultiplier);
      ImGui::InputFloat("GameOverTimer", &pWorld->GameOverTimer);
      ImGui::InputFloat("GlobalEnemyDamageMultiplier",
                        &pWorld->GlobalEnemyDamageMultiplier);
      ImGui::InputFloat("GlobalEnemyDifficultyOffset",
                        &pWorld->GlobalEnemyDifficultyOffset);
      ImGui::InputFloat("GlobalEnemyHealthMultiplier",
                        &pWorld->GlobalEnemyHealthMultiplier);
      ImGui::InputFloat("GlobalEquipmentQualityMultiplier",
                        &pWorld->GlobalEquipmentQualityMultiplier);
      ImGui::InputFloat("GlobalPhysicalTowerHealthMultiplier",
                        &pWorld->GlobalPhysicalTowerHealthMultiplier);
      ImGui::InputFloat("GlobalTowerDamageMultiplier",
                        &pWorld->GlobalTowerDamageMultiplier);
      ImGui::InputFloat("GlobalTowerHealthMultiplier",
                        &pWorld->GlobalTowerHealthMultiplier);
      ImGui::InputFloat("JumpZMultiplier", &pWorld->JumpZMultiplier);
      ImGui::InputFloat("MaxNumberOfEnemiesMultiplier",
                        &pWorld->MaxNumberOfEnemiesMultiplier);
      ImGui::InputFloat("PlayerNetUpdateFrequency",
                        &pWorld->PlayerNetUpdateFrequency);
    }

    ImGui::TreePop();
  }
}

void MenuMain::ItemModding() {

  ImGui::Text("Item modding");
  ImGui::Separator();

  auto pPlayerController = config.GetADunDefPlayerController();
  if (!pPlayerController)
    return;

  if (pPlayerController->myHero) {
    ImGuiTArrayOfItems(pPlayerController->myHero->HeroEquipments, "Equipment");
    ImGui::Separator();
  } else {
    ImGui::Text("No player hero found.");
  }

  // This crashes the game for some reason
  //  // Item box
  auto pHeroManager = config.GetHeroManager();
  if (pHeroManager) {
    ImGuiTArrayOfItems(pHeroManager->ItemBoxEquipments, "Forge");
    // if (ImGui::Button("Make all items sellable")) {
    //   for (int i = 0; i < pHeroManager->ItemBoxEquipments.Num(); i++) {
    //     if (!pHeroManager->ItemBoxEquipments.IsValidIndex(i))
    //       continue;

    //    auto item = pHeroManager->ItemBoxEquipments[i];

    //    item->bCantBeDropped = 0;
    //    item->bCantBeSold = 0;
    //  }
    //}
    ImGui::Separator();
  } else {
    ImGui::Text("No HeroManager found.");
  }

  {
    if (ImGui::TreeNode("Spawn items")) {
      if (ImGui::Button("Scan for items"))
        config.vHeroEquipmentStrings = config.ScanForAllItems();
      ImGui::SameLine();
      if (ImGui::Button("Add selected items"))
        config.GiveSelectedItems();

      ImGui::SameLine();
      static char FilterItemsBuffer[255]{0};
      ImGui::InputText("##Filter Items", FilterItemsBuffer,
                       sizeof(FilterItemsBuffer));

      ImGui::Text("Items Found %d", config.vHeroEquipmentStrings.size());
      ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f),
                         "Hold Ctrl to select multiple.");
      ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 5.0f);
      ImGui::BeginChild("Items", ImVec2(0, 0), true);

      ImGui::Columns(3, NULL, false);
      int itemCount = config.vHeroEquipmentStrings.size();
      for (int n = 0; n < itemCount; ++n) {
        std::string itemLower = config.vHeroEquipmentStrings[n];
        std::transform(itemLower.begin(), itemLower.end(), itemLower.begin(),
                       [](unsigned char c) { return std::tolower(c); });

        // Check if the item matches the filter
        if (itemLower.find(FilterItemsBuffer) != std::string::npos) {
          if (ImGui::Selectable(config.vHeroEquipmentStrings[n].c_str(),
                                config.pItemSelectable[n])) {
            if (!ImGui::GetIO().KeyCtrl) {
              memset(config.pItemSelectable, 0,
                     config.vHeroEquipmentStrings.size() * sizeof(bool));
            }
            config.pItemSelectable[n] ^= 1;
          }

          ImGui::NextColumn();
        }
      }

      ImGui::Columns(1);
      ImGui::EndChild();
      ImGui::PopStyleVar();

      ImGui::TreePop();
    }
  }

  return;
}

void MenuMain::Debug() {

  ImGui::Separator();
  auto pPlayerPawn = config.GetPlayerPawn();
  auto pController = config.GetADunDefPlayerController();
  auto pEngine = config.GetEngine();

  if (!pPlayerPawn || !pController || !pEngine)
    return;

  return;
}

void MenuMain::ImGuiItem(Classes::UHeroEquipment *item) {
  if (ImGui::Button(("Give##%ls" + item->GetName()).c_str())) {
    config.PushItemToQueue(item);
  }

  ImGui::Text("ItemAddr          :  0x%p", item);
  ImGui::SameLine();

  // Reduce padding for the button
  ImGui::PushStyleVar(ImGuiStyleVar_FramePadding,
                      ImVec2(0, 0)); // Set padding to 0 for both axes
  if (ImGui::Button("copy to clipboard", ImVec2(0, 0))) {
    ImGui::LogToClipboard();
    ImGui::LogText("%p", item);
    ImGui::LogFinish();
  }
  ImGui::PopStyleVar(); // Restore previous style
  ImGui::Text("InternalName      :  %s", item->GetName().c_str());

  if (item->EquipmentName.Data) {
    ImGui::Text("EquipmentName     :  %ls", item->EquipmentName.c_str());
  } else {
    ImGui::Text("EquipmentName     :  ");
  }

  // item name
  if (item->UserEquipmentName.Data) {
    // change item name
    ImGui::Text("UserEquipmentName :  %ls", item->UserEquipmentName.c_str());
    static char charBuff[32];
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    ImGui::InputText("##ItemName", charBuff, sizeof(charBuff),
                     IM_ARRAYSIZE(charBuff));
    ImGui::PopItemWidth();
    ImGui::SameLine();

    if (ImGui::Button("Change Name")) {
      ChangeFString(item->UserEquipmentName, charBuff);
    }
  } else {
    ImGui::Text("UserEquipmentName :");
  }

  // forger name
  if (item->UserForgerName.Data) {
    ImGui::Text("UserForgerName    :  %ls", item->UserForgerName.c_str());

    // change forger name
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    static char ncharBuff[32];
    ImGui::InputText("##ItemForger", ncharBuff, sizeof(ncharBuff),
                     IM_ARRAYSIZE(ncharBuff));
    ImGui::PopItemWidth();
    ImGui::SameLine();

    if (ImGui::Button("Change Forger Name")) {
      ChangeFString(item->UserForgerName, ncharBuff);
    } else {
      ImGui::Text("UserForgerName    :");
    }
  }

  if (ImGui::TreeNode("___Main___")) {
    ImGui::Text("___Name___");

    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    if (item->RandomBaseNames.Data)
      ShowCombo(item->RandomBaseNames,
                item->RandomBaseNames.Data[item->NameIndex_Base].StringValue,
                item->NameIndex_Base, "Base");
    else
      ImGui::Text("No RandomBaseNames found");

    if (item->DamageReductionNames.Data)
      ShowCombo(item->DamageReductionNames,
                item->DamageReductionNames.Data[item->NameIndex_DamageReduction]
                    .StringValue,
                item->NameIndex_DamageReduction, "DamageReduction");
    else
      ImGui::Text("No DamageReductionNames found");
    if (item->QualityDescriptorRealNames.Data)
      ShowCombo(item->QualityDescriptorRealNames,
                item->QualityDescriptorRealNames
                    .Data[item->NameIndex_QualityDescriptor]
                    .StringValue,
                item->NameIndex_QualityDescriptor, "Quality");
    else
      ImGui::Text("No QualityDescriptorRealNames found");

    ImGui::InputFloat("WeaponDrawScaleMultiplier",
                      &item->WeaponDrawScaleMultiplier, 1, 100, "%.3f");
    ImGui::PopItemWidth();

    ImGui::Text("___Color___");
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    // ImGui::InputFloat("R1", &item->PrimaryColorOverride.R, 1, 100, "%.3f");
    // ImGui::SameLine(); ImGui::InputFloat("G1",
    // &item->PrimaryColorOverride.G, 1, 100, "%.3f"); ImGui::SameLine();
    // ImGui::InputFloat("B1", &item->PrimaryColorOverride.B, 1, 100, "%.3f");

    // ImGui::InputFloat("R2", &item->SecondaryColorOverride.R, 1, 100,
    // "%.3f"); ImGui::SameLine(); ImGui::InputFloat("G2",
    // &item->SecondaryColorOverride.G, 1, 100, "%.3f"); ImGui::SameLine();
    // ImGui::InputFloat("B2", &item->SecondaryColorOverride.B, 1, 100,
    // "%.3f");

    ImGui::ColorPicker4("Primary", &(*(float *)&item->PrimaryColorOverride.R));
    ImGui::SameLine();
    ImGui::ColorPicker4("Secondary",
                        &(*(float *)&item->SecondaryColorOverride.R));

    ImGui::PopItemWidth();

    ImGui::TreePop();
  }

  if (ImGui::TreeNode("___Stats___")) {
    ImGui::InputInt("HHealth   ", &item->StatModifiers[eHHealth]);
    ImGui::InputInt("HSpeed    ", &item->StatModifiers[eHSpeed]);
    ImGui::InputInt("HDamage   ", &item->StatModifiers[eHDamage]);
    ImGui::InputInt("HCast     ", &item->StatModifiers[eHCast]);
    ImGui::InputInt("Ability1  ", &item->StatModifiers[Ability1]);
    ImGui::InputInt("Ability2  ", &item->StatModifiers[Ability2]);
    ImGui::InputInt("THealth   ", &item->StatModifiers[eTHealth]);
    ImGui::InputInt("TSpeed    ", &item->StatModifiers[eTSpeed]);
    ImGui::InputInt("TDamage   ", &item->StatModifiers[eTDamage]);
    ImGui::InputInt("TRange    ", &item->StatModifiers[eTRange]);
    ImGui::TreePop();
  }

  if (ImGui::TreeNode("___Bools___")) {
    ImGui::Columns(3);
    IMGUI_BITFIELD(WeaponReloadSpeedBonusUse, item);
    IMGUI_BITFIELD(bIgnoreLevelRequirement, item);
    IMGUI_BITFIELD(WeaponKnockbackBonusUse, item);
    IMGUI_BITFIELD(bCanBeUpgraded, item);
    IMGUI_BITFIELD(AllowRenamingAtMaxUpgrade, item);
    IMGUI_BITFIELD(bForceUseParentTemplate, item);
    IMGUI_BITFIELD(WeaponAltDamageBonusUse, item);
    IMGUI_BITFIELD(bDisableTheRandomization, item);
    IMGUI_BITFIELD(WeaponBlockingBonusUse, item);
    IMGUI_BITFIELD(bDontCalculateLevelRequirement, item);
    IMGUI_BITFIELD(WeaponClipAmmoBonusUse, item);
    IMGUI_BITFIELD(bDontUseLevelName, item);
    IMGUI_BITFIELD(WeaponChargeSpeedBonusUse, item);
    IMGUI_BITFIELD(WeaponShotsPerSecondBonusUse, item);
    IMGUI_BITFIELD(UseWeaponCoreStats, item);
    IMGUI_BITFIELD(bIsLocked, item);
    IMGUI_BITFIELD(bWasAttached, item);
    IMGUI_BITFIELD(bIsShopEquipment, item);
    IMGUI_BITFIELD(bIsSecondary, item);
    IMGUI_BITFIELD(bIsNameOnlineVerified, item);
    IMGUI_BITFIELD(bIsForgerNameOnlineVerified, item);
    ImGui::NextColumn();
    IMGUI_BITFIELD(bWasAddedToDefenderStore, item);
    IMGUI_BITFIELD(bForceAllowDropping, item);
    IMGUI_BITFIELD(bForceRandomDLCColor, item);
    IMGUI_BITFIELD(bUseShotsPerSecondRandomizerMult, item);
    IMGUI_BITFIELD(bForceAllowSelling, item);
    IMGUI_BITFIELD(bDoTranscendentLevelBoost, item);
    IMGUI_BITFIELD(bUseLevelRequirementOverrides, item);
    IMGUI_BITFIELD(bForceRandomizerWithMinEquipmentLevel, item);
    IMGUI_BITFIELD(bAllowSellingToExceedSoftManaCap, item);
    IMGUI_BITFIELD(bCanBeEquipped, item);
    IMGUI_BITFIELD(bForceUseEquipmentDrawScale, item);
    IMGUI_BITFIELD(bDistributeManaUponDroppedDestruction, item);
    IMGUI_BITFIELD(bAllowDroppedDestruction, item);
    IMGUI_BITFIELD(bDontHideEquipmentAttachmentInFPV, item);
    IMGUI_BITFIELD(bEncumberHero, item);
    IMGUI_BITFIELD(bIconUseEquipmentRating, item);
    IMGUI_BITFIELD(bPlayerShopForceToMinimumSellWorth, item);
    IMGUI_BITFIELD(bMaxEquipLevelUseAltCalc, item);
    IMGUI_BITFIELD(bUseExtraQualityDamage, item);
    IMGUI_BITFIELD(bUseSecondExtraQualityDamage, item);
    IMGUI_BITFIELD(AllowNameRandomization, item);
    ImGui::NextColumn();
    IMGUI_BITFIELD(OnlyRandomizeBaseName, item);
    IMGUI_BITFIELD(bNoNegativeRandomizations, item);
    IMGUI_BITFIELD(WeaponAdditionalDamageTypeNotPoison, item);
    IMGUI_BITFIELD(UsesEquipmentAttachments, item);
    IMGUI_BITFIELD(UseColorSets, item);
    IMGUI_BITFIELD(RandomizeColorSets, item);
    IMGUI_BITFIELD(ForceQualityBeam, item);
    IMGUI_BITFIELD(bUsePreviewZOffsetting, item);
    IMGUI_BITFIELD(bUseSelectionPreviewScale, item);
    IMGUI_BITFIELD(bUsePawnWeaponDamageCallback, item);
    IMGUI_BITFIELD(bUsePawnDamageCallback, item);
    IMGUI_BITFIELD(bCantSave, item);
    IMGUI_BITFIELD(bCantPutInItemBox, item);
    IMGUI_BITFIELD(ProvideHealOnBlock, item);
    IMGUI_BITFIELD(bSetRandomizerMultipliers, item);
    IMGUI_BITFIELD(bPlayerShopPurchasePending, item);
    IMGUI_BITFIELD(bEnchantmentsInitalized, item);
    IMGUI_BITFIELD(bDontDisplayPetSize, item);
    IMGUI_BITFIELD(bCanModifyParticleColour, item);
    IMGUI_BITFIELD(bUseHighDigitManaTokenValue, item);
    ImGui::Columns(1);
    ImGui::Separator();
    ImGui::TreePop();
  }

  if (ImGui::TreeNode("___Other___")) {

    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    ImGui::InputInt("MaxEquipmentLevel    ", &(item->MaxEquipmentLevel));
    ImGui::InputInt("DamageReductions1    ",
                    &(item->DamageReductions[0].PercentageReduction));
    ImGui::InputInt("DamageReductions2    ",
                    &(item->DamageReductions[1].PercentageReduction));
    ImGui::InputInt("DamageReductions3    ",
                    &(item->DamageReductions[2].PercentageReduction));
    ImGui::InputInt("DamageReductions4    ",
                    &(item->DamageReductions[3].PercentageReduction));

    ImGui::InputInt("DamageBonus    ", &(item->WeaponDamageBonus));
    ImGui::InputInt("NumberOfProjectilesBonus    ",
                    &(item->WeaponNumberOfProjectilesBonus));
    ImGui::InputInt("SpeedOfProjectilesBonus    ",
                    &(item->WeaponSpeedOfProjectilesBonus));
    ImGui::InputInt("WeaponAdditionalDamageAmount    ",
                    &(item->WeaponAdditionalDamageAmount));

    ImGui::InputFloat("MaxRandomElementalDamageMultiplier",
                      &item->MaxRandomElementalDamageMultiplier, 1, 100,
                      "%.3f");
    ImGui::InputFloat("WeaponSwingSpeedMultiplier",
                      &item->WeaponSwingSpeedMultiplier, 1, 100, "%.3f");

    ImGui::InputInt("WeaponReloadSpeedBonus                       ",
                    &(item->WeaponReloadSpeedBonus));
    ImGui::InputInt("WeaponKnockbackBonus                         ",
                    &(item->WeaponKnockbackBonus));
    ImGui::InputInt("WeaponAltDamageBonus                         ",
                    &(item->WeaponAltDamageBonus));
    ImGui::InputInt("WeaponBlockingBonus                          ",
                    &(item->WeaponBlockingBonus));
    ImGui::InputInt("WeaponClipAmmoBonus                          ",
                    &(item->WeaponClipAmmoBonus));
    ImGui::InputInt("AdditionalAllowedUpgradeResistancePoints     ",
                    &(item->AdditionalAllowedUpgradeResistancePoints));
    ImGui::InputInt("RequirementLevelOverride                     ",
                    &(item->RequirementLevelOverride));
    ImGui::InputInt("WeaponChargeSpeedBonus                       ",
                    &(item->WeaponChargeSpeedBonus));
    ImGui::InputInt("WeaponShotsPerSecondBonus                    ",
                    &(item->WeaponShotsPerSecondBonus));

    ImGui::InputInt("MaximumSellWorth", &item->MaximumSellWorth);
    ImGui::InputInt("MinimumSellWorth", &item->MinimumSellWorth);
    ImGui::InputInt("ShopMinimumSellWorth", &item->ShopMinimumSellWorth);
    ImGui::InputInt("MaxEquipmentLevel", &item->MaxEquipmentLevel);
    ImGui::InputInt("Level", &item->Level);
    ImGui::InputInt("StoredMana", &item->StoredMana);
    ImGui::InputInt("UserID", &item->UserID);
    ImGui::InputFloat("MyRatingPercent", &item->MyRatingPercent, 1.0f);
    ImGui::InputFloat("MyRating", &item->MyRating, 1.0f);
    ImGui::InputInt("EquipmentID1", &item->EquipmentID1);
    ImGui::InputInt("EquipmentID2", &item->EquipmentID2);

    ImGui::PopItemWidth();
    ImGui::TreePop();
  }
  item->bIsNameOnlineVerified = 1;
  item->bIsForgerNameOnlineVerified = 1;
}

void MenuMain::ImGuiTArrayOfItems(
    Classes::TArray<Classes::UHeroEquipment *> items, std::string foldName) {

  if (!items.Data) {
    ImGui::Text("%s", (foldName + " is empty").c_str());
    return;
  }

  if (ImGui::TreeNode(foldName.c_str())) {
    for (size_t i = 0; i < items.Num(); i++) {
      if (!items.IsValidIndex(i))
        continue;

      auto item = items[i];

      if (!item)
        continue;

      auto itemName = item->GetName() + " | " + item->EquipmentName.ToString() +
                      " | " + item->UserEquipmentName.ToString();

      if ((ImGui::TreeNode((itemName + "##" + std::to_string(i)).c_str()))) {
        ImGuiItem(item);
        ImGui::TreePop();
      }
    }
    ImGui::TreePop();
  }
}

void MenuMain::ChangeFString(Classes::FString &str, char *to) {
  if (!str.IsValid())
    return;

  std::wstring wideStr(to, to + std::strlen(to));

  str.Data = new wchar_t[wideStr.length() + 1];
  memset(str.Data, 0, wideStr.length() + 1);
  std::wmemcpy(str.Data, wideStr.c_str(), wideStr.length() + 1);

  str.Max = wideStr.length() + 1;
  str.Count = wideStr.length() + 1;
}

void MenuMain::Config() {

  static const char *itemQualitys[] = {"None",      "Mythical",  "Transcendent",
                                       "Supreme",   "Ultimate",  "Ultimate93",
                                       "Ultimate+", "Ultimate++"};
  ImGui::Text("Configs");
  ImGui::Separator();
  ImVec2 contentRegion = ImGui::GetContentRegionAvail();
  ImVec2 settingsbuttonProperty = ImVec2(contentRegion.x * .5f, 20);
  if (ImGui::TreeNode("Menu Settings")) {

    for (auto &key : config.keyBindsmap) {
      if (ImGui::Button(("Set " + key.second.name + " Key").c_str(),
                        settingsbuttonProperty)) {
        key.second.bShouldChange = true;
      }
      ImGui::SameLine();

      HandleKeyChange(key.second.key, key.second.bShouldChange);
    }

    ImGui::TreePop();
  }

  if (ImGui::TreeNode("AutoLoot Settings")) {
    // int FilterMax = 500;
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

    ImGui::Text("Items Added : %d   |  Items Filtered : %d", config.itemsLooted,
                config.itemsChecked);
    ImGui::SameLine();
    if (ImGui::Button("Reset")) {
      config.itemsLooted = 0;
      config.itemsChecked = 0;
    }

    ImGui::Checkbox("Always loot quality >= selected?", &config.bAutoLootULT);
    ImGui::Combo("Always loot Quality", &config.itemFilterQualityULT,
                 itemQualitys, IM_ARRAYSIZE(itemQualitys));

    ImGui::TreePop();
  }

  if (ImGui::TreeNode("Logging")) {
    if (ImGui::Checkbox("Attach console", &config.bConsoleAttached)) {
      if (config.bConsoleAttached) {
        config.AttachConsole();
      } else {
        config.DettachConsole();
      }
    }
    ImGui::SameLine();
    ImGui::Checkbox("Log process events", &config.bLoggingProcessEvents);

    ImGui::TreePop();
  }
}

bool MenuMain::HandleKeyChange(int &key, bool &shouldChange) {
  if (!shouldChange) {
    std::string tmpString =
        "Current : " + std::string(ImGui::GetKeyName((ImGuiKey)key));
    ImGui::Text(tmpString.c_str(), config.ToggleKey, config.ToggleKey);
    return true;
  } else {
    int keyDown = GetKeydown();
    if (keyDown == -1) {
      ImGui::Text("Press any key.");
      return false;
    } else {
      shouldChange = false;
      key = keyDown;
      return true;
    }
  }
  return false;
}

void MenuMain::ShowCombo(Classes::TArray<Classes::FEG_StatMatchingString> names,
                         Classes::FString _CurrentSelected,
                         unsigned char &_changeChar, std::string comboName) {
  std::string CurrentSelected;

  // Convert the selected value to string if it's valid
  if (_CurrentSelected.IsValid())
    CurrentSelected = _CurrentSelected.ToString();

  // Initialize CurrentSelectedIndex based on the current selection
  static int CurrentSelectedIndex = -1; // -1 means no selection at first

  // Update the CurrentSelectedIndex when the combo is opened with a new
  // selection
  if (CurrentSelectedIndex == -1 && !CurrentSelected.empty()) {
    for (int i = 0; i < names.Count; i++) {
      if (names.Data[i].StringValue.ToString() == CurrentSelected) {
        CurrentSelectedIndex = i;
        break;
      }
    }
  }

  // Begin the combo box
  if (ImGui::BeginCombo((comboName).c_str(), CurrentSelected.c_str())) {
    for (int i = 0; i < names.Count; i++) {
      std::string ComboName;
      if (!(names.Data[i].StringValue.Data)) {
        ComboName = "< blank >";
      } else {
        ComboName = names.Data[i].StringValue.ToString();
      }

      const bool is_selected = (CurrentSelectedIndex == i);

      if (ImGui::Selectable((ComboName + "##" + std::to_string(i)).c_str(),
                            is_selected)) {
        CurrentSelectedIndex = i;
        _changeChar =
            static_cast<unsigned char>(i); // Ensure it's assigned correctly
      }

      // Set the initial focus when opening the combo (scrolling + keyboard
      // navigation focus)
      if (is_selected)
        ImGui::SetItemDefaultFocus();
    }
    ImGui::EndCombo();
  }
}

std::string MenuMain::ToLower(const std::string &str) {
  std::string lowerStr = str;
  std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
  return lowerStr;
}

void MenuMain::ImGuiPawn(Classes::ADunDefPawn *pPawn) {
  if (pPawn == nullptr)
    return;
  // ImGui::Text("%s", pPawn->GetName().c_str());
  // ImGui::Separator();

  ImGui::InputInt("Health", &pPawn->Health);
  ImGui::InputInt("HealthMax", &pPawn->HealthMax);
  // ImGui::InputFloat("AIMaxFallSpeedFactor", &pPawn->AIMaxFallSpeedFactor);
  ImGui::InputFloat("AccelRate", &pPawn->AccelRate);
  ImGui::InputFloat("AirControl", &pPawn->AirControl);
  ImGui::InputFloat("AirSpeed", &pPawn->AirSpeed);
  // ImGui::InputFloat("Alertness", &pPawn->Alertness);
  // ImGui::InputFloat("AlwaysRelevantDistanceSquared",
  //&pPawn->AlwaysRelevantDistanceSquared);
  // ImGui::InputFloat("AvgPhysicsTime", &pPawn->AvgPhysicsTime);
  // ImGui::InputFloat("BaseEyeHeight", &pPawn->BaseEyeHeight);
  // ImGui::InputFloat("BreathTime", &pPawn->BreathTime);
  // ImGui::InputFloat("Buoyancy", &pPawn->Buoyancy);
  // ImGui::InputFloat("CreationTime", &pPawn->CreationTime);
  // ImGui::InputFloat("CrouchHeight", &pPawn->CrouchHeight);
  // ImGui::InputFloat("CrouchRadius", &pPawn->CrouchRadius);
  // ImGui::InputFloat("CrouchedPct", &pPawn->CrouchedPct);
  ImGui::InputFloat("CustomTimeDilation", &pPawn->CustomTimeDilation);
  // ImGui::InputFloat("DamageScaling", &pPawn->DamageScaling);
  // ImGui::InputFloat("DesiredSpeed", &pPawn->DesiredSpeed);
  // ImGui::InputFloat("DestinationOffset", &pPawn->DestinationOffset);
  ImGui::InputFloat("DrawScale", &pPawn->DrawScale);
  // ImGui::InputFloat("EyeHeight", &pPawn->EyeHeight);
  // ImGui::InputFloat("FindAnchorFailedTime", &pPawn->FindAnchorFailedTime);
  ImGui::InputFloat("FlatAcceleration", &pPawn->FlatAcceleration);
  ImGui::InputFloat("GravityZMultiplier", &pPawn->GravityZMultiplier);
  ImGui::InputFloat("GroundSpeed", &pPawn->GroundSpeed);
  // ImGui::InputFloat("HearingThreshold", &pPawn->HearingThreshold);
  ImGui::InputFloat("JumpZ", &pPawn->JumpZ);
  // ImGui::InputFloat("LadderSpeed", &pPawn->LadderSpeed);
  // ImGui::InputFloat("LastNetUpdateTime", &pPawn->LastNetUpdateTime);
  // ImGui::InputFloat("LastPainTime", &pPawn->LastPainTime);
  // ImGui::InputFloat("LastRenderTime", &pPawn->LastRenderTime);
  // ImGui::InputFloat("LastStartTime", &pPawn->LastStartTime);
  // ImGui::InputFloat("LastValidAnchorTime", &pPawn->LastValidAnchorTime);
  // ImGui::InputFloat("LatentFloat", &pPawn->LatentFloat);
  // ImGui::InputFloat("LedgeCheckThreshold", &pPawn->LedgeCheckThreshold);
  // ImGui::InputFloat("LifeSpan", &pPawn->LifeSpan);
  ImGui::InputFloat("Mass", &pPawn->Mass);
  ImGui::InputFloat("MaxDesiredSpeed", &pPawn->MaxDesiredSpeed);
  ImGui::InputFloat("MaxFallSpeed", &pPawn->MaxFallSpeed);
  ImGui::InputFloat("MaxJumpHeight", &pPawn->MaxJumpHeight);
  // ImGui::InputFloat("MaxOutOfWaterStepHeight",
  // &pPawn->MaxOutOfWaterStepHeight); ImGui::InputFloat("MaxStepHeight",
  // &pPawn->MaxStepHeight);
  // ImGui::InputFloat("MeleeRange", &pPawn->MeleeRange);
  // ImGui::InputFloat("NetFrequencyMultiplier",
  // &pPawn->NetFrequencyMultiplier); ImGui::InputFloat("NetPriority",
  // &pPawn->NetPriority); ImGui::InputFloat("NetRelevancyTime",
  // &pPawn->NetRelevancyTime); ImGui::InputFloat("NetUpdateFrequency",
  // &pPawn->NetUpdateFrequency); ImGui::InputFloat("NetUpdateTime",
  // &pPawn->NetUpdateTime); ImGui::InputFloat("NextPathRadius",
  // &pPawn->NextPathRadius);
  // ImGui::InputFloat("NonPreferredVehiclePathMultiplier",
  //&pPawn->NonPreferredVehiclePathMultiplier);
  // ImGui::InputFloat("OldZ", &pPawn->OldZ);
  // ImGui::InputFloat("OutofWaterZ", &pPawn->OutofWaterZ);
  // ImGui::InputFloat("PeripheralVision", &pPawn->PeripheralVision);
  // ImGui::InputFloat("RBPushRadius", &pPawn->RBPushRadius);
  // ImGui::InputFloat("RBPushStrength", &pPawn->RBPushStrength);
  // ImGui::InputFloat("RootMotionInterpCurrentTime",
  //&pPawn->RootMotionInterpCurrentTime);
  // ImGui::InputFloat("RootMotionInterpRate", &pPawn->RootMotionInterpRate);
  // ImGui::InputFloat("SerpentineDist", &pPawn->SerpentineDist);
  // ImGui::InputFloat("SerpentineTime", &pPawn->SerpentineTime);
  // ImGui::InputFloat("SightRadius", &pPawn->SightRadius);
  // ImGui::InputFloat("SmallNetDeltaSize", &pPawn->SmallNetDeltaSize);
  // ImGui::InputFloat("SoundDampening", &pPawn->SoundDampening);
  // ImGui::InputFloat("SpawnTime", &pPawn->SpawnTime);
  // ImGui::InputFloat("SplashTime", &pPawn->SplashTime);
  // ImGui::InputFloat("TickFrequency", &pPawn->TickFrequency);
  // ImGui::InputFloat("TickFrequencyAtEndDistance",
  //&pPawn->TickFrequencyAtEndDistance);
  // ImGui::InputFloat("TickFrequencyDecreaseDistanceEnd",
  //&pPawn->TickFrequencyDecreaseDistanceEnd);
  // ImGui::InputFloat("TickFrequencyDecreaseDistanceStart",
  //&pPawn->TickFrequencyDecreaseDistanceStart);
  // ImGui::InputFloat(
  //"TickFrequencyLastSeenTimeBeforeForcingMaxTickFrequency",
  //&pPawn->TickFrequencyLastSeenTimeBeforeForcingMaxTickFrequency);
  // ImGui::InputFloat("TimeSinceLastTick", &pPawn->TimeSinceLastTick);
  // ImGui::InputFloat("UncrouchTime", &pPawn->UncrouchTime);
  // ImGui::InputFloat("UnderWaterTime", &pPawn->UnderWaterTime);
  // ImGui::InputFloat("VehicleCheckRadius", &pPawn->VehicleCheckRadius);
  // ImGui::InputFloat("ViewPitchMax", &pPawn->ViewPitchMax);
  // ImGui::InputFloat("ViewPitchMin", &pPawn->ViewPitchMin);
  // ImGui::InputFloat("WalkableFloorZ", &pPawn->WalkableFloorZ);
  // ImGui::InputFloat("WalkingPct", &pPawn->WalkingPct);
  // ImGui::InputFloat("WaterSpeed", &pPawn->WaterSpeed);
  // ImGui::InputFloat("noise1loudness", &pPawn->noise1loudness);
  // ImGui::InputFloat("noise1time", &pPawn->noise1time);
  // ImGui::InputFloat("noise2loudness", &pPawn->noise2loudness);
  // ImGui::InputFloat("noise2time", &pPawn->noise2time);
  // ImGui::InputInt("AllowedYawError", &pPawn->AllowedYawError);
  // ImGui::InputInt("AnchorItem", &pPawn->AnchorItem);
  // ImGui::InputInt("FailedLandingCount", &pPawn->FailedLandingCount);
  // ImGui::InputInt("FullHeight", &pPawn->FullHeight);
  // ImGui::InputInt("IgnoreCollisionGroups", &pPawn->IgnoreCollisionGroups);
  // ImGui::InputInt("MaxPitchLimit", &pPawn->MaxPitchLimit);
  // ImGui::InputInt("MulticastQueueMessageTypeLimitDefault",
  //&pPawn->MulticastQueueMessageTypeLimitDefault);
  // ImGui::InputInt("MyCollisionGroups", &pPawn->MyCollisionGroups);
  // ImGui::InputInt("NetTag", &pPawn->NetTag);
  // ImGui::InputInt("OctreeCollectionGroup", &pPawn->OctreeCollectionGroup);
  // ImGui::InputInt("OverlapTag", &pPawn->OverlapTag);
  // ImGui::InputInt("ShotCount", &pPawn->ShotCount);
  // ImGui::InputInt("maxVisiblePlayers", &pPawn->maxVisiblePlayers);
  IMGUI_FVECTOR(Acceleration, pPawn);
  // IMGUI_FVECTOR(AngularVelocity, pPawn);
  IMGUI_FVECTOR(DrawScale3D, pPawn);
  // IMGUI_FVECTOR(FlashLocation, pPawn);
  // IMGUI_FVECTOR(Floor, pPawn);
  // IMGUI_FVECTOR(InterpolatedVelocity, pPawn);
  // IMGUI_FVECTOR(LastBumpLocation, pPawn);
  // IMGUI_FVECTOR(LastFiringFlashLocation, pPawn);
  IMGUI_FVECTOR(Location, pPawn);
  // IMGUI_FVECTOR(LookAtTargetOffset, pPawn);
  // IMGUI_FVECTOR(ManaTokenImpulseUpOffset, pPawn);
  // IMGUI_FVECTOR(MeshInterpLoc, pPawn);
  // IMGUI_FVECTOR(PrePivot, pPawn);
  // IMGUI_FVECTOR(PreviousLocation, pPawn);
  // IMGUI_FVECTOR(RMVelocity, pPawn);
  // IMGUI_FVECTOR(RelativeLocation, pPawn);
  // IMGUI_FVECTOR(RootMotionInterpCurveLastValue, pPawn);
  // IMGUI_FVECTOR(SerpentineDir, pPawn);
  // IMGUI_FVECTOR(TakeHitLocation, pPawn);
  // IMGUI_FVECTOR(TargetingLocationOffset, pPawn);
  // IMGUI_FVECTOR(TearOffMomentum, pPawn);
  IMGUI_FVECTOR(Velocity, pPawn);
  // IMGUI_FVECTOR(noise1spot, pPawn);
  // IMGUI_FVECTOR(noise2spot, pPawn);
}

void MenuMain::ImGuiTargetableActor(Classes::ADunDefDamageableTarget *pPawn) {
  if (ImGui::Button("Kill")) {
    config.KillPawn(pPawn);
  }
  ImGui::InputInt("Life", &pPawn->Health);
  ImGui::InputInt("MaxLife", &pPawn->MaxHealth);
  IMGUI_FVECTOR(Location, pPawn);
  IMGUI_FVECTOR(DrawScale3D, pPawn);
  // ImGui::InputFloat("Gravity", &pPawn->GravityZMultiplier);
}
