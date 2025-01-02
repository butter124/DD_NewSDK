#include "pch.h"
#include "HelperFunctions.h"


bool HookAddr32(void* _Addr, void* _Func, int _Len) {
	if (_Len < 5) {
		return false;
	}
	DWORD Proc;
	VirtualProtect(_Addr, _Len, PAGE_EXECUTE_READWRITE, &Proc);
	memset(_Addr, 0x90, _Len);
	DWORD RelAddr = ((DWORD)_Func - (DWORD)_Addr) - 5;
	*(BYTE*)_Addr = 0xE9;

	*(DWORD*)((DWORD)_Addr + 1) = RelAddr;
	VirtualProtect(_Addr, _Len, Proc, &Proc);
	return true;
}
bool HookAddr64(void* _Addr, void* _Func, int _Len) {
	if (_Len < 5) {
		return false;
	}
	DWORD Proc;
	VirtualProtect(_Addr, _Len, PAGE_EXECUTE_READWRITE, &Proc);
	memset(_Addr, 0x90, _Len);
	DWORD64 RelAddr = ((DWORD64)_Func - (DWORD64)_Addr) - 5;
	*(BYTE*)_Addr = 0xE9;

	*(DWORD64*)((DWORD64)_Addr + 1) = RelAddr;
	VirtualProtect(_Addr, _Len, Proc, &Proc);
	return true;
}

void* TrampHook32(void* _Addr, void* _Func, int _Len)
{
	// Make sure the length is greater than 5
	if (_Len < 5) return 0;

	// Create the gateway (len + 5 for the overwritten bytes + the jmp)
	void* gateway = VirtualAlloc(0, _Len + 5, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

	//Write the stolen bytes into the gateway
	memcpy(gateway, _Addr, _Len);

	// Get the gateway to destination addy
	intptr_t  gatewayRelativeAddr = ((intptr_t)_Addr - (intptr_t)gateway) - 5;

	// Add the jmp opcode to the end of the gateway
	*(char*)((intptr_t)gateway + _Len) = 0xE9;

	// Add the address to the jmp
	*(intptr_t*)((intptr_t)gateway + _Len + 1) = gatewayRelativeAddr;

	// Perform the detour
	HookAddr32(_Addr, _Func, _Len);

	return (void*)gateway;
}
void* TrampHook64(void* _Addr, void* _Func, int _Len, void* _ogByte) {


	DWORD MinLen = 14;

	if (_Len < MinLen) return NULL;

	BYTE stub[] = {
		0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, // jmp qword ptr [$+6]
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // ptr
	};

	void* pTrampoline = VirtualAlloc(0, _Len + sizeof(stub), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

	DWORD dwOld = 0;
	VirtualProtect(_Addr, _Len, PAGE_EXECUTE_READWRITE, &dwOld);

	memcpy((void*)_ogByte, _Addr, _Len);

	DWORD64 retto = (DWORD64)_Addr + _Len;

	// trampoline
	memcpy(stub + 6, &retto, 8);
	memcpy((void*)((DWORD_PTR)pTrampoline), _Addr, _Len);
	memcpy((void*)((DWORD_PTR)pTrampoline + _Len), stub, sizeof(stub));

	// orig
	memcpy(stub + 6, &_Func, 8);
	memcpy(_Addr, stub, sizeof(stub));

	for (int i = MinLen; i < _Len; i++)
	{
		*(BYTE*)((DWORD_PTR)_Addr + i) = 0x90;
	}

	VirtualProtect(_Addr, _Len, dwOld, &dwOld);
	return (void*)((DWORD_PTR)pTrampoline);
}


void Patch(void*_Addr, void*_Bytes, int _Len) {

	DWORD Proc;
	VirtualProtect(_Addr, _Len, PAGE_EXECUTE_READWRITE, &Proc);
	memcpy(_Addr, _Bytes, _Len);
	VirtualProtect(_Addr, _Len, Proc, &Proc);
}


MODULEINFO GetModuleInfo(LPCTSTR lpModuleName)
{
	MODULEINFO miInfos = { NULL };

	HMODULE hmModule = GetModuleHandle(lpModuleName);

	if (hmModule)
	{
		GetModuleInformation(GetCurrentProcess(), hmModule, &miInfos, sizeof(MODULEINFO));
	}

	return miInfos;
}

//===========================================================================//
//==== FindPattern ==========================================================//
//===========================================================================//

DWORD FindPattern(DWORD startAddres, DWORD fileSize, PBYTE pattern, char mask[])
{
	DWORD pos = 0;
	int searchLen = strlen(mask) - 1;

	for (DWORD retAddress = startAddres; retAddress < startAddres + fileSize; retAddress++)
	{
		if (*(PBYTE)retAddress == pattern[pos] || mask[pos] == '?')
		{
			if (mask[pos + 1] == '\0')
			{
				return (retAddress - searchLen);
			}

			pos++;
		}
		else
		{
			pos = 0;
		}
	}

	return NULL;
}