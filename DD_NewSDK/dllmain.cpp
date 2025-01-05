// clang-format off
#include "pch.h"
#include "includes/config.h"
#include "includes/menu.h"
#include <memory>
// clang-format on

#define KEYBIND(key, var, bkey)                                                \
  if (GetAsyncKeyState(key) & 0x8000) {                                        \
    if (!bkey) {                                                               \
      var = !var;                                                              \
      bkey = true;                                                             \
    }                                                                          \
  } else {                                                                     \
    bkey = false;                                                              \
  }

Config config;
Menu menu;

DWORD WINAPI MainThread_Initialize(LPVOID param) {
  config = Config();
  menu = Menu();

  config.Init();
  menu.Init();

  while (!config.bEndMenu) {
    // KEYBIND(config.ToggleKey, config.bShowMenu, keyDownMenu);
    // KEYBIND(VK_F2, config.bEndMenu, keyDownEnd);
    //  KEYBIND(config.TeleportPlayerKey, config.bTeleportPlayer,
    //  keyDownTeleport); KEYBIND(config.NewTeleportKey, config.bTeleportPlayer,
    //  keyDownTeleport);
    Sleep(10);
  }

  config.Cleanup();
  menu.Cleanup();

  FreeLibraryAndExitThread(static_cast<HMODULE>(param), 0);
  return 1;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call,
                      LPVOID lpReserved) {
  switch (ul_reason_for_call) {
  case DLL_PROCESS_ATTACH: {
    // Disables notifications for DLL_THREAD_ATTACH and DLL_THREAD_DETACH events
    DisableThreadLibraryCalls(hModule);

    // Creates a new thread to run the MainThread_Initialize function
    HANDLE hThread =
        CreateThread(nullptr,               // Default security attributes
                     0,                     // Default stack size
                     MainThread_Initialize, // Thread start routine
                     hModule,               // Parameter passed to the thread
                     0,      // Default creation flags (start immediately)
                     nullptr // No need for thread ID
        );

    // If thread creation succeeds, close the thread handle
    if (hThread)
      CloseHandle(hThread);

    break;
  }
  case DLL_PROCESS_DETACH:
    break;
  }
  return TRUE;
}
