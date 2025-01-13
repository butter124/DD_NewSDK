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

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AddRandomizeValues
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          equipmentQuality               (Parm)
// unsigned long                  doResetStatsToTemplate         (OptionalParm, Parm)
// unsigned long                  bDontUseMissionRandomizerMultiplier (OptionalParm, Parm)
// float                          RandomizerMultiplierOverride   (OptionalParm, Parm)
// unsigned long                  bIsForShop                     (OptionalParm, Parm)
// unsigned long                  bAllowTranscendentGear         (OptionalParm, Parm)

void UHeroEquipment_Familiar_CoreHealer::AddRandomizeValues(float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.AddRandomizeValues");

	UHeroEquipment_Familiar_CoreHealer_AddRandomizeValues_Params params;
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


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetStatLevelUpAmountIterations
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            Value                          (Parm)
// int                            statSubIndex                   (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHeroEquipment_Familiar_CoreHealer::GetStatLevelUpAmountIterations(TEnumAsByte<EEquipmentStatType> EQS, int Value, int statSubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetStatLevelUpAmountIterations");

	UHeroEquipment_Familiar_CoreHealer_GetStatLevelUpAmountIterations_Params params;
	params.EQS = EQS;
	params.Value = Value;
	params.statSubIndex = statSubIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetNextStatLevelUpValue
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            statSubIndex                   (OptionalParm, Parm)
// unsigned long                  SetAsValue                     (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHeroEquipment_Familiar_CoreHealer::GetNextStatLevelUpValue(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long SetAsValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetNextStatLevelUpValue");

	UHeroEquipment_Familiar_CoreHealer_GetNextStatLevelUpValue_Params params;
	params.EQS = EQS;
	params.statSubIndex = statSubIndex;
	params.SetAsValue = SetAsValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.InitFromNetInfo
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FEquipmentNetInfo       Info                           (Parm, NeedCtorLink)
// class UObject*                 fromDroppedEquipment           (OptionalParm, Parm)

void UHeroEquipment_Familiar_CoreHealer::InitFromNetInfo(const struct FEquipmentNetInfo& Info, class UObject* fromDroppedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.InitFromNetInfo");

	UHeroEquipment_Familiar_CoreHealer_InitFromNetInfo_Params params;
	params.Info = Info;
	params.fromDroppedEquipment = fromDroppedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.CheckStatLevelUpIterations
// (Defined, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            statSubIndex                   (Parm)
// int                            EquipmentLevelToCheck          (Parm)
// float                          Value                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UHeroEquipment_Familiar_CoreHealer::CheckStatLevelUpIterations(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, int EquipmentLevelToCheck, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.CheckStatLevelUpIterations");

	UHeroEquipment_Familiar_CoreHealer_CheckStatLevelUpIterations_Params params;
	params.EQS = EQS;
	params.statSubIndex = statSubIndex;
	params.EquipmentLevelToCheck = EquipmentLevelToCheck;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.AllowStatLevelUp
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            statSubIndex                   (OptionalParm, Parm)
// unsigned long                  IsInForgeUI                    (OptionalParm, Parm)
// unsigned long                  bIgnoreManaRequirement         (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UHeroEquipment_Familiar_CoreHealer::AllowStatLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.AllowStatLevelUp");

	UHeroEquipment_Familiar_CoreHealer_AllowStatLevelUp_Params params;
	params.EQS = EQS;
	params.statSubIndex = statSubIndex;
	params.IsInForgeUI = IsInForgeUI;
	params.bIgnoreManaRequirement = bIgnoreManaRequirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetWeaponDamage
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHeroEquipment_Familiar_CoreHealer::GetWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetWeaponDamage");

	UHeroEquipment_Familiar_CoreHealer_GetWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.ApplyPrimaryDamageMultiplierDisplay
// (Defined, Public, HasOutParms)
// Parameters:
// int                            StatValue                      (Parm, OutParm)

void UHeroEquipment_Familiar_CoreHealer::ApplyPrimaryDamageMultiplierDisplay(int* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.ApplyPrimaryDamageMultiplierDisplay");

	UHeroEquipment_Familiar_CoreHealer_ApplyPrimaryDamageMultiplierDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatValue != nullptr)
		*StatValue = params.StatValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatValue
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> equipmentStatType              (Parm)
// unsigned long                  returnFinalAddedValue          (OptionalParm, Parm)
// unsigned long                  includeStatLevelUp             (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_CoreHealer::GetEquipmentStatValue(TEnumAsByte<EEquipmentStatType> equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatValue");

	UHeroEquipment_Familiar_CoreHealer_GetEquipmentStatValue_Params params;
	params.equipmentStatType = equipmentStatType;
	params.returnFinalAddedValue = returnFinalAddedValue;
	params.includeStatLevelUp = includeStatLevelUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.NotifyEquipment_PawnAttacked
// (Public)
// Parameters:
// int                            FireMode                       (Parm)

void UHeroEquipment_Familiar_CoreHealer::NotifyEquipment_PawnAttacked(int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.NotifyEquipment_PawnAttacked");

	UHeroEquipment_Familiar_CoreHealer_NotifyEquipment_PawnAttacked_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredSphereRotationalPlacement
// (Defined, Public, HasOutParms)
// Parameters:
// class USkeletalMeshComponent*  myMeshComp                     (Parm, EditInline)
// class ADunDefPlayer*           myPlayer                       (Parm)
// unsigned char                  HasTarget                      (Parm, OutParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UHeroEquipment_Familiar_CoreHealer::GetDesiredSphereRotationalPlacement(class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredSphereRotationalPlacement");

	UHeroEquipment_Familiar_CoreHealer_GetDesiredSphereRotationalPlacement_Params params;
	params.myMeshComp = myMeshComp;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasTarget != nullptr)
		*HasTarget = params.HasTarget;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredDirection
// (Defined, Public)
// Parameters:
// class USkeletalMeshComponent*  myMeshComp                     (Parm, EditInline)
// class ADunDefPlayer*           myPlayer                       (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UHeroEquipment_Familiar_CoreHealer::GetDesiredDirection(class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredDirection");

	UHeroEquipment_Familiar_CoreHealer_GetDesiredDirection_Params params;
	params.myMeshComp = myMeshComp;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetAttackInterval
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_CoreHealer::GetAttackInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetAttackInterval");

	UHeroEquipment_Familiar_CoreHealer_GetAttackInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealAmount
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_CoreHealer::GetHealAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealAmount");

	UHeroEquipment_Familiar_CoreHealer_GetHealAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetManaCost
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_CoreHealer::GetManaCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetManaCost");

	UHeroEquipment_Familiar_CoreHealer_GetManaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealRangeSq
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_CoreHealer::GetHealRangeSq()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealRangeSq");

	UHeroEquipment_Familiar_CoreHealer_GetHealRangeSq_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatName
// (Defined, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> equipmentStatType              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHeroEquipment_Familiar_CoreHealer::GetEquipmentStatName(TEnumAsByte<EEquipmentStatType> equipmentStatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatName");

	UHeroEquipment_Familiar_CoreHealer_GetEquipmentStatName_Params params;
	params.equipmentStatType = equipmentStatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateAI
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_CoreHealer::UpdateAI(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateAI");

	UHeroEquipment_Familiar_CoreHealer_UpdateAI_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.TickedByPawn
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_CoreHealer::TickedByPawn(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.TickedByPawn");

	UHeroEquipment_Familiar_CoreHealer_TickedByPawn_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateRotation
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_CoreHealer::UpdateRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateRotation");

	UHeroEquipment_Familiar_CoreHealer_UpdateRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.ShutDown
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  isDestruction                  (OptionalParm, Parm)

void UHeroEquipment_Familiar_CoreHealer::ShutDown(unsigned long isDestruction)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.ShutDown");

	UHeroEquipment_Familiar_CoreHealer_ShutDown_Params params;
	params.isDestruction = isDestruction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_CoreHealer.AttachedComponent
// (Defined, Public)
// Parameters:
// class UPrimitiveComponent*     aComp                          (Parm, EditInline)

void UHeroEquipment_Familiar_CoreHealer::AttachedComponent(class UPrimitiveComponent* aComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_CoreHealer.AttachedComponent");

	UHeroEquipment_Familiar_CoreHealer_AttachedComponent_Params params;
	params.aComp = aComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_MiniQueen.GetBestTarget
// (Defined, Public, HasDefaults)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> UHeroEquipment_Familiar_MiniQueen::GetBestTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_MiniQueen.GetBestTarget");

	UHeroEquipment_Familiar_MiniQueen_GetBestTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginRangedAttack
// (Defined, Public)

void UHeroEquipment_Familiar_MiniQueen::BeginRangedAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginRangedAttack");

	UHeroEquipment_Familiar_MiniQueen_BeginRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginMeleeAttack
// (Defined, Public)

void UHeroEquipment_Familiar_MiniQueen::BeginMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginMeleeAttack");

	UHeroEquipment_Familiar_MiniQueen_BeginMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT4.HeroEquipment_Familiar_MiniQueen.CanWebTarget
// (Defined, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> Target                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UHeroEquipment_Familiar_MiniQueen::CanWebTarget(const TScriptInterface<class UDunDefTargetableInterface>& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_MiniQueen.CanWebTarget");

	UHeroEquipment_Familiar_MiniQueen_CanWebTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT4.HeroEquipment_Familiar_MiniQueen.UpdateAI
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_MiniQueen::UpdateAI(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT4.HeroEquipment_Familiar_MiniQueen.UpdateAI");

	UHeroEquipment_Familiar_MiniQueen_UpdateAI_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
