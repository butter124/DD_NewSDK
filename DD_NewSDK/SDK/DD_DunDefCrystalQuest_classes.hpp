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

// Class DunDefCrystalQuest.DunDef_SeqAct_TeleportPlayers
// 0x000C (0x00F4 - 0x00E8)
class UDunDef_SeqAct_TeleportPlayers : public USequenceAction
{
public:
	TArray<class AActor*>                              TeleportToPoints;                                         // 0x00E8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefCrystalQuest.DunDef_SeqAct_TeleportPlayers");
		return ptr;
	}


	void Activated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
