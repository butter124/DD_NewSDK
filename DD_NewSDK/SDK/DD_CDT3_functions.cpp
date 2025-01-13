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

// Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefProjectile_Meteor_HeroScaling::SpawnFires(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires");

	ADunDefProjectile_Meteor_HeroScaling_SpawnFires_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT3.Seq_Condition_CDTOptionsCheck.Activated
// (Defined, Event, Public)

void USeq_Condition_CDTOptionsCheck::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.Seq_Condition_CDTOptionsCheck.Activated");

	USeq_Condition_CDTOptionsCheck_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT3.MultiZoneMinimap.ConvertCanvasCoordToWorldCoord
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 mapCoord                       (Parm)
// float                          additionalCoordScale           (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AMultiZoneMinimap::ConvertCanvasCoordToWorldCoord(const struct FVector& mapCoord, float additionalCoordScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.MultiZoneMinimap.ConvertCanvasCoordToWorldCoord");

	AMultiZoneMinimap_ConvertCanvasCoordToWorldCoord_Params params;
	params.mapCoord = mapCoord;
	params.additionalCoordScale = additionalCoordScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT3.MultiZoneMinimap.ConvertWorldCoordToCenterMapCoord
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// struct FVector                 worldCoord                     (Parm)
// float                          additionalCoordScale           (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AMultiZoneMinimap::ConvertWorldCoordToCenterMapCoord(const struct FVector& worldCoord, float additionalCoordScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.MultiZoneMinimap.ConvertWorldCoordToCenterMapCoord");

	AMultiZoneMinimap_ConvertWorldCoordToCenterMapCoord_Params params;
	params.worldCoord = worldCoord;
	params.additionalCoordScale = additionalCoordScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT3.MultiZoneMinimap.IsTouching
// (Defined, Simulated, Public)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm)
// struct FTexVolumeMap           Vmap                           (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AMultiZoneMinimap::IsTouching(class APawn* PlayerPawn, const struct FTexVolumeMap& Vmap)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.MultiZoneMinimap.IsTouching");

	AMultiZoneMinimap_IsTouching_Params params;
	params.PlayerPawn = PlayerPawn;
	params.Vmap = Vmap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT3.MultiZoneMinimap.SetMapIndex
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// int                            Index                          (Parm)

void AMultiZoneMinimap::SetMapIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.MultiZoneMinimap.SetMapIndex");

	AMultiZoneMinimap_SetMapIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT3.MultiZoneMinimap.CheckToDisplayMap
// (Defined, Simulated, Public)

void AMultiZoneMinimap::CheckToDisplayMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.MultiZoneMinimap.CheckToDisplayMap");

	AMultiZoneMinimap_CheckToDisplayMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT3.MultiZoneMinimap.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AMultiZoneMinimap::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.MultiZoneMinimap.Tick");

	AMultiZoneMinimap_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT3.MultiZoneMinimap.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AMultiZoneMinimap::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.MultiZoneMinimap.PostBeginPlay");

	AMultiZoneMinimap_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
