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

// Class CDT7.DunDefProjectile_HarpoonDot
// 0x001C (0x03AC - 0x0390)
class ADunDefProjectile_HarpoonDot : public ADunDefProjectile_Harpoon
{
public:
	float                                              DotDamageScale;                                           // 0x0390(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     DotTemplate;                                              // 0x0394(0x0004) (Edit)
	unsigned long                                      bAttach : 1;                                              // 0x0398(0x0004) (Edit)
	unsigned long                                      bUseDot : 1;                                              // 0x0398(0x0004) (Edit)
	unsigned long                                      bSlowEnemyTarget : 1;                                     // 0x0398(0x0004) (Edit)
	unsigned long                                      bWeakenEnemyTarget : 1;                                   // 0x0398(0x0004) (Edit)
	float                                              SlowEnemyTargetPercentage;                                // 0x039C(0x0004) (Edit)
	float                                              WeakenEnemyTargetPercentage;                              // 0x03A0(0x0004) (Edit)
	float                                              EnemyClearSlowTime;                                       // 0x03A4(0x0004) (Edit)
	float                                              EnemyClearWeakenTime;                                     // 0x03A8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.DunDefProjectile_HarpoonDot");
		return ptr;
	}


	void ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SpawnDot(const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class CDT7.DunDefProjectile_StaffDot
// 0x0020 (0x03C4 - 0x03A4)
class ADunDefProjectile_StaffDot : public ADunDefProjectile_MagicBolt
{
public:
	float                                              DotDamageScale;                                           // 0x03A4(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     DotTemplate;                                              // 0x03A8(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     EffectTemplate;                                           // 0x03AC(0x0004) (Edit)
	unsigned long                                      bAttach : 1;                                              // 0x03B0(0x0004) (Edit)
	unsigned long                                      bUseDot : 1;                                              // 0x03B0(0x0004) (Edit)
	unsigned long                                      bUseEffect : 1;                                           // 0x03B0(0x0004) (Edit)
	unsigned long                                      bWeakenEnemyTarget : 1;                                   // 0x03B0(0x0004) (Edit)
	unsigned long                                      bSlowEnemyTarget : 1;                                     // 0x03B0(0x0004) (Edit)
	unsigned long                                      bUseParticleEffectOnHit : 1;                              // 0x03B0(0x0004) (Edit)
	float                                              SlowEnemyTargetPercentage;                                // 0x03B4(0x0004) (Edit)
	float                                              WeakenEnemyTargetPercentage;                              // 0x03B8(0x0004) (Edit)
	float                                              EnemyClearSlowTime;                                       // 0x03BC(0x0004) (Edit)
	float                                              EnemyClearWeakenTime;                                     // 0x03C0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.DunDefProjectile_StaffDot");
		return ptr;
	}


	void SpawnEffect();
	void Landed(const struct FVector& HitNormal, class AActor* Floor);
	void SpawnDot(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void DoEffect();
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class CDT7.DunDefWeapon_MagicStaff_Dot
// 0x0000 (0x0618 - 0x0618)
class ADunDefWeapon_MagicStaff_Dot : public ADunDefWeapon_MagicStaff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.DunDefWeapon_MagicStaff_Dot");
		return ptr;
	}


	void ShootProjectiles(int theFireMode);
};


