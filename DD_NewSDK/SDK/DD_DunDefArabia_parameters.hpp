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

// Function DunDefArabia.GenieLamp.PlayActivateAnim
struct AGenieLamp_PlayActivateAnim_Params
{
};

// Function DunDefArabia.GenieLamp.ShutDownEffects
struct AGenieLamp_ShutDownEffects_Params
{
};

// Function DunDefArabia.GenieLamp.StartActiveEffects
struct AGenieLamp_StartActiveEffects_Params
{
};

// Function DunDefArabia.GenieLamp.DoActivation
struct AGenieLamp_DoActivation_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefArabia.GenieLamp.RemoveCurrentGenieFromLamp
struct AGenieLamp_RemoveCurrentGenieFromLamp_Params
{
};

// Function DunDefArabia.GenieLamp.GiveLampAGenie
struct AGenieLamp_GiveLampAGenie_Params
{
	class AController*                                 newGenie;                                                 // (Parm)
};

// Function DunDefArabia.GenieLamp.GetToolTipPriority
struct AGenieLamp_GetToolTipPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.GenieLamp.TakesToolTipPriority
struct AGenieLamp_TakesToolTipPriority_Params
{
	TScriptInterface<class UDunDefToolTipInterface>    otherToolTip;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.GenieLamp.ContinueDrawingToolTip
struct AGenieLamp_ContinueDrawingToolTip_Params
{
	unsigned long                                      ContinueDrawing;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.GenieLamp.DrawToolTip
struct AGenieLamp_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	int                                                PosX;                                                     // (Parm)
	int                                                PosY;                                                     // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (OptionalParm, Parm)
};

// Function DunDefArabia.GenieLamp.GetActivationOffset
struct AGenieLamp_GetActivationOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.GenieLamp.GetActivationWeighting
struct AGenieLamp_GetActivationWeighting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.GenieLamp.Client_Activate
struct AGenieLamp_Client_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefArabia.GenieLamp.Server_Activate
struct AGenieLamp_Server_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      forceActivation;                                          // (OptionalParm, Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefArabia.GenieLamp.AllowActivation
struct AGenieLamp_AllowActivation_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.GenieLamp.PostBeginPlay
struct AGenieLamp_PostBeginPlay_Params
{
};

// Function DunDefArabia.GenieLamp.ExecReplicatedFunction
struct AGenieLamp_ExecReplicatedFunction_Params
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

// Function DunDefArabia.DunDefGenieBossController.NotifyDjinnDeath
struct ADunDefGenieBossController_NotifyDjinnDeath_Params
{
	class ADunDefDjinn*                                deadDjinn;                                                // (Parm)
};

// Function DunDefArabia.DunDefGenieBossController.SpawnDjinn
struct ADunDefGenieBossController_SpawnDjinn_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.KeepSpawningBabies
struct ADunDefGenieBossController_KeepSpawningBabies_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.ClearHitList
struct ADunDefGenieBossController_ClearHitList_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.SetTongueSwing
struct ADunDefGenieBossController_SetTongueSwing_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.AddToSwingHurtList
struct ADunDefGenieBossController_AddToSwingHurtList_Params
{
	class AActor*                                      newEntry;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.ShouldDamage
struct ADunDefGenieBossController_ShouldDamage_Params
{
	class AActor*                                      act;                                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.CheckForBurp
struct ADunDefGenieBossController_CheckForBurp_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.CheckForMelee
struct ADunDefGenieBossController_CheckForMelee_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.CheckForSuperTongue
struct ADunDefGenieBossController_CheckForSuperTongue_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.BiteStop
struct ADunDefGenieBossController_BiteStop_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.BiteStart
struct ADunDefGenieBossController_BiteStart_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.DoBurp
struct ADunDefGenieBossController_DoBurp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckForCustomAttacks
struct ADunDefGenieBossController_CheckForCustomAttacks_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.GetCDMultiplier
struct ADunDefGenieBossController_GetCDMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.CheckPlayerCloseness
struct ADunDefGenieBossController_CheckPlayerCloseness_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.PickLamp
struct ADunDefGenieBossController_PickLamp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.NotifyLampRubbed
struct ADunDefGenieBossController_NotifyLampRubbed_Params
{
	class AActor*                                      newSpawnPoint;                                            // (Parm)
};

// Function DunDefArabia.DunDefGenieBossController.NotifyReformed
struct ADunDefGenieBossController_NotifyReformed_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.LeaveLamp
struct ADunDefGenieBossController_LeaveLamp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckActiveDamage
struct ADunDefGenieBossController_CheckActiveDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.FindTargetRightEye
struct ADunDefGenieBossController_FindTargetRightEye_Params
{
	unsigned long                                      bSetTarget;                                               // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.FindTargetLeftEye
struct ADunDefGenieBossController_FindTargetLeftEye_Params
{
	unsigned long                                      bSetTarget;                                               // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.TraceRightEye
struct ADunDefGenieBossController_TraceRightEye_Params
{
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	class UClass*                                      currentEyeDmgType;                                        // (Parm)
};

// Function DunDefArabia.DunDefGenieBossController.TraceLeftEye
struct ADunDefGenieBossController_TraceLeftEye_Params
{
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	class UClass*                                      currentEyeDmgType;                                        // (Parm)
};

// Function DunDefArabia.DunDefGenieBossController.ShutDownEyes
struct ADunDefGenieBossController_ShutDownEyes_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.StopEyeTracking
struct ADunDefGenieBossController_StopEyeTracking_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.GoToLamp
struct ADunDefGenieBossController_GoToLamp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.SetRageMode
struct ADunDefGenieBossController_SetRageMode_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.NotifyTakeHitEX
struct ADunDefGenieBossController_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefArabia.DunDefGenieBossController.WantsHurtAnimation
struct ADunDefGenieBossController_WantsHurtAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.ForceIntoLamp
struct ADunDefGenieBossController_ForceIntoLamp_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBossController.SetInitialState
struct ADunDefGenieBossController_SetInitialState_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.PostBeginPlay
struct ADunDefGenieBossController_PostBeginPlay_Params
{
};

// Function DunDefArabia.DjinnLamp.PlayKillAnim
struct ADjinnLamp_PlayKillAnim_Params
{
};

// Function DunDefArabia.DjinnLamp.DoActivation
struct ADjinnLamp_DoActivation_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefArabia.DjinnLamp.RemoveCurrentGenieFromLamp
struct ADjinnLamp_RemoveCurrentGenieFromLamp_Params
{
};

// Function DunDefArabia.DjinnLamp.GiveLampAGenie
struct ADjinnLamp_GiveLampAGenie_Params
{
	class AController*                                 newGenie;                                                 // (Parm)
};

// Function DunDefArabia.DjinnLamp.ExecReplicatedFunction
struct ADjinnLamp_ExecReplicatedFunction_Params
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

// Function DunDefArabia.DunDefDjinnController.Destroyed
struct ADunDefDjinnController_Destroyed_Params
{
};

// Function DunDefArabia.DunDefDjinnController.DoAllyDjinnTimeOut
struct ADunDefDjinnController_DoAllyDjinnTimeOut_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyLampRubbed
struct ADunDefDjinnController_NotifyLampRubbed_Params
{
	class AActor*                                      SpawnPoint;                                               // (Parm)
	class ADunDefPlayerController*                     RubbedController;                                         // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.PickLamp
struct ADunDefDjinnController_PickLamp_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.AllowDeath
struct ADunDefDjinnController_AllowDeath_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.NotifyFinishedReforming
struct ADunDefDjinnController_NotifyFinishedReforming_Params
{
};

// Function DunDefArabia.DunDefDjinnController.LeaveLamp
struct ADunDefDjinnController_LeaveLamp_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyGenieOfDeath
struct ADunDefDjinnController_NotifyGenieOfDeath_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.PawnDied
struct ADunDefDjinnController_PawnDied_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.SetMyGenie
struct ADunDefDjinnController_SetMyGenie_Params
{
	class ADunDefGenieBossController*                  newGenie;                                                 // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.ForceFlee
struct ADunDefDjinnController_ForceFlee_Params
{
	class ADunDefPawn*                                 ForceFleeTarget;                                          // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.CheckForFlee
struct ADunDefDjinnController_CheckForFlee_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.GetProjectile
struct ADunDefDjinnController_GetProjectile_Params
{
	class ADunDefProjectile*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.PickProjectileType
struct ADunDefDjinnController_PickProjectileType_Params
{
};

// Function DunDefArabia.DunDefDjinnController.ShootProjectile
struct ADunDefDjinnController_ShootProjectile_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckForCustomAttacks
struct ADunDefDjinnController_CheckForCustomAttacks_Params
{
};

// Function DunDefArabia.DunDefDjinnController.IsValidUpgradeTower
struct ADunDefDjinnController_IsValidUpgradeTower_Params
{
	class ADunDefTower*                                Tower;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.CastTowerDestructSpell
struct ADunDefDjinnController_CastTowerDestructSpell_Params
{
};

// Function DunDefArabia.DunDefDjinnController.FindDestroyTower
struct ADunDefDjinnController_FindDestroyTower_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.DestroyTower
struct ADunDefDjinnController_DestroyTower_Params
{
};

// Function DunDefArabia.DunDefDjinnController.PlayFinishTowerDestructAnim
struct ADunDefDjinnController_PlayFinishTowerDestructAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.FinishTowerDestructCast
struct ADunDefDjinnController_FinishTowerDestructCast_Params
{
};

// Function DunDefArabia.DunDefDjinnController.HealGoldTarget
struct ADunDefDjinnController_HealGoldTarget_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CastGoldEnemySpell
struct ADunDefDjinnController_CastGoldEnemySpell_Params
{
};

// Function DunDefArabia.DunDefDjinnController.FindGoldEnemyTarget
struct ADunDefDjinnController_FindGoldEnemyTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.CheckValidGoldTarget
struct ADunDefDjinnController_CheckValidGoldTarget_Params
{
	class ADunDefEnemy*                                checkActor;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.PlayFinishGoldAnim
struct ADunDefDjinnController_PlayFinishGoldAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.FinishGoldEnemyCast
struct ADunDefDjinnController_FinishGoldEnemyCast_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckCastTimeout
struct ADunDefDjinnController_CheckCastTimeout_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckForCastingMovement
struct ADunDefDjinnController_CheckForCastingMovement_Params
{
	unsigned long                                      bHasLineOfSight;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.ClearCurrentSpellTarget
struct ADunDefDjinnController_ClearCurrentSpellTarget_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyTakeHitEX
struct ADunDefDjinnController_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.NotifyDamageTaken
struct ADunDefDjinnController_NotifyDamageTaken_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.CheckCurrentCastTarget
struct ADunDefDjinnController_CheckCurrentCastTarget_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.Cough
struct ADunDefDjinnController_Cough_Params
{
	struct FName                                       coughAnimName;                                            // (OptionalParm, Parm)
};

// Function DunDefArabia.DunDefDjinnController.InterruptSpellCast
struct ADunDefDjinnController_InterruptSpellCast_Params
{
	unsigned long                                      bNoSeeking;                                               // (OptionalParm, Parm)
};

// Function DunDefArabia.DunDefDjinnController.CheckSpellDamageAmount
struct ADunDefDjinnController_CheckSpellDamageAmount_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.CheckAllowedCastingStart
struct ADunDefDjinnController_CheckAllowedCastingStart_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.IsWithinCastingRange
struct ADunDefDjinnController_IsWithinCastingRange_Params
{
	class AActor*                                      FollowTarget;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.FindNearestFleePoint
struct ADunDefDjinnController_FindNearestFleePoint_Params
{
	unsigned long                                      bIgnoreFleeAngle;                                         // (OptionalParm, Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.CheckFleeDistance
struct ADunDefDjinnController_CheckFleeDistance_Params
{
};

// Function DunDefArabia.DunDefDjinnController.StopFlee
struct ADunDefDjinnController_StopFlee_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckDirectReachability
struct ADunDefDjinnController_CheckDirectReachability_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckIndirectReachability
struct ADunDefDjinnController_CheckIndirectReachability_Params
{
};

// Function DunDefArabia.DunDefDjinnController.MoveUnreachable
struct ADunDefDjinnController_MoveUnreachable_Params
{
	struct FVector                                     AttemptedDest;                                            // (Parm)
	class AActor*                                      AttemptedTarget;                                          // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.GetObstructionJumpForwardDir
struct ADunDefDjinnController_GetObstructionJumpForwardDir_Params
{
	struct FVector                                     forwardDir;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.ObstructionJump
struct ADunDefDjinnController_ObstructionJump_Params
{
	struct FVector                                     jumpForwardDir;                                           // (Parm)
	struct FVector                                     jumpSideDir;                                              // (Parm)
};

// Function DunDefArabia.DunDefDjinnController.GeneratePathToActor
struct ADunDefDjinnController_GeneratePathToActor_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	unsigned long                                      bAllowPartialPath;                                        // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.MoveAroundBlockade
struct ADunDefDjinnController_MoveAroundBlockade_Params
{
	class AActor*                                      blockadeActor;                                            // (Parm)
	float                                              BlockadeWidth;                                            // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	unsigned long                                      SkipBlockingCheck;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.NavActorReachable
struct ADunDefDjinnController_NavActorReachable_Params
{
	class AActor*                                      A;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.FindNearestNavPointTo
struct ADunDefDjinnController_FindNearestNavPointTo_Params
{
	class AActor*                                      A;                                                        // (Parm)
	unsigned long                                      bCheckVisible;                                            // (OptionalParm, Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.GetTargetingMultiplier
struct ADunDefDjinnController_GetTargetingMultiplier_Params
{
	class AActor*                                      ActorRef;                                                 // (Parm)
	float                                              baseDesirability;                                         // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnController.PostBeginPlay
struct ADunDefDjinnController_PostBeginPlay_Params
{
};

// Function DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia.Activated
struct UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia_Activated_Params
{
};

// Function DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge.RefreshBillboard
struct ADunDefWaveBillBoard_ArabiaChallenge_RefreshBillboard_Params
{
};

// Function DunDefArabia.DunDefDjinn.GetPawnDamageModifier
struct ADunDefDjinn_GetPawnDamageModifier_Params
{
	unsigned long                                      bDontIncludeAbilities;                                    // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.GetMiniMapIconTexture
struct ADunDefDjinn_GetMiniMapIconTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.UpdateToTeamMaterial
struct ADunDefDjinn_UpdateToTeamMaterial_Params
{
};

// Function DunDefArabia.DunDefDjinn.NotifyTeamSwitch
struct ADunDefDjinn_NotifyTeamSwitch_Params
{
};

// Function DunDefArabia.DunDefDjinn.NotifyOfDeath
struct ADunDefDjinn_NotifyOfDeath_Params
{
	class ADunDefPlayerController*                     Killer;                                                   // (Parm)
};

// Function DunDefArabia.DunDefDjinn.UnHideDjinn
struct ADunDefDjinn_UnHideDjinn_Params
{
};

// Function DunDefArabia.DunDefDjinn.HideDjinn
struct ADunDefDjinn_HideDjinn_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayGoToLamp
struct ADunDefDjinn_PlayGoToLamp_Params
{
	class AActor*                                      theLamp;                                                  // (Parm)
};

// Function DunDefArabia.DunDefDjinn.PlayLeaveLamp
struct ADunDefDjinn_PlayLeaveLamp_Params
{
};

// Function DunDefArabia.DunDefDjinn.LeaveLamp
struct ADunDefDjinn_LeaveLamp_Params
{
	struct FVector                                     NewLocation;                                              // (Parm)
};

// Function DunDefArabia.DunDefDjinn.GetEnemyTargetingDesirability
struct ADunDefDjinn_GetEnemyTargetingDesirability_Params
{
	class AEngineNativeDunDefAIController*             forController;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.GetMiniMapIconColor
struct ADunDefDjinn_GetMiniMapIconColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.CheckDjinnProximity
struct ADunDefDjinn_CheckDjinnProximity_Params
{
};

// Function DunDefArabia.DunDefDjinn.TakeDamage
struct ADunDefDjinn_TakeDamage_Params
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

// Function DunDefArabia.DunDefDjinn.AllowTrapSpringing
struct ADunDefDjinn_AllowTrapSpringing_Params
{
	class ADunDefTower_DetonationType*                 trap;                                                     // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.ShutDownAllCastingVFX
struct ADunDefDjinn_ShutDownAllCastingVFX_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayAttackAnimation
struct ADunDefDjinn_PlayAttackAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.GetProjectileLocAndRot
struct ADunDefDjinn_GetProjectileLocAndRot_Params
{
	struct FVector                                     Position;                                                 // (Parm, OutParm)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm)
};

// Function DunDefArabia.DunDefDjinn.FireProjectile
struct ADunDefDjinn_FireProjectile_Params
{
};

// Function DunDefArabia.DunDefDjinn.ResetTowers
struct ADunDefDjinn_ResetTowers_Params
{
};

// Function DunDefArabia.DunDefDjinn.ShutDownTowerVFX
struct ADunDefDjinn_ShutDownTowerVFX_Params
{
};

// Function DunDefArabia.DunDefDjinn.StopTowerDestructCast
struct ADunDefDjinn_StopTowerDestructCast_Params
{
	class ADunDefTower*                                theTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.SetInitialTowerValues
struct ADunDefDjinn_SetInitialTowerValues_Params
{
};

// Function DunDefArabia.DunDefDjinn.StartTowerUpgradeCast
struct ADunDefDjinn_StartTowerUpgradeCast_Params
{
	class AActor*                                      castTarget;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.StartTowerDestructCast
struct ADunDefDjinn_StartTowerDestructCast_Params
{
	class AActor*                                      castTarget;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.StartTowerBeam
struct ADunDefDjinn_StartTowerBeam_Params
{
};

// Function DunDefArabia.DunDefDjinn.UpdateTower
struct ADunDefDjinn_UpdateTower_Params
{
};

// Function DunDefArabia.DunDefDjinn.Died
struct ADunDefDjinn_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.AdjustDamage
struct ADunDefDjinn_AdjustDamage_Params
{
	int                                                inDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefArabia.DunDefDjinn.UnSetGoldenEnemy
struct ADunDefDjinn_UnSetGoldenEnemy_Params
{
	class ADunDefEnemy*                                Enemy;                                                    // (Parm)
};

// Function DunDefArabia.DunDefDjinn.SetGoldenEnemy
struct ADunDefDjinn_SetGoldenEnemy_Params
{
	class ADunDefEnemy*                                Enemy;                                                    // (Parm)
};

// Function DunDefArabia.DunDefDjinn.PlayInterruptAnimation
struct ADunDefDjinn_PlayInterruptAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.ShutDownGoldVFX
struct ADunDefDjinn_ShutDownGoldVFX_Params
{
};

// Function DunDefArabia.DunDefDjinn.StopGoldEnemyCast
struct ADunDefDjinn_StopGoldEnemyCast_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.StartGoldEnemyCast
struct ADunDefDjinn_StartGoldEnemyCast_Params
{
	class AActor*                                      castTarget;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.StartBeam
struct ADunDefDjinn_StartBeam_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayMajorHurtAnimation
struct ADunDefDjinn_PlayMajorHurtAnimation_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayHurtAnimation
struct ADunDefDjinn_PlayHurtAnimation_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function DunDefArabia.DunDefDjinn.UpdateDifficultyMaterial
struct ADunDefDjinn_UpdateDifficultyMaterial_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinn.SetMovementPhysics
struct ADunDefDjinn_SetMovementPhysics_Params
{
};

// Function DunDefArabia.DunDefDjinn.DisableSpawnCollision
struct ADunDefDjinn_DisableSpawnCollision_Params
{
};

// Function DunDefArabia.DunDefDjinn.PostBeginPlay
struct ADunDefDjinn_PostBeginPlay_Params
{
};

// Function DunDefArabia.DunDefDjinn.ExecReplicatedFunction
struct ADunDefDjinn_ExecReplicatedFunction_Params
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

// Function DunDefArabia.DunDefDjinn.GetTowerTargetingDesirability
struct ADunDefDjinn_GetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnManager.PickDjinnLamp
struct ADunDefDjinnManager_PickDjinnLamp_Params
{
	class ADjinnLamp*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyGold
struct ADunDefDjinnManager_IsActorAlreadyGold_Params
{
	class AActor*                                      checkActor;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActorIndexed
struct ADunDefDjinnManager_RemoveGoldenActorIndexed_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActor
struct ADunDefDjinnManager_RemoveGoldenActor_Params
{
	class AActor*                                      removeActor;                                              // (Parm)
};

// Function DunDefArabia.DunDefDjinnManager.AddGoldenActor
struct ADunDefDjinnManager_AddGoldenActor_Params
{
	class AActor*                                      NewActor;                                                 // (Parm)
};

// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyTargeted
struct ADunDefDjinnManager_IsActorAlreadyTargeted_Params
{
	class AActor*                                      checkActor;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefDjinnManager.RemoveTargetedActor
struct ADunDefDjinnManager_RemoveTargetedActor_Params
{
	class AActor*                                      removeActor;                                              // (Parm)
};

// Function DunDefArabia.DunDefDjinnManager.AddTargetedActor
struct ADunDefDjinnManager_AddTargetedActor_Params
{
	class AActor*                                      NewActor;                                                 // (Parm)
};

// Function DunDefArabia.DunDefDjinnManager.PostBeginPlay
struct ADunDefDjinnManager_PostBeginPlay_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdatingDelayTurnOff
struct ADunDefGenieBoss_ForceSkelUpdatingDelayTurnOff_Params
{
	unsigned long                                      Force;                                                    // (Parm)
	float                                              delayTurnOff;                                             // (OptionalParm, Parm)
};

// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdating
struct ADunDefGenieBoss_ForceSkelUpdating_Params
{
	unsigned long                                      Force;                                                    // (Parm)
	unsigned long                                      bOnlyForceTickAnimNodes;                                  // (OptionalParm, Parm)
};

// Function DunDefArabia.DunDefGenieBoss.ClearElementalEffect
struct ADunDefGenieBoss_ClearElementalEffect_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetElementalDamageType
struct ADunDefGenieBoss_GetElementalDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.TakeDamage
struct ADunDefGenieBoss_TakeDamage_Params
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

// Function DunDefArabia.DunDefGenieBoss.GetMiniMapIconColor
struct ADunDefGenieBoss_GetMiniMapIconColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.ActivateRageMode
struct ADunDefGenieBoss_ActivateRageMode_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PauseAnimationAfterDeath
struct ADunDefGenieBoss_PauseAnimationAfterDeath_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetBurpProjectileLocAndRot
struct ADunDefGenieBoss_GetBurpProjectileLocAndRot_Params
{
	struct FVector                                     burpLoc;                                                  // (Parm, OutParm)
	struct FRotator                                    burpRot;                                                  // (Parm, OutParm)
};

// Function DunDefArabia.DunDefGenieBoss.GetRightEyeLocAndRot
struct ADunDefGenieBoss_GetRightEyeLocAndRot_Params
{
	struct FVector                                     eyeLoc;                                                   // (Parm, OutParm)
	struct FRotator                                    eyeRot;                                                   // (Parm, OutParm)
};

// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeLocAndRot
struct ADunDefGenieBoss_GetLeftEyeLocAndRot_Params
{
	struct FVector                                     eyeLoc;                                                   // (Parm, OutParm)
	struct FRotator                                    eyeRot;                                                   // (Parm, OutParm)
};

// Function DunDefArabia.DunDefGenieBoss.GetRightEyeDmgType
struct ADunDefGenieBoss_GetRightEyeDmgType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeDmgType
struct ADunDefGenieBoss_GetLeftEyeDmgType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.PickRightEyeBeam
struct ADunDefGenieBoss_PickRightEyeBeam_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PickLeftEyeBeam
struct ADunDefGenieBoss_PickLeftEyeBeam_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayBiteAnim
struct ADunDefGenieBoss_PlayBiteAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.GetDjinnSpawnLocandRot
struct ADunDefGenieBoss_GetDjinnSpawnLocandRot_Params
{
	struct FName                                       SocketName;                                               // (Parm)
	struct FVector                                     SpawnLoc;                                                 // (Parm, OutParm)
	struct FRotator                                    SpawnRot;                                                 // (Parm, OutParm)
};

// Function DunDefArabia.DunDefGenieBoss.GetBiteLocation
struct ADunDefGenieBoss_GetBiteLocation_Params
{
	struct FVector                                     biteLocation;                                             // (Parm, OutParm)
	struct FRotator                                    biteRot;                                                  // (OptionalParm, Parm, OutParm)
};

// Function DunDefArabia.DunDefGenieBoss.SpawnBabyDjinn
struct ADunDefGenieBoss_SpawnBabyDjinn_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ClearHitList
struct ADunDefGenieBoss_ClearHitList_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.BiteStop
struct ADunDefGenieBoss_BiteStop_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.BiteStart
struct ADunDefGenieBoss_BiteStart_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.Burp
struct ADunDefGenieBoss_Burp_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SpawnMoveToLampVFX
struct ADunDefGenieBoss_SpawnMoveToLampVFX_Params
{
	struct FVector                                     particleDir;                                              // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.PlayBabySpawnAnim
struct ADunDefGenieBoss_PlayBabySpawnAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.PlayBurpAnim
struct ADunDefGenieBoss_PlayBurpAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.PlayDisappearAnim
struct ADunDefGenieBoss_PlayDisappearAnim_Params
{
	unsigned long                                      bPlayEffects;                                             // (Parm)
	class AActor*                                      newLamp;                                                  // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.PlayLickAnim
struct ADunDefGenieBoss_PlayLickAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.PlaySuperLickAnim
struct ADunDefGenieBoss_PlaySuperLickAnim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.PlayEyeBeamLoop
struct ADunDefGenieBoss_PlayEyeBeamLoop_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.TongueStart
struct ADunDefGenieBoss_TongueStart_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetTongueSocketLocation
struct ADunDefGenieBoss_GetTongueSocketLocation_Params
{
	struct FName                                       currentSocket;                                            // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.StopCrazyEye
struct ADunDefGenieBoss_StopCrazyEye_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayCrazyEyesAttack
struct ADunDefGenieBoss_PlayCrazyEyesAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.StartEyeDamage
struct ADunDefGenieBoss_StartEyeDamage_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeTarget
struct ADunDefGenieBoss_SetLeftEyeTarget_Params
{
	class AActor*                                      newLeftEyeTarget;                                         // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.SetRightEyeTarget
struct ADunDefGenieBoss_SetRightEyeTarget_Params
{
	class AActor*                                      newRightEyeTarget;                                        // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.PlayEyeAttackStart
struct ADunDefGenieBoss_PlayEyeAttackStart_Params
{
	unsigned long                                      bIgnoreEyeTracking;                                       // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefArabia.DunDefGenieBoss.StartUpEyes
struct ADunDefGenieBoss_StartUpEyes_Params
{
	float                                              DamageTime;                                               // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.AdjustDamage
struct ADunDefGenieBoss_AdjustDamage_Params
{
	int                                                inDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefArabia.DunDefGenieBoss.UnHideHead
struct ADunDefGenieBoss_UnHideHead_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.HideHead
struct ADunDefGenieBoss_HideHead_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.BringGenieOutOfLamp
struct ADunDefGenieBoss_BringGenieOutOfLamp_Params
{
	struct FVector                                     lampLoc;                                                  // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.ShutDownEyes
struct ADunDefGenieBoss_ShutDownEyes_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetRightEyeBeamLocation
struct ADunDefGenieBoss_SetRightEyeBeamLocation_Params
{
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	struct FVector                                     BeamNormal;                                               // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeBeamLocation
struct ADunDefGenieBoss_SetLeftEyeBeamLocation_Params
{
	struct FVector                                     beamStartLoc;                                             // (Parm)
	struct FVector                                     BeamEndLoc;                                               // (Parm)
	struct FVector                                     BeamNormal;                                               // (OptionalParm, Parm)
};

// Function DunDefArabia.DunDefGenieBoss.TraceRightEye
struct ADunDefGenieBoss_TraceRightEye_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.TraceLeftEye
struct ADunDefGenieBoss_TraceLeftEye_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.EndEyeAttack
struct ADunDefGenieBoss_EndEyeAttack_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.UpdateHeadLookAt
struct ADunDefGenieBoss_UpdateHeadLookAt_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.SetMovementPhysics
struct ADunDefGenieBoss_SetMovementPhysics_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.Tick
struct ADunDefGenieBoss_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.SetOnAllOverlappingAuras
struct ADunDefGenieBoss_SetOnAllOverlappingAuras_Params
{
	unsigned long                                      bSet;                                                     // (Parm)
};

// Function DunDefArabia.DunDefGenieBoss.SetInitialState
struct ADunDefGenieBoss_SetInitialState_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PostBeginPlay
struct ADunDefGenieBoss_PostBeginPlay_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ExecReplicatedFunction
struct ADunDefGenieBoss_ExecReplicatedFunction_Params
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

// Function DunDefArabia.DunDefGenieBoss.ReplicatedEvent
struct ADunDefGenieBoss_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
