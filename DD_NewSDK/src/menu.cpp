
// clang-format off
#include "pch.h"
#include "includes/ImGui/imgui.h"
#include "includes/ImGui/imgui_impl_dx9.h"
#include "includes/ImGui/imgui_impl_win32.h"

#include "includes/Hooking.h"
#include "includes/config.h"
#include "includes/menu.h"
#include <string.h>
// clang-format on

std::string filterarray[]{
    "Function UDKGame.DunDefWeapon_MeleeSword.Tick",
    "Function Core.Object.EndState",
    "Function DunDefArabia.DunDefDjinnManager.PostBeginPlay",
    "Function Engine.Actor.AllowSpawn",
    "Function Engine.Actor.AnimTreeUpdated",
    "Function Engine.Actor.Attach",
    "Function Engine.Actor.BecomeViewTarget",
    "Function Engine.Actor.EndViewTarget",
    "Function Engine.Actor.GainedChild",
    "Function Engine.Actor.InterpolationChanged",
    "Function Engine.Actor.InterpolationFinished",
    "Function Engine.Actor.InterpolationStarted",
    "Function Engine.Actor.ModifyHearSoundComponent",
    "Function Engine.Actor.OnDestroy",
    "Function Engine.Actor.PhysicsVolumeChange",
    "Function Engine.Actor.PostBeginPlay",
    "Function Engine.Actor.PostInitAnimTree",
    "Function Engine.Actor.PreBeginPlay",
    "Function Engine.Actor.ReceivedNewEvent",
    "Function Engine.Actor.SetInitialState",
    "Function Engine.Actor.SpawnedByKismet",
    "Function Engine.Actor.Touch",
    "Function Engine.AnimNode.OnBecomeRelevant",
    "Function Engine.AnimNode.OnCeaseRelevant",
    "Function Engine.AnimNode.OnInit",
    "Function Engine.AnimNotify_ViewShake.Notify",
    "Function Engine.Camera.UpdateCamera",
    "Function Engine.Canvas.Reset",
    "Function Engine.Console.InputChar",
    "Function Engine.Console.InputKey",
    "Function Engine.DecalManager.DecalFinished",
    "Function Engine.Emitter.PostBeginPlay",
    "Function Engine.Engine.GetCurrentWorldInfo",
    "Function Engine.GameInfo.OnStartOnlineGameComplete",
    "Function Engine.GameInfo.Timer",
    "Function Engine.GameInfoDataProvider.ProviderInstanceBound",
    "Function Engine.GameReplicationInfo.ShouldShowGore",
    "Function Engine.GameReplicationInfo.Timer",
    "Function Engine.GameViewportClient.GetSubtitleRegion",
    "Function Engine.GameViewportClient.LayoutPlayers",
    "Function Engine.HeightFog.PostBeginPlay",
    "Function Engine.Interaction.PostRender",
    "Function Engine.Interaction.Tick",
    "Function Engine.InterpActor.PostBeginPlay",
    "Function Engine.InventoryManager.PostBeginPlay",
    "Function Engine.LocalPlayer.PreHUDRender",
    "Function Engine.MatineeActor.Update",
    "Function Engine.Pawn.BecomeViewTarget",
    "Function Engine.Pawn.HeadVolumeChange",
    "Function Engine.Pawn.IsPlayerPawn",
    "Function Engine.Pawn.PostInitAnimTree",
    "Function Engine.Pawn.PreBeginPlay",
    "Function Engine.PhysicsVolume.ActorEnteredVolume",
    "Function Engine.PhysicsVolume.ActorLeavingVolume",
    "Function Engine.PhysicsVolume.PostBeginPlay",
    "Function Engine.PlayerController.ClientHearSound",
    "Function Engine.PlayerController.ClientSetViewTarget",
    "Function Engine.PlayerController.Destroyed",
    "Function Engine.PlayerController.GetFOVAngle",
    "Function Engine.PlayerController.HearSoundFinished",
    "Function Engine.PlayerController.InitInputSystem",
    "Function Engine.PlayerController.Kismet_ClientPlaySound",
    "Function Engine.PlayerController.NotifyLanded",
    "Function Engine.PlayerController.PreRender",
    "Function Engine.PlayerController.ServerNotifyLoadedWorld",
    "Function Engine.PlayerController.StartAltFire",
    "Function Engine.PlayerController.StopAltFire",
    "Function Engine.PlayerController.StopFire",
    "Function Engine.Projectile.PreBeginPlay",
    "Function Engine.SceneDataStore.Registered",
    "Function Engine.SequenceEvent.RegisterEvent",
    "Function Engine.SequenceOp.Activated",
    "Function Engine.SequenceOp.Deactivated",
    "Function Engine.SkeletalMeshActor.PostBeginPlay",
    "Function Engine.UIDataStore.Registered",
    "Function Engine.UIDataStore.SubscriberAttached",
    "Function Engine.UIDataStore.SubscriberDetached",
    "Function Engine.UIDataStore.Unregistered",
    "Function Engine.UIDynamicDataProvider.ProviderInstanceBound",
    "Function Engine.UIDynamicDataProvider.ProviderInstanceUnbound",
    "Function Engine.UIEvent.ShouldAlwaysInstance",
    "Function Engine.UIEvent_SceneActivated.Deactivated",
    "Function Engine.UIInteraction.GetLoginStatus",
    "Function Engine.UIList.Initialized",
    "Function Engine.UIList.OnStateChanged",
    "Function Engine.UIList.PostInitialize",
    "Function Engine.UIObject.AllowInputAlias",
    "Function Engine.UIScene.AddedChild",
    "Function Engine.UIScene.CalculateInputMask",
    "Function Engine.UIScene.GetFocusHint",
    "Function Engine.UIScene.RemovedChild",
    "Function Engine.UIScene.UIAnimationEnded",
    "Function Engine.UIScene.UIAnimationStarted",
    "Function Engine.UIScreenObject.ActivateFocusHint",
    "Function Engine.UIScreenObject.ActivateKeyFrameCompletedDelegates",
    "Function Engine.UIScreenObject.AddedChild",
    "Function Engine.UIScreenObject.Initialized",
    "Function Engine.UIScreenObject.PostInitialize",
    "Function Engine.UIScreenObject.RemovedChild",
    "Function Engine.UIScreenObject.RemovedFromParent",
    "Function Engine.UIScreenObject.SetVisibility",
    "Function Engine.UIScreenObject.UIAnimationEnded",
    "Function Engine.UIScreenObject.UIAnimationStarted",
    "Function Engine.UIScrollbar.Initialized",
    "Function Engine.UIScrollbar.PostInitialize",
    "Function Engine.UIState.ActivateState",
    "Function Engine.UIState.DeactivateState",
    "Function Engine.UIState.IsStateAllowed",
    "Function Engine.UIState.OnActivate",
    "Function Engine.UIState.OnDeactivate",
    "Function Engine.UIState_Disabled.ActivateState",
    "Function Engine.UIState_Focused.ActivateState",
    "Function Engine.Volume.PostBeginPlay",
    "Function Engine.VolumeTimer.PostBeginPlay",
    "Function Engine.VolumeTimer.Timer",
    "Function Engine.Weapon.RefireCheckTimer",
    "Function Engine.Weapon.WeaponEquipping.BeginState",
    "Function Engine.Weapon.WeaponEquipping.EndState",
    "Function Engine.WorldInfo.PostBeginPlay",
    "Function Engine.WorldInfo.PreBeginPlay",
    "Function UDKGame.DunDefBasePlayerController.CheckMovie",
    "Function UDKGame.DunDefBasePlayerController.PostSpawn",
    "Function UDKGame.DunDefBasePlayerController.ServerCheckMovie",
    "Function UDKGame.DunDefBasePlayerController.SkippedMovie",
    "Function UDKGame.DunDefBuffManager.PostBeginPlay",
    "Function UDKGame.DunDefBuffManager.Tick",
    "Function UDKGame.DunDefCagedPet.Tick",
    "Function UDKGame.DunDefCrystalCore.PostBeginPlay",
    "Function UDKGame.DunDefCustomNode.PostBeginPlay",
    "Function UDKGame.DunDefDamageableTarget.SpawnDefaultBuffs",
    "Function UDKGame.DunDefDroppedEquipment.RotateSkelMesh",
    "Function UDKGame.DunDefEmitterSpawnable.AllowSpawn",
    "Function UDKGame.DunDefEmitterSpawnable.Destroyed",
    "Function UDKGame.DunDefEmitterSpawnable.OnParticleSystemFinished",
    "Function UDKGame.DunDefEmitterSpawnable.PostBeginPlay",
    "Function UDKGame.DunDefEmitterSpawnable.Tick",
    "Function UDKGame.DunDefForge.CheckCombatPhase",
    "Function UDKGame.DunDefForge.PostBeginPlay",
    "Function UDKGame.DunDefForge.Tick",
    "Function UDKGame.DunDefGameReplicationInfo.PostBeginPlay",
    "Function UDKGame.DunDefGameReplicationInfo.Tick",
    "Function UDKGame.DunDefHUD.PostBeginPlay",
    "Function UDKGame.DunDefHUD.PostRender",
    "Function UDKGame.DunDefLocalPlayer.PostHUDRender",
    "Function UDKGame.DunDefMiniMap.PostBeginPlay",
    "Function UDKGame.DunDefNPC_BarKeep.PlayIdleQuipSound",
    "Function UDKGame.DunDefNPC_BarKeep.Tick",
    "Function UDKGame.DunDefNativeUIScene.IsKeyboardOwned",
    "Function UDKGame.DunDefPawn.BaseChange",
    "Function UDKGame.DunDefPawn.PlayFootStepSound",
    "Function UDKGame.DunDefPlayer.DoKnockback",
    "Function UDKGame.DunDefPlayer.Landed",
    "Function UDKGame.DunDefPlayer.PostBeginPlay",
    "Function UDKGame.DunDefPlayer.Tick",
    "Function UDKGame.DunDefPlayerAbility.PostBeginPlay",
    "Function UDKGame.DunDefPlayerAbility_BuildTower.PostBeginPlay",
    "Function UDKGame.DunDefPlayerAbility_RepairTower.PostBeginPlay",
    "Function UDKGame.DunDefPlayerAbility_SellTower.PostBeginPlay",
    "Function UDKGame.DunDefPlayerAbility_UpgradeTower.PostBeginPlay",
    "Function UDKGame.DunDefPlayerCamera.CalculateSpinOffset",
    "Function UDKGame.DunDefPlayerCamera.OverTheShoulder.BeginState",
    "Function UDKGame.DunDefPlayerCamera.OverTheShoulder.EndState",
    "Function UDKGame.DunDefPlayerCamera.OverTheShoulder.Tick",
    "Function UDKGame.DunDefPlayerCamera.PostBeginPlay",
    "Function UDKGame.DunDefPlayerCamera.Tick",
    "Function UDKGame.DunDefPlayerController.CheckForStartWave",
    "Function UDKGame.DunDefPlayerController.CheckRespawn",
    "Function UDKGame.DunDefPlayerController.CreateHUD",
    "Function UDKGame.DunDefPlayerController.GetHeroManager",
    "Function UDKGame.DunDefPlayerController.GetPlayerViewPoint",
    "Function UDKGame.DunDefPlayerController.GetSeamlessTravelActorList",
    "Function UDKGame.DunDefPlayerController.InCinematic.PlayerTick",
    "Function UDKGame.DunDefPlayerController.InCinematic.PoppedState",
    "Function UDKGame.DunDefPlayerController.InCinematic.PushedState",
    "Function UDKGame.DunDefPlayerController.InCinematic.StartFire",
    "Function UDKGame.DunDefPlayerController.IncreasePlacementTowerRadius",
    "Function UDKGame.DunDefPlayerController.JumpPressed",
    "Function UDKGame.DunDefPlayerController.JumpReleased",
    "Function UDKGame.DunDefPlayerController.LockedMovement.PlayerTick",
    "Function UDKGame.DunDefPlayerController.LockedMovement.PoppedState",
    "Function UDKGame.DunDefPlayerController.LockedMovement.PushedState",
    "Function UDKGame.DunDefPlayerController.NotifyDirectorControl",
    "Function UDKGame.DunDefPlayerController.NotifyLoadedWorld",
    "Function UDKGame.DunDefPlayerController.Pause",
    "Function UDKGame.DunDefPlayerController.PlayerWaiting.BeginState",
    "Function UDKGame.DunDefPlayerController.PlayerWaiting.EndState",
    "Function UDKGame.DunDefPlayerController.PlayerWaiting.PlayerTick",
    "Function UDKGame.DunDefPlayerController.PlayerWalking.BeginState",
    "Function UDKGame.DunDefPlayerController.PlayerWalking.ContinuedState",
    "Function UDKGame.DunDefPlayerController.PlayerWalking.PausedState",
    "Function UDKGame.DunDefPlayerController.PlayerWalking.PlayerTick",
    "Function UDKGame.DunDefPlayerController.PlayerWalking.StartFire",
    "Function UDKGame.DunDefPlayerController.PostBeginPlay",
    "Function UDKGame.DunDefPlayerController.ReceivedPlayer",
    "Function UDKGame.DunDefPlayerController.SpawnPlayerCamera",
    "Function UDKGame.DunDefPlayerReplicationInfo.Destroyed",
    "Function UDKGame.DunDefPlayerReplicationInfo.PostBeginPlay",
    "Function UDKGame.DunDefPlayerReplicationInfo.Timer",
    "Function UDKGame.DunDefPracticeDummy.PostBeginPlay",
    "Function UDKGame.DunDefProjectile.Destroyed",
    "Function UDKGame.DunDefProjectile.HitWall",
    "Function UDKGame.DunDefProjectile.PostBeginPlay",
    "Function UDKGame.DunDefProjectile.RefreshSpeedLifeSpan",
    "Function UDKGame.DunDefSceneClient.PauseGame",
    "Function UDKGame.DunDefTowerAllowanceVolume.PostBeginPlay",
    "Function UDKGame.DunDefTowerPreventionRadius.PostBeginPlay",
    "Function UDKGame.DunDefTowerPreventionRadius.Touch",
    "Function UDKGame.DunDefTowerPreventionVolume.PostBeginPlay",
    "Function UDKGame.DunDefTreasureChest.Destroyed",
    "Function UDKGame.DunDefTreasureChest.PostBeginPlay",
    "Function UDKGame.DunDefTreasureChest.SpawningIn.BeginState",
    "Function UDKGame.DunDefTreasureChest.SpawningIn.EndState",
    "Function UDKGame.DunDefTreasureChest.SpawningIn.Tick",
    "Function UDKGame.DunDefUIController.InputKey",
    "Function UDKGame.DunDefUIScene.OnInterceptedInputKey",
    "Function UDKGame.DunDefUIScene.OnLabelChange",
    "Function UDKGame.DunDefUIScene.PostInitialSceneUpdate",
    "Function UDKGame.DunDefUIScene.RenderGamepadKey",
    "Function UDKGame.DunDefUIScene.SceneActivated",
    "Function UDKGame.DunDefUIScene.SceneDeactivated",
    "Function UDKGame.DunDefViewportClient.GameSessionEnded",
    "Function UDKGame.DunDefViewportClient.PostRender",
    "Function UDKGame.DunDefViewportClient.Tick",
    "Function UDKGame.DunDefWaveBillboard.PostBeginPlay",
    "Function UDKGame.DunDefWeapon.WeaponEquipping.WeaponEquipped",
    "Function UDKGame.DunDefWeapon_MagicStaff.Active.BeginState",
    "Function UDKGame.DunDefWeapon_MagicStaff.Active.Tick",
    "Function UDKGame.DunDefWeapon_MagicStaff.AltFiring.BeginState",
    "Function UDKGame.DunDefWeapon_MagicStaff.AltFiring.EndState",
    "Function UDKGame.DunDefWeapon_MagicStaff.AltFiring.Tick",
    "Function UDKGame.DunDefWeapon_MagicStaff.PostBeginPlay",
    "Function UDKGame.DunDefWeapon_MagicStaff.WeaponFiring.BeginState",
    "Function UDKGame.DunDefWeapon_MagicStaff.WeaponFiring.EndState",
    "Function UDKGame.DunDefWeapon_MagicStaff.WeaponFiring.Tick",
    "Function UDKGame.DunDef_SeqAct_AppPurchased.Activated",
    "Function UDKGame.DunDef_SeqAct_CheckForLevelUps.Activated",
    "Function UDKGame.DunDef_SeqAct_GameplayMovie.Update",
    "Function UDKGame.DunDef_SeqAct_GetGameSettings.Activated",
    "Function UDKGame.DunDef_SeqAct_GetMissionSwitchValue.Activated",
    "Function UDKGame.DunDef_SeqAct_LockContent.Activated",
    "Function UDKGame.DunDef_SeqAct_OpenBuildUI.Activated",
    "Function UDKGame.DunDef_SeqAct_OpenBuildUI.Update",
    "Function UDKGame.DunDef_SeqAct_RefreshWaveEntries.Activated",
    "Function UDKGame.DunDef_SeqAct_RegisterEnemyWaveEntry.Activated",
    "Function UDKGame.DunDef_SeqAct_ResetEnemyWaveEntries.Activated",
    "Function UDKGame.DunDef_SeqAct_ResetEnemyWaveEntries.Update",
    "Function UDKGame.DunDef_SeqAct_RessurectPlayers.Activated",
    "Function UDKGame.DunDef_SeqAct_ScaleEnemyWave.Activated",
    "Function UDKGame.DunDef_SeqAct_ScaleFloatForPlayerCount.Activated",
    "Function UDKGame.DunDef_SeqAct_SetFinalWaveNumber.Activated",
    "Function UDKGame.DunDef_SeqAct_SetMixEnemies.Activated",
    "Function UDKGame.DunDef_SeqAct_SetNightmareUnlocked.Activated",
    "Function UDKGame.DunDef_SeqAct_SetWaveBillboardSpawnPoints.Activated",
    "Function UDKGame.DunDef_SeqAct_SetWaveNumber.Activated",
    "Function UDKGame.DunDef_SeqAct_ShowNotification.Activated",
    "Function UDKGame.DunDef_SeqAct_UnlockCostumes.Activated",
    "Function UDKGame.DunDef_SeqAct_UnlockMission.Activated",
    "Function UDKGame.DunDef_SeqCond_DifficultySwitch.Activated",
    "Function UDKGame.DunDef_SeqCond_GetMultiplayerMode.Activated",
    "Function UDKGame.DunDef_SeqCond_IntSwitch.Activated",
    "Function UDKGame.DunDef_SeqCond_IsAchievementUnlocked.Activated",
    "Function UDKGame.DunDef_SeqCond_IsInCombatPhase.Activated",
    "Function UDKGame.DunDef_SeqCond_IsInVolume.Activated",
    "Function UDKGame.DunDef_SeqCond_IsPureStrategy.Activated",
    "Function UDKGame.DunDef_SeqCond_ShowTutorial.Activated",
    "Function UDKGame.DunDef_UIAction_PlaySound.Activated",
    "Function UDKGame.HUDWidgetScene.SceneActivated",
    "Function UDKGame.HUDWidgetScene.SceneDeactivated",
    "Function UDKGame.HUDWidgetScene.UIPostRender",
    "Function UDKGame.Main.GetSeamlessTravelActorList",
    "Function UDKGame.Main.Heartbeat",
    "Function UDKGame.Main.InitGame",
    "Function UDKGame.Main.PostBeginPlay",
    "Function UDKGame.Main.PostSeamlessTravel",
    "Function UDKGame.Main.PreBeginPlay",
    "Function UDKGame.Main.RunAntiCheat",
    "Function UDKGame.Main.SetGameType",
    "Function UDKGame.Main.Tick",
    "Function UDKGame.PlayerShopManager.Tick",
    "Function UDKGame.UIButton_Scripted.ActiveStateChanged",
    "Function UDKGame.UIScriptWidget_Button.RenderGame",
    "Function UDKGame.UIScriptWidget_HeroPlayerListButton.RenderGame",
    "Function UDKGame.UIScript_ActionWheelHotkey.RenderGame",
    "Function UDKGame.UI_BuildTimer.SceneActivated",
    "Function UDKGame.UI_GameSetup.UIPostRender",
    "Function UDKGame.UI_GlobalHUD.SceneActivated",
    "Function UDKGame.UI_PauseMenu.OnReceivedInputKey",
    "Function UDKGame.UI_PauseMenu.PostInitialSceneUpdate",
    "Function UDKGame.UI_PauseMenu.SceneActivated",
    "Function UDKGame.UI_PauseMenu.SceneDeactivated",
    "Function UDKGame.DunDefViewportClient.OnInputAxis"};