// Class CDT7.HeroEquipment_Familiar_TowerDamageScaling
// 0x00FC (0x0BF8 - 0x0AFC)
class UHeroEquipment_Familiar_TowerDamageScaling : public UHeroEquipment_Familiar
{
public:
	float                                              ProjectileShootInterval;                                  // 0x0AFC(0x0004) (Edit)
	class ADunDefProjectile*                           ProjectileTemplate;                                       // 0x0B00(0x0004) (Edit)
	class ADunDefProjectile*                           ProjectileTemplateAlt;                                    // 0x0B04(0x0004) (Edit)
	TArray<class ADunDefProjectile*>                   ProjectileTemplates;                                      // 0x0B08(0x000C) (Edit, NeedCtorLink)
	struct FName                                       FamiliarSocketName;                                       // 0x0B14(0x0008) (Edit)
	struct FName                                       MuzzleSocketName;                                         // 0x0B1C(0x0008) (Edit)
	struct FName                                       ShootEffectSocket;                                        // 0x0B24(0x0008) (Edit)
	float                                              TargetRange;                                              // 0x0B2C(0x0004) (Edit)
	unsigned long                                      ScaleTowerDamage : 1;                                     // 0x0B30(0x0004) (Edit)
	unsigned long                                      bUseFixedShootSpeed : 1;                                  // 0x0B30(0x0004) (Edit)
	unsigned long                                      bShootProjectileWithoutTarget : 1;                        // 0x0B30(0x0004) (Edit)
	unsigned long                                      bForceProjectileMuzzleRotation : 1;                       // 0x0B30(0x0004) (Edit)
	unsigned long                                      bIgnoreHurtAnimationWhenShooting : 1;                     // 0x0B30(0x0004) (Edit)
	unsigned long                                      bSlowEnemyTarget : 1;                                     // 0x0B30(0x0004) (Edit)
	unsigned long                                      bWeakenEnemyTarget : 1;                                   // 0x0B30(0x0004) (Edit)
	unsigned long                                      bUseProjectileImpactedDelegate : 1;                       // 0x0B30(0x0004) (Edit)
	unsigned long                                      bMythicalScaleTowerDamage : 1;                            // 0x0B30(0x0004) (Edit)
	unsigned long                                      bChooseHealingTarget : 1;                                 // 0x0B30(0x0004) (Edit)
	unsigned long                                      bProjectilesCollideWithOwner : 1;                         // 0x0B30(0x0004) (Edit)
	unsigned long                                      bAddManaForDamage : 1;                                    // 0x0B30(0x0004) (Edit)
	unsigned long                                      bUseAltProjectile : 1;                                    // 0x0B30(0x0004) (Edit)
	unsigned long                                      bIgnoreElementInTargeting : 1;                            // 0x0B30(0x0004) (Edit)
	unsigned long                                      bDoShotsPerSecondBonusCap : 1;                            // 0x0B30(0x0004) (Edit)
	unsigned long                                      DoLineOfSightCheck : 1;                                   // 0x0B30(0x0004) (Edit)
	unsigned long                                      bDidAddManaForDamage : 1;                                 // 0x0B30(0x0004) (Transient)
	TArray<struct FVector>                             ProjectileSpawnOffsets;                                   // 0x0B34(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     ProjectileSpawnOffset;                                    // 0x0B40(0x000C) (Edit)
	TArray<struct FRotator>                            ProjectileRotOffsets;                                     // 0x0B4C(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      ProjectileDelays;                                         // 0x0B58(0x000C) (Edit, NeedCtorLink)
	float                                              MinimumProjectileSpeed;                                   // 0x0B64(0x0004) (Edit)
	float                                              ProjectileSpeedBonusMultiplier;                           // 0x0B68(0x0004) (Edit)
	float                                              MaxAttackAnimationSpeed;                                  // 0x0B6C(0x0004) (Edit)
	float                                              ProjectileDamageMultiplier;                               // 0x0B70(0x0004) (Edit)
	float                                              ShotsPerSecondExponent;                                   // 0x0B74(0x0004) (Edit)
	float                                              ShotsPerSecondAnimExponent;                               // 0x0B78(0x0004) (Edit)
	float                                              AbsoluteDamageMultiplier;                                 // 0x0B7C(0x0004) (Edit)
	float                                              SlowEnemyTargetPercentage;                                // 0x0B80(0x0004) (Edit)
	float                                              WeakenEnemyTargetPercentage;                              // 0x0B84(0x0004) (Edit)
	float                                              EnemyClearSlowTime;                                       // 0x0B88(0x0004) (Edit)
	float                                              MythicalScaleDamageStatExponent;                          // 0x0B8C(0x0004) (Edit)
	float                                              EnemyClearWeakenTime;                                     // 0x0B90(0x0004) (Edit)
	float                                              NightmareDamageMultiplier;                                // 0x0B94(0x0004) (Edit)
	float                                              ExtraNightmareDamageMultiplier;                           // 0x0B98(0x0004) (Edit)
	TEnumAsByte<ELevelUpValueType>                     MythicalScaleDamageStatType;                              // 0x0B9C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B9D(0x0003) MISSED OFFSET
	class USoundCue*                                   ShootSound;                                               // 0x0BA0(0x0004) (Edit)
	class UParticleSystem*                             ShootEffect;                                              // 0x0BA4(0x0004) (Edit)
	float                                              BaseHealAmount;                                           // 0x0BA8(0x0004) (Edit)
	float                                              HealAmountMultiplier;                                     // 0x0BAC(0x0004) (Edit)
	float                                              NightmareHealingMultiplier;                               // 0x0BB0(0x0004) (Edit)
	float                                              AltProjectileMinimumRange;                                // 0x0BB4(0x0004) (Edit)
	float                                              HealingPriorityHealthPercentage;                          // 0x0BB8(0x0004) (Edit)
	struct FName                                       AttackAnimationAlt;                                       // 0x0BBC(0x0008) (Edit)
	int                                                ShotsPerSecondBonusCap;                                   // 0x0BC4(0x0004) (Edit)
	float                                              BaseDamageToManaRatio;                                    // 0x0BC8(0x0004) (Edit)
	float                                              ManaMultiplier;                                           // 0x0BCC(0x0004) (Edit)
	float                                              MaxManaPerDamage;                                         // 0x0BD0(0x0004) (Edit)
	float                                              MinManaPerDamage;                                         // 0x0BD4(0x0004) (Edit)
	float                                              MaxManaMultiplierExponent;                                // 0x0BD8(0x0004) (Edit)
	float                                              DamageManaMultiplierExponent;                             // 0x0BDC(0x0004) (Edit)
	float                                              LastShootProjectileTime;                                  // 0x0BE0(0x0004) (Transient)
	TScriptInterface<class UDunDefTargetableInterface> BestTargetRef;                                            // 0x0BE4(0x0008)
	TArray<struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot> DelayedShots;                                             // 0x0BEC(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.HeroEquipment_Familiar_TowerDamageScaling");
		return ptr;
	}


	float GetHealAmount();
	void OnDunDefProjectileImpacted(class ADunDefProjectile* aProjectile, class AActor* impactedOn);
	void NotifyEquipment_PawnTookDamage(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	void NotifyEquipment_AnimNotifyAttachment(int NotifyID, class USkeletalMeshComponent* equipmentSkelComp);
	void ShootProjectile(bool bIsAltProjectile);
	void GetMuzzleTransformation(class USkeletalMeshComponent* myMeshComp, struct FVector* SpawnLocation, struct FRotator* SpawnRotation);
	int GetWeaponDamage();
	void ApplyPrimaryDamageMultiplierDisplay(int* StatValue);
	float GetEquipmentStatValue(TEnumAsByte<EEquipmentStatType> equipmentStatType, bool returnFinalAddedValue, bool includeStatLevelUp);
	void AddRandomizeValues(float equipmentQuality, bool doResetStatsToTemplate, bool bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, bool bIsForShop, bool bAllowTranscendentGear);
	bool AllowStatLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, bool IsInForgeUI, bool bIgnoreManaRequirement);
	float GetAttackInterval(bool bIncludeShotsPerSecondExponent);
	class UClass* GetElementalDamageType();
	float GetProjectileElementalDamage();
	float GetProjectileDamage(class ADunDefProjectile* projectileArch);
	float GetProjectileSpeed(class ADunDefProjectile* projectileArch);
	int GetNumProjectiles();
	struct FRotator GetDesiredSphereRotationalPlacement(class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget);
	struct FRotator GetDesiredDirection(class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer);
	void ShutDown(bool isDestruction);
	void AttachedComponent(class UPrimitiveComponent* aComp);
	void UpdateAI(class ADunDefPlayer* PlayerOwner, float DeltaTime);
	void UpdateDelayedShots(class ADunDefPlayer* PlayerOwner, float DeltaTime);
	void TickedByPawn(class ADunDefPlayer* PlayerOwner, float DeltaTime);
	TScriptInterface<class UDunDefTargetableInterface> GetBestTarget();
	TScriptInterface<class UDunDefTargetableInterface> GetBestHealingTarget(float CheckHealthPercentageThreshold);
};


