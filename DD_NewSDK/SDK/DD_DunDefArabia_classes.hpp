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

// Class DunDefArabia.GenieLamp
// 0x007C (0x0298 - 0x021C)
class AGenieLamp : public AActor
{
public:
	class USkeletalMeshComponent*                      LampMesh;                                                 // 0x021C(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       ActivateAnimName;                                         // 0x0220(0x0008) (Edit)
	struct FName                                       LoopingActiveAnimName;                                    // 0x0228(0x0008) (Edit)
	struct FName                                       VFXSocketName;                                            // 0x0230(0x0008) (Edit)
	struct FName                                       CustomAnimNodeName;                                       // 0x0238(0x0008) (Edit)
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                           // 0x0240(0x0004)
	class UParticleSystemComponent*                    ActiveParticleComponent;                                  // 0x0244(0x0004) (Edit, ExportObject, Component, EditInline)
	class AActor*                                      AssociatedSpawnPoint;                                     // 0x0248(0x0004) (Edit, Net)
	struct FColor                                      ActivationTextColor;                                      // 0x024C(0x0004) (Edit)
	struct FString                                     ActivationText;                                           // 0x0250(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              AllowableActivationDistance;                              // 0x025C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     ActivateEmitterDirectional;                               // 0x0260(0x0004) (Edit)
	class UAudioComponent*                             ActiveSoundComponent;                                     // 0x0264(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   ActiveSound;                                              // 0x0268(0x0004) (Edit)
	class UDynamicLightEnvironmentComponent*           TheLightEnvironment;                                      // 0x026C(0x0004) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bSpawnStartLamp : 1;                                      // 0x0270(0x0004) (Edit)
	unsigned long                                      bActive : 1;                                              // 0x0270(0x0004)
	class UMaterialInstanceConstant*                   myLampMaterialOverride;                                   // 0x0274(0x0004) (Edit)
	class UMaterialInstanceConstant*                   myMIC;                                                    // 0x0278(0x0004) (Transient)
	struct FName                                       myMICParam;                                               // 0x027C(0x0008) (Edit)
	float                                              myMICParamInActiveValue;                                  // 0x0284(0x0004) (Edit)
	float                                              myMICParamActiveValue;                                    // 0x0288(0x0004) (Edit)
	int                                                MaterialOverrideIdx;                                      // 0x028C(0x0004) (Edit)
	class ADunDefGenieBossController*                  myGenie;                                                  // 0x0290(0x0004)
	float                                              LastUsedTime;                                             // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.GenieLamp");
		return ptr;
	}


	void PlayActivateAnim();
	void ShutDownEffects();
	void StartActiveEffects();
	void DoActivation(class ADunDefPlayerController* PC);
	void RemoveCurrentGenieFromLamp();
	void GiveLampAGenie(class AController* newGenie);
	int GetToolTipPriority();
	unsigned long TakesToolTipPriority(const TScriptInterface<class UDunDefToolTipInterface>& otherToolTip);
	unsigned long ContinueDrawingToolTip(unsigned long ContinueDrawing);
	void DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer);
	float GetActivationOffset();
	float GetActivationWeighting();
	void Client_Activate(class ADunDefPlayerController* PC, int activationType);
	void Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType);
	int AllowActivation(class ADunDefPlayerController* PC, int activationType);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefArabia.DunDefGenieBossController
