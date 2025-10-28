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

// Class CDT8.DunDefEmitterRadialForce
// 0x00C8 (0x039C - 0x02D4)
class ADunDefEmitterRadialForce : public ADunDefEmitterSpawnable
{
public:
	float                                              CloudLifeSpan;                                            // 0x02D4(0x0004) (Edit)
	float                                              CloudRadius;                                              // 0x02D8(0x0004) (Edit, Net)
	unsigned long                                      DoCough : 1;                                              // 0x02DC(0x0004) (Edit)
	unsigned long                                      DoDamage : 1;                                             // 0x02DC(0x0004) (Edit)
	unsigned long                                      DoFullDamage : 1;                                         // 0x02DC(0x0004) (Edit)
	unsigned long                                      bUseAngleForDamage : 1;                                   // 0x02DC(0x0004) (Edit)
	unsigned long                                      OnlyDamageClosestActor : 1;                               // 0x02DC(0x0004) (Edit)
	unsigned long                                      StealEnemyElementalEffect : 1;                            // 0x02DC(0x0004) (Edit)
	unsigned long                                      ReportEnemyDeath : 1;                                     // 0x02DC(0x0004) (Edit)
	unsigned long                                      ScaleForHero : 1;                                         // 0x02DC(0x0004) (Edit)
	unsigned long                                      RenderEnemiesUnableToAttack : 1;                          // 0x02DC(0x0004) (Edit)
	unsigned long                                      bScaleForHeroDefenseModifiers : 1;                        // 0x02DC(0x0004) (Edit)
	unsigned long                                      bUseParticleParamForScale : 1;                            // 0x02DC(0x0004) (Edit)
	unsigned long                                      bUseParticleParamForInverseScale : 1;                     // 0x02DC(0x0004) (Edit)
	unsigned long                                      bIsAbility : 1;                                           // 0x02DC(0x0004) (Edit)
	unsigned long                                      bdisableRateScaling : 1;                                  // 0x02DC(0x0004) (Edit)
	unsigned long                                      bNotifyWeaponDidDamage : 1;                               // 0x02DC(0x0004) (Edit)
	unsigned long                                      IsWeaponAttack : 1;                                       // 0x02DC(0x0004) (Edit)
	unsigned long                                      bUseSelfAsDamageCauser : 1;                               // 0x02DC(0x0004) (Edit)
	unsigned long                                      bScaleDamageForAmountOfPlayers : 1;                       // 0x02DC(0x0004) (Edit)
	unsigned long                                      bDoRadialForce : 1;                                       // 0x02DC(0x0004) (Edit)
	unsigned long                                      bOutwardPush : 1;                                         // 0x02DC(0x0004) (Edit)
	unsigned long                                      bFalloff : 1;                                             // 0x02DC(0x0004) (Edit)
	unsigned long                                      bUseCenterTouchCheck : 1;                                 // 0x02DC(0x0004) (Edit)
	unsigned long                                      bHeal : 1;                                                // 0x02DC(0x0004) (Edit)
	unsigned long                                      bApplyBuffOnContact : 1;                                  // 0x02DC(0x0004) (Edit)
	unsigned long                                      bNotifyKismet : 1;                                        // 0x02DC(0x0004) (Edit)
	unsigned long                                      HasFadedOut : 1;                                          // 0x02DC(0x0004) (Transient)
	unsigned long                                      HasTicked : 1;                                            // 0x02DC(0x0004) (Transient)
	float                                              EffectInterval;                                           // 0x02E0(0x0004) (Edit, Net)
	float                                              DamageAmount;                                             // 0x02E4(0x0004) (Edit, Net)
	class UClass*                                      MyDamageType;                                             // 0x02E8(0x0004) (Edit)
	float                                              DamageMomentum;                                           // 0x02EC(0x0004) (Edit)
	TArray<class UClass*>                              IgnoreActorClasses;                                       // 0x02F0(0x000C) (Edit, NeedCtorLink)
	float                                              CloudLifeSpanMultiplierExponent;                          // 0x02FC(0x0004) (Edit)
	float                                              CloudDamageMultiplierExponent;                            // 0x0300(0x0004) (Edit)
	float                                              CloudAOEMultiplierExponent;                               // 0x0304(0x0004) (Edit)
	float                                              CloudEffectRateMultiplierExponent;                        // 0x0308(0x0004) (Edit)
	float                                              DamageFalloffExponent;                                    // 0x030C(0x0004) (Edit)
	TArray<struct ADunDefEmitterRadialForce_FActorTypeDamageMultiplier> ActorTypeDamageMultipliers;                               // 0x0310(0x000C) (Edit, NeedCtorLink)
	struct FName                                       ParticleScaleParamName;                                   // 0x031C(0x0008) (Edit)
	float                                              CloudEffectRadius;                                        // 0x0324(0x0004) (Edit)
	TEnumAsByte<ELevelUpValueType>                     ScalarStat;                                               // 0x0328(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              MaxTargetDeltaPitch;                                      // 0x032C(0x0004) (Edit, Net)
	float                                              MaxTargetDeltaYaw;                                        // 0x0330(0x0004) (Edit, Net)
	TArray<float>                                      AmountOfPlayersDamageMulti;                               // 0x0334(0x000C) (Edit, NeedCtorLink)
	float                                              InitialEffectDelay;                                       // 0x0340(0x0004) (Edit)
	float                                              Strength;                                                 // 0x0344(0x0004) (Edit)
	float                                              InAirMaxVelocity;                                         // 0x0348(0x0004) (Edit)
	float                                              FalloffExponent;                                          // 0x034C(0x0004) (Edit)
	float                                              MinimumFalloff;                                           // 0x0350(0x0004) (Edit)
	float                                              MaximumFalloff;                                           // 0x0354(0x0004) (Edit)
	float                                              CenterTouchRadius;                                        // 0x0358(0x0004) (Edit)
	float                                              LifespanChange;                                           // 0x035C(0x0004) (Edit)
	float                                              DamageToDeal;                                             // 0x0360(0x0004) (Edit)
	class UDunDefBuff*                                 BuffToApply;                                              // 0x0364(0x0004) (Edit)
	struct FName                                       KismetNotifyName;                                         // 0x0368(0x0008) (Edit)
	int                                                MaxLifeSpanChangeCount;                                   // 0x0370(0x0004) (Edit)
	class AActor*                                      ClosestTarget;                                            // 0x0374(0x0004) (Transient)
	class ADunDefTower*                                SpawnerTower;                                             // 0x0378(0x0004) (Net, Transient)
	float                                              lastTowerSpeed;                                           // 0x037C(0x0004) (Transient)
	float                                              timeLastSpeedUpdate;                                      // 0x0380(0x0004) (Transient)
	float                                              BaseSpeed;                                                // 0x0384(0x0004) (Transient)
	float                                              lastTowerDamage;                                          // 0x0388(0x0004) (Transient)
	float                                              timeLastDamageUpdate;                                     // 0x038C(0x0004) (Transient)
	float                                              CloudEndTime;                                             // 0x0390(0x0004) (Transient)
	float                                              lastCenterTouch;                                          // 0x0394(0x0004) (Transient)
	int                                                TimerExtensions;                                          // 0x0398(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefEmitterRadialForce");
		return ptr;
	}


	unsigned long STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot);
	float STATIC_StaticGetCloudLifeSpan(float lifeSpanStatModifier, class ADunDefEmitterRadialForce* gCloud);
	float STATIC_StaticGetAttackRange(float attackRangeStatModifier, class ADunDefEmitterRadialForce* gCloud);
	float STATIC_StaticGetAttackDamage(float damageStatModifier, class ADunDefEmitterRadialForce* gCloud);
	float STATIC_StaticGetAttackRate(float attackRateStatModifier, class ADunDefEmitterRadialForce* gCloud);
	void UpdateEffectInterval();
	float GetDamageMult();
	class AActor* GetDamageCauser();
	void ScaleRadiusEffect();
	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	unsigned long AllowHeroGUID(int GUID1, int GUID2, int GUID3, int GUID4);
	void InitializeDD();
	void SetLifeSpanTimeout();
	void PostBeginPlay();
	void StartEffectTimer();
	float GetTargetDesirability(const TScriptInterface<class UDunDefTargetableInterface>& aTarget);
	unsigned long CheckValidAngle(class AActor* Victim, const struct FVector& Origin);
	void EffectTimer();
	void ScaleDamageForNumberOfPlayers();
	float GetRadiusDamage(float theBaseDamage, class AActor* Victim);
	unsigned long HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage);
	void ApplyRadialForce(class AActor* Target);
	unsigned long IsClassOnIgnoreList(class UClass* ActorClass);
	void FadeOut(float theLightFadeOutTime);
	void ActorTouchedCenter(class ADunDefPawn* P);
	void ReplicatedEvent(const struct FName& VarName);
	void NotifyWeapon(class AActor* Target);
};


