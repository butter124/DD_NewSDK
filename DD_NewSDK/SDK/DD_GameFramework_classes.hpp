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

// Class GameFramework.GameAIController
// 0x0024 (0x03F4 - 0x03D0)
class AGameAIController : public AAIController
{
public:
	class UGameAICommand*                              CommandList;                                              // 0x03D0(0x0004) (Const, Transient)
	unsigned long                                      bHasRunawayCommandList : 1;                               // 0x03D4(0x0004) (Transient)
	unsigned long                                      bAILogging : 1;                                           // 0x03D4(0x0004) (Edit, Config)
	unsigned long                                      bAILogToWindow : 1;                                       // 0x03D4(0x0004) (Edit, Config)
	unsigned long                                      bFlushAILogEachLine : 1;                                  // 0x03D4(0x0004) (Edit, Config)
	unsigned long                                      bMapBasedLogName : 1;                                     // 0x03D4(0x0004) (Edit, Config)
	unsigned long                                      bAIDrawDebug : 1;                                         // 0x03D4(0x0004) (Edit, Config)
	unsigned long                                      bAIBroken : 1;                                            // 0x03D4(0x0004) (Transient)
	class AFileLog*                                    AILogFile;                                                // 0x03D8(0x0004) (Transient)
	TArray<struct FName>                               AILogFilter;                                              // 0x03DC(0x000C) (Edit, Config, NeedCtorLink)
	struct FString                                     DemoActionString;                                         // 0x03E8(0x000C) (Net, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAIController");
		return ptr;
	}


	struct FString GetActionString();
	bool GeneratePathToLocation(const struct FVector& Goal, float WithinDistance, bool bAllowPartialPath);
	bool GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath);
	void SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime);
	void AILog_Internal(const struct FString& LogText, const struct FName& LogCategory, bool bForce);
	void RecordDemoAILog(const struct FString& LogText);
	void Destroyed();
	class UGameAICommand* GetAICommandInStack(class UClass* InClass);
	class UGameAICommand* FindCommandOfClass(class UClass* SearchClass);
	void DumpCommandStack();
	void CheckCommandCount();
	class UGameAICommand* GetActiveCommand();
	bool AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass);
	void PopCommand(class UGameAICommand* ToBePoppedCommand);
	void PushCommand(class UGameAICommand* NewCommand);
};


// Class GameFramework.GameAICommand
// 0x001C (0x0058 - 0x003C)
class UGameAICommand : public UObject
{
public:
	class UGameAICommand*                              ChildCommand;                                             // 0x003C(0x0004) (Const, Transient)
	struct FName                                       ChildStatus;                                              // 0x0040(0x0008) (Const, Transient)
	class AGameAIController*                           GameAIOwner;                                              // 0x0048(0x0004) (Transient)
	struct FName                                       Status;                                                   // 0x004C(0x0008) (Transient)
	unsigned long                                      bAllowNewSameClassInstance : 1;                           // 0x0054(0x0004)
	unsigned long                                      bReplaceActiveSameClassInstance : 1;                      // 0x0054(0x0004)
	unsigned long                                      bAborted : 1;                                             // 0x0054(0x0004) (Transient)
	unsigned long                                      bIgnoreNotifies : 1;                                      // 0x0054(0x0004)
	unsigned long                                      bPendingPop : 1;                                          // 0x0054(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICommand");
		return ptr;
	}


	void GetDebugOverheadText(class APlayerController* PC, TArray<struct FString>* OutText);
	void DrawDebug(class AHUD* H, const struct FName& Category);
	struct FString GetDumpString();
	void Resumed(const struct FName& OldCommandName);
	void Paused(class UGameAICommand* NewCommand);
	void Popped();
	void Pushed();
	void PostPopped();
	void PrePushed(class AGameAIController* AI);
	bool AllowStateTransitionTo(const struct FName& StateName);
	bool AllowTransitionTo(class UClass* AttemptCommand);
	void Tick(float DeltaTime);
	bool ShouldIgnoreNotifies();
	void InternalTick(float DeltaTime);
	void InternalResumed(const struct FName& OldCommandName);
	void InternalPaused(class UGameAICommand* NewCommand);
	void InternalPopped();
	void InternalPushed();
	void InternalPrePushed(class AGameAIController* AI);
	bool STATIC_InitCommand(class AGameAIController* AI);
	bool STATIC_InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor);
};


// Class GameFramework.GameCrowdAgent
// 0x01DC (0x03FC - 0x0220)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	class UGameCrowdGroup*                             MyGroup;                                                  // 0x0220(0x0004)
	struct FVector                                     PreferredVelocity;                                        // 0x0224(0x000C)
	float                                              AvoidanceShare;                                           // 0x0230(0x0004)
	class AGameCrowdDestination*                       CurrentDestination;                                       // 0x0234(0x0004)
	class AGameCrowdDestination*                       BehaviorDestination;                                      // 0x0238(0x0004)
	class AGameCrowdDestination*                       PreviousDestination;                                      // 0x023C(0x0004)
	struct FVector                                     ExternalForce;                                            // 0x0240(0x000C)
	float                                              InterpZTranslation;                                       // 0x024C(0x0004)
	int                                                Health;                                                   // 0x0250(0x0004) (Edit)
	float                                              DeadBodyDuration;                                         // 0x0254(0x0004) (Edit)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0258(0x0004) (Const, ExportObject, EditConst, Component, EditInline)
	int                                                ConformTraceFrameCount;                                   // 0x025C(0x0004) (Transient)
	int                                                AwareUpdateFrameCount;                                    // 0x0260(0x0004) (Transient)
	TArray<class AActor*>                              NearbyDynamics;                                           // 0x0264(0x000C) (Transient, NeedCtorLink)
	TArray<class AGameCrowdForcePoint*>                RelevantAttractors;                                       // 0x0270(0x000C) (Transient, NeedCtorLink)
	unsigned long                                      bUniformScale : 1;                                        // 0x027C(0x0004)
	unsigned long                                      bCheckForObstacles : 1;                                   // 0x027C(0x0004) (Edit)
	unsigned long                                      bUseNavMeshPathing : 1;                                   // 0x027C(0x0004) (Edit)
	unsigned long                                      bWantsSeePlayerNotification : 1;                          // 0x027C(0x0004)
	unsigned long                                      bAllowPitching : 1;                                       // 0x027C(0x0004) (Edit)
	unsigned long                                      bHitObstacle : 1;                                         // 0x027C(0x0004)
	unsigned long                                      bBadHitNormal : 1;                                        // 0x027C(0x0004)
	unsigned long                                      bSimulateThisTick : 1;                                    // 0x027C(0x0004)
	unsigned long                                      bClampMovementSpeed : 1;                                  // 0x027C(0x0004) (Edit)
	unsigned long                                      bPotentialEncounter : 1;                                  // 0x027C(0x0004)
	unsigned long                                      bIsPanicked : 1;                                          // 0x027C(0x0004)
	unsigned long                                      bWantsGroupIdle : 1;                                      // 0x027C(0x0004)
	unsigned long                                      bPreferVisibleDestination : 1;                            // 0x027C(0x0004) (Edit)
	unsigned long                                      bPreferVisibleDestinationOnSpawn : 1;                     // 0x027C(0x0004) (Edit)
	unsigned long                                      bHasNotifiedSpawner : 1;                                  // 0x027C(0x0004)
	unsigned long                                      bIsInSpawnPool : 1;                                       // 0x027C(0x0004)
	TEnumAsByte<EConformType>                          ConformType;                                              // 0x0280(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              ConformTraceDist;                                         // 0x0284(0x0004) (Edit)
	int                                                ConformTraceInterval;                                     // 0x0288(0x0004) (Edit)
	int                                                CurrentConformTraceInterval;                              // 0x028C(0x0004)
	float                                              LastGroundZ;                                              // 0x0290(0x0004)
	float                                              AwareRadius;                                              // 0x0294(0x0004) (Edit)
	int                                                AwareUpdateInterval;                                      // 0x0298(0x0004) (Edit)
	float                                              AvoidOtherStrength;                                       // 0x029C(0x0004) (Edit)
	float                                              AvoidPlayerStrength;                                      // 0x02A0(0x0004) (Edit)
	float                                              AvoidOtherRadius;                                         // 0x02A4(0x0004) (Edit)
	float                                              GroupAttractionStrength;                                  // 0x02A8(0x0004) (Edit)
	float                                              MatchVelStrength;                                         // 0x02AC(0x0004) (Edit)
	float                                              FollowPathStrength;                                       // 0x02B0(0x0004) (Edit)
	float                                              VelocityDamping;                                          // 0x02B4(0x0004) (Edit)
	float                                              RotateToTargetSpeed;                                      // 0x02B8(0x0004) (Edit)
	float                                              MaxYawRate;                                               // 0x02BC(0x0004) (Edit)
	struct FVector                                     MeshMinScale3D;                                           // 0x02C0(0x000C) (Edit)
	struct FVector                                     MeshMaxScale3D;                                           // 0x02CC(0x000C) (Edit)
	float                                              EyeZOffset;                                               // 0x02D8(0x0004)
	float                                              ProximityLODDist;                                         // 0x02DC(0x0004) (Edit)
	float                                              VisibleProximityLODDist;                                  // 0x02E0(0x0004) (Edit)
	struct FVector                                     LastKnownGoodPosition;                                    // 0x02E4(0x000C)
	float                                              GroundOffset;                                             // 0x02F0(0x0004) (Edit)
	struct FVector                                     IntermediatePoint;                                        // 0x02F4(0x000C)
	struct FVector                                     SearchExtent;                                             // 0x0300(0x000C)
	class UClass*                                      NavigationHandleClass;                                    // 0x030C(0x0004)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x0310(0x0004)
	int                                                ObstacleCheckCount;                                       // 0x0314(0x0004)
	float                                              WalkableFloorZ;                                           // 0x0318(0x0004)
	float                                              LastPathingAttempt;                                       // 0x031C(0x0004)
	float                                              LastUpdateTime;                                           // 0x0320(0x0004)
	float                                              NotVisibleLifeSpan;                                       // 0x0324(0x0004) (Edit)
	float                                              NotVisibleTickScalingFactor;                              // 0x0328(0x0004) (Edit)
	class AGameCrowdAgent*                             MyArchetype;                                              // 0x032C(0x0004)
	float                                              MaxWalkingSpeed;                                          // 0x0330(0x0004) (Edit)
	float                                              MaxRunningSpeed;                                          // 0x0334(0x0004) (Edit)
	float                                              MaxSpeed;                                                 // 0x0338(0x0004)
	TArray<struct FRecentInteraction>                  RecentInteractions;                                       // 0x033C(0x000C) (NeedCtorLink)
	float                                              BeaconMaxDist;                                            // 0x0348(0x0004)
	struct FVector                                     BeaconOffset;                                             // 0x034C(0x000C)
	class UTexture2D*                                  BeaconTexture;                                            // 0x0358(0x0004) (Const)
	struct FLinearColor                                BeaconColor;                                              // 0x035C(0x0010) (Const)
	class USoundCue*                                   AmbientSoundCue;                                          // 0x036C(0x0004) (Edit)
	class UAudioComponent*                             AmbientSoundComponent;                                    // 0x0370(0x0004) (ExportObject, Component, EditInline)
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                                          // 0x0374(0x0004)
	TArray<struct FBehaviorEntry>                      EncounterAgentBehaviors;                                  // 0x0378(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBehaviorEntry>                      SeePlayerBehaviors;                                       // 0x0384(0x000C) (Edit, NeedCtorLink)
	float                                              MaxSeePlayerDistSq;                                       // 0x0390(0x0004)
	float                                              SeePlayerInterval;                                        // 0x0394(0x0004) (Edit)
	TArray<struct FBehaviorEntry>                      SpawnBehaviors;                                           // 0x0398(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBehaviorEntry>                      PanicBehaviors;                                           // 0x03A4(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBehaviorEntry>                      RandomBehaviors;                                          // 0x03B0(0x000C) (Edit, NeedCtorLink)
	float                                              RandomBehaviorInterval;                                   // 0x03BC(0x0004) (Edit)
	float                                              ForceUpdateTime;                                          // 0x03C0(0x0004)
	float                                              ReachThreshold;                                           // 0x03C4(0x0004)
	TArray<struct FBehaviorEntry>                      GroupWaitingBehaviors;                                    // 0x03C8(0x000C) (Edit, NeedCtorLink)
	float                                              DesiredGroupRadius;                                       // 0x03D4(0x0004) (Edit)
	float                                              DesiredGroupRadiusSq;                                     // 0x03D8(0x0004)
	float                                              MaxLOSLifeDistance;                                       // 0x03DC(0x0004) (Edit)
	float                                              MaxLOSLifeDistanceSq;                                     // 0x03E0(0x0004)
	TScriptInterface<class UGameCrowdSpawnerInterface> MySpawner;                                                // 0x03E4(0x0008)
	struct FVector                                     SpawnOffset;                                              // 0x03EC(0x000C)
	float                                              InitialLastRenderTime;                                    // 0x03F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgent");
		return ptr;
	}


	struct FString GetBehaviorString();
	struct FString GetDestString();
	void PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	void NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	struct FVector GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath);
	void InitNavigationHandle();
	void OverlappedActorEvent(class AActor* A);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	void FireDeathEvent();
	void PlayDeath(const struct FVector& KillMomentum);
	void UpdateIntermediatePoint(class AActor* DestinationActor);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	bool IsIdle();
	void SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype);
	void StopBehavior();
	void ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject);
	void ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype);
	void ResetSeePlayer();
	void TryRandomBehavior();
	void NotifySeePlayer(class APlayerController* PC);
	void PlaySpawnBehavior();
	void HandlePotentialAgentEncounter();
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action);
	void InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility);
	void SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void Destroyed();
	void ResetPooledAgent();
	void KillAgent();
	void PostBeginPlay();
	void SetMaxSpeed();
	void SetCurrentDestination(class AGameCrowdDestination* NewDest);
	void WaitForGroupMembers();
	bool PickBehaviorFrom(TArray<struct FBehaviorEntry> BehaviorList, const struct FVector& BestCameraLoc);
	void SetPanic(class AActor* PanicActor, bool bNewPanic);
	bool IsPanicked();
	void FellOutOfWorld(class UClass* dmgType);
};


