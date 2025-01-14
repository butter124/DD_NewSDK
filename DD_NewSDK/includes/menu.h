#pragma once
#include <d3d9.h>
// #define LOGGING 1
// #define IMGUIDEMO

#include "SDK.hpp"
#include "includes/Hooking.h"
#include "includes/menu_main.h"
typedef HRESULT(APIENTRY *tEndScene)(LPDIRECT3DDEVICE9 pDevice);

extern tEndScene oScene;
HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice);

LRESULT __stdcall WndProc(const HWND hwnd, UINT uMsg, WPARAM wParam,
                          LPARAM lparam);
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg,
                                              WPARAM wPAram, LPARAM lParam);
extern Hooking EndSceneHook;
extern WNDPROC oWndProc;

// ue3 procevent hookProcessEvent_Pattern
#define ProcessEvent_Pattern                                                   \
  "\x74\x00\x83\xC0\x07\x83\xE0\xF8\xE8\x00\x00\x00\x00\x8B\xC4"
#define ProcessEvent_Mask "x?xxxxxxx????xx"
typedef void(__thiscall *tProcessEvent)(Classes::UObject *,
                                        Classes::UFunction *, void *, void *);
void __fastcall HookedPE(Classes::UObject *pObject, void *edx,
                         Classes::UFunction *pFunction, void *pParms,
                         void *pResult);

extern Hooking ProcEventHook;

class Menu {
private:
  LPDIRECT3DDEVICE9 d3Device;
  void *d3d9Device[119];

  MODULEINFO miGame;

public:
  bool Init();
  bool Cleanup();

  bool GetDevicePointer(void **pTable, size_t size);

  void ImGuiMenu();
  void ImGuiCheats();

  void AttachConsole();
  void DettachConsole();

  MenuMain main;
};
extern Menu menu;