// Class CDT8.DunDefWeapon_NessieLauncher
// 0x0014 (0x05AC - 0x0598)
class ADunDefWeapon_NessieLauncher : public ADunDefWeapon_Crossbow
{
public:
	class ADunDefEmitterRadialForce*                   ShockwaveTemplate;                                        // 0x0598(0x0004) (Edit)
	class AActor*                                      ActorToSpawn;                                             // 0x059C(0x0004) (Edit)
	float                                              NessieCooldown;                                           // 0x05A0(0x0004) (Edit)
	float                                              Multiplier;                                               // 0x05A4(0x0004)
	float                                              LastTime;                                                 // 0x05A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefWeapon_NessieLauncher");
		return ptr;
	}


	unsigned long NeedsReload();
	void FireAmmunition();
	void EnemyDiedFromSource();
	unsigned long HasAnyClipAmmo();
	void SpawnExplodingNessie(int Ammo);
	float GetAmmoPercent();
	void PostBeginPlay();
	int GetTotalAmmo();
	void Reload();
};


// Class CDT8.DunDefExplodingActor
// 0x0008 (0x0578 - 0x0570)
class ADunDefExplodingActor : public ADunDefDecoyTarget
{
public:
	class AActor*                                      ActorToSpawn;                                             // 0x0570(0x0004) (Edit)
	float                                              Multiplier;                                               // 0x0574(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefExplodingActor");
		return ptr;
	}


	void SetRandomColor();
	void SetMultiplier(float multi);
	void SelfDestruct();
	void SetActiveTime();
	void SetHealth();
	void SetPokeRadius();
	void FlyForward();
	void PostBeginPlay();
};