// 0x0180 (0x078C - 0x060C)
class ADunDefGenieBossController : public ADunDefEnemyController
{
public:
	TArray<struct FBeamHitActors>                      LeftEyeHitActors;                                         // 0x060C(0x000C) (NeedCtorLink)
	TArray<struct FBeamHitActors>                      RightEyeHitActors;                                        // 0x0618(0x000C) (NeedCtorLink)
	TArray<struct FTongueTraceSockets>                 TongueSockets;                                            // 0x0624(0x000C) (Edit, NeedCtorLink)
	TArray<class ADunDefProjectile*>                   BurpProjectiles;                                          // 0x0630(0x000C) (Edit, NeedCtorLink)
	int                                                NumBurpProjectiles;                                       // 0x063C(0x0004) (Edit)
	struct FRotator                                    BurpShotAngleOffset;                                      // 0x0640(0x000C) (Edit)
	float                                              BurpCD;                                                   // 0x064C(0x0004) (Edit)
	float                                              LastBurpTime;                                             // 0x0650(0x0004)
	TArray<float>                                      HeadActiveTime;                                           // 0x0654(0x000C) (Edit, NeedCtorLink)
	float                                              HeadActiveDmgPct[0x6];                                    // 0x0660(0x0004) (Edit)
	float                                              currentDmgAmt;                                            // 0x0678(0x0004)
	float                                              MaxLazerDistance;                                         // 0x067C(0x0004) (Edit)
	float                                              BeamDamageTime;                                           // 0x0680(0x0004) (Edit)
	float                                              LazerDmgAmount;                                           // 0x0684(0x0004) (Edit)
	struct FVector                                     LazerDamageMomentum;                                      // 0x0688(0x000C) (Edit)
	float                                              LazerCastTime;                                            // 0x0694(0x0004) (Edit)
	float                                              LazerCastCD;                                              // 0x0698(0x0004) (Edit)
	float                                              LazerCastCrazyEyeChance;                                  // 0x069C(0x0004) (Edit)
	float                                              RandomCrazyEyesChance;                                    // 0x06A0(0x0004) (Edit)
	float                                              LastLazerCast;                                            // 0x06A4(0x0004)
	unsigned long                                      bDoingCrazyEyes : 1;                                      // 0x06A8(0x0004)
	unsigned long                                      IsToungueSwing : 1;                                       // 0x06A8(0x0004)
	unsigned long                                      bStartEyeDamage : 1;                                      // 0x06A8(0x0004)
	unsigned long                                      bIsBiting : 1;                                            // 0x06A8(0x0004)
	unsigned long                                      bSuperTongue : 1;                                         // 0x06A8(0x0004)
	unsigned long                                      bForcedHidden : 1;                                        // 0x06A8(0x0004)
	unsigned long                                      bRageMode : 1;                                            // 0x06A8(0x0004)
	unsigned long                                      bSetPawnAsHidden : 1;                                     // 0x06A8(0x0004) (Transient)
	TArray<class AGenieLamp*>                          myLamps;                                                  // 0x06AC(0x000C) (NeedCtorLink)
	TArray<class AGenieLamp*>                          spawnStartLamps;                                          // 0x06B8(0x000C) (NeedCtorLink)
	class AGenieLamp*                                  currentLamp;                                              // 0x06C4(0x0004)
	class AActor*                                      RightEyeTarget;                                           // 0x06C8(0x0004)
	class AActor*                                      LeftEyeTarget;                                            // 0x06CC(0x0004)
	int                                                BiteDamageAmount;                                         // 0x06D0(0x0004) (Edit)
	float                                              BiteDamageMomentum;                                       // 0x06D4(0x0004) (Edit)
	class UClass*                                      BiteDamageType;                                           // 0x06D8(0x0004) (Edit)
	float                                              BiteHitRadius;                                            // 0x06DC(0x0004) (Edit)
	float                                              BiteCD;                                                   // 0x06E0(0x0004) (Edit)
	float                                              meleeDistance;                                            // 0x06E4(0x0004) (Edit)
	TArray<class AActor*>                              MeleeHurtList;                                            // 0x06E8(0x000C) (NeedCtorLink)
	float                                              LastMeleeTime;                                            // 0x06F4(0x0004)
	class ADunDefDjinn*                                BabyDjinnTemplate;                                        // 0x06F8(0x0004) (Edit)
	int                                                MaxNumDjinnsToSpawn;                                      // 0x06FC(0x0004) (Edit)
	int                                                MaxNumDjinnsToSpawnPerSet;                                // 0x0700(0x0004) (Edit)
	float                                              BabyDjinnSpawnCD;                                         // 0x0704(0x0004) (Edit)
	TArray<struct FName>                               DjinSpawnSockets;                                         // 0x0708(0x000C) (Edit, NeedCtorLink)
	TArray<class ADunDefDjinn*>                        MyDjinns;                                                 // 0x0714(0x000C) (NeedCtorLink)
	int                                                currentNumActiveDjinns;                                   // 0x0720(0x0004)
	int                                                currentDjinnsSpawnedThisSet;                              // 0x0724(0x0004)
	float                                              LastDjinnSpawnTime;                                       // 0x0728(0x0004)
	float                                              RotationSpeed;                                            // 0x072C(0x0004) (Edit)
	float                                              TongueSuperAttackCD;                                      // 0x0730(0x0004) (Edit)
	float                                              TongueSuperAttackRange;                                   // 0x0734(0x0004) (Edit)
	float                                              LastSuperTongueAttack;                                    // 0x0738(0x0004)
	float                                              TongueAttackCD;                                           // 0x073C(0x0004) (Edit)
	int                                                TongueDamageAmount;                                       // 0x0740(0x0004) (Edit)
	float                                              TongueDamageMomentum;                                     // 0x0744(0x0004) (Edit)
	class UClass*                                      TongueDamageType;                                         // 0x0748(0x0004) (Edit)
	float                                              HeadActiveTimes[0x6];                                     // 0x074C(0x0004) (Edit)
	float                                              GeneralActiveDelay;                                       // 0x0764(0x0004) (Edit)
	float                                              LastActiveTime;                                           // 0x0768(0x0004)
	struct FVector                                     BurpLocation;                                             // 0x076C(0x000C)
	float                                              RageHealthPct;                                            // 0x0778(0x0004) (Edit)
	float                                              RageModeCDScalar;                                         // 0x077C(0x0004) (Edit)
	TArray<float>                                      MaxInLampTime;                                            // 0x0780(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefGenieBossController");
		return ptr;
	}


	void NotifyDjinnDeath(class ADunDefDjinn* deadDjinn);
	void SpawnDjinn();
	unsigned long KeepSpawningBabies();
	void ClearHitList();
	void SetTongueSwing();
	unsigned long AddToSwingHurtList(class AActor* newEntry);
	unsigned long ShouldDamage(class AActor* act);
	unsigned long CheckForBurp();
	unsigned long CheckForMelee();
	unsigned long CheckForSuperTongue();
	void BiteStop();
	void BiteStart();
	void DoBurp();
	void CheckForCustomAttacks();
	float GetCDMultiplier();
	void CheckPlayerCloseness();
	void PickLamp();
	void NotifyLampRubbed(class AActor* newSpawnPoint);
	void NotifyReformed();
	void LeaveLamp();
	unsigned long CheckActiveDamage();
	unsigned long FindTargetRightEye(unsigned long bSetTarget);
	unsigned long FindTargetLeftEye(unsigned long bSetTarget);
	void TraceRightEye(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, class UClass* currentEyeDmgType);
	void TraceLeftEye(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, class UClass* currentEyeDmgType);
	void ShutDownEyes();
	void StopEyeTracking();
	void GoToLamp();
	void SetRageMode();
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	unsigned long WantsHurtAnimation();
	unsigned long ForceIntoLamp();
	void SetInitialState();
	void PostBeginPlay();
};


