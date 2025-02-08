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

// Class DunDefSpider.DunDefWebProjectile
// 0x009C (0x0464 - 0x03C8)
class ADunDefWebProjectile : public ADunDefHomingProjectile
{
public:
	class AActor*                                      AttachedTo;                                               // 0x03C8(0x0004) (Net)
	TArray<struct FWebbedActor>                        AffectingActors;                                          // 0x03CC(0x000C) (Component, NeedCtorLink)
	float                                              MovementSpeedMultiplier;                                  // 0x03D8(0x0004) (Edit)
	float                                              TowerAttackRateMultiplier;                                // 0x03DC(0x0004) (Edit)
	float                                              PlayerAttackRateMultiplier;                               // 0x03E0(0x0004) (Edit)
	float                                              pawnDamageModifier;                                       // 0x03E4(0x0004) (Edit)
	float                                              PawnAttackSpeedMult;                                      // 0x03E8(0x0004) (Edit)
	float                                              BaseStatusAffectTime;                                     // 0x03EC(0x0004) (Edit)
	float                                              BasePawnStatusAffectTime;                                 // 0x03F0(0x0004) (Edit)
	class UParticleSystemComponent*                    AttachedVFX;                                              // 0x03F4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystem*                             WebAttachTemplate;                                        // 0x03F8(0x0004) (Edit)
	float                                              AttachedVFXScale;                                         // 0x03FC(0x0004) (Edit)
	struct FVector                                     AttachedVFXTranslation;                                   // 0x0400(0x000C) (Edit)
	float                                              DefaultBoundsHeight;                                      // 0x040C(0x0004) (Edit)
	float                                              DefaultBoundWidth;                                        // 0x0410(0x0004) (Edit)
	float                                              WebbedJumpZ;                                              // 0x0414(0x0004) (Edit)
	struct FName                                       PlayerAttachSocketName;                                   // 0x0418(0x0008) (Edit)
	TArray<class UClass*>                              IgnoreActorsForWeb;                                       // 0x0420(0x000C) (Edit, NeedCtorLink)
	class UParticleSystem*                             WebbedEffect;                                             // 0x042C(0x0004) (Edit)
	float                                              WebbedEffectScale;                                        // 0x0430(0x0004) (Edit)
	unsigned long                                      bUseOriginalHoming : 1;                                   // 0x0434(0x0004) (Edit)
	unsigned long                                      bUseEnemyPawnDeboosting : 1;                              // 0x0434(0x0004) (Edit)
	unsigned long                                      bHasAttached : 1;                                         // 0x0434(0x0004) (Net)
	unsigned long                                      bIsHoming : 1;                                            // 0x0434(0x0004)
	unsigned long                                      bTempHitPawn : 1;                                         // 0x0434(0x0004) (Transient)
	unsigned long                                      bShutDown : 1;                                            // 0x0434(0x0004) (Net)
	unsigned long                                      bScaleUp : 1;                                             // 0x0434(0x0004) (Net)
	TArray<class UTowerDeboosterObject*>               TowerDeBoosters;                                          // 0x0438(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<TEnumAsByte<EPawnBoostType>>                deboostingTypes;                                          // 0x0444(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<ETowerBoostType>                       towerBoostType;                                           // 0x0450(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	struct FVector                                     InitialTargetLocation;                                    // 0x0454(0x000C)
	float                                              ScaleTime;                                                // 0x0460(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefWebProjectile");
		return ptr;
	}


	void GetBoostedTargets(TArray<class APawn*>* boostedTargets);
	void NotifyOfBoostedRemoval(class APawn* removedBoostee);
	float GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType);
	unsigned long HasPawnBoostingType(TEnumAsByte<EPawnBoostType> boostType);
	void Destroyed();
	void RemoveWebEffect(class AActor* theAct);
	void AddWebEffect(class AActor* theAct);
	unsigned long CanAddWebAffect(class AActor* theAct);
	void EndRadiusDamage();
	void AffectVictim(class AActor* Victim);
	void StartRadiusDamage();
	void SetHomingTarget(class AActor* NewTarget, const struct FVector& HomingLocation);
	float GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> checkBoostType);
	unsigned long HasTowerBoostingType(TEnumAsByte<ETowerBoostType> checkType);
	TScriptInterface<class UDunDefTargetableInterface> GetTowerBoostingTarget();
	void EndAttachment(unsigned long bClearList);
	void SetScaleTime(unsigned long bDoScaleUp);
	void AddNewAffected(class AActor* newAffected);
	void Expire();
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void UpdateAttachStatus(class AActor* updateActor);
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	void DoHoming(float DeltaTime);
	void Tick(float DeltaTime);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpider.DunDefMapInfo_VDay