// Class CDT8.DunDefWeapon_HoloSword
// 0x0040 (0x0664 - 0x0624)
class ADunDefWeapon_HoloSword : public ADunDefWeapon_MeleeSword
{
public:
	float                                              HoloSpawnInterval;                                        // 0x0624(0x0004) (Edit)
	float                                              TeleportCooldown;                                         // 0x0628(0x0004) (Edit)
	float                                              HoloDuration;                                             // 0x062C(0x0004) (Edit)
	class AActor*                                      ActorToSpawn;                                             // 0x0630(0x0004) (Edit)
	class UMaterialInstance*                           HoloMaterial;                                             // 0x0634(0x0004) (Edit)
	struct FName                                       Hawkanimationname;                                        // 0x0638(0x0008) (Edit)
	float                                              LastHoloSpawnTime;                                        // 0x0640(0x0004)
	float                                              LastTeleportTime;                                         // 0x0644(0x0004)
	unsigned long                                      EnableSpawning : 1;                                       // 0x0648(0x0004)
	struct FName                                       CopyName;                                                 // 0x064C(0x0008)
	int                                                ActorIndex;                                               // 0x0654(0x0004)
	TArray<class AActor*>                              spawnedActors;                                            // 0x0658(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefWeapon_HoloSword");
		return ptr;
	}


	void Tick(float DeltaTime);
	void TeleportToOldestHolo();
	void DestroyOldestHolo();
	void SpawnHolo();
	void EnableBlocking();
	void HandleCloneAttacks(unsigned long ishawk);
	void DoSwinging(unsigned long bForceSwing, unsigned long bOverrideExtent, const struct FVector& extentOverride, float damageOverride, float momentumOverride, unsigned long scaleMomentumByMass, float scaleMomentumByMassExponent);
	void DoMeleeAttack();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class CDT8.DunDefWeapon_MagicStaff_Channeling