// Class CDT7.HeroEquipment_Familiar_Melee_TowerScaling
// 0x0060 (0x0C58 - 0x0BF8)
class UHeroEquipment_Familiar_Melee_TowerScaling : public UHeroEquipment_Familiar_TowerDamageScaling
{
public:
	float                                              MeleeHitRadius;                                           // 0x0BF8(0x0004) (Edit)
	float                                              MeleeDamageMomentum;                                      // 0x0BFC(0x0004) (Edit)
	class UClass*                                      MeleeDamageType;                                          // 0x0C00(0x0004) (Edit)
	float                                              MaxKnockbackMultiplier;                                   // 0x0C04(0x0004) (Edit)
	float                                              KnockbackBonusLinearScale;                                // 0x0C08(0x0004) (Edit)
	float                                              KnockbackBonusExpScale;                                   // 0x0C0C(0x0004) (Edit)
	unsigned long                                      bAlsoShootProjectile : 1;                                 // 0x0C10(0x0004) (Edit)
	unsigned long                                      ScaleMeleeDamageForHero : 1;                              // 0x0C10(0x0004) (Edit)
	unsigned long                                      bUseRandomizedDamage : 1;                                 // 0x0C10(0x0004) (Edit)
	unsigned long                                      bDoMeleeHealing : 1;                                      // 0x0C10(0x0004) (Edit)
	unsigned long                                      bIsAttacking : 1;                                         // 0x0C10(0x0004)
	float                                              MeleeRange;                                               // 0x0C14(0x0004) (Edit)
	float                                              ScaleDamageStatExponent;                                  // 0x0C18(0x0004) (Edit)
	float                                              ExtraNightmareMeleeDamageMultiplier;                      // 0x0C1C(0x0004) (Edit)
	struct FName                                       AlsoShootProjectileAnimation;                             // 0x0C20(0x0008) (Edit)
	TEnumAsByte<ELevelUpValueType>                     ScaleMeleeDamageForHeroStatType;                          // 0x0C28(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C29(0x0003) MISSED OFFSET
	int                                                RandomizedDamageMultiplierMaximum;                        // 0x0C2C(0x0004) (Edit)
	float                                              RandomizedDamageMultiplierDivisor;                        // 0x0C30(0x0004) (Edit)
	float                                              BaseDamageToHealRatio;                                    // 0x0C34(0x0004) (Edit)
	float                                              EquipmentDamageMultiplierBase;                            // 0x0C38(0x0004) (Edit)
	float                                              MaxHealPerDamage;                                         // 0x0C3C(0x0004) (Edit)
	float                                              MinHealPerDamage;                                         // 0x0C40(0x0004) (Edit)
	float                                              MaxHealMultiplierExponent;                                // 0x0C44(0x0004) (Edit)
	float                                              DamageHealMultiplierExponent;                             // 0x0C48(0x0004) (Edit)
	TArray<class AActor*>                              SwingHurtList;                                            // 0x0C4C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.HeroEquipment_Familiar_Melee_TowerScaling");
		return ptr;
	}


	void AttachedComponent(class UPrimitiveComponent* aComp);
	void NotifyEquipment_AnimNotifyAttachment(int NotifyID, class USkeletalMeshComponent* equipmentSkelComp);
	void ShutDown(bool isDestruction);
	void UpdateAI(class ADunDefPlayer* PlayerOwner, float DeltaTime);
	float GetHealMultiplier();
	float GetMomentumMultiplier();
	void UpdateAttackSwing(float DeltaTime);
	bool AddToSwingHurtList(class ADunDefPlayer* myOwner, class AActor* newEntry);
	void TickedByPawn(class ADunDefPlayer* PlayerOwner, float DeltaTime);
};


