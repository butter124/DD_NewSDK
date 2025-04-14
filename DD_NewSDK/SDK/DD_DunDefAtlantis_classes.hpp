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

// Class DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver
// 0x0004 (0x00EC - 0x00E8)
class UDunDef_SeqAct_PickNewPuzzleSolver : public USequenceAction
{
public:
	class ADunDefPlayer*                               newPuzzleSolver;                                          // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver");
		return ptr;
	}


	void Activated();
};


// Class DunDefAtlantis.DunDefGRI_RisingWater
// 0x0070 (0x0794 - 0x0724)
class ADunDefGRI_RisingWater : public ADunDefGameReplicationInfo
{
public:
	class ADunDefPlayer*                               PuzzleSolver;                                             // 0x0724(0x0004)
	struct FString                                     BecamePuzzleSolverString;                                 // 0x0728(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NewPuzzleSolverString;                                    // 0x0734(0x000C) (Localized, NeedCtorLink)
	struct FString                                     YouSolvedThePuzzleString;                                 // 0x0740(0x000C) (Localized, NeedCtorLink)
	struct FString                                     TheySolvedThePuzzleString;                                // 0x074C(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      BecamePuzzleSolverMessageColor;                           // 0x0758(0x0004)
	struct FColor                                      NewPuzzleSolverMessageColor;                              // 0x075C(0x0004)
	class USoundCue*                                   NewPuzzleSolverSoundEffect;                               // 0x0760(0x0004)
	class USoundCue*                                   PuzzleSolvedSound;                                        // 0x0764(0x0004)
	class UTexture2D*                                  PuzzleIcon;                                               // 0x0768(0x0004)
	struct FVector                                     PuzzleIconPositionOffset;                                 // 0x076C(0x000C)
	float                                              PuzzleIconPositionHeightScale;                            // 0x0778(0x0004)
	float                                              PuzzleIconSize;                                           // 0x077C(0x0004)
	int                                                lastPRIIndex;                                             // 0x0780(0x0004)
	TArray<class ADunDefPlayer*>                       PlayersInWater;                                           // 0x0784(0x000C) (NeedCtorLink)
	float                                              WaterCastingMultiplier;                                   // 0x0790(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefGRI_RisingWater");
		return ptr;
	}


	void AddPlayerToWaterList(class ADunDefPlayer* waterPlayer);
	void RemovePlayerToWaterList(class ADunDefPlayer* waterPlayer);
	void SetWaterCastingMultiplier(float newCastingMultiplier);
	float GetCastRateMultiplier(class ADunDefPlayerAbility* ability);
	void PuzzleComplete();
	class ADunDefPlayer* GetRandomPlayer();
	void DrawMyHUD(class ADunDefHUD* H);
	void SetNewSolver(class ADunDefPlayer* newSolver, unsigned long bIgnoreGameInfoNotification);
	void NotifyPuzzleSolverDeath();
	void ClearPuzzleSolver();
	class ADunDefPlayer* PickNewSolver();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle
// 0x000C (0x00F4 - 0x00E8)
class UDunDef_SeqAct_SetUpPuzzle : public USequenceAction
{
public:
	class APuzzleRoomActor*                            PuzzleTemplate;                                           // 0x00E8(0x0004) (Edit)
	class AActor*                                      SpawnPoint;                                               // 0x00EC(0x0004) (Edit)
	class AActor*                                      TeleportPoint;                                            // 0x00F0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle");
		return ptr;
	}


	void Activated();
};


// Class DunDefAtlantis.PuzzleRoomActor
// 0x0080 (0x029C - 0x021C)
class APuzzleRoomActor : public AActor
{
public:
	TArray<struct FPuzzlePiece>                        PuzzleGrid;                                               // 0x021C(0x000C) (NeedCtorLink)
	TArray<struct FPuzzlePiece>                        ValidPath;                                                // 0x0228(0x000C) (NeedCtorLink)
	TArray<class APuzzlePieceActor*>                   CurrentPath;                                              // 0x0234(0x000C) (NeedCtorLink)
	TArray<struct FVector2D>                           thePath;                                                  // 0x0240(0x000C) (NeedCtorLink)
	struct FVector2D                                   PuzzleSize;                                               // 0x024C(0x0008) (Edit)
	class APuzzlePieceActor*                           PieceTemplate;                                            // 0x0254(0x0004) (Edit)
	float                                              PieceBufferSpace;                                         // 0x0258(0x0004) (Edit)
	class AActor*                                      ResetPoint;                                               // 0x025C(0x0004) (Edit, Net)
	class ADunDefEmitterSpawnable*                     TeleportVFX;                                              // 0x0260(0x0004) (Edit)
	float                                              DemoPuzzleDelay;                                          // 0x0264(0x0004) (Edit)
	float                                              FailedPathBaseFadeOutScale;                               // 0x0268(0x0004) (Edit)
	float                                              FailedPathFadeOutExp;                                     // 0x026C(0x0004) (Edit)
	float                                              FailedTeleportDelay;                                      // 0x0270(0x0004) (Edit)
	int                                                MaxVerticalSpaces;                                        // 0x0274(0x0004) (Edit)
	int                                                MaxHorizontalSpaces;                                      // 0x0278(0x0004) (Edit)
	float                                              ReShowPathTime;                                           // 0x027C(0x0004) (Edit)
	class USoundCue*                                   PuzzleFinishedSound;                                      // 0x0280(0x0004) (Edit)
	float                                              LastPathShowTime;                                         // 0x0284(0x0004)
	int                                                currentPathPoint;                                         // 0x0288(0x0004)
	int                                                DemoingPuzzlePoint;                                       // 0x028C(0x0004)
	unsigned long                                      bPuzzleFinished : 1;                                      // 0x0290(0x0004)
	unsigned long                                      bDebugFailedPath : 1;                                     // 0x0290(0x0004)
	class AActor*                                      FailedActor;                                              // 0x0294(0x0004)
	int                                                totalFailCount;                                           // 0x0298(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.PuzzleRoomActor");
		return ptr;
	}


	void Destroyed();
	void FlashPuzzlePiece(int pieceIndex);
	void ShowPuzzlePath();
	void PlayFailedPathVFX(const struct FVector& actorLoc);
	void PlayInitalFailVFX(int failedIndex);
	void FailedPath();
	void SuccessfulMove(int moveIndex);
	void SuccessfulFinish(int finalIndex);
	void FinishedPuzzle(int finalIndex);
	void NotifyPieceTouched(class APuzzlePieceActor* touchedPiece, class AActor* TouchingActor);
	void ResetPuzzle();
	void DrawDebugPathLines();
	void StartEffect(int pieceIndex);
	void AddValidPathPiece(int newPieceIndex, int newValidIndex);
	void MakePuzzle();
	int CalculatePieceIndex(int X_loc, int Y_loc);
	void InitGrid();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefAtlantis.DunDef_SeqEvent_PuzzleFinished