tEndScene oScene = nullptr;
Hooking EndSceneHook;

Hooking ProcEventHook(nullptr, HookedPE, 5);

WNDPROC oWndProc;

void __fastcall HookedPE(Classes::UObject *pObject, void *edx,
                         Classes::UFunction *pFunction, void *pParms,
                         void *pResult) {
  std::string szName = pFunction->GetFullName().c_str();
  std::string objectName = pObject->Name.GetName();

#ifdef LOGGING
  bool print = true;
  for (auto s : filterarray) {
    if (szName == s) {
      print = false;
      break;
    }
  }
  if (print)
    std::cout << szName.c_str() << "\n";
#endif

  // block input when menu is shown
  if (config.bShowMenu) {
    if (strcmp(objectName.c_str(), "UIState_Pressed") == 0) {
      return;
    }
  }

  // anti cheat
  if (strcmp(szName.c_str(), "Function UDKGame.Main.RunAntiCheat") == 0) {
    return;
  }
  if (strcmp(szName.c_str(), "Function UDKGame.Main.HandleCheater") == 0) {
    return;
  }
  // hooked functions
  if (config.hookedFuncMap.find(szName) != config.hookedFuncMap.end()) {
    config.hookedFuncMap[szName](pObject, edx, pFunction, pParms, pResult);
  }
  // blocked functions
  if (config.blockedFuncMap.find(szName) == config.blockedFuncMap.end()) {
    if (config.blockedFuncMap[szName] == true)
      return;
  }

  // Call Original PE
  ((tProcessEvent)(ProcEventHook.HookAddr))(pObject, pFunction, pParms,
                                            pResult);
}

