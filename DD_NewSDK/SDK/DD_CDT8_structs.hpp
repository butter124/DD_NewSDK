#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CDT8.DunDefEmitterRadialForce.ActorTypeDamageMultiplier
// 0x0008
struct ADunDefEmitterRadialForce_FActorTypeDamageMultiplier
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0004) (Edit)
	float                                              DamageMultiplier;                                         // 0x0004(0x0004) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
