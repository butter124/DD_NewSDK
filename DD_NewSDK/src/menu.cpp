
// clang-format off
#include "pch.h"
#include "includes/ImGui/imgui.h"
#include "includes/ImGui/imgui_impl_dx9.h"
#include "includes/ImGui/imgui_impl_win32.h"

#include "includes/Hooking.h"
#include "includes/config.h"
#include "includes/menu.h"
// clang-format on

tEndScene oScene = nullptr;
Hooking EndSceneHook;

Hooking ProcEventHook(nullptr, HookedPE, 5);

WNDPROC oWndProc;

void __fastcall HookedPE(Classes::UObject *pObject, void *edx,
                         Classes::UFunction *pFunction, void *pParms,
                         void *pResult) {
  std::string szName = pFunction->GetFullName().c_str();
  std::string objectName = pObject->Name.GetName();

  // anti cheat
  if (strcmp(szName.c_str(), "Function UDKGame.Main.RunAntiCheat") == 0) {
    return;
  }
  if (strcmp(szName.c_str(), "Function UDKGame.Main.HandleCheater") == 0) {
    return;
  }

  if (config.funcMap.find(szName) != config.funcMap.end()) {
    config.funcMap[szName](pObject, edx, pFunction, pParms, pResult);
  }

  // Call Original PE
  ((tProcessEvent)(ProcEventHook.HookAddr))(pObject, pFunction, pParms,
                                            pResult);
}

LRESULT __stdcall WndProc(const HWND hwnd, UINT uMsg, WPARAM wParam,
                          LPARAM lparam) {

  if (config.bShowMenu)
    if (ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lparam))
      return TRUE;

  return CallWindowProc(oWndProc, hwnd, uMsg, wParam, lparam);
}

HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice) {
  // Your hook logic here

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

  bool tmp = TRUE;
  ImGui::ShowDemoWindow(&tmp);
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
  tProcessEvent ProcessEvent = (tProcessEvent)ProcessEventAddress;

  ProcEventHook.UpdateHookAddr((void *)ProcessEventAddress);
  ProcEventHook.HookFunction();

#ifdef LOGGING == 1
  AttachConsole();
#endif

  // item.SetItem(config.GetADunDefPlayerController()->myHero->HeroEquipments[0]);
  return true;
}

bool Menu::Cleanup() {
  // UnhookDirectXDevice();

  EndSceneHook.UnHookFunction();

  (WNDPROC) SetWindowLongPtr(config.gameHWND, GWL_WNDPROC, (LONG_PTR)oWndProc);

  ProcEventHook.UnHookFunction();

#ifdef LOGGING == 1
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
  main.Render();
  // item.Render();
}

void Menu::AttachConsole() {
  AllocConsole();
  freopen_s(&f, "CONOUT$", "w", stdout);
  std::cout << "[+] Successfully attached to process.\n";
}

void Menu::DettachConsole() {
  fclose(f);
  FreeConsole();
}
