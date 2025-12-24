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
// unsigned long                  bIsAltProjectile               (OptionalParm, Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::ShootProjectile(unsigned long bIsAltProjectile)
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
// unsigned long                  returnFinalAddedValue          (OptionalParm, Parm)
// unsigned long                  includeStatLevelUp             (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_TowerDamageScaling::GetEquipmentStatValue(TEnumAsByte<EEquipmentStatType> equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp)
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
// unsigned long                  doResetStatsToTemplate         (OptionalParm, Parm)
// unsigned long                  bDontUseMissionRandomizerMultiplier (OptionalParm, Parm)
// float                          RandomizerMultiplierOverride   (OptionalParm, Parm)
// unsigned long                  bIsForShop                     (OptionalParm, Parm)
// unsigned long                  bAllowTranscendentGear         (OptionalParm, Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::AddRandomizeValues(float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear)
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
// unsigned long                  IsInForgeUI                    (OptionalParm, Parm)
// unsigned long                  bIgnoreManaRequirement         (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UHeroEquipment_Familiar_TowerDamageScaling::AllowStatLevelUp(TEnumAsByte<EEquipmentStatType> EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement)
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
// unsigned long                  bIncludeShotsPerSecondExponent (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHeroEquipment_Familiar_TowerDamageScaling::GetAttackInterval(unsigned long bIncludeShotsPerSecondExponent)
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
// unsigned long                  isDestruction                  (OptionalParm, Parm)

void UHeroEquipment_Familiar_TowerDamageScaling::ShutDown(unsigned long isDestruction)
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
// unsigned long                  isDestruction                  (OptionalParm, Parm)

void UHeroEquipment_Familiar_Melee_TowerScaling::ShutDown(unsigned long isDestruction)
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
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UHeroEquipment_Familiar_Melee_TowerScaling::AddToSwingHurtList(class ADunDefPlayer* myOwner, class AActor* newEntry)
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
// unsigned long                  bStartTrueBossRush             (OptionalParm, Parm)

void UUI_TBR::LaunchMap(unsigned long bStartTrueBossRush)
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
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_TBR::WasCheckPointButtonPressed(class UUIObject* Widget)
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
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_TBR::NotifyWidgetClicked(class UUIObject* Widget)
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
// unsigned long                  bInitialActivation             (Parm)

