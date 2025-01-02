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

// Function CDT5.DunDef_SeqAct_GetPlayerName.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_GetPlayerName::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT5.DunDef_SeqAct_GetPlayerName.Activated");

	UDunDef_SeqAct_GetPlayerName_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
