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

// Function DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver.Activated
struct UDunDef_SeqAct_PickNewPuzzleSolver_Activated_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.AddPlayerToWaterList
struct ADunDefGRI_RisingWater_AddPlayerToWaterList_Params
{
	class ADunDefPlayer*                               waterPlayer;                                              // (Parm)
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.RemovePlayerToWaterList
struct ADunDefGRI_RisingWater_RemovePlayerToWaterList_Params
{
	class ADunDefPlayer*                               waterPlayer;                                              // (Parm)
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.SetWaterCastingMultiplier
struct ADunDefGRI_RisingWater_SetWaterCastingMultiplier_Params
{
	float                                              newCastingMultiplier;                                     // (Parm)
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.GetCastRateMultiplier
struct ADunDefGRI_RisingWater_GetCastRateMultiplier_Params
{
	class ADunDefPlayerAbility*                        ability;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.PuzzleComplete
struct ADunDefGRI_RisingWater_PuzzleComplete_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.GetRandomPlayer
struct ADunDefGRI_RisingWater_GetRandomPlayer_Params
{
	class ADunDefPlayer*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.DrawMyHUD
struct ADunDefGRI_RisingWater_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.SetNewSolver
struct ADunDefGRI_RisingWater_SetNewSolver_Params
{
	class ADunDefPlayer*                               newSolver;                                                // (Parm)
	unsigned long                                      bIgnoreGameInfoNotification;                              // (OptionalParm, Parm)
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.NotifyPuzzleSolverDeath
struct ADunDefGRI_RisingWater_NotifyPuzzleSolverDeath_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.ClearPuzzleSolver
struct ADunDefGRI_RisingWater_ClearPuzzleSolver_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.PickNewSolver
struct ADunDefGRI_RisingWater_PickNewSolver_Params
{
	class ADunDefPlayer*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.ExecReplicatedFunction
struct ADunDefGRI_RisingWater_ExecReplicatedFunction_Params
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

// Function DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle.Activated
struct UDunDef_SeqAct_SetUpPuzzle_Activated_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.Destroyed
struct APuzzleRoomActor_Destroyed_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.FlashPuzzlePiece
struct APuzzleRoomActor_FlashPuzzlePiece_Params
{
	int                                                pieceIndex;                                               // (Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.ShowPuzzlePath
struct APuzzleRoomActor_ShowPuzzlePath_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.PlayFailedPathVFX
struct APuzzleRoomActor_PlayFailedPathVFX_Params
{
	struct FVector                                     actorLoc;                                                 // (Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.PlayInitalFailVFX
struct APuzzleRoomActor_PlayInitalFailVFX_Params
{
	int                                                failedIndex;                                              // (Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.FailedPath
struct APuzzleRoomActor_FailedPath_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulMove
struct APuzzleRoomActor_SuccessfulMove_Params
{
	int                                                moveIndex;                                                // (Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulFinish
struct APuzzleRoomActor_SuccessfulFinish_Params
{
	int                                                finalIndex;                                               // (Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.FinishedPuzzle
struct APuzzleRoomActor_FinishedPuzzle_Params
{
	int                                                finalIndex;                                               // (Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.NotifyPieceTouched
struct APuzzleRoomActor_NotifyPieceTouched_Params
{
	class APuzzlePieceActor*                           touchedPiece;                                             // (Parm)
	class AActor*                                      TouchingActor;                                            // (Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.ResetPuzzle
struct APuzzleRoomActor_ResetPuzzle_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.DrawDebugPathLines
struct APuzzleRoomActor_DrawDebugPathLines_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.StartEffect
struct APuzzleRoomActor_StartEffect_Params
{
	int                                                pieceIndex;                                               // (OptionalParm, Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.AddValidPathPiece
struct APuzzleRoomActor_AddValidPathPiece_Params
{
	int                                                newPieceIndex;                                            // (Parm)
	int                                                newValidIndex;                                            // (Parm)
};

// Function DunDefAtlantis.PuzzleRoomActor.MakePuzzle
struct APuzzleRoomActor_MakePuzzle_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.CalculatePieceIndex
struct APuzzleRoomActor_CalculatePieceIndex_Params
{
	int                                                X_loc;                                                    // (Parm)
	int                                                Y_loc;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.PuzzleRoomActor.InitGrid
struct APuzzleRoomActor_InitGrid_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.PostBeginPlay
struct APuzzleRoomActor_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.ExecReplicatedFunction
struct APuzzleRoomActor_ExecReplicatedFunction_Params
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

// Function DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft.Activated
struct UDunDef_SeqEvent_PuzzleSolverLeft_Activated_Params
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.Logout
struct AGameInfo_RisingWater_Logout_Params
{
	class AController*                                 Exiting;                                                  // (Parm)
};

// Function DunDefAtlantis.GameInfo_RisingWater.SetCurrentPuzzleSolver
struct AGameInfo_RisingWater_SetCurrentPuzzleSolver_Params
{
	class ADunDefPlayer*                               newPuzzleSolver;                                          // (Parm)
};

// Function DunDefAtlantis.GameInfo_RisingWater.SetGRIPuzzleSolver
struct AGameInfo_RisingWater_SetGRIPuzzleSolver_Params
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.RestartPlayer
struct AGameInfo_RisingWater_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
};

// Function DunDefAtlantis.GameInfo_RisingWater.Killed
struct AGameInfo_RisingWater_Killed_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 KilledPlayer;                                             // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function DunDefAtlantis.DunDefInkCloud.ResetCurrentMoveActors
struct ADunDefInkCloud_ResetCurrentMoveActors_Params
{
};

// Function DunDefAtlantis.DunDefInkCloud.HurtRadius
struct ADunDefInkCloud_HurtRadius_Params
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

// Function DunDefAtlantis.DunDefInkCloud.FadeOut
struct ADunDefInkCloud_FadeOut_Params
{
	float                                              theLightFadeOutTime;                                      // (OptionalParm, Parm)
};

// Function DunDefAtlantis.DunDefInkCloud.Init
struct ADunDefInkCloud_Init_Params
{
	struct FVector                                     Direction;                                                // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.CheckKrakenProximity
struct ADunDefKraken_CheckKrakenProximity_Params
{
};

// Function DunDefAtlantis.DunDefKraken.Died
struct ADunDefKraken_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.DestroyTentacles
struct ADunDefKraken_DestroyTentacles_Params
{
};

// Function DunDefAtlantis.DunDefKraken.GetPlayerTargetingDesirability
struct ADunDefKraken_GetPlayerTargetingDesirability_Params
{
	class ADunDefPlayerController*                     forController;                                            // (Parm)
	class ADunDefPlayer*                               ForPlayer;                                                // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.BiteStop
struct ADunDefKraken_BiteStop_Params
{
};

// Function DunDefAtlantis.DunDefKraken.BiteStart
struct ADunDefKraken_BiteStart_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayTentacleAttackAnimation
struct ADunDefKraken_PlayTentacleAttackAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.PlayBiteAttackAnimation
struct ADunDefKraken_PlayBiteAttackAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.StopSpit
struct ADunDefKraken_StopSpit_Params
{
};

// Function DunDefAtlantis.DunDefKraken.StartSpit
struct ADunDefKraken_StartSpit_Params
{
};

// Function DunDefAtlantis.DunDefKraken.GetSocketLocAndRot
struct ADunDefKraken_GetSocketLocAndRot_Params
{
	struct FName                                       SocketName;                                               // (Parm)
	struct FVector                                     socLoc;                                                   // (Parm, OutParm)
	struct FRotator                                    socRot;                                                   // (Parm, OutParm)
};

// Function DunDefAtlantis.DunDefKraken.ShootGiantProjectile
struct ADunDefKraken_ShootGiantProjectile_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ShootRight
struct ADunDefKraken_ShootRight_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ShootLeft
struct ADunDefKraken_ShootLeft_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ResetMovementSettings
struct ADunDefKraken_ResetMovementSettings_Params
{
};

// Function DunDefAtlantis.DunDefKraken.SetDashMovementSettings
struct ADunDefKraken_SetDashMovementSettings_Params
{
	float                                              DashAirSpeedScalar;                                       // (Parm)
	float                                              DashRotationRateScalar;                                   // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.PlayDashWindUp
struct ADunDefKraken_PlayDashWindUp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.PlayInkCloudAttack
struct ADunDefKraken_PlayInkCloudAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.PlayGiantProjectileAttack
struct ADunDefKraken_PlayGiantProjectileAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.PlayRightTentacleAttack
struct ADunDefKraken_PlayRightTentacleAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.GetTowerTargetingDesirability
struct ADunDefKraken_GetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.PlayLeftTentacleAttack
struct ADunDefKraken_PlayLeftTentacleAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.IsValidRightSwingTarget
struct ADunDefKraken_IsValidRightSwingTarget_Params
{
	class AActor*                                      checkTarg;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.IsValidLeftSwingTarget
struct ADunDefKraken_IsValidLeftSwingTarget_Params
{
	class AActor*                                      checkTarg;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.AddToRightSwingHurtList
struct ADunDefKraken_AddToRightSwingHurtList_Params
{
	class AActor*                                      newHitTarg;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.AddToLeftSwingHurtList
struct ADunDefKraken_AddToLeftSwingHurtList_Params
{
	class AActor*                                      newHitTarg;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.StopMelee
struct ADunDefKraken_StopMelee_Params
{
};

// Function DunDefAtlantis.DunDefKraken.StartMelee
struct ADunDefKraken_StartMelee_Params
{
};

// Function DunDefAtlantis.DunDefKraken.CloseMouth
struct ADunDefKraken_CloseMouth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.OpenMouth
struct ADunDefKraken_OpenMouth_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayMouthOpen
struct ADunDefKraken_PlayMouthOpen_Params
{
};

// Function DunDefAtlantis.DunDefKraken.DoSingleWithdraw
struct ADunDefKraken_DoSingleWithdraw_Params
{
	int                                                tentacleIndex;                                            // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.ForceWithDraw
struct ADunDefKraken_ForceWithDraw_Params
{
	class AKrakenTentacle*                             withdrawTentacle;                                         // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.BringOutAllTentacles
struct ADunDefKraken_BringOutAllTentacles_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.PlayWithDrawTentacle
struct ADunDefKraken_PlayWithDrawTentacle_Params
{
	int                                                tentacleIndex;                                            // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.NotifyTentacleWithdraw
struct ADunDefKraken_NotifyTentacleWithdraw_Params
{
	class AKrakenTentacle*                             damagedTentacle;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.CheckSpecialCoreDmg
struct ADunDefKraken_CheckSpecialCoreDmg_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.AdjustDamage
struct ADunDefKraken_AdjustDamage_Params
{
	int                                                inDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefAtlantis.DunDefKraken.PlayRealHurtEffect
struct ADunDefKraken_PlayRealHurtEffect_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.NotifyTakeHit
struct ADunDefKraken_NotifyTakeHit_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function DunDefAtlantis.DunDefKraken.TakeDamage
struct ADunDefKraken_TakeDamage_Params
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

// Function DunDefAtlantis.DunDefKraken.UpdateDifficultyValues
struct ADunDefKraken_UpdateDifficultyValues_Params
{
	unsigned long                                      UpdateMaterial;                                           // (OptionalParm, Parm)
	unsigned long                                      onlyDynamicValues;                                        // (OptionalParm, Parm)
};

// Function DunDefAtlantis.DunDefKraken.SetMovementPhysics
struct ADunDefKraken_SetMovementPhysics_Params
{
};

// Function DunDefAtlantis.DunDefKraken.GetAttackPauseRate
struct ADunDefKraken_GetAttackPauseRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKraken.InitTentacles
struct ADunDefKraken_InitTentacles_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PostBeginPlay
struct ADunDefKraken_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ExecReplicatedFunction
struct ADunDefKraken_ExecReplicatedFunction_Params
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

// Function DunDefAtlantis.DunDefKraken.ReplicatedEvent
struct ADunDefKraken_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.ForceLineOfSight
struct AKrakenTentacle_ForceLineOfSight_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetLightningTowerDamagePercent
struct AKrakenTentacle_GetLightningTowerDamagePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.setIsWebbed
struct AKrakenTentacle_setIsWebbed_Params
{
	unsigned long                                      isWebbed;                                                 // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.isWebbed
struct AKrakenTentacle_isWebbed_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetChainIgnore
struct AKrakenTentacle_GetChainIgnore_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.SetChainIgnore
struct AKrakenTentacle_SetChainIgnore_Params
{
	unsigned long                                      ignore;                                                   // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.IsBeingChainedBy
struct AKrakenTentacle_IsBeingChainedBy_Params
{
	class ADunDefTower_ChainLightning*                 Tower;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.RemoveFromChainingTowers
struct AKrakenTentacle_RemoveFromChainingTowers_Params
{
	class ADunDefTower_ChainLightning*                 Tower;                                                    // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.AddToChainingTowers
struct AKrakenTentacle_AddToChainingTowers_Params
{
	class ADunDefTower_ChainLightning*                 Tower;                                                    // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.AllowSuction
struct AKrakenTentacle_AllowSuction_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.ClientTakeRadiusDamage
struct AKrakenTentacle_ClientTakeRadiusDamage_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm)
	float                                              BaseDamage;                                               // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HurtOrigin;                                               // (Parm)
	unsigned long                                      bFullDamage;                                              // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
	float                                              DamageFalloffExponent;                                    // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefAtlantis.KrakenTentacle.ClientTakeDamage
struct AKrakenTentacle_ClientTakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class APawn*                                       InstigatorPawn;                                           // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefAtlantis.KrakenTentacle.GetHealthPercent
struct AKrakenTentacle_GetHealthPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetRemainingHealthBars
struct AKrakenTentacle_GetRemainingHealthBars_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.UpdateDamageFlashing
struct AKrakenTentacle_UpdateDamageFlashing_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.LocalTookDamage
struct AKrakenTentacle_LocalTookDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	struct FVector                                     atPosition;                                               // (Parm)
	class UClass*                                      fromDamageType;                                           // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.HealPctOfMaxHealth
struct AKrakenTentacle_HealPctOfMaxHealth_Params
{
	float                                              HealPct;                                                  // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	unsigned long                                      bShowFloatingNumbers;                                     // (OptionalParm, Parm)
};

// Function DunDefAtlantis.KrakenTentacle.ForceMoveActor
struct AKrakenTentacle_ForceMoveActor_Params
{
	class AActor*                                      Mover;                                                    // (Parm)
	struct FVector                                     NewLoc;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetOverrideTargetComponent
struct AKrakenTentacle_GetOverrideTargetComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function DunDefAtlantis.KrakenTentacle.EncroachingOn
struct AKrakenTentacle_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.Bump
struct AKrakenTentacle_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.Touch
struct AKrakenTentacle_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.SetDoDamageChecks
struct AKrakenTentacle_SetDoDamageChecks_Params
{
	unsigned long                                      bAllowDamage;                                             // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.GetHealth
struct AKrakenTentacle_GetHealth_Params
{
	unsigned long                                      bGetMax;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetMass
struct AKrakenTentacle_GetMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.AllowDarknessIgnorance
struct AKrakenTentacle_AllowDarknessIgnorance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.ForceFriendlyFire
struct AKrakenTentacle_ForceFriendlyFire_Params
{
	class AActor*                                      Target;                                                   // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetInterpolatedTargetingLocation
struct AKrakenTentacle_GetInterpolatedTargetingLocation_Params
{
	class AActor*                                      RequestedBy;                                              // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetTargetingLocation
struct AKrakenTentacle_GetTargetingLocation_Params
{
	class AActor*                                      RequestedBy;                                              // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.OnDestroy_RemoveFromTargetableList
struct AKrakenTentacle_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.OnPostBeginPlay_AddToTargetableList
struct AKrakenTentacle_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.UnregisterAttacker
struct AKrakenTentacle_UnregisterAttacker_Params
{
	class ADunDefEnemyController*                      forController;                                            // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.RegisterAttacker
struct AKrakenTentacle_RegisterAttacker_Params
{
	class ADunDefEnemyController*                      forController;                                            // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.GetAttackRangeOffset
struct AKrakenTentacle_GetAttackRangeOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.IgnoreFriendlyFireDamage
struct AKrakenTentacle_IgnoreFriendlyFireDamage_Params
{
	TScriptInterface<class UDunDefTargetableInterface> instigatorActor;                                          // (Parm)
	class AController*                                 OptionalController;                                       // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetTargetingTeam
struct AKrakenTentacle_GetTargetingTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetTowerTargetingDesirability
struct AKrakenTentacle_GetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.GetPlayerTargetingDesirability
struct AKrakenTentacle_GetPlayerTargetingDesirability_Params
{
	class ADunDefPlayerController*                     forController;                                            // (Parm)
	class ADunDefPlayer*                               ForPlayer;                                                // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.KrakenTentacle.DecreaseHealth
struct AKrakenTentacle_DecreaseHealth_Params
{
	int                                                Amount;                                                   // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.ForceWithDraw
struct AKrakenTentacle_ForceWithDraw_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.LeaveShell
struct AKrakenTentacle_LeaveShell_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.WithdrawIntoShell
struct AKrakenTentacle_WithdrawIntoShell_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.TakeDamage
struct AKrakenTentacle_TakeDamage_Params
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

// Function DunDefAtlantis.KrakenTentacle.SetWithDrawTime
struct AKrakenTentacle_SetWithDrawTime_Params
{
	float                                              ForceWithDraw;                                            // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.SetUpMesh
struct AKrakenTentacle_SetUpMesh_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.InitTentacle
struct AKrakenTentacle_InitTentacle_Params
{
	class ADunDefKraken*                               theKraken;                                                // (Parm)
	struct FName                                       BaseSocketName;                                           // (Parm)
	float                                              DifficultyHealthMultiplier;                               // (Parm)
};

// Function DunDefAtlantis.KrakenTentacle.PostBeginPlay
struct AKrakenTentacle_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.ExecReplicatedFunction
struct AKrakenTentacle_ExecReplicatedFunction_Params
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

// Function DunDefAtlantis.KrakenTentacle.ReplicatedEvent
struct AKrakenTentacle_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefAtlantis.DunDefKrakenController.StopInkCloud
struct ADunDefKrakenController_StopInkCloud_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnInkCloud
struct ADunDefKrakenController_SpawnInkCloud_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnGiantProjectile
struct ADunDefKrakenController_SpawnGiantProjectile_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnRightTentacleProjectiles
struct ADunDefKrakenController_SpawnRightTentacleProjectiles_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnLeftTentacleProjectiles
struct ADunDefKrakenController_SpawnLeftTentacleProjectiles_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.GetValidShootTargets
struct ADunDefKrakenController_GetValidShootTargets_Params
{
	TArray<class AActor*>                              ActorList;                                                // (Parm, OutParm, NeedCtorLink)
	float                                              MinRange;                                                 // (Parm)
	float                                              MaxRange;                                                 // (Parm)
	float                                              angleCheck;                                               // (OptionalParm, Parm)
};

// Function DunDefAtlantis.DunDefKrakenController.CheckCustomOpenMouthAttacks
struct ADunDefKrakenController_CheckCustomOpenMouthAttacks_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomClosedMouthAttacks
struct ADunDefKrakenController_CheckForCustomClosedMouthAttacks_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomAttacks
struct ADunDefKrakenController_CheckForCustomAttacks_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.CloseMouth
struct ADunDefKrakenController_CloseMouth_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTentacleBroughtOut
struct ADunDefKrakenController_NotifyTentacleBroughtOut_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTentecaleWithDrawn
struct ADunDefKrakenController_NotifyTentecaleWithDrawn_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.HandleTentacleDamage
struct ADunDefKrakenController_HandleTentacleDamage_Params
{
	class AActor*                                      newHitTarg;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefAtlantis.DunDefKrakenController.EndDash
struct ADunDefKrakenController_EndDash_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.UpdateDashPoint
struct ADunDefKrakenController_UpdateDashPoint_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.AddToDashHurtList
struct ADunDefKrakenController_AddToDashHurtList_Params
{
	class AActor*                                      DashedActor;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.EndMeleeSwing
struct ADunDefKrakenController_EndMeleeSwing_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.BiteStart
struct ADunDefKrakenController_BiteStart_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.EndBite
struct ADunDefKrakenController_EndBite_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.DoBiting
struct ADunDefKrakenController_DoBiting_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.AddToSwingHurtList
struct ADunDefKrakenController_AddToSwingHurtList_Params
{
	class AActor*                                      newEntry;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.ShouldDamage
struct ADunDefKrakenController_ShouldDamage_Params
{
	class AActor*                                      act;                                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.DoAttack
struct ADunDefKrakenController_DoAttack_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.GeneratePathToActor
struct ADunDefKrakenController_GeneratePathToActor_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	unsigned long                                      bAllowPartialPath;                                        // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.MoveAroundBlockade
struct ADunDefKrakenController_MoveAroundBlockade_Params
{
	class AActor*                                      blockadeActor;                                            // (Parm)
	float                                              BlockadeWidth;                                            // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	unsigned long                                      SkipBlockingCheck;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.NavActorReachable
struct ADunDefKrakenController_NavActorReachable_Params
{
	class AActor*                                      A;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.FindNearestNavPointTo
struct ADunDefKrakenController_FindNearestNavPointTo_Params
{
	class AActor*                                      A;                                                        // (Parm)
	unsigned long                                      bCheckVisible;                                            // (OptionalParm, Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.GetAttackRange
struct ADunDefKrakenController_GetAttackRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.ForceTentacleAttack
struct ADunDefKrakenController_ForceTentacleAttack_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.WantsHurtAnimation
struct ADunDefKrakenController_WantsHurtAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTakeHitEX
struct ADunDefKrakenController_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefAtlantis.DunDefKrakenController.Possess
struct ADunDefKrakenController_Possess_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
	unsigned long                                      bVehicleTransition;                                       // (Parm)
};

// Function DunDefAtlantis.DunDefSharkMan.IsCurrentlyPlayingAttackAnimation
struct ADunDefSharkMan_IsCurrentlyPlayingAttackAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHitEX
struct ADunDefSharkMan_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHit
struct ADunDefSharkMan_NotifyTakeHit_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function DunDefAtlantis.DunDefSharkMan.ClearChargeHurtList
struct ADunDefSharkMan_ClearChargeHurtList_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.AddToChargeHurtList
struct ADunDefSharkMan_AddToChargeHurtList_Params
{
	class ADunDefPlayer*                               Player;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.EndCharging
struct ADunDefSharkMan_EndCharging_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.SetChargingSpeed
struct ADunDefSharkMan_SetChargingSpeed_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.CheckForEncroachers
struct ADunDefSharkMan_CheckForEncroachers_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAbortAnimation
struct ADunDefSharkMan_PlaySharkManChargeAbortAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManHitWallAnimation
struct ADunDefSharkMan_PlaySharkManHitWallAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeFailAnimation
struct ADunDefSharkMan_PlaySharkManChargeFailAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.StopSharkManDizzyAnimation
struct ADunDefSharkMan_StopSharkManDizzyAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManDizzyAnimation
struct ADunDefSharkMan_PlaySharkManDizzyAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAnimation
struct ADunDefSharkMan_PlaySharkManChargeAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManWindupAnimation
struct ADunDefSharkMan_PlaySharkManWindupAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.Tick
struct ADunDefSharkMan_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefAtlantis.DunDefSharkMan.HandleMomentum
struct ADunDefSharkMan_HandleMomentum_Params
{
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
};

// Function DunDefAtlantis.DunDefSharkMan.SetSharkManArmBlend
struct ADunDefSharkMan_SetSharkManArmBlend_Params
{
	int                                                animAmount;                                               // (Parm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManAttackAnimation
struct ADunDefSharkMan_PlaySharkManAttackAnimation_Params
{
	int                                                AnimationIndex;                                           // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlayHurtAnimation
struct ADunDefSharkMan_PlayHurtAnimation_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function DunDefAtlantis.DunDefSharkMan.PlayAttackAnimation
struct ADunDefSharkMan_PlayAttackAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.GetEnemyTargetingDesirability
struct ADunDefSharkMan_GetEnemyTargetingDesirability_Params
{
	class AEngineNativeDunDefAIController*             forController;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.GetTowerTargetingDesirability
struct ADunDefSharkMan_GetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeSwingLocation
struct ADunDefSharkMan_GetMeleeSwingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeElbowLocation
struct ADunDefSharkMan_GetMeleeElbowLocation_Params
{
	TEnumAsByte<EFist>                                 fist;                                                     // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeFistLocation
struct ADunDefSharkMan_GetMeleeFistLocation_Params
{
	TEnumAsByte<EFist>                                 fist;                                                     // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkMan.GroundStrike
struct ADunDefSharkMan_GroundStrike_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeBothEnd
struct ADunDefSharkMan_MeleeBothEnd_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeBothStart
struct ADunDefSharkMan_MeleeBothStart_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeRightEnd
struct ADunDefSharkMan_MeleeRightEnd_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeRightStart
struct ADunDefSharkMan_MeleeRightStart_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftEnd
struct ADunDefSharkMan_MeleeLeftEnd_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftStart
struct ADunDefSharkMan_MeleeLeftStart_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.ExecReplicatedFunction
struct ADunDefSharkMan_ExecReplicatedFunction_Params
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

// Function DunDefAtlantis.DunDefSharkMan.PostBeginPlay
struct ADunDefSharkMan_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.NotifyTakeHitEX
struct ADunDefSharkmanController_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefAtlantis.DunDefSharkmanController.AbortCharge
struct ADunDefSharkmanController_AbortCharge_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.CheckTowerViability
struct ADunDefSharkmanController_CheckTowerViability_Params
{
	class ADunDefTower*                                Tower;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkmanController.CheckForCustomAttacks
struct ADunDefSharkmanController_CheckForCustomAttacks_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.GetReachCheckDuration
struct ADunDefSharkmanController_GetReachCheckDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkmanController.DoPositionPoll
struct ADunDefSharkmanController_DoPositionPoll_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.IsWinding
struct ADunDefSharkmanController_IsWinding_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkmanController.IsDistractedByCore
struct ADunDefSharkmanController_IsDistractedByCore_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToTowers
struct ADunDefSharkmanController_IsCloseToTowers_Params
{
	float                                              Radius;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToPlayers
struct ADunDefSharkmanController_IsCloseToPlayers_Params
{
	float                                              Radius;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkmanController.AddToSwingHurtList
struct ADunDefSharkmanController_AddToSwingHurtList_Params
{
	class AActor*                                      newEntry;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.DunDefSharkmanController.EndMeleeSwing
struct ADunDefSharkmanController_EndMeleeSwing_Params
{
	TEnumAsByte<EFist>                                 fist;                                                     // (Parm)
};

// Function DunDefAtlantis.DunDefSharkmanController.StartMeleeSwing
struct ADunDefSharkmanController_StartMeleeSwing_Params
{
	TEnumAsByte<EFist>                                 fist;                                                     // (Parm)
};

// Function DunDefAtlantis.PuzzlePieceActor.ScaleColor
struct APuzzlePieceActor_ScaleColor_Params
{
	float                                              DeltaTime;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefAtlantis.PuzzlePieceActor.TurnOnStartEmitter
struct APuzzlePieceActor_TurnOnStartEmitter_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayDemoEmitter
struct APuzzlePieceActor_PlayDemoEmitter_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.ShutOffVFX
struct APuzzlePieceActor_ShutOffVFX_Params
{
	float                                              lerpScale;                                                // (Parm)
};

// Function DunDefAtlantis.PuzzlePieceActor.SetColorLerp
struct APuzzlePieceActor_SetColorLerp_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm)
	unsigned long                                      bShouldScaleBack;                                         // (Parm)
	float                                              lerpScale;                                                // (Parm)
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayPuzzleCompletedVFX
struct APuzzlePieceActor_PlayPuzzleCompletedVFX_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayFailedVFX
struct APuzzlePieceActor_PlayFailedVFX_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.SetValidDeactivation
struct APuzzlePieceActor_SetValidDeactivation_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.SetValidTouching
struct APuzzlePieceActor_SetValidTouching_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.Bump
struct APuzzlePieceActor_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefAtlantis.PuzzlePieceActor.Touch
struct APuzzlePieceActor_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefAtlantis.PuzzlePieceActor.SetMyPuzzleRoom
struct APuzzlePieceActor_SetMyPuzzleRoom_Params
{
	class APuzzleRoomActor*                            newPuzzleRoom;                                            // (Parm)
};

// Function DunDefAtlantis.PuzzlePieceActor.PostBeginPlay
struct APuzzlePieceActor_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.OnModifyProperty
struct ARaisingWaterVolume_OnModifyProperty_Params
{
	class USeqAct_ModifyProperty*                      Action;                                                   // (Parm)
};

// Function DunDefAtlantis.RaisingWaterVolume.ClearPawnFXOverrides
struct ARaisingWaterVolume_ClearPawnFXOverrides_Params
{
	class ADunDefPawn*                                 thePawn;                                                  // (Parm)
};

// Function DunDefAtlantis.RaisingWaterVolume.SetPawnFXOverrides
struct ARaisingWaterVolume_SetPawnFXOverrides_Params
{
	class ADunDefPawn*                                 thePawn;                                                  // (Parm)
};

// Function DunDefAtlantis.RaisingWaterVolume.Tick
struct ARaisingWaterVolume_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefAtlantis.RaisingWaterVolume.ClearAirControl
struct ARaisingWaterVolume_ClearAirControl_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.UnTouch
struct ARaisingWaterVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefAtlantis.RaisingWaterVolume.Touch
struct ARaisingWaterVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefAtlantis.RaisingWaterVolume.ExecReplicatedFunction
struct ARaisingWaterVolume_ExecReplicatedFunction_Params
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