// Class GameFramework.GameCrowdAgentSkeletal
// 0x0080 (0x047C - 0x03FC)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x03FC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAnimNodeBlend*                              SpeedBlendNode;                                           // 0x0400(0x0004)
	class UAnimNodeSlot*                               FullBodySlot;                                             // 0x0404(0x0004)
	class UAnimNodeSequence*                           ActionSeqNode;                                            // 0x0408(0x0004)
	class UAnimNodeSequence*                           WalkSeqNode;                                              // 0x040C(0x0004)
	class UAnimNodeSequence*                           RunSeqNode;                                               // 0x0410(0x0004)
	class UAnimTree*                                   AgentTree;                                                // 0x0414(0x0004)
	TArray<struct FName>                               WalkAnimNames;                                            // 0x0418(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               RunAnimNames;                                             // 0x0424(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               IdleAnimNames;                                            // 0x0430(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               DeathAnimNames;                                           // 0x043C(0x000C) (Edit, NeedCtorLink)
	float                                              SpeedBlendStart;                                          // 0x0448(0x0004) (Edit)
	float                                              SpeedBlendEnd;                                            // 0x044C(0x0004) (Edit)
	float                                              AnimVelRate;                                              // 0x0450(0x0004) (Edit)
	float                                              MaxSpeedBlendChangeSpeed;                                 // 0x0454(0x0004) (Edit)
	struct FName                                       MoveSyncGroupName;                                        // 0x0458(0x0008) (Edit)
	TArray<struct FGameCrowdAttachmentList>            Attachments;                                              // 0x0460(0x000C) (Edit, NeedCtorLink)
	float                                              MaxTargetAcquireTime;                                     // 0x046C(0x0004) (Edit)
	unsigned long                                      bUseRootMotionVelocity : 1;                               // 0x0470(0x0004) (Edit)
	unsigned long                                      bIsPlayingIdleAnimation : 1;                              // 0x0470(0x0004)
	unsigned long                                      bIsPlayingDeathAnimation : 1;                             // 0x0470(0x0004)
	unsigned long                                      bAnimateThisTick : 1;                                     // 0x0470(0x0004)
	float                                              MaxAnimationDistance;                                     // 0x0474(0x0004) (Edit)
	float                                              MaxAnimationDistanceSq;                                   // 0x0478(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentSkeletal");
		return ptr;
	}


	void CreateAttachments();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void ClearLatentAnimation();
	void OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action);
	void SetRootMotion(bool bRootMotionEnabled);
	void PlayDeath(const struct FVector& KillMomentum);
	void SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows);
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdAgentBehavior
// 0x0010 (0x004C - 0x003C)
class UGameCrowdAgentBehavior : public UObject
{
public:
	unsigned long                                      bIdleBehavior : 1;                                        // 0x003C(0x0004) (Edit)
	unsigned long                                      bFaceActionTargetFirst : 1;                               // 0x003C(0x0004) (Edit)
	unsigned long                                      bIsViralBehavior : 1;                                     // 0x003C(0x0004) (Edit)
	unsigned long                                      bIsPanicked : 1;                                          // 0x003C(0x0004)
	class AActor*                                      ActionTarget;                                             // 0x0040(0x0004)
	float                                              MaxPlayerDistance;                                        // 0x0044(0x0004) (Edit)
	class AGameCrowdAgent*                             MyAgent;                                                  // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentBehavior");
		return ptr;
	}


	bool AllowBehaviorAt(class AGameCrowdDestination* Destination);
	bool AllowThisDestination(class AGameCrowdDestination* Destination);
	void PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent);
	void ActivatedBy(class AActor* NewActionTarget);
	class AActor* GetDestinationActor();
	void ChangingDestination(class AGameCrowdDestination* NewDest);
	struct FString GetBehaviorString();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StopBehavior();
	void InitBehavior(class AGameCrowdAgent* Agent);
	bool HandleMovement();
	void FinishedTargetRotation();
	bool CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& cameraLoc);
	void Tick(float DeltaTime);
	bool ShouldEndIdle();
};


// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x002C (0x0078 - 0x004C)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	TArray<struct FName>                               AnimationList;                                            // 0x004C(0x000C) (Edit, NeedCtorLink)
	float                                              BlendInTime;                                              // 0x0058(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x005C(0x0004) (Edit)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x0060(0x0004) (Edit)
	unsigned long                                      bLookAtPlayer : 1;                                        // 0x0060(0x0004) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x0060(0x0004) (Edit)
	unsigned long                                      bBlendBetweenAnims : 1;                                   // 0x0060(0x0004) (Edit)
	class AActor*                                      CustomActionTarget;                                       // 0x0064(0x0004)
	int                                                LoopIndex;                                                // 0x0068(0x0004) (Edit)
	float                                              LoopTime;                                                 // 0x006C(0x0004) (Edit)
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                             // 0x0070(0x0004)
	int                                                AnimationIndex;                                           // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_PlayAnimation");
		return ptr;
	}


	struct FString GetBehaviorString();
	void StopBehavior();
	void PlayAgentAnimationNow();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void SetSequenceOutput();
	void FinishedTargetRotation();
	void InitBehavior(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x0004 (0x0050 - 0x004C)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                               // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_RunFromPanic");
		return ptr;
	}


	struct FString GetBehaviorString();
	bool AllowBehaviorAt(class AGameCrowdDestination* Destination);
	bool AllowThisDestination(class AGameCrowdDestination* Destination);
	void PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent);
	void StopBehavior();
	void InitBehavior(class AGameCrowdAgent* Agent);
	void ActivatedBy(class AActor* NewActionTarget);
};


// Class GameFramework.GameCrowdBehavior_WaitForGroup
// 0x0000 (0x004C - 0x004C)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitForGroup");
		return ptr;
	}


	void StopBehavior();
	bool ShouldEndIdle();
	struct FString GetBehaviorString();
	void InitBehavior(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x0008 (0x0054 - 0x004C)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned long                                      bStoppingBehavior : 1;                                    // 0x004C(0x0004)
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                            // 0x0050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitInQueue");
		return ptr;
	}


	void StopBehavior();
	bool ShouldEndIdle();
	struct FString GetBehaviorString();
	class AActor* GetDestinationActor();
	void ChangingDestination(class AGameCrowdDestination* NewDest);
	bool HandleMovement();
};


// Class GameFramework.GameCrowdGroup
// 0x000C (0x0048 - 0x003C)
class UGameCrowdGroup : public UObject
{
public:
	TArray<class AGameCrowdAgent*>                     Members;                                                  // 0x003C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdGroup");
		return ptr;
	}


	void UpdateDestinations(class AGameCrowdDestination* NewDestination);
	void RemoveMember(class AGameCrowdAgent* Agent);
	void AddMember(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdInteractionPoint
// 0x0008 (0x0224 - 0x021C)
class AGameCrowdInteractionPoint : public AActor
{
public:
	unsigned long                                      bIsEnabled : 1;                                           // 0x021C(0x0004) (Edit, Net)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0220(0x0004) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionPoint");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class GameFramework.GameCrowdDestination
// 0x0090 (0x02B4 - 0x0224)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;                      // 0x0224(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;                    // 0x0228(0x0004) (Const, Native, NoExport)
	unsigned long                                      bKillWhenReached : 1;                                     // 0x022C(0x0004) (Edit)
	unsigned long                                      bAllowAsPreviousDestination : 1;                          // 0x022C(0x0004) (Edit)
	unsigned long                                      bLastAllowableResult : 1;                                 // 0x022C(0x0004)
	unsigned long                                      bAvoidWhenPanicked : 1;                                   // 0x022C(0x0004) (Edit)
	unsigned long                                      bSkipBehaviorIfPanicked : 1;                              // 0x022C(0x0004) (Edit)
	unsigned long                                      bFleeDestination : 1;                                     // 0x022C(0x0004) (Edit)
	unsigned long                                      bMustReachExactly : 1;                                    // 0x022C(0x0004) (Edit)
	unsigned long                                      bHasRestrictions : 1;                                     // 0x022C(0x0004)
	unsigned long                                      bAllowsSpawning : 1;                                      // 0x022C(0x0004) (Edit)
	unsigned long                                      bLineSpawner : 1;                                         // 0x022C(0x0004) (Edit)
	unsigned long                                      bSpawnAtEdge : 1;                                         // 0x022C(0x0004) (Edit)
	unsigned long                                      bSoftPerimeter : 1;                                       // 0x022C(0x0004) (Edit)
	unsigned long                                      bIsVisible : 1;                                           // 0x022C(0x0004)
	unsigned long                                      bWillBeVisible : 1;                                       // 0x022C(0x0004)
	unsigned long                                      bCanSpawnHereNow : 1;                                     // 0x022C(0x0004)
	unsigned long                                      bIsBeyondSpawnDistance : 1;                               // 0x022C(0x0004)
	unsigned long                                      bAdjacentToVisibleNode : 1;                               // 0x022C(0x0004)
	TArray<class AGameCrowdDestination*>               NextDestinations;                                         // 0x0230(0x000C) (Edit, DuplicateTransient, NeedCtorLink)
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                                // 0x023C(0x0004) (Edit, DuplicateTransient)
	int                                                Capacity;                                                 // 0x0240(0x0004) (Edit)
	float                                              Frequency;                                                // 0x0244(0x0004) (Edit)
	int                                                CustomerCount;                                            // 0x0248(0x0004)
	TArray<class UClass*>                              SupportedAgentClasses;                                    // 0x024C(0x000C) (Edit, NeedCtorLink)
	TArray<class UObject*>                             SupportedArchetypes;                                      // 0x0258(0x000C) (Edit, NeedCtorLink)
	TArray<class UClass*>                              RestrictedAgentClasses;                                   // 0x0264(0x000C) (Edit, NeedCtorLink)
	TArray<class UObject*>                             RestrictedArchetypes;                                     // 0x0270(0x000C) (Edit, NeedCtorLink)
	class UClass*                                      NavigationHandleClass;                                    // 0x027C(0x0004)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x0280(0x0004)
	class AGameCrowdAgent*                             QueryingAgent;                                            // 0x0284(0x0004)
	float                                              ExactReachTolerance;                                      // 0x0288(0x0004)
	struct FName                                       InteractionTag;                                           // 0x028C(0x0008) (Edit)
	float                                              InteractionDelay;                                         // 0x0294(0x0004) (Edit)
	float                                              SpawnRadius;                                              // 0x0298(0x0004) (Edit)
	TArray<struct FBehaviorEntry>                      ReachedBehaviors;                                         // 0x029C(0x000C) (Edit, NeedCtorLink)
	class AGameCrowdAgent*                             AgentEnRoute;                                             // 0x02A8(0x0004)
	float                                              Priority;                                                 // 0x02AC(0x0004)
	float                                              LastSpawnTime;                                            // 0x02B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestination");
		return ptr;
	}


	struct FVector GeneratePathToActor(class AGameCrowdAgent* Agent, class AActor* Goal, float WithinDistance, bool bAllowPartialPath);
	void InitNavigationHandle();
	void GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot);
	bool AllowableDestinationFor(class AGameCrowdAgent* Agent);
	bool AtCapacity();
	void IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent);
	void DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent);
	void PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions);
	void ReachedDestination(class AGameCrowdAgent* Agent);
	void PostBeginPlay();
	bool ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly);
	float GetSpreadValue();
	void NotifyPathChanged();
};


// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x001C (0x0240 - 0x0224)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                                        // 0x0224(0x0004) (Edit)
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                                    // 0x0228(0x0004)
	class AGameCrowdAgent*                             QueuedAgent;                                              // 0x022C(0x0004)
	class AGameCrowdDestination*                       QueueDestination;                                         // 0x0230(0x0004) (Transient)
	unsigned long                                      bClearingQueue : 1;                                       // 0x0234(0x0004)
	unsigned long                                      bPendingAdvance : 1;                                      // 0x0234(0x0004)
	float                                              AverageReactionTime;                                      // 0x0238(0x0004) (Edit)
	class UClass*                                      QueueBehaviorClass;                                       // 0x023C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestinationQueuePoint");
		return ptr;
	}


	bool HasCustomer();
	void ClearQueue(class AGameCrowdAgent* OldCustomer);
	void AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition);
	void ActuallyAdvance();
	void AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition);
	void ReachedDestination(class AGameCrowdAgent* Agent);
	bool HasSpace();
	bool QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition);
};


// Class GameFramework.GameCrowdForcePoint
// 0x0000 (0x0224 - 0x0224)
class AGameCrowdForcePoint : public AGameCrowdInteractionPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdForcePoint");
		return ptr;
	}


	struct FVector AppliedForce(class AGameCrowdAgent* Agent);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class GameFramework.GameCrowdAttractor
// 0x0008 (0x022C - 0x0224)
class AGameCrowdAttractor : public AGameCrowdForcePoint
{
public:
	float                                              Attraction;                                               // 0x0224(0x0004) (Edit)
	unsigned long                                      bAttractionFalloff : 1;                                   // 0x0228(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAttractor");
		return ptr;
	}


	struct FVector AppliedForce(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdRepulsor
// 0x0008 (0x022C - 0x0224)
class AGameCrowdRepulsor : public AGameCrowdForcePoint
{
public:
	float                                              Repulsion;                                                // 0x0224(0x0004) (Edit)
	unsigned long                                      bAttractionFalloff : 1;                                   // 0x0228(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdRepulsor");
		return ptr;
	}


	struct FVector AppliedForce(class AGameCrowdAgent* Agent);
};


// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0054 (0x014C - 0x00F8)
class USeqAct_GameCrowdSpawner : public USeqAct_Latent
{
public:
	unsigned long                                      bSpawningActive : 1;                                      // 0x00F8(0x0004)
	unsigned long                                      bCycleSpawnLocs : 1;                                      // 0x00F8(0x0004) (Edit)
	unsigned long                                      bRespawnDeadAgents : 1;                                   // 0x00F8(0x0004) (Edit)
	unsigned long                                      bHasReducedNumberDueToSplitScreen : 1;                    // 0x00F8(0x0004)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x00F8(0x0004) (Edit)
	unsigned long                                      bForceObstacleChecking : 1;                               // 0x00F8(0x0004) (Edit)
	unsigned long                                      bForceNavMeshPathing : 1;                                 // 0x00F8(0x0004) (Edit)
	unsigned long                                      bOnlySpawnHidden : 1;                                     // 0x00F8(0x0004) (Edit)
	unsigned long                                      bWarmupPosition : 1;                                      // 0x00F8(0x0004) (Edit)
	unsigned long                                      bCastShadows : 1;                                         // 0x00F8(0x0004) (Edit)
	int                                                NextDestinationIndex;                                     // 0x00FC(0x0004)
	TArray<class AActor*>                              SpawnLocs;                                                // 0x0100(0x000C) (Transient, NeedCtorLink)
	int                                                LastSpawnLocIndex;                                        // 0x010C(0x0004) (Transient)
	float                                              SpawnRate;                                                // 0x0110(0x0004) (Edit)
	int                                                SpawnNum;                                                 // 0x0114(0x0004) (Edit)
	float                                              SpawnRadius;                                              // 0x0118(0x0004) (Edit)
	float                                              SplitScreenNumReduction;                                  // 0x011C(0x0004) (Edit)
	float                                              Remainder;                                                // 0x0120(0x0004)
	float                                              AgentFrequencySum;                                        // 0x0124(0x0004)
	TArray<struct FAgentArchetypeInfo>                 AgentArchetypes;                                          // 0x0128(0x000C) (Edit, NeedCtorLink)
	TArray<class AGameCrowdAgent*>                     SpawnedList;                                              // 0x0134(0x000C) (NeedCtorLink)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // 0x0140(0x0004) (Edit)
	class AGameCrowdReplicationActor*                  RepActor;                                                 // 0x0144(0x0004)
	float                                              AgentWarmupTime;                                          // 0x0148(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdSpawner");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
	class AGameCrowdAgent* CreateNewAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup);
	class AGameCrowdAgent* SpawnAgent(class AActor* SpawnLoc);
	void UpdateSpawning(float DeltaSeconds);
	void KillAgents();
	void CacheSpawnerVars();
	void SpawnedAgent(class AGameCrowdAgent* NewAgent);
};


// Class GameFramework.GameCrowdPopulationManager
// 0x0084 (0x02A0 - 0x021C)
class AGameCrowdPopulationManager : public AActor
{
public:
	unsigned long                                      bSpawningActive : 1;                                      // 0x021C(0x0004)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x021C(0x0004)
	unsigned long                                      bCastShadows : 1;                                         // 0x021C(0x0004)
	unsigned long                                      bForceObstacleChecking : 1;                               // 0x021C(0x0004)
	unsigned long                                      bForceNavMeshPathing : 1;                                 // 0x021C(0x0004)
	unsigned long                                      bHaveInitialPopulation : 1;                               // 0x021C(0x0004)
	unsigned long                                      bWarmupPosition : 1;                                      // 0x021C(0x0004) (Edit)
	float                                              SpawnRate;                                                // 0x0220(0x0004)
	int                                                SpawnNum;                                                 // 0x0224(0x0004)
	float                                              SplitScreenNumReduction;                                  // 0x0228(0x0004)
	float                                              Remainder;                                                // 0x022C(0x0004)
	float                                              AgentFrequencySum;                                        // 0x0230(0x0004)
	TArray<struct FAgentArchetypeInfo>                 AgentArchetypes;                                          // 0x0234(0x000C) (NeedCtorLink)
	TArray<class AGameCrowdAgent*>                     AgentPool;                                                // 0x0240(0x000C) (NeedCtorLink)
	int                                                MaxAgentPoolSize;                                         // 0x024C(0x0004)
	int                                                AgentCount;                                               // 0x0250(0x0004)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // 0x0254(0x0004)
	float                                              AgentWarmupTime;                                          // 0x0258(0x0004)
	float                                              SpawnPrioritizationInterval;                              // 0x025C(0x0004)
	int                                                PrioritizationIndex;                                      // 0x0260(0x0004)
	int                                                PrioritizationUpdateIndex;                                // 0x0264(0x0004)
	TArray<class AGameCrowdDestination*>               PrioritizedSpawnPoints;                                   // 0x0268(0x000C) (NeedCtorLink)
	float                                              PlayerPositionPredictionTime;                             // 0x0274(0x0004)
	TArray<class AGameCrowdDestination*>               PotentialSpawnPoints;                                     // 0x0278(0x000C) (NeedCtorLink)
	float                                              MaxSpawnDistSq;                                           // 0x0284(0x0004)
	float                                              MinBehindSpawnDistSq;                                     // 0x0288(0x0004)
	int                                                SpawnedCount;                                             // 0x028C(0x0004)
	int                                                PoolCount;                                                // 0x0290(0x0004)
	int                                                KilledCount;                                              // 0x0294(0x0004)
	float                                              HeadVisibilityOffset;                                     // 0x0298(0x0004)
	float                                              InitialPopulationPct;                                     // 0x029C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdPopulationManager");
		return ptr;
	}


	class AGameCrowdAgent* CreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup);
	class AGameCrowdAgent* SpawnAgent(class AGameCrowdDestination* SpawnLoc);
	bool ValidateSpawnAt(class AGameCrowdDestination* Candidate);
	void InitializeSpawnPoints(const struct FVector& ViewLocation, const struct FVector& PredictionLocation);
	void AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, const struct FVector& ViewLocation);
	void AnalyzeSpawnPoints(int StartIndex, int StopIndex, const struct FVector& ViewLocation, const struct FVector& PredictionLocation);
	void PrioritizeSpawnPoints(float DeltaSeconds);
	class AGameCrowdDestination* PickSpawnPoint();
	void Tick(float DeltaSeconds);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	bool AddToAgentPool(class AGameCrowdAgent* Agent);
	void AgentDestroyed(class AGameCrowdAgent* Agent);
	void OnGameCrowdPopulationManagerToggle(class USeqAct_GameCrowdPopulationManagerToggle* inAction);
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdReplicationActor
// 0x000C (0x0228 - 0x021C)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                                  // 0x021C(0x0004) (Net)
	unsigned long                                      bSpawningActive : 1;                                      // 0x0220(0x0004) (Net)
	int                                                DestroyAllCount;                                          // 0x0224(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdReplicationActor");
		return ptr;
	}


	void ReplicatedEvent(const struct FName& VarName);
};


// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameTypes");
		return ptr;
	}

};


// Class GameFramework.GameDamageType
// 0x003C (0x00C4 - 0x0088)
class UGameDamageType : public UDamageType
{
public:
	class UMaterialInterface*                          MI_DamageOverlay;                                         // 0x0088(0x0004) (Const)
	class USoundCue*                                   ExtraSoundToPlayWhenDamaged;                              // 0x008C(0x0004) (Const)
	unsigned long                                      bEnvironmentalDamage : 1;                                 // 0x0090(0x0004) (Const)
	unsigned long                                      bHighKickDeathAnimation : 1;                              // 0x0090(0x0004) (Const, Config)
	unsigned long                                      bForceRagdollDeath : 1;                                   // 0x0090(0x0004) (Const)
	unsigned long                                      bSuppressImpactFX : 1;                                    // 0x0090(0x0004) (Const)
	unsigned long                                      bSuppressBloodDecals : 1;                                 // 0x0090(0x0004) (Const)
	unsigned long                                      bSuppressPlayExplosiveRadialDamageEffects : 1;            // 0x0090(0x0004) (Const)
	unsigned long                                      bAllowHeadShotGib : 1;                                    // 0x0090(0x0004) (Const, Config)
	float                                              DistFromHitLocToGib;                                      // 0x0094(0x0004) (Const, Config)
	struct FCanvasIcon                                 KilledByIcon;                                             // 0x0098(0x0014) (Const)
	struct FCanvasIcon                                 HeadshotIcon;                                             // 0x00AC(0x0014) (Const)
	float                                              IconScale;                                                // 0x00C0(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDamageType");
		return ptr;
	}


	void STATIC_HandleDamageFX(class AGamePawn* DamagedPawn, struct FTakeHitInfo* HitInfo);
	bool STATIC_ShouldHeadShotGib(class APawn* TestPawn, class APawn* Instigator);
	void STATIC_PlayExtraDamageSound(class APawn* VictimPawn);
	bool STATIC_IsScriptedDamageType();
	bool STATIC_ShouldPlayForceFeedback(class APawn* DamagedPawn);
	void STATIC_HandleDeadPlayer(class AGamePlayerController* Player);
	void STATIC_HandleKilledPawn(class APawn* KilledPawn, class APawn* Instigator);
	void STATIC_HandleDamagedPawn(class APawn* DamagedPawn, class APawn* Instigator, int DamageAmt, const struct FVector& Momentum);
	void STATIC_ModifyDamage(class APawn* Victim, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FTraceHitInfo& HitInfo, int* out_Damage, struct FVector* out_Momentum);
	bool STATIC_ShouldGib(class APawn* TestPawn, class APawn* Instigator);
};


// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x01C4 - 0x01C4)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDestinationConnRenderingComponent");
		return ptr;
	}

};


