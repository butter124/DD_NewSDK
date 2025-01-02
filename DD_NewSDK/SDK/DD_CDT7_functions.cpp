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

// Function CDT7.DunDefProjectile_HarpoonDot.ProcessTouch
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefProjectile_HarpoonDot::ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.DunDefProjectile_HarpoonDot.ProcessTouch");

	ADunDefProjectile_HarpoonDot_ProcessTouch_Params params;
	params.Other = Other;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.DunDefProjectile_HarpoonDot.SpawnDot
// (Defined, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefProjectile_HarpoonDot::SpawnDot(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.DunDefProjectile_HarpoonDot.SpawnDot");

	ADunDefProjectile_HarpoonDot_SpawnDot_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.DunDefProjectile_StaffDot.SpawnEffect
// (Defined, Public)

void ADunDefProjectile_StaffDot::SpawnEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.DunDefProjectile_StaffDot.SpawnEffect");

	ADunDefProjectile_StaffDot_SpawnEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.DunDefProjectile_StaffDot.Landed
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  Floor                          (Parm)

void ADunDefProjectile_StaffDot::Landed(const struct FVector& HitNormal, class AActor* Floor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.DunDefProjectile_StaffDot.Landed");

	ADunDefProjectile_StaffDot_Landed_Params params;
	params.HitNormal = HitNormal;
	params.Floor = Floor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.DunDefProjectile_StaffDot.SpawnDot
// (Defined, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefProjectile_StaffDot::SpawnDot(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.DunDefProjectile_StaffDot.SpawnDot");

	ADunDefProjectile_StaffDot_SpawnDot_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.DunDefProjectile_StaffDot.DoEffect
// (Defined, Public)

void ADunDefProjectile_StaffDot::DoEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.DunDefProjectile_StaffDot.DoEffect");

	ADunDefProjectile_StaffDot_DoEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.DunDefProjectile_StaffDot.Explode
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefProjectile_StaffDot::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.DunDefProjectile_StaffDot.Explode");

	ADunDefProjectile_StaffDot_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.DunDefWeapon_MagicStaff_Dot.ShootProjectiles
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// int                            theFireMode                    (OptionalParm, Parm)

void ADunDefWeapon_MagicStaff_Dot::ShootProjectiles(int theFireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.DunDefWeapon_MagicStaff_Dot.ShootProjectiles");

	ADunDefWeapon_MagicStaff_Dot_ShootProjectiles_Params params;
	params.theFireMode = theFireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetHealAmount
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_TowerDamageScaling::GetHealAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetHealAmount");

	UHeroEquipment_Familiar_TowerDamageScaling_GetHealAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.OnDunDefProjectileImpacted
// (Defined, Public)
// Parameters:
// class ADunDefProjectile*       aProjectile                    (Parm)
// class AActor*                  impactedOn                     (Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::OnDunDefProjectileImpacted(class ADunDefProjectile* aProjectile, class AActor* impactedOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.OnDunDefProjectileImpacted");

	UHeroEquipment_Familiar_TowerDamageScaling_OnDunDefProjectileImpacted_Params params;
	params.aProjectile = aProjectile;
	params.impactedOn = impactedOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_PawnTookDamage
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::NotifyEquipment_PawnTookDamage(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_PawnTookDamage");

	UHeroEquipment_Familiar_TowerDamageScaling_NotifyEquipment_PawnTookDamage_Params params;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.Momentum = Momentum;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_AnimNotifyAttachment
// (Defined, Public)
// Parameters:
// int                            NotifyID                       (Parm)
// class USkeletalMeshComponent*  equipmentSkelComp              (Parm, EditInline)

void UHeroEquipment_Familiar_TowerDamageScaling::NotifyEquipment_AnimNotifyAttachment(int NotifyID, class USkeletalMeshComponent* equipmentSkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_AnimNotifyAttachment");

	UHeroEquipment_Familiar_TowerDamageScaling_NotifyEquipment_AnimNotifyAttachment_Params params;
	params.NotifyID = NotifyID;
	params.equipmentSkelComp = equipmentSkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShootProjectile
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// bool                           bIsAltProjectile               (OptionalParm, Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::ShootProjectile(bool bIsAltProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShootProjectile");

	UHeroEquipment_Familiar_TowerDamageScaling_ShootProjectile_Params params;
	params.bIsAltProjectile = bIsAltProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetMuzzleTransformation
// (Defined, Public, HasOutParms)
// Parameters:
// class USkeletalMeshComponent*  myMeshComp                     (Parm, EditInline)
// struct FVector                 SpawnLocation                  (Parm, OutParm)
// struct FRotator                SpawnRotation                  (Parm, OutParm)

void UHeroEquipment_Familiar_TowerDamageScaling::GetMuzzleTransformation(class USkeletalMeshComponent* myMeshComp, struct FVector* SpawnLocation, struct FRotator* SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetMuzzleTransformation");

	UHeroEquipment_Familiar_TowerDamageScaling_GetMuzzleTransformation_Params params;
	params.myMeshComp = myMeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
	if (SpawnRotation != nullptr)
		*SpawnRotation = params.SpawnRotation;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetWeaponDamage
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHeroEquipment_Familiar_TowerDamageScaling::GetWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetWeaponDamage");

	UHeroEquipment_Familiar_TowerDamageScaling_GetWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ApplyPrimaryDamageMultiplierDisplay
// (Defined, Public, HasOutParms)
// Parameters:
// int                            StatValue                      (Parm, OutParm)

void UHeroEquipment_Familiar_TowerDamageScaling::ApplyPrimaryDamageMultiplierDisplay(int* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ApplyPrimaryDamageMultiplierDisplay");

	UHeroEquipment_Familiar_TowerDamageScaling_ApplyPrimaryDamageMultiplierDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatValue != nullptr)
		*StatValue = params.StatValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetEquipmentStatValue
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> equipmentStatType              (Parm)
// bool                           returnFinalAddedValue          (OptionalParm, Parm)
// bool                           includeStatLevelUp             (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_TowerDamageScaling::GetEquipmentStatValue(TEnumAsByte<EEquipmentStatType> equipmentStatType, bool returnFinalAddedValue, bool includeStatLevelUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetEquipmentStatValue");

	UHeroEquipment_Familiar_TowerDamageScaling_GetEquipmentStatValue_Params params;
	params.equipmentStatType = equipmentStatType;
	params.returnFinalAddedValue = returnFinalAddedValue;
	params.includeStatLevelUp = includeStatLevelUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AddRandomizeValues
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          equipmentQuality               (Parm)
// bool                           doResetStatsToTemplate         (OptionalParm, Parm)
// bool                           bDontUseMissionRandomizerMultiplier (OptionalParm, Parm)
// float                          RandomizerMultiplierOverride   (OptionalParm, Parm)
// bool                           bIsForShop                     (OptionalParm, Parm)
// bool                           bAllowTranscendentGear         (OptionalParm, Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::AddRandomizeValues(float equipmentQuality, bool doResetStatsToTemplate, bool bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, bool bIsForShop, bool bAllowTranscendentGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AddRandomizeValues");

	UHeroEquipment_Familiar_TowerDamageScaling_AddRandomizeValues_Params params;
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


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AllowStatLevelUp
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EEquipmentStatType> EQS                            (Parm)
// int                            statSubIndex                   (OptionalParm, Parm)
// bool                           IsInForgeUI                    (OptionalParm, Parm)
// bool                           bIgnoreManaRequirement         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHeroEquipment_Familiar_TowerDamageScaling::AllowStatLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, bool IsInForgeUI, bool bIgnoreManaRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AllowStatLevelUp");

	UHeroEquipment_Familiar_TowerDamageScaling_AllowStatLevelUp_Params params;
	params.EQS = EQS;
	params.statSubIndex = statSubIndex;
	params.IsInForgeUI = IsInForgeUI;
	params.bIgnoreManaRequirement = bIgnoreManaRequirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetAttackInterval
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bIncludeShotsPerSecondExponent (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_TowerDamageScaling::GetAttackInterval(bool bIncludeShotsPerSecondExponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetAttackInterval");

	UHeroEquipment_Familiar_TowerDamageScaling_GetAttackInterval_Params params;
	params.bIncludeShotsPerSecondExponent = bIncludeShotsPerSecondExponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetElementalDamageType
// (Defined, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* UHeroEquipment_Familiar_TowerDamageScaling::GetElementalDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetElementalDamageType");

	UHeroEquipment_Familiar_TowerDamageScaling_GetElementalDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileElementalDamage
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileElementalDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileElementalDamage");

	UHeroEquipment_Familiar_TowerDamageScaling_GetProjectileElementalDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileDamage
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefProjectile*       projectileArch                 (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileDamage(class ADunDefProjectile* projectileArch)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileDamage");

	UHeroEquipment_Familiar_TowerDamageScaling_GetProjectileDamage_Params params;
	params.projectileArch = projectileArch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileSpeed
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefProjectile*       projectileArch                 (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileSpeed(class ADunDefProjectile* projectileArch)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileSpeed");

	UHeroEquipment_Familiar_TowerDamageScaling_GetProjectileSpeed_Params params;
	params.projectileArch = projectileArch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetNumProjectiles
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHeroEquipment_Familiar_TowerDamageScaling::GetNumProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetNumProjectiles");

	UHeroEquipment_Familiar_TowerDamageScaling_GetNumProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredSphereRotationalPlacement
// (Defined, Public, HasOutParms)
// Parameters:
// class USkeletalMeshComponent*  myMeshComp                     (Parm, EditInline)
// class ADunDefPlayer*           myPlayer                       (Parm)
// unsigned char                  HasTarget                      (Parm, OutParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UHeroEquipment_Familiar_TowerDamageScaling::GetDesiredSphereRotationalPlacement(class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredSphereRotationalPlacement");

	UHeroEquipment_Familiar_TowerDamageScaling_GetDesiredSphereRotationalPlacement_Params params;
	params.myMeshComp = myMeshComp;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasTarget != nullptr)
		*HasTarget = params.HasTarget;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredDirection
// (Defined, Public)
// Parameters:
// class USkeletalMeshComponent*  myMeshComp                     (Parm, EditInline)
// class ADunDefPlayer*           myPlayer                       (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UHeroEquipment_Familiar_TowerDamageScaling::GetDesiredDirection(class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredDirection");

	UHeroEquipment_Familiar_TowerDamageScaling_GetDesiredDirection_Params params;
	params.myMeshComp = myMeshComp;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShutDown
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           isDestruction                  (OptionalParm, Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::ShutDown(bool isDestruction)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShutDown");

	UHeroEquipment_Familiar_TowerDamageScaling_ShutDown_Params params;
	params.isDestruction = isDestruction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AttachedComponent
// (Defined, Public)
// Parameters:
// class UPrimitiveComponent*     aComp                          (Parm, EditInline)

void UHeroEquipment_Familiar_TowerDamageScaling::AttachedComponent(class UPrimitiveComponent* aComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AttachedComponent");

	UHeroEquipment_Familiar_TowerDamageScaling_AttachedComponent_Params params;
	params.aComp = aComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateAI
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::UpdateAI(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateAI");

	UHeroEquipment_Familiar_TowerDamageScaling_UpdateAI_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateDelayedShots
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::UpdateDelayedShots(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateDelayedShots");

	UHeroEquipment_Familiar_TowerDamageScaling_UpdateDelayedShots_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.TickedByPawn
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::TickedByPawn(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.TickedByPawn");

	UHeroEquipment_Familiar_TowerDamageScaling_TickedByPawn_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestTarget
// (Defined, Public, HasDefaults)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> UHeroEquipment_Familiar_TowerDamageScaling::GetBestTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestTarget");

	UHeroEquipment_Familiar_TowerDamageScaling_GetBestTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestHealingTarget
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          CheckHealthPercentageThreshold (OptionalParm, Parm)
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> UHeroEquipment_Familiar_TowerDamageScaling::GetBestHealingTarget(float CheckHealthPercentageThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestHealingTarget");

	UHeroEquipment_Familiar_TowerDamageScaling_GetBestHealingTarget_Params params;
	params.CheckHealthPercentageThreshold = CheckHealthPercentageThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AttachedComponent
// (Defined, Public)
// Parameters:
// class UPrimitiveComponent*     aComp                          (Parm, EditInline)

void UHeroEquipment_Familiar_Melee_TowerScaling::AttachedComponent(class UPrimitiveComponent* aComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AttachedComponent");

	UHeroEquipment_Familiar_Melee_TowerScaling_AttachedComponent_Params params;
	params.aComp = aComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.NotifyEquipment_AnimNotifyAttachment
// (Defined, Public)
// Parameters:
// int                            NotifyID                       (Parm)
// class USkeletalMeshComponent*  equipmentSkelComp              (Parm, EditInline)

void UHeroEquipment_Familiar_Melee_TowerScaling::NotifyEquipment_AnimNotifyAttachment(int NotifyID, class USkeletalMeshComponent* equipmentSkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.NotifyEquipment_AnimNotifyAttachment");

	UHeroEquipment_Familiar_Melee_TowerScaling_NotifyEquipment_AnimNotifyAttachment_Params params;
	params.NotifyID = NotifyID;
	params.equipmentSkelComp = equipmentSkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.ShutDown
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           isDestruction                  (OptionalParm, Parm)

void UHeroEquipment_Familiar_Melee_TowerScaling::ShutDown(bool isDestruction)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.ShutDown");

	UHeroEquipment_Familiar_Melee_TowerScaling_ShutDown_Params params;
	params.isDestruction = isDestruction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAI
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_Melee_TowerScaling::UpdateAI(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAI");

	UHeroEquipment_Familiar_Melee_TowerScaling_UpdateAI_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetHealMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_Melee_TowerScaling::GetHealMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetHealMultiplier");

	UHeroEquipment_Familiar_Melee_TowerScaling_GetHealMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetMomentumMultiplier
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_Melee_TowerScaling::GetMomentumMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetMomentumMultiplier");

	UHeroEquipment_Familiar_Melee_TowerScaling_GetMomentumMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAttackSwing
// (Defined, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_Melee_TowerScaling::UpdateAttackSwing(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAttackSwing");

	UHeroEquipment_Familiar_Melee_TowerScaling_UpdateAttackSwing_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AddToSwingHurtList
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           myOwner                        (Parm)
// class AActor*                  newEntry                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHeroEquipment_Familiar_Melee_TowerScaling::AddToSwingHurtList(class ADunDefPlayer* myOwner, class AActor* newEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AddToSwingHurtList");

	UHeroEquipment_Familiar_Melee_TowerScaling_AddToSwingHurtList_Params params;
	params.myOwner = myOwner;
	params.newEntry = newEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.TickedByPawn
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           PlayerOwner                    (Parm)
// float                          DeltaTime                      (Parm)

void UHeroEquipment_Familiar_Melee_TowerScaling::TickedByPawn(class ADunDefPlayer* PlayerOwner, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.TickedByPawn");

	UHeroEquipment_Familiar_Melee_TowerScaling_TickedByPawn_Params params;
	params.PlayerOwner = PlayerOwner;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_TBR.LaunchMap
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// bool                           bStartTrueBossRush             (OptionalParm, Parm)

void UUI_TBR::LaunchMap(bool bStartTrueBossRush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_TBR.LaunchMap");

	UUI_TBR_LaunchMap_Params params;
	params.bStartTrueBossRush = bStartTrueBossRush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_TBR.WasCheckPointButtonPressed
// (Defined, Simulated, Public)
// Parameters:
// class UUIObject*               Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUI_TBR::WasCheckPointButtonPressed(class UUIObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_TBR.WasCheckPointButtonPressed");

	UUI_TBR_WasCheckPointButtonPressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_TBR.NotifyWidgetClicked
// (Defined, Event, Public)
// Parameters:
// class UUIObject*               Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUI_TBR::NotifyWidgetClicked(class UUIObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_TBR.NotifyWidgetClicked");

	UUI_TBR_NotifyWidgetClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_TBR.CheckProgress
// (Defined, Simulated, Public)

void UUI_TBR::CheckProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_TBR.CheckProgress");

	UUI_TBR_CheckProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_TBR.SceneActivated
// (Defined, Event, Public)
// Parameters:
// bool                           bInitialActivation             (Parm)

void UUI_TBR::SceneActivated(bool bInitialActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_TBR.SceneActivated");

	UUI_TBR_SceneActivated_Params params;
	params.bInitialActivation = bInitialActivation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