// 0x0030 (0x0684 - 0x0654)
class ADunDefWeapon_MagicStaff_Channeling : public ADunDefWeapon_MagicStaff
{
public:
	class ADunDefProjectile*                           ChannelingProjectileTemplate;                             // 0x0654(0x0004) (Edit)
	float                                              ChannelingProjectileFireSpeed;                            // 0x0658(0x0004) (Edit)
	float                                              ChannelingProjectileDamageMultiplier;                     // 0x065C(0x0004) (Edit)
	struct FVector                                     ChannelingProjectileLocationOffset;                       // 0x0660(0x000C) (Edit)
	float                                              ChannelingRangeMultiplier;                                // 0x066C(0x0004) (Edit)
	TScriptInterface<class UDunDefTargetableInterface> act;                                                      // 0x0670(0x0008) (Transient)
	TArray<TScriptInterface<class UDunDefTargetableInterface>> Enemies;                                                  // 0x0678(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefWeapon_MagicStaff_Channeling");
		return ptr;
	}

};


// Class CDT8.DunDefWeapon_MagicStaff_CustomRightClick
// 0x0038 (0x068C - 0x0654)
class ADunDefWeapon_MagicStaff_CustomRightClick : public ADunDefWeapon_MagicStaff
{
public:
	int                                                AbilityCooldown;                                          // 0x0654(0x0004) (Edit)
	unsigned long                                      ApplyBuffs : 1;                                           // 0x0658(0x0004) (Edit)
	unsigned long                                      PayManaPS : 1;                                            // 0x0658(0x0004) (Edit)
	unsigned long                                      PayHPPS : 1;                                              // 0x0658(0x0004) (Edit)
	unsigned long                                      ScaleCostWithTime : 1;                                    // 0x0658(0x0004) (Edit)
	unsigned long                                      AbilityCharged : 1;                                       // 0x0658(0x0004)
	unsigned long                                      UnderEffect : 1;                                          // 0x0658(0x0004)
	unsigned long                                      BuffApplied : 1;                                          // 0x0658(0x0004)
	float                                              ManaCost;                                                 // 0x065C(0x0004) (Edit)
	float                                              HPCost;                                                   // 0x0660(0x0004) (Edit)
	float                                              LinearCostIncrease;                                       // 0x0664(0x0004) (Edit)
	int                                                buffUniqueID;                                             // 0x0668(0x0004) (Edit)
	float                                              CostInterval;                                             // 0x066C(0x0004) (Edit)
	class UDunDefBuff*                                 AbilityBuffTemplate;                                      // 0x0670(0x0004) (Edit)
	int                                                LastActivedAbilityTime;                                   // 0x0674(0x0004)
	int                                                LastCheckTime;                                            // 0x0678(0x0004)
	int                                                AbilityUpKeepTime;                                        // 0x067C(0x0004)
	int                                                CurrentCost;                                              // 0x0680(0x0004)
	float                                              PaidHealth;                                               // 0x0684(0x0004) (Transient)
	float                                              PaidMana;                                                 // 0x0688(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefWeapon_MagicStaff_CustomRightClick");
		return ptr;
	}


	void CheckCooldown();
	float PayBack();
	void PutDownWeapon();
};


// Class CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect
// 0x0024 (0x0678 - 0x0654)
class ADunDefWeapon_MagicStaff_WithOribitingEffect : public ADunDefWeapon_MagicStaff
{
public:
	unsigned long                                      ExplodeStacksWithRightClick : 1;                          // 0x0654(0x0004) (Edit)
	int                                                buffUniqueID;                                             // 0x0658(0x0004) (Edit)
	TArray<class UParticleSystemComponent*>            ParticleSystems;                                          // 0x065C(0x000C) (Edit, ExportObject, Component, NeedCtorLink, EditInline)
	struct FName                                       SocketName;                                               // 0x0668(0x0008) (Edit)
	class UParticleSystemComponent*                    CurrentParticleSystem;                                    // 0x0670(0x0004) (ExportObject, Component, EditInline)
	int                                                CurrentStacks;                                            // 0x0674(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect");
		return ptr;
	}


	void SpawnKnockbackDecal(class UMaterialInterface* impactMat, const struct FVector& HitLocation, const struct FVector& HitNormal, float tSize);
	float GetTotalKnockbackMomentum();
	float GetTotalKnockbackRange(unsigned long IgnoreChargePercent);
	void FireAmmunition();
	void UpdateStacks();
};


