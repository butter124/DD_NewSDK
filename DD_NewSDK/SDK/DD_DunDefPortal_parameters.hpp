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

// Function DunDefPortal.DunDefPortalNode.PostBeginPlay
struct ADunDefPortalNode_PostBeginPlay_Params
{
};

// Function DunDefPortal.DunDefPortalNode.Tick
struct ADunDefPortalNode_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefPortal.DunDefPortalNode.AllowSpawn
struct ADunDefPortalNode_AllowSpawn_Params
{
	class AActor*                                      theArchetype;                                             // (Parm)
	struct FVector                                     theLoc;                                                   // (Parm)
	struct FRotator                                    theRot;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefPortalNode.FadeOut
struct ADunDefPortalNode_FadeOut_Params
{
	float                                              theLightFadeOutTime;                                      // (OptionalParm, Parm)
};

// Function DunDefPortal.DunDefPortalNode.Touch
struct ADunDefPortalNode_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefPortal.DunDefPortalNode.ExecReplicatedFunction
struct ADunDefPortalNode_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefPortal.DunDefPortalNode.ReplicatedEvent
struct ADunDefPortalNode_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HitBlockingVolume
struct ADunDefWeapon_PortalGun_HitBlockingVolume_Params
{
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     End;                                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.IsInAnyPortalBlockingVolume
struct ADunDefWeapon_PortalGun_IsInAnyPortalBlockingVolume_Params
{
	struct FVector                                     aPoint;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.Tick
struct ADunDefWeapon_PortalGun_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetReloadingColors
struct ADunDefWeapon_PortalGun_GetReloadingColors_Params
{
	struct FLinearColor                                BarColor;                                                 // (Parm, OutParm)
	struct FLinearColor                                TextColor;                                                // (Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HasBothPortals
struct ADunDefWeapon_PortalGun_HasBothPortals_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ClearPortal
struct ADunDefWeapon_PortalGun_ClearPortal_Params
{
	int                                                portalIndex;                                              // (Parm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.Destroyed
struct ADunDefWeapon_PortalGun_Destroyed_Params
{
};

// Function DunDefPortal.DunDefWeapon_PortalGun.DetachWeapon
struct ADunDefWeapon_PortalGun_DetachWeapon_Params
{
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HolderDied
struct ADunDefWeapon_PortalGun_HolderDied_Params
{
};

// Function DunDefPortal.DunDefWeapon_PortalGun.CustomFire
struct ADunDefWeapon_PortalGun_CustomFire_Params
{
	int                                                theFireMode;                                              // (Parm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ShootProjectiles
struct ADunDefWeapon_PortalGun_ShootProjectiles_Params
{
	int                                                theFireMode;                                              // (OptionalParm, Parm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HasAnyAmmo
struct ADunDefWeapon_PortalGun_HasAnyAmmo_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.BeginFire
struct ADunDefWeapon_PortalGun_BeginFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetSiblingPortal
struct ADunDefWeapon_PortalGun_GetSiblingPortal_Params
{
	class ADunDefPortalNode*                           aPortal;                                                  // (Parm)
	class ADunDefPortalNode*                           aSibling;                                                 // (OptionalParm, Parm, OutParm)
	class UTextureRenderTarget2D*                      portalTextureTarget;                                      // (OptionalParm, Parm, OutParm)
	class ADunDefPortalNode*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PostBeginPlay
struct ADunDefWeapon_PortalGun_PostBeginPlay_Params
{
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PlayCancelAnimation
struct ADunDefWeapon_PortalGun_PlayCancelAnimation_Params
{
	unsigned long                                      bIsPrimary;                                               // (Parm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PlayedShootAnimation
struct ADunDefWeapon_PortalGun_PlayedShootAnimation_Params
{
	unsigned long                                      isBigShot;                                                // (OptionalParm, Parm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetTotalAmmo
struct ADunDefWeapon_PortalGun_GetTotalAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetMaxAmmo
struct ADunDefWeapon_PortalGun_GetMaxAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmo
struct ADunDefWeapon_PortalGun_GetAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmoPercent
struct ADunDefWeapon_PortalGun_GetAmmoPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.UsesAmmo
struct ADunDefWeapon_PortalGun_UsesAmmo_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ExecReplicatedFunction
struct ADunDefWeapon_PortalGun_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
