
// clang-format off
#include "pch.h"
#include "includes/menu_main.h"
// clang-format on

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

    RenderMenuButton(
        "Basic Cheats", [this]() { selectedMenu = Menus::MenuBasic; },
        selectedMenu == 0);
    RenderMenuButton(
        "Config Cheats", [this]() { selectedMenu = Menus::MenuConfig; },
        selectedMenu == 1);

    RenderMenuButton(
        "Player Cheats", [this]() { selectedMenu = Menus::MenuPlayer; },
        selectedMenu == 2);

    RenderMenuButton(
        "Item Modding", [this]() { selectedMenu = Menus::MenuModding; },
        selectedMenu == 3);

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

    case Menus::MenuPlayer:
      PlayerCheats();
      break;

    case Menus::MenuModding:
      ItemModding();
      break;

    default:
      BasicCheats();
      break;
    }
    ImGui::EndChild();
    ImGui::EndGroup();
  }
}

void MenuMain::ItemModding() {
  ImGui::Text("Item modding");
  ImGui::Separator();

  auto pPlayerController = config.GetADunDefPlayerController();
  if (!pPlayerController)
    return;

  // TODO: this looks fucken awful refactor this its a pain to read
  if (pPlayerController->myHero &&
      pPlayerController->myHero->HeroEquipments.Num()) {
    if (ImGui::TreeNode("Hero equipment")) {
      for (size_t i = 0; i < pPlayerController->myHero->HeroEquipments.Num();
           i++) {
        auto item = pPlayerController->myHero->HeroEquipments[i];
        if (ImGui::TreeNode(
                (item->ObjectArchetype->GetName() + "##" + std::to_string(i))
                    .c_str())) {
          ImGuiItem(item);

          ImGui::TreePop();
        }
      }
      ImGui::TreePop();
    }
  } else {
    ImGui::Text("No equipped items");
  }
}