// Class GameFramework.GameExplosion
// 0x00B0 (0x00EC - 0x003C)
class UGameExplosion : public UObject
{
public:
	unsigned long                                      bDirectionalExplosion : 1;                                // 0x003C(0x0004) (Edit)
	unsigned long                                      bAllowTeammateCringes : 1;                                // 0x003C(0x0004) (Edit)
	unsigned long                                      bFullDamageToAttachee : 1;                                // 0x003C(0x0004) (Transient)
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;                    // 0x003C(0x0004) (Edit)
	unsigned long                                      bCausesFracture : 1;                                      // 0x003C(0x0004) (Edit)
	unsigned long                                      bAllowPerMaterialFX : 1;                                  // 0x003C(0x0004) (Edit)
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;// 0x003C(0x0004) (Edit)
	unsigned long                                      bUseMapSpecificValues : 1;                                // 0x003C(0x0004) (Edit)
	unsigned long                                      bUseOverlapCheck : 1;                                     // 0x003C(0x0004) (Edit)
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;                   // 0x003C(0x0004) (Edit)
	unsigned long                                      bAutoControllerVibration : 1;                             // 0x003C(0x0004) (Edit)
	float                                              DirectionalExplosionAngleDeg;                             // 0x0040(0x0004) (Edit)
	float                                              DamageDelay;                                              // 0x0044(0x0004) (Edit)
	float                                              Damage;                                                   // 0x0048(0x0004) (Edit)
	float                                              DamageRadius;                                             // 0x004C(0x0004) (Edit)
	float                                              DamageFalloffExponent;                                    // 0x0050(0x0004) (Edit)
	class AActor*                                      ActorToIgnoreForDamage;                                   // 0x0054(0x0004) (Transient)
	class UClass*                                      ActorClassToIgnoreForDamage;                              // 0x0058(0x0004) (Edit)
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;                // 0x005C(0x0004) (Edit)
	class UClass*                                      MyDamageType;                                             // 0x0060(0x0004) (Edit)
	float                                              KnockDownRadius;                                          // 0x0064(0x0004) (Edit)
	float                                              KnockDownStrength;                                        // 0x0068(0x0004) (Edit)
	float                                              CringeRadius;                                             // 0x006C(0x0004) (Edit)
	struct FVector2D                                   CringeDuration;                                           // 0x0070(0x0008) (Edit)
	float                                              MomentumTransferScale;                                    // 0x0078(0x0004) (Edit)
	class UParticleSystem*                             ParticleEmitterTemplate;                                  // 0x007C(0x0004) (Edit)
	float                                              ExplosionEmitterScale;                                    // 0x0080(0x0004) (Edit)
	class AActor*                                      HitActor;                                                 // 0x0084(0x0004)
	struct FVector                                     HitLocation;                                              // 0x0088(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0094(0x000C)
	class USoundCue*                                   ExplosionSound;                                           // 0x00A0(0x0004) (Edit)
	class UPointLightComponent*                        ExploLight;                                               // 0x00A4(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              ExploLightFadeOutTime;                                    // 0x00A8(0x0004) (Edit)
	class URadialBlurComponent*                        ExploRadialBlur;                                          // 0x00AC(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              ExploRadialBlurFadeOutTime;                               // 0x00B0(0x0004) (Edit)
	float                                              ExploRadialBlurMaxBlur;                                   // 0x00B4(0x0004) (Edit)
	float                                              FractureMeshRadius;                                       // 0x00B8(0x0004) (Edit)
	float                                              FracturePartVel;                                          // 0x00BC(0x0004) (Edit)
	class AActor*                                      Attachee;                                                 // 0x00C0(0x0004) (Edit)
	class AController*                                 AttacheeController;                                       // 0x00C4(0x0004) (Edit)
	class UCameraShake*                                CamShake;                                                 // 0x00C8(0x0004) (Edit, EditInline)
	class UCameraShake*                                CamShake_Left;                                            // 0x00CC(0x0004) (Edit, EditInline)
	class UCameraShake*                                CamShake_Right;                                           // 0x00D0(0x0004) (Edit, EditInline)
	class UCameraShake*                                CamShake_Rear;                                            // 0x00D4(0x0004) (Edit, EditInline)
	float                                              CamShakeInnerRadius;                                      // 0x00D8(0x0004) (Edit)
	float                                              CamShakeOuterRadius;                                      // 0x00DC(0x0004) (Edit)
	float                                              CamShakeFalloff;                                          // 0x00E0(0x0004) (Edit)
	class UClass*                                      CameraLensEffect;                                         // 0x00E4(0x0004) (Edit)
	float                                              CameraLensEffectRadius;                                   // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosion");
		return ptr;
	}

};


// Class GameFramework.GameExplosionActor
// 0x0050 (0x026C - 0x021C)
class AGameExplosionActor : public AActor
{
public:
	unsigned long                                      bHasExploded : 1;                                         // 0x021C(0x0004) (Transient)
	unsigned long                                      bActiveReloadBonusActive : 1;                             // 0x021C(0x0004)
	unsigned long                                      bDrawDebug : 1;                                           // 0x021C(0x0004)
	class UPointLightComponent*                        ExplosionLight;                                           // 0x0220(0x0004) (ExportObject, Transient, Component, EditInline)
	float                                              LightFadeTime;                                            // 0x0224(0x0004) (Transient)
	float                                              LightFadeTimeRemaining;                                   // 0x0228(0x0004) (Transient)
	float                                              LightInitialBrightness;                                   // 0x022C(0x0004) (Transient)
	class URadialBlurComponent*                        ExplosionRadialBlur;                                      // 0x0230(0x0004) (ExportObject, Transient, Component, EditInline)
	float                                              RadialBlurFadeTime;                                       // 0x0234(0x0004) (Transient)
	float                                              RadialBlurFadeTimeRemaining;                              // 0x0238(0x0004) (Transient)
	float                                              RadialBlurMaxBlurAmount;                                  // 0x023C(0x0004) (Transient)
	class UGameExplosion*                              ExplosionTemplate;                                        // 0x0240(0x0004)
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                                   // 0x0244(0x0004) (ExportObject, Component, EditInline)
	class AController*                                 InstigatorController;                                     // 0x0248(0x0004)
	class AActor*                                      HitActorFromPhysMaterialTrace;                            // 0x024C(0x0004)
	struct FVector                                     HitLocationFromPhysMaterialTrace;                         // 0x0250(0x000C)
	float                                              DirectionalExplosionMinDot;                               // 0x025C(0x0004) (Transient)
	struct FVector                                     ExplosionDirection;                                       // 0x0260(0x000C) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionActor");
		return ptr;
	}


	class UCameraShake* ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC);
	void DoExplosionCameraEffects();
	void Tick(float DeltaTime);
	void DoExplosionDamage();
	void DrawDebug();
	void Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& Direction);
	void SpawnExplosionFogVolume();
	void SpawnExplosionDecal();
	void SpawnExplosionParticleSystem(class UParticleSystem* Template);
	void UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial);
	void KnockdownPawn(class AGamePawn* Victim, float DistFromExplosion);
	void CringePawn(class AGamePawn* Victim, float DistFromExplosion);
	void DoCringesAndKnockdowns();
	bool ShouldDoCringeFor(class AGamePawn* Victim);
	void DoBreakFracturedMeshes(const struct FVector& ExploOrigin, float DamageRadius, float RBStrength, class UClass* dmgType);
	void HurtExplosion(float BaseDamage, float DamageRadius, float DamageFalloffExp, class UClass* DamageType, float MomentumScale, const struct FVector& ExploOrigin, class AActor* IgnoredActor, class UClass* ActorClassToIgnoreForDamage, class AController* InstigatedByController, bool bDoFullDamage);
	bool IsBehindExplosion(class AActor* A);
	bool DoFullDamageToActor(class AActor* Victim);
	class UPhysicalMaterial* GetPhysicalMaterial();
	void PreBeginPlay();
};


// Class GameFramework.GameHUD
// 0x0000 (0x0948 - 0x0948)
class AGameHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameHUD");
		return ptr;
	}

};


// Class GameFramework.MobileHUD
// 0x003C (0x0984 - 0x0948)
class AMobileHUD : public AGameHUD
{
public:
	unsigned long                                      bForceMobileHUD : 1;                                      // 0x0948(0x0004) (Config, GlobalConfig)
	class UTexture2D*                                  ZoneBackgroundOn;                                         // 0x094C(0x0004)
	class UTexture2D*                                  ZoneBackgroundSmallOn;                                    // 0x0950(0x0004)
	class UTexture2D*                                  ZoneBackgroundTinyOn;                                     // 0x0954(0x0004)
	class UTexture2D*                                  FireZoneBackground;                                       // 0x0958(0x0004)
	class UTexture2D*                                  MoveZoneBackground;                                       // 0x095C(0x0004)
	class UTexture2D*                                  SteerZoneBackground;                                      // 0x0960(0x0004)
	struct FColor                                      ZoneTileColor;                                            // 0x0964(0x0004)
	struct FColor                                      ZoneTextColor;                                            // 0x0968(0x0004)
	class UTexture2D*                                  AnalogHat;                                                // 0x096C(0x0004)
	TArray<struct FMobileInputZone>                    MobileInputZones;                                         // 0x0970(0x000C) (Config, NeedCtorLink)
	int                                                MobileInputConfig;                                        // 0x097C(0x0004)
	int                                                MobileInputConfigMAX;                                     // 0x0980(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileHUD");
		return ptr;
	}


	void ResetMobileInputConfig();
	void NextMobileInputConfig();
	void DrawInputOverlays();
	void PostRender();
	void PostBeginPlay();
};