// Class DunDefArabia.DjinnLamp
// 0x0008 (0x02A0 - 0x0298)
class ADjinnLamp : public AGenieLamp
{
public:
	class ADunDefDjinnController*                      myDjinn;                                                  // 0x0298(0x0004)
	class ADunDefEmitterSpawnable*                     KillDjinnEmitter;                                         // 0x029C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DjinnLamp");
		return ptr;
	}


	void PlayKillAnim();
	void DoActivation(class ADunDefPlayerController* PC);
	void RemoveCurrentGenieFromLamp();
	void GiveLampAGenie(class AController* newGenie);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefArabia.DunDefDjinnController
// 0x0110 (0x071C - 0x060C)
class ADunDefDjinnController : public ADunDefEnemyController
{
public:
	class AActor*                                      TargetActor;                                              // 0x060C(0x0004)
	float                                              MaximumProjectileAttackRange;                             // 0x0610(0x0004) (Edit)
	float                                              MinimumProjectileAttackRange;                             // 0x0614(0x0004) (Edit)
	TArray<class ADunDefProjectile*>                   ProjectileTemplates;                                      // 0x0618(0x000C) (Edit, NeedCtorLink)
	float                                              SpellInterruptDmgPct;                                     // 0x0624(0x0004) (Edit)
	TArray<int>                                        GoldHealAmtPerSec;                                        // 0x0628(0x000C) (Edit, NeedCtorLink)
	float                                              HealGoldTargetRate;                                       // 0x0634(0x0004) (Edit)
	float                                              GoldFollowRange;                                          // 0x0638(0x0004) (Edit)
	TArray<float>                                      GoldEnemyCastTime;                                        // 0x063C(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      GoldEnemyCoolDown;                                        // 0x0648(0x000C) (Edit, NeedCtorLink)
	float                                              LastGoldEnemyCastTime;                                    // 0x0654(0x0004)
	TArray<class AActor*>                              CurrentGoldenEnemies;                                     // 0x0658(0x000C) (NeedCtorLink)
	float                                              EnemySafeDistance;                                        // 0x0664(0x0004) (Edit)
	TArray<float>                                      TowerDestructCastTime;                                    // 0x0668(0x000C) (Edit, NeedCtorLink)
	float                                              TowerDestructCoolDown;                                    // 0x0674(0x0004) (Edit)
	TArray<float>                                      TowerDestructRange;                                       // 0x0678(0x000C) (Edit, NeedCtorLink)
	float                                              TowerLevelTargetScalar;                                   // 0x0684(0x0004) (Edit)
	float                                              TowerLevelDistanceExponent;                               // 0x0688(0x0004) (Edit)
	float                                              LastTowerDestructTime;                                    // 0x068C(0x0004)
	int                                                currentDamageTaken;                                       // 0x0690(0x0004)
	float                                              GeneralCastCD;                                            // 0x0694(0x0004) (Edit)
	float                                              LastSpellCastTime;                                        // 0x0698(0x0004)
	TArray<class UClass*>                              IgnoreForGoldTargeting;                                   // 0x069C(0x000C) (Edit, NeedCtorLink)
	float                                              GoldLevelTargetScalar;                                    // 0x06A8(0x0004) (Edit)
	float                                              GoldDistanceExponent;                                     // 0x06AC(0x0004) (Edit)
	float                                              FleeRadius;                                               // 0x06B0(0x0004) (Edit)
	struct FName                                       FleeStateName;                                            // 0x06B4(0x0008) (Edit)
	unsigned long                                      bDoNotFlee : 1;                                           // 0x06BC(0x0004) (Edit)
	unsigned long                                      bIsCasting : 1;                                           // 0x06BC(0x0004)
	unsigned long                                      bFinishedCasting : 1;                                     // 0x06BC(0x0004)
	unsigned long                                      bCastingLineOfSight : 1;                                  // 0x06BC(0x0004)
	unsigned long                                      bWasInterrupted : 1;                                      // 0x06BC(0x0004)
	unsigned long                                      bOnlyShootProjectiles : 1;                                // 0x06BC(0x0004) (Edit)
	unsigned long                                      bFindLampOnDeath : 1;                                     // 0x06BC(0x0004) (Edit)
	unsigned long                                      bBecomeAllyOnLampRelease : 1;                             // 0x06BC(0x0004) (Edit)
	unsigned long                                      bCountDeathOnLampRelease : 1;                             // 0x06BC(0x0004) (Edit)
	unsigned long                                      bAlly : 1;                                                // 0x06BC(0x0004)
	class ADunDefPawn*                                 FleeTarget;                                               // 0x06C0(0x0004)
	class ANavigationPoint*                            FleePoint;                                                // 0x06C4(0x0004)
	class AActor*                                      currentSpellTarget;                                       // 0x06C8(0x0004)
	class ADunDefDjinnManager*                         CastManager;                                              // 0x06CC(0x0004)
	class UClass*                                      defaultBackUpManagerClass;                                // 0x06D0(0x0004) (Edit)
	TArray<class UClass*>                              AllowableDamageInterruptActors;                           // 0x06D4(0x000C) (Edit, NeedCtorLink)
	int                                                currentProjectileIndex;                                   // 0x06E0(0x0004)
	int                                                LastPlayedHurtHealth;                                     // 0x06E4(0x0004)
	float                                              HurtStateHealthPercentInterval;                           // 0x06E8(0x0004) (Edit)
	float                                              CastTimeOut;                                              // 0x06EC(0x0004)
	class ADunDefGenieBossController*                  myGenie;                                                  // 0x06F0(0x0004)
	float                                              GoldEnemyRange;                                           // 0x06F4(0x0004) (Edit)
	TArray<float>                                      MaxInLampTime;                                            // 0x06F8(0x000C) (Edit, NeedCtorLink)
	float                                              AllyDjinnTimeOut;                                         // 0x0704(0x0004) (Edit)
	int                                                MaxAllowedTimesInLamp;                                    // 0x0708(0x0004) (Edit)
	float                                              MinTimeToReFlee;                                          // 0x070C(0x0004) (Edit)
	float                                              lastFleeTime;                                             // 0x0710(0x0004)
	int                                                TimesInLamp;                                              // 0x0714(0x0004)
	class ADjinnLamp*                                  currentLamp;                                              // 0x0718(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefDjinnController");
		return ptr;
	}


	void Destroyed();
	void DoAllyDjinnTimeOut();
	void NotifyLampRubbed(class AActor* SpawnPoint, class ADunDefPlayerController* RubbedController);
	unsigned long PickLamp();
	unsigned long AllowDeath();
	void NotifyFinishedReforming();
	void LeaveLamp();
	void NotifyGenieOfDeath(class APawn* inPawn);
	void PawnDied(class APawn* inPawn);
	void SetMyGenie(class ADunDefGenieBossController* newGenie);
	void ForceFlee(class ADunDefPawn* ForceFleeTarget);
	unsigned long CheckForFlee();
	class ADunDefProjectile* GetProjectile();
	void PickProjectileType();
	void ShootProjectile();
	void CheckForCustomAttacks();
	unsigned long IsValidUpgradeTower(class ADunDefTower* Tower);
	void CastTowerDestructSpell();
	class AActor* FindDestroyTower();
	void DestroyTower();
	float PlayFinishTowerDestructAnim();
	void FinishTowerDestructCast();
	void HealGoldTarget();
	void CastGoldEnemySpell();
	class AActor* FindGoldEnemyTarget();
	unsigned long CheckValidGoldTarget(class ADunDefEnemy* checkActor);
	float PlayFinishGoldAnim();
	void FinishGoldEnemyCast();
	void CheckCastTimeout();
	unsigned long CheckForCastingMovement(unsigned long bHasLineOfSight);
	void ClearCurrentSpellTarget();
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	void NotifyDamageTaken(int DamageAmount, class AActor* DamageCauser);
	unsigned long CheckCurrentCastTarget();
	void Cough(const struct FName& coughAnimName);
	void InterruptSpellCast(unsigned long bNoSeeking);
	void CheckSpellDamageAmount(class AActor* DamageCauser);
	unsigned long CheckAllowedCastingStart();
	unsigned long IsWithinCastingRange(class AActor* FollowTarget);
	class ANavigationPoint* FindNearestFleePoint(unsigned long bIgnoreFleeAngle);
	void CheckFleeDistance();
	void StopFlee();
	void CheckDirectReachability();
	void CheckIndirectReachability();
	void MoveUnreachable(const struct FVector& AttemptedDest, class AActor* AttemptedTarget);
	struct FVector GetObstructionJumpForwardDir(const struct FVector& forwardDir);
	void ObstructionJump(const struct FVector& jumpForwardDir, const struct FVector& jumpSideDir);
	struct FVector GeneratePathToActor(class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath);
	unsigned long MoveAroundBlockade(class AActor* blockadeActor, float BlockadeWidth, const struct FVector& HitNormal, unsigned long SkipBlockingCheck);
	unsigned long NavActorReachable(class AActor* A);
	class ANavigationPoint* FindNearestNavPointTo(class AActor* A, unsigned long bCheckVisible);
	float GetTargetingMultiplier(class AActor* ActorRef, float baseDesirability);
	void PostBeginPlay();
};