// 0x0000 (0x0100 - 0x0100)
class UDunDef_SeqEvent_PuzzleFinished : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDef_SeqEvent_PuzzleFinished");
		return ptr;
	}

};


// Class DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft
// 0x0000 (0x0100 - 0x0100)
class UDunDef_SeqEvent_PuzzleSolverLeft : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft");
		return ptr;
	}


	void Activated();
};


// Class DunDefAtlantis.GameInfo_RisingWater
// 0x0004 (0x0540 - 0x053C)
class AGameInfo_RisingWater : public AGameInfo_Special
{
public:
	class AController*                                 PuzzleSolver;                                             // 0x053C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.GameInfo_RisingWater");
		return ptr;
	}


	void Logout(class AController* Exiting);
	void SetCurrentPuzzleSolver(class ADunDefPlayer* newPuzzleSolver);
	void SetGRIPuzzleSolver();
	void RestartPlayer(class AController* NewPlayer);
	void Killed(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType);
};


// Class DunDefAtlantis.DunDefInkCloud
// 0x0018 (0x0360 - 0x0348)
class ADunDefInkCloud : public ADunDefGasCloud
{
public:
	float                                              Speed;                                                    // 0x0348(0x0004) (Edit)
	float                                              InkHurtDelay;                                             // 0x034C(0x0004) (Edit)
	float                                              MovementSpeedMultiplier;                                  // 0x0350(0x0004) (Edit)
	TArray<class ADunDefPawn*>                         MovementAffectedPawns;                                    // 0x0354(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefInkCloud");
		return ptr;
	}


	void ResetCurrentMoveActors();
	unsigned long HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage);
	void FadeOut(float theLightFadeOutTime);
	void Init(const struct FVector& Direction);
};


