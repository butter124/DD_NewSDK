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

// Class CDT3.DunDefProjectile_Meteor_HeroScaling
// 0x0004 (0x03AC - 0x03A8)
class ADunDefProjectile_Meteor_HeroScaling : public ADunDefProjectile_Meteor
{
public:
	float                                              FireDamageScale;                                          // 0x03A8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT3.DunDefProjectile_Meteor_HeroScaling");
		return ptr;
	}


	void SpawnFires(const struct FVector& HitLocation, const struct FVector& HitNormal);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