// 0x0070 (0x03E0 - 0x0370)
class UDunDefMapInfo_VDay : public UDunDefMapInfo
{
public:
	TArray<struct FWaveKillCounts>                     KillCountsPerPlayer;                                      // 0x0370(0x000C) (Edit, NeedCtorLink)
	TArray<struct FEnemyGenderOverride>                EnemyGenderOverrides;                                     // 0x037C(0x000C) (Edit, NeedCtorLink)
	float                                              MinTimeBetweenGenderSpawns;                               // 0x0388(0x0004) (Edit)
	float                                              MaxTimeBetweenGenderSpawns;                               // 0x038C(0x0004) (Edit)
	float                                              MinTimeBetweenPairSpawns;                                 // 0x0390(0x0004) (Edit)
	float                                              MaxTimeBetweenPairSpawns;                                 // 0x0394(0x0004) (Edit)
	float                                              MiniMapGenderIconSize;                                    // 0x0398(0x0004) (Edit)
	float                                              MiniMapGenderIconOffset;                                  // 0x039C(0x0004) (Edit)
	float                                              PairMatchDistance;                                        // 0x03A0(0x0004) (Edit)
	TArray<int>                                        MaxGenderPairsAllowed;                                    // 0x03A4(0x000C) (Edit, NeedCtorLink)
	class ADunDefEmitterSpawnable*                     PairMatchedEffect;                                        // 0x03B0(0x0004) (Edit)
	class USoundCue*                                   PairMatchedHUDSound;                                      // 0x03B4(0x0004) (Edit)
	class USoundCue*                                   GenderSpawnedHUDSound;                                    // 0x03B8(0x0004) (Edit)
	unsigned long                                      bNotifyOnGenderSpawn : 1;                                 // 0x03BC(0x0004) (Edit)
	class UTexture2D*                                  BoyIcon;                                                  // 0x03C0(0x0004) (Edit)
	class UTexture2D*                                  GirlIcon;                                                 // 0x03C4(0x0004) (Edit)
	TArray<class ADunDefEnemy*>                        BoyArchetypes;                                            // 0x03C8(0x000C) (Edit, NeedCtorLink)
	TArray<class ADunDefEnemy*>                        GirlArchetypes;                                           // 0x03D4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefMapInfo_VDay");
		return ptr;
	}

};


// Class DunDefSpider.DunDefCrystalCore_PortalDefense
// 0x002C (0x069C - 0x0670)
class ADunDefCrystalCore_PortalDefense : public ADunDefCrystalCore
{
public:
	TArray<class UClass*>                              AllowedToDamageClasses;                                   // 0x0670(0x000C) (Edit, NeedCtorLink)
	class UParticleSystem*                             WarpEffect;                                               // 0x067C(0x0004) (Edit)
	class USoundCue*                                   WarpedSound;                                              // 0x0680(0x0004) (Edit)
	struct FVector                                     WarpEffectOffset;                                         // 0x0684(0x000C) (Edit)
	float                                              WarpInvincibilityTime;                                    // 0x0690(0x0004) (Edit)
	float                                              TimeSinceLastTeleport;                                    // 0x0694(0x0004)
	unsigned long                                      bIsInvincible : 1;                                        // 0x0698(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefCrystalCore_PortalDefense");
		return ptr;
	}


	unsigned long DrawMyHUD(class ADunDefHUD* H);
	void MakeInvincible();
	void EndWarpInvincibility();
	void OnTeleport(class USeqAct_Teleport* Action);
	void UpdateCrystalCore(unsigned long locked);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	void PlayWarpedFX();
	void HandleCoreTouched(class AActor* TouchingActor);
	void Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpider.DunDefGRI_PortalDefense