// Class GameFramework.GamePawn
// 0x0004 (0x048C - 0x0488)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bLastHitWasHeadShot : 1;                                  // 0x0488(0x0004) (Net, Transient)
	unsigned long                                      bRespondToExplosions : 1;                                 // 0x0488(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePawn");
		return ptr;
	}


	void ReattachMeshWithoutBeingSeen();
	void ReattachMesh();
	void UpdateShadowSettings(bool bInWantShadow);
	void Cringe(float Duration);
	void ServerKnockdown(const struct FVector& RBLinearVelocity, const struct FVector& RBAngularVelocity, const struct FVector& RadialOrigin, float RadialRadius, float RadialStrength, const struct FVector& PointImpulse, const struct FVector& PointImpulsePosition, const struct FName& PointImpulseBoneName);
	void GetTargetFrictionCylinder(float* CylinderRadius, float* CylinderHeight);
};


// Class GameFramework.GamePlayerController
// 0x0010 (0x0620 - 0x0610)
class AGamePlayerController : public APlayerController
{
public:
	unsigned long                                      bWarnCrowdMembers : 1;                                    // 0x0610(0x0004)
	unsigned long                                      bDebugCrowdAwareness : 1;                                 // 0x0610(0x0004) (Edit)
	unsigned long                                      bIsWarmupPaused : 1;                                      // 0x0610(0x0004) (Transient)
	float                                              AgentAwareRadius;                                         // 0x0614(0x0004)
	struct FName                                       CurrentSoundMode;                                         // 0x0618(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerController");
		return ptr;
	}


	void ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime);
	void WarmupPause(bool bDesiredPauseState);
	bool CanUnpauseWarmup();
	void GetCurrentMovie(struct FString* MovieName);
	void ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie);
	void ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame);
	void STATIC_KeepPlayingLoadingMovie();
	void STATIC_ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays);
	struct FName GetCurrentSoundMode();
	void SetSoundMode(const struct FName& InSoundModeName);
	void DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale);
	void NotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent);
	void NotifyCrowdAgentRefresh();
	void CrowdDebug(bool bEnabled);
	void CrowdToggle();
	void CrowdFocus();
	int GetUIPlayerIndex();
};


// Class GameFramework.GamePlayerInput
// 0x0000 (0x0170 - 0x0170)
class UGamePlayerInput : public UPlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerInput");
		return ptr;
	}

};


// Class GameFramework.GameProjectile
// 0x0000 (0x025C - 0x025C)
class AGameProjectile : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameProjectile");
		return ptr;
	}

};


// Class GameFramework.GameVehicle
// 0x0000 (0x0618 - 0x0618)
class AGameVehicle : public ASVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameVehicle");
		return ptr;
	}

};


// Class GameFramework.GameWeapon
// 0x0000 (0x030C - 0x030C)
class AGameWeapon : public AWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameWeapon");
		return ptr;
	}

};


// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0014 (0x0064 - 0x0050)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                                 // 0x0050(0x0004) (Native)
	struct FVector                                     OutOfViewLocation;                                        // 0x0054(0x000C)
	unsigned long                                      bShowDebug : 1;                                           // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshGoal_OutOfViewFrom");
		return ptr;
	}


	void Recycle();
	bool STATIC_MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation);
	void RecycleNative();
};


// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x0028 (0x0078 - 0x0050)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                                 // 0x0050(0x000C) (Transient)
	struct FVector                                     Rotation;                                                 // 0x005C(0x000C) (Transient)
	float                                              DistanceToCheck;                                          // 0x0068(0x0004) (Transient)
	TArray<struct FVector>                             LocationsToCheck;                                         // 0x006C(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations");
		return ptr;
	}


	void Recycle();
	bool STATIC_BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck);
};


// Class GameFramework.SeqAct_ControlGameMovie
// 0x0014 (0x010C - 0x00F8)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                                // 0x00F8(0x000C) (Edit, NeedCtorLink)
	int                                                StartOfRenderingMovieFrame;                               // 0x0104(0x0004) (Edit)
	int                                                EndOfRenderingMovieFrame;                                 // 0x0108(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_ControlGameMovie");
		return ptr;
	}

};


// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	float                                              WarmupPct;                                                // 0x00E8(0x0004) (Edit)
	unsigned long                                      bKillAgentsInstantly : 1;                                 // 0x00EC(0x0004) (Edit)
	unsigned long                                      bClearOldArchetypes : 1;                                  // 0x00EC(0x0004) (Edit)
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                           // 0x00F0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
	void FindPopMgrTarget();
};


// Class GameFramework.SeqAct_PlayAgentAnimation
// 0x0024 (0x011C - 0x00F8)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	TArray<struct FName>                               AnimationList;                                            // 0x00F8(0x000C) (Edit, NeedCtorLink)
	float                                              BlendInTime;                                              // 0x0104(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0108(0x0004) (Edit)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x010C(0x0004) (Edit)
	unsigned long                                      bFaceActionTargetFirst : 1;                               // 0x010C(0x0004) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x010C(0x0004) (Edit)
	unsigned long                                      bBlendBetweenAnims : 1;                                   // 0x010C(0x0004) (Edit)
	int                                                LoopIndex;                                                // 0x0110(0x0004) (Edit)
	float                                              LoopTime;                                                 // 0x0114(0x0004) (Edit)
	class AActor*                                      ActionTarget;                                             // 0x0118(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_PlayAgentAnimation");
		return ptr;
	}


	void SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent);
	int STATIC_GetObjClassVersion();
};


// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0100 - 0x0100)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_CrowdAgentReachedDestination");
		return ptr;
	}

};


// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x0140 - 0x00C4)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                                     // 0x00C4(0x0004) (Edit)
	unsigned long                                      bPlayRecoil : 1;                                          // 0x00C4(0x0004) (Edit, Transient)
	unsigned long                                      bOldPlayRecoil : 1;                                       // 0x00C4(0x0004) (Transient)
	unsigned long                                      bApplyControl : 1;                                        // 0x00C4(0x0004) (Transient)
	struct FRecoilDef                                  Recoil;                                                   // 0x00C8(0x0070) (Edit)
	struct FVector2D                                   Aim;                                                      // 0x0138(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSkelCtrl_Recoil");
		return ptr;
	}

};


// Class GameFramework.GameCameraBase
// 0x0008 (0x0044 - 0x003C)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                             // 0x003C(0x0004) (Transient)
	unsigned long                                      bResetCameraInterpolation : 1;                            // 0x0040(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCameraBase");
		return ptr;
	}


	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void Init();
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	void UpdateCamera(class APawn* P, float DeltaTime, struct FTViewTarget* OutVT);
	void ResetInterpolation();
	void OnBecomeInActive(class UGameCameraBase* NewCamera);
	void OnBecomeActive(class UGameCameraBase* OldCamera);
};