void UUI_TBR::SceneActivated(unsigned long bInitialActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_TBR.SceneActivated");

	UUI_TBR_SceneActivated_Params params;
	params.bInitialActivation = bInitialActivation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.GetSelectedShopButton
// (Defined, Public)
// Parameters:
// class UUIButton_DataListEntry* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIButton_DataListEntry* UUI_ShopBase::GetSelectedShopButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GetSelectedShopButton");

	UUI_ShopBase_GetSelectedShopButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.GetShopInfo
// (Defined, Public)
// Parameters:
// struct FsShopInfo              ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FsShopInfo UUI_ShopBase::GetShopInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GetShopInfo");

	UUI_ShopBase_GetShopInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.GetItemInfo
// (Defined, Public, HasDefaults)
// Parameters:
// class UUIButton_Shop*          Button                         (Parm)
// unsigned long                  bGetValueFromFocusControl      (Parm)
// unsigned long                  bGetValueFromLastSelectedButton (Parm)
// struct FsShopItemInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FsShopItemInfo UUI_ShopBase::GetItemInfo(class UUIButton_Shop* Button, unsigned long bGetValueFromFocusControl, unsigned long bGetValueFromLastSelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GetItemInfo");

	UUI_ShopBase_GetItemInfo_Params params;
	params.Button = Button;
	params.bGetValueFromFocusControl = bGetValueFromFocusControl;
	params.bGetValueFromLastSelectedButton = bGetValueFromLastSelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.GetShopName
// (Defined, Public)
// Parameters:
// unsigned long                  bGetDescription                (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUI_ShopBase::GetShopName(unsigned long bGetDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GetShopName");

	UUI_ShopBase_GetShopName_Params params;
	params.bGetDescription = bGetDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.AllowOverlays
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_ShopBase::AllowOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.AllowOverlays");

	UUI_ShopBase_AllowOverlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.GetConsumedItemList
// (Defined, Simulated, Public)
// Parameters:
// struct FsShopItemInfo          ShopItemInfo                   (Parm, NeedCtorLink)
// TArray<class UHeroEquipment*>  ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UHeroEquipment*> UUI_ShopBase::GetConsumedItemList(const struct FsShopItemInfo& ShopItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GetConsumedItemList");

	UUI_ShopBase_GetConsumedItemList_Params params;
	params.ShopItemInfo = ShopItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.GetLastSelectedItem
// (Defined, Simulated, Public)
// Parameters:
// class UUIButton_Shop*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIButton_Shop* UUI_ShopBase::GetLastSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GetLastSelectedItem");

	UUI_ShopBase_GetLastSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.GiveMana
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FsShopItemInfo          ShopItemInfo                   (Parm, NeedCtorLink)
// class ADunDefPlayerController* PlayerController               (Parm)

void UUI_ShopBase::GiveMana(const struct FsShopItemInfo& ShopItemInfo, class ADunDefPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GiveMana");

	UUI_ShopBase_GiveMana_Params params;
	params.ShopItemInfo = ShopItemInfo;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.GenerateItem
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FsShopItemInfo          ShopItemInfo                   (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_ShopBase::GenerateItem(const struct FsShopItemInfo& ShopItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GenerateItem");

	UUI_ShopBase_GenerateItem_Params params;
	params.ShopItemInfo = ShopItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.PurchaseItem
// (Defined, Simulated, Public)
// Parameters:
// struct FsShopItemInfo          ShopItemInfo                   (Parm, NeedCtorLink)

void UUI_ShopBase::PurchaseItem(const struct FsShopItemInfo& ShopItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.PurchaseItem");

	UUI_ShopBase_PurchaseItem_Params params;
	params.ShopItemInfo = ShopItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.EntrySelected
// (Defined, Public)
// Parameters:
// class UUIButton_DataListEntry* Button                         (Parm)

void UUI_ShopBase::EntrySelected(class UUIButton_DataListEntry* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.EntrySelected");

	UUI_ShopBase_EntrySelected_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.RefreshedList
// (Defined, Public)

void UUI_ShopBase::RefreshedList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.RefreshedList");

	UUI_ShopBase_RefreshedList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.RefreshItemList
// (Defined, Simulated, Public)
// Parameters:
// int                            Id                             (Parm)

void UUI_ShopBase::RefreshItemList(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.RefreshItemList");

	UUI_ShopBase_RefreshItemList_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.OnReceivedInputKey
// (Defined, Public, HasOutParms)
// Parameters:
// struct FInputEventParameters   EventParms                     (Const, Parm, OutParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_ShopBase::OnReceivedInputKey(struct FInputEventParameters* EventParms)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.OnReceivedInputKey");

	UUI_ShopBase_OnReceivedInputKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventParms != nullptr)
		*EventParms = params.EventParms;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.CancelClicked
// (Defined, Public)

void UUI_ShopBase::CancelClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.CancelClicked");

	UUI_ShopBase_CancelClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.ConfirmClicked
// (Defined, Public)

void UUI_ShopBase::ConfirmClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.ConfirmClicked");

	UUI_ShopBase_ConfirmClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.OpenError
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<EErrorCode>        ErrorCode                      (Parm)

void UUI_ShopBase::OpenError(TEnumAsByte<EErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.OpenError");

	UUI_ShopBase_OpenError_Params params;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.OpenConfirm
// (Defined, Simulated, Public)
// Parameters:
// struct FsShopItemInfo          ItemInfo                       (Parm, NeedCtorLink)

void UUI_ShopBase::OpenConfirm(const struct FsShopItemInfo& ItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.OpenConfirm");

	UUI_ShopBase_OpenConfirm_Params params;
	params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.OnItemPurchased
// (Defined, Simulated, Public)
// Parameters:
// class UUIObject*               CallerObject                   (Parm)

void UUI_ShopBase::OnItemPurchased(class UUIObject* CallerObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.OnItemPurchased");

	UUI_ShopBase_OnItemPurchased_Params params;
	params.CallerObject = CallerObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.NotifyWidgetClicked
// (Defined, Event, Public)
// Parameters:
// class UUIObject*               Widget                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_ShopBase::NotifyWidgetClicked(class UUIObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.NotifyWidgetClicked");

	UUI_ShopBase_NotifyWidgetClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.GetTotalCost
// (Defined, Simulated, Public)
// Parameters:
// struct FsShopItemInfo          ShopItemInfo                   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUI_ShopBase::GetTotalCost(const struct FsShopItemInfo& ShopItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.GetTotalCost");

	UUI_ShopBase_GetTotalCost_Params params;
	params.ShopItemInfo = ShopItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.UpdateUI
// (Defined, Simulated, Public)

void UUI_ShopBase::UpdateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.UpdateUI");

	UUI_ShopBase_UpdateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.CanPurchaseItem
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UUIButton_Shop*          Button                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_ShopBase::CanPurchaseItem(class UUIButton_Shop* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.CanPurchaseItem");

	UUI_ShopBase_CanPurchaseItem_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.ConsumeItems
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// struct FsShopItemInfo          ShopItemInfo                   (Parm, NeedCtorLink)
// TArray<class UHeroEquipment*>  ItemsToConsume                 (Parm, NeedCtorLink)
// struct FString                 ManaToConsume                  (OptionalParm, Parm, NeedCtorLink)

void UUI_ShopBase::ConsumeItems(const struct FsShopItemInfo& ShopItemInfo, TArray<class UHeroEquipment*> ItemsToConsume, const struct FString& ManaToConsume)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.ConsumeItems");

	UUI_ShopBase_ConsumeItems_Params params;
	params.ShopItemInfo = ShopItemInfo;
	params.ItemsToConsume = ItemsToConsume;
	params.ManaToConsume = ManaToConsume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.ClearCurrencyAmounts
// (Defined, Simulated, Public)

void UUI_ShopBase::ClearCurrencyAmounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.ClearCurrencyAmounts");

	UUI_ShopBase_ClearCurrencyAmounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.FormatManaString
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ManaStringin                   (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUI_ShopBase::FormatManaString(const struct FString& ManaStringin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.FormatManaString");

	UUI_ShopBase_FormatManaString_Params params;
	params.ManaStringin = ManaStringin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.UpdateCurrencyAmounts
// (Defined, Simulated, Public)

void UUI_ShopBase::UpdateCurrencyAmounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.UpdateCurrencyAmounts");

	UUI_ShopBase_UpdateCurrencyAmounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.InitializeShop
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_ShopBase::InitializeShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.InitializeShop");

	UUI_ShopBase_InitializeShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ShopBase.PostInitialSceneUpdate
// (Defined, Public)

void UUI_ShopBase::PostInitialSceneUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.PostInitialSceneUpdate");

	UUI_ShopBase_PostInitialSceneUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ShopBase.SceneActivated
// (Defined, Event, Public)
// Parameters:
// unsigned long                  bInitialActivation             (Parm)

void UUI_ShopBase::SceneActivated(unsigned long bInitialActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ShopBase.SceneActivated");

	UUI_ShopBase_SceneActivated_Params params;
	params.bInitialActivation = bInitialActivation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ConfirmBox.OnReceivedInputKey
// (Defined, Public, HasOutParms)
// Parameters:
// struct FInputEventParameters   EventParms                     (Const, Parm, OutParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_ConfirmBox::OnReceivedInputKey(struct FInputEventParameters* EventParms)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ConfirmBox.OnReceivedInputKey");

	UUI_ConfirmBox_OnReceivedInputKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventParms != nullptr)
		*EventParms = params.EventParms;

	return params.ReturnValue;
}


// Function CDT7.UI_ConfirmBox.PostInitialSceneUpdate
// (Defined, Public)

void UUI_ConfirmBox::PostInitialSceneUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ConfirmBox.PostInitialSceneUpdate");

	UUI_ConfirmBox_PostInitialSceneUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ConfirmBox.OnButtonPressed
// (Defined, Public)
// Parameters:
// class UUIScreenObject*         EventObject                    (Parm)
// int                            PlayerIndex                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_ConfirmBox::OnButtonPressed(class UUIScreenObject* EventObject, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ConfirmBox.OnButtonPressed");

	UUI_ConfirmBox_OnButtonPressed_Params params;
	params.EventObject = EventObject;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UI_ConfirmBox.InitalizeItemFromShop
// (Defined, Public)
// Parameters:
// struct FsShopItemInfo          ItemInfo                       (Parm, NeedCtorLink)
// struct FsShopInfo              ShopInfo                       (Parm, NeedCtorLink)

void UUI_ConfirmBox::InitalizeItemFromShop(const struct FsShopItemInfo& ItemInfo, const struct FsShopInfo& ShopInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ConfirmBox.InitalizeItemFromShop");

	UUI_ConfirmBox_InitalizeItemFromShop_Params params;
	params.ItemInfo = ItemInfo;
	params.ShopInfo = ShopInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ConfirmBox.SceneActivated
// (Defined, Event, Public)
// Parameters:
// unsigned long                  bInitialActivation             (Parm)

void UUI_ConfirmBox::SceneActivated(unsigned long bInitialActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ConfirmBox.SceneActivated");

	UUI_ConfirmBox_SceneActivated_Params params;
	params.bInitialActivation = bInitialActivation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ConfirmBox.OnCancelClicked
// (Public, Delegate)

void UUI_ConfirmBox::OnCancelClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ConfirmBox.OnCancelClicked");

	UUI_ConfirmBox_OnCancelClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UI_ConfirmBox.OnConfirmClicked
// (Public, Delegate)

void UUI_ConfirmBox::OnConfirmClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UI_ConfirmBox.OnConfirmClicked");

	UUI_ConfirmBox_OnConfirmClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UIButton_Shop.DrawToolTip
// (Defined, Public)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X1                             (Parm)
// float                          X2                             (Parm)
// float                          Y1                             (Parm)
// float                          Y2                             (Parm)
// float                          ScaleX                         (Parm)
// float                          ScaleY                         (Parm)

void UUIButton_Shop::DrawToolTip(class UCanvas* C, float X1, float X2, float Y1, float Y2, float ScaleX, float ScaleY)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.DrawToolTip");

	UUIButton_Shop_DrawToolTip_Params params;
	params.C = C;
	params.X1 = X1;
	params.X2 = X2;
	params.Y1 = Y1;
	params.Y2 = Y2;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UIButton_Shop.RenderGame
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X1                             (Parm)
// float                          X2                             (Parm)
// float                          Y1                             (Parm)
// float                          Y2                             (Parm)

void UUIButton_Shop::RenderGame(class UCanvas* C, float X1, float X2, float Y1, float Y2)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.RenderGame");

	UUIButton_Shop_RenderGame_Params params;
	params.C = C;
	params.X1 = X1;
	params.X2 = X2;
	params.Y1 = Y1;
	params.Y2 = Y2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UIButton_Shop.GetEquipment
// (Defined, Public)
// Parameters:
// class UHeroEquipment*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UHeroEquipment* UUIButton_Shop::GetEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.GetEquipment");

	UUIButton_Shop_GetEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UIButton_Shop.UpdateItemInfo
// (Defined, Public)

void UUIButton_Shop::UpdateItemInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.UpdateItemInfo");

	UUIButton_Shop_UpdateItemInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UIButton_Shop.GetDataContainer
// (Defined, Public)
// Parameters:
// class UUIDataContainer_Equipment* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIDataContainer_Equipment* UUIButton_Shop::GetDataContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.GetDataContainer");

	UUIButton_Shop_GetDataContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UIButton_Shop.GetToolTipString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIButton_Shop::GetToolTipString()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.GetToolTipString");

	UUIButton_Shop_GetToolTipString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UIButton_Shop.InitializeFromDataListEntry
// (Defined, Public)
// Parameters:
// class UUIPanel_DataList*       DataList                       (Parm)
// TScriptInterface<class UDataListEntryInterface> Entry                          (Parm)

void UUIButton_Shop::InitializeFromDataListEntry(class UUIPanel_DataList* DataList, const TScriptInterface<class UDataListEntryInterface>& Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.InitializeFromDataListEntry");

	UUIButton_Shop_InitializeFromDataListEntry_Params params;
	params.DataList = DataList;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT7.UIButton_Shop.GetShopInfo
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FsShopInfo              ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FsShopInfo UUIButton_Shop::GetShopInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.GetShopInfo");

	UUIButton_Shop_GetShopInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UIButton_Shop.GetShopItemInfo
// (Defined, Simulated, Public)
// Parameters:
// struct FsShopItemInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FsShopItemInfo UUIButton_Shop::GetShopItemInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.GetShopItemInfo");

	UUIButton_Shop_GetShopItemInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UIButton_Shop.ButtonClicked
// (Defined, Public)
// Parameters:
// class UUIScreenObject*         Sender                         (Parm)
// int                            PlayerIndex                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUIButton_Shop::ButtonClicked(class UUIScreenObject* Sender, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.ButtonClicked");

	UUIButton_Shop_ButtonClicked_Params params;
	params.Sender = Sender;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.UIButton_Shop.NotifyWidgetClicked
// (Public, Delegate)
// Parameters:
// class UUIObject*               Widget                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUIButton_Shop::NotifyWidgetClicked(class UUIObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.UIButton_Shop.NotifyWidgetClicked");

	UUIButton_Shop_NotifyWidgetClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT7.IShopHandler.OnItemPurchased
// (Simulated, Public)
// Parameters:
// class UUIObject*               CallerObject                   (Parm)

void UIShopHandler::OnItemPurchased(class UUIObject* CallerObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT7.IShopHandler.OnItemPurchased");

	UIShopHandler_OnItemPurchased_Params params;
	params.CallerObject = CallerObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
