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
// 0x008C (0x0C4C - 0x0BC0)
class UHeroEquipment_Familiar_CoreHealer : public UHeroEquipment_Familiar
{
public:
	float                                              ManaCostStatBase;                                         // 0x0BC0(0x0004) (Edit)
	float                                              ManaCostMultiplier;                                       // 0x0BC4(0x0004) (Edit)
	float                                              ManaCostExponent;                                         // 0x0BC8(0x0004) (Edit)
	float                                              ManaCostMin;                                              // 0x0BCC(0x0004) (Edit)
	float                                              ManaCostMax;                                              // 0x0BD0(0x0004) (Edit)
	float                                              HealAmountBase;                                           // 0x0BD4(0x0004) (Edit)
	float                                              HealAmountMultiplier;                                     // 0x0BD8(0x0004) (Edit)
	float                                              HealAmountExtraMultiplier;                                // 0x0BDC(0x0004) (Edit)
	float                                              HealAmountMaxPercent;                                     // 0x0BE0(0x0004) (Edit)
	float                                              MinimumCoreHealthPercent;                                 // 0x0BE4(0x0004) (Edit)
	float                                              HealInterval;                                             // 0x0BE8(0x0004) (Edit)
	float                                              HealRangeBase;                                            // 0x0BEC(0x0004) (Edit)
	float                                              HealRangeStatBase;                                        // 0x0BF0(0x0004) (Edit)
	float                                              HealRangeStatMultiplier;                                  // 0x0BF4(0x0004) (Edit)
	float                                              HealRangeStatExponent;                                    // 0x0BF8(0x0004) (Edit)
	float                                              HealRangeMaxEffectiveStat;                                // 0x0BFC(0x0004) (Edit)
	float                                              NightmareHealingMultiplier;                               // 0x0C00(0x0004) (Edit)
	float                                              RotationSpeed;                                            // 0x0C04(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     CoreHealEffect;                                           // 0x0C08(0x0004) (Edit)
	unsigned long                                      bHealInCombatPhaseOnly : 1;                               // 0x0C0C(0x0004) (Edit)
	unsigned long                                      bDebug : 1;                                               // 0x0C0C(0x0004) (Edit)
	struct FString                                     StringHealAmount;                                         // 0x0C10(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     StringHealSpeed;                                          // 0x0C1C(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     StringHealRange;                                          // 0x0C28(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              LastHealTime;                                             // 0x0C34(0x0004) (Transient)
	TScriptInterface<class UDunDefTargetableInterface> BestTargetRef;                                            // 0x0C38(0x0008) (Transient)
	struct FRotator                                    CurrentRotation;                                          // 0x0C40(0x000C) (Transient)

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
// 0x0008 (0x0D44 - 0x0D3C)
class UHeroEquipment_Familiar_MiniQueen : public UHeroEquipment_Familiar_Melee
{
public:
	float                                              WebOverrideRange;                                         // 0x0D3C(0x0004) (Edit)
	unsigned long                                      bNextAttackRanged : 1;                                    // 0x0D40(0x0004) (Transient)

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