// Class DunDefAtlantis.DunDefKraken
// 0x010C (0x0E7C - 0x0D70)
class ADunDefKraken : public ADunDefBoss
{
public:
	float                                              TentacleBlendOutTime;                                     // 0x0D70(0x0004) (Edit)
	TArray<struct FTentacle>                           Tentacles;                                                // 0x0D74(0x000C) (Edit, NeedCtorLink)
	TArray<struct FTentacle>                           LeftTentacles;                                            // 0x0D80(0x000C) (NeedCtorLink)
	TArray<struct FTentacle>                           RightTentacles;                                           // 0x0D8C(0x000C) (NeedCtorLink)
	struct FName                                       OpenMouthAnim;                                            // 0x0D98(0x0008) (Edit)
	struct FName                                       CloseMouthAnim;                                           // 0x0DA0(0x0008) (Edit)
	struct FName                                       WithDrawAnim;                                             // 0x0DA8(0x0008) (Edit)
	struct FName                                       ProjectileAttack_Left;                                    // 0x0DB0(0x0008) (Edit)
	struct FName                                       ProjectileAttack_Right;                                   // 0x0DB8(0x0008) (Edit)
	struct FName                                       ProjectileAttack_Giant;                                   // 0x0DC0(0x0008) (Edit)
	struct FName                                       ProjectileAttack_GiantSocket;                             // 0x0DC8(0x0008) (Edit)
	struct FName                                       BiteAttackAnim;                                           // 0x0DD0(0x0008) (Edit)
	struct FName                                       BiteSocketName;                                           // 0x0DD8(0x0008) (Edit)
	struct FName                                       TentacleAttackName;                                       // 0x0DE0(0x0008) (Edit)
	struct FName                                       InkSocketName;                                            // 0x0DE8(0x0008) (Edit)
	struct FName                                       InkAnimName;                                              // 0x0DF0(0x0008) (Edit)
	struct FName                                       DashWindUpAnim;                                           // 0x0DF8(0x0008) (Edit)
	struct FName                                       CrystalSocketName;                                        // 0x0E00(0x0008) (Edit)
	float                                              MinimumAngleDotForCrystalHit;                             // 0x0E08(0x0004) (Edit)
	float                                              TentacleProjectileAnimSpeed;                              // 0x0E0C(0x0004) (Edit)
	float                                              TentacleRegrowTime[0x4];                                  // 0x0E10(0x0004) (Edit)
	float                                              PauseAfterAttackTime[0x4];                                // 0x0E20(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     CrystalHurtEffectTemplate;                                // 0x0E30(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     TentacleRetreatEffectTemplate;                            // 0x0E34(0x0004) (Edit)
	class UParticleSystemComponent*                    FloatingEffect;                                           // 0x0E38(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       FloatingEffectSocket;                                     // 0x0E3C(0x0008) (Edit)
	class UStaticMeshComponent*                        CrystalMesh;                                              // 0x0E44(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<class AActor*>                              LeftSwingHurtList;                                        // 0x0E48(0x000C) (NeedCtorLink)
	TArray<class AActor*>                              RightSwingHurtList;                                       // 0x0E54(0x000C) (NeedCtorLink)
	unsigned long                                      bMouthOpen : 1;                                           // 0x0E60(0x0004) (Net)
	unsigned long                                      bIsCharging : 1;                                          // 0x0E60(0x0004) (Net)
	unsigned long                                      bCheckForPawnEnchroachers : 1;                            // 0x0E60(0x0004)
	class UAnimNode_MultiBlendPerBone*                 TentacleBlender;                                          // 0x0E64(0x0004)
	class UAnimNodePlayCustomAnim*                     TentacleCustomAnimNode;                                   // 0x0E68(0x0004)
	float                                              TimeOfDeath;                                              // 0x0E6C(0x0004)
	float                                              DeathTranslation;                                         // 0x0E70(0x0004)
	float                                              DeathTranslationTime;                                     // 0x0E74(0x0004)
	float                                              LastTentactleTakeDamageTime;                              // 0x0E78(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefKraken");
		return ptr;
	}


	void CheckKrakenProximity();
	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void DestroyTentacles();
	float GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer);
	void BiteStop();
	void BiteStart();
	float PlayTentacleAttackAnimation();
	float PlayBiteAttackAnimation();
	void StopSpit();
	void StartSpit();
	void GetSocketLocAndRot(const struct FName& SocketName, struct FVector* socLoc, struct FRotator* socRot);
	void ShootGiantProjectile();
	void ShootRight();
	void ShootLeft();
	void ResetMovementSettings();
	void SetDashMovementSettings(float DashAirSpeedScalar, float DashRotationRateScalar);
	float PlayDashWindUp();
	float PlayInkCloudAttack();
	float PlayGiantProjectileAttack();
	float PlayRightTentacleAttack();
	float GetTowerTargetingDesirability(class ADunDefTower* forTower);
	float PlayLeftTentacleAttack();
	unsigned long IsValidRightSwingTarget(class AActor* checkTarg);
	unsigned long IsValidLeftSwingTarget(class AActor* checkTarg);
	void AddToRightSwingHurtList(class AActor* newHitTarg, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void AddToLeftSwingHurtList(class AActor* newHitTarg, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void StopMelee();
	void StartMelee();
	float CloseMouth();
	void OpenMouth();
	void PlayMouthOpen();
	void DoSingleWithdraw(int tentacleIndex);
	void ForceWithDraw(class AKrakenTentacle* withdrawTentacle);
	float BringOutAllTentacles();
	void PlayWithDrawTentacle(int tentacleIndex);
	unsigned long NotifyTentacleWithdraw(class AKrakenTentacle* damagedTentacle);
	unsigned long CheckSpecialCoreDmg(const struct FVector& HitLocation);
	void AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum);
	void PlayRealHurtEffect(class UClass* DamageType, const struct FVector& HitLocation);
	void NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	void UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues);
	void SetMovementPhysics();
	float GetAttackPauseRate();
	void InitTentacles();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefAtlantis.KrakenTentacle
