
// clang-format off
#include "ImGui/imgui.h"
#include "pch.h"
#include "includes/menu_main.h"
#include "includes/config.h"
#include <SDK/DD_UDKGame_classes.hpp>
#include <cstddef>
#include <string>
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

#define IMGUI_T_ARRAY_STRINGS(stringName, item)                                \
  do {                                                                         \
    if (item->stringName.Data != nullptr)                                      \
      for (size_t i = 0; i < item->stringName.Num(); i++) {                    \
        auto string = item->stringName[i];                                     \
        if (string.Data)                                                       \
          ImGui::Text("%s", string.ToString().c_str());                        \
      }                                                                        \
    else {                                                                     \
      ImGui::Text("%s", "None");                                               \
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
    ImGui::PushItemWidth(200);
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
    ImGui::PopItemWidth();
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

    // multiply rewards
    ImGui::InputInt("##reward count", &config.MultiplyRewardsBy);
    ImGui::SameLine();
    ImGui::Checkbox("Multiply Wave rewards", &config.bMultiplyReward);
    if (ImGui::Button("Unlock all achievments"))
      config.bUnlockAllAchievments = true;
  }

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
      ImGui::ColorPicker4("color 1",
                          &(*(float *)&pController->myHero->color1.R));
      ImGui::SameLine();
      ImGui::ColorPicker4("color 2",
                          &(*(float *)&pController->myHero->color2.R));
      ImGui::SameLine();
      ImGui::ColorPicker4("color 3",
                          &(*(float *)&pController->myHero->color3.R));
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
  auto pInfo = config.GetWorldInfo();

  if (!pWorld || !pInfo)
    return;

  // ImGui::Text("TimeSeconds     : %f", pInfo->TimeSeconds);
  // ImGui::Text("RealTimeSeconds : %f", pInfo->RealTimeSeconds);
  // ImGui::Text("AudioTimeSeconds: %f", pInfo->AudioTimeSeconds);

  if (ImGui::TreeNode("Targetable actors")) {
    for (size_t i = 0; i < pWorld->TargetableActors.Num(); i++) {
      if (!pWorld->TargetableActors.IsValidIndex(i))
        continue;
      auto pActor = pWorld->TargetableActors[i];

      if (!pActor->IsA(Classes::ADunDefDamageableTarget::StaticClass())) {
        continue;
      }

      if (ImGui::TreeNode(
              (pActor->GetName() + "##" + std::to_string(i)).c_str())) {

        ImGuiTargetableActor(
            reinterpret_cast<Classes::ADunDefDamageableTarget *>(pActor));
        ImGui::TreePop();
      }
    }
    ImGui::TreePop();
  }

  if (ImGui::TreeNode("Pawns")) {
    Classes::APawn *pFirstPawn = config.GetFirstPawnInList();
    int i = 0;
    while (pFirstPawn != nullptr) {
      if (!pFirstPawn->IsA(Classes::ADunDefPawn::StaticClass())) {
        pFirstPawn = pFirstPawn->NextPawn;
        continue;
      }

      Classes::ADunDefPawn *pCurPawn = (Classes::ADunDefPawn *)pFirstPawn;
      bool isPlayer = pFirstPawn->IsPlayerPawn();

      if (ImGui::TreeNode(
              (pCurPawn->GetName() + "##" + std::to_string(i)).c_str())) {
        ImGuiPawn(pCurPawn);
        ImGui::TreePop();
      }

      pFirstPawn = (Classes::ADunDefPawn *)pFirstPawn->NextPawn;
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

  auto pGRI = config.GetGRI();

  if (!pGRI)
    return;

  if (ImGui::TreeNode("GRI")) {

    // #define IMGUI_BITFIELD(s, item)

    if (ImGui::TreeNode("Bools##GRIBools")) {
      ImGui::Columns(3, NULL, false);
      IMGUI_BITFIELD(AllowFriendlyFire, pGRI);
      IMGUI_BITFIELD(EnemyWaveEntriesSetupInProgress, pGRI);
      IMGUI_BITFIELD(IsGameplayLevel, pGRI);
      IMGUI_BITFIELD(IsInCombatPhase, pGRI);
      IMGUI_BITFIELD(IsInfiniteWaveMode, pGRI);
      IMGUI_BITFIELD(IsLobbyLevel, pGRI);
      IMGUI_BITFIELD(IsMixMode, pGRI);
      IMGUI_BITFIELD(LockTavernDefenses, pGRI);
      IMGUI_BITFIELD(LockTavernItemDrops, pGRI);
      IMGUI_BITFIELD(PrevInCombatPhase, pGRI);
      IMGUI_BITFIELD(SendingStats, pGRI);
      IMGUI_BITFIELD(UseBuildTimer, pGRI);
      IMGUI_BITFIELD(UseTBRTimer, pGRI);
      IMGUI_BITFIELD(bAllowClientsToProceedToNextLevel, pGRI);
      IMGUI_BITFIELD(bAllowFreeLookSpectator, pGRI);
      IMGUI_BITFIELD(bAllowNonOwnerItemPickups, pGRI);
      IMGUI_BITFIELD(bAllowPlayerSpawns, pGRI);
      IMGUI_BITFIELD(bAllowRespawns, pGRI);
      IMGUI_BITFIELD(bAllowSpawnInCombatPhase, pGRI);
      IMGUI_BITFIELD(bCheckForTokensAtMaxMana, pGRI);
      IMGUI_BITFIELD(bDisableArmorBuffs, pGRI);
      IMGUI_BITFIELD(bDisableBloodRage, pGRI);
      IMGUI_BITFIELD(bDisableCircularSlice, pGRI);
      IMGUI_BITFIELD(bDisableEnemyDrain, pGRI);
      IMGUI_BITFIELD(bDisableEnemyInitialInvincibility, pGRI);
      IMGUI_BITFIELD(bDisableEnemyInvincibility, pGRI);
      IMGUI_BITFIELD(bDisableFairy, pGRI);
      IMGUI_BITFIELD(bDisableFamiliarAbilities, pGRI);
      IMGUI_BITFIELD(bDisableHawkStance, pGRI);
      IMGUI_BITFIELD(bDisableHeroBoost, pGRI);
      IMGUI_BITFIELD(bDisableInstantUpgrade, pGRI);
      IMGUI_BITFIELD(bDisableInvincibilityAbilities, pGRI);
      IMGUI_BITFIELD(bDisableInvisibility, pGRI);
      IMGUI_BITFIELD(bDisableLightningStance, pGRI);
      IMGUI_BITFIELD(bDisableManaBombForAssault, pGRI);
      ImGui::NextColumn();
      IMGUI_BITFIELD(bDisableMiniMapEnemyIcons, pGRI);
      IMGUI_BITFIELD(bDisableMoveTower, pGRI);
      IMGUI_BITFIELD(bDisableOvercharge, pGRI);
      IMGUI_BITFIELD(bDisablePetHealing, pGRI);
      IMGUI_BITFIELD(bDisablePhaseShift, pGRI);
      IMGUI_BITFIELD(bDisablePiercingShot, pGRI);
      IMGUI_BITFIELD(bDisableProtonBlast, pGRI);
      IMGUI_BITFIELD(bDisableRemoteBoost, pGRI);
      IMGUI_BITFIELD(bDisableSiphonStance, pGRI);
      IMGUI_BITFIELD(bDisableSlamDash, pGRI);
      IMGUI_BITFIELD(bDisableTowerAbilities, pGRI);
      IMGUI_BITFIELD(bDisableTowerBoost, pGRI);
      IMGUI_BITFIELD(bDisableTowerPlacementAndRepair, pGRI);
      IMGUI_BITFIELD(bDisableWeaponry, pGRI);
      IMGUI_BITFIELD(bDisableWheelOfFortuna, pGRI);
      IMGUI_BITFIELD(bDoLevelVictory, pGRI);
      IMGUI_BITFIELD(bDontHurtRespawningPlayers, pGRI);
      IMGUI_BITFIELD(bDropEquipmentUponPlayerDeath, pGRI);
      IMGUI_BITFIELD(bFinishedWaveScaling, pGRI);
      IMGUI_BITFIELD(bForceAllowEnemyInvincibility, pGRI);
      IMGUI_BITFIELD(bForceBuildTimer, pGRI);
      IMGUI_BITFIELD(bForceDrawEnemyTowerMiniMapIcons, pGRI);
      IMGUI_BITFIELD(bForceHostSkip, pGRI);
      IMGUI_BITFIELD(bForceOldDamageAllBehaviorOnRuthless, pGRI);
      IMGUI_BITFIELD(bForceSpeedyBuild, pGRI);
      IMGUI_BITFIELD(bGiveAwardScores, pGRI);
      IMGUI_BITFIELD(bHideForgeMiniMapInCombatPhase, pGRI);
      IMGUI_BITFIELD(bIsAFKShopMode, pGRI);
      IMGUI_BITFIELD(bIsCompetitive, pGRI);
      IMGUI_BITFIELD(bIsGameActive, pGRI);
      IMGUI_BITFIELD(bIsGameOver, pGRI);
      IMGUI_BITFIELD(bIsHardcoreMode, pGRI);
      IMGUI_BITFIELD(bIsPureStrategy, pGRI);
      IMGUI_BITFIELD(bIsRestrictedDifficultyMission, pGRI);
      IMGUI_BITFIELD(bIsRuthlessMode, pGRI);
      ImGui::NextColumn();
      IMGUI_BITFIELD(bIsSpecialMission, pGRI);
      IMGUI_BITFIELD(bIsTBR, pGRI);
      IMGUI_BITFIELD(bLevelStartedWithBuildTimer, pGRI);
      IMGUI_BITFIELD(bLimitPetHealing, pGRI);
      IMGUI_BITFIELD(bLimitProjectileDistancesUsePlayerRangeMultiplier, pGRI);
      IMGUI_BITFIELD(bLimitProjectilesDistance, pGRI);
      IMGUI_BITFIELD(bLimitTowerProjectileDistances, pGRI);
      IMGUI_BITFIELD(bMatchHasBegun, pGRI);
      IMGUI_BITFIELD(bMatchIsOver, pGRI);
      IMGUI_BITFIELD(bNextLevelIsRestartLevel, pGRI);
      IMGUI_BITFIELD(bNoElementalEnemies, pGRI);
      IMGUI_BITFIELD(bNonAFKShopExpired, pGRI);
      IMGUI_BITFIELD(bOverridePlayerAbilityStatus, pGRI);
      IMGUI_BITFIELD(bPreventDetonatingEnemyTraps, pGRI);
      IMGUI_BITFIELD(bPreventRemoteActivateCrystal, pGRI);
      IMGUI_BITFIELD(bPreventTowersFromTargetingPlayers, pGRI);
      IMGUI_BITFIELD(bPrintGlobalDeathMessages, pGRI);
      IMGUI_BITFIELD(bRespawnInHardcoreMode, pGRI);
      IMGUI_BITFIELD(bSetTowerUnitCosts, pGRI);
      IMGUI_BITFIELD(bShowFloatingDamageNumbers, pGRI);
      IMGUI_BITFIELD(bSimulateNightmareMode, pGRI);
      IMGUI_BITFIELD(bSimulateRuthlessMode, pGRI);
      IMGUI_BITFIELD(bSpawnAcceleration, pGRI);
      IMGUI_BITFIELD(bStopCountDown, pGRI);
      IMGUI_BITFIELD(bTriggerPRIEvents, pGRI);
      IMGUI_BITFIELD(bUseBuildTimerOnInsane, pGRI);
      IMGUI_BITFIELD(bUseCompetitivePlayerMiniMapIcons, pGRI);
      IMGUI_BITFIELD(bUseCompetitiveTargets, pGRI);
      IMGUI_BITFIELD(bUseDamageMult, pGRI);
      IMGUI_BITFIELD(bUseMapInfoObjectiveText, pGRI);
      IMGUI_BITFIELD(bValidForRTSAward, pGRI);
      IMGUI_BITFIELD(bVerticalMover_TowerCacheDirty, pGRI);
      IMGUI_BITFIELD(bWantToSave, pGRI);
      IMGUI_BITFIELD(bWasDestroyed, pGRI);
      IMGUI_BITFIELD(stoppedCollectingStats, pGRI);
      ImGui::Columns(1);

      ImGui::TreePop();
    }

    if (ImGui::TreeNode("Other##GRIinputs")) {
      // clang-format off
      ImGui::InputFloat("BuildPhaseRespawnTime", &pGRI->BuildPhaseRespawnTime);
      ImGui::InputFloat("CompetitiveFloatingNameDistanceMultiplier",&pGRI->CompetitiveFloatingNameDistanceMultiplier);
      ImGui::InputFloat("DeathSpectatorActivateInterval", &pGRI->DeathSpectatorActivateInterval);
	    ImGui::InputFloat("EnemyLifeSpanMultiplier",&pGRI->EnemyLifeSpanMultiplier);
      ImGui::InputFloat("EnemyNetUpdateFrequencyMultiplier",&pGRI->EnemyNetUpdateFrequencyMultiplier);
      ImGui::InputFloat("EnemyTargetingDistanceLimit",&pGRI->EnemyTargetingDistanceLimit);
      ImGui::InputFloat("ForceMaxBuildTime",&pGRI->ForceMaxBuildTime);
      ImGui::InputFloat("GamePlayerDamageMultiplier",&pGRI->GamePlayerDamageMultiplier);
      ImGui::InputFloat("GameStatsDelay",&pGRI->GameStatsDelay);
      ImGui::InputFloat("GlobalAuraDamageMultiplier",&pGRI->GlobalAuraDamageMultiplier);
      ImGui::InputFloat("GlobalAuraHealthMultiplier",&pGRI->GlobalAuraHealthMultiplier);
      ImGui::InputFloat("GlobalAuraRangeMultiplier",&pGRI->GlobalAuraRangeMultiplier);
      ImGui::InputFloat("GlobalAuraStrengthDrainMultiplier",&pGRI->GlobalAuraStrengthDrainMultiplier);
      ImGui::InputFloat("GlobalPhysicalTowerDamageMultiplier",&pGRI->GlobalPhysicalTowerDamageMultiplier);
      ImGui::InputFloat("GlobalTowerUnitLimitMultiplier",&pGRI->GlobalTowerUnitLimitMultiplier);
      ImGui::InputFloat("GlobalTrapDamageMultiplier",&pGRI->GlobalTrapDamageMultiplier);
      ImGui::InputFloat("GlobalTrapDetonationResetTimeMultiplier",&pGRI->GlobalTrapDetonationResetTimeMultiplier);
      ImGui::InputFloat("GlobalTrapHealthMultiplier",&pGRI->GlobalTrapHealthMultiplier);
      ImGui::InputFloat("GlobalTrapRangeMultiplier",&pGRI->GlobalTrapRangeMultiplier);
      ImGui::InputFloat("HardcoreScoreBonusMultiplier",&pGRI->HardcoreScoreBonusMultiplier);
      ImGui::InputFloat("JumpZMultiplier",&pGRI->JumpZMultiplier);
      ImGui::InputFloat("LastCombatBeginTime",&pGRI->LastCombatBeginTime);
      ImGui::InputFloat("LastItemDropExtraRarity",&pGRI->LastItemDropExtraRarity);
      ImGui::InputFloat("LastItemDropQuality",&pGRI->LastItemDropQuality);
      ImGui::InputFloat("LastPlayerJoinedTime",&pGRI->LastPlayerJoinedTime);
      ImGui::InputFloat("LastWaveSetupTime",&pGRI->LastWaveSetupTime);
      ImGui::InputFloat("LevelVictoryMusicDelay",&pGRI->LevelVictoryMusicDelay);
      ImGui::InputFloat("LimitPetHealingAmount",&pGRI->LimitPetHealingAmount);
      ImGui::InputFloat("LimitProjectilesDistanceAmount",&pGRI->LimitProjectilesDistanceAmount);
      ImGui::InputFloat("LobbyForceAFKShopTime",&pGRI->LobbyForceAFKShopTime);
      ImGui::InputFloat("MaxEnemySpeedMultiplier",&pGRI->MaxEnemySpeedMultiplier);
      ImGui::InputFloat("MaxFloatingDamageViewRange",&pGRI->MaxFloatingDamageViewRange);
      ImGui::InputFloat("MaxOverlordHeight",&pGRI->MaxOverlordHeight);
      ImGui::InputFloat("MinFloatingDamageCameraDot",&pGRI->MinFloatingDamageCameraDot);
      ImGui::InputFloat("MinOverlordHeight",&pGRI->MinOverlordHeight);
      ImGui::InputFloat("NightmareMinimumEquipmentDropQualityMultiplier",&pGRI->NightmareMinimumEquipmentDropQualityMultiplier);
      ImGui::InputFloat("NightmareModeAuraDamageMultiplier",&pGRI->NightmareModeAuraDamageMultiplier);
      ImGui::InputFloat("NightmareModeAuraHealthMultiplier",&pGRI->NightmareModeAuraHealthMultiplier);
      ImGui::InputFloat("NightmareModeAuraRangeMultiplier",&pGRI->NightmareModeAuraRangeMultiplier);
      ImGui::InputFloat("NightmareModeCrystalCoreHealthMultiplier",&pGRI->NightmareModeCrystalCoreHealthMultiplier);
      ImGui::InputFloat("NightmareModeEnemyDamageMultiplier",&pGRI->NightmareModeEnemyDamageMultiplier);
      ImGui::InputFloat("NightmareModeEnemyHealthMultiplier",&pGRI->NightmareModeEnemyHealthMultiplier);
      ImGui::InputFloat("NightmareModeEnemySpeedMultiplier",&pGRI->NightmareModeEnemySpeedMultiplier);
      ImGui::InputFloat("NightmareModeHeroDamageMultiplier",&pGRI->NightmareModeHeroDamageMultiplier);
      ImGui::InputFloat("NightmareModePhysicalTowerDamageMultiplier",&pGRI->NightmareModePhysicalTowerDamageMultiplier);
      ImGui::InputFloat("NightmareModePhysicalTowerHealthMultiplier",&pGRI->NightmareModePhysicalTowerHealthMultiplier);
      ImGui::InputFloat("NightmareModePlayerHealCostMultiplier",&pGRI->NightmareModePlayerHealCostMultiplier);
      ImGui::InputFloat("NightmareModePlayerHealthMultiplier",&pGRI->NightmareModePlayerHealthMultiplier);
      ImGui::InputFloat("NightmareModePlayerReceiveDamageMultiplier",&pGRI->NightmareModePlayerReceiveDamageMultiplier);
      ImGui::InputFloat("NightmareModeStrengthDrainDamageLerp",&pGRI->NightmareModeStrengthDrainDamageLerp);
      ImGui::InputFloat("NightmareModeStrengthDrainMultiplier",&pGRI->NightmareModeStrengthDrainMultiplier);
      ImGui::InputFloat("NightmareModeTrapDamageMultiplier",&pGRI->NightmareModeTrapDamageMultiplier);
      ImGui::InputFloat("NightmareModeTrapHealthMultiplier",&pGRI->NightmareModeTrapHealthMultiplier);
      ImGui::InputFloat("NightmareModeTrapRangeMultiplier",&pGRI->NightmareModeTrapRangeMultiplier);
      ImGui::InputFloat("NightmareModeWeaponProjectileSpeedBonusMultiplier",&pGRI->NightmareModeWeaponProjectileSpeedBonusMultiplier);
      ImGui::InputFloat("NightmarePlayerDamageResistanceMultiplier",&pGRI->NightmarePlayerDamageResistanceMultiplier);
      ImGui::InputFloat("NightmareRespawnTimeMultiplier",&pGRI->NightmareRespawnTimeMultiplier);
      ImGui::InputFloat("NonAFKShopExpireTime",&pGRI->NonAFKShopExpireTime);
      ImGui::InputFloat("PlayerDamageResistanceMultiplier",&pGRI->PlayerDamageResistanceMultiplier);
      ImGui::InputFloat("PlayerElementalWeaponDamageMultiplier",&pGRI->PlayerElementalWeaponDamageMultiplier);
      ImGui::InputFloat("PlayerHealCostMultiplier",&pGRI->PlayerHealCostMultiplier);
      ImGui::InputFloat("PlayerHealthMultiplier",&pGRI->PlayerHealthMultiplier);
      ImGui::InputFloat("PlayerKnockbackMomentumMultiplier",&pGRI->PlayerKnockbackMomentumMultiplier);
      ImGui::InputFloat("PlayerRespawnTime",&pGRI->PlayerRespawnTime);
      ImGui::InputFloat("PlayerSpawnImmunityTime",&pGRI->PlayerSpawnImmunityTime);
      ImGui::InputFloat("PostVictorySellTowerDelay",&pGRI->PostVictorySellTowerDelay);
      ImGui::InputFloat("RespawnTimeMultiplier",&pGRI->RespawnTimeMultiplier);
      ImGui::InputFloat("SurvivalEnemyGroupsIncreasePerWaveOriginalValue",&pGRI->SurvivalEnemyGroupsIncreasePerWaveOriginalValue);
      ImGui::InputFloat("SurvivalEnemyGroupsOriginalValue",&pGRI->SurvivalEnemyGroupsOriginalValue);
      ImGui::InputFloat("SurvivalEnemyNumbersIncreasePerWaveOriginalValue",&pGRI->SurvivalEnemyNumbersIncreasePerWaveOriginalValue);
      ImGui::InputFloat("SurvivalEnemyNumbersOriginalValue",&pGRI->SurvivalEnemyNumbersOriginalValue);
      ImGui::InputFloat("TotalBuildTime",&pGRI->TotalBuildTime);
      ImGui::InputFloat("WeaponProjectileSpeedBonusMultiplier",&pGRI->WeaponProjectileSpeedBonusMultiplier);
      ImGui::InputFloat("statReceiveProgress",&pGRI->statReceiveProgress);
      ImGui::InputFloat("totalCombatTime",&pGRI->totalCombatTime);
      ImGui::InputInt("CoreHealWaveInterval",&pGRI->CoreHealWaveInterval);
      ImGui::InputInt("CurrentAltTowerUnits",&pGRI->CurrentAltTowerUnits);
      ImGui::InputInt("CurrentTowerUnits",&pGRI->CurrentTowerUnits);
      ImGui::InputInt("ElapsedTime",&pGRI->ElapsedTime);
      ImGui::InputInt("FinalWaveNumber",&pGRI->FinalWaveNumber);
      ImGui::InputInt("GRIHostRandomID",&pGRI->GRIHostRandomID);
      ImGui::InputInt("GameplayInstanceID",&pGRI->GameplayInstanceID);
      ImGui::InputInt("GoalScore",&pGRI->GoalScore);
      ImGui::InputInt("IntervalForInfiniteWaveShopRoll",&pGRI->IntervalForInfiniteWaveShopRoll);
      ImGui::InputInt("MaxNumberOfEmitterSpawnable",&pGRI->MaxNumberOfEmitterSpawnable);
      ImGui::InputInt("MaxRestrictedMissionDifficulty",&pGRI->MaxRestrictedMissionDifficulty);
      ImGui::InputInt("MaxRestrictedMissionDifficultyHardcore",&pGRI->MaxRestrictedMissionDifficultyHardcore);
      ImGui::InputInt("MaxTowerUnits",&pGRI->MaxTowerUnits);
      ImGui::InputInt("Myth",&pGRI->Myth);
      ImGui::InputInt("NumActivePlayersForLatestWave",&pGRI->NumActivePlayersForLatestWave);
      ImGui::InputInt("NumberOfEmitterSpawnable",&pGRI->NumberOfEmitterSpawnable);
      ImGui::InputInt("OriginalFinalWaveNumber",&pGRI->OriginalFinalWaveNumber);
      ImGui::InputInt("PhaseCycleID",&pGRI->PhaseCycleID);
      ImGui::InputInt("PrevNumActivePlayers",&pGRI->PrevNumActivePlayers);
      ImGui::InputInt("RemainingMinute",&pGRI->RemainingMinute);
      ImGui::InputInt("RemainingTime",&pGRI->RemainingTime);
      ImGui::InputInt("Sup",&pGRI->Sup);
      ImGui::InputInt("SurvivalMaximumWaveGroups",&pGRI->SurvivalMaximumWaveGroups);
      ImGui::InputInt("TheStartWave",&pGRI->TheStartWave);
      ImGui::InputInt("TimeLimit",&pGRI->TimeLimit);
      ImGui::InputInt("TotalNumber",&pGRI->TotalNumber);
      ImGui::InputInt("TowerIterator",&pGRI->TowerIterator);
      ImGui::InputInt("TowerUpdatesPerFrame",&pGRI->TowerUpdatesPerFrame);
      ImGui::InputInt("Trans",&pGRI->Trans);
      ImGui::InputInt("Ult",&pGRI->Ult);
      ImGui::InputInt("Ultninetythree",&pGRI->Ultninetythree);
      ImGui::InputInt("Ultplus",&pGRI->Ultplus);
      ImGui::InputInt("Ultplusplus",&pGRI->Ultplusplus);
      ImGui::InputInt("WavesPlayed",&pGRI->WavesPlayed);
      ImGui::InputInt("missionSwitch",&pGRI->missionSwitch);
      ImGui::InputInt("totalArmourNumUps",&pGRI->totalArmourNumUps);
      ImGui::InputInt("totalItemNumUps",&pGRI->totalItemNumUps);
      ImGui::InputInt("totalWaveArmours",&pGRI->totalWaveArmours);
      ImGui::InputInt("totalWaveItems",&pGRI->totalWaveItems);
      ImGui::InputInt("waveNumber",&pGRI->waveNumber);
      // clang-format on
      ImGui::TreePop();
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
  auto pAchievementManager = config.GetAchievementManager();

  if (!pPlayerPawn || !pController || !pEngine || !pAchievementManager)
    return;

  // for (size_t i = 0; i < pAchievementManager->AchievementEntries.Num(); i++)
  // {
  //   if (!pAchievementManager->AchievementEntries.IsValidIndex(i))
  //     continue;
  //   auto entry = pAchievementManager->AchievementEntries[i];
  //   std::string aName = entry.AchievementName.Data != nullptr
  //                           ? entry.AchievementName.ToString()
  //                           : "None";
  //   ImGui::Text("%s", aName.c_str());
  //   ImGui::SameLine();
  //   std::string aDesc = entry.AchievementDescription.Data != nullptr
  //                           ? entry.AchievementDescription.ToString()
  //                           : "None";
  //   ImGui::Text("%s", aDesc.c_str());
  // }

  // IMGUI_T_ARRAY_STRINGS(Area1_Tags, pAchievementManager)
  // IMGUI_T_ARRAY_STRINGS(Area2_Tags, pAchievementManager);
  // IMGUI_T_ARRAY_STRINGS(Area3_Tags, pAchievementManager);
  // IMGUI_T_ARRAY_STRINGS(AllArea_Tags, pAchievementManager);
  // IMGUI_T_ARRAY_STRINGS(Challenge_Tags, pAchievementManager);
  // IMGUI_T_ARRAY_STRINGS(FamiliarTypes, pAchievementManager);
  //// TArray<struct FFamiliarTypeAlias>
  //// FamiliarAliases; // 0x00B0(0x000C) (Edit, NeedCtorLink)
  // IMGUI_T_ARRAY_STRINGS(AllFamiliarTypes, pAchievementManager);
  //// TArray<struct FFamiliarTypeAlias> AllFamiliarAliases; // 0x00C8(0x000C)
  //// (Edit, NeedCtorLink) TArray<unsigned char> HeroClassUniqueIDs; //
  //// 0x00D4(0x000C) (Edit, NeedCtorLink)
  // IMGUI_T_ARRAY_STRINGS(TranscendentSurvivalistAreaTags,
  // pAchievementManager); IMGUI_T_ARRAY_STRINGS(MasterRTSAreaTags,
  // pAchievementManager);

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
    ImGui::InputText("##ItemName", charBuff, sizeof(charBuff),
                     IM_ARRAYSIZE(charBuff));
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
    static char ncharBuff[32];
    ImGui::InputText("##ItemForger", ncharBuff, sizeof(ncharBuff),
                     IM_ARRAYSIZE(ncharBuff));
    ImGui::SameLine();

    if (ImGui::Button("Change Forger Name")) {
      ChangeFString(item->UserForgerName, ncharBuff);
    } else {
      ImGui::Text("UserForgerName    :");
    }
  }

  if (ImGui::TreeNode("___Main___")) {
    ImGui::Text("___Name___");

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

    ImGui::Text("___Color___");
    //  ImGui::InputFloat("R1", &item->PrimaryColorOverride.R, 1, 100, "%.3f");
    //  ImGui::SameLine(); ImGui::InputFloat("G1",
    //  &item->PrimaryColorOverride.G, 1, 100, "%.3f"); ImGui::SameLine();
    //  ImGui::InputFloat("B1", &item->PrimaryColorOverride.B, 1, 100, "%.3f");

    // ImGui::InputFloat("R2", &item->SecondaryColorOverride.R, 1, 100,
    // "%.3f"); ImGui::SameLine(); ImGui::InputFloat("G2",
    // &item->SecondaryColorOverride.G, 1, 100, "%.3f"); ImGui::SameLine();
    // ImGui::InputFloat("B2", &item->SecondaryColorOverride.B, 1, 100,
    // "%.3f");

    ImGui::ColorPicker4("Primary", &(*(float *)&item->PrimaryColorOverride.R));
    ImGui::SameLine();
    ImGui::ColorPicker4("Secondary",
                        &(*(float *)&item->SecondaryColorOverride.R));

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
    ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f),
                       "This is for debugging purposes");
    if (ImGui::Checkbox("Attach console", &config.bConsoleAttached)) {
      if (config.bConsoleAttached) {
        config.AttachConsole();
      } else {
        config.DettachConsole();
      }
    }
    ImGui::SameLine();
    ImGui::Checkbox("Log process events", &config.bLoggingProcessEvents);

    // unordered_map menu
    // TODO: THIS COULD BE DONE ALOT BETTER
    { // function filter
      if (ImGui::TreeNode("Process events function filter")) {
        static char buff[255] = {0};
        ImGui::InputText("filter", buff, sizeof(buff));
        ImGui::Columns(2); // Create two columns for side-by-side tables
        // Expose a few Borders related flags interactively
        enum ContentsType { CT_Text, CT_FillButton };
        static ImGuiTableFlags flags =
            ImGuiTableFlags_Borders | ImGuiTableFlags_RowBg;
        if (ImGui::BeginTable("table1", 2, flags)) {
          // Set up columns for the table (optional but useful for proper
          // layout)
          ImGui::TableSetupColumn("Filter Name",
                                  ImGuiTableColumnFlags_WidthStretch);
          ImGui::TableSetupColumn("Active", ImGuiTableColumnFlags_WidthFixed);

          ImGui::TableHeadersRow();

          for (auto &s : config.vProcessEventFunctionFilter) {
            if (s.second == false)
              continue;

            if (s.first.find(buff) == std::string::npos)
              continue;
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            ImGui::TextUnformatted(s.first.c_str());

            ImGui::TableNextColumn();
            ImGui::Checkbox(("bFilter##" + s.first).c_str(), &s.second);
          }

          ImGui::EndTable();
        }
        ImGui::NextColumn();
        if (ImGui::BeginTable("table2", 2, flags)) {
          // Set up columns for the table (optional but useful for proper
          // layout)
          ImGui::TableSetupColumn("Filter Name#2",
                                  ImGuiTableColumnFlags_WidthStretch);
          ImGui::TableSetupColumn("Active#2", ImGuiTableColumnFlags_WidthFixed);
          ImGui::TableHeadersRow();

          for (auto &s : config.vProcessEventFunctionFilter) {
            if (s.second == true)
              continue;

            if (s.first.find(buff) == std::string::npos)
              continue;
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            ImGui::TextUnformatted(s.first.c_str());

            ImGui::TableNextColumn();
            ImGui::Checkbox(("bFilter##" + s.first).c_str(), &s.second);
          }

          ImGui::EndTable();
        }

        ImGui::TreePop();
      }
    }

    ImGui::Columns(1);

    { // object filter
      if (ImGui::TreeNode("Process events object filter")) {
        static char buff[255] = {0};
        ImGui::InputText("object filter", buff, sizeof(buff));
        // Expose a few Borders related flags interactively
        enum ContentsType { CT_Text, CT_FillButton };
        static ImGuiTableFlags flags =
            ImGuiTableFlags_Borders | ImGuiTableFlags_RowBg;
        if (ImGui::BeginTable("tableobject", 2, flags)) {
          // Set up columns for the table (optional but useful for proper
          // layout)
          ImGui::TableSetupColumn("Filter Name",
                                  ImGuiTableColumnFlags_WidthStretch);
          ImGui::TableSetupColumn("Active", ImGuiTableColumnFlags_WidthFixed);

          ImGui::TableHeadersRow();

          for (auto &s : config.vProcessEventObjectFilter) {

            if (s.first.find(buff) == std::string::npos)
              continue;
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            ImGui::TextUnformatted(s.first.c_str());

            ImGui::TableNextColumn();
            ImGui::Checkbox(("bFilter##" + s.first).c_str(), &s.second);
          }

          ImGui::EndTable();
        }

        ImGui::TreePop();
      }
    }
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

  ImGui::Text("Creation span : %f", pPawn->CreationTime);
  ImGui::Text("Spawn span : %f", pPawn->SpawnTime);
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

  ImGui::Text("TargetingTeam: %d", pPawn->TargetingTeam);
  ImGui::Text("LifeSpan: %f", pPawn->LifeSpan);
  ImGui::Text("CreationTime: %f", pPawn->CreationTime);

  ImGui::InputInt("Life", &pPawn->Health);
  ImGui::InputInt("MaxLife", &pPawn->MaxHealth);
  IMGUI_FVECTOR(Location, pPawn);
  IMGUI_FVECTOR(DrawScale3D, pPawn);
  // ImGui::InputFloat("Gravity", &pPawn->GravityZMultiplier);
}
