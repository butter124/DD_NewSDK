
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

void ScoreHook();
tEndScene oScene = nullptr;
Hooking EndSceneHook;

Hooking ProcEventHook(nullptr, HookedPE, 5);
Hooking ScoreHookObj(nullptr, ScoreHook, 8);

WNDPROC oWndProc;

void __fastcall HookedPE(Classes::UObject *pObject, void *edx,
                         Classes::UFunction *pFunction, void *pParms,
                         void *pResult) {
  std::string funcName = pFunction->GetFullName().c_str();
  std::string objectName = pObject->Name.GetName();

  // add to map if func have not been seen before
  auto vProcessEventFunctionFilterFind =
      config.vProcessEventFunctionFilter.find(funcName);
  if (vProcessEventFunctionFilterFind ==
      config.vProcessEventFunctionFilter.end()) {
    config.vProcessEventFunctionFilter[funcName] = false;
  }
  // add to map if obj have not been seen before
  auto vProcessEventObjectFind =
      config.vProcessEventObjectFilter.find(objectName);
  if (vProcessEventObjectFind == config.vProcessEventObjectFilter.end()) {
    config.vProcessEventObjectFilter[objectName] = false;
  }

  // logging process events
  if (config.bConsoleAttached && config.bLoggingProcessEvents) {
    if (!config.vProcessEventFunctionFilter[funcName]) {
      std::string s = std::format("{:<50} | {}", objectName, funcName);
      std::cout << s << "\n";
    }
  }

  // block input when menu is shown
  if (config.bShowMenu) {
    if (strcmp(objectName.c_str(), "UIState_Pressed") == 0) {
      config.PrintToConsole("Blocked input");
      return;
    }
  }

  // anti cheat
  if (strcmp(funcName.c_str(), "Function UDKGame.Main.RunAntiCheat") == 0) {
    config.PrintToConsole("Blocked Function UDKGame.Main.RunAntiCheat");
    return;
  }
  if (strcmp(funcName.c_str(), "Function UDKGame.Main.HandleCheater") == 0) {
    config.PrintToConsole("Blocked Function UDKGame.Main.HandleCheater");
    return;
  }
  // hooked functions
  if (config.hookedFuncMap.find(funcName) != config.hookedFuncMap.end()) {
    //  config.PrintToConsole();
    config.hookedFuncMap[funcName](pObject, edx, pFunction, pParms, pResult);
  }
  // hooked objects
  if (config.hookedObjects.find(objectName) != config.hookedObjects.end()) {
    // std::string s = std::format("Hooked Object {}", objectName);
    // config.LogToFile(s);
    //  config.PrintToConsole(std::format("Hooked {}", objectName));
    config.hookedObjects[objectName](pObject, edx, pFunction, pParms, pResult);
  }
  // blocked functions
  auto blockedMapFunc = config.blockedFuncMap.find(funcName);
  if (blockedMapFunc != config.blockedFuncMap.end() &&
      *blockedMapFunc->second) {
    return;
  }

  // std::string s = std::format("Hooked {:<50} | {}", funcName, objectName);
  // config.LogToFile(s);
  //  Call Original PE
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
DWORD PlayerCheckScoreHack = 0;
DWORD EaxCheck = 0;
// Score hack to change instance score to zero or x
bool isController = false;
bool ScoreHookFunc() {
  Classes::TArray<Classes::ULocalPlayer *> controllers =
      config.GetEngine()->GamePlayers;

  if (controllers.Num())
    for (int ScroreHookI = 0; ScroreHookI < controllers.Num(); ScroreHookI++) {
      if (PlayerCheckScoreHack ==
          (DWORD)(controllers.GetByIndex(ScroreHookI)->Actor))
        if (EaxCheck != (DWORD)(controllers.GetByIndex(ScroreHookI)->Actor)) {
          return true;
        }
    }
  return false;
}

void __declspec(naked) ScoreHook() {
  __asm {
    pushf
    pushad
    mov [PlayerCheckScoreHack], edi
    mov [EaxCheck], eax
    call ScoreHookFunc
    test al, al
    jnz skip_restore
    popad
    popf
    jmp ScoreHookObj.HookAddr

  skip_restore:
    popad
    mov eax, 0
    popf
    jmp ScoreHookObj.HookAddr
  }
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

  // Hook score

  DWORD ScoreHookAddrOffset =
      (FindPattern((unsigned long)miGame.lpBaseOfDll, miGame.SizeOfImage,
                   (unsigned char *)ScoreHook_Pattern, (char *)ScoreHook_Mask));

  ScoreHookObj.UpdateHookAddr((void *)(ScoreHookAddrOffset));
  ProcEventHook.UpdateHookAddr((void *)ProcessEventAddress);
  ProcEventHook.HookFunction();
  ScoreHookObj.HookFunction();

#ifdef LOGGING // 1
  AttachConsole();
#endif

  main.Init();

  return true;
}

bool Menu::Cleanup() {

  EndSceneHook.UnHookFunction();

  (WNDPROC) SetWindowLongPtr(config.gameHWND, GWL_WNDPROC, (LONG_PTR)oWndProc);

  ProcEventHook.UnHookFunction();
  ScoreHookObj.UnHookFunction();

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