// Class DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia
// 0x0004 (0x00EC - 0x00E8)
class UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia : public USequenceAction
{
public:
	class ADunDefWaveBillBoard_ArabiaChallenge*        waveBillboard;                                            // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia");
		return ptr;
	}


	void Activated();
};


// Class DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge
// 0x000C (0x03DC - 0x03D0)
class ADunDefWaveBillBoard_ArabiaChallenge : public ADunDefWaveBillboard
{
public:
	TArray<struct FEnemyWaveEntry>                     SpecialEnemyWaveEntries;                                  // 0x03D0(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge");
		return ptr;
	}


	void RefreshBillboard();
};


// Class DunDefArabia.DunDefDjinn
// 0x01A8 (0x0EBC - 0x0D14)
class ADunDefDjinn : public ADunDefEnemy
{
public:
	class UParticleSystemComponent*                    FlyingParticleComponent;                                  // 0x0D14(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       FlyingParticleSocketName;                                 // 0x0D18(0x0008) (Edit)
	struct FName                                       InterruptAnimName;                                        // 0x0D20(0x0008) (Edit)
	class UMaterialInstanceConstant*                   GoldMaterialTemplate;                                     // 0x0D28(0x0004) (Edit)
	class UParticleSystem*                             GoldParticleEffect;                                       // 0x0D2C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     TowerDestroyTemplate;                                     // 0x0D30(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     TowerDestroyTemplate_Ally;                                // 0x0D34(0x0004) (Edit)
	class USoundCue*                                   TowerDestroySound;                                        // 0x0D38(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     GoldEnemyConvertTemplate;                                 // 0x0D3C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     GoldEnemyConvertTemplate_Ally;                            // 0x0D40(0x0004) (Edit)
	struct FSpellAnims                                 GoldEnemyAnims;                                           // 0x0D44(0x003C) (Edit)
	class ADunDefEnemy*                                goldTarget;                                               // 0x0D80(0x0004)
	class UParticleSystemComponent*                    AttachedVFXComponent;                                     // 0x0D84(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       ProjectileSocketName;                                     // 0x0D88(0x0008) (Edit)
	class UAnimNodeSequence*                           SpellAnimNode;                                            // 0x0D90(0x0004)
	class UAnimNodeBlend*                              SpellBlender;                                             // 0x0D94(0x0004)
	struct FSpellAnims                                 TowerDestructAnims;                                       // 0x0D98(0x003C) (Edit)
	class ADunDefTower*                                towerTarget;                                              // 0x0DD4(0x0004)
	float                                              DeathScaleDownTime;                                       // 0x0DD8(0x0004) (Edit)
	struct FName                                       GoldBeamSocketName;                                       // 0x0DDC(0x0008) (Edit)
	struct FName                                       TowerBeamSocketName;                                      // 0x0DE4(0x0008) (Edit)
	class UParticleSystemComponent*                    BeamParticleComponent;                                    // 0x0DEC(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             GoldBeamTemplate;                                         // 0x0DF0(0x0004) (Edit)
	class UParticleSystem*                             TowerBeamTemplate;                                        // 0x0DF4(0x0004) (Edit)
	class UParticleSystem*                             GoldBeamTemplate_Ally;                                    // 0x0DF8(0x0004) (Edit)
	class UParticleSystem*                             TowerBeamTemplate_Ally;                                   // 0x0DFC(0x0004) (Edit)
	class UParticleSystemComponent*                    CastingParticleComponent;                                 // 0x0E00(0x0004) (ExportObject, Component, EditInline)
	float                                              MaxGlowColor;                                             // 0x0E04(0x0004) (Edit)
	float                                              startTowerScaleValue;                                     // 0x0E08(0x0004)
	float                                              currentGlowValue;                                         // 0x0E0C(0x0004)
	float                                              castStart;                                                // 0x0E10(0x0004)
	float                                              scaleDownTime;                                            // 0x0E14(0x0004) (Edit)
	float                                              initialTowerScale;                                        // 0x0E18(0x0004)
	float                                              scaleStartTime;                                           // 0x0E1C(0x0004)
	unsigned long                                      bScaleDownTower : 1;                                      // 0x0E20(0x0004)
	unsigned long                                      bIgnoreUpdatingTower : 1;                                 // 0x0E20(0x0004)
	unsigned long                                      bReforming : 1;                                           // 0x0E20(0x0004)
	float                                              CastTime;                                                 // 0x0E24(0x0004) (Net)
	struct FLinearColor                                GlowColor;                                                // 0x0E28(0x0010) (Edit)
	struct FName                                       GlowColorParamName_Squire;                                // 0x0E38(0x0008) (Edit)
	struct FName                                       GlowColorParamName_Apprentice;                            // 0x0E40(0x0008) (Edit)
	struct FLinearColor                                originalColor;                                            // 0x0E48(0x0010)
	float                                              MinTrapOpacity;                                           // 0x0E58(0x0004) (Edit)
	float                                              MinAuraScale;                                             // 0x0E5C(0x0004) (Edit)
	TArray<struct FVector>                             DifficultyIdleColor;                                      // 0x0E60(0x000C) (Edit, NeedCtorLink)
	int                                                djinnNumber;                                              // 0x0E6C(0x0004)
	float                                              DjinnPushForce;                                           // 0x0E70(0x0004)
	float                                              DjinnProxDistance;                                        // 0x0E74(0x0004)
	struct FColor                                      MiniMapPulseColor;                                        // 0x0E78(0x0004) (Edit)
	float                                              MiniMapPulseRate;                                         // 0x0E7C(0x0004) (Edit)
	struct FName                                       EnterLampAnim;                                            // 0x0E80(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     DirectionalLampVFX;                                       // 0x0E88(0x0004) (Edit)
	float                                              LampScaleDownTime;                                        // 0x0E8C(0x0004) (Edit)
	class UMaterialInterface*                          AlliedMaterial;                                           // 0x0E90(0x0004) (Edit)
	class UTexture2D*                                  AlliedIcon;                                               // 0x0E94(0x0004) (Edit)
	float                                              AllyDmgMultiplier;                                        // 0x0E98(0x0004) (Edit)
	float                                              TowerDmgMultiplier;                                       // 0x0E9C(0x0004) (Edit)
	float                                              SpawnImmuneTime;                                          // 0x0EA0(0x0004) (Edit)
	float                                              MinUpDotForForcedMovement;                                // 0x0EA4(0x0004) (Edit)
	float                                              TowerTargetingDesirability_Desummoning;                   // 0x0EA8(0x0004) (Edit)
	float                                              LampScaleDownStartTime;                                   // 0x0EAC(0x0004)
	class ADjinnLamp*                                  myLamp;                                                   // 0x0EB0(0x0004)
	class UMaterialInstanceConstant*                   DissolveMIC;                                              // 0x0EB4(0x0004)
	class UAudioComponent*                             CastingSoundComponent;                                    // 0x0EB8(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefDjinn");
		return ptr;
	}


	float GetPawnDamageModifier(unsigned long bDontIncludeAbilities);
	class UTexture2D* GetMiniMapIconTexture();
	void UpdateToTeamMaterial();
	void NotifyTeamSwitch();
	void NotifyOfDeath(class ADunDefPlayerController* Killer);
	void UnHideDjinn();
	void HideDjinn();
	void PlayGoToLamp(class AActor* theLamp);
	void PlayLeaveLamp();
	void LeaveLamp(const struct FVector& NewLocation);
	float GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController);
	struct FColor GetMiniMapIconColor();
	void CheckDjinnProximity();
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	unsigned long AllowTrapSpringing(class ADunDefTower_DetonationType* trap);
	void ShutDownAllCastingVFX();
	float PlayAttackAnimation();
	void GetProjectileLocAndRot(struct FVector* Position, struct FRotator* Orientation);
	void FireProjectile();
	void ResetTowers();
	void ShutDownTowerVFX();
	float StopTowerDestructCast(class ADunDefTower* theTower);
	void SetInitialTowerValues();
	float StartTowerUpgradeCast(class AActor* castTarget);
	float StartTowerDestructCast(class AActor* castTarget);
	void StartTowerBeam();
	void UpdateTower();
	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum);
	void UnSetGoldenEnemy(class ADunDefEnemy* Enemy);
	void SetGoldenEnemy(class ADunDefEnemy* Enemy);
	float PlayInterruptAnimation();
	void ShutDownGoldVFX();
	float StopGoldEnemyCast();
	float StartGoldEnemyCast(class AActor* castTarget);
	void StartBeam();
	void PlayMajorHurtAnimation();
	void PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation);
	int UpdateDifficultyMaterial();
	void SetMovementPhysics();
	void DisableSpawnCollision();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	float GetTowerTargetingDesirability(class ADunDefTower* forTower);
};