// 0x0068 (0x0284 - 0x021C)
class AKrakenTentacle : public AActor
{
public:
	class USkeletalMeshComponent*                      TentacleMesh;                                             // 0x021C(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       TargetingSocket;                                          // 0x0220(0x0008) (Edit)
	int                                                Health;                                                   // 0x0228(0x0004) (Edit)
	int                                                HealthMax;                                                // 0x022C(0x0004) (Edit)
	unsigned long                                      bIsLeftSide : 1;                                          // 0x0230(0x0004) (Edit)
	unsigned long                                      bWithDrawn : 1;                                           // 0x0230(0x0004)
	unsigned long                                      bDoDamageChecks : 1;                                      // 0x0230(0x0004)
	unsigned long                                      bDoDamageFlashing : 1;                                    // 0x0230(0x0004) (Edit)
	unsigned long                                      bAllowSuction : 1;                                        // 0x0230(0x0004) (Edit)
	unsigned long                                      bChainIgnore : 1;                                         // 0x0230(0x0004) (Transient)
	unsigned long                                      bIsWebbed : 1;                                            // 0x0230(0x0004) (Transient)
	int                                                TowerTargetingDesirability;                               // 0x0234(0x0004) (Edit)
	float                                              LastFloatingTakeDamageTime;                               // 0x0238(0x0004)
	float                                              ForceWithdrawTime;                                        // 0x023C(0x0004) (Net)
	struct FName                                       myBasedSocket;                                            // 0x0240(0x0008) (Net)
	class ADunDefKraken*                               myKraken;                                                 // 0x0248(0x0004) (Net)
	float                                              LastFlashingDamageTime;                                   // 0x024C(0x0004) (Transient)
	float                                              DamageFlashingDuration;                                   // 0x0250(0x0004) (Edit)
	float                                              DamageFlashingFadeExponent;                               // 0x0254(0x0004) (Edit)
	float                                              DamageFlashingIntensity;                                  // 0x0258(0x0004) (Edit)
	struct FName                                       DamageFlashingScalarParamName;                            // 0x025C(0x0008) (Edit)
	int                                                flashMatIndex;                                            // 0x0264(0x0004) (Edit)
	TArray<float>                                      NumPlayerHealthMultipliers;                               // 0x0268(0x000C) (Edit, NeedCtorLink)
	class UMaterialInstanceConstant*                   tentacleMIC;                                              // 0x0274(0x0004) (Transient)
	TArray<class ADunDefTower_ChainLightning*>         ChainingTowers;                                           // 0x0278(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.KrakenTentacle");
		return ptr;
	}


	unsigned long ForceLineOfSight();
	float GetLightningTowerDamagePercent();
	void setIsWebbed(unsigned long isWebbed);
	unsigned long isWebbed();
	unsigned long GetChainIgnore();
	void SetChainIgnore(unsigned long ignore);
	unsigned long IsBeingChainedBy(class ADunDefTower_ChainLightning* Tower);
	void RemoveFromChainingTowers(class ADunDefTower_ChainLightning* Tower);
	void AddToChainingTowers(class ADunDefTower_ChainLightning* Tower);
	unsigned long AllowSuction();
	void ClientTakeRadiusDamage(class APawn* InstigatorPawn, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent, class UObject* WhatHitMe);
	void ClientTakeDamage(int DamageAmount, class APawn* InstigatorPawn, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	float GetHealthPercent();
	int GetRemainingHealthBars();
	void UpdateDamageFlashing();
	void LocalTookDamage(int DamageAmount, const struct FVector& atPosition, class UClass* fromDamageType);
	void HealPctOfMaxHealth(float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers);
	unsigned long ForceMoveActor(class AActor* Mover, const struct FVector& NewLoc);
	class UPrimitiveComponent* GetOverrideTargetComponent();
	unsigned long EncroachingOn(class AActor* Other);
	void Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SetDoDamageChecks(unsigned long bAllowDamage);
	int GetHealth(unsigned long bGetMax);
	float GetMass();
	unsigned long AllowDarknessIgnorance();
	unsigned long ForceFriendlyFire(class AActor* Target);
	struct FVector GetInterpolatedTargetingLocation(class AActor* RequestedBy);
	struct FVector GetTargetingLocation(class AActor* RequestedBy);
	void OnDestroy_RemoveFromTargetableList();
	void OnPostBeginPlay_AddToTargetableList();
	void UnregisterAttacker(class ADunDefEnemyController* forController);
	void RegisterAttacker(class ADunDefEnemyController* forController);
	float GetAttackRangeOffset();
	unsigned long IgnoreFriendlyFireDamage(const TScriptInterface<class UDunDefTargetableInterface>& instigatorActor, class AController* OptionalController);
	int GetTargetingTeam();
	float GetTowerTargetingDesirability(class ADunDefTower* forTower);
	float GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer);
	void DecreaseHealth(int Amount);
	void ForceWithDraw();
	void LeaveShell();
	void WithdrawIntoShell();
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	void SetWithDrawTime(float ForceWithDraw);
	void SetUpMesh();
	void InitTentacle(class ADunDefKraken* theKraken, const struct FName& BaseSocketName, float DifficultyHealthMultiplier);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefAtlantis.DunDefKrakenController
