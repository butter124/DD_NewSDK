#pragma once
#include <Windows.h>
#include <Psapi.h>
bool HookAddr32(void* _Addr, void* _Func, int _Len);

void* TrampHook32(void* _Addr, void* _Func, int _Len);

void* TrampHook64(void* _Addr, void* _Func, int _Len, void* _ogByte);

void Patch(void*_Addr, void*_Bytes, int _Len);


MODULEINFO GetModuleInfo(LPCTSTR lpModuleName);

DWORD FindPattern(DWORD startAddres, DWORD fileSize, PBYTE pattern, char mask[]);
