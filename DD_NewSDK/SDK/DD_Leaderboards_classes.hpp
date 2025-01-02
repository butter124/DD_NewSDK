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

// Class Leaderboards.DunDefLeaderboardReadBase
// 0x0000 (0x00A4 - 0x00A4)
class UDunDefLeaderboardReadBase : public UOnlineStatsRead
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Leaderboards.DunDefLeaderboardReadBase");
		return ptr;
	}

};


// Class Leaderboards.DunDefLeaderboardWriteBase
// 0x0000 (0x00A4 - 0x00A4)
class UDunDefLeaderboardWriteBase : public UOnlineStatsWrite
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Leaderboards.DunDefLeaderboardWriteBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
