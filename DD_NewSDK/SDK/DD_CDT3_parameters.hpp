#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires
struct ADunDefProjectile_Meteor_HeroScaling_SpawnFires_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function CDT3.Seq_Condition_CDTOptionsCheck.Activated
struct USeq_Condition_CDTOptionsCheck_Activated_Params
{
};

// Function CDT3.MultiZoneMinimap.ConvertCanvasCoordToWorldCoord
struct AMultiZoneMinimap_ConvertCanvasCoordToWorldCoord_Params
{
	struct FVector                                     mapCoord;                                                 // (Parm)
	float                                              additionalCoordScale;                                     // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT3.MultiZoneMinimap.ConvertWorldCoordToCenterMapCoord
struct AMultiZoneMinimap_ConvertWorldCoordToCenterMapCoord_Params
{
	struct FVector                                     worldCoord;                                               // (Parm)
	float                                              additionalCoordScale;                                     // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT3.MultiZoneMinimap.IsTouching
struct AMultiZoneMinimap_IsTouching_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm)
	struct FTexVolumeMap                               Vmap;                                                     // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT3.MultiZoneMinimap.SetMapIndex
struct AMultiZoneMinimap_SetMapIndex_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function CDT3.MultiZoneMinimap.CheckToDisplayMap
struct AMultiZoneMinimap_CheckToDisplayMap_Params
{
};

// Function CDT3.MultiZoneMinimap.Tick
struct AMultiZoneMinimap_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT3.MultiZoneMinimap.PostBeginPlay
struct AMultiZoneMinimap_PostBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