// 0x0020 (0x0744 - 0x0724)
class ADunDefGRI_PortalDefense : public ADunDefGameReplicationInfo
{
public:
	int                                                PortalHitsRemaining;                                      // 0x0724(0x0004) (Net)
	int                                                AllowedPortalHits;                                        // 0x0728(0x0004) (Net)
	struct FColor                                      TextColor;                                                // 0x072C(0x0004)
	struct FColor                                      InvincibleTextColor;                                      // 0x0730(0x0004)
	struct FString                                     HUDRemainingTouchesString;                                // 0x0734(0x000C) (Net, NeedCtorLink)
	unsigned long                                      bIsCoreInvincible : 1;                                    // 0x0740(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefGRI_PortalDefense");
		return ptr;
	}


	void NotifyEndWarpInvincibility();
	void NotifyWarpInvincibility();
	void DrawMyHUD(class ADunDefHUD* H);
	void NotifyPortalHit();
	void SetInCombatPhase(unsigned long inCombatPhase);
	void PostBeginPlay();
};


// Class DunDefSpider.DunDefSpider
// 0x004C (0x0D58 - 0x0D0C)
class ADunDefSpider : public ADunDefEnemy
{
public:
	struct FName                                       LungeAnimation;                                           // 0x0D0C(0x0008) (Edit)
	struct FName                                       WebShootAnimation;                                        // 0x0D14(0x0008) (Edit)
	struct FName                                       WebChargeAnimation;                                       // 0x0D1C(0x0008) (Edit)
	struct FName                                       WebShootSocket;                                           // 0x0D24(0x0008) (Edit)
	struct FName                                       MeleeSwingSocketName;                                     // 0x0D2C(0x0008) (Edit)
	struct FName                                       SpawnParticleMeshAttachmentSocket;                        // 0x0D34(0x0008) (Edit)
	float                                              MaxWebParticleScale;                                      // 0x0D3C(0x0004) (Edit)
	class UParticleSystemComponent*                    WebChargeParticleSystem;                                  // 0x0D40(0x0004) (Edit, ExportObject, Component, EditInline)
	class USoundCue*                                   WebChargeSound;                                           // 0x0D44(0x0004) (Edit)
	class UParticleSystemComponent*                    SpawnParticleEffect;                                      // 0x0D48(0x0004) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bAttachSpawnParticleToMesh : 1;                           // 0x0D4C(0x0004) (Edit)
	unsigned long                                      bUseSpawnEffect : 1;                                      // 0x0D4C(0x0004) (Edit)
	unsigned long                                      bPlayingWebCharge : 1;                                    // 0x0D4C(0x0004) (Net)
	unsigned long                                      bPlaySpawnEffect : 1;                                     // 0x0D4C(0x0004) (Net)
	float                                              WebStartTime;                                             // 0x0D50(0x0004)
	float                                              WebChargeTime;                                            // 0x0D54(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefSpider");
		return ptr;
	}


	void PlayDying(class UClass* DamageType, const struct FVector& HitLoc);
	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void Tick(float DeltaTime);
	void SetWebChargeTime(float NewWebChargeTime);
	void UpdateWebParticle(float NewScale);
	float PlayMeleeAttackAnimation(int AnimationIndex);
	void ShutDownWebCharge();
	void ShootWeb();
	void MeleeSwingEnd();
	void MeleeSwingStart();
	struct FVector GetMeleeSwingLocation();
	void GetWebProjectileLocAndRot(struct FVector* Position, struct FRotator* Orientation);
	float PlayAttackAnimation();
	void PlayWebChargeAnim();
	float PlayWebShootAnim();
	float PlayLungeAnimation();
	void UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues);
	void PlaySpawnEffect();
	void ClearSpawnEffect();
	void ReplicatedEvent(const struct FName& VarName);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void PostBeginPlay();
};


// Class DunDefSpider.DunDefMapInfo_PortalDefense
// 0x0038 (0x03A8 - 0x0370)
class UDunDefMapInfo_PortalDefense : public UDunDefMapInfo
{
public:
	struct FMinMaxValues                               MinMaxEnemyHealth;                                        // 0x0370(0x0008) (Edit)
	struct FMinMaxValues                               MinMaxEnemyDamage;                                        // 0x0378(0x0008) (Edit)
	struct FMinMaxValues                               MinMaxEnemyScale;                                         // 0x0380(0x0008) (Edit)
	float                                              MaxAllowedCoreHits[0x5];                                  // 0x0388(0x0004) (Edit)
	struct FString                                     RemainingTouchesString;                                   // 0x039C(0x000C) (Edit, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefMapInfo_PortalDefense");
		return ptr;
	}


	int GetMaxAllowedCoreHits(int difficulty);
};


