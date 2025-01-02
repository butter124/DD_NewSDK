#pragma once
#include "HelperFunctions.h"
#include <Windows.h>
class Hooking
{
public:
	void* OrignalHookAddr;
	void* HookAddr;
	void* HkFunc;
	char * ogBytes;
	int Len;
	Hooking();
	Hooking(void* _HookAddr,void* _NewFunc,int _Len);
	bool MidFuncHook();
	bool HookFunction();
	bool UnHookFunction();
	bool UpdateHookAddr(void*_Addr);
	bool UnHookMidFunction();
};

