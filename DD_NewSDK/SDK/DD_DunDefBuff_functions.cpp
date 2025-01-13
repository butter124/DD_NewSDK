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

// Function DunDefBuff.BuffVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void ABuffVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.BuffVolume.OnToggle");

	ABuffVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.BuffVolume.CanBuff
// (Defined, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ABuffVolume::CanBuff(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.BuffVolume.CanBuff");

	ABuffVolume_CanBuff_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.BuffVolume.UnTouch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void ABuffVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.BuffVolume.UnTouch");

	ABuffVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.BuffVolume.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ABuffVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.BuffVolume.Touch");

	ABuffVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDef_SeqAct_ClearBuffs.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_ClearBuffs::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDef_SeqAct_ClearBuffs.Activated");

	UDunDef_SeqAct_ClearBuffs_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDef_SeqAct_SpawnBuffs.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_SpawnBuffs::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDef_SeqAct_SpawnBuffs.Activated");

	UDunDef_SeqAct_SpawnBuffs_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Boost.GetBoostedTargets
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<class APawn*>           boostedTargets                 (Parm, OutParm, NeedCtorLink)

void UDunDefBuff_Boost::GetBoostedTargets(TArray<class APawn*>* boostedTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.GetBoostedTargets");

	UDunDefBuff_Boost_GetBoostedTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (boostedTargets != nullptr)
		*boostedTargets = params.boostedTargets;
}


// Function DunDefBuff.DunDefBuff_Boost.NotifyOfBoostedRemoval
// (Public)
// Parameters:
// class APawn*                   removedBoostee                 (Parm)

void UDunDefBuff_Boost::NotifyOfBoostedRemoval(class APawn* removedBoostee)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.NotifyOfBoostedRemoval");

	UDunDefBuff_Boost_NotifyOfBoostedRemoval_Params params;
	params.removedBoostee = removedBoostee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Boost.GetPawnBoostAmount
// (Defined, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefBuff_Boost::GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.GetPawnBoostAmount");

	UDunDefBuff_Boost_GetPawnBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Boost.HasPawnBoostingType