// 0x010C (0x0718 - 0x060C)
class ADunDefKrakenController : public ADunDefEnemyController
{
public:
	TArray<struct FChargeHit>                          DashHitTargets;                                           // 0x060C(0x000C) (NeedCtorLink)
	TArray<class AActor*>                              BiteHurtList;                                             // 0x0618(0x000C) (NeedCtorLink)
	float                                              BiteDamageAmount;                                         // 0x0624(0x0004) (Edit)
	float                                              BiteDamageMomentum;                                       // 0x0628(0x0004) (Edit)
	float                                              BiteHitRadius;                                            // 0x062C(0x0004) (Edit)
	class UClass*                                      BiteDamageType;                                           // 0x0630(0x0004) (Edit)
	struct FName                                       BiteAttackStateName;                                      // 0x0634(0x0008) (Edit)
	struct FName                                       TentacleAttackStateName;                                  // 0x063C(0x0008) (Edit)
	float                                              PushDamageMomentum;                                       // 0x0644(0x0004) (Edit)
	float                                              PushDamageAmount;                                         // 0x0648(0x0004) (Edit)
	float                                              PushHitRadius;                                            // 0x064C(0x0004) (Edit)
	float                                              DashHitRate;                                              // 0x0650(0x0004) (Edit)
	float                                              DashStopDistance;                                         // 0x0654(0x0004) (Edit)
	class UClass*                                      PushDamageType;                                           // 0x0658(0x0004) (Edit)
	class AActor*                                      TargetActor;                                              // 0x065C(0x0004)
	class ADunDefKraken*                               myPawn;                                                   // 0x0660(0x0004)
	int                                                TentaclesInShell;                                         // 0x0664(0x0004)
	int                                                TentaclesToOpenMouth;                                     // 0x0668(0x0004) (Edit)
	float                                              TentacleRetreatTime;                                      // 0x066C(0x0004) (Edit)
	int                                                TentacleDamageAmount;                                     // 0x0670(0x0004) (Edit)
	float                                              TentacleMomentum;                                         // 0x0674(0x0004) (Edit)
	class UClass*                                      TentacleDamageType;                                       // 0x0678(0x0004) (Edit)
	class ADunDefHomingProjectile*                     TentacleProjectile;                                       // 0x067C(0x0004) (Edit)
	float                                              TetacleProjectileCD;                                      // 0x0680(0x0004) (Edit)
	float                                              GiantBombAttackChancePct;                                 // 0x0684(0x0004) (Edit)
	float                                              TetacleProjectileMaxRange;                                // 0x0688(0x0004) (Edit)
	float                                              TetacleProjectileMinRange;                                // 0x068C(0x0004) (Edit)
	float                                              TentacleProjectileBurst;                                  // 0x0690(0x0004) (Edit)
	int                                                CurrentTentacleProjectileBurst;                           // 0x0694(0x0004)
	float                                              LastTentacleProjAttack;                                   // 0x0698(0x0004)
	class ADunDefHomingProjectile*                     GiantProjectile;                                          // 0x069C(0x0004) (Edit)
	float                                              GiantProjectileCD;                                        // 0x06A0(0x0004) (Edit)
	float                                              GiantProjectileMaxRange;                                  // 0x06A4(0x0004) (Edit)
	float                                              GiantProjectileMinRange;                                  // 0x06A8(0x0004) (Edit)
	float                                              LastGiantProjAttack;                                      // 0x06AC(0x0004)
	float                                              DashCD;                                                   // 0x06B0(0x0004) (Edit)
	float                                              DashMaxRange;                                             // 0x06B4(0x0004) (Edit)
	float                                              DashMinRange;                                             // 0x06B8(0x0004) (Edit)
	float                                              DashRotationRateScalar;                                   // 0x06BC(0x0004) (Edit)
	float                                              DashAirSpeedScalar;                                       // 0x06C0(0x0004) (Edit)
	float                                              DashTime;                                                 // 0x06C4(0x0004) (Edit)
	float                                              LastDashTime;                                             // 0x06C8(0x0004)
	struct FVector                                     DashPoint;                                                // 0x06CC(0x000C)
	class ADunDefInkCloud*                             InkCloudTemplate;                                         // 0x06D8(0x0004) (Edit)
	float                                              InkCloudCD;                                               // 0x06DC(0x0004) (Edit)
	float                                              InkProjectileMaxRange;                                    // 0x06E0(0x0004) (Edit)
	float                                              InkProjectileMinRange;                                    // 0x06E4(0x0004) (Edit)
	float                                              InkCloudSpawnRate;                                        // 0x06E8(0x0004) (Edit)
	float                                              InkCloudAllowedZDifference;                               // 0x06EC(0x0004) (Edit)
	float                                              LastInkCloudTime;                                         // 0x06F0(0x0004)
	float                                              MouthCloseHealthPct;                                      // 0x06F4(0x0004) (Edit)
	float                                              HealthPctAtMouthClose;                                    // 0x06F8(0x0004)
	float                                              BiteAttackRange;                                          // 0x06FC(0x0004) (Edit)
	float                                              TentacleMeleeAttackRange;                                 // 0x0700(0x0004) (Edit)
	unsigned long                                      bMouthOpen : 1;                                           // 0x0704(0x0004)
	unsigned long                                      bIsBiting : 1;                                            // 0x0704(0x0004)
	unsigned long                                      bDoDashDamage : 1;                                        // 0x0704(0x0004)
	struct FVector                                     GiantProjectileShootLoc;                                  // 0x0708(0x000C)
	float                                              LastTentacleAttackTime;                                   // 0x0714(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefKrakenController");
		return ptr;
	}


	void StopInkCloud();
	void SpawnInkCloud();
	void SpawnGiantProjectile();
	void SpawnRightTentacleProjectiles();
	void SpawnLeftTentacleProjectiles();
	void GetValidShootTargets(float MinRange, float MaxRange, float angleCheck, TArray<class AActor*>* ActorList);
	void CheckCustomOpenMouthAttacks();
	void CheckForCustomClosedMouthAttacks();
	void CheckForCustomAttacks();
	void CloseMouth();
	void NotifyTentacleBroughtOut();
	void NotifyTentecaleWithDrawn();
	void HandleTentacleDamage(class AActor* newHitTarg, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void EndDash();
	void UpdateDashPoint();
	unsigned long AddToDashHurtList(class AActor* DashedActor);
	void EndMeleeSwing();
	void BiteStart();
	void EndBite();
	void DoBiting();
	unsigned long AddToSwingHurtList(class AActor* newEntry);
	unsigned long ShouldDamage(class AActor* act);
	void DoAttack();
	struct FVector GeneratePathToActor(class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath);
	unsigned long MoveAroundBlockade(class AActor* blockadeActor, float BlockadeWidth, const struct FVector& HitNormal, unsigned long SkipBlockingCheck);
	unsigned long NavActorReachable(class AActor* A);
	class ANavigationPoint* FindNearestNavPointTo(class AActor* A, unsigned long bCheckVisible);
	float GetAttackRange();
	unsigned long ForceTentacleAttack();
	unsigned long WantsHurtAnimation();
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	void Possess(class APawn* inPawn, unsigned long bVehicleTransition);
};