LRESULT __stdcall WndProc(const HWND hwnd, UINT uMsg, WPARAM wParam,
                          LPARAM lparam) {

  if (ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lparam))
    return TRUE;

  return CallWindowProc(oWndProc, hwnd, uMsg, wParam, lparam);
}

HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice) {

  static bool init = false;
  if (!init) {
    init = true;

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    ImGuiIO &io = ImGui::GetIO();
    ImGui_ImplWin32_Init(config.gameHWND);
    io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
    ImGui_ImplDX9_Init(pDevice);
  }
  ImGui_ImplDX9_NewFrame();
  ImGui_ImplWin32_NewFrame();
  ImGui::NewFrame();

#ifdef _DEBUG
  bool tmp = TRUE;
  ImGui::ShowDemoWindow(&tmp);
#endif // _DEBUG
  menu.ImGuiMenu();

  ImGui::EndFrame();
  ImGui::Render();
  ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());

  // Call the original function after your code
  return ((tEndScene)(EndSceneHook.HookAddr))(pDevice);
}

bool Menu::Init() {

  EndSceneHook = Hooking((void *)NULL, hkEndScene, 7);

  if (GetDevicePointer(d3d9Device, sizeof(d3d9Device))) {
    oScene = (tEndScene)d3d9Device[42];
  }

  EndSceneHook.UpdateHookAddr(oScene);
  EndSceneHook.HookFunction();

  oWndProc = (WNDPROC)SetWindowLongPtr(FindWindow(NULL, "Dungeon Defenders"),
                                       GWL_WNDPROC, (LONG_PTR)WndProc);

  // Hook PE
  miGame = GetModuleInfo(NULL);

  DWORD BaseProcessEventAddress = (FindPattern(
      (unsigned long)miGame.lpBaseOfDll, miGame.SizeOfImage,
      (unsigned char *)ProcessEvent_Pattern, (char *)ProcessEvent_Mask));

  DWORD ProcessEventAddress = BaseProcessEventAddress - 0xe8;
  // tProcessEvent ProcessEvent = (tProcessEvent)ProcessEventAddress;

  ProcEventHook.UpdateHookAddr((void *)ProcessEventAddress);
  ProcEventHook.HookFunction();

#ifdef LOGGING // 1
  AttachConsole();
#endif

  main.Init();
  // item.SetItem(config.GetADunDefPlayerController()->myHero->HeroEquipments[0]);
  return true;
}

