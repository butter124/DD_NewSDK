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

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.SpawnKnockbackDecal
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_SpawnKnockbackDecal_Params
{
	class UMaterialInterface*                          impactMat;                                                // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	float                                              tSize;                                                    // (Parm)
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.GetTotalKnockbackMomentum
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_GetTotalKnockbackMomentum_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.GetTotalKnockbackRange
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_GetTotalKnockbackRange_Params
{
	bool                                               IgnoreChargePercent;                                      // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.FireAmmunition
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_FireAmmunition_Params
{
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.UpdateStacks
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_UpdateStacks_Params
{
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.TickedByPawn
struct UHeroEquipment_Familiar_AoeBuffer_TickedByPawn_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AddRandomizeValues
struct UHeroEquipment_Familiar_AoeBuffer_AddRandomizeValues_Params
{
	float                                              equipmentQuality;                                         // (Parm)
	bool                                               doResetStatsToTemplate;                                   // (OptionalParm, Parm)
	bool                                               bDontUseMissionRandomizerMultiplier;                      // (OptionalParm, Parm)
	float                                              RandomizerMultiplierOverride;                             // (OptionalParm, Parm)
	bool                                               bIsForShop;                                               // (OptionalParm, Parm)
	bool                                               bAllowTranscendentGear;                                   // (OptionalParm, Parm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetBuffTier
struct UHeroEquipment_Familiar_AoeBuffer_GetBuffTier_Params
{
	class UDunDefBuff*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetBuffRange
struct UHeroEquipment_Familiar_AoeBuffer_GetBuffRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AttachedComponent
struct UHeroEquipment_Familiar_AoeBuffer_AttachedComponent_Params
{
	class UPrimitiveComponent*                         aComp;                                                    // (Parm, EditInline)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.ApplyLevelUp
struct UHeroEquipment_Familiar_AoeBuffer_ApplyLevelUp_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	struct FString                                     setUserEquipmentName;                                     // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     setUserForgerName;                                        // (OptionalParm, Parm, NeedCtorLink)
	bool                                               refresh;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.InitFromNetInfo
struct UHeroEquipment_Familiar_AoeBuffer_InitFromNetInfo_Params
{
	struct FEquipmentNetInfo                           Info;                                                     // (Parm, NeedCtorLink)
	class UObject*                                     fromDroppedEquipment;                                     // (OptionalParm, Parm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.CheckStatLevelUpIterations
struct UHeroEquipment_Familiar_AoeBuffer_CheckStatLevelUpIterations_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (Parm)
	int                                                EquipmentLevelToCheck;                                    // (Parm)
	float                                              Value;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AllowStatLevelUp
struct UHeroEquipment_Familiar_AoeBuffer_AllowStatLevelUp_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	bool                                               IsInForgeUI;                                              // (OptionalParm, Parm)
	bool                                               bIgnoreManaRequirement;                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetNextStatLevelUpValue
struct UHeroEquipment_Familiar_AoeBuffer_GetNextStatLevelUpValue_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	bool                                               SetAsValue;                                               // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetStatLevelUpAmountIterations
struct UHeroEquipment_Familiar_AoeBuffer_GetStatLevelUpAmountIterations_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetShiftClickUpgradeCount
struct UHeroEquipment_Familiar_AoeBuffer_GetShiftClickUpgradeCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