void MenuMain::Thread() {
  // any thing in this function will be handled in proc events
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
    auto forward = config.GetForward(rot.Yaw, rot.Pitch);
    float t[3] = {forward.X * config.fNoClipSpeed,
                  forward.Y * config.fNoClipSpeed,
                  forward.Z * config.fNoClipSpeed};
    pPlayerPawn->Location =
        config.AddFVector(pPlayerPawn->Location, {t[0], t[1], t[2]});
  }

  if (ImGui::IsKeyDown(ImGuiKey_S)) {
    auto forward = config.GetForward(rot.Yaw, rot.Pitch);
    float t[3] = {forward.X * config.fNoClipSpeed,
                  forward.Y * config.fNoClipSpeed,
                  forward.Z * config.fNoClipSpeed};
    pPlayerPawn->Location =
        config.AddFVector(pPlayerPawn->Location, {-t[0], -t[1], -t[2]});
  }

  if (ImGui::IsKeyDown(ImGuiKey_D)) {

    auto forward = config.GetForward(rot.Yaw, rot.Pitch);
    // Define the up vector (assuming Z is up)
    Classes::FVector up = {0.0f, 0.0f, 1.0f};

    // Calculate the right direction using cross product
    Classes::FVector right = {forward.Y * up.Z - forward.Z * up.Y,
                              forward.Z * up.X - forward.X * up.Z,
                              forward.X * up.Y - forward.Y * up.X};

    // Normalize the right vector (if needed) and scale it
    float tRight[3] = {right.X * config.fNoClipSpeed,
                       right.Y * config.fNoClipSpeed,
                       right.Z * config.fNoClipSpeed};

    pPlayerPawn->Location = config.AddFVector(
        pPlayerPawn->Location, {-tRight[0], -tRight[1], -tRight[2]});
  }

  if (ImGui::IsKeyDown(ImGuiKey_A)) {
    auto forward = config.GetForward(rot.Yaw, rot.Pitch);
    // Define the up vector (assuming Z is up)
    Classes::FVector up = {0.0f, 0.0f, 1.0f};

    // Calculate the right direction using cross product
    Classes::FVector left = {forward.Y * up.Z - forward.Z * up.Y,
                             forward.Z * up.X - forward.X * up.Z,
                             forward.X * up.Y - forward.Y * up.X};

    // Normalize the left vector (if needed) and scale it
    float tLeft[3] = {left.X * config.fNoClipSpeed,
                      left.Y * config.fNoClipSpeed,
                      left.Z * config.fNoClipSpeed};

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
  // Debug();
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
    // ImGui::InputInt("Player mana", &pController->ManaPower);
    // float vec[3] = {pController->Pawn->Location.X,
    //                 pController->Pawn->Location.Y,
    //                 pController->Pawn->Location.Z};
    // if (ImGui::InputFloat3("Player pos", vec)) {
    //   pController->Pawn->Location.X = vec[0];
    //   pController->Pawn->Location.Y = vec[1];
    //   pController->Pawn->Location.Z = vec[2];
    // }
    // ImGui::InputInt("Score", &pController->Score);

    if (ImGui::Button("Max all towers")) {
      pController->UpgradeAllTowers(5);
    }
    ImGui::SameLine();
    if (ImGui::Button("Repair all towers")) {
      pController->RepairAllTowers();
    }

    if (ImGui::Button("Max shop mana")) {
      Classes::FHighDigitInt tmp = {1, 1, 1, 1};
      pController->SetBankedMana(tmp, 0, 1);
    }
    // TArray<class ADunDefPlayerAbility*>                PlayerAbilities; //
    // 0x097C(0x000C) (NeedCtorLink) TArray<int> statsData; // 0x0654(0x000C)
    // (NeedCtorLink) TArray<int> playerStatsData; // 0x0660(0x000C)
    // (NeedCtorLink) TArray<int> myStatsData; // 0x066C(0x000C) (NeedCtorLink)
    ////
    // void SkipToWave(int Wave);
    // void UpgradeAllTowers(int numLevels);
    // void DowngradeAllTowers(int numLevels);
    // void DropAllMana();
    // void STATIC_DistributeManaAmongPlayers(float ManaAmount, int
    // numRecursions, bool bAllowBanking, bool bOnlyPutInBank); void
    // ClientDoUnlockAchievment(TEnumAsByte<EAchievement> Achievement); void
    // ClientAddManaToBank(float ManaAmount, bool bIgnoreBankLimit); bool
    // AddBankMana(float mana, bool bIgnoreBankLimit, bool bAddFromHeroMana);
    // void StopHovering(); void StartHovering(); void
    // ClientSetUserNickname(const struct FString& NickName);
  }

  if (!pController->myHero)
    return;
  // player hero
  {

    ImGui::InputInt("Hero level", &pController->myHero->HeroLevel);
    ImGui::InputInt("Hero Experience", &pController->myHero->HeroExperience);
    ImGui::InputInt("Mana power", &pController->myHero->ManaPower);
    static float c1[4] = {0, 0, 0, 0};
    static float c2[4] = {0, 0, 0, 0};
    static float c3[4] = {0, 0, 0, 0};

    ImGui::InputFloat4("C1", c1);
    ImGui::InputFloat4("C2", c2);
    ImGui::InputFloat4("C3", c3);

    Classes::FLinearColor cLiner1 = {c1[0], c1[1], c1[2], c1[3]};
    Classes::FLinearColor cLiner2 = {c2[0], c2[1], c2[2], c2[3]};
    Classes::FLinearColor cLiner3 = {c3[0], c3[1], c3[2], c3[3]};

    if (ImGui::Button("Set color")) {
      pController->myHero->SetColors(cLiner1, cLiner2, cLiner3);
    }

    for (int i = 0; i > pController->myHero->HeroEquipments.Num(); i++) {
    }

    // TArray<class UHeroEquipment*>                      HeroEquipments; //
    // 0x056C(0x000C) (NeedCtorLink)
    // player hero
    //	unsigned long                                      bHasCompleteArmorSet
    //: 1;                                 // 0x004C(0x0004) 	int
    // CurrentCostumeIndex;                                      //
    // 0x0114(0x0004) (Edit) 	TArray<struct FHeroCostumeTemplate>
    // HeroCostumes; // 0x0214(0x000C) (Edit, NeedCtorLink) 	int
    // HeroHealthModifier; // 0x04C0(0x0004) 	int HeroSpeedModifier; //
    // 0x04C4(0x0004) 	int HeroDamageModifier; // 0x04C8(0x0004) 	int
    // HeroCastingModifier; // 0x04CC(0x0004) 	int HeroAbilityOneModifier; //
    // 0x04D0(0x0004) 	int HeroAbilityTwoModifier; // 0x04D4(0x0004) 	int
    // HeroDefenseHealthModifier;                                //
    // 0x04D8(0x0004) 	int HeroDefenseAttackRateModifier; // 0x04DC(0x0004)
    // int HeroDefenseDamageModifier;                                //
    // 0x04E0(0x0004) 	int HeroDefenseAreaOfEffectModifier; // 0x04E4(0x0004)
    //	TArray<class ADunDefTower*>                        HeroTowers; //
    // 0x0578(0x000C) (NeedCtorLink) 	class UHeroEquipment*
    // HeroWeaponEquipment;
    //// 0x0584(0x0004) 	bool IsHeroUnlocked(class ULocalPlayer*
    /// ForPlayer, int*
    // lockedByDemo); 	bool IsCostumeUnlocked(class ULocalPlayer* ForPlayer,
    // int costumeIndex); 	int GetNextUnlockedCostumeIndex(class
    // ULocalPlayer* ForPlayer, int CurrentIndex); 	int
    // GetNumberOfUnlockedCostumes(class ULocalPlayer* ForPlayer); 	void
    // SetName(const struct FString& NewName);
    //	void DoLevelUp(int NumLevelsToAdd, bool dontSaveHero);
    //	void AddExperience(int experience);
    //	bool HeroLevelUp();
    //	bool ReachedLevelCap();
  }

  if (!pController->Pawn)
    return;
  // player pawn
  {
    ImGui::InputInt("Health", &pController->Pawn->Health);
    ImGui::InputInt("Max Health", &pController->Pawn->HealthMax);

    static float loc[3] = {0, 0, 0};
    ImGui::InputFloat3("Position", loc);
    if (ImGui::Button("Update position")) {
      Classes::FVector temp = {loc[0], loc[1], loc[2]};
      pController->Pawn->Location = temp;
    }

    static float drawScale[3] = {0, 0, 0};
    ImGui::InputFloat3("Draw scale", drawScale);
    if (ImGui::Button("Update 3d draw scale")) {
      Classes::FVector temp = {drawScale[0], drawScale[1], drawScale[2]};
      pController->Pawn->DrawScale3D = temp;
    }
    ImGui::InputFloat("Draw scale", &pController->DrawScale);
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
  {
    ImGui::Text("PlayerLoc %f %f %f", pPlayerPawn->Location.X,
                pPlayerPawn->Location.Y, pPlayerPawn->Location.Z);

    ImGui::Text("PlayerRot %d %d %d", pPlayerPawn->Rotation.Yaw,
                pPlayerPawn->Rotation.Pitch, pPlayerPawn->Rotation.Roll);

    ImGui::Text("Controller x:%f y:%f z:%f", pController->Location.X,
                pController->Location.Y, pController->Location.Z);
    ImGui::Text("Controller %d %d %d", pController->Rotation.Yaw,
                pController->Rotation.Pitch, pController->Rotation.Roll);

    if (pController->PlayerCamera) {
      ImGui::Text(
          "Camera x:%f y:%f z:%f", pController->PlayerCamera->Location.X,
          pController->PlayerCamera->Location.Y, pController->Location.Z);
      ImGui::Text("Camera %d %d %d", pController->PlayerCamera->Rotation.Yaw,
                  pController->PlayerCamera->Rotation.Pitch,
                  pController->PlayerCamera->Rotation.Roll);
    }

    if (pController->myHUD) {
      ImGui::Text("Hud x:%f y:%f z:%f", pController->myHUD->Location.X,
                  pController->myHUD->Location.Y, pController->Location.Z);
      ImGui::Text("Hud %d %d %d", pController->myHUD->Rotation.Yaw,
                  pController->myHUD->Rotation.Pitch,
                  pController->myHUD->Rotation.Roll);
    }

    ImGui::Text("Controller->TargetViewRotation %d %d %d",
                pController->TargetViewRotation.Yaw,
                pController->TargetViewRotation.Pitch,
                pController->TargetViewRotation.Roll);
    ImGui::Text("Controller->CurrentPawnRotation %d %d %d",
                pController->CurrentPawnRotation.Yaw,
                pController->CurrentPawnRotation.Pitch,
                pController->CurrentPawnRotation.Roll);

    ImGui::Text("pPlayerPawn->DesiredRotation %d %d %d",
                pPlayerPawn->DesiredRotation.Yaw,
                pPlayerPawn->DesiredRotation.Pitch,
                pPlayerPawn->DesiredRotation.Roll);

    ImGui::Text("pPlayerPawn->RelativeRotation %d %d %d",
                pPlayerPawn->RelativeRotation.Yaw,
                pPlayerPawn->RelativeRotation.Pitch,
                pPlayerPawn->RelativeRotation.Roll);

    ImGui::Text("pController->PlayerCamera->CameraCache.POV.Rotation %d %d %d",
                pController->PlayerCamera->CameraCache.POV.Rotation.Yaw,
                pController->PlayerCamera->CameraCache.POV.Rotation.Pitch,
                pController->PlayerCamera->CameraCache.POV.Rotation.Roll);
  }

  //  Classes::FVector outLoc;
  //  Classes::FRotator outRot;
  //  pController->GetPlayerViewPoint(&outLoc, &outRot);
  //  ImGui::Text("outRot %d %d %d", outRot.Yaw, outRot.Pitch, outRot.Roll);

  return;
}

void MenuMain::ImGuiItem(Classes::UHeroEquipment *item) {
  ImGui::Text("InternalName : %s", item->GetName().c_str());

  if (item->EquipmentName.Data) {
    ImGui::Text("EquipmentName     :  %ls", item->EquipmentName.c_str());
  } else {
    ImGui::Text("EquipmentName     :  ");
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

  // item name
  if (item->UserEquipmentName.Data) {
    // change item name
    ImGui::Text("UserEquipmentName :  %ls", item->UserEquipmentName.c_str());
    static char charBuff[32];
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    ImGui::InputText("Name  ", charBuff, sizeof(charBuff),
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
    ImGui::InputText("Forger", ncharBuff, sizeof(ncharBuff),
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

  {
    // if (ImGui::TreeNode("Cheat Settings")) {
    //   ImGui::InputInt("Multiply By", &MultiplyRewardsBy);
    //   // ImGui::SliderInt("Reward Multiply", &MultiplyRewardsBy, 0, 10000);
    //   ImGui::TreePop();
    // }
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
      if (!(names.Data[i].StringValue.Data))
        continue;

      std::string ComboName = names.Data[i].StringValue.ToString();
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

void MenuMain::RemoveItem(Classes::UHeroEquipment *item) {}