// Class DunDefSpider.GameInfo_PortalDefense
// 0x0010 (0x0558 - 0x0548)
class AGameInfo_PortalDefense : public AGameInfo_Special
{
public:
	int                                                currentPortal;                                            // 0x0548(0x0004)
	float                                              GameEnemyHealthMultiplier;                                // 0x054C(0x0004)
	float                                              GameEnemyDamageMultiplier;                                // 0x0550(0x0004)
	float                                              GameEnemyScaleMultiplier;                                 // 0x0554(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.GameInfo_PortalDefense");
		return ptr;
	}


	float GetGameScaleMultiplier();
	float GetGameDamageMultiplier();
	float GetGameHealthMultiplier();
	void UpdateEnemyMultipliers(float DmgPct);
	void SetWaveNumber(int theWaveNumber);
	void DoWaveSkipping(unsigned long bAllowArbritraryWaveSkipping);
	void PostBeginPlay();
};


// Class DunDefSpider.DunDefGRI_VDay
// 0x0024 (0x0748 - 0x0724)
class ADunDefGRI_VDay : public ADunDefGameReplicationInfo
{
public:
	struct FString                                     PairWasMatched;                                           // 0x0724(0x000C) (Localized, NeedCtorLink)
	struct FString                                     BoySpawned;                                               // 0x0730(0x000C) (Localized, NeedCtorLink)
	struct FString                                     GirlSpawned;                                              // 0x073C(0x000C) (Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefGRI_VDay");
		return ptr;
	}


	void DrawExtraEnemyMinimapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap, class ADunDefEnemy* Enemy);
	void GenderSpawned(class ADunDefEnemy* enemyActor, unsigned long isBoy);
	void PairMatched(const struct FVector& Loc1, const struct FVector& Loc2, class ADunDefEnemy* enemyArch);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpider.DunDefSpiderController
// 0x00AC (0x06B8 - 0x060C)
class ADunDefSpiderController : public ADunDefEnemyController
{
public:
	float                                              LungeAttackDamage;                                        // 0x060C(0x0004) (Edit)
	float                                              LungeDamageMomentum;                                      // 0x0610(0x0004) (Edit)
	class UClass*                                      LungeDamageType;                                          // 0x0614(0x0004) (Edit)
	float                                              Lunge_MaxAttackDistance;                                  // 0x0618(0x0004) (Edit)
	float                                              Lunge_MinAttackDistance;                                  // 0x061C(0x0004) (Edit)
	float                                              LungeSpeed_Max;                                           // 0x0620(0x0004) (Edit)
	float                                              LungeSpeed_Min;                                           // 0x0624(0x0004) (Edit)
	float                                              LungeCoolDownTime;                                        // 0x0628(0x0004) (Edit)
	float                                              LungeAngle;                                               // 0x062C(0x0004) (Edit)
	float                                              LastLungeTime;                                            // 0x0630(0x0004)
	float                                              MinWebAttackPrepTime;                                     // 0x0634(0x0004) (Edit)
	float                                              MaxWebAttackPrepTime;                                     // 0x0638(0x0004) (Edit)
	float                                              WebShootCoolDown;                                         // 0x063C(0x0004) (Edit)
	float                                              Web_MaxShootRange;                                        // 0x0640(0x0004) (Edit)
	float                                              Web_MinShootRange;                                        // 0x0644(0x0004) (Edit)
	float                                              WebShootAngle;                                            // 0x0648(0x0004) (Edit)
	float                                              WebTowerProjectileAggroMult;                              // 0x064C(0x0004) (Edit)
	unsigned long                                      bAllowWebAttack : 1;                                      // 0x0650(0x0004) (Edit)
	unsigned long                                      IsInMeleeSwing : 1;                                       // 0x0650(0x0004)
	float                                              LastWebShootTime;                                         // 0x0654(0x0004)
	int                                                MeleeDamageAmount;                                        // 0x0658(0x0004) (Edit)
	float                                              MeleeDamageMomentum;                                      // 0x065C(0x0004) (Edit)
	struct FVector                                     MeleeSwingExtent;                                         // 0x0660(0x000C) (Edit)
	class UClass*                                      MeleeDamageType;                                          // 0x066C(0x0004) (Edit)
	float                                              ShootSpeed;                                               // 0x0670(0x0004) (Edit)
	float                                              TowerDmgScale;                                            // 0x0674(0x0004) (Edit)
	float                                              currentWebPrepTime;                                       // 0x0678(0x0004)
	struct FVector                                     PreviousMeleeSwingLocation;                               // 0x067C(0x000C)
	TArray<class AActor*>                              SwingHurtList;                                            // 0x0688(0x000C) (NeedCtorLink)
	class ADunDefWebProjectile*                        WebProjectileTemplate;                                    // 0x0694(0x0004) (Edit)
	struct FName                                       WebAttackStateName;                                       // 0x0698(0x0008)
	struct FName                                       LungeAttackStateName;                                     // 0x06A0(0x0008)
	struct FVector                                     LungeVelocity;                                            // 0x06A8(0x000C)
	class ADunDefSpiderQueenController*                MyQueen;                                                  // 0x06B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefSpiderController");
		return ptr;
	}


	float GetToolTipAttackRange();
	float GetTargetableRange(unsigned long bCheckAttackRange);
	int GetAttackDamage();
	void CancelCurrentTarget(int Reason);
	void SetMyQueen(class ADunDefSpiderQueenController* newQueen);
	void NotifyQueenOfDeath(class APawn* inPawn);
	void PawnDied(class APawn* inPawn);
	unsigned long IsWithinAttackRange(class AActor* Other, float AttackRangeOffset, unsigned long bCheckDeltaZ);
	void ShootWeb();
	float GetAttackRange();
	void DoLungeAttack();
	void DoWebAttack();
	void CheckForCustomAttacks();
	unsigned long AllowWebAttack();
	unsigned long AddToSwingHurtList(class AActor* newEntry);
	void EndMeleeSwing();
	void StartMeleeSwing();
	float GetWebChargeTime();
	unsigned long NotifyBump(class AActor* Other, const struct FVector& HitNormal);
};


