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

// Function DunDefSkyCity.DunDefProjectile_Meteor.Destroyed
struct ADunDefProjectile_Meteor_Destroyed_Params
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.SpawnFires
struct ADunDefProjectile_Meteor_SpawnFires_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.Explode
struct ADunDefProjectile_Meteor_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateDecal
struct ADunDefProjectile_Meteor_UpdateDecal_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateShadow
struct ADunDefProjectile_Meteor_UpdateShadow_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.DoHoming
struct ADunDefProjectile_Meteor_DoHoming_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.Tick
struct ADunDefProjectile_Meteor_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.PostBeginPlay
struct ADunDefProjectile_Meteor_PostBeginPlay_Params
{
};

// Function DunDefSkyCity.DropOffPoint.GetIsBeingUsed
struct ADropOffPoint_GetIsBeingUsed_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DropOffPoint.SetBeingUsed
struct ADropOffPoint_SetBeingUsed_Params
{
	unsigned long                                      bNowBeingUsed;                                            // (Parm)
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.StopsProjectile
struct ADunDef_DamagingInterpActor_StopsProjectile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.GetDamageAmount
struct ADunDef_DamagingInterpActor_GetDamageAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.RanInto
struct ADunDef_DamagingInterpActor_RanInto_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.EncroachingOn
struct ADunDef_DamagingInterpActor_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.ClearDamageList
struct ADunDef_DamagingInterpActor_ClearDamageList_Params
{
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.SetDoDamage
struct ADunDef_DamagingInterpActor_SetDoDamage_Params
{
	unsigned long                                      bSetDamage;                                               // (Parm)
	unsigned long                                      bToggleCollision;                                         // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.ForceLineOfSight
struct ADunDef_OldOne_ForceLineOfSight_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetLightningTowerDamagePercent
struct ADunDef_OldOne_GetLightningTowerDamagePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.setIsWebbed
struct ADunDef_OldOne_setIsWebbed_Params
{
	unsigned long                                      isWebbed;                                                 // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.isWebbed
struct ADunDef_OldOne_isWebbed_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetChainIgnore
struct ADunDef_OldOne_GetChainIgnore_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetChainIgnore
struct ADunDef_OldOne_SetChainIgnore_Params
{
	unsigned long                                      ignore;                                                   // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.IsBeingChainedBy
struct ADunDef_OldOne_IsBeingChainedBy_Params
{
	class ADunDefTower_ChainLightning*                 Tower;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.RemoveFromChainingTowers
struct ADunDef_OldOne_RemoveFromChainingTowers_Params
{
	class ADunDefTower_ChainLightning*                 Tower;                                                    // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.AddToChainingTowers
struct ADunDef_OldOne_AddToChainingTowers_Params
{
	class ADunDefTower_ChainLightning*                 Tower;                                                    // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.AllowSuction
struct ADunDef_OldOne_AllowSuction_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.IsPlayingCustomAnim
struct ADunDef_OldOne_IsPlayingCustomAnim_Params
{
	struct FName                                       inAnim;                                                   // (Parm)
	float                                              TimeFromEndToConsiderFinished;                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetupDamageFlashing
struct ADunDef_OldOne_SetupDamageFlashing_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.UpdateDamageFlashing
struct ADunDef_OldOne_UpdateDamageFlashing_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.LocalTookDamage
struct ADunDef_OldOne_LocalTookDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	struct FVector                                     atPosition;                                               // (Parm)
	class UClass*                                      fromDamageType;                                           // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.NotifyHealthLevel
struct ADunDef_OldOne_NotifyHealthLevel_Params
{
	class ADunDef_OldOneCrystals*                      healthCrystal;                                            // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.HealPctOfMaxHealth
struct ADunDef_OldOne_HealPctOfMaxHealth_Params
{
	float                                              HealPct;                                                  // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	unsigned long                                      bShowFloatingNumbers;                                     // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetHealthPercent
struct ADunDef_OldOne_GetHealthPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetHealth
struct ADunDef_OldOne_GetHealth_Params
{
	unsigned long                                      bGetMax;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.ForceMoveActor
struct ADunDef_OldOne_ForceMoveActor_Params
{
	class AActor*                                      Mover;                                                    // (Parm)
	struct FVector                                     NewLoc;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetOverrideTargetComponent
struct ADunDef_OldOne_GetOverrideTargetComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function DunDefSkyCity.DunDef_OldOne.GetMass
struct ADunDef_OldOne_GetMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.AllowDarknessIgnorance
struct ADunDef_OldOne_AllowDarknessIgnorance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.ForceFriendlyFire
struct ADunDef_OldOne_ForceFriendlyFire_Params
{
	class AActor*                                      Target;                                                   // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetInterpolatedTargetingLocation
struct ADunDef_OldOne_GetInterpolatedTargetingLocation_Params
{
	class AActor*                                      RequestedBy;                                              // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetTargetingLocation
struct ADunDef_OldOne_GetTargetingLocation_Params
{
	class AActor*                                      RequestedBy;                                              // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.OnDestroy_RemoveFromTargetableList
struct ADunDef_OldOne_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.OnPostBeginPlay_AddToTargetableList
struct ADunDef_OldOne_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.UnregisterAttacker
struct ADunDef_OldOne_UnregisterAttacker_Params
{
	class ADunDefEnemyController*                      forController;                                            // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.RegisterAttacker
struct ADunDef_OldOne_RegisterAttacker_Params
{
	class ADunDefEnemyController*                      forController;                                            // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetAttackRangeOffset
struct ADunDef_OldOne_GetAttackRangeOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.IgnoreFriendlyFireDamage
struct ADunDef_OldOne_IgnoreFriendlyFireDamage_Params
{
	TScriptInterface<class UDunDefTargetableInterface> instigatorActor;                                          // (Parm)
	class AController*                                 OptionalController;                                       // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetTargetingTeam
struct ADunDef_OldOne_GetTargetingTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetTowerTargetingDesirability
struct ADunDef_OldOne_GetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.GetPlayerTargetingDesirability
struct ADunDef_OldOne_GetPlayerTargetingDesirability_Params
{
	class ADunDefPlayerController*                     forController;                                            // (Parm)
	class ADunDefPlayer*                               ForPlayer;                                                // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceEyeMultiBeamDmg
struct ADunDef_OldOne_TraceEyeMultiBeamDmg_Params
{
	int                                                beamIdx;                                                  // (Parm)
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetMultiEyeBeamLocation
struct ADunDef_OldOne_SetMultiEyeBeamLocation_Params
{
	int                                                beamIdx;                                                  // (Parm)
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	struct FVector                                     BeamNormal;                                               // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceMultiEyeBeam
struct ADunDef_OldOne_TraceMultiEyeBeam_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnFire
struct ADunDef_OldOne_SpawnFire_Params
{
	class ADunDefGasCloud*                             fireTemplate;                                             // (Parm)
	struct FVector                                     SpawnLoc;                                                 // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceRightEyeDmg
struct ADunDef_OldOne_TraceRightEyeDmg_Params
{
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetRightEyeBeamLocation
struct ADunDef_OldOne_SetRightEyeBeamLocation_Params
{
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	struct FVector                                     BeamNormal;                                               // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEyeDmg
struct ADunDef_OldOne_TraceLeftEyeDmg_Params
{
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetLeftEyeBeamLocation
struct ADunDef_OldOne_SetLeftEyeBeamLocation_Params
{
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	struct FVector                                     BeamNormal;                                               // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceRightEye
struct ADunDef_OldOne_TraceRightEye_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEye
struct ADunDef_OldOne_TraceLeftEye_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyMultiBeamDmg
struct ADunDef_OldOne_TraceBellyMultiBeamDmg_Params
{
	int                                                beamIdx;                                                  // (Parm)
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeamDmg
struct ADunDef_OldOne_TraceBellyBeamDmg_Params
{
	int                                                Idx;                                                      // (Parm)
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetBellyBeamLocation
struct ADunDef_OldOne_SetBellyBeamLocation_Params
{
	int                                                Idx;                                                      // (Parm)
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	struct FVector                                     BeamNormal;                                               // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetMultiBellyBeamLocation
struct ADunDef_OldOne_SetMultiBellyBeamLocation_Params
{
	int                                                beamIdx;                                                  // (Parm)
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	struct FVector                                     BeamNormal;                                               // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceMultiBellyBeam
struct ADunDef_OldOne_TraceMultiBellyBeam_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetRandomLazerPoint
struct ADunDef_OldOne_SetRandomLazerPoint_Params
{
	int                                                lazerIdx;                                                 // (Parm)
	struct FVector                                     lazerPoint;                                               // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeam
struct ADunDef_OldOne_TraceBellyBeam_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetNormalBellyTarget
struct ADunDef_OldOne_SetNormalBellyTarget_Params
{
	int                                                Idx;                                                      // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.InitNormalBeams
struct ADunDef_OldOne_InitNormalBeams_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ChooseTarget
struct ADunDef_OldOne_ChooseTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.StartLazers
struct ADunDef_OldOne_StartLazers_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StopFlameBreath
struct ADunDef_OldOne_StopFlameBreath_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartFlameSweep
struct ADunDef_OldOne_StartFlameSweep_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartFlameburst
struct ADunDef_OldOne_StartFlameburst_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateChestCrystal
struct ADunDef_OldOne_ActivateChestCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateRightHandCrystal
struct ADunDef_OldOne_ActivateRightHandCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateLeftHandCrystal
struct ADunDef_OldOne_ActivateLeftHandCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateChestCrystal
struct ADunDef_OldOne_DeactivateChestCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateRightHandCrystal
struct ADunDef_OldOne_DeactivateRightHandCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateLeftHandCrystal
struct ADunDef_OldOne_DeactivateLeftHandCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnDoubleSlamEmitter
struct ADunDef_OldOne_SpawnDoubleSlamEmitter_Params
{
	struct FVector                                     SpawnLoc;                                                 // (Parm)
	class ADunDefEmitterShockwave*                     EmitterTemplate;                                          // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnSingleSlamEmitter
struct ADunDef_OldOne_SpawnSingleSlamEmitter_Params
{
	struct FVector                                     SpawnLoc;                                                 // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleStomp
struct ADunDef_OldOne_DoubleStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.RightFootStomp
struct ADunDef_OldOne_RightFootStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.LeftFootStomp
struct ADunDef_OldOne_LeftFootStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.UpdateDifficultyValues
struct ADunDef_OldOne_UpdateDifficultyValues_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeActivateCollisionDamage
struct ADunDef_OldOne_DeActivateCollisionDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateCollisionDamage
struct ADunDef_OldOne_ActivateCollisionDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetNumCrystalsThisPhase
struct ADunDef_OldOne_GetNumCrystalsThisPhase_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.DoPhaseShift
struct ADunDef_OldOne_DoPhaseShift_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ArePlayersWithinRange
struct ADunDef_OldOne_ArePlayersWithinRange_Params
{
	struct FVector                                     LocCheck;                                                 // (Parm)
	float                                              distCheck;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.DoDeath
struct ADunDef_OldOne_DoDeath_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckCrystalDeaths
struct ADunDef_OldOne_CheckCrystalDeaths_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.NotifyCrystalDeath
struct ADunDef_OldOne_NotifyCrystalDeath_Params
{
	class ADunDef_OldOneCrystals*                      diedCrystal;                                              // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleFootStomp
struct ADunDef_OldOne_DoubleFootStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.LeftHandProjectile
struct ADunDef_OldOne_LeftHandProjectile_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.RightHandProjectile
struct ADunDef_OldOne_RightHandProjectile_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PickSmashAttack
struct ADunDef_OldOne_PickSmashAttack_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.DoProjectileAttack
struct ADunDef_OldOne_DoProjectileAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckProjectileAttack
struct ADunDef_OldOne_CheckProjectileAttack_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForTaunt
struct ADunDef_OldOne_CheckForTaunt_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForBeamAttack
struct ADunDef_OldOne_CheckForBeamAttack_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.DoTaunt
struct ADunDef_OldOne_DoTaunt_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetTauntAnim
struct ADunDef_OldOne_GetTauntAnim_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.PlayHurtAnim
struct ADunDef_OldOne_PlayHurtAnim_Params
{
	struct FName                                       theHurtAnim;                                              // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.FinishTaunt
struct ADunDef_OldOne_FinishTaunt_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnMeteor
struct ADunDef_OldOne_SpawnMeteor_Params
{
	class ADunDefCustomNode*                           theNode;                                                  // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.StartMeteorAttack
struct ADunDef_OldOne_StartMeteorAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForMeteorAttack
struct ADunDef_OldOne_CheckForMeteorAttack_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForFlame
struct ADunDef_OldOne_CheckForFlame_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForLazer
struct ADunDef_OldOne_CheckForLazer_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForSweep
struct ADunDef_OldOne_CheckForSweep_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.EndAttack
struct ADunDef_OldOne_EndAttack_Params
{
	unsigned long                                      bDontEndState;                                            // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.ShutDownLazers
struct ADunDef_OldOne_ShutDownLazers_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetInitalEyeLazerTarget
struct ADunDef_OldOne_SetInitalEyeLazerTarget_Params
{
	class AActor*                                      newLazerTarget;                                           // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.StartBellyLazer
struct ADunDef_OldOne_StartBellyLazer_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartEyeLazer
struct ADunDef_OldOne_StartEyeLazer_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.BeginFlameSweepAnim
struct ADunDef_OldOne_BeginFlameSweepAnim_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoFlameSweep
struct ADunDef_OldOne_DoFlameSweep_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleHandStomp
struct ADunDef_OldOne_DoubleHandStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.LeftHandStomp
struct ADunDef_OldOne_LeftHandStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.RightHandStomp
struct ADunDef_OldOne_RightHandStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetAttackDelay
struct ADunDef_OldOne_GetAttackDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.SetPhase
struct ADunDef_OldOne_SetPhase_Params
{
	TEnumAsByte<EPhase>                                newPhase;                                                 // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.OnToggle
struct ADunDef_OldOne_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOne.StartAttack
struct ADunDef_OldOne_StartAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PickAttack
struct ADunDef_OldOne_PickAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StopCustomAnim
struct ADunDef_OldOne_StopCustomAnim_Params
{
	float                                              blendTimeOut;                                             // (OptionalParm, Parm)
	struct FName                                       CustomAnimationToStop;                                    // (OptionalParm, Parm)
	unsigned long                                      bReplicate;                                               // (OptionalParm, Parm)
	unsigned long                                      bForceReplication;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.PlayCustomAnim
struct ADunDef_OldOne_PlayCustomAnim_Params
{
	struct FName                                       inAnim;                                                   // (Parm)
	float                                              blendTimeIn;                                              // (OptionalParm, Parm)
	unsigned long                                      Looping;                                                  // (OptionalParm, Parm)
	float                                              Speed;                                                    // (OptionalParm, Parm)
	float                                              BlendOutTime;                                             // (OptionalParm, Parm)
	unsigned long                                      bOverride;                                                // (OptionalParm, Parm)
	unsigned long                                      Replicate;                                                // (OptionalParm, Parm)
	unsigned long                                      bUninterruptable;                                         // (OptionalParm, Parm)
	unsigned long                                      bReplicateToOwners;                                       // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOne.InitCrystals
struct ADunDef_OldOne_InitCrystals_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ClearCrystalsRefs
struct ADunDef_OldOne_ClearCrystalsRefs_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PopulateCustomNode
struct ADunDef_OldOne_PopulateCustomNode_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PostBeginPlay
struct ADunDef_OldOne_PostBeginPlay_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ExecReplicatedFunction
struct ADunDef_OldOne_ExecReplicatedFunction_Params
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

// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetPlayerTargetingDesirability
struct ADunDef_OldOneCrystals_DTGetPlayerTargetingDesirability_Params
{
	class ADunDefPlayerController*                     forController;                                            // (Parm)
	class ADunDefPlayer*                               ForPlayer;                                                // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetTowerTargetingDesirability
struct ADunDef_OldOneCrystals_DTGetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.IgnoreFriendlyFireDamage
struct ADunDef_OldOneCrystals_IgnoreFriendlyFireDamage_Params
{
	TScriptInterface<class UDunDefTargetableInterface> instigatorActor;                                          // (Parm)
	class AController*                                 OptionalController;                                       // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DrawMyHUD
struct ADunDef_OldOneCrystals_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayHitEffect
struct ADunDef_OldOneCrystals_PlayHitEffect_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDamageFlashing
struct ADunDef_OldOneCrystals_UpdateDamageFlashing_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.LocalTookDamage
struct ADunDef_OldOneCrystals_LocalTookDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	struct FVector                                     atPosition;                                               // (Parm)
	class UClass*                                      fromDamageType;                                           // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.SubtractHealth
struct ADunDef_OldOneCrystals_SubtractHealth_Params
{
	int                                                DamageAmount;                                             // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.SetInPlay
struct ADunDef_OldOneCrystals_SetInPlay_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.RepairCrystal
struct ADunDef_OldOneCrystals_RepairCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.StopsProjectile
struct ADunDef_OldOneCrystals_StopsProjectile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateHealthColor
struct ADunDef_OldOneCrystals_UpdateHealthColor_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.NotifyHealthChange
struct ADunDef_OldOneCrystals_NotifyHealthChange_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateActivate
struct ADunDef_OldOneCrystals_UpdateActivate_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Deactivate
struct ADunDef_OldOneCrystals_Deactivate_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Activate
struct ADunDef_OldOneCrystals_Activate_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.BaseChange
struct ADunDef_OldOneCrystals_BaseChange_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.ShutDownCrystal
struct ADunDef_OldOneCrystals_ShutDownCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDissolve
struct ADunDef_OldOneCrystals_UpdateDissolve_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DissolveCrystal
struct ADunDef_OldOneCrystals_DissolveCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayDeath
struct ADunDef_OldOneCrystals_PlayDeath_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Died
struct ADunDef_OldOneCrystals_Died_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.InitCrystal
struct ADunDef_OldOneCrystals_InitCrystal_Params
{
	class ADunDef_OldOne*                              owningOldOne;                                             // (Parm)
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.ReplicatedEvent
struct ADunDef_OldOneCrystals_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSkyCity.DunDefOldOneBreath.HurtRadius
struct ADunDefOldOneBreath_HurtRadius_Params
{
	float                                              BaseDamage;                                               // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HurtOrigin;                                               // (Parm)
	class AActor*                                      IgnoredActor;                                             // (OptionalParm, Parm)
	class AController*                                 InstigatedByController;                                   // (OptionalParm, Parm)
	unsigned long                                      bDoFullDamage;                                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefEmitterShockwave.RingHurtRadius
struct ADunDefEmitterShockwave_RingHurtRadius_Params
{
	float                                              BaseDamage;                                               // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HurtOrigin;                                               // (Parm)
	class AActor*                                      IgnoredActor;                                             // (OptionalParm, Parm)
	class AController*                                 InstigatedByController;                                   // (OptionalParm, Parm)
	unsigned long                                      bDoFullDamage;                                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefEmitterShockwave.Tick
struct ADunDefEmitterShockwave_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDefEmitterShockwave.AllowSpawn
struct ADunDefEmitterShockwave_AllowSpawn_Params
{
	class AActor*                                      theArchetype;                                             // (Parm)
	struct FVector                                     theLoc;                                                   // (Parm)
	struct FRotator                                    theRot;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefEmitterShockwave.HurtRadius
struct ADunDefEmitterShockwave_HurtRadius_Params
{
	float                                              BaseDamage;                                               // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HurtOrigin;                                               // (Parm)
	class AActor*                                      IgnoredActor;                                             // (OptionalParm, Parm)
	class AController*                                 InstigatedByController;                                   // (OptionalParm, Parm)
	unsigned long                                      bDoFullDamage;                                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefEmitterShockwave.DoDamage
struct ADunDefEmitterShockwave_DoDamage_Params
{
};

// Function DunDefSkyCity.DunDefEmitterShockwave.PostBeginPlay
struct ADunDefEmitterShockwave_PostBeginPlay_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.TakeDamage
struct ADunDefGoblinCopter_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetTargetingLocation
struct ADunDefGoblinCopter_GetTargetingLocation_Params
{
	class AActor*                                      RequestedBy;                                              // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.SpawnFlare
struct ADunDefGoblinCopter_SpawnFlare_Params
{
	struct FVector                                     flareLoc;                                                 // (Parm)
	struct FRotator                                    flareRot;                                                 // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetFlareSpawnLocAndRot
struct ADunDefGoblinCopter_GetFlareSpawnLocAndRot_Params
{
	struct FVector                                     flareLoc;                                                 // (Parm, OutParm)
	struct FRotator                                    flareRot;                                                 // (Parm, OutParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.CheckGCopterProximity
struct ADunDefGoblinCopter_CheckGCopterProximity_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyValues
struct ADunDefGoblinCopter_UpdateDifficultyValues_Params
{
	unsigned long                                      UpdateMaterial;                                           // (OptionalParm, Parm)
	unsigned long                                      onlyDynamicValues;                                        // (OptionalParm, Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.DrawMiniMapIcon
struct ADunDefGoblinCopter_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.PauseAnimationAfterDeath
struct ADunDefGoblinCopter_PauseAnimationAfterDeath_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDying
struct ADunDefGoblinCopter_PlayDying_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLoc;                                                   // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.Died
struct ADunDefGoblinCopter_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoDoubleShoot
struct ADunDefGoblinCopter_DoDoubleShoot_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoRightShoot
struct ADunDefGoblinCopter_DoRightShoot_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoLeftShoot
struct ADunDefGoblinCopter_DoLeftShoot_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDoubleShootAnim
struct ADunDefGoblinCopter_PlayDoubleShootAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayRightShootAnim
struct ADunDefGoblinCopter_PlayRightShootAnim_Params
{
	float                                              shootPlayRate;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayLeftShootAnim
struct ADunDefGoblinCopter_PlayLeftShootAnim_Params
{
	float                                              shootPlayRate;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.ResetHeldPawnValues
struct ADunDefGoblinCopter_ResetHeldPawnValues_Params
{
	class ADunDefEnemy*                                thePawn;                                                  // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.DropPawn
struct ADunDefGoblinCopter_DropPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDropOffAnim
struct ADunDefGoblinCopter_PlayDropOffAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.SetMovementPhysics
struct ADunDefGoblinCopter_SetMovementPhysics_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.CanBeBaseForPawn
struct ADunDefGoblinCopter_CanBeBaseForPawn_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.InitNewHeldPawn
struct ADunDefGoblinCopter_InitNewHeldPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.SetUpHoldingPawn
struct ADunDefGoblinCopter_SetUpHoldingPawn_Params
{
	class ADunDefEnemy*                                newHeldPawn;                                              // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.SpawnHoldingPawn
struct ADunDefGoblinCopter_SpawnHoldingPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetHeldPawnExtraDifficultyOffset
struct ADunDefGoblinCopter_GetHeldPawnExtraDifficultyOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.Tick
struct ADunDefGoblinCopter_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.TurnOnVFX
struct ADunDefGoblinCopter_TurnOnVFX_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyMaterial
struct ADunDefGoblinCopter_UpdateDifficultyMaterial_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopter.PostBeginPlay
struct ADunDefGoblinCopter_PostBeginPlay_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.ExecReplicatedFunction
struct ADunDefGoblinCopter_ExecReplicatedFunction_Params
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

// Function DunDefSkyCity.DunDefGoblinCopter.ReplicatedEvent
struct ADunDefGoblinCopter_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.SpawnRocket
struct ADunDefGoblinCopterController_SpawnRocket_Params
{
	struct FVector                                     SpawnLoc;                                                 // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.PlayMissileShootAnim
struct ADunDefGoblinCopterController_PlayMissileShootAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinDropRange
struct ADunDefGoblinCopterController_IsWithinDropRange_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDropOffLoS
struct ADunDefGoblinCopterController_CheckDropOffLoS_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.ShootFlare
struct ADunDefGoblinCopterController_ShootFlare_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckForDropOffRange
struct ADunDefGoblinCopterController_CheckForDropOffRange_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckAttackSight
struct ADunDefGoblinCopterController_CheckAttackSight_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinAttackRange
struct ADunDefGoblinCopterController_IsWithinAttackRange_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	float                                              AttackRangeOffset;                                        // (OptionalParm, Parm)
	unsigned long                                      bCheckDeltaZ;                                             // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.DoAttack
struct ADunDefGoblinCopterController_DoAttack_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.FindDropOffPoint
struct ADunDefGoblinCopterController_FindDropOffPoint_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GetTargetMoveToPoint
struct ADunDefGoblinCopterController_GetTargetMoveToPoint_Params
{
	class AActor*                                      moveToActor;                                              // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GetZDifference
struct ADunDefGoblinCopterController_GetZDifference_Params
{
	class AActor*                                      zActor;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDirectReachability
struct ADunDefGoblinCopterController_CheckDirectReachability_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckIndirectReachability
struct ADunDefGoblinCopterController_CheckIndirectReachability_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GeneratePathToActor
struct ADunDefGoblinCopterController_GeneratePathToActor_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	unsigned long                                      bAllowPartialPath;                                        // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.NavActorReachable
struct ADunDefGoblinCopterController_NavActorReachable_Params
{
	class AActor*                                      A;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.FindNearestNavPointTo
struct ADunDefGoblinCopterController_FindNearestNavPointTo_Params
{
	class AActor*                                      A;                                                        // (Parm)
	unsigned long                                      bCheckVisible;                                            // (OptionalParm, Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.SetMyPawn
struct ADunDefGoblinCopterController_SetMyPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.Possess
struct ADunDefGoblinCopterController_Possess_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
	unsigned long                                      bVehicleTransition;                                       // (Parm)
};

// Function DunDefSkyCity.DunDefGoblinCopterController.Destroyed
struct ADunDefGoblinCopterController_Destroyed_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.PostBeginPlay
struct ADunDefGoblinCopterController_PostBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