// (Defined, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_Boost::HasPawnBoostingType(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.HasPawnBoostingType");

	UDunDefBuff_Boost_HasPawnBoostingType_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostAmount
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefBuff_Boost::GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostAmount");

	UDunDefBuff_Boost_GetTowerBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Boost.HasTowerBoostingType
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_Boost::HasTowerBoostingType(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.HasTowerBoostingType");

	UDunDefBuff_Boost_HasTowerBoostingType_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostingTarget
// (Defined, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> UDunDefBuff_Boost::GetTowerBoostingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostingTarget");

	UDunDefBuff_Boost_GetTowerBoostingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Boost.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void UDunDefBuff_Boost::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.InitalizeActorStats");

	UDunDefBuff_Boost_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Boost.DeactivateBuff
// (Defined, Simulated, Public)

void UDunDefBuff_Boost::DeactivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.DeactivateBuff");

	UDunDefBuff_Boost_DeactivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Boost.ActivateBuff
// (Defined, Simulated, Public)

void UDunDefBuff_Boost::ActivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Boost.ActivateBuff");

	UDunDefBuff_Boost_ActivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Contagion.CanAffectTarget
// (Defined, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_Contagion::CanAffectTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Contagion.CanAffectTarget");

	UDunDefBuff_Contagion_CanAffectTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Contagion.GetNearestTarget
// (Defined, Simulated, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> UDunDefBuff_Contagion::GetNearestTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Contagion.GetNearestTarget");

	UDunDefBuff_Contagion_GetNearestTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Contagion.Initialize
// (Defined, Simulated, Public)

void UDunDefBuff_Contagion::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Contagion.Initialize");

	UDunDefBuff_Contagion_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Contagion.BuffEffect
// (Defined, Simulated, Public)

void UDunDefBuff_Contagion::BuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Contagion.BuffEffect");

	UDunDefBuff_Contagion_BuffEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Damage.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void UDunDefBuff_Damage::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Damage.InitalizeActorStats");

	UDunDefBuff_Damage_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Damage.CanDamage
// (Defined, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_Damage::CanDamage(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Damage.CanDamage");

	UDunDefBuff_Damage_CanDamage_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Damage.GetBuffDamage
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefBuff_Damage::GetBuffDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Damage.GetBuffDamage");

	UDunDefBuff_Damage_GetBuffDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Damage.BuffEffect
// (Defined, Simulated, Public)

void UDunDefBuff_Damage::BuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Damage.BuffEffect");

	UDunDefBuff_Damage_BuffEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_DamageAdjuster.ResetTimer
// (Defined, Simulated, Public)

void UDunDefBuff_DamageAdjuster::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_DamageAdjuster.ResetTimer");

	UDunDefBuff_DamageAdjuster_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_DamageAdjuster.IsBetween
// (Defined, Public)
// Parameters:
// float                          Value                          (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_DamageAdjuster::IsBetween(float Value, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_DamageAdjuster.IsBetween");

	UDunDefBuff_DamageAdjuster_IsBetween_Params params;
	params.Value = Value;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_DamageAdjuster.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void UDunDefBuff_DamageAdjuster::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_DamageAdjuster.InitalizeActorStats");

	UDunDefBuff_DamageAdjuster_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_DamageAdjuster.GetDamageMultiplier
// (Defined, Public)
// Parameters:
// class AActor*                  damagedTarget                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefBuff_DamageAdjuster::GetDamageMultiplier(class AActor* damagedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_DamageAdjuster.GetDamageMultiplier");

	UDunDefBuff_DamageAdjuster_GetDamageMultiplier_Params params;
	params.damagedTarget = damagedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_DamageAdjuster.IsAdjustAllowed
// (Defined, Public)
// Parameters:
// class UObject*                 Target                         (Parm)
// struct FsLastDamageInfo        TheDamageInfo                  (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_DamageAdjuster::IsAdjustAllowed(class UObject* Target, const struct FsLastDamageInfo& TheDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_DamageAdjuster.IsAdjustAllowed");

	UDunDefBuff_DamageAdjuster_IsAdjustAllowed_Params params;
	params.Target = Target;
	params.TheDamageInfo = TheDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_DamageAdjuster.AdjustDealtDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            inDamage                       (Parm, OutParm)
// class AActor*                  damagedTarget                  (Parm)
// struct FsLastDamageInfo        damageInfo                     (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// int                            OriginalDamage                 (OptionalParm, Parm)

void UDunDefBuff_DamageAdjuster::AdjustDealtDamage(class AActor* damagedTarget, int OriginalDamage, int* inDamage, struct FsLastDamageInfo* damageInfo, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_DamageAdjuster.AdjustDealtDamage");

	UDunDefBuff_DamageAdjuster_AdjustDealtDamage_Params params;
	params.damagedTarget = damagedTarget;
	params.OriginalDamage = OriginalDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inDamage != nullptr)
		*inDamage = params.inDamage;
	if (damageInfo != nullptr)
		*damageInfo = params.damageInfo;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefBuff.DunDefBuff_EnemyBuff.GetPawnBoostAmount
// (Defined, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefBuff_EnemyBuff::GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_EnemyBuff.GetPawnBoostAmount");

	UDunDefBuff_EnemyBuff_GetPawnBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_EnemyBuff.RemoveDebuff
// (Defined, Simulated, Public)

void UDunDefBuff_EnemyBuff::RemoveDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_EnemyBuff.RemoveDebuff");

	UDunDefBuff_EnemyBuff_RemoveDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_EnemyBuff.ApplyDebuff
// (Defined, Simulated, Public)

void UDunDefBuff_EnemyBuff::ApplyDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_EnemyBuff.ApplyDebuff");

	UDunDefBuff_EnemyBuff_ApplyDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_EnemyBuff.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void UDunDefBuff_EnemyBuff::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_EnemyBuff.InitalizeActorStats");

	UDunDefBuff_EnemyBuff_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_EnemyBuff.BuffEffect
// (Defined, Simulated, Public)

void UDunDefBuff_EnemyBuff::BuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_EnemyBuff.BuffEffect");

	UDunDefBuff_EnemyBuff_BuffEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_EnemyBuff.IsValidTarget
// (Defined, Static, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// class AActor*                  BuffOwner                      (Parm)
// class UDunDefBuff*             aBuffTemplate                  (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_EnemyBuff::STATIC_IsValidTarget(class AActor* Target, class AActor* BuffOwner, class UDunDefBuff* aBuffTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_EnemyBuff.IsValidTarget");

	UDunDefBuff_EnemyBuff_IsValidTarget_Params params;
	params.Target = Target;
	params.BuffOwner = BuffOwner;
	params.aBuffTemplate = aBuffTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_EnemyBuff.DeactivateBuff
// (Defined, Simulated, Public)

void UDunDefBuff_EnemyBuff::DeactivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_EnemyBuff.DeactivateBuff");

	UDunDefBuff_EnemyBuff_DeactivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_EnemyBuff.ActivateBuff
// (Defined, Simulated, Public)

void UDunDefBuff_EnemyBuff::ActivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_EnemyBuff.ActivateBuff");

	UDunDefBuff_EnemyBuff_ActivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_ExtraLife.DisableInvincibility
// (Defined, Simulated, Public)

void UDunDefBuff_ExtraLife::DisableInvincibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_ExtraLife.DisableInvincibility");

	UDunDefBuff_ExtraLife_DisableInvincibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_ExtraLife.AdjustTargetDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class AActor*                  forActor                       (Parm)
// int                            howMuchDamage                  (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             fromController                 (Parm)
// class UClass*                  TheDamageType                  (Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)
// struct FsLastDamageInfo        damageInfo                     (OptionalParm, Parm)

void UDunDefBuff_ExtraLife::AdjustTargetDamage(class AActor* forActor, class AController* fromController, class UClass* TheDamageType, class UObject* WhatHitMe, const struct FsLastDamageInfo& damageInfo, int* howMuchDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_ExtraLife.AdjustTargetDamage");

	UDunDefBuff_ExtraLife_AdjustTargetDamage_Params params;
	params.forActor = forActor;
	params.fromController = fromController;
	params.TheDamageType = TheDamageType;
	params.WhatHitMe = WhatHitMe;
	params.damageInfo = damageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (howMuchDamage != nullptr)
		*howMuchDamage = params.howMuchDamage;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefBuff.DunDefBuff_ExtraLife.BuffEffect
// (Simulated, Public)

void UDunDefBuff_ExtraLife::BuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_ExtraLife.BuffEffect");

	UDunDefBuff_ExtraLife_BuffEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_ExtraLife.DeactivateBuff
// (Defined, Simulated, Public, HasDefaults)

void UDunDefBuff_ExtraLife::DeactivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_ExtraLife.DeactivateBuff");

	UDunDefBuff_ExtraLife_DeactivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_ExtraLife.ActivateBuff
// (Defined, Simulated, Public, HasDefaults)

void UDunDefBuff_ExtraLife::ActivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_ExtraLife.ActivateBuff");

	UDunDefBuff_ExtraLife_ActivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_ExtraLife.CanProc
// (Defined, Public)
// Parameters:
// class AActor*                  aActor                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_ExtraLife::CanProc(class AActor* aActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_ExtraLife.CanProc");

	UDunDefBuff_ExtraLife_CanProc_Params params;
	params.aActor = aActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_ExtraLife.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void UDunDefBuff_ExtraLife::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_ExtraLife.InitalizeActorStats");

	UDunDefBuff_ExtraLife_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_OnHit.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void UDunDefBuff_OnHit::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_OnHit.InitalizeActorStats");

	UDunDefBuff_OnHit_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_OnHit.GetExtraDamageAmount
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          dealtDamage                    (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefBuff_OnHit::GetExtraDamageAmount(float dealtDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_OnHit.GetExtraDamageAmount");

	UDunDefBuff_OnHit_GetExtraDamageAmount_Params params;
	params.dealtDamage = dealtDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_OnHit.IsValidHitTarget
// (Defined, Public)
// Parameters:
// class AActor*                  TargetActor                    (Parm)
// class AActor*                  DamageCauser                   (Parm)
// class AController*             DamageInstigator               (Parm)
// class UClass*                  DamageType                     (Parm)
// class UObject*                 whatDidDamage                  (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_OnHit::IsValidHitTarget(class AActor* TargetActor, class AActor* DamageCauser, class AController* DamageInstigator, class UClass* DamageType, class UObject* whatDidDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_OnHit.IsValidHitTarget");

	UDunDefBuff_OnHit_IsValidHitTarget_Params params;
	params.TargetActor = TargetActor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageType = DamageType;
	params.whatDidDamage = whatDidDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_OnHit.ReportActorDealtDamage
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            dealtDamage                    (Parm)
// class AActor*                  Victim                         (Parm)
// class UClass*                  TheDamageType                  (Parm)
// class AActor*                  DamageCauser                   (Parm)
// class AController*             DamageInstigator               (Parm)
// int                            adjustedDamage                 (OptionalParm, Parm)
// class UObject*                 whatDidDamage                  (OptionalParm, Parm)

void UDunDefBuff_OnHit::ReportActorDealtDamage(int dealtDamage, class AActor* Victim, class UClass* TheDamageType, class AActor* DamageCauser, class AController* DamageInstigator, int adjustedDamage, class UObject* whatDidDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_OnHit.ReportActorDealtDamage");

	UDunDefBuff_OnHit_ReportActorDealtDamage_Params params;
	params.dealtDamage = dealtDamage;
	params.Victim = Victim;
	params.TheDamageType = TheDamageType;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.adjustedDamage = adjustedDamage;
	params.whatDidDamage = whatDidDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_OnHit.AdjustDealtDamage
// (HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            inDamage                       (Parm, OutParm)
// class AActor*                  damagedTarget                  (Parm)
// struct FsLastDamageInfo        damageInfo                     (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// int                            OriginalDamage                 (OptionalParm, Parm)

void UDunDefBuff_OnHit::AdjustDealtDamage(class AActor* damagedTarget, int OriginalDamage, int* inDamage, struct FsLastDamageInfo* damageInfo, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_OnHit.AdjustDealtDamage");

	UDunDefBuff_OnHit_AdjustDealtDamage_Params params;
	params.damagedTarget = damagedTarget;
	params.OriginalDamage = OriginalDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inDamage != nullptr)
		*inDamage = params.inDamage;
	if (damageInfo != nullptr)
		*damageInfo = params.damageInfo;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefBuff.DunDefBuff_Shield.ActivateBuff
// (Defined, Simulated, Public)

void UDunDefBuff_Shield::ActivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Shield.ActivateBuff");

	UDunDefBuff_Shield_ActivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Shield.HandleShieldDeath
// (Defined, Simulated, Public)

void UDunDefBuff_Shield::HandleShieldDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Shield.HandleShieldDeath");

	UDunDefBuff_Shield_HandleShieldDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Shield.DoDamageEffects
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class AController*             fromController                 (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void UDunDefBuff_Shield::DoDamageEffects(class AController* fromController, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Shield.DoDamageEffects");

	UDunDefBuff_Shield_DoDamageEffects_Params params;
	params.fromController = fromController;
	params.WhatHitMe = WhatHitMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Shield.AdjustTargetDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class AActor*                  forActor                       (Parm)
// int                            howMuchDamage                  (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             fromController                 (Parm)
// class UClass*                  TheDamageType                  (Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)
// struct FsLastDamageInfo        damageInfo                     (OptionalParm, Parm)

void UDunDefBuff_Shield::AdjustTargetDamage(class AActor* forActor, class AController* fromController, class UClass* TheDamageType, class UObject* WhatHitMe, const struct FsLastDamageInfo& damageInfo, int* howMuchDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Shield.AdjustTargetDamage");

	UDunDefBuff_Shield_AdjustTargetDamage_Params params;
	params.forActor = forActor;
	params.fromController = fromController;
	params.TheDamageType = TheDamageType;
	params.WhatHitMe = WhatHitMe;
	params.damageInfo = damageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (howMuchDamage != nullptr)
		*howMuchDamage = params.howMuchDamage;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefBuff.DunDefBuff_Shield.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void UDunDefBuff_Shield::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Shield.InitalizeActorStats");

	UDunDefBuff_Shield_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Shield.ExecReplicatedFunction
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FName                   FunctionName                   (Parm)
// struct FName                   nameParam1                     (OptionalParm, Parm)
// struct FName                   nameParam2                     (OptionalParm, Parm)
// class AActor*                  actorParam1                    (OptionalParm, Parm)
// class AActor*                  actorParam2                    (OptionalParm, Parm)
// struct FVector                 vecParam1                      (OptionalParm, Parm)
// struct FRotator                rotParam1                      (OptionalParm, Parm)
// float                          floatParam1                    (OptionalParm, Parm)
// float                          floatParam2                    (OptionalParm, Parm)
// float                          floatParam3                    (OptionalParm, Parm)
// float                          floatParam4                    (OptionalParm, Parm)
// unsigned long                  boolParam1                     (OptionalParm, Parm)
// unsigned long                  boolParam2                     (OptionalParm, Parm)
// unsigned long                  boolParam3                     (OptionalParm, Parm)
// struct FString                 stringParam1                   (OptionalParm, Parm, NeedCtorLink)
// class UObject*                 objectParam1                   (OptionalParm, Parm)

void UDunDefBuff_Shield::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Shield.ExecReplicatedFunction");

	UDunDefBuff_Shield_ExecReplicatedFunction_Params params;
	params.FunctionName = FunctionName;
	params.nameParam1 = nameParam1;
	params.nameParam2 = nameParam2;
	params.actorParam1 = actorParam1;
	params.actorParam2 = actorParam2;
	params.vecParam1 = vecParam1;
	params.rotParam1 = rotParam1;
	params.floatParam1 = floatParam1;
	params.floatParam2 = floatParam2;
	params.floatParam3 = floatParam3;
	params.floatParam4 = floatParam4;
	params.boolParam1 = boolParam1;
	params.boolParam2 = boolParam2;
	params.boolParam3 = boolParam3;
	params.stringParam1 = stringParam1;
	params.objectParam1 = objectParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.CanSpawn
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UObject*                 EventCauser                    (OptionalParm, Parm)
// class UObject*                 EventOwner                     (OptionalParm, Parm)
// class UObject*                 whatDidDamage                  (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_Spawn::CanSpawn(class UObject* EventCauser, class UObject* EventOwner, class UObject* whatDidDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.CanSpawn");

	UDunDefBuff_Spawn_CanSpawn_Params params;
	params.EventCauser = EventCauser;
	params.EventOwner = EventOwner;
	params.whatDidDamage = whatDidDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Spawn.DestroySpawn
// (Defined, Protected)
// Parameters:
// class UObject*                 theObject                      (Parm)

void UDunDefBuff_Spawn::DestroySpawn(class UObject* theObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.DestroySpawn");

	UDunDefBuff_Spawn_DestroySpawn_Params params;
	params.theObject = theObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.EnforceSpawnLimit
// (Defined, Protected)
// Parameters:
// int                            aspawnCount                    (Parm)

void UDunDefBuff_Spawn::EnforceSpawnLimit(int aspawnCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.EnforceSpawnLimit");

	UDunDefBuff_Spawn_EnforceSpawnLimit_Params params;
	params.aspawnCount = aspawnCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.CheckSpawnCount
// (Defined, Protected)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_Spawn::CheckSpawnCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.CheckSpawnCount");

	UDunDefBuff_Spawn_CheckSpawnCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Spawn.GetSpawnCount
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UDunDefBuff_Spawn::GetSpawnCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.GetSpawnCount");

	UDunDefBuff_Spawn_GetSpawnCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Spawn.SpawnArchetype
// (Defined, Public)
// Parameters:
// class AActor*                  TargetActor                    (Parm)

void UDunDefBuff_Spawn::SpawnArchetype(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.SpawnArchetype");

	UDunDefBuff_Spawn_SpawnArchetype_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.BuffEffect
// (Defined, Simulated, Public)

void UDunDefBuff_Spawn::BuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.BuffEffect");

	UDunDefBuff_Spawn_BuffEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportBuffRemoved
// (Public)
// Parameters:
// class UDunDefBuff*             BuffRemoved                    (Parm)

void UDunDefBuff_Spawn::ReportBuffRemoved(class UDunDefBuff* BuffRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportBuffRemoved");

	UDunDefBuff_Spawn_ReportBuffRemoved_Params params;
	params.BuffRemoved = BuffRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportBuffAdded
// (Public)
// Parameters:
// class UDunDefBuff*             BuffAdded                      (Parm)

void UDunDefBuff_Spawn::ReportBuffAdded(class UDunDefBuff* BuffAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportBuffAdded");

	UDunDefBuff_Spawn_ReportBuffAdded_Params params;
	params.BuffAdded = BuffAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerJumped
// (Defined, Public)

void UDunDefBuff_Spawn::ReportOwnerJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerJumped");

	UDunDefBuff_Spawn_ReportOwnerJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.TriggerEvent
// (Defined, Public)
// Parameters:
// TEnumAsByte<EBuffSpawnEvent>   EventToTrigger                 (Parm)

void UDunDefBuff_Spawn::TriggerEvent(TEnumAsByte<EBuffSpawnEvent> EventToTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.TriggerEvent");

	UDunDefBuff_Spawn_TriggerEvent_Params params;
	params.EventToTrigger = EventToTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerDeath
// (Defined, Public)

void UDunDefBuff_Spawn::ReportOwnerDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerDeath");

	UDunDefBuff_Spawn_ReportOwnerDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportHealedActor
// (Defined, Public)
// Parameters:
// int                            healedAmount                   (Parm)
// class AActor*                  healed                         (Parm)

void UDunDefBuff_Spawn::ReportHealedActor(int healedAmount, class AActor* healed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportHealedActor");

	UDunDefBuff_Spawn_ReportHealedActor_Params params;
	params.healedAmount = healedAmount;
	params.healed = healed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportHealed
// (Defined, Public)
// Parameters:
// int                            healedAmount                   (Parm)
// class AActor*                  Healer                         (Parm)

void UDunDefBuff_Spawn::ReportHealed(int healedAmount, class AActor* Healer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportHealed");

	UDunDefBuff_Spawn_ReportHealed_Params params;
	params.healedAmount = healedAmount;
	params.Healer = Healer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportKilledActor
// (Defined, Public)
// Parameters:
// class AActor*                  killedActor                    (Parm)
// class UClass*                  TheDamageType                  (Parm)
// class AController*             Killer                         (Parm)
// class AActor*                  KillingActor                   (Parm)
// class UObject*                 WhatKilledThem                 (Parm)

void UDunDefBuff_Spawn::ReportKilledActor(class AActor* killedActor, class UClass* TheDamageType, class AController* Killer, class AActor* KillingActor, class UObject* WhatKilledThem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportKilledActor");

	UDunDefBuff_Spawn_ReportKilledActor_Params params;
	params.killedActor = killedActor;
	params.TheDamageType = TheDamageType;
	params.Killer = Killer;
	params.KillingActor = KillingActor;
	params.WhatKilledThem = WhatKilledThem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportTookDamage
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            dealtDamage                    (Parm)
// class AActor*                  damager                        (Parm)
// class UClass*                  TheDamageType                  (Parm)
// int                            adjustedDamage                 (OptionalParm, Parm)

void UDunDefBuff_Spawn::ReportTookDamage(int dealtDamage, class AActor* damager, class UClass* TheDamageType, int adjustedDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportTookDamage");

	UDunDefBuff_Spawn_ReportTookDamage_Params params;
	params.dealtDamage = dealtDamage;
	params.damager = damager;
	params.TheDamageType = TheDamageType;
	params.adjustedDamage = adjustedDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Spawn.ReportActorDealtDamage
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            dealtDamage                    (Parm)
// class AActor*                  Victim                         (Parm)
// class UClass*                  TheDamageType                  (Parm)
// class AActor*                  DamageCauser                   (Parm)
// class AController*             DamageInstigator               (Parm)
// int                            adjustedDamage                 (OptionalParm, Parm)
// class UObject*                 whatDidDamage                  (OptionalParm, Parm)

void UDunDefBuff_Spawn::ReportActorDealtDamage(int dealtDamage, class AActor* Victim, class UClass* TheDamageType, class AActor* DamageCauser, class AController* DamageInstigator, int adjustedDamage, class UObject* whatDidDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Spawn.ReportActorDealtDamage");

	UDunDefBuff_Spawn_ReportActorDealtDamage_Params params;
	params.dealtDamage = dealtDamage;
	params.Victim = Victim;
	params.TheDamageType = TheDamageType;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.adjustedDamage = adjustedDamage;
	params.whatDidDamage = whatDidDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Web.GetPawnBoostAmount
// (Defined, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefBuff_Web::GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Web.GetPawnBoostAmount");

	UDunDefBuff_Web_GetPawnBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Web.RemoveDebuff
// (Defined, Simulated, Public)

void UDunDefBuff_Web::RemoveDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Web.RemoveDebuff");

	UDunDefBuff_Web_RemoveDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Web.ApplyDebuff
// (Defined, Simulated, Public)

void UDunDefBuff_Web::ApplyDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Web.ApplyDebuff");

	UDunDefBuff_Web_ApplyDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Web.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void UDunDefBuff_Web::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Web.InitalizeActorStats");

	UDunDefBuff_Web_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Web.BuffEffect
// (Defined, Simulated, Public)

void UDunDefBuff_Web::BuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Web.BuffEffect");

	UDunDefBuff_Web_BuffEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Web.IsValidTarget
// (Defined, Static, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// class AActor*                  BuffOwner                      (Parm)
// class UDunDefBuff*             aBuffTemplate                  (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UDunDefBuff_Web::STATIC_IsValidTarget(class AActor* Target, class AActor* BuffOwner, class UDunDefBuff* aBuffTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Web.IsValidTarget");

	UDunDefBuff_Web_IsValidTarget_Params params;
	params.Target = Target;
	params.BuffOwner = BuffOwner;
	params.aBuffTemplate = aBuffTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefBuff.DunDefBuff_Web.DeactivateBuff
// (Defined, Simulated, Public)

void UDunDefBuff_Web::DeactivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Web.DeactivateBuff");

	UDunDefBuff_Web_DeactivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefBuff.DunDefBuff_Web.ActivateBuff
// (Defined, Simulated, Public)

void UDunDefBuff_Web::ActivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefBuff.DunDefBuff_Web.ActivateBuff");

	UDunDefBuff_Web_ActivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