// Class DunDefSpider.DunDefSpiderQueenController
// 0x00C0 (0x06CC - 0x060C)
class ADunDefSpiderQueenController : public ADunDefEnemyController
{
public:
	class ADunDefSpider*                               BabySpiderTemplate;                                       // 0x060C(0x0004) (Edit)
	TArray<int>                                        NumberOfBabiesToSpawnPerNumPlayers;                       // 0x0610(0x000C) (Edit, NeedCtorLink)
	float                                              PctOfBabiesAllowedBeforeRespawn;                          // 0x061C(0x0004) (Edit)
	float                                              BabySpawnAnimSpeed;                                       // 0x0620(0x0004) (Edit)
	float                                              BabyLaunchSpeed;                                          // 0x0624(0x0004) (Edit)
	float                                              BabyRespawnDelay;                                         // 0x0628(0x0004) (Edit)
	int                                                NumSimultaneousBabySpawns;                                // 0x062C(0x0004) (Edit)
	int                                                MaxNumOfBabies;                                           // 0x0630(0x0004)
	TArray<class ADunDefSpider*>                       MyBabies;                                                 // 0x0634(0x000C) (NeedCtorLink)
	int                                                CurrentNumberOfBabies;                                    // 0x0640(0x0004)
	int                                                currentSpawnedBabiesThisSet;                              // 0x0644(0x0004)
	float                                              LastBabySpawnTime;                                        // 0x0648(0x0004)
	unsigned long                                      bSpawnBaby : 1;                                           // 0x064C(0x0004)
	unsigned long                                      IsInMeleeSwing : 1;                                       // 0x064C(0x0004)
	int                                                NumWebProjectiles;                                        // 0x0650(0x0004) (Edit)
	float                                              WebRefireDelay;                                           // 0x0654(0x0004) (Edit)
	class ADunDefWebProjectile*                        WebProjectileTemplate;                                    // 0x0658(0x0004) (Edit)
	float                                              WebShootAngle;                                            // 0x065C(0x0004) (Edit)
	float                                              ShootSpeed;                                               // 0x0660(0x0004) (Edit)
	float                                              MinWebShootDistance;                                      // 0x0664(0x0004) (Edit)
	float                                              MaxWebShootDistance;                                      // 0x0668(0x0004) (Edit)
	float                                              MinWebAttackPrepTime;                                     // 0x066C(0x0004) (Edit)
	float                                              MaxWebAttackPrepTime;                                     // 0x0670(0x0004) (Edit)
	struct FRotator                                    WebShotAngleOffset;                                       // 0x0674(0x000C) (Edit)
	float                                              MeleeRadius;                                              // 0x0680(0x0004) (Edit)
	struct FName                                       WebAttackStateName;                                       // 0x0684(0x0008)
	float                                              LastWebShootTime;                                         // 0x068C(0x0004)
	float                                              currentWebPrepTime;                                       // 0x0690(0x0004)
	int                                                currentNumFiredProjectiles;                               // 0x0694(0x0004)
	int                                                MeleeDamageAmount;                                        // 0x0698(0x0004) (Edit)
	float                                              MeleeDamageMomentum;                                      // 0x069C(0x0004) (Edit)
	struct FVector                                     MeleeSwingExtent;                                         // 0x06A0(0x000C) (Edit)
	class UClass*                                      MeleeDamageType;                                          // 0x06AC(0x0004) (Edit)
	struct FVector                                     PreviousMeleeSwingLocation;                               // 0x06B0(0x000C)
	TArray<class AActor*>                              SwingHurtList;                                            // 0x06BC(0x000C) (NeedCtorLink)
	float                                              StunTime;                                                 // 0x06C8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefSpiderQueenController");
		return ptr;
	}


	void SetTarget(class AActor* NewTarget, unsigned long bDontClearIgnoreList);
	void ShootWeb();
	float GetWebChargeTime();
	void DoWebAttack();
	void NotifyBabyDeath(class ADunDefSpider* DeadBaby);
	float GetAttackInterval(class AActor* Victim);
	void CheckForCustomAttacks();
	struct FVector FindValidBabyShootLoc();
	void SpawnBaby();
	void FlagSpawnBaby();
	void StartBabySpawn();
	void ForceWakeUp();
	unsigned long AddToSwingHurtList(class AActor* newEntry);
	void EndMeleeSwing();
	void StartMeleeSwing();
	void PostBeginPlay();
};