// Class DunDefAtlantis.DunDefSharkMan
// 0x00E8 (0x0DFC - 0x0D14)
class ADunDefSharkMan : public ADunDefEnemy
{
public:
	struct FName                                       LeftFistSocketName;                                       // 0x0D14(0x0008) (Edit)
	struct FName                                       RightFistSocketName;                                      // 0x0D1C(0x0008) (Edit)
	struct FName                                       LeftElbowSocketName;                                      // 0x0D24(0x0008) (Edit)
	struct FName                                       RightElbowSocketName;                                     // 0x0D2C(0x0008) (Edit)
	struct FName                                       ChargeWindupAnimName;                                     // 0x0D34(0x0008) (Edit)
	struct FName                                       ChargingAnimName;                                         // 0x0D3C(0x0008) (Edit)
	struct FName                                       HitWallAnimName;                                          // 0x0D44(0x0008) (Edit)
	struct FName                                       ChargeFailAnimName;                                       // 0x0D4C(0x0008) (Edit)
	struct FName                                       ChargeAbortAnimName;                                      // 0x0D54(0x0008) (Edit)
	struct FName                                       DizzyAnimName;                                            // 0x0D5C(0x0008) (Edit)
	float                                              ChargePushSize;                                           // 0x0D64(0x0004) (Edit)
	float                                              PawnPushBackSpeed;                                        // 0x0D68(0x0004) (Edit)
	float                                              TowerPushBackSpeed;                                       // 0x0D6C(0x0004) (Edit)
	float                                              ChargingNetUpdateFrequency;                               // 0x0D70(0x0004) (Edit)
	float                                              TowerCollideDamageMultiplier;                             // 0x0D74(0x0004) (Edit)
	float                                              PlayerCollideDamageMultiplier;                            // 0x0D78(0x0004) (Edit)
	float                                              ChanceForImmediatePoundTheGround;                         // 0x0D7C(0x0004) (Edit)
	float                                              WindupTimeScale;                                          // 0x0D80(0x0004) (Edit)
	TArray<class ADunDefPlayer*>                       ChargeHurtList;                                           // 0x0D84(0x000C) (NeedCtorLink)
	float                                              GroundPoundDamage;                                        // 0x0D90(0x0004) (Edit)
	float                                              GroundPoundRadius;                                        // 0x0D94(0x0004) (Edit)
	class UClass*                                      GroundPoundDamageType;                                    // 0x0D98(0x0004) (Edit)
	float                                              ChargeAnimationSpeed;                                     // 0x0D9C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     GroundStrikeEffect;                                       // 0x0DA0(0x0004) (Edit)
	struct FVector                                     GroundStrikeEffectOffset;                                 // 0x0DA4(0x000C) (Edit)
	float                                              GroundStrikeKnockback;                                    // 0x0DB0(0x0004) (Edit)
	float                                              TowerTargetingDesirability_Charging;                      // 0x0DB4(0x0004) (Edit)
	float                                              TowerTargetingDesirability_WindUp;                        // 0x0DB8(0x0004) (Edit)
	TArray<struct FName>                               UpperBodyCustomAnimNodeNames;                             // 0x0DBC(0x000C) (Edit, NeedCtorLink)
	struct FName                                       UpperBodyCustomAnimBlenderName;                           // 0x0DC8(0x0008) (Edit)
	TArray<float>                                      ChargeSpeeds;                                             // 0x0DD0(0x000C) (Edit, NeedCtorLink)
	class UAnimNodeBlend*                              UpperBodyCustomAnimBlender;                               // 0x0DDC(0x0004)
	int                                                LastUpperBodyCustomAnimNodePlayIndex;                     // 0x0DE0(0x0004)
	struct FName                                       ArmBlenderName;                                           // 0x0DE4(0x0008) (Edit)
	class UAudioComponent*                             ScreamLoopSound;                                          // 0x0DEC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    DashEffectComponent;                                      // 0x0DF0(0x0004) (Edit, ExportObject, Component, EditInline)
	class AActor*                                      ChargeTarget;                                             // 0x0DF4(0x0004) (Net)
	unsigned long                                      bWindingUp : 1;                                           // 0x0DF8(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefSharkMan");
		return ptr;
	}


	unsigned long IsCurrentlyPlayingAttackAnimation();
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	void NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void ClearChargeHurtList();
	unsigned long AddToChargeHurtList(class ADunDefPlayer* Player);
	void EndCharging();
	void SetChargingSpeed();
	void CheckForEncroachers(float DeltaTime);
	float PlaySharkManChargeAbortAnimation();
	float PlaySharkManHitWallAnimation();
	float PlaySharkManChargeFailAnimation();
	unsigned long StopSharkManDizzyAnimation();
	float PlaySharkManDizzyAnimation();
	float PlaySharkManChargeAnimation();
	float PlaySharkManWindupAnimation();
	void Tick(float DeltaTime);
	void HandleMomentum(const struct FVector& Momentum, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo);
	void SetSharkManArmBlend(int animAmount);
	float PlaySharkManAttackAnimation(int AnimationIndex);
	void PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation);
	float PlayAttackAnimation();
	float GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController);
	float GetTowerTargetingDesirability(class ADunDefTower* forTower);
	struct FVector GetMeleeSwingLocation();
	struct FVector GetMeleeElbowLocation(TEnumAsByte<EFist> fist);
	struct FVector GetMeleeFistLocation(TEnumAsByte<EFist> fist);
	void GroundStrike();
	void MeleeBothEnd();
	void MeleeBothStart();
	void MeleeRightEnd();
	void MeleeRightStart();
	void MeleeLeftEnd();
	void MeleeLeftStart();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void PostBeginPlay();
};


