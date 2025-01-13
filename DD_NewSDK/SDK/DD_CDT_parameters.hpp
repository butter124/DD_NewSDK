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

// Function CDT.DunDefHarbinger.FireAttackShootRight
struct ADunDefHarbinger_FireAttackShootRight_Params
{
};

// Function CDT.DunDefHarbinger.FireAttackShootLeft
struct ADunDefHarbinger_FireAttackShootLeft_Params
{
};

// Function CDT.DunDefHarbinger.FireAttackBegin
struct ADunDefHarbinger_FireAttackBegin_Params
{
};

// Function CDT.DunDefHarbinger.PostBeginPlay
struct ADunDefHarbinger_PostBeginPlay_Params
{
};

// Function CDT.DunDefHarbinger.GetProjectileSpawnTransformation
struct ADunDefHarbinger_GetProjectileSpawnTransformation_Params
{
	struct FName                                       socketToUse;                                              // (Parm)
	struct FVector                                     Position;                                                 // (Parm, OutParm)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm)
};

// Function CDT.DunDefHarbinger.IsCurrentlyPlayingAttackAnimation
struct ADunDefHarbinger_IsCurrentlyPlayingAttackAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT.DunDefHarbinger.PlayShootFireAnimation
struct ADunDefHarbinger_PlayShootFireAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT.DunDefHarbinger.IsCurrentlyPlayingChargeAnimation
struct ADunDefHarbinger_IsCurrentlyPlayingChargeAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT.DunDefHarbinger.PlayChargeFireAnimation
struct ADunDefHarbinger_PlayChargeFireAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT.DunDefHarbinger.PlayHurtAnimation
struct ADunDefHarbinger_PlayHurtAnimation_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function CDT.DunDefHarbinger.PlayJumpAnimation
struct ADunDefHarbinger_PlayJumpAnimation_Params
{
};

// Function CDT.DunDefHarbinger.ExecReplicatedFunction
struct ADunDefHarbinger_ExecReplicatedFunction_Params
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

// Function CDT.DunDefHarbingerController.PawnDied
struct ADunDefHarbingerController_PawnDied_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function CDT.DunDefHarbingerController.CheckPlayer
struct ADunDefHarbingerController_CheckPlayer_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
};

// Function CDT.DunDefHarbingerController.CheckForNearbyPlayers
struct ADunDefHarbingerController_CheckForNearbyPlayers_Params
{
};

// Function CDT.DunDefHarbingerController.ObstructionJump
struct ADunDefHarbingerController_ObstructionJump_Params
{
	struct FVector                                     jumpForwardDir;                                           // (Parm)
	struct FVector                                     jumpSideDir;                                              // (Parm)
};

// Function CDT.DunDefHarbingerController.NotifyTakeHitEX
struct ADunDefHarbingerController_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function CDT.DunDefHarbingerController.PostBeginPlay
struct ADunDefHarbingerController_PostBeginPlay_Params
{
};

// Function CDT.DunDefHarbingerController.FireProjectiles
struct ADunDefHarbingerController_FireProjectiles_Params
{
	struct FName                                       socketToUse;                                              // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