// Class CDT8.DunDefWeapon_Minigun
// 0x0010 (0x05A8 - 0x0598)
class ADunDefWeapon_Minigun : public ADunDefWeapon_Crossbow
{
public:
	float                                              MinigunProjectileDamageMultiplier;                        // 0x0598(0x0004) (Edit)
	float                                              TimeFiring;                                               // 0x059C(0x0004)
	unsigned long                                      fullyCharged : 1;                                         // 0x05A0(0x0004)
	float                                              speedperdelta;                                            // 0x05A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefWeapon_Minigun");
		return ptr;
	}


	float GetFireInterval(unsigned char FireModeNum);
	float GetProjectileDamage();
	void GraduallyReturnMovementSpeed(float Delta);
	void StartMSReturn();
};


// Class CDT8.HeroEquipment_Familiar_AoeBuffer
// 0x0048 (0x0B8C - 0x0B44)
class UHeroEquipment_Familiar_AoeBuffer : public UHeroEquipment_Familiar
{
public:
	TArray<class UDunDefBuff*>                         BuffTemplates;                                            // 0x0B44(0x000C) (Edit, NeedCtorLink)
	float                                              StaticBuffRange;                                          // 0x0B50(0x0004) (Edit)
	float                                              MaxBoostStat;                                             // 0x0B54(0x0004) (Edit)
	float                                              MaxRangeBoostStat;                                        // 0x0B58(0x0004) (Edit)
	unsigned long                                      UseStaticBuffRange : 1;                                   // 0x0B5C(0x0004) (Edit)
	int                                                BoostStatUpgradeInterval;                                 // 0x0B60(0x0004) (Edit)
	float                                              BoostAnimMinInterval;                                     // 0x0B64(0x0004) (Edit)
	float                                              BoostAnimMaxInterval;                                     // 0x0B68(0x0004) (Edit)
	float                                              BoostAnimPlayRate;                                        // 0x0B6C(0x0004) (Edit)
	float                                              FirstBoostInterval;                                       // 0x0B70(0x0004) (Edit)
	float                                              BuffRange;                                                // 0x0B74(0x0004)
	float                                              TimeLastApplication;                                      // 0x0B78(0x0004)
	float                                              LastEffectSpawnedTime;                                    // 0x0B7C(0x0004) (Transient)
	float                                              LastAttackedAnimationTime;                                // 0x0B80(0x0004) (Transient)
	float                                              LastBoostAnimTimer;                                       // 0x0B84(0x0004) (Transient)
	float                                              NextBoostAnimTimer;                                       // 0x0B88(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.HeroEquipment_Familiar_AoeBuffer");
		return ptr;
	}


	void TickedByPawn(class ADunDefPlayer* PlayerOwner, float DeltaTime);
	void AddRandomizeValues(float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear);
	class UDunDefBuff* GetBuffTier();
	float GetBuffRange();
	void AttachedComponent(class UPrimitiveComponent* aComp);
	unsigned long ApplyLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, const struct FString& setUserEquipmentName, const struct FString& setUserForgerName, unsigned long refresh);
	void InitFromNetInfo(const struct FEquipmentNetInfo& Info, class UObject* fromDroppedEquipment);
	unsigned long CheckStatLevelUpIterations(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, int EquipmentLevelToCheck, float Value);
	unsigned long AllowStatLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement);
	int GetNextStatLevelUpValue(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long SetAsValue);
	int GetStatLevelUpAmountIterations(TEnumAsByte<EEquipmentStatType> EQS, int Value, int statSubIndex);
	int GetShiftClickUpgradeCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
