
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
    "Function Engine.Camera.UpdateCamera",
    "Function Engine.Canvas.Reset",
    "Function Engine.GameInfo.Timer",
    "Function Engine.GameReplicationInfo.Timer",
    "Function Engine.GameViewportClient.GetSubtitleRegion",
    "Function Engine.GameViewportClient.LayoutPlayers",
    "Function Engine.Interaction.PostRender",
    "Function Engine.Interaction.Tick",
    "Function Engine.LocalPlayer.PreHUDRender",
    "Function Engine.PlayerController.ClientHearSound",
    "Function Engine.PlayerController.GetFOVAngle",
    "Function Engine.PlayerController.HearSoundFinished",
    "Function Engine.PlayerController.PreRender",
    "Function Engine.SequenceOp.Activated",
    "Function Engine.SequenceOp.Deactivated",
    "Function Engine.UIScene.GetFocusHint",
    "Function Engine.UIScreenObject.ActivateKeyFrameCompletedDelegates",
    "Function Engine.UIScreenObject.UIAnimationEnded",
    "Function Engine.UIScreenObject.UIAnimationStarted",
    "Function Engine.UIState.ActivateState",
    "Function Engine.UIState.DeactivateState",
    "Function Engine.UIState.IsStateAllowed",
    "Function Engine.UIState.OnActivate",
    "Function Engine.UIState.OnDeactivate",
    "Function Engine.UIState_Focused.ActivateState",
    "Function UDKGame.DunDefBuffManager.Tick",
    "Function UDKGame.DunDefCagedPet.Tick",
    "Function UDKGame.DunDefDroppedEquipment.RotateSkelMesh",
    "Function UDKGame.DunDefForge.Tick",
    "Function UDKGame.DunDefGameReplicationInfo.Tick",
    "Function UDKGame.DunDefHUD.PostRender",
    "Function UDKGame.DunDefLocalPlayer.PostHUDRender",
    "Function UDKGame.DunDefNPC_BarKeep.Tick",
    "Function UDKGame.DunDefNativeUIScene.IsKeyboardOwned",
    "Function UDKGame.DunDefPlayer.Tick",
    "Function UDKGame.DunDefPlayerCamera.OverTheShoulder.Tick",
    "Function UDKGame.DunDefPlayerController.GetPlayerViewPoint",
    "Function UDKGame.DunDefPlayerController.PlayerWalking.PlayerTick",
    "Function UDKGame.DunDefPlayerReplicationInfo.Timer",
    "Function UDKGame.DunDefUIScene.RenderGamepadKey",
    "Function UDKGame.DunDefViewportClient.PostRender",
    "Function UDKGame.DunDefViewportClient.Tick",
    "Function UDKGame.DunDefWeapon_MagicStaff.Active.Tick",
    "Function UDKGame.DunDef_SeqAct_AppPurchased.Activated",
    "Function UDKGame.DunDef_SeqAct_LockContent.Activated",
    "Function UDKGame.DunDef_SeqAct_SetNightmareUnlocked.Activated",
    "Function UDKGame.DunDef_SeqAct_UnlockCostumes.Activated",
    "Function UDKGame.DunDef_SeqAct_UnlockMission.Activated",
    "Function UDKGame.DunDef_SeqCond_GetMultiplayerMode.Activated",
    "Function UDKGame.DunDef_SeqCond_IsAchievementUnlocked.Activated",
    "Function UDKGame.DunDef_SeqCond_IsInVolume.Activated",
    "Function UDKGame.HUDWidgetScene.UIPostRender",
    "Function UDKGame.Main.Tick",
    "Function UDKGame.PlayerShopManager.Tick",
    "Function UDKGame.UIScriptWidget_Button.RenderGame",
    "Function UDKGame.UIScript_ActionWheelHotkey.RenderGame",
    "Function UDKGame.UI_GameSetup.UIPostRender",
    "Function UDKGame.Main.RunAntiCheat",
    "Function UDKGame.UIScript_ActionWheelHotkey.RenderGame",
    "Function UDKGame.UI_GameSetup.UIPostRender",
    "Function Engine.Console.InputKey",
    "Function Engine.UIObject.AllowInputAlias",
    "Function UDKGame.DunDefUIController.InputKey",
    "Function UDKGame.DunDefUIScene.OnInterceptedInputKey",
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
  // block input when menu is shown
  if (config.bShowMenu) {
    if (strcmp(objectName.c_str(), "UIState_Pressed") == 0) {
      return;
    }
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