bool Menu::Cleanup() {
  // UnhookDirectXDevice();

  EndSceneHook.UnHookFunction();

  (WNDPROC) SetWindowLongPtr(config.gameHWND, GWL_WNDPROC, (LONG_PTR)oWndProc);

  ProcEventHook.UnHookFunction();

#ifdef LOGGING //== 1
  DettachConsole();
#endif
  return true;
}

bool Menu::GetDevicePointer(void **pTable, size_t size) {
  if (!pTable)
    return false;

  IDirect3D9 *pD3D = Direct3DCreate9(D3D_SDK_VERSION);

  if (!pD3D)
    return false;

  IDirect3DDevice9 *pDummyDevice = NULL;

  // options to create dummy device
  D3DPRESENT_PARAMETERS d3dpp = {};
  d3dpp.Windowed = true;
  d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;

  d3dpp.hDeviceWindow = config.gameHWND;

  HRESULT dummyDeviceCreated = pD3D->CreateDevice(
      D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3dpp.hDeviceWindow,
      D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pDummyDevice);

  if (dummyDeviceCreated != S_OK) {
    // may fail in windowed fullscreen mode, trying again with windowed mode
    d3dpp.Windowed = !d3dpp.Windowed;

    dummyDeviceCreated = pD3D->CreateDevice(
        D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3dpp.hDeviceWindow,
        D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pDummyDevice);

    if (dummyDeviceCreated != S_OK) {
      pD3D->Release();
      return false;
    }
  }

  memcpy(pTable, *reinterpret_cast<void ***>(pDummyDevice), size);

  pDummyDevice->Release();
  pD3D->Release();
  return true;
}

void Menu::ImGuiMenu() {
  main.Thread();
  if (!config.bShowMenu)
    return;
  main.Render();
}

void Menu::ImGuiCheats() {}

void Menu::AttachConsole() {
  AllocConsole();
  freopen_s(&f, "CONOUT$", "w", stdout);
  std::cout << "[+] Successfully attached to process.\n";
}

void Menu::DettachConsole() {
  fclose(f);
  FreeConsole();
}
