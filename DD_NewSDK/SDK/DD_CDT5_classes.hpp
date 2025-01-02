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

// Class CDT5.DunDef_SeqAct_GetPlayerName
// 0x0000 (0x00E8 - 0x00E8)
class UDunDef_SeqAct_GetPlayerName : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT5.DunDef_SeqAct_GetPlayerName");
		return ptr;
	}


	void Activated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
