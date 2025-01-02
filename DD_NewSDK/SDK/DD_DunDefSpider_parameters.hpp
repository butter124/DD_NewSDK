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

// Function DunDefSpider.DunDefWebProjectile.GetBoostedTargets
struct ADunDefWebProjectile_GetBoostedTargets_Params
{
	TArray<class APawn*>                               boostedTargets;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefSpider.DunDefWebProjectile.NotifyOfBoostedRemoval
struct ADunDefWebProjectile_NotifyOfBoostedRemoval_Params
{
	class APawn*                                       removedBoostee;                                           // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.GetPawnBoostAmount
struct ADunDefWebProjectile_GetPawnBoostAmount_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefWebProjectile.HasPawnBoostingType
struct ADunDefWebProjectile_HasPawnBoostingType_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefWebProjectile.Destroyed
struct ADunDefWebProjectile_Destroyed_Params
{
};

// Function DunDefSpider.DunDefWebProjectile.RemoveWebEffect
struct ADunDefWebProjectile_RemoveWebEffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.AddWebEffect
struct ADunDefWebProjectile_AddWebEffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.CanAddWebAffect
struct ADunDefWebProjectile_CanAddWebAffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefWebProjectile.EndRadiusDamage
struct ADunDefWebProjectile_EndRadiusDamage_Params
{
};

// Function DunDefSpider.DunDefWebProjectile.AffectVictim
struct ADunDefWebProjectile_AffectVictim_Params
{
	class AActor*                                      Victim;                                                   // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.StartRadiusDamage
struct ADunDefWebProjectile_StartRadiusDamage_Params
{
};

// Function DunDefSpider.DunDefWebProjectile.SetHomingTarget
struct ADunDefWebProjectile_SetHomingTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
	struct FVector                                     HomingLocation;                                           // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefWebProjectile.GetTowerBoostAmount
struct ADunDefWebProjectile_GetTowerBoostAmount_Params
{
	TEnumAsByte<ETowerBoostType>                       checkBoostType;                                           // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefWebProjectile.HasTowerBoostingType
struct ADunDefWebProjectile_HasTowerBoostingType_Params
{
	TEnumAsByte<ETowerBoostType>                       checkType;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefWebProjectile.GetTowerBoostingTarget
struct ADunDefWebProjectile_GetTowerBoostingTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefWebProjectile.EndAttachment
struct ADunDefWebProjectile_EndAttachment_Params
{
	bool                                               bClearList;                                               // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.SetScaleTime
struct ADunDefWebProjectile_SetScaleTime_Params
{
	bool                                               bDoScaleUp;                                               // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefWebProjectile.AddNewAffected
struct ADunDefWebProjectile_AddNewAffected_Params
{
	class AActor*                                      newAffected;                                              // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.Expire
struct ADunDefWebProjectile_Expire_Params
{
};

// Function DunDefSpider.DunDefWebProjectile.Explode
struct ADunDefWebProjectile_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.UpdateAttachStatus
struct ADunDefWebProjectile_UpdateAttachStatus_Params
{
	class AActor*                                      updateActor;                                              // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.Landed
struct ADunDefWebProjectile_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.DoHoming
struct ADunDefWebProjectile_DoHoming_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.Tick
struct ADunDefWebProjectile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpider.DunDefWebProjectile.PostBeginPlay
struct ADunDefWebProjectile_PostBeginPlay_Params
{
};

// Function DunDefSpider.DunDefWebProjectile.ExecReplicatedFunction
struct ADunDefWebProjectile_ExecReplicatedFunction_Params
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
	bool                                               boolParam1;                                               // (OptionalParm, Parm)
	bool                                               boolParam2;                                               // (OptionalParm, Parm)
	bool                                               boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.DrawMyHUD
struct ADunDefCrystalCore_PortalDefense_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.MakeInvincible
struct ADunDefCrystalCore_PortalDefense_MakeInvincible_Params
{
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.EndWarpInvincibility
struct ADunDefCrystalCore_PortalDefense_EndWarpInvincibility_Params
{
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.OnTeleport
struct ADunDefCrystalCore_PortalDefense_OnTeleport_Params
{
	class USeqAct_Teleport*                            Action;                                                   // (Parm)
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.UpdateCrystalCore
struct ADunDefCrystalCore_PortalDefense_UpdateCrystalCore_Params
{
	bool                                               locked;                                                   // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.TakeDamage
struct ADunDefCrystalCore_PortalDefense_TakeDamage_Params
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

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.PlayWarpedFX
struct ADunDefCrystalCore_PortalDefense_PlayWarpedFX_Params
{
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.HandleCoreTouched
struct ADunDefCrystalCore_PortalDefense_HandleCoreTouched_Params
{
	class AActor*                                      TouchingActor;                                            // (Parm)
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.Bump
struct ADunDefCrystalCore_PortalDefense_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.Touch
struct ADunDefCrystalCore_PortalDefense_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.PostBeginPlay
struct ADunDefCrystalCore_PortalDefense_PostBeginPlay_Params
{
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.ExecReplicatedFunction
struct ADunDefCrystalCore_PortalDefense_ExecReplicatedFunction_Params
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
	bool                                               boolParam1;                                               // (OptionalParm, Parm)
	bool                                               boolParam2;                                               // (OptionalParm, Parm)
	bool                                               boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyEndWarpInvincibility
struct ADunDefGRI_PortalDefense_NotifyEndWarpInvincibility_Params
{
};

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyWarpInvincibility
struct ADunDefGRI_PortalDefense_NotifyWarpInvincibility_Params
{
};

// Function DunDefSpider.DunDefGRI_PortalDefense.DrawMyHUD
struct ADunDefGRI_PortalDefense_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyPortalHit
struct ADunDefGRI_PortalDefense_NotifyPortalHit_Params
{
};

// Function DunDefSpider.DunDefGRI_PortalDefense.SetInCombatPhase
struct ADunDefGRI_PortalDefense_SetInCombatPhase_Params
{
	bool                                               inCombatPhase;                                            // (Parm)
};

// Function DunDefSpider.DunDefGRI_PortalDefense.PostBeginPlay
struct ADunDefGRI_PortalDefense_PostBeginPlay_Params
{
};

// Function DunDefSpider.DunDefSpider.PlayDying
struct ADunDefSpider_PlayDying_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLoc;                                                   // (Parm)
};

// Function DunDefSpider.DunDefSpider.Died
struct ADunDefSpider_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpider.Tick
struct ADunDefSpider_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpider.DunDefSpider.SetWebChargeTime
struct ADunDefSpider_SetWebChargeTime_Params
{
	float                                              NewWebChargeTime;                                         // (Parm)
};

// Function DunDefSpider.DunDefSpider.UpdateWebParticle
struct ADunDefSpider_UpdateWebParticle_Params
{
	float                                              NewScale;                                                 // (Parm)
};

// Function DunDefSpider.DunDefSpider.PlayMeleeAttackAnimation
struct ADunDefSpider_PlayMeleeAttackAnimation_Params
{
	int                                                AnimationIndex;                                           // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpider.ShutDownWebCharge
struct ADunDefSpider_ShutDownWebCharge_Params
{
};

// Function DunDefSpider.DunDefSpider.ShootWeb
struct ADunDefSpider_ShootWeb_Params
{
};

// Function DunDefSpider.DunDefSpider.MeleeSwingEnd
struct ADunDefSpider_MeleeSwingEnd_Params
{
};

// Function DunDefSpider.DunDefSpider.MeleeSwingStart
struct ADunDefSpider_MeleeSwingStart_Params
{
};

// Function DunDefSpider.DunDefSpider.GetMeleeSwingLocation
struct ADunDefSpider_GetMeleeSwingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpider.GetWebProjectileLocAndRot
struct ADunDefSpider_GetWebProjectileLocAndRot_Params
{
	struct FVector                                     Position;                                                 // (Parm, OutParm)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm)
};

// Function DunDefSpider.DunDefSpider.PlayAttackAnimation
struct ADunDefSpider_PlayAttackAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpider.PlayWebChargeAnim
struct ADunDefSpider_PlayWebChargeAnim_Params
{
};

// Function DunDefSpider.DunDefSpider.PlayWebShootAnim
struct ADunDefSpider_PlayWebShootAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpider.PlayLungeAnimation
struct ADunDefSpider_PlayLungeAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpider.UpdateDifficultyValues
struct ADunDefSpider_UpdateDifficultyValues_Params
{
	bool                                               UpdateMaterial;                                           // (OptionalParm, Parm)
	bool                                               onlyDynamicValues;                                        // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefSpider.PlaySpawnEffect
struct ADunDefSpider_PlaySpawnEffect_Params
{
};

// Function DunDefSpider.DunDefSpider.ClearSpawnEffect
struct ADunDefSpider_ClearSpawnEffect_Params
{
};

// Function DunDefSpider.DunDefSpider.ReplicatedEvent
struct ADunDefSpider_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpider.DunDefSpider.ExecReplicatedFunction
struct ADunDefSpider_ExecReplicatedFunction_Params
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
	bool                                               boolParam1;                                               // (OptionalParm, Parm)
	bool                                               boolParam2;                                               // (OptionalParm, Parm)
	bool                                               boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefSpider.PostBeginPlay
struct ADunDefSpider_PostBeginPlay_Params
{
};

// Function DunDefSpider.DunDefMapInfo_PortalDefense.GetMaxAllowedCoreHits
struct UDunDefMapInfo_PortalDefense_GetMaxAllowedCoreHits_Params
{
	int                                                difficulty;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameScaleMultiplier
struct AGameInfo_PortalDefense_GetGameScaleMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameDamageMultiplier
struct AGameInfo_PortalDefense_GetGameDamageMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameHealthMultiplier
struct AGameInfo_PortalDefense_GetGameHealthMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.GameInfo_PortalDefense.UpdateEnemyMultipliers
struct AGameInfo_PortalDefense_UpdateEnemyMultipliers_Params
{
	float                                              DmgPct;                                                   // (Parm)
};

// Function DunDefSpider.GameInfo_PortalDefense.SetWaveNumber
struct AGameInfo_PortalDefense_SetWaveNumber_Params
{
	int                                                theWaveNumber;                                            // (Parm)
};

// Function DunDefSpider.GameInfo_PortalDefense.DoWaveSkipping
struct AGameInfo_PortalDefense_DoWaveSkipping_Params
{
	bool                                               bAllowArbritraryWaveSkipping;                             // (OptionalParm, Parm)
};

// Function DunDefSpider.GameInfo_PortalDefense.PostBeginPlay
struct AGameInfo_PortalDefense_PostBeginPlay_Params
{
};

// Function DunDefSpider.DunDefGRI_VDay.DrawExtraEnemyMinimapIcon
struct ADunDefGRI_VDay_DrawExtraEnemyMinimapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
	class ADunDefEnemy*                                Enemy;                                                    // (Parm)
};

// Function DunDefSpider.DunDefGRI_VDay.GenderSpawned
struct ADunDefGRI_VDay_GenderSpawned_Params
{
	class ADunDefEnemy*                                enemyActor;                                               // (Parm)
	bool                                               isBoy;                                                    // (Parm)
};

// Function DunDefSpider.DunDefGRI_VDay.PairMatched
struct ADunDefGRI_VDay_PairMatched_Params
{
	struct FVector                                     Loc1;                                                     // (Parm)
	struct FVector                                     Loc2;                                                     // (Parm)
	class ADunDefEnemy*                                enemyArch;                                                // (Parm)
};

// Function DunDefSpider.DunDefGRI_VDay.ExecReplicatedFunction
struct ADunDefGRI_VDay_ExecReplicatedFunction_Params
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
	bool                                               boolParam1;                                               // (OptionalParm, Parm)
	bool                                               boolParam2;                                               // (OptionalParm, Parm)
	bool                                               boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefSpiderController.GetToolTipAttackRange
struct ADunDefSpiderController_GetToolTipAttackRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderController.GetTargetableRange
struct ADunDefSpiderController_GetTargetableRange_Params
{
	bool                                               bCheckAttackRange;                                        // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderController.GetAttackDamage
struct ADunDefSpiderController_GetAttackDamage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderController.CancelCurrentTarget
struct ADunDefSpiderController_CancelCurrentTarget_Params
{
	int                                                Reason;                                                   // (Parm)
};

// Function DunDefSpider.DunDefSpiderController.SetMyQueen
struct ADunDefSpiderController_SetMyQueen_Params
{
	class ADunDefSpiderQueenController*                newQueen;                                                 // (Parm)
};

// Function DunDefSpider.DunDefSpiderController.NotifyQueenOfDeath
struct ADunDefSpiderController_NotifyQueenOfDeath_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function DunDefSpider.DunDefSpiderController.PawnDied
struct ADunDefSpiderController_PawnDied_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function DunDefSpider.DunDefSpiderController.IsWithinAttackRange
struct ADunDefSpiderController_IsWithinAttackRange_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	float                                              AttackRangeOffset;                                        // (OptionalParm, Parm)
	bool                                               bCheckDeltaZ;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderController.ShootWeb
struct ADunDefSpiderController_ShootWeb_Params
{
};

// Function DunDefSpider.DunDefSpiderController.GetAttackRange
struct ADunDefSpiderController_GetAttackRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderController.DoLungeAttack
struct ADunDefSpiderController_DoLungeAttack_Params
{
};

// Function DunDefSpider.DunDefSpiderController.DoWebAttack
struct ADunDefSpiderController_DoWebAttack_Params
{
};

// Function DunDefSpider.DunDefSpiderController.CheckForCustomAttacks
struct ADunDefSpiderController_CheckForCustomAttacks_Params
{
};

// Function DunDefSpider.DunDefSpiderController.AllowWebAttack
struct ADunDefSpiderController_AllowWebAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderController.AddToSwingHurtList
struct ADunDefSpiderController_AddToSwingHurtList_Params
{
	class AActor*                                      newEntry;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderController.EndMeleeSwing
struct ADunDefSpiderController_EndMeleeSwing_Params
{
};

// Function DunDefSpider.DunDefSpiderController.StartMeleeSwing
struct ADunDefSpiderController_StartMeleeSwing_Params
{
};

// Function DunDefSpider.DunDefSpiderController.GetWebChargeTime
struct ADunDefSpiderController_GetWebChargeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderController.NotifyBump
struct ADunDefSpiderController_NotifyBump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueenController.SetTarget
struct ADunDefSpiderQueenController_SetTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
	bool                                               bDontClearIgnoreList;                                     // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefSpiderQueenController.ShootWeb
struct ADunDefSpiderQueenController_ShootWeb_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.GetWebChargeTime
struct ADunDefSpiderQueenController_GetWebChargeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueenController.DoWebAttack
struct ADunDefSpiderQueenController_DoWebAttack_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.NotifyBabyDeath
struct ADunDefSpiderQueenController_NotifyBabyDeath_Params
{
	class ADunDefSpider*                               DeadBaby;                                                 // (Parm)
};

// Function DunDefSpider.DunDefSpiderQueenController.GetAttackInterval
struct ADunDefSpiderQueenController_GetAttackInterval_Params
{
	class AActor*                                      Victim;                                                   // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueenController.CheckForCustomAttacks
struct ADunDefSpiderQueenController_CheckForCustomAttacks_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.FindValidBabyShootLoc
struct ADunDefSpiderQueenController_FindValidBabyShootLoc_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueenController.SpawnBaby
struct ADunDefSpiderQueenController_SpawnBaby_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.FlagSpawnBaby
struct ADunDefSpiderQueenController_FlagSpawnBaby_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.StartBabySpawn
struct ADunDefSpiderQueenController_StartBabySpawn_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.ForceWakeUp
struct ADunDefSpiderQueenController_ForceWakeUp_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.AddToSwingHurtList
struct ADunDefSpiderQueenController_AddToSwingHurtList_Params
{
	class AActor*                                      newEntry;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueenController.EndMeleeSwing
struct ADunDefSpiderQueenController_EndMeleeSwing_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.StartMeleeSwing
struct ADunDefSpiderQueenController_StartMeleeSwing_Params
{
};

// Function DunDefSpider.DunDefSpiderQueenController.PostBeginPlay
struct ADunDefSpiderQueenController_PostBeginPlay_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.SetDyingPhysics
struct ADunDefSpiderQueen_SetDyingPhysics_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.Died
struct ADunDefSpiderQueen_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueen.SetUpperBodyLookAt
struct ADunDefSpiderQueen_SetUpperBodyLookAt_Params
{
	bool                                               bTurnOn;                                                  // (Parm)
};

// Function DunDefSpider.DunDefSpiderQueen.Tick
struct ADunDefSpiderQueen_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpider.DunDefSpiderQueen.PlayStunnedHurtEffect
struct ADunDefSpiderQueen_PlayStunnedHurtEffect_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function DunDefSpider.DunDefSpiderQueen.ShootWeb
struct ADunDefSpiderQueen_ShootWeb_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.PlayWebShootAnim
struct ADunDefSpiderQueen_PlayWebShootAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueen.PlayWebChargeAnim
struct ADunDefSpiderQueen_PlayWebChargeAnim_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.SetWebChargeTime
struct ADunDefSpiderQueen_SetWebChargeTime_Params
{
	float                                              NewWebChargeTime;                                         // (Parm)
};

// Function DunDefSpider.DunDefSpiderQueen.GetWebProjectileLocAndRot
struct ADunDefSpiderQueen_GetWebProjectileLocAndRot_Params
{
	struct FVector                                     Position;                                                 // (Parm, OutParm)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm)
};

// Function DunDefSpider.DunDefSpiderQueen.GetMeleeSwingLocation
struct ADunDefSpiderQueen_GetMeleeSwingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueen.MeleeSwingEnd
struct ADunDefSpiderQueen_MeleeSwingEnd_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.MeleeSwingStart
struct ADunDefSpiderQueen_MeleeSwingStart_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.SetRageMode
struct ADunDefSpiderQueen_SetRageMode_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.GetEnrageIntervalMult
struct ADunDefSpiderQueen_GetEnrageIntervalMult_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueen.TakeDamage
struct ADunDefSpiderQueen_TakeDamage_Params
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

// Function DunDefSpider.DunDefSpiderQueen.CheckSpecialCoreDmg
struct ADunDefSpiderQueen_CheckSpecialCoreDmg_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueen.AdjustDamage
struct ADunDefSpiderQueen_AdjustDamage_Params
{
	int                                                inDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefSpiderQueen.NotifyTakeHit
struct ADunDefSpiderQueen_NotifyTakeHit_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function DunDefSpider.DunDefSpiderQueen.GetBabySpawnLocandRot
struct ADunDefSpiderQueen_GetBabySpawnLocandRot_Params
{
	struct FVector                                     SpawnLoc;                                                 // (Parm, OutParm)
	struct FRotator                                    SpawnRot;                                                 // (Parm, OutParm)
};

// Function DunDefSpider.DunDefSpiderQueen.DoSpawnBaby
struct ADunDefSpiderQueen_DoSpawnBaby_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.StopStunAnimation
struct ADunDefSpiderQueen_StopStunAnimation_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.PlayStunAnimation
struct ADunDefSpiderQueen_PlayStunAnimation_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.PlayBabySpawnAnim
struct ADunDefSpiderQueen_PlayBabySpawnAnim_Params
{
	float                                              playSpeed;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueen.GetPawnDamageModifier
struct ADunDefSpiderQueen_GetPawnDamageModifier_Params
{
	bool                                               bDontIncludeAbilities;                                    // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.DunDefSpiderQueen.UpdateDifficultyValues
struct ADunDefSpiderQueen_UpdateDifficultyValues_Params
{
	bool                                               UpdateMaterial;                                           // (OptionalParm, Parm)
	bool                                               onlyDynamicValues;                                        // (OptionalParm, Parm)
};

// Function DunDefSpider.DunDefSpiderQueen.PostBeginPlay
struct ADunDefSpiderQueen_PostBeginPlay_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.PlayJumpAnimation
struct ADunDefSpiderQueen_PlayJumpAnimation_Params
{
};

// Function DunDefSpider.DunDefSpiderQueen.ExecReplicatedFunction
struct ADunDefSpiderQueen_ExecReplicatedFunction_Params
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
	bool                                               boolParam1;                                               // (OptionalParm, Parm)
	bool                                               boolParam2;                                               // (OptionalParm, Parm)
	bool                                               boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpider.TowerDeboosterObject.GetTowerBoostAmount
struct UTowerDeboosterObject_GetTowerBoostAmount_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.TowerDeboosterObject.HasTowerBoostingType
struct UTowerDeboosterObject_HasTowerBoostingType_Params
{
	TEnumAsByte<ETowerBoostType>                       checkType;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.TowerDeboosterObject.GetTowerBoostingTarget
struct UTowerDeboosterObject_GetTowerBoostingTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.TowerDeboosterObject.SetBoostAmount
struct UTowerDeboosterObject_SetBoostAmount_Params
{
	float                                              newBoostAmount;                                           // (Parm)
};

// Function DunDefSpider.TowerDeboosterObject.SetBoostType
struct UTowerDeboosterObject_SetBoostType_Params
{
	TEnumAsByte<ETowerBoostType>                       newBoostType;                                             // (Parm)
};

// Function DunDefSpider.GameInfo_VDay.PairMatched
struct AGameInfo_VDay_PairMatched_Params
{
	class ADunDefEnemy*                                Boy;                                                      // (Parm)
	class ADunDefEnemy*                                Girl;                                                     // (Parm)
};

// Function DunDefSpider.GameInfo_VDay.Tick
struct AGameInfo_VDay_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpider.GameInfo_VDay.FindBestTemplate
struct AGameInfo_VDay_FindBestTemplate_Params
{
	struct FString                                     GenderString;                                             // (OptionalParm, Parm, OutParm, NeedCtorLink)
	class ADunDefEnemy*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.GameInfo_VDay.WaveSpawnerCreateEnemy
struct AGameInfo_VDay_WaveSpawnerCreateEnemy_Params
{
	class UDunDef_SeqAct_EnemyWaveSpawner*             aSpawner;                                                 // (Parm)
	class ADunDefEnemy*                                EnemyTemplate;                                            // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	class ADunDefEnemy*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpider.GameInfo_VDay.OpenedKillCountUI
struct AGameInfo_VDay_OpenedKillCountUI_Params
{
	class UUI_KillCount*                               aKillCountUI;                                             // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
