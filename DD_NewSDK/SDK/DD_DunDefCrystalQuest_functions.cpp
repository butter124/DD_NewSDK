// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DunDefCrystalQuest.DunDef_SeqAct_TeleportPlayers.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_TeleportPlayers::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefCrystalQuest.DunDef_SeqAct_TeleportPlayers.Activated");

	UDunDef_SeqAct_TeleportPlayers_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
