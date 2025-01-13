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

// Class CDT8.DunDefWeapon_MagicStaff_Channeling
// 0x0030 (0x0648 - 0x0618)
class ADunDefWeapon_MagicStaff_Channeling : public ADunDefWeapon_MagicStaff
{
public:
	class ADunDefProjectile*                           ChannelingProjectileTemplate;                             // 0x0618(0x0004) (Edit)
	float                                              ChannelingProjectileFireSpeed;                            // 0x061C(0x0004) (Edit)
	float                                              ChannelingProjectileDamageMultiplier;                     // 0x0620(0x0004) (Edit)
	struct FVector                                     ChannelingProjectileLocationOffset;                       // 0x0624(0x000C) (Edit)
	float                                              ChannelingRangeMultiplier;                                // 0x0630(0x0004) (Edit)
	TScriptInterface<class UDunDefTargetableInterface> act;                                                      // 0x0634(0x0008) (Transient)
	TArray<TScriptInterface<class UDunDefTargetableInterface>> Enemies;                                                  // 0x063C(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefWeapon_MagicStaff_Channeling");
		return ptr;
	}

};


// Class CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect
// 0x0024 (0x063C - 0x0618)
class ADunDefWeapon_MagicStaff_WithOribitingEffect : public ADunDefWeapon_MagicStaff
{
public:
	unsigned long                                      ExplodeStacksWithRightClick : 1;                          // 0x0618(0x0004) (Edit)
	int                                                buffUniqueID;                                             // 0x061C(0x0004) (Edit)
	TArray<class UParticleSystemComponent*>            ParticleSystems;                                          // 0x0620(0x000C) (Edit, ExportObject, Component, NeedCtorLink, EditInline)
	struct FName                                       SocketName;                                               // 0x062C(0x0008) (Edit)
	class UParticleSystemComponent*                    CurrentParticleSystem;                                    // 0x0634(0x0004) (ExportObject, Component, EditInline)
	int                                                CurrentStacks;                                            // 0x0638(0x0004) (Transient)

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


// Class CDT8.HeroEquipment_Familiar_AoeBuffer
// 0x0048 (0x0B44 - 0x0AFC)
class UHeroEquipment_Familiar_AoeBuffer : public UHeroEquipment_Familiar
{
public:
	TArray<class UDunDefBuff*>                         BuffTemplates;                                            // 0x0AFC(0x000C) (Edit, NeedCtorLink)
	float                                              StaticBuffRange;                                          // 0x0B08(0x0004) (Edit)
	float                                              MaxBoostStat;                                             // 0x0B0C(0x0004) (Edit)
	float                                              MaxRangeBoostStat;                                        // 0x0B10(0x0004) (Edit)
	unsigned long                                      UseStaticBuffRange : 1;                                   // 0x0B14(0x0004) (Edit)
	int                                                BoostStatUpgradeInterval;                                 // 0x0B18(0x0004) (Edit)
	float                                              BoostAnimMinInterval;                                     // 0x0B1C(0x0004) (Edit)
	float                                              BoostAnimMaxInterval;                                     // 0x0B20(0x0004) (Edit)
	float                                              BoostAnimPlayRate;                                        // 0x0B24(0x0004) (Edit)
	float                                              FirstBoostInterval;                                       // 0x0B28(0x0004) (Edit)
	float                                              BuffRange;                                                // 0x0B2C(0x0004)
	float                                              TimeLastApplication;                                      // 0x0B30(0x0004)
	float                                              LastEffectSpawnedTime;                                    // 0x0B34(0x0004) (Transient)
	float                                              LastAttackedAnimationTime;                                // 0x0B38(0x0004) (Transient)
	float                                              LastBoostAnimTimer;                                       // 0x0B3C(0x0004) (Transient)
	float                                              NextBoostAnimTimer;                                       // 0x0B40(0x0004) (Transient)

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