// Class DunDefArabia.DunDefDjinnManager
// 0x0028 (0x0244 - 0x021C)
class ADunDefDjinnManager : public AActor
{
public:
	TArray<class AActor*>                              ActorsBeingTargeted;                                      // 0x021C(0x000C) (NeedCtorLink)
	TArray<class AActor*>                              GoldenActor;                                              // 0x0228(0x000C) (NeedCtorLink)
	TArray<class ADjinnLamp*>                          myLamps;                                                  // 0x0234(0x000C) (NeedCtorLink)
	float                                              LastGoldPurgeTime;                                        // 0x0240(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefDjinnManager");
		return ptr;
	}


	class ADjinnLamp* PickDjinnLamp();
	unsigned long IsActorAlreadyGold(class AActor* checkActor);
	void RemoveGoldenActorIndexed(int Index);
	void RemoveGoldenActor(class AActor* removeActor);
	void AddGoldenActor(class AActor* NewActor);
	unsigned long IsActorAlreadyTargeted(class AActor* checkActor);
	void RemoveTargetedActor(class AActor* removeActor);
	void AddTargetedActor(class AActor* NewActor);
	void PostBeginPlay();
};


// Class DunDefArabia.DunDefGenieBoss
// 0x0158 (0x0EC8 - 0x0D70)
class ADunDefGenieBoss : public ADunDefBoss
{
public:
	TArray<struct FEyeBeam>                            EyeBeamTypes;                                             // 0x0D70(0x000C) (Edit, NeedCtorLink)
	int                                                currentLeftEyeBeamIndex;                                  // 0x0D7C(0x0004) (Net)
	int                                                currentRightEyeBeamIndex;                                 // 0x0D80(0x0004) (Net)
	struct FName                                       EyeAttack_Crazy;                                          // 0x0D84(0x0008) (Edit)
	struct FName                                       EyeAttack_Start;                                          // 0x0D8C(0x0008) (Edit)
	struct FName                                       EyeAttack_Loop;                                           // 0x0D94(0x0008) (Edit)
	float                                              CrazyEyesTime;                                            // 0x0D9C(0x0004) (Edit)
	float                                              LampVFXMagnitude;                                         // 0x0DA0(0x0004) (Edit)
	class UParticleSystemComponent*                    HoverEffect;                                              // 0x0DA4(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       HoverSocketName;                                          // 0x0DA8(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     ImpactTemplate;                                           // 0x0DB0(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     DirectionalLampVFX;                                       // 0x0DB4(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     CrystalEmitter;                                           // 0x0DB8(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     currentLeftEyeImpactEmitter;                              // 0x0DBC(0x0004)
	class ADunDefEmitterSpawnable*                     currentRightEyeImpactEmitter;                             // 0x0DC0(0x0004)
	class UParticleSystemComponent*                    LeftEyeBeam;                                              // 0x0DC4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RightEyeBeam;                                             // 0x0DC8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    LeftEyeBeamStart;                                         // 0x0DCC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RightEyeBeamStart;                                        // 0x0DD0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RageEffect;                                               // 0x0DD4(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       RageEffectSocket;                                         // 0x0DD8(0x0008) (Edit)
	struct FName                                       LeftEyeSocketName;                                        // 0x0DE0(0x0008) (Edit)
	struct FName                                       RightEyeSocketName;                                       // 0x0DE8(0x0008) (Edit)
	struct FName                                       BurpSocketName;                                           // 0x0DF0(0x0008) (Edit)
	struct FName                                       BurpAnimName;                                             // 0x0DF8(0x0008) (Edit)
	struct FName                                       BiteAnim;                                                 // 0x0E00(0x0008) (Edit)
	struct FName                                       BiteSocket;                                               // 0x0E08(0x0008) (Edit)
	struct FName                                       DjinSpawnAnimName;                                        // 0x0E10(0x0008) (Edit)
	struct FName                                       LickAnimName;                                             // 0x0E18(0x0008) (Edit)
	struct FName                                       LickAnimName_Super;                                       // 0x0E20(0x0008) (Edit)
	struct FName                                       DeathLoopAnim;                                            // 0x0E28(0x0008) (Edit)
	float                                              HeadInterpScalar;                                         // 0x0E30(0x0004) (Edit)
	float                                              EyeSkelControlLoopAtInterpSpeed;                          // 0x0E34(0x0004) (Edit)
	float                                              MaxLazerDistance;                                         // 0x0E38(0x0004) (Edit)
	struct FName                                       DisappearAnimName;                                        // 0x0E3C(0x0008) (Edit)
	float                                              DissolveTime;                                             // 0x0E44(0x0004) (Edit)
	float                                              DeathDissolveTime;                                        // 0x0E48(0x0004) (Edit)
	float                                              HeadLookAtRotClamp;                                       // 0x0E4C(0x0004) (Edit)
	float                                              HeadLookAtInterpRate;                                     // 0x0E50(0x0004) (Edit)
	float                                              HeadLookAtRotClamp_Crazy;                                 // 0x0E54(0x0004) (Edit)
	float                                              HeadLookAtSinScale;                                       // 0x0E58(0x0004) (Edit)
	float                                              HeadLookAtInterpRate_Crazy;                               // 0x0E5C(0x0004) (Edit)
	struct FColor                                      MiniMapPulseColor;                                        // 0x0E60(0x0004) (Edit)
	float                                              MiniMapPulseRate;                                         // 0x0E64(0x0004) (Edit)
	float                                              TowerDmgMultiplier;                                       // 0x0E68(0x0004) (Edit)
	float                                              DissolveBegin;                                            // 0x0E6C(0x0004)
	unsigned long                                      bAllowEyeTracking : 1;                                    // 0x0E70(0x0004) (Net)
	unsigned long                                      bStartEyeDamage : 1;                                      // 0x0E70(0x0004) (Net)
	unsigned long                                      bStartDissolve : 1;                                       // 0x0E70(0x0004)
	unsigned long                                      bReforming : 1;                                           // 0x0E70(0x0004)
	unsigned long                                      bForceIntoLamp : 1;                                       // 0x0E70(0x0004) (Net)
	unsigned long                                      bRageMode : 1;                                            // 0x0E70(0x0004) (Net)
	class USkelControlLookAt*                          RightEyeLookAt;                                           // 0x0E74(0x0004)
	class USkelControlLookAt*                          LeftEyeLookAt;                                            // 0x0E78(0x0004)
	class USkelControlSingleBone*                      HeadLookAt;                                               // 0x0E7C(0x0004)
	class UMaterialInstanceConstant*                   HeadMIC;                                                  // 0x0E80(0x0004)
	class UMaterialInstanceConstant*                   TongueMIC;                                                // 0x0E84(0x0004)
	class AActor*                                      LeftEyeTarget;                                            // 0x0E88(0x0004) (Net)
	class AActor*                                      RightEyeTarget;                                           // 0x0E8C(0x0004) (Net)
	class AActor*                                      HeadLookAtTarget;                                         // 0x0E90(0x0004) (Net)
	struct FVector                                     PreviousRightEyeLocation;                                 // 0x0E94(0x000C)
	struct FVector                                     PreviousLeftEyeLocation;                                  // 0x0EA0(0x000C)
	float                                              LastValidRightEye;                                        // 0x0EAC(0x0004)
	float                                              LastValidLeftEye;                                         // 0x0EB0(0x0004)
	float                                              EyeResetTime;                                             // 0x0EB4(0x0004)
	float                                              CrazyEyeTime;                                             // 0x0EB8(0x0004)
	class USoundCue*                                   GenieEnterLampSound;                                      // 0x0EBC(0x0004) (Edit)
	class USoundCue*                                   GenieExitLampSound;                                       // 0x0EC0(0x0004) (Edit)
	class UAudioComponent*                             EyeCastingSoundComponent;                                 // 0x0EC4(0x0004) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefGenieBoss");
		return ptr;
	}


	void ForceSkelUpdatingDelayTurnOff(unsigned long Force, float delayTurnOff);
	void ForceSkelUpdating(unsigned long Force, unsigned long bOnlyForceTickAnimNodes);
	void ClearElementalEffect();
	class UClass* GetElementalDamageType();
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	struct FColor GetMiniMapIconColor();
	void ActivateRageMode();
	void PauseAnimationAfterDeath();
	void GetBurpProjectileLocAndRot(struct FVector* burpLoc, struct FRotator* burpRot);
	void GetRightEyeLocAndRot(struct FVector* eyeLoc, struct FRotator* eyeRot);
	void GetLeftEyeLocAndRot(struct FVector* eyeLoc, struct FRotator* eyeRot);
	class UClass* GetRightEyeDmgType();
	class UClass* GetLeftEyeDmgType();
	void PickRightEyeBeam();
	void PickLeftEyeBeam();
	float PlayBiteAnim();
	void GetDjinnSpawnLocandRot(const struct FName& SocketName, struct FVector* SpawnLoc, struct FRotator* SpawnRot);
	void GetBiteLocation(struct FVector* biteLocation, struct FRotator* biteRot);
	void SpawnBabyDjinn();
	void ClearHitList();
	void BiteStop();
	void BiteStart();
	void Burp();
	void SpawnMoveToLampVFX(const struct FVector& particleDir);
	float PlayBabySpawnAnim();
	float PlayBurpAnim();
	void PlayDisappearAnim(unsigned long bPlayEffects, class AActor* newLamp);
	float PlayLickAnim();
	float PlaySuperLickAnim();
	void PlayEyeBeamLoop();
	void TongueStart();
	struct FVector GetTongueSocketLocation(const struct FName& currentSocket);
	void StopCrazyEye();
	float PlayCrazyEyesAttack();
	void StartEyeDamage();
	void SetLeftEyeTarget(class AActor* newLeftEyeTarget);
	void SetRightEyeTarget(class AActor* newRightEyeTarget);
	float PlayEyeAttackStart(unsigned long bIgnoreEyeTracking);
	void StartUpEyes(float DamageTime);
	void AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum);
	void UnHideHead();
	void HideHead();
	void BringGenieOutOfLamp(const struct FVector& lampLoc);
	void ShutDownEyes();
	void SetRightEyeBeamLocation(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal);
	void SetLeftEyeBeamLocation(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal);
	void TraceRightEye(float DeltaTime);
	void TraceLeftEye(float DeltaTime);
	void EndEyeAttack();
	void UpdateHeadLookAt(float DeltaTime);
	void SetMovementPhysics();
	void Tick(float DeltaTime);
	void SetOnAllOverlappingAuras(unsigned long bSet);
	void SetInitialState();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