// Class DunDefSpider.DunDefSpiderQueen
// 0x00D0 (0x0E10 - 0x0D40)
class ADunDefSpiderQueen : public ADunDefBoss
{
public:
	float                                              StunDelay;                                                // 0x0D40(0x0004) (Edit)
	float                                              CoreDamageMultiplier;                                     // 0x0D44(0x0004) (Edit)
	float                                              MinimumAngleDotForSuperHit;                               // 0x0D48(0x0004) (Edit)
	TArray<float>                                      NonStunnedDmgScalar;                                      // 0x0D4C(0x000C) (Edit, NeedCtorLink)
	float                                              CurrentNonStunnedDmgScalar;                               // 0x0D58(0x0004)
	float                                              BabySpawnPlayRate;                                        // 0x0D5C(0x0004) (Edit)
	struct FName                                       BabySpawnLocSocket;                                       // 0x0D60(0x0008) (Edit)
	struct FName                                       BabySpawnAnimName;                                        // 0x0D68(0x0008) (Edit)
	struct FName                                       StunnedAnimLoop;                                          // 0x0D70(0x0008) (Edit)
	struct FName                                       CrystalSocketName;                                        // 0x0D78(0x0008) (Edit)
	struct FName                                       MeleeSwingSocketName;                                     // 0x0D80(0x0008) (Edit)
	struct FName                                       WebShootSocket;                                           // 0x0D88(0x0008) (Edit)
	struct FName                                       WebShootAnimation;                                        // 0x0D90(0x0008) (Edit)
	struct FName                                       StunnedHurtAnim;                                          // 0x0D98(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     StunnedHurtEffectTemplate;                                // 0x0DA0(0x0004) (Edit)
	class UParticleSystemComponent*                    StunnedCoreVFX;                                           // 0x0DA4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    EnragedVFX;                                               // 0x0DA8(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       EnrageSocketName;                                         // 0x0DAC(0x0008) (Edit)
	struct FName                                       UpperBodyLookAtName;                                      // 0x0DB4(0x0008) (Edit)
	float                                              CrystalScaleDownTime;                                     // 0x0DBC(0x0004) (Edit)
	float                                              MinCrystalBrightnessScale;                                // 0x0DC0(0x0004) (Edit)
	float                                              EnrageHealthPct;                                          // 0x0DC4(0x0004) (Edit)
	float                                              EnrageDmgMult;                                            // 0x0DC8(0x0004) (Edit)
	float                                              EnrageBabySpawnMult;                                      // 0x0DCC(0x0004) (Edit)
	float                                              EnrageIntervalMult;                                       // 0x0DD0(0x0004) (Edit)
	float                                              EnrageGroundSpeedMult;                                    // 0x0DD4(0x0004) (Edit)
	unsigned long                                      bRageMode : 1;                                            // 0x0DD8(0x0004)
	unsigned long                                      bIsStunned : 1;                                           // 0x0DD8(0x0004)
	unsigned long                                      bLookAtTarget : 1;                                        // 0x0DD8(0x0004)
	float                                              TimeOfDeath;                                              // 0x0DDC(0x0004)
	class UMaterialInstanceConstant*                   QueenMIC;                                                 // 0x0DE0(0x0004)
	class USkelControlLookAt*                          UpperBodyLookAt;                                          // 0x0DE4(0x0004)
	class USkelControlLookAt*                          IKTest;                                                   // 0x0DE8(0x0004)
	class AActor*                                      TheLastDamageCauser;                                      // 0x0DEC(0x0004)
	float                                              WebChargeTime;                                            // 0x0DF0(0x0004)
	float                                              WebStartTime;                                             // 0x0DF4(0x0004)
	float                                              currentTakenStunnedDamage;                                // 0x0DF8(0x0004)
	float                                              AllowedDmgStunnedPct;                                     // 0x0DFC(0x0004) (Edit)
	struct FLinearColor                                EnrageCoreColor;                                          // 0x0E00(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefSpiderQueen");
		return ptr;
	}


	void SetDyingPhysics();
	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void SetUpperBodyLookAt(unsigned long bTurnOn);
	void Tick(float DeltaTime);
	void PlayStunnedHurtEffect(class UClass* DamageType, const struct FVector& HitLocation);
	void ShootWeb();
	float PlayWebShootAnim();
	void PlayWebChargeAnim();
	void SetWebChargeTime(float NewWebChargeTime);
	void GetWebProjectileLocAndRot(struct FVector* Position, struct FRotator* Orientation);
	struct FVector GetMeleeSwingLocation();
	void MeleeSwingEnd();
	void MeleeSwingStart();
	void SetRageMode();
	float GetEnrageIntervalMult();
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	unsigned long CheckSpecialCoreDmg(const struct FVector& HitLocation);
	void AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum);
	void NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void GetBabySpawnLocandRot(struct FVector* SpawnLoc, struct FRotator* SpawnRot);
	void DoSpawnBaby();
	void StopStunAnimation();
	void PlayStunAnimation();
	float PlayBabySpawnAnim(float playSpeed);
	float GetPawnDamageModifier(unsigned long bDontIncludeAbilities);
	void UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues);
	void PostBeginPlay();
	void PlayJumpAnimation();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpider.TowerDeboosterObject
