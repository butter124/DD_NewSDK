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

// ScriptStruct CDT7.HeroEquipment_Familiar_TowerDamageScaling.DelayedShot
// 0x0024
struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot
{
	float                                              Timer;                                                    // 0x0000(0x0004) (Edit)
	class ADunDefProjectile*                           Projectile;                                               // 0x0004(0x0004) (Edit)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit)
	struct FVector                                     Direction;                                                // 0x0014(0x000C) (Edit)
	float                                              Damage;                                                   // 0x0020(0x0004) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