// Class DunDefAtlantis.DunDefSharkmanController
// 0x00CC (0x06D8 - 0x060C)
class ADunDefSharkmanController : public ADunDefEnemyController
{
public:
	unsigned long                                      IsInLeftMeleeSwing : 1;                                   // 0x060C(0x0004)
	unsigned long                                      IsInRightMeleeSwing : 1;                                  // 0x060C(0x0004)
	unsigned long                                      ChargeStopDamageWhileWinding : 1;                         // 0x060C(0x0004) (Edit)
	unsigned long                                      DrawDebugShapes : 1;                                      // 0x060C(0x0004) (Edit)
	unsigned long                                      PainInterruptsCombo : 1;                                  // 0x060C(0x0004) (Edit)
	unsigned long                                      HasPassedChargeTarget : 1;                                // 0x060C(0x0004) (Transient)
	struct FVector                                     PreviousLeftSwingLocation;                                // 0x0610(0x000C)
	struct FVector                                     PreviousRightSwingLocation;                               // 0x061C(0x000C)
	int                                                AttackNumber;                                             // 0x0628(0x0004)
	TArray<class AActor*>                              SwingHurtList;                                            // 0x062C(0x000C) (NeedCtorLink)
	int                                                MeleeDamageAmount;                                        // 0x0638(0x0004) (Edit)
	float                                              MeleeDamageMomentum;                                      // 0x063C(0x0004) (Edit)
	struct FVector                                     MeleeSwingExtent;                                         // 0x0640(0x000C) (Edit)
	class UClass*                                      MeleeDamageType;                                          // 0x064C(0x0004) (Edit)
	TArray<float>                                      MeleeAttackMultipliers;                                   // 0x0650(0x000C) (Edit, NeedCtorLink)
	float                                              ComboExpiryTime;                                          // 0x065C(0x0004) (Edit)
	float                                              ChargeMinDistance;                                        // 0x0660(0x0004) (Edit)
	float                                              ChargeMaxDistance;                                        // 0x0664(0x0004) (Edit)
	float                                              ChargeStopDamagePercent;                                  // 0x0668(0x0004) (Edit)
	int                                                ChargeStopDamage;                                         // 0x066C(0x0004)
	float                                              ChargeTargetJitterSize;                                   // 0x0670(0x0004) (Edit)
	float                                              DizzyTime;                                                // 0x0674(0x0004) (Edit)
	float                                              ChargeDelay;                                              // 0x0678(0x0004) (Edit)
	float                                              PlayerDontChargeRadius;                                   // 0x067C(0x0004) (Edit)
	float                                              TowerDontChargeRadius;                                    // 0x0680(0x0004) (Edit)
	float                                              CoreTargetDistractionDistance;                            // 0x0684(0x0004) (Edit)
	float                                              MinChargeDistancePerCheck;                                // 0x0688(0x0004) (Edit)
	float                                              ChargeDistanceCheckInterval;                              // 0x068C(0x0004) (Edit)
	struct FVector                                     LastChargeCheck;                                          // 0x0690(0x000C) (Transient)
	float                                              ChargeAbortTime;                                          // 0x069C(0x0004) (Edit)
	float                                              ArmBlendNormal;                                           // 0x06A0(0x0004) (Edit)
	float                                              ArmBlendCharging;                                         // 0x06A4(0x0004) (Edit)
	float                                              ArmBlendDizzy;                                            // 0x06A8(0x0004) (Edit)
	struct FVector                                     ChargingHitWallForwardTraceOffset;                        // 0x06AC(0x000C) (Edit)
	struct FVector                                     ChargeOrigin;                                             // 0x06B8(0x000C) (Transient)
	float                                              PreviousBaseGroundSpeed;                                  // 0x06C4(0x0004) (Transient)
	struct FVector                                     ChargeTarget;                                             // 0x06C8(0x000C)
	float                                              LastDizzyTime;                                            // 0x06D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefSharkmanController");
		return ptr;
	}


	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	void AbortCharge();
	float CheckTowerViability(class ADunDefTower* Tower);
	void CheckForCustomAttacks();
	float GetReachCheckDuration();
	void DoPositionPoll();
	unsigned long IsWinding();
	unsigned long IsDistractedByCore();
	unsigned long IsCloseToTowers(float Radius);
	unsigned long IsCloseToPlayers(float Radius);
	unsigned long AddToSwingHurtList(class AActor* newEntry);
	void EndMeleeSwing(TEnumAsByte<EFist> fist);
	void StartMeleeSwing(TEnumAsByte<EFist> fist);
};