// Class GameFramework.GameThirdPersonCamera
// 0x0134 (0x0178 - 0x0044)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	struct FVector                                     LastActualCameraOrigin;                                   // 0x0044(0x000C) (Transient)
	float                                              WorstLocBlockedPct;                                       // 0x0050(0x0004)
	float                                              WorstLocPenetrationExtentScale;                           // 0x0054(0x0004) (Edit)
	float                                              PenetrationBlendOutTime;                                  // 0x0058(0x0004) (Edit)
	float                                              PenetrationBlendInTime;                                   // 0x005C(0x0004) (Edit)
	float                                              PenetrationBlockedPct;                                    // 0x0060(0x0004)
	float                                              PenetrationExtentScale;                                   // 0x0064(0x0004) (Edit)
	struct FVector                                     LastActualOriginOffset;                                   // 0x0068(0x000C) (Transient)
	struct FRotator                                    LastActualCameraOriginRot;                                // 0x0074(0x000C) (Transient)
	float                                              OriginOffsetInterpSpeed;                                  // 0x0080(0x0004) (Edit)
	struct FVector                                     LastViewOffset;                                           // 0x0084(0x000C) (Transient)
	float                                              LastCamFOV;                                               // 0x0090(0x0004) (Transient)
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                                    // 0x0094(0x0004) (Edit, EditInline)
	class UClass*                                      ThirdPersonCamDefaultClass;                               // 0x0098(0x0004) (Edit)
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                           // 0x009C(0x0004) (Edit, Transient, EditInline)
	float                                              LastHeightAdjustment;                                     // 0x00A0(0x0004) (Transient)
	float                                              LastPitchAdjustment;                                      // 0x00A4(0x0004) (Transient)
	float                                              LastYawAdjustment;                                        // 0x00A8(0x0004) (Transient)
	float                                              LeftoverPitchAdjustment;                                  // 0x00AC(0x0004) (Transient)
	float                                              Focus_BackOffStrength;                                    // 0x00B0(0x0004) (Edit)
	float                                              Focus_StepHeightAdjustment;                               // 0x00B4(0x0004) (Edit)
	int                                                Focus_MaxTries;                                           // 0x00B8(0x0004) (Edit)
	float                                              Focus_FastAdjustKickInTime;                               // 0x00BC(0x0004) (Edit)
	float                                              LastFocusChangeTime;                                      // 0x00C0(0x0004) (Transient)
	struct FVector                                     ActualFocusPointWorldLoc;                                 // 0x00C4(0x000C) (Transient)
	struct FVector                                     LastFocusPointLoc;                                        // 0x00D0(0x000C) (Transient)
	struct FCamFocusPointParams                        FocusPoint;                                               // 0x00DC(0x0034) (Edit)
	unsigned long                                      bFocusPointSet : 1;                                       // 0x0110(0x0004)
	unsigned long                                      bFocusPointSuccessful : 1;                                // 0x0110(0x0004) (Transient)
	unsigned long                                      bDoingACameraTurn : 1;                                    // 0x0110(0x0004)
	unsigned long                                      bTurnAlignTargetWhenFinished : 1;                         // 0x0110(0x0004)
	unsigned long                                      bDrawDebug : 1;                                           // 0x0110(0x0004) (Edit)
	unsigned long                                      bDoingDirectLook : 1;                                     // 0x0110(0x0004) (Transient)
	unsigned long                                      bDebugChangedCameraMode : 1;                              // 0x0110(0x0004) (Edit)
	float                                              TurnCurTime;                                              // 0x0114(0x0004)
	int                                                TurnStartAngle;                                           // 0x0118(0x0004)
	int                                                TurnEndAngle;                                             // 0x011C(0x0004)
	float                                              TurnTotalTime;                                            // 0x0120(0x0004)
	float                                              TurnDelay;                                                // 0x0124(0x0004)
	int                                                LastPostCamTurnYaw;                                       // 0x0128(0x0004) (Transient)
	int                                                DirectLookYaw;                                            // 0x012C(0x0004) (Transient)
	float                                              DirectLookInterpSpeed;                                    // 0x0130(0x0004) (Edit)
	float                                              WorstLocInterpSpeed;                                      // 0x0134(0x0004) (Edit)
	struct FVector                                     LastWorstLocationLocal;                                   // 0x0138(0x000C) (Transient)
	struct FVector                                     LastPreModifierCameraLoc;                                 // 0x0144(0x000C) (Transient)
	struct FRotator                                    LastPreModifierCameraRot;                                 // 0x0150(0x000C) (Transient)
	TArray<struct FPenetrationAvoidanceFeeler>         PenetrationAvoidanceFeelers;                              // 0x015C(0x000C) (Edit, NeedCtorLink)
	float                                              OffsetAdjustmentInterpSpeed;                              // 0x0168(0x0004) (Edit, Const)
	struct FVector                                     LastOffsetAdjustment;                                     // 0x016C(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCamera");
		return ptr;
	}


	void ResetInterpolation();
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void OnBecomeActive(class UGameCameraBase* OldCamera);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	void UpdateCameraMode(class APawn* P);
	class UGameThirdPersonCameraMode* FindBestCameraMode(class APawn* P);
	void AdjustFocusPointInterpolation(const struct FRotator& Delta);
	struct FVector GetActualFocusLocation();
	void UpdateFocusPoint(class APawn* P);
	void ClearFocusPoint(bool bLeaveCameraRotation);
	class AActor* GetFocusActor();
	void SetFocusOnActor(class AActor* FocusActor, const struct FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg);
	void SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg);
	void AdjustTurn(int AngleOffset);
	void EndTurn();
	void BeginTurn(int StartAngle, int EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished);
	void PlayerUpdateCamera(class APawn* P, float DeltaTime, struct FTViewTarget* OutVT);
	void UpdateCamera(class APawn* P, float DeltaTime, struct FTViewTarget* OutVT);
	float GetDesiredFOV(class APawn* ViewedPawn);
	void Init();
	void Reset();
	class UGameThirdPersonCameraMode* CreateCameraMode(class UClass* ModeClass);
};


// Class GameFramework.GamePlayerCamera
// 0x0068 (0x0480 - 0x0418)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                           // 0x0418(0x0004) (Edit, Transient, EditInline)
	class UClass*                                      ThirdPersonCameraClass;                                   // 0x041C(0x0004) (Edit, Const)
	class UGameCameraBase*                             FixedCam;                                                 // 0x0420(0x0004) (Edit, Transient, EditInline)
	class UClass*                                      FixedCameraClass;                                         // 0x0424(0x0004) (Edit, Const)
	class UGameCameraBase*                             CurrentCamera;                                            // 0x0428(0x0004) (Edit, Transient, EditInline)
	unsigned long                                      bUseForcedCamFOV : 1;                                     // 0x042C(0x0004) (Transient)
	unsigned long                                      bInterpolateCamChanges : 1;                               // 0x042C(0x0004) (Transient)
	unsigned long                                      bResetInterp : 1;                                         // 0x042C(0x0004) (Transient)
	float                                              ForcedCamFOV;                                             // 0x0430(0x0004) (Transient)
	class AActor*                                      LastViewTarget;                                           // 0x0434(0x0004) (Transient)
	float                                              SplitScreenShakeScale;                                    // 0x0438(0x0004) (Edit, Const)
	class AActor*                                      LastTargetBase;                                           // 0x043C(0x0004) (Transient)
	struct FMatrix                                     LastTargetBaseTM;                                         // 0x0440(0x0040) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerCamera");
		return ptr;
	}


	float AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn);
	void ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	void ResetInterpolation();
	void SetColorScale(const struct FVector& NewColorScale);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void UpdateCameraLensEffects(struct FTViewTarget* OutVT);
	void UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT);
	bool ShouldConstrainAspectRatio();
	class UGameCameraBase* FindBestCameraType(class AActor* CameraTarget);
	void Reset();
	void PostBeginPlay();
	void CacheLastTargetBaseInfo(class AActor* TargetBase);
	class UGameCameraBase* CreateCamera(class UClass* CameraClass);
};


// Class GameFramework.GameThirdPersonCameraMode
// 0x01EC (0x0228 - 0x003C)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                           // 0x003C(0x0004) (Transient)
	float                                              FOVAngle;                                                 // 0x0040(0x0004) (Edit, Const, Config)
	float                                              BlendTime;                                                // 0x0044(0x0004) (Edit, Const)
	unsigned long                                      bLockedToViewTarget : 1;                                  // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bDirectLook : 1;                                          // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bFollowTarget : 1;                                        // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bInterpLocation : 1;                                      // 0x0048(0x0004) (Edit)
	unsigned long                                      bUsePerAxisOriginLocInterp : 1;                           // 0x0048(0x0004) (Edit)
	unsigned long                                      bInterpRotation : 1;                                      // 0x0048(0x0004) (Edit)
	unsigned long                                      bRotInterpSpeedConstant : 1;                              // 0x0048(0x0004) (Edit)
	unsigned long                                      bDoPredictiveAvoidance : 1;                               // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bValidateWorstLoc : 1;                                    // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bSkipCameraCollision : 1;                                 // 0x0048(0x0004) (Edit)
	unsigned long                                      bAdjustDOF : 1;                                           // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bDOFUpdated : 1;                                          // 0x0048(0x0004) (Transient)
	unsigned long                                      bInterpViewOffsetOnlyForCamTransition : 1;                // 0x0048(0x0004) (Edit)
	float                                              FollowingInterpSpeed_Pitch;                               // 0x004C(0x0004) (Edit, Const)
	float                                              FollowingInterpSpeed_Yaw;                                 // 0x0050(0x0004) (Edit, Const)
	float                                              FollowingInterpSpeed_Roll;                                // 0x0054(0x0004) (Edit, Const)
	float                                              FollowingCameraVelThreshold;                              // 0x0058(0x0004) (Edit, Const)
	float                                              OriginLocInterpSpeed;                                     // 0x005C(0x0004) (Edit)
	struct FVector                                     PerAxisOriginLocInterpSpeed;                              // 0x0060(0x000C) (Edit)
	float                                              OriginRotInterpSpeed;                                     // 0x006C(0x0004) (Edit)
	struct FVector                                     StrafeLeftAdjustment;                                     // 0x0070(0x000C) (Edit, Const)
	struct FVector                                     StrafeRightAdjustment;                                    // 0x007C(0x000C) (Edit, Const)
	float                                              StrafeOffsetScalingThreshold;                             // 0x0088(0x0004) (Edit, Const)
	float                                              StrafeOffsetInterpSpeedIn;                                // 0x008C(0x0004) (Edit, Const)
	float                                              StrafeOffsetInterpSpeedOut;                               // 0x0090(0x0004) (Edit, Const)
	struct FVector                                     LastStrafeOffset;                                         // 0x0094(0x000C) (Transient)
	struct FVector                                     RunFwdAdjustment;                                         // 0x00A0(0x000C) (Edit, Const)
	struct FVector                                     RunBackAdjustment;                                        // 0x00AC(0x000C) (Edit, Const)
	float                                              RunOffsetScalingThreshold;                                // 0x00B8(0x0004) (Edit, Const)
	float                                              RunOffsetInterpSpeedIn;                                   // 0x00BC(0x0004) (Edit, Const)
	float                                              RunOffsetInterpSpeedOut;                                  // 0x00C0(0x0004) (Edit, Const)
	struct FVector                                     LastRunOffset;                                            // 0x00C4(0x000C) (Transient)
	struct FVector                                     WorstLocOffset;                                           // 0x00D0(0x000C) (Edit, Const)
	struct FVector                                     TargetRelativeCameraOriginOffset;                         // 0x00DC(0x000C) (Edit, Const)
	struct FViewOffsetData                             ViewOffset;                                               // 0x00E8(0x0024) (Edit, Const)
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[0x6];                      // 0x010C(0x0024) (Edit, Const)
	float                                              DOF_FalloffExponent;                                      // 0x01E4(0x0004) (Edit, Const)
	float                                              DOF_BlurKernelSize;                                       // 0x01E8(0x0004) (Edit, Const)
	float                                              DOF_FocusInnerRadius;                                     // 0x01EC(0x0004) (Edit, Const)
	float                                              DOF_MaxNearBlurAmount;                                    // 0x01F0(0x0004) (Edit, Const)
	float                                              DOF_MaxFarBlurAmount;                                     // 0x01F4(0x0004) (Edit, Const)
	float                                              LastDOFRadius;                                            // 0x01F8(0x0004) (Transient)
	float                                              LastDOFDistance;                                          // 0x01FC(0x0004) (Transient)
	float                                              DOFDistanceInterpSpeed;                                   // 0x0200(0x0004) (Edit, Const)
	struct FVector                                     DOFTraceExtent;                                           // 0x0204(0x000C) (Edit, Const)
	float                                              DOF_RadiusFalloff;                                        // 0x0210(0x0004) (Edit, Const)
	struct FVector2D                                   DOF_RadiusRange;                                          // 0x0214(0x0008) (Edit, Const)
	struct FVector2D                                   DOF_RadiusDistRange;                                      // 0x021C(0x0008) (Edit, Const)
	float                                              ViewOffsetInterp;                                         // 0x0224(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode");
		return ptr;
	}


	void SetViewOffset(struct FViewOffsetData* NewViewOffset);
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void UpdatePostProcess(float DeltaTime, struct FTViewTarget* VT);
	struct FVector DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace);
	struct FVector GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	bool SetFocusPoint(class APawn* ViewedPawn);
	struct FVector GetCameraWorstCaseLoc(class APawn* TargetPawn);
	float GetDesiredFOV(class APawn* ViewedPawn);
	struct FVector AdjustViewOffset(class APawn* P, const struct FVector& Offset);
	void OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode);
	void OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode);
};


// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000C (0x0234 - 0x0228)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	float                                              WorstLocAimingZOffset;                                    // 0x0228(0x0004) (Edit, Const)
	unsigned long                                      bTemporaryOriginRotInterp : 1;                            // 0x022C(0x0004) (Transient)
	float                                              TemporaryOriginRotInterpSpeed;                            // 0x0230(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode_Default");
		return ptr;
	}

};


// Class GameFramework.GameDecal
// 0x0008 (0x02F4 - 0x02EC)
class UGameDecal : public UDecalComponent
{
public:
	class UMaterialInstanceTimeVarying*                MITV_Decal;                                               // 0x02EC(0x0004) (Transient)
	class APawn*                                       Instigator;                                               // 0x02F0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDecal");
		return ptr;
	}

};


// Class GameFramework.GameDecalManager
// 0x0004 (0x0250 - 0x024C)
class AGameDecalManager : public ADecalManager
{
public:
	float                                              MinDecalDistanceSq;                                       // 0x024C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDecalManager");
		return ptr;
	}


	class UGameDecal* SpawnDecalMinimal(float InDecalLifeSpan, float InCanSpawnDistance, struct FVector* DecalLocation);
	bool IsTooCloseToActiveDecal(float InCanSpawnDistance, struct FVector* DecalLocation);
};


// Class GameFramework.GameParticleEventManager
// 0x0000 (0x021C - 0x021C)
class AGameParticleEventManager : public AParticleEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameParticleEventManager");
		return ptr;
	}


	void HandleParticleModuleEventSendToGame(class UParticleModuleEventSendToGame* InEvent, struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName);
};


// Class GameFramework.GameSpecialMove
// 0x0040 (0x007C - 0x003C)
class UGameSpecialMove : public UObject
{
public:
	class AGamePawn*                                   PawnOwner;                                                // 0x003C(0x0004)
	struct FName                                       Handle;                                                   // 0x0040(0x0008)
	float                                              LastCanDoSpecialMoveTime;                                 // 0x0048(0x0004) (Transient)
	unsigned long                                      bLastCanDoSpecialMove : 1;                                // 0x004C(0x0004)
	unsigned long                                      bReachPreciseDestination : 1;                             // 0x004C(0x0004) (Const)
	unsigned long                                      bReachedPreciseDestination : 1;                           // 0x004C(0x0004) (Const)
	unsigned long                                      bReachPreciseRotation : 1;                                // 0x004C(0x0004) (Const)
	unsigned long                                      bReachedPreciseRotation : 1;                              // 0x004C(0x0004) (Const)
	unsigned long                                      bForcePrecisePosition : 1;                                // 0x004C(0x0004)
	struct FVector                                     PreciseDestination;                                       // 0x0050(0x000C) (Const)
	class AActor*                                      PreciseDestBase;                                          // 0x005C(0x0004) (Const)
	struct FVector                                     PreciseDestRelOffset;                                     // 0x0060(0x000C) (Const)
	float                                              PreciseRotationInterpolationTime;                         // 0x006C(0x0004) (Const)
	struct FRotator                                    PreciseRotation;                                          // 0x0070(0x000C) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSpecialMove");
		return ptr;
	}


	struct FVector RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset);
	struct FVector WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset);
	void ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation);
	bool MessageEvent(const struct FName& EventName, class UObject* Sender);
	void ResetFacePreciseRotation();
	void ReachedPrecisePosition();
	void SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime);
	void SetReachPreciseDestination(const struct FVector& DestinationToReach, bool bCancel);
	bool ShouldReplicate();
	void SpecialMoveFlagsUpdated();
	void Tick(float DeltaTime);
	void SpecialMoveEnded(const struct FName& PrevMove, const struct FName& NextMove);
	void SpecialMoveStarted(bool bForced, const struct FName& PrevMove);
	bool InternalCanDoSpecialMove();
	bool CanDoSpecialMove(bool bForceCheck);
	bool CanOverrideSpecialMove(const struct FName& InMove);
	bool CanOverrideMoveWith(const struct FName& NewMove);
	bool CanChainMove(const struct FName& NextMove);
	void ExtractSpecialMoveFlags(int Flags);
	void InitSpecialMoveFlags(int* out_Flags);
	void InitSpecialMove(class AGamePawn* inPawn, const struct FName& InHandle);
};


// Class GameFramework.GameCrowdSpawnerInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnerInterface");
		return ptr;
	}


	bool AddToAgentPool(class AGameCrowdAgent* Agent);
	void AgentDestroyed(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnInterface");
		return ptr;
	}


	void GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot);
};


// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x02B4 - 0x02B4)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DynamicGameCrowdDestination");
		return ptr;
	}

};


// Class GameFramework.GameCrowd_ListOfAgents
// 0x000C (0x0048 - 0x003C)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	TArray<struct FAgentArchetypeInfo>                 ListOfAgents;                                             // 0x003C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowd_ListOfAgents");
		return ptr;
	}

};


// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x02B4 - 0x02B4)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionDestination");
		return ptr;
	}

};


// Class GameFramework.GameExplosionContent
// 0x0048 (0x0084 - 0x003C)
class UGameExplosionContent : public UObject
{
public:
	unsigned long                                      bAutoControllerVibration : 1;                             // 0x003C(0x0004) (Edit, Const)
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;                   // 0x003C(0x0004) (Edit, Const)
	class USoundCue*                                   ExplosionSound;                                           // 0x0040(0x0004) (Edit, Const)
	class UCameraShake*                                CamShake;                                                 // 0x0044(0x0004) (Edit, Const)
	class UCameraShake*                                CamShake_Left;                                            // 0x0048(0x0004) (Edit, Const)
	class UCameraShake*                                CamShake_Right;                                           // 0x004C(0x0004) (Edit, Const)
	class UCameraShake*                                CamShake_Rear;                                            // 0x0050(0x0004) (Edit, Const)
	float                                              CamShakeInnerRadius;                                      // 0x0054(0x0004) (Edit, Const)
	float                                              CamShakeOuterRadius;                                      // 0x0058(0x0004) (Edit, Const)
	float                                              CamShakeFalloff;                                          // 0x005C(0x0004) (Edit, Const)
	class UClass*                                      CameraLensEffect;                                         // 0x0060(0x0004) (Edit, Const)
	float                                              CameraLensEffectRadius;                                   // 0x0064(0x0004) (Edit, Const)
	class UPointLightComponent*                        ExploLight;                                               // 0x0068(0x0004) (Edit, Const, ExportObject, Component, EditInline)
	float                                              ExploLightFadeOutTime;                                    // 0x006C(0x0004) (Edit, Const)
	class URadialBlurComponent*                        ExploRadialBlur;                                          // 0x0070(0x0004) (Edit, Const, ExportObject, Component, EditInline)
	float                                              ExploRadialBlurFadeOutTime;                               // 0x0074(0x0004) (Edit, Const)
	float                                              ExploRadialBlurMaxBlur;                                   // 0x0078(0x0004) (Edit, Const)
	class UParticleSystem*                             ParticleEmitterTemplate;                                  // 0x007C(0x0004) (Edit, Const)
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                                       // 0x0080(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionContent");
		return ptr;
	}

};


// Class GameFramework.GameFixedCamera
// 0x0004 (0x0048 - 0x0044)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                               // 0x0044(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameFixedCamera");
		return ptr;
	}


	void OnBecomeActive(class UGameCameraBase* OldCamera);
	void UpdateCamera(class APawn* P, float DeltaTime, struct FTViewTarget* OutVT);
};


// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x0308 - 0x0308)
class AGameKActorSpawnableEffect : public AKActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameKActorSpawnableEffect");
		return ptr;
	}


	void Tick(float DeltaTime);
	void FellOutOfWorld(class UClass* dmgType);
	void PostBeginPlay();
};


// Class GameFramework.GameWaveForms
// 0x0010 (0x004C - 0x003C)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                                   // 0x003C(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                                    // 0x0040(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                                      // 0x0044(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                                       // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameWaveForms");
		return ptr;
	}

};


// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0004 (0x0040 - 0x003C)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                            // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.PMESTG_LeaveADecalBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
