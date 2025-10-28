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

// Class CDT4.HeroEquipment_Familiar_CoreHealer
// 0x008C (0x0BD0 - 0x0B44)
class UHeroEquipment_Familiar_CoreHealer : public UHeroEquipment_Familiar
{
public:
	float                                              ManaCostStatBase;                                         // 0x0B44(0x0004) (Edit)
	float                                              ManaCostMultiplier;                                       // 0x0B48(0x0004) (Edit)
	float                                              ManaCostExponent;                                         // 0x0B4C(0x0004) (Edit)
	float                                              ManaCostMin;                                              // 0x0B50(0x0004) (Edit)
	float                                              ManaCostMax;                                              // 0x0B54(0x0004) (Edit)
	float                                              HealAmountBase;                                           // 0x0B58(0x0004) (Edit)
	float                                              HealAmountMultiplier;                                     // 0x0B5C(0x0004) (Edit)
	float                                              HealAmountExtraMultiplier;                                // 0x0B60(0x0004) (Edit)
	float                                              HealAmountMaxPercent;                                     // 0x0B64(0x0004) (Edit)
	float                                              MinimumCoreHealthPercent;                                 // 0x0B68(0x0004) (Edit)
	float                                              HealInterval;                                             // 0x0B6C(0x0004) (Edit)
	float                                              HealRangeBase;                                            // 0x0B70(0x0004) (Edit)
	float                                              HealRangeStatBase;                                        // 0x0B74(0x0004) (Edit)
	float                                              HealRangeStatMultiplier;                                  // 0x0B78(0x0004) (Edit)
	float                                              HealRangeStatExponent;                                    // 0x0B7C(0x0004) (Edit)
	float                                              HealRangeMaxEffectiveStat;                                // 0x0B80(0x0004) (Edit)
	float                                              NightmareHealingMultiplier;                               // 0x0B84(0x0004) (Edit)
	float                                              RotationSpeed;                                            // 0x0B88(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     CoreHealEffect;                                           // 0x0B8C(0x0004) (Edit)
	unsigned long                                      bHealInCombatPhaseOnly : 1;                               // 0x0B90(0x0004) (Edit)
	unsigned long                                      bDebug : 1;                                               // 0x0B90(0x0004) (Edit)
	struct FString                                     StringHealAmount;                                         // 0x0B94(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     StringHealSpeed;                                          // 0x0BA0(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     StringHealRange;                                          // 0x0BAC(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              LastHealTime;                                             // 0x0BB8(0x0004) (Transient)
	TScriptInterface<class UDunDefTargetableInterface> BestTargetRef;                                            // 0x0BBC(0x0008) (Transient)
	struct FRotator                                    CurrentRotation;                                          // 0x0BC4(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT4.HeroEquipment_Familiar_CoreHealer");
		return ptr;
	}


	void AddRandomizeValues(float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear);
	int GetStatLevelUpAmountIterations(TEnumAsByte<EEquipmentStatType> EQS, int Value, int statSubIndex);
	int GetNextStatLevelUpValue(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long SetAsValue);
	void InitFromNetInfo(const struct FEquipmentNetInfo& Info, class UObject* fromDroppedEquipment);
	unsigned long CheckStatLevelUpIterations(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, int EquipmentLevelToCheck, float Value);
	unsigned long AllowStatLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement);
	int GetWeaponDamage();
	void ApplyPrimaryDamageMultiplierDisplay(int* StatValue);
	float GetEquipmentStatValue(TEnumAsByte<EEquipmentStatType> equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp);
	void NotifyEquipment_PawnAttacked(int FireMode);
	struct FRotator GetDesiredSphereRotationalPlacement(class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget);
	struct FRotator GetDesiredDirection(class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer);
	float GetAttackInterval();
	float GetHealAmount();
	float GetManaCost();
	float GetHealRangeSq();
	struct FString GetEquipmentStatName(TEnumAsByte<EEquipmentStatType> equipmentStatType);
	void UpdateAI(class ADunDefPlayer* PlayerOwner, float DeltaTime);
	void TickedByPawn(class ADunDefPlayer* PlayerOwner, float DeltaTime);
	void UpdateRotation(float DeltaTime);
	void ShutDown(unsigned long isDestruction);
	void AttachedComponent(class UPrimitiveComponent* aComp);
};


// Class CDT4.HeroEquipment_Familiar_MiniQueen
// 0x0008 (0x0CC8 - 0x0CC0)
class UHeroEquipment_Familiar_MiniQueen : public UHeroEquipment_Familiar_Melee
{
public:
	float                                              WebOverrideRange;                                         // 0x0CC0(0x0004) (Edit)
	unsigned long                                      bNextAttackRanged : 1;                                    // 0x0CC4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT4.HeroEquipment_Familiar_MiniQueen");
		return ptr;
	}


	TScriptInterface<class UDunDefTargetableInterface> GetBestTarget();
	void BeginRangedAttack();
	void BeginMeleeAttack();
	unsigned long CanWebTarget(const TScriptInterface<class UDunDefTargetableInterface>& Target);
	void UpdateAI(class ADunDefPlayer* PlayerOwner, float DeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