// Class DunDefAtlantis.PuzzlePieceActor
// 0x00B0 (0x02CC - 0x021C)
class APuzzlePieceActor : public AActor
{
public:
	class UStaticMeshComponent*                        MyMesh;                                                   // 0x021C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0220(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystem*                             ValidTouchingTemplate;                                    // 0x0224(0x0004) (Edit)
	class UParticleSystem*                             ValidTouchedTemplate;                                     // 0x0228(0x0004) (Edit)
	class UParticleSystem*                             StartParticleTemplate;                                    // 0x022C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     DemoEmitter;                                              // 0x0230(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     FailedVFX;                                                // 0x0234(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     PuzzleCompletedVFX;                                       // 0x0238(0x0004) (Edit)
	struct FVector                                     DemoEmitterOffset;                                        // 0x023C(0x000C) (Edit)
	struct FLinearColor                                ValidTouchingColor;                                       // 0x0248(0x0010) (Edit)
	struct FLinearColor                                ValidTouchedColor;                                        // 0x0258(0x0010) (Edit)
	struct FLinearColor                                DefaultColor;                                             // 0x0268(0x0010) (Edit)
	struct FLinearColor                                FailedColor;                                              // 0x0278(0x0010) (Edit)
	class USoundCue*                                   SuccessfulMoveSound;                                      // 0x0288(0x0004) (Edit)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x028C(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FLinearColor                                startColorLerp;                                           // 0x0290(0x0010)
	struct FLinearColor                                currentColorLerp;                                         // 0x02A0(0x0010)
	float                                              ColorLerpTime;                                            // 0x02B0(0x0004) (Edit)
	float                                              ColorLerpBegin;                                           // 0x02B4(0x0004)
	float                                              LerpScalar;                                               // 0x02B8(0x0004)
	class APuzzleRoomActor*                            MyPuzzleRoom;                                             // 0x02BC(0x0004)
	class UParticleSystemComponent*                    StatusComponent;                                          // 0x02C0(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   myMIC;                                                    // 0x02C4(0x0004)
	unsigned long                                      bScaleBackToDefault : 1;                                  // 0x02C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.PuzzlePieceActor");
		return ptr;
	}


	unsigned long ScaleColor(float DeltaTime);
	void TurnOnStartEmitter();
	void PlayDemoEmitter();
	void ShutOffVFX(float lerpScale);
	void SetColorLerp(const struct FLinearColor& NewColor, unsigned long bShouldScaleBack, float lerpScale);
	void PlayPuzzleCompletedVFX();
	void PlayFailedVFX();
	void SetValidDeactivation();
	void SetValidTouching();
	void Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SetMyPuzzleRoom(class APuzzleRoomActor* newPuzzleRoom);
	void PostBeginPlay();
};


// Class DunDefAtlantis.RaisingWaterVolume
// 0x0040 (0x0298 - 0x0258)
class ARaisingWaterVolume : public AVolume
{
public:
	TArray<class ADunDefPawn*>                         TouchingPawns;                                            // 0x0258(0x000C) (NeedCtorLink)
	TArray<struct FAirControlPawn>                     FallingOutPawns;                                          // 0x0264(0x000C) (NeedCtorLink)
	float                                              MovementMultiplier;                                       // 0x0270(0x0004) (Edit, Const)
	float                                              PlayerAttackRateMultiplier;                               // 0x0274(0x0004) (Edit, Const)
	float                                              PlayerCastingRateMultiplier;                              // 0x0278(0x0004) (Edit, Const)
	float                                              AirControlTime;                                           // 0x027C(0x0004) (Edit)
	float                                              AirControlScalar;                                         // 0x0280(0x0004) (Edit)
	class USoundCue*                                   OverridePawnFootStepSound;                                // 0x0284(0x0004) (Edit)
	class UParticleSystem*                             OverridePawnFootStepParticle;                             // 0x0288(0x0004) (Edit)
	float                                              SpeedToUseFootsetpOverrides;                              // 0x028C(0x0004) (Edit)
	float                                              UpdateWeaponAttackValueInterval;                          // 0x0290(0x0004) (Edit)
	float                                              currentWeaponUpdateTime;                                  // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.RaisingWaterVolume");
		return ptr;
	}


	void OnModifyProperty(class USeqAct_ModifyProperty* Action);
	void ClearPawnFXOverrides(class ADunDefPawn* thePawn);
	void SetPawnFXOverrides(class ADunDefPawn* thePawn);
	void Tick(float DeltaTime);
	void ClearAirControl();
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