// Class CDT7.UI_TBR
// 0x0134 (0x0770 - 0x063C)
class UUI_TBR : public UDunDefUIScene
{
public:
	class UUIButton*                                   CloseButton;                                              // 0x063C(0x0004) (Edit)
	TArray<class UUIScriptWidget_Button*>              CheckPointButtons;                                        // 0x0640(0x000C) (Edit, NeedCtorLink)
	struct FOptionsInfo                                SavedOptions;                                             // 0x064C(0x0104) (NeedCtorLink)
	class UDunDefHeroManager*                          heroManager;                                              // 0x0750(0x0004)
	struct FString                                     MapToLaunch;                                              // 0x0754(0x000C) (NeedCtorLink)
	int                                                MapSelection;                                             // 0x0760(0x0004)
	int                                                DifficultySelection;                                      // 0x0764(0x0004)
	class UUIScriptWidget_Button*                      TBRAscensionStartButton;                                  // 0x0768(0x0004) (Edit)
	class UUIScriptWidget_Button*                      TBRNightmareStartButton;                                  // 0x076C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.UI_TBR");
		return ptr;
	}


	void LaunchMap(bool bStartTrueBossRush);
	bool WasCheckPointButtonPressed(class UUIObject* Widget);
	bool NotifyWidgetClicked(class UUIObject* Widget);
	void CheckProgress();
	void SceneActivated(bool bInitialActivation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
