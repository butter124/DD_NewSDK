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


// Class CDT3.Seq_Condition_CDTOptionsCheck
// 0x0001 (0x00D1 - 0x00D0)
class USeq_Condition_CDTOptionsCheck : public USequenceCondition
{
public:
	TEnumAsByte<ECDTOptions>                           Select;                                                   // 0x00D0(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT3.Seq_Condition_CDTOptionsCheck");
		return ptr;
	}


	void Activated();
};


// Class CDT3.MultiZoneMinimap
// 0x0014 (0x029C - 0x0288)
class AMultiZoneMinimap : public ADunDefMiniMap
{
public:
	TArray<struct FTexVolumeMap>                       MiniMapLocationArray;                                     // 0x0288(0x000C) (Edit, NeedCtorLink)
	int                                                ActiveTexIndex;                                           // 0x0294(0x0004)
	float                                              TimeSinceUpdate;                                          // 0x0298(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT3.MultiZoneMinimap");
		return ptr;
	}


	struct FVector ConvertCanvasCoordToWorldCoord(const struct FVector& mapCoord, float additionalCoordScale);
	struct FVector ConvertWorldCoordToCenterMapCoord(const struct FVector& worldCoord, float additionalCoordScale);
	unsigned long IsTouching(class APawn* PlayerPawn, const struct FTexVolumeMap& Vmap);
	void SetMapIndex(int Index);
	void CheckToDisplayMap();
	void Tick(float DeltaTime);
	void PostBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
