#include "pch.h"
#include "includes/Hooking.h"


Hooking::Hooking()
{

}
Hooking::Hooking(void* _HookAddr, void* _NewFunc, int _Len)
{
	OrignalHookAddr = _HookAddr;
	HookAddr = _HookAddr;
	HkFunc = _NewFunc;
	Len = _Len;
}

bool Hooking::UpdateHookAddr(void*_Addr)
{
	OrignalHookAddr = _Addr;
	HookAddr = _Addr;
	return TRUE;
}


bool Hooking::MidFuncHook()
{
	ogBytes = new char[Len];
	memcpy(ogBytes, OrignalHookAddr, Len);

	HookAddr32(OrignalHookAddr, HkFunc, Len);
	return true;
}

bool Hooking::HookFunction()
{
	HookAddr = TrampHook32(OrignalHookAddr, HkFunc, Len);
	return true;
}
bool Hooking::UnHookFunction()
{
	Patch(OrignalHookAddr, HookAddr, Len);
	return true;
}

bool Hooking::UnHookMidFunction()
{
	delete ogBytes;
	Patch(OrignalHookAddr, HookAddr, Len);
	return true;
}