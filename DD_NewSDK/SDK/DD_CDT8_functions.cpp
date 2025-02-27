// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.CheckCooldown
// (Defined, Simulated, Public)

void ADunDefWeapon_MagicStaff_CustomRightClick::CheckCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.CheckCooldown");

	ADunDefWeapon_MagicStaff_CustomRightClick_CheckCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.PayBack
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWeapon_MagicStaff_CustomRightClick::PayBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.PayBack");

	ADunDefWeapon_MagicStaff_CustomRightClick_PayBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.PutDownWeapon
// (Defined, Simulated, Public)

void ADunDefWeapon_MagicStaff_CustomRightClick::PutDownWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.PutDownWeapon");

	ADunDefWeapon_MagicStaff_CustomRightClick_PutDownWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.SpawnKnockbackDecal
// (Defined, Simulated, Public)
// Parameters:
// class UMaterialInterface*      impactMat                      (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)
// float                          tSize                          (Parm)

void ADunDefWeapon_MagicStaff_WithOribitingEffect::SpawnKnockbackDecal(class UMaterialInterface* impactMat, const struct FVector& HitLocation, const struct FVector& HitNormal, float tSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.SpawnKnockbackDecal");

	ADunDefWeapon_MagicStaff_WithOribitingEffect_SpawnKnockbackDecal_Params params;
	params.impactMat = impactMat;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.tSize = tSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.GetTotalKnockbackMomentum
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWeapon_MagicStaff_WithOribitingEffect::GetTotalKnockbackMomentum()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.GetTotalKnockbackMomentum");

	ADunDefWeapon_MagicStaff_WithOribitingEffect_GetTotalKnockbackMomentum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.GetTotalKnockbackRange
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  IgnoreChargePercent            (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWeapon_MagicStaff_WithOribitingEffect::GetTotalKnockbackRange(unsigned long IgnoreChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.GetTotalKnockbackRange");

	ADunDefWeapon_MagicStaff_WithOribitingEffect_GetTotalKnockbackRange_Params params;
	params.IgnoreChargePercent = IgnoreChargePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.FireAmmunition
// (Defined, Simulated, Public)

void ADunDefWeapon_MagicStaff_WithOribitingEffect::FireAmmunition()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.FireAmmunition");

	ADunDefWeapon_MagicStaff_WithOribitingEffect_FireAmmunition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.UpdateStacks
// (Defined, Simulated, Public)

void ADunDefWeapon_MagicStaff_WithOribitingEffect::UpdateStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.UpdateStacks");

	ADunDefWeapon_MagicStaff_WithOribitingEffect_UpdateStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_Minigun.GetFireInterval
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWeapon_Minigun::GetFireInterval(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_Minigun.GetFireInterval");

	ADunDefWeapon_Minigun_GetFireInterval_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefWeapon_Minigun.GetProjectileDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWeapon_Minigun::GetProjectileDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_Minigun.GetProjectileDamage");

	ADunDefWeapon_Minigun_GetProjectileDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.TickedByPawn
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_AoeBuffer::TickedByPawn(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.TickedByPawn");

	UHeroEquipment_Familiar_AoeBuffer_TickedByPawn_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AddRandomizeValues
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          equipmentQuality               (Parm)
// unsigned long                  doResetStatsToTemplate         (OptionalParm, Parm)
// unsigned long                  bDontUseMissionRandomizerMultiplier (OptionalParm, Parm)
// float                          RandomizerMultiplierOverride   (OptionalParm, Parm)
// unsigned long                  bIsForShop                     (OptionalParm, Parm)
// unsigned long                  bAllowTranscendentGear         (OptionalParm, Parm)

void UHeroEquipment_Familiar_AoeBuffer::AddRandomizeValues(float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.AddRandomizeValues");

	UHeroEquipment_Familiar_AoeBuffer_AddRandomizeValues_Params params;
	params.equipmentQuality = equipmentQuality;
	params.doResetStatsToTemplate = doResetStatsToTemplate;
	params.bDontUseMissionRandomizerMultiplier = bDontUseMissionRandomizerMultiplier;
	params.RandomizerMultiplierOverride = RandomizerMultiplierOverride;
	params.bIsForShop = bIsForShop;
	params.bAllowTranscendentGear = bAllowTranscendentGear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetBuffTier
// (Defined, Public)
// Parameters:
// class UDunDefBuff*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UDunDefBuff* UHeroEquipment_Familiar_AoeBuffer::GetBuffTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetBuffTier");

	UHeroEquipment_Familiar_AoeBuffer_GetBuffTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetBuffRange
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_AoeBuffer::GetBuffRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetBuffRange");

	UHeroEquipment_Familiar_AoeBuffer_GetBuffRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AttachedComponent
// (Defined, Public)
// Parameters:
// class UPrimitiveComponent*     aComp                          (Parm, EditInline)

void UHeroEquipment_Familiar_AoeBuffer::AttachedComponent(class UPrimitiveComponent* aComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.AttachedComponent");

	UHeroEquipment_Familiar_AoeBuffer_AttachedComponent_Params params;
	params.aComp = aComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.ApplyLevelUp
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            statSubIndex                   (OptionalParm, Parm)
// struct FString                 setUserEquipmentName           (OptionalParm, Parm, NeedCtorLink)
// struct FString                 setUserForgerName              (OptionalParm, Parm, NeedCtorLink)
// unsigned long                  refresh                        (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UHeroEquipment_Familiar_AoeBuffer::ApplyLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, const struct FString& setUserEquipmentName, const struct FString& setUserForgerName, unsigned long refresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.ApplyLevelUp");

	UHeroEquipment_Familiar_AoeBuffer_ApplyLevelUp_Params params;
	params.EQS = EQS;
	params.statSubIndex = statSubIndex;
	params.setUserEquipmentName = setUserEquipmentName;
	params.setUserForgerName = setUserForgerName;
	params.refresh = refresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.InitFromNetInfo
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FEquipmentNetInfo       Info                           (Parm, NeedCtorLink)
// class UObject*                 fromDroppedEquipment           (OptionalParm, Parm)

void UHeroEquipment_Familiar_AoeBuffer::InitFromNetInfo(const struct FEquipmentNetInfo& Info, class UObject* fromDroppedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.InitFromNetInfo");

	UHeroEquipment_Familiar_AoeBuffer_InitFromNetInfo_Params params;
	params.Info = Info;
	params.fromDroppedEquipment = fromDroppedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.CheckStatLevelUpIterations
// (Defined, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            statSubIndex                   (Parm)
// int                            EquipmentLevelToCheck          (Parm)
// float                          Value                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UHeroEquipment_Familiar_AoeBuffer::CheckStatLevelUpIterations(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, int EquipmentLevelToCheck, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.CheckStatLevelUpIterations");

	UHeroEquipment_Familiar_AoeBuffer_CheckStatLevelUpIterations_Params params;
	params.EQS = EQS;
	params.statSubIndex = statSubIndex;
	params.EquipmentLevelToCheck = EquipmentLevelToCheck;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AllowStatLevelUp
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            statSubIndex                   (OptionalParm, Parm)
// unsigned long                  IsInForgeUI                    (OptionalParm, Parm)
// unsigned long                  bIgnoreManaRequirement         (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UHeroEquipment_Familiar_AoeBuffer::AllowStatLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.AllowStatLevelUp");

	UHeroEquipment_Familiar_AoeBuffer_AllowStatLevelUp_Params params;
	params.EQS = EQS;
	params.statSubIndex = statSubIndex;
	params.IsInForgeUI = IsInForgeUI;
	params.bIgnoreManaRequirement = bIgnoreManaRequirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetNextStatLevelUpValue
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            statSubIndex                   (OptionalParm, Parm)
// unsigned long                  SetAsValue                     (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHeroEquipment_Familiar_AoeBuffer::GetNextStatLevelUpValue(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long SetAsValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetNextStatLevelUpValue");

	UHeroEquipment_Familiar_AoeBuffer_GetNextStatLevelUpValue_Params params;
	params.EQS = EQS;
	params.statSubIndex = statSubIndex;
	params.SetAsValue = SetAsValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetStatLevelUpAmountIterations
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            Value                          (Parm)
// int                            statSubIndex                   (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHeroEquipment_Familiar_AoeBuffer::GetStatLevelUpAmountIterations(TEnumAsByte<EEquipmentStatType> EQS, int Value, int statSubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetStatLevelUpAmountIterations");

	UHeroEquipment_Familiar_AoeBuffer_GetStatLevelUpAmountIterations_Params params;
	params.EQS = EQS;
	params.Value = Value;
	params.statSubIndex = statSubIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetShiftClickUpgradeCount
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHeroEquipment_Familiar_AoeBuffer::GetShiftClickUpgradeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetShiftClickUpgradeCount");

	UHeroEquipment_Familiar_AoeBuffer_GetShiftClickUpgradeCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
