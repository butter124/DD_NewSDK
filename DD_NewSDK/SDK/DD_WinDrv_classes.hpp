#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WinDrv.WindowsClient
// 0x0180 (0x01D8 - 0x0058)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x13C];                                     // 0x0058(0x013C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                         // 0x0194(0x0004) (Config)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0198(0x002C) MISSED OFFSET
	int                                                AllowJoystickInput;                                       // 0x01C4(0x0004) (Config)
	int                                                UnlockMouse;                                              // 0x01C8(0x0004) (Config)
	unsigned char                                      UnknownData02[0xC];                                       // 0x01CC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0050 - 0x0050)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