// 0x0008 (0x0044 - 0x003C)
class UTowerDeboosterObject : public UObject
{
public:
	TEnumAsByte<ETowerBoostType>                       MyBoostType;                                              // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              MyBoostAmount;                                            // 0x0040(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.TowerDeboosterObject");
		return ptr;
	}


	float GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType);
	unsigned long HasTowerBoostingType(TEnumAsByte<ETowerBoostType> checkType);
	TScriptInterface<class UDunDefTargetableInterface> GetTowerBoostingTarget();
	void SetBoostAmount(float newBoostAmount);
	void SetBoostType(TEnumAsByte<ETowerBoostType> newBoostType);
};


// Class DunDefSpider.GameInfo_VDay
// 0x0024 (0x056C - 0x0548)
class AGameInfo_VDay : public AMain
{
public:
	TArray<class ADunDefEnemy*>                        Boys;                                                     // 0x0548(0x000C) (NeedCtorLink)
	TArray<class ADunDefEnemy*>                        Girls;                                                    // 0x0554(0x000C) (NeedCtorLink)
	unsigned long                                      bUsingGenderSpawnTimer : 1;                               // 0x0560(0x0004)
	float                                              GenderSpawnTimer;                                         // 0x0564(0x0004)
	class UUI_KillCount*                               myKillCountUI;                                            // 0x0568(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.GameInfo_VDay");
		return ptr;
	}


	void PairMatched(class ADunDefEnemy* Boy, class ADunDefEnemy* Girl);
	void Tick(float DeltaTime);
	class ADunDefEnemy* FindBestTemplate(struct FString* GenderString);
	class ADunDefEnemy* WaveSpawnerCreateEnemy(class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void OpenedKillCountUI(class UUI_KillCount* aKillCountUI);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
