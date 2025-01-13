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

// Function GameFramework.GameAIController.GetActionString
struct AGameAIController_GetActionString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameAIController.GeneratePathToLocation
struct AGameAIController_GeneratePathToLocation_Params
{
	struct FVector                                     Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	unsigned long                                      bAllowPartialPath;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAIController.GeneratePathToActor
struct AGameAIController_GeneratePathToActor_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	unsigned long                                      bAllowPartialPath;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAIController.SetDesiredRotation
struct AGameAIController_SetDesiredRotation_Params
{
	struct FRotator                                    TargetDesiredRotation;                                    // (Parm)
	unsigned long                                      InLockDesiredRotation;                                    // (OptionalParm, Parm)
	unsigned long                                      InUnlockWhenReached;                                      // (OptionalParm, Parm)
	float                                              InterpolationTime;                                        // (OptionalParm, Parm)
};

// Function GameFramework.GameAIController.AILog_Internal
struct AGameAIController_AILog_Internal_Params
{
	struct FString                                     LogText;                                                  // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       LogCategory;                                              // (OptionalParm, Parm)
	unsigned long                                      bForce;                                                   // (OptionalParm, Parm)
};

// Function GameFramework.GameAIController.RecordDemoAILog
struct AGameAIController_RecordDemoAILog_Params
{
	struct FString                                     LogText;                                                  // (Parm, CoerceParm, NeedCtorLink)
};

// Function GameFramework.GameAIController.Destroyed
struct AGameAIController_Destroyed_Params
{
};

// Function GameFramework.GameAIController.GetAICommandInStack
struct AGameAIController_GetAICommandInStack_Params
{
	class UClass*                                      InClass;                                                  // (Const, Parm)
	class UGameAICommand*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAIController.FindCommandOfClass
struct AGameAIController_FindCommandOfClass_Params
{
	class UClass*                                      SearchClass;                                              // (Parm)
	class UGameAICommand*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function GameFramework.GameAIController.DumpCommandStack
struct AGameAIController_DumpCommandStack_Params
{
};

// Function GameFramework.GameAIController.CheckCommandCount
struct AGameAIController_CheckCommandCount_Params
{
};

// Function GameFramework.GameAIController.GetActiveCommand
struct AGameAIController_GetActiveCommand_Params
{
	class UGameAICommand*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAIController.AbortCommand
struct AGameAIController_AbortCommand_Params
{
	class UGameAICommand*                              AbortCmd;                                                 // (Parm)
	class UClass*                                      AbortClass;                                               // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAIController.PopCommand
struct AGameAIController_PopCommand_Params
{
	class UGameAICommand*                              ToBePoppedCommand;                                        // (Parm)
};

// Function GameFramework.GameAIController.PushCommand
struct AGameAIController_PushCommand_Params
{
	class UGameAICommand*                              NewCommand;                                               // (Parm)
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
struct UGameAICommand_GetDebugOverheadText_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	TArray<struct FString>                             OutText;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function GameFramework.GameAICommand.DrawDebug
struct UGameAICommand_DrawDebug_Params
{
	class AHUD*                                        H;                                                        // (Parm)
	struct FName                                       Category;                                                 // (Parm)
};

// Function GameFramework.GameAICommand.GetDumpString
struct UGameAICommand_GetDumpString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameAICommand.Resumed
struct UGameAICommand_Resumed_Params
{
	struct FName                                       OldCommandName;                                           // (Parm)
};

// Function GameFramework.GameAICommand.Paused
struct UGameAICommand_Paused_Params
{
	class UGameAICommand*                              NewCommand;                                               // (Parm)
};

// Function GameFramework.GameAICommand.Popped
struct UGameAICommand_Popped_Params
{
};

// Function GameFramework.GameAICommand.Pushed
struct UGameAICommand_Pushed_Params
{
};

// Function GameFramework.GameAICommand.PostPopped
struct UGameAICommand_PostPopped_Params
{
};

// Function GameFramework.GameAICommand.PrePushed
struct UGameAICommand_PrePushed_Params
{
	class AGameAIController*                           AI;                                                       // (Parm)
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
struct UGameAICommand_AllowStateTransitionTo_Params
{
	struct FName                                       StateName;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAICommand.AllowTransitionTo
struct UGameAICommand_AllowTransitionTo_Params
{
	class UClass*                                      AttemptCommand;                                           // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAICommand.Tick
struct UGameAICommand_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
struct UGameAICommand_ShouldIgnoreNotifies_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAICommand.InternalTick
struct UGameAICommand_InternalTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GameFramework.GameAICommand.InternalResumed
struct UGameAICommand_InternalResumed_Params
{
	struct FName                                       OldCommandName;                                           // (Parm)
};

// Function GameFramework.GameAICommand.InternalPaused
struct UGameAICommand_InternalPaused_Params
{
	class UGameAICommand*                              NewCommand;                                               // (Parm)
};

// Function GameFramework.GameAICommand.InternalPopped
struct UGameAICommand_InternalPopped_Params
{
};

// Function GameFramework.GameAICommand.InternalPushed
struct UGameAICommand_InternalPushed_Params
{
};

// Function GameFramework.GameAICommand.InternalPrePushed
struct UGameAICommand_InternalPrePushed_Params
{
	class AGameAIController*                           AI;                                                       // (Parm)
};

// Function GameFramework.GameAICommand.InitCommand
struct UGameAICommand_InitCommand_Params
{
	class AGameAIController*                           AI;                                                       // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameAICommand.InitCommandUserActor
struct UGameAICommand_InitCommandUserActor_Params
{
	class AGameAIController*                           AI;                                                       // (Parm)
	class AActor*                                      UserActor;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
struct AGameCrowdAgent_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameCrowdAgent.GetDestString
struct AGameCrowdAgent_GetDestString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
struct AGameCrowdAgent_PostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     CameraPosition;                                           // (Parm)
	struct FVector                                     CameraDir;                                                // (Parm)
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
struct AGameCrowdAgent_NativePostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     CameraPosition;                                           // (Parm)
	struct FVector                                     CameraDir;                                                // (Parm)
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
struct AGameCrowdAgent_GeneratePathToActor_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	unsigned long                                      bAllowPartialPath;                                        // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
struct AGameCrowdAgent_InitNavigationHandle_Params
{
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
struct AGameCrowdAgent_OverlappedActorEvent_Params
{
	class AActor*                                      A;                                                        // (Parm)
};

// Function GameFramework.GameCrowdAgent.TakeDamage
struct AGameCrowdAgent_TakeDamage_Params
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

// Function GameFramework.GameCrowdAgent.FireDeathEvent
struct AGameCrowdAgent_FireDeathEvent_Params
{
};

// Function GameFramework.GameCrowdAgent.PlayDeath
struct AGameCrowdAgent_PlayDeath_Params
{
	struct FVector                                     KillMomentum;                                             // (Parm)
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
struct AGameCrowdAgent_UpdateIntermediatePoint_Params
{
	class AActor*                                      DestinationActor;                                         // (OptionalParm, Parm)
};

// Function GameFramework.GameCrowdAgent.CalcCamera
struct AGameCrowdAgent_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgent.IsIdle
struct AGameCrowdAgent_IsIdle_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
struct AGameCrowdAgent_SetCurrentBehavior_Params
{
	class UGameCrowdAgentBehavior*                     BehaviorArchetype;                                        // (Parm)
};

// Function GameFramework.GameCrowdAgent.StopBehavior
struct AGameCrowdAgent_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
struct AGameCrowdAgent_ActivateInstancedBehavior_Params
{
	class UGameCrowdAgentBehavior*                     NewBehaviorObject;                                        // (Parm)
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
struct AGameCrowdAgent_ActivateBehavior_Params
{
	class UGameCrowdAgentBehavior*                     NewBehaviorArchetype;                                     // (Parm)
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
struct AGameCrowdAgent_ResetSeePlayer_Params
{
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
struct AGameCrowdAgent_TryRandomBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
struct AGameCrowdAgent_NotifySeePlayer_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
struct AGameCrowdAgent_PlaySpawnBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
struct AGameCrowdAgent_HandlePotentialAgentEncounter_Params
{
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
struct AGameCrowdAgent_StopIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
struct AGameCrowdAgent_PlayIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
struct AGameCrowdAgent_OnPlayAgentAnimation_Params
{
	class USeqAct_PlayAgentAnimation*                  Action;                                                   // (Parm)
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
struct AGameCrowdAgent_InitializeAgent_Params
{
	class AActor*                                      SpawnLoc;                                                 // (Parm)
	class AGameCrowdAgent*                             AgentTemplate;                                            // (Parm)
	class UGameCrowdGroup*                             NewGroup;                                                 // (Parm)
	float                                              AgentWarmupTime;                                          // (Parm)
	unsigned long                                      bWarmupPosition;                                          // (Parm)
	unsigned long                                      bCheckWarmupVisibility;                                   // (Parm)
};

// Function GameFramework.GameCrowdAgent.SetLighting
struct AGameCrowdAgent_SetLighting_Params
{
	unsigned long                                      bEnableLightEnvironment;                                  // (Parm)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // (Parm)
	unsigned long                                      bCastShadows;                                             // (Parm)
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
struct AGameCrowdAgent_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function GameFramework.GameCrowdAgent.Destroyed
struct AGameCrowdAgent_Destroyed_Params
{
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
struct AGameCrowdAgent_ResetPooledAgent_Params
{
};

// Function GameFramework.GameCrowdAgent.KillAgent
struct AGameCrowdAgent_KillAgent_Params
{
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
struct AGameCrowdAgent_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
struct AGameCrowdAgent_SetMaxSpeed_Params
{
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
struct AGameCrowdAgent_SetCurrentDestination_Params
{
	class AGameCrowdDestination*                       NewDest;                                                  // (Parm)
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
struct AGameCrowdAgent_WaitForGroupMembers_Params
{
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
struct AGameCrowdAgent_PickBehaviorFrom_Params
{
	TArray<struct FBehaviorEntry>                      BehaviorList;                                             // (Parm, NeedCtorLink)
	struct FVector                                     BestCameraLoc;                                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgent.SetPanic
struct AGameCrowdAgent_SetPanic_Params
{
	class AActor*                                      PanicActor;                                               // (Parm)
	unsigned long                                      bNewPanic;                                                // (Parm)
};

// Function GameFramework.GameCrowdAgent.IsPanicked
struct AGameCrowdAgent_IsPanicked_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
struct AGameCrowdAgent_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
struct AGameCrowdAgentSkeletal_CreateAttachments_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
struct AGameCrowdAgentSkeletal_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
struct AGameCrowdAgentSkeletal_StopIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
struct AGameCrowdAgentSkeletal_PlayIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
struct AGameCrowdAgentSkeletal_ClearLatentAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
struct AGameCrowdAgentSkeletal_OnPlayAgentAnimation_Params
{
	class USeqAct_PlayAgentAnimation*                  Action;                                                   // (Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
struct AGameCrowdAgentSkeletal_SetRootMotion_Params
{
	unsigned long                                      bRootMotionEnabled;                                       // (Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
struct AGameCrowdAgentSkeletal_PlayDeath_Params
{
	struct FVector                                     KillMomentum;                                             // (Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
struct AGameCrowdAgentSkeletal_SetLighting_Params
{
	unsigned long                                      bEnableLightEnvironment;                                  // (Parm)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // (Parm)
	unsigned long                                      bCastShadows;                                             // (Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
struct AGameCrowdAgentSkeletal_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
struct UGameCrowdAgentBehavior_AllowBehaviorAt_Params
{
	class AGameCrowdDestination*                       Destination;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
struct UGameCrowdAgentBehavior_AllowThisDestination_Params
{
	class AGameCrowdDestination*                       Destination;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
struct UGameCrowdAgentBehavior_PropagateViralBehaviorTo_Params
{
	class AGameCrowdAgent*                             OtherAgent;                                               // (Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
struct UGameCrowdAgentBehavior_ActivatedBy_Params
{
	class AActor*                                      NewActionTarget;                                          // (Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
struct UGameCrowdAgentBehavior_GetDestinationActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
struct UGameCrowdAgentBehavior_ChangingDestination_Params
{
	class AGameCrowdDestination*                       NewDest;                                                  // (Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
struct UGameCrowdAgentBehavior_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
struct UGameCrowdAgentBehavior_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
struct UGameCrowdAgentBehavior_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
struct UGameCrowdAgentBehavior_InitBehavior_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
struct UGameCrowdAgentBehavior_HandleMovement_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
struct UGameCrowdAgentBehavior_FinishedTargetRotation_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
struct UGameCrowdAgentBehavior_CanBeUsedBy_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	struct FVector                                     cameraLoc;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
struct UGameCrowdAgentBehavior_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
struct UGameCrowdAgentBehavior_ShouldEndIdle_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
struct UGameCrowdBehavior_PlayAnimation_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
struct UGameCrowdBehavior_PlayAnimation_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
struct UGameCrowdBehavior_PlayAnimation_PlayAgentAnimationNow_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
struct UGameCrowdBehavior_PlayAnimation_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
struct UGameCrowdBehavior_PlayAnimation_SetSequenceOutput_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
struct UGameCrowdBehavior_PlayAnimation_FinishedTargetRotation_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
struct UGameCrowdBehavior_PlayAnimation_InitBehavior_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
struct UGameCrowdBehavior_RunFromPanic_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
struct UGameCrowdBehavior_RunFromPanic_AllowBehaviorAt_Params
{
	class AGameCrowdDestination*                       Destination;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
struct UGameCrowdBehavior_RunFromPanic_AllowThisDestination_Params
{
	class AGameCrowdDestination*                       Destination;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo
struct UGameCrowdBehavior_RunFromPanic_PropagateViralBehaviorTo_Params
{
	class AGameCrowdAgent*                             OtherAgent;                                               // (Parm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
struct UGameCrowdBehavior_RunFromPanic_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
struct UGameCrowdBehavior_RunFromPanic_InitBehavior_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
struct UGameCrowdBehavior_RunFromPanic_ActivatedBy_Params
{
	class AActor*                                      NewActionTarget;                                          // (Parm)
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
struct UGameCrowdBehavior_WaitForGroup_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
struct UGameCrowdBehavior_WaitForGroup_ShouldEndIdle_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
struct UGameCrowdBehavior_WaitForGroup_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
struct UGameCrowdBehavior_WaitForGroup_InitBehavior_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
struct UGameCrowdBehavior_WaitInQueue_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
struct UGameCrowdBehavior_WaitInQueue_ShouldEndIdle_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
struct UGameCrowdBehavior_WaitInQueue_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
struct UGameCrowdBehavior_WaitInQueue_GetDestinationActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
struct UGameCrowdBehavior_WaitInQueue_ChangingDestination_Params
{
	class AGameCrowdDestination*                       NewDest;                                                  // (Parm)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
struct UGameCrowdBehavior_WaitInQueue_HandleMovement_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
struct UGameCrowdGroup_UpdateDestinations_Params
{
	class AGameCrowdDestination*                       NewDestination;                                           // (Parm)
};

// Function GameFramework.GameCrowdGroup.RemoveMember
struct UGameCrowdGroup_RemoveMember_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdGroup.AddMember
struct UGameCrowdGroup_AddMember_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
struct AGameCrowdInteractionPoint_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function GameFramework.GameCrowdDestination.GeneratePathToActor
struct AGameCrowdDestination_GeneratePathToActor_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	class AActor*                                      Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	unsigned long                                      bAllowPartialPath;                                        // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdDestination.InitNavigationHandle
struct AGameCrowdDestination_InitNavigationHandle_Params
{
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
struct AGameCrowdDestination_GetSpawnPosition_Params
{
	class USeqAct_GameCrowdSpawner*                    Spawner;                                                  // (Parm)
	struct FVector                                     SpawnPos;                                                 // (Parm, OutParm)
	struct FRotator                                    SpawnRot;                                                 // (Parm, OutParm)
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
struct AGameCrowdDestination_AllowableDestinationFor_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdDestination.AtCapacity
struct AGameCrowdDestination_AtCapacity_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
struct AGameCrowdDestination_IncrementCustomerCount_Params
{
	class AGameCrowdAgent*                             ArrivingAgent;                                            // (Parm)
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
struct AGameCrowdDestination_DecrementCustomerCount_Params
{
	class AGameCrowdAgent*                             DepartingAgent;                                           // (Parm)
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
struct AGameCrowdDestination_PickNewDestinationFor_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	unsigned long                                      bIgnoreRestrictions;                                      // (Parm)
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
struct AGameCrowdDestination_ReachedDestination_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
struct AGameCrowdDestination_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
struct AGameCrowdDestination_ReachedByAgent_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	struct FVector                                     TestPosition;                                             // (Parm)
	unsigned long                                      bTestExactly;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdDestination.GetSpreadValue
struct AGameCrowdDestination_GetSpreadValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdDestination.NotifyPathChanged
struct AGameCrowdDestination_NotifyPathChanged_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
struct AGameCrowdDestinationQueuePoint_HasCustomer_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
struct AGameCrowdDestinationQueuePoint_ClearQueue_Params
{
	class AGameCrowdAgent*                             OldCustomer;                                              // (Parm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
struct AGameCrowdDestinationQueuePoint_AddCustomer_Params
{
	class AGameCrowdAgent*                             NewCustomer;                                              // (Parm)
	class AGameCrowdInteractionPoint*                  PreviousPosition;                                         // (Parm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
struct AGameCrowdDestinationQueuePoint_ActuallyAdvance_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
struct AGameCrowdDestinationQueuePoint_AdvanceCustomerTo_Params
{
	class AGameCrowdInteractionPoint*                  FrontPosition;                                            // (Parm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
struct AGameCrowdDestinationQueuePoint_ReachedDestination_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
struct AGameCrowdDestinationQueuePoint_HasSpace_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
struct AGameCrowdDestinationQueuePoint_QueueReachedBy_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	struct FVector                                     TestPosition;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdForcePoint.AppliedForce
struct AGameCrowdForcePoint_AppliedForce_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdForcePoint.UnTouch
struct AGameCrowdForcePoint_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function GameFramework.GameCrowdForcePoint.Touch
struct AGameCrowdForcePoint_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function GameFramework.GameCrowdAttractor.AppliedForce
struct AGameCrowdAttractor_AppliedForce_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdRepulsor.AppliedForce
struct AGameCrowdRepulsor_AppliedForce_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
struct USeqAct_GameCrowdSpawner_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent
struct USeqAct_GameCrowdSpawner_CreateNewAgent_Params
{
	class AActor*                                      SpawnLoc;                                                 // (Parm)
	class AGameCrowdAgent*                             AgentTemplate;                                            // (Parm)
	class UGameCrowdGroup*                             NewGroup;                                                 // (Parm)
	class AGameCrowdAgent*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent
struct USeqAct_GameCrowdSpawner_SpawnAgent_Params
{
	class AActor*                                      SpawnLoc;                                                 // (Parm)
	class AGameCrowdAgent*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning
struct USeqAct_GameCrowdSpawner_UpdateSpawning_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents
struct USeqAct_GameCrowdSpawner_KillAgents_Params
{
};

// Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars
struct USeqAct_GameCrowdSpawner_CacheSpawnerVars_Params
{
};

// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent
struct USeqAct_GameCrowdSpawner_SpawnedAgent_Params
{
	class AGameCrowdAgent*                             NewAgent;                                                 // (Parm)
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
struct AGameCrowdPopulationManager_CreateNewAgent_Params
{
	class AGameCrowdDestination*                       SpawnLoc;                                                 // (Parm)
	class AGameCrowdAgent*                             AgentTemplate;                                            // (Parm)
	class UGameCrowdGroup*                             NewGroup;                                                 // (Parm)
	class AGameCrowdAgent*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
struct AGameCrowdPopulationManager_SpawnAgent_Params
{
	class AGameCrowdDestination*                       SpawnLoc;                                                 // (Parm)
	class AGameCrowdAgent*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
struct AGameCrowdPopulationManager_ValidateSpawnAt_Params
{
	class AGameCrowdDestination*                       Candidate;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.InitializeSpawnPoints
struct AGameCrowdPopulationManager_InitializeSpawnPoints_Params
{
	struct FVector                                     ViewLocation;                                             // (Parm)
	struct FVector                                     PredictionLocation;                                       // (Parm)
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
struct AGameCrowdPopulationManager_AddPrioritizedSpawnPoint_Params
{
	class AGameCrowdDestination*                       GCD;                                                      // (Parm)
	struct FVector                                     ViewLocation;                                             // (Parm)
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
struct AGameCrowdPopulationManager_AnalyzeSpawnPoints_Params
{
	int                                                StartIndex;                                               // (Parm)
	int                                                StopIndex;                                                // (Parm)
	struct FVector                                     ViewLocation;                                             // (Parm)
	struct FVector                                     PredictionLocation;                                       // (Parm)
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
struct AGameCrowdPopulationManager_PrioritizeSpawnPoints_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
struct AGameCrowdPopulationManager_PickSpawnPoint_Params
{
	class AGameCrowdDestination*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.Tick
struct AGameCrowdPopulationManager_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
struct AGameCrowdPopulationManager_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function GameFramework.GameCrowdPopulationManager.AddToAgentPool
struct AGameCrowdPopulationManager_AddToAgentPool_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
struct AGameCrowdPopulationManager_AgentDestroyed_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdPopulationManager.OnGameCrowdPopulationManagerToggle
struct AGameCrowdPopulationManager_OnGameCrowdPopulationManagerToggle_Params
{
	class USeqAct_GameCrowdPopulationManagerToggle*    inAction;                                                 // (Parm)
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
struct AGameCrowdPopulationManager_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
struct AGameCrowdReplicationActor_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function GameFramework.GameDamageType.HandleDamageFX
struct UGameDamageType_HandleDamageFX_Params
{
	class AGamePawn*                                   DamagedPawn;                                              // (Parm)
	struct FTakeHitInfo                                HitInfo;                                                  // (Const, Parm, OutParm)
};

// Function GameFramework.GameDamageType.ShouldHeadShotGib
struct UGameDamageType_ShouldHeadShotGib_Params
{
	class APawn*                                       TestPawn;                                                 // (Parm)
	class APawn*                                       Instigator;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameDamageType.PlayExtraDamageSound
struct UGameDamageType_PlayExtraDamageSound_Params
{
	class APawn*                                       VictimPawn;                                               // (Parm)
};

// Function GameFramework.GameDamageType.IsScriptedDamageType
struct UGameDamageType_IsScriptedDamageType_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameDamageType.ShouldPlayForceFeedback
struct UGameDamageType_ShouldPlayForceFeedback_Params
{
	class APawn*                                       DamagedPawn;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameDamageType.HandleDeadPlayer
struct UGameDamageType_HandleDeadPlayer_Params
{
	class AGamePlayerController*                       Player;                                                   // (Parm)
};

// Function GameFramework.GameDamageType.HandleKilledPawn
struct UGameDamageType_HandleKilledPawn_Params
{
	class APawn*                                       KilledPawn;                                               // (Parm)
	class APawn*                                       Instigator;                                               // (Parm)
};

// Function GameFramework.GameDamageType.HandleDamagedPawn
struct UGameDamageType_HandleDamagedPawn_Params
{
	class APawn*                                       DamagedPawn;                                              // (Parm)
	class APawn*                                       Instigator;                                               // (Parm)
	int                                                DamageAmt;                                                // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function GameFramework.GameDamageType.ModifyDamage
struct UGameDamageType_ModifyDamage_Params
{
	class APawn*                                       Victim;                                                   // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	int                                                out_Damage;                                               // (Parm, OutParm)
	struct FVector                                     out_Momentum;                                             // (Parm, OutParm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm)
};

// Function GameFramework.GameDamageType.ShouldGib
struct UGameDamageType_ShouldGib_Params
{
	class APawn*                                       TestPawn;                                                 // (Parm)
	class APawn*                                       Instigator;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
struct AGameExplosionActor_ChooseCameraShake_Params
{
	struct FVector                                     Epicenter;                                                // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class UCameraShake*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
struct AGameExplosionActor_DoExplosionCameraEffects_Params
{
};

// Function GameFramework.GameExplosionActor.Tick
struct AGameExplosionActor_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
struct AGameExplosionActor_DoExplosionDamage_Params
{
};

// Function GameFramework.GameExplosionActor.DrawDebug
struct AGameExplosionActor_DrawDebug_Params
{
};

// Function GameFramework.GameExplosionActor.Explode
struct AGameExplosionActor_Explode_Params
{
	class UGameExplosion*                              NewExplosionTemplate;                                     // (Parm)
	struct FVector                                     Direction;                                                // (OptionalParm, Parm)
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
struct AGameExplosionActor_SpawnExplosionFogVolume_Params
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
struct AGameExplosionActor_SpawnExplosionDecal_Params
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
struct AGameExplosionActor_SpawnExplosionParticleSystem_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm)
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
struct AGameExplosionActor_UpdateExplosionTemplateWithPerMaterialFX_Params
{
	class UPhysicalMaterial*                           PhysMaterial;                                             // (Parm)
};

// Function GameFramework.GameExplosionActor.KnockdownPawn
struct AGameExplosionActor_KnockdownPawn_Params
{
	class AGamePawn*                                   Victim;                                                   // (Parm)
	float                                              DistFromExplosion;                                        // (Parm)
};

// Function GameFramework.GameExplosionActor.CringePawn
struct AGameExplosionActor_CringePawn_Params
{
	class AGamePawn*                                   Victim;                                                   // (Parm)
	float                                              DistFromExplosion;                                        // (Parm)
};

// Function GameFramework.GameExplosionActor.DoCringesAndKnockdowns
struct AGameExplosionActor_DoCringesAndKnockdowns_Params
{
};

// Function GameFramework.GameExplosionActor.ShouldDoCringeFor
struct AGameExplosionActor_ShouldDoCringeFor_Params
{
	class AGamePawn*                                   Victim;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameExplosionActor.DoBreakFracturedMeshes
struct AGameExplosionActor_DoBreakFracturedMeshes_Params
{
	struct FVector                                     ExploOrigin;                                              // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	float                                              RBStrength;                                               // (Parm)
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function GameFramework.GameExplosionActor.HurtExplosion
struct AGameExplosionActor_HurtExplosion_Params
{
	float                                              BaseDamage;                                               // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	float                                              DamageFalloffExp;                                         // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              MomentumScale;                                            // (Parm)
	struct FVector                                     ExploOrigin;                                              // (Parm)
	class AActor*                                      IgnoredActor;                                             // (Parm)
	class UClass*                                      ActorClassToIgnoreForDamage;                              // (Parm)
	class AController*                                 InstigatedByController;                                   // (Parm)
	unsigned long                                      bDoFullDamage;                                            // (Parm)
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
struct AGameExplosionActor_IsBehindExplosion_Params
{
	class AActor*                                      A;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
struct AGameExplosionActor_DoFullDamageToActor_Params
{
	class AActor*                                      Victim;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
struct AGameExplosionActor_GetPhysicalMaterial_Params
{
	class UPhysicalMaterial*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
struct AGameExplosionActor_PreBeginPlay_Params
{
};

// Function GameFramework.MobileHUD.ResetMobileInputConfig
struct AMobileHUD_ResetMobileInputConfig_Params
{
};

// Function GameFramework.MobileHUD.NextMobileInputConfig
struct AMobileHUD_NextMobileInputConfig_Params
{
};

// Function GameFramework.MobileHUD.DrawInputOverlays
struct AMobileHUD_DrawInputOverlays_Params
{
};

// Function GameFramework.MobileHUD.PostRender
struct AMobileHUD_PostRender_Params
{
};

// Function GameFramework.MobileHUD.PostBeginPlay
struct AMobileHUD_PostBeginPlay_Params
{
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
struct AGamePawn_ReattachMeshWithoutBeingSeen_Params
{
};

// Function GameFramework.GamePawn.ReattachMesh
struct AGamePawn_ReattachMesh_Params
{
};

// Function GameFramework.GamePawn.UpdateShadowSettings
struct AGamePawn_UpdateShadowSettings_Params
{
	unsigned long                                      bInWantShadow;                                            // (Parm)
};

// Function GameFramework.GamePawn.Cringe
struct AGamePawn_Cringe_Params
{
	float                                              Duration;                                                 // (OptionalParm, Parm)
};

// Function GameFramework.GamePawn.ServerKnockdown
struct AGamePawn_ServerKnockdown_Params
{
	struct FVector                                     RBLinearVelocity;                                         // (OptionalParm, Parm)
	struct FVector                                     RBAngularVelocity;                                        // (OptionalParm, Parm)
	struct FVector                                     RadialOrigin;                                             // (OptionalParm, Parm)
	float                                              RadialRadius;                                             // (OptionalParm, Parm)
	float                                              RadialStrength;                                           // (OptionalParm, Parm)
	struct FVector                                     PointImpulse;                                             // (OptionalParm, Parm)
	struct FVector                                     PointImpulsePosition;                                     // (OptionalParm, Parm)
	struct FName                                       PointImpulseBoneName;                                     // (OptionalParm, Parm)
};

// Function GameFramework.GamePawn.GetTargetFrictionCylinder
struct AGamePawn_GetTargetFrictionCylinder_Params
{
	float                                              CylinderRadius;                                           // (Parm, OutParm)
	float                                              CylinderHeight;                                           // (Parm, OutParm)
};

// Function GameFramework.GamePlayerController.ClientColorFade
struct AGamePlayerController_ClientColorFade_Params
{
	struct FColor                                      FadeColor;                                                // (Parm)
	unsigned char                                      FromAlpha;                                                // (Parm)
	unsigned char                                      ToAlpha;                                                  // (Parm)
	float                                              FadeTime;                                                 // (Parm)
};

// Function GameFramework.GamePlayerController.WarmupPause
struct AGamePlayerController_WarmupPause_Params
{
	unsigned long                                      bDesiredPauseState;                                       // (Parm)
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
struct AGamePlayerController_CanUnpauseWarmup_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
struct AGamePlayerController_GetCurrentMovie_Params
{
	struct FString                                     MovieName;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function GameFramework.GamePlayerController.ClientStopMovie
struct AGamePlayerController_ClientStopMovie_Params
{
	float                                              DelayInSeconds;                                           // (Parm)
	unsigned long                                      bAllowMovieToFinish;                                      // (Parm)
	unsigned long                                      bForceStopNonSkippable;                                   // (Parm)
	unsigned long                                      bForceStopLoadingMovie;                                   // (Parm)
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
struct AGamePlayerController_ClientPlayMovie_Params
{
	struct FString                                     MovieName;                                                // (Parm, NeedCtorLink)
	int                                                InStartOfRenderingMovieFrame;                             // (OptionalParm, Parm)
	int                                                InEndOfRenderingMovieFrame;                               // (OptionalParm, Parm)
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
struct AGamePlayerController_KeepPlayingLoadingMovie_Params
{
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
struct AGamePlayerController_ShowLoadingMovie_Params
{
	unsigned long                                      bShowMovie;                                               // (Parm)
	unsigned long                                      bPauseAfterHide;                                          // (OptionalParm, Parm)
	float                                              PauseDuration;                                            // (OptionalParm, Parm)
	float                                              KeepPlayingDuration;                                      // (OptionalParm, Parm)
	unsigned long                                      bOverridePreviousDelays;                                  // (OptionalParm, Parm)
};

// Function GameFramework.GamePlayerController.GetCurrentSoundMode
struct AGamePlayerController_GetCurrentSoundMode_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GamePlayerController.SetSoundMode
struct AGamePlayerController_SetSoundMode_Params
{
	struct FName                                       InSoundModeName;                                          // (Parm)
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
struct AGamePlayerController_DoForceFeedbackForScreenShake_Params
{
	class UCameraShake*                                ShakeData;                                                // (Parm)
	float                                              Scale;                                                    // (Parm)
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
struct AGamePlayerController_NotifyCrowdAgentInRadius_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
struct AGamePlayerController_NotifyCrowdAgentRefresh_Params
{
};

// Function GameFramework.GamePlayerController.CrowdDebug
struct AGamePlayerController_CrowdDebug_Params
{
	unsigned long                                      bEnabled;                                                 // (Parm)
};

// Function GameFramework.GamePlayerController.CrowdToggle
struct AGamePlayerController_CrowdToggle_Params
{
};

// Function GameFramework.GamePlayerController.CrowdFocus
struct AGamePlayerController_CrowdFocus_Params
{
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
struct AGamePlayerController_GetUIPlayerIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
struct UNavMeshGoal_OutOfViewFrom_Recycle_Params
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
struct UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params
{
	class UNavigationHandle*                           NavHandle;                                                // (Parm)
	struct FVector                                     InOutOfViewLocation;                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
struct UNavMeshGoal_OutOfViewFrom_RecycleNative_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params
{
	class UNavigationHandle*                           NavHandle;                                                // (Parm)
	struct FVector                                     InLocation;                                               // (Const, Parm)
	struct FRotator                                    InRotation;                                               // (Const, Parm)
	float                                              InDistanceToCheck;                                        // (Const, Parm)
	TArray<struct FVector>                             InLocationsToCheck;                                       // (Const, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
struct USeqAct_GameCrowdPopulationManagerToggle_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FindPopMgrTarget
struct USeqAct_GameCrowdPopulationManagerToggle_FindPopMgrTarget_Params
{
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
struct USeqAct_PlayAgentAnimation_SetCurrentAnimationActionFor_Params
{
	class AGameCrowdAgentSkeletal*                     Agent;                                                    // (Parm)
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
struct USeqAct_PlayAgentAnimation_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
struct UGameCameraBase_ModifyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PP;                                                       // (Parm, OutParm)
};

// Function GameFramework.GameCameraBase.Init
struct UGameCameraBase_Init_Params
{
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
struct UGameCameraBase_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class AActor*                                      ViewTarget;                                               // (Parm)
	struct FRotator                                    out_ViewRotation;                                         // (Parm, OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (Parm, OutParm)
};

// Function GameFramework.GameCameraBase.UpdateCamera
struct UGameCameraBase_UpdateCamera_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	struct FTViewTarget                                OutVT;                                                    // (Parm, OutParm)
};

// Function GameFramework.GameCameraBase.ResetInterpolation
struct UGameCameraBase_ResetInterpolation_Params
{
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
struct UGameCameraBase_OnBecomeInActive_Params
{
	class UGameCameraBase*                             NewCamera;                                                // (Parm)
};

// Function GameFramework.GameCameraBase.OnBecomeActive
struct UGameCameraBase_OnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                                // (Parm)
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
struct UGameThirdPersonCamera_ResetInterpolation_Params
{
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
struct UGameThirdPersonCamera_ModifyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PP;                                                       // (Parm, OutParm)
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
struct UGameThirdPersonCamera_OnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                                // (Parm)
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
struct UGameThirdPersonCamera_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class AActor*                                      ViewTarget;                                               // (Parm)
	struct FRotator                                    out_ViewRotation;                                         // (Parm, OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (Parm, OutParm)
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
struct UGameThirdPersonCamera_UpdateCameraMode_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
struct UGameThirdPersonCamera_FindBestCameraMode_Params
{
	class APawn*                                       P;                                                        // (Parm)
	class UGameThirdPersonCameraMode*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
struct UGameThirdPersonCamera_AdjustFocusPointInterpolation_Params
{
	struct FRotator                                    Delta;                                                    // (Parm)
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
struct UGameThirdPersonCamera_GetActualFocusLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
struct UGameThirdPersonCamera_UpdateFocusPoint_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
struct UGameThirdPersonCamera_ClearFocusPoint_Params
{
	unsigned long                                      bLeaveCameraRotation;                                     // (OptionalParm, Parm)
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
struct UGameThirdPersonCamera_GetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
struct UGameThirdPersonCamera_SetFocusOnActor_Params
{
	class AActor*                                      FocusActor;                                               // (Parm)
	struct FName                                       FocusBoneName;                                            // (Parm)
	struct FVector2D                                   InterpSpeedRange;                                         // (Parm)
	struct FVector2D                                   InFocusFOV;                                               // (Parm)
	float                                              CameraFOV;                                                // (OptionalParm, Parm)
	unsigned long                                      bAlwaysFocus;                                             // (OptionalParm, Parm)
	unsigned long                                      bAdjustCamera;                                            // (OptionalParm, Parm)
	unsigned long                                      bIgnoreTrace;                                             // (OptionalParm, Parm)
	float                                              FocusPitchOffsetDeg;                                      // (OptionalParm, Parm)
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
struct UGameThirdPersonCamera_SetFocusOnLoc_Params
{
	struct FVector                                     FocusWorldLoc;                                            // (Parm)
	struct FVector2D                                   InterpSpeedRange;                                         // (Parm)
	struct FVector2D                                   InFocusFOV;                                               // (Parm)
	float                                              CameraFOV;                                                // (OptionalParm, Parm)
	unsigned long                                      bAlwaysFocus;                                             // (OptionalParm, Parm)
	unsigned long                                      bAdjustCamera;                                            // (OptionalParm, Parm)
	unsigned long                                      bIgnoreTrace;                                             // (OptionalParm, Parm)
	float                                              FocusPitchOffsetDeg;                                      // (OptionalParm, Parm)
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
struct UGameThirdPersonCamera_AdjustTurn_Params
{
	int                                                AngleOffset;                                              // (Parm)
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
struct UGameThirdPersonCamera_EndTurn_Params
{
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
struct UGameThirdPersonCamera_BeginTurn_Params
{
	int                                                StartAngle;                                               // (Parm)
	int                                                EndAngle;                                                 // (Parm)
	float                                              TimeSec;                                                  // (Parm)
	float                                              DelaySec;                                                 // (OptionalParm, Parm)
	unsigned long                                      bAlignTargetWhenFinished;                                 // (OptionalParm, Parm)
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
struct UGameThirdPersonCamera_PlayerUpdateCamera_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	struct FTViewTarget                                OutVT;                                                    // (Parm, OutParm)
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
struct UGameThirdPersonCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	struct FTViewTarget                                OutVT;                                                    // (Parm, OutParm)
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
struct UGameThirdPersonCamera_GetDesiredFOV_Params
{
	class APawn*                                       ViewedPawn;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.Init
struct UGameThirdPersonCamera_Init_Params
{
};

// Function GameFramework.GameThirdPersonCamera.Reset
struct UGameThirdPersonCamera_Reset_Params
{
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
struct UGameThirdPersonCamera_CreateCameraMode_Params
{
	class UClass*                                      ModeClass;                                                // (Parm)
	class UGameThirdPersonCameraMode*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
struct AGamePlayerCamera_AdjustFOVForViewport_Params
{
	float                                              inHorizFOV;                                               // (Parm)
	class APawn*                                       CameraTargetPawn;                                         // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
struct AGamePlayerCamera_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FRotator                                    out_ViewRotation;                                         // (Parm, OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (Parm, OutParm)
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
struct AGamePlayerCamera_ResetInterpolation_Params
{
};

// Function GameFramework.GamePlayerCamera.SetColorScale
struct AGamePlayerCamera_SetColorScale_Params
{
	struct FVector                                     NewColorScale;                                            // (Parm)
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
struct AGamePlayerCamera_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
struct AGamePlayerCamera_UpdateCameraLensEffects_Params
{
	struct FTViewTarget                                OutVT;                                                    // (Const, Parm, OutParm)
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
struct AGamePlayerCamera_UpdateViewTarget_Params
{
	struct FTViewTarget                                OutVT;                                                    // (Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
struct AGamePlayerCamera_ShouldConstrainAspectRatio_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
struct AGamePlayerCamera_FindBestCameraType_Params
{
	class AActor*                                      CameraTarget;                                             // (Parm)
	class UGameCameraBase*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GamePlayerCamera.Reset
struct AGamePlayerCamera_Reset_Params
{
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
struct AGamePlayerCamera_PostBeginPlay_Params
{
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
struct AGamePlayerCamera_CacheLastTargetBaseInfo_Params
{
	class AActor*                                      TargetBase;                                               // (Parm)
};

// Function GameFramework.GamePlayerCamera.CreateCamera
struct AGamePlayerCamera_CreateCamera_Params
{
	class UClass*                                      CameraClass;                                              // (Parm)
	class UGameCameraBase*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
struct UGameThirdPersonCameraMode_SetViewOffset_Params
{
	struct FViewOffsetData                             NewViewOffset;                                            // (Const, Parm, OutParm)
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
struct UGameThirdPersonCameraMode_ModifyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PP;                                                       // (Parm, OutParm)
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
struct UGameThirdPersonCameraMode_UpdatePostProcess_Params
{
	struct FTViewTarget                                VT;                                                       // (Const, Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
struct UGameThirdPersonCameraMode_DOFTrace_Params
{
	class AActor*                                      TraceOwner;                                               // (Parm)
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     EndTrace;                                                 // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
struct UGameThirdPersonCameraMode_GetDOFFocusLoc_Params
{
	class AActor*                                      TraceOwner;                                               // (Parm)
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     EndTrace;                                                 // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
struct UGameThirdPersonCameraMode_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class AActor*                                      ViewTarget;                                               // (Parm)
	struct FRotator                                    out_ViewRotation;                                         // (Parm, OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (Parm, OutParm)
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
struct UGameThirdPersonCameraMode_SetFocusPoint_Params
{
	class APawn*                                       ViewedPawn;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
struct UGameThirdPersonCameraMode_GetCameraWorstCaseLoc_Params
{
	class APawn*                                       TargetPawn;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
struct UGameThirdPersonCameraMode_GetDesiredFOV_Params
{
	class APawn*                                       ViewedPawn;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
struct UGameThirdPersonCameraMode_AdjustViewOffset_Params
{
	class APawn*                                       P;                                                        // (Parm)
	struct FVector                                     Offset;                                                   // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
struct UGameThirdPersonCameraMode_OnBecomeInActive_Params
{
	class APawn*                                       TargetPawn;                                               // (Parm)
	class UGameThirdPersonCameraMode*                  NewMode;                                                  // (Parm)
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
struct UGameThirdPersonCameraMode_OnBecomeActive_Params
{
	class APawn*                                       TargetPawn;                                               // (Parm)
	class UGameThirdPersonCameraMode*                  PrevMode;                                                 // (Parm)
};

// Function GameFramework.GameDecalManager.SpawnDecalMinimal
struct AGameDecalManager_SpawnDecalMinimal_Params
{
	struct FVector                                     DecalLocation;                                            // (Const, Parm, OutParm)
	float                                              InDecalLifeSpan;                                          // (Const, Parm)
	float                                              InCanSpawnDistance;                                       // (Const, Parm)
	class UGameDecal*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal
struct AGameDecalManager_IsTooCloseToActiveDecal_Params
{
	struct FVector                                     DecalLocation;                                            // (Const, Parm, OutParm)
	float                                              InCanSpawnDistance;                                       // (Const, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameParticleEventManager.HandleParticleModuleEventSendToGame
struct AGameParticleEventManager_HandleParticleModuleEventSendToGame_Params
{
	class UParticleModuleEventSendToGame*              InEvent;                                                  // (Parm)
	struct FVector                                     InCollideDirection;                                       // (Const, Parm, OutParm)
	struct FVector                                     InHitLocation;                                            // (Const, Parm, OutParm)
	struct FVector                                     InHitNormal;                                              // (Const, Parm, OutParm)
	struct FName                                       InBoneName;                                               // (Const, Parm, OutParm)
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
struct UGameSpecialMove_RelativeToWorldOffset_Params
{
	struct FRotator                                    InRotation;                                               // (Parm)
	struct FVector                                     RelativeSpaceOffset;                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
struct UGameSpecialMove_WorldToRelativeOffset_Params
{
	struct FRotator                                    InRotation;                                               // (Parm)
	struct FVector                                     WorldSpaceOffset;                                         // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
struct UGameSpecialMove_ForcePawnRotation_Params
{
	class APawn*                                       P;                                                        // (Parm)
	struct FRotator                                    NewRotation;                                              // (Parm)
};

// Function GameFramework.GameSpecialMove.MessageEvent
struct UGameSpecialMove_MessageEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
struct UGameSpecialMove_ResetFacePreciseRotation_Params
{
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
struct UGameSpecialMove_ReachedPrecisePosition_Params
{
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
struct UGameSpecialMove_SetFacePreciseRotation_Params
{
	struct FRotator                                    RotationToFace;                                           // (Parm)
	float                                              InterpolationTime;                                        // (Parm)
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
struct UGameSpecialMove_SetReachPreciseDestination_Params
{
	struct FVector                                     DestinationToReach;                                       // (Parm)
	unsigned long                                      bCancel;                                                  // (OptionalParm, Parm)
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
struct UGameSpecialMove_ShouldReplicate_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
struct UGameSpecialMove_SpecialMoveFlagsUpdated_Params
{
};

// Function GameFramework.GameSpecialMove.Tick
struct UGameSpecialMove_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
struct UGameSpecialMove_SpecialMoveEnded_Params
{
	struct FName                                       PrevMove;                                                 // (Parm)
	struct FName                                       NextMove;                                                 // (Parm)
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
struct UGameSpecialMove_SpecialMoveStarted_Params
{
	unsigned long                                      bForced;                                                  // (Parm)
	struct FName                                       PrevMove;                                                 // (Parm)
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
struct UGameSpecialMove_InternalCanDoSpecialMove_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
struct UGameSpecialMove_CanDoSpecialMove_Params
{
	unsigned long                                      bForceCheck;                                              // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
struct UGameSpecialMove_CanOverrideSpecialMove_Params
{
	struct FName                                       InMove;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
struct UGameSpecialMove_CanOverrideMoveWith_Params
{
	struct FName                                       NewMove;                                                  // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.CanChainMove
struct UGameSpecialMove_CanChainMove_Params
{
	struct FName                                       NextMove;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
struct UGameSpecialMove_ExtractSpecialMoveFlags_Params
{
	int                                                Flags;                                                    // (Parm)
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
struct UGameSpecialMove_InitSpecialMoveFlags_Params
{
	int                                                out_Flags;                                                // (Parm, OutParm)
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
struct UGameSpecialMove_InitSpecialMove_Params
{
	class AGamePawn*                                   inPawn;                                                   // (Parm)
	struct FName                                       InHandle;                                                 // (Parm)
};

// Function GameFramework.GameCrowdSpawnerInterface.AddToAgentPool
struct UGameCrowdSpawnerInterface_AddToAgentPool_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
struct UGameCrowdSpawnerInterface_AgentDestroyed_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (Parm)
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
struct UGameCrowdSpawnInterface_GetSpawnPosition_Params
{
	class USeqAct_GameCrowdSpawner*                    Spawner;                                                  // (Parm)
	struct FVector                                     SpawnPos;                                                 // (Parm, OutParm)
	struct FRotator                                    SpawnRot;                                                 // (Parm, OutParm)
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
struct UGameFixedCamera_OnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                                // (Parm)
};

// Function GameFramework.GameFixedCamera.UpdateCamera
struct UGameFixedCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	struct FTViewTarget                                OutVT;                                                    // (Parm, OutParm)
};

// Function GameFramework.GameKActorSpawnableEffect.Tick
struct AGameKActorSpawnableEffect_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
struct AGameKActorSpawnableEffect_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
struct AGameKActorSpawnableEffect_PostBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
