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

// Function DunDefSkyCity.DunDefProjectile_Meteor.Destroyed
// (Defined, Simulated, Public)

void ADunDefProjectile_Meteor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.Destroyed");

	ADunDefProjectile_Meteor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.SpawnFires
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefProjectile_Meteor::SpawnFires(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.SpawnFires");

	ADunDefProjectile_Meteor_SpawnFires_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.Explode
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefProjectile_Meteor::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.Explode");

	ADunDefProjectile_Meteor_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateDecal
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefProjectile_Meteor::UpdateDecal(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateDecal");

	ADunDefProjectile_Meteor_UpdateDecal_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateShadow
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefProjectile_Meteor::UpdateShadow(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateShadow");

	ADunDefProjectile_Meteor_UpdateShadow_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.DoHoming
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefProjectile_Meteor::DoHoming(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.DoHoming");

	ADunDefProjectile_Meteor_DoHoming_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefProjectile_Meteor::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.Tick");

	ADunDefProjectile_Meteor_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefProjectile_Meteor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.PostBeginPlay");

	ADunDefProjectile_Meteor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DropOffPoint.GetIsBeingUsed
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADropOffPoint::GetIsBeingUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DropOffPoint.GetIsBeingUsed");

	ADropOffPoint_GetIsBeingUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DropOffPoint.SetBeingUsed
// (Defined, Public)
// Parameters:
// bool                           bNowBeingUsed                  (Parm)

void ADropOffPoint::SetBeingUsed(bool bNowBeingUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DropOffPoint.SetBeingUsed");

	ADropOffPoint_SetBeingUsed_Params params;
	params.bNowBeingUsed = bNowBeingUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.StopsProjectile
// (Defined, Simulated, Public)
// Parameters:
// class AProjectile*             P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_DamagingInterpActor::StopsProjectile(class AProjectile* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.StopsProjectile");

	ADunDef_DamagingInterpActor_StopsProjectile_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.GetDamageAmount
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDef_DamagingInterpActor::GetDamageAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.GetDamageAmount");

	ADunDef_DamagingInterpActor_GetDamageAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.RanInto
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADunDef_DamagingInterpActor::RanInto(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.RanInto");

	ADunDef_DamagingInterpActor_RanInto_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.EncroachingOn
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_DamagingInterpActor::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.EncroachingOn");

	ADunDef_DamagingInterpActor_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.ClearDamageList
// (Defined, Public)

void ADunDef_DamagingInterpActor::ClearDamageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.ClearDamageList");

	ADunDef_DamagingInterpActor_ClearDamageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.SetDoDamage
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bSetDamage                     (Parm)
// bool                           bToggleCollision               (OptionalParm, Parm)

void ADunDef_DamagingInterpActor::SetDoDamage(bool bSetDamage, bool bToggleCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.SetDoDamage");

	ADunDef_DamagingInterpActor_SetDoDamage_Params params;
	params.bSetDamage = bSetDamage;
	params.bToggleCollision = bToggleCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ForceLineOfSight
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::ForceLineOfSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ForceLineOfSight");

	ADunDef_OldOne_ForceLineOfSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetLightningTowerDamagePercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOne::GetLightningTowerDamagePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetLightningTowerDamagePercent");

	ADunDef_OldOne_GetLightningTowerDamagePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.setIsWebbed
// (Defined, Public)
// Parameters:
// bool                           isWebbed                       (Parm)

void ADunDef_OldOne::setIsWebbed(bool isWebbed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.setIsWebbed");

	ADunDef_OldOne_setIsWebbed_Params params;
	params.isWebbed = isWebbed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.isWebbed
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::isWebbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.isWebbed");

	ADunDef_OldOne_isWebbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetChainIgnore
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::GetChainIgnore()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetChainIgnore");

	ADunDef_OldOne_GetChainIgnore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.SetChainIgnore
// (Defined, Public)
// Parameters:
// bool                           ignore                         (Parm)

void ADunDef_OldOne::SetChainIgnore(bool ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetChainIgnore");

	ADunDef_OldOne_SetChainIgnore_Params params;
	params.ignore = ignore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.IsBeingChainedBy
// (Defined, Public)
// Parameters:
// class ADunDefTower_ChainLightning* Tower                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::IsBeingChainedBy(class ADunDefTower_ChainLightning* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.IsBeingChainedBy");

	ADunDef_OldOne_IsBeingChainedBy_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.RemoveFromChainingTowers
// (Defined, Public)
// Parameters:
// class ADunDefTower_ChainLightning* Tower                          (Parm)

void ADunDef_OldOne::RemoveFromChainingTowers(class ADunDefTower_ChainLightning* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RemoveFromChainingTowers");

	ADunDef_OldOne_RemoveFromChainingTowers_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.AddToChainingTowers
// (Defined, Public)
// Parameters:
// class ADunDefTower_ChainLightning* Tower                          (Parm)

void ADunDef_OldOne::AddToChainingTowers(class ADunDefTower_ChainLightning* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.AddToChainingTowers");

	ADunDef_OldOne_AddToChainingTowers_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.AllowSuction
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::AllowSuction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.AllowSuction");

	ADunDef_OldOne_AllowSuction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.IsPlayingCustomAnim
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FName                   inAnim                         (Parm)
// float                          TimeFromEndToConsiderFinished  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::IsPlayingCustomAnim(const struct FName& inAnim, float TimeFromEndToConsiderFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.IsPlayingCustomAnim");

	ADunDef_OldOne_IsPlayingCustomAnim_Params params;
	params.inAnim = inAnim;
	params.TimeFromEndToConsiderFinished = TimeFromEndToConsiderFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.SetupDamageFlashing
// (Defined, Simulated, Public)

void ADunDef_OldOne::SetupDamageFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetupDamageFlashing");

	ADunDef_OldOne_SetupDamageFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.UpdateDamageFlashing
// (Defined, Simulated, Public)

void ADunDef_OldOne::UpdateDamageFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.UpdateDamageFlashing");

	ADunDef_OldOne_UpdateDamageFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.LocalTookDamage
// (Defined, Simulated, Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// struct FVector                 atPosition                     (Parm)
// class UClass*                  fromDamageType                 (Parm)

void ADunDef_OldOne::LocalTookDamage(int DamageAmount, const struct FVector& atPosition, class UClass* fromDamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.LocalTookDamage");

	ADunDef_OldOne_LocalTookDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.atPosition = atPosition;
	params.fromDamageType = fromDamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.NotifyHealthLevel
// (Defined, Public)
// Parameters:
// class ADunDef_OldOneCrystals*  healthCrystal                  (Parm)

void ADunDef_OldOne::NotifyHealthLevel(class ADunDef_OldOneCrystals* healthCrystal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.NotifyHealthLevel");

	ADunDef_OldOne_NotifyHealthLevel_Params params;
	params.healthCrystal = healthCrystal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.HealPctOfMaxHealth
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          HealPct                        (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// bool                           bShowFloatingNumbers           (OptionalParm, Parm)

void ADunDef_OldOne::HealPctOfMaxHealth(float HealPct, class AController* Healer, class UClass* DamageType, bool bShowFloatingNumbers)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.HealPctOfMaxHealth");

	ADunDef_OldOne_HealPctOfMaxHealth_Params params;
	params.HealPct = HealPct;
	params.Healer = Healer;
	params.DamageType = DamageType;
	params.bShowFloatingNumbers = bShowFloatingNumbers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetHealthPercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOne::GetHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetHealthPercent");

	ADunDef_OldOne_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetHealth
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// bool                           bGetMax                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDef_OldOne::GetHealth(bool bGetMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetHealth");

	ADunDef_OldOne_GetHealth_Params params;
	params.bGetMax = bGetMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.ForceMoveActor
// (Simulated, Public)
// Parameters:
// class AActor*                  Mover                          (Parm)
// struct FVector                 NewLoc                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::ForceMoveActor(class AActor* Mover, const struct FVector& NewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ForceMoveActor");

	ADunDef_OldOne_ForceMoveActor_Params params;
	params.Mover = Mover;
	params.NewLoc = NewLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetOverrideTargetComponent
// (Simulated, Public)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UPrimitiveComponent* ADunDef_OldOne::GetOverrideTargetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetOverrideTargetComponent");

	ADunDef_OldOne_GetOverrideTargetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetMass
// (Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOne::GetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetMass");

	ADunDef_OldOne_GetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.AllowDarknessIgnorance
// (Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::AllowDarknessIgnorance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.AllowDarknessIgnorance");

	ADunDef_OldOne_AllowDarknessIgnorance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.ForceFriendlyFire
// (HasOptionalParms, Public)
// Parameters:
// class AActor*                  Target                         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::ForceFriendlyFire(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ForceFriendlyFire");

	ADunDef_OldOne_ForceFriendlyFire_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetInterpolatedTargetingLocation
// (Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDef_OldOne::GetInterpolatedTargetingLocation(class AActor* RequestedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetInterpolatedTargetingLocation");

	ADunDef_OldOne_GetInterpolatedTargetingLocation_Params params;
	params.RequestedBy = RequestedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetTargetingLocation
// (Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDef_OldOne::GetTargetingLocation(class AActor* RequestedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetTargetingLocation");

	ADunDef_OldOne_GetTargetingLocation_Params params;
	params.RequestedBy = RequestedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.OnDestroy_RemoveFromTargetableList
// (Public)

void ADunDef_OldOne::OnDestroy_RemoveFromTargetableList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.OnDestroy_RemoveFromTargetableList");

	ADunDef_OldOne_OnDestroy_RemoveFromTargetableList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.OnPostBeginPlay_AddToTargetableList
// (Public)

void ADunDef_OldOne::OnPostBeginPlay_AddToTargetableList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.OnPostBeginPlay_AddToTargetableList");

	ADunDef_OldOne_OnPostBeginPlay_AddToTargetableList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.UnregisterAttacker
// (Public)
// Parameters:
// class ADunDefEnemyController*  forController                  (Parm)

void ADunDef_OldOne::UnregisterAttacker(class ADunDefEnemyController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.UnregisterAttacker");

	ADunDef_OldOne_UnregisterAttacker_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RegisterAttacker
// (Public)
// Parameters:
// class ADunDefEnemyController*  forController                  (Parm)

void ADunDef_OldOne::RegisterAttacker(class ADunDefEnemyController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RegisterAttacker");

	ADunDef_OldOne_RegisterAttacker_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetAttackRangeOffset
// (Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOne::GetAttackRangeOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetAttackRangeOffset");

	ADunDef_OldOne_GetAttackRangeOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.IgnoreFriendlyFireDamage
// (Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> instigatorActor                (Parm)
// class AController*             OptionalController             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::IgnoreFriendlyFireDamage(const TScriptInterface<class UDunDefTargetableInterface>& instigatorActor, class AController* OptionalController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.IgnoreFriendlyFireDamage");

	ADunDef_OldOne_IgnoreFriendlyFireDamage_Params params;
	params.instigatorActor = instigatorActor;
	params.OptionalController = OptionalController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetTargetingTeam
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDef_OldOne::GetTargetingTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetTargetingTeam");

	ADunDef_OldOne_GetTargetingTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOne::GetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetTowerTargetingDesirability");

	ADunDef_OldOne_GetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.GetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* forController                  (Parm)
// class ADunDefPlayer*           ForPlayer                      (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOne::GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetPlayerTargetingDesirability");

	ADunDef_OldOne_GetPlayerTargetingDesirability_Params params;
	params.forController = forController;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceEyeMultiBeamDmg
// (Defined, Public, HasDefaults)
// Parameters:
// int                            beamIdx                        (Parm)
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)

void ADunDef_OldOne::TraceEyeMultiBeamDmg(int beamIdx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceEyeMultiBeamDmg");

	ADunDef_OldOne_TraceEyeMultiBeamDmg_Params params;
	params.beamIdx = beamIdx;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetMultiEyeBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            beamIdx                        (Parm)
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// struct FVector                 BeamNormal                     (OptionalParm, Parm)

void ADunDef_OldOne::SetMultiEyeBeamLocation(int beamIdx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetMultiEyeBeamLocation");

	ADunDef_OldOne_SetMultiEyeBeamLocation_Params params;
	params.beamIdx = beamIdx;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.BeamNormal = BeamNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceMultiEyeBeam
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDef_OldOne::TraceMultiEyeBeam(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceMultiEyeBeam");

	ADunDef_OldOne_TraceMultiEyeBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SpawnFire
// (Defined, Public)
// Parameters:
// class ADunDefGasCloud*         fireTemplate                   (Parm)
// struct FVector                 SpawnLoc                       (Parm)

void ADunDef_OldOne::SpawnFire(class ADunDefGasCloud* fireTemplate, const struct FVector& SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SpawnFire");

	ADunDef_OldOne_SpawnFire_Params params;
	params.fireTemplate = fireTemplate;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceRightEyeDmg
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)

void ADunDef_OldOne::TraceRightEyeDmg(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceRightEyeDmg");

	ADunDef_OldOne_TraceRightEyeDmg_Params params;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetRightEyeBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// struct FVector                 BeamNormal                     (OptionalParm, Parm)

void ADunDef_OldOne::SetRightEyeBeamLocation(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetRightEyeBeamLocation");

	ADunDef_OldOne_SetRightEyeBeamLocation_Params params;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.BeamNormal = BeamNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEyeDmg
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)

void ADunDef_OldOne::TraceLeftEyeDmg(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceLeftEyeDmg");

	ADunDef_OldOne_TraceLeftEyeDmg_Params params;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetLeftEyeBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// struct FVector                 BeamNormal                     (OptionalParm, Parm)

void ADunDef_OldOne::SetLeftEyeBeamLocation(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetLeftEyeBeamLocation");

	ADunDef_OldOne_SetLeftEyeBeamLocation_Params params;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.BeamNormal = BeamNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceRightEye
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDef_OldOne::TraceRightEye(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceRightEye");

	ADunDef_OldOne_TraceRightEye_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEye
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDef_OldOne::TraceLeftEye(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceLeftEye");

	ADunDef_OldOne_TraceLeftEye_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceBellyMultiBeamDmg
// (Defined, Public, HasDefaults)
// Parameters:
// int                            beamIdx                        (Parm)
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)

void ADunDef_OldOne::TraceBellyMultiBeamDmg(int beamIdx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceBellyMultiBeamDmg");

	ADunDef_OldOne_TraceBellyMultiBeamDmg_Params params;
	params.beamIdx = beamIdx;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeamDmg
// (Defined, Public, HasDefaults)
// Parameters:
// int                            Idx                            (Parm)
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)

void ADunDef_OldOne::TraceBellyBeamDmg(int Idx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeamDmg");

	ADunDef_OldOne_TraceBellyBeamDmg_Params params;
	params.Idx = Idx;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetBellyBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            Idx                            (Parm)
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// struct FVector                 BeamNormal                     (OptionalParm, Parm)

void ADunDef_OldOne::SetBellyBeamLocation(int Idx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetBellyBeamLocation");

	ADunDef_OldOne_SetBellyBeamLocation_Params params;
	params.Idx = Idx;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.BeamNormal = BeamNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetMultiBellyBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            beamIdx                        (Parm)
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// struct FVector                 BeamNormal                     (OptionalParm, Parm)

void ADunDef_OldOne::SetMultiBellyBeamLocation(int beamIdx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetMultiBellyBeamLocation");

	ADunDef_OldOne_SetMultiBellyBeamLocation_Params params;
	params.beamIdx = beamIdx;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.BeamNormal = BeamNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceMultiBellyBeam
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDef_OldOne::TraceMultiBellyBeam(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceMultiBellyBeam");

	ADunDef_OldOne_TraceMultiBellyBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetRandomLazerPoint
// (Defined, Simulated, Public)
// Parameters:
// int                            lazerIdx                       (Parm)
// struct FVector                 lazerPoint                     (Parm)

void ADunDef_OldOne::SetRandomLazerPoint(int lazerIdx, const struct FVector& lazerPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetRandomLazerPoint");

	ADunDef_OldOne_SetRandomLazerPoint_Params params;
	params.lazerIdx = lazerIdx;
	params.lazerPoint = lazerPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeam
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDef_OldOne::TraceBellyBeam(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeam");

	ADunDef_OldOne_TraceBellyBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetNormalBellyTarget
// (Defined, Simulated, Public)
// Parameters:
// int                            Idx                            (Parm)

void ADunDef_OldOne::SetNormalBellyTarget(int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetNormalBellyTarget");

	ADunDef_OldOne_SetNormalBellyTarget_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.InitNormalBeams
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOne::InitNormalBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.InitNormalBeams");

	ADunDef_OldOne_InitNormalBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ChooseTarget
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ADunDef_OldOne::ChooseTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ChooseTarget");

	ADunDef_OldOne_ChooseTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.StartLazers
// (Event, Public)

void ADunDef_OldOne::StartLazers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartLazers");

	ADunDef_OldOne_StartLazers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StopFlameBreath
// (Defined, Simulated, Event, Public)

void ADunDef_OldOne::StopFlameBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StopFlameBreath");

	ADunDef_OldOne_StopFlameBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartFlameSweep
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::StartFlameSweep()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartFlameSweep");

	ADunDef_OldOne_StartFlameSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartFlameburst
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::StartFlameburst()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartFlameburst");

	ADunDef_OldOne_StartFlameburst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ActivateChestCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::ActivateChestCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ActivateChestCrystal");

	ADunDef_OldOne_ActivateChestCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ActivateRightHandCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::ActivateRightHandCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ActivateRightHandCrystal");

	ADunDef_OldOne_ActivateRightHandCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ActivateLeftHandCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::ActivateLeftHandCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ActivateLeftHandCrystal");

	ADunDef_OldOne_ActivateLeftHandCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DeactivateChestCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::DeactivateChestCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DeactivateChestCrystal");

	ADunDef_OldOne_DeactivateChestCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DeactivateRightHandCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::DeactivateRightHandCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DeactivateRightHandCrystal");

	ADunDef_OldOne_DeactivateRightHandCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DeactivateLeftHandCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::DeactivateLeftHandCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DeactivateLeftHandCrystal");

	ADunDef_OldOne_DeactivateLeftHandCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SpawnDoubleSlamEmitter
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 SpawnLoc                       (Parm)
// class ADunDefEmitterShockwave* EmitterTemplate                (Parm)

void ADunDef_OldOne::SpawnDoubleSlamEmitter(const struct FVector& SpawnLoc, class ADunDefEmitterShockwave* EmitterTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SpawnDoubleSlamEmitter");

	ADunDef_OldOne_SpawnDoubleSlamEmitter_Params params;
	params.SpawnLoc = SpawnLoc;
	params.EmitterTemplate = EmitterTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SpawnSingleSlamEmitter
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 SpawnLoc                       (Parm)

void ADunDef_OldOne::SpawnSingleSlamEmitter(const struct FVector& SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SpawnSingleSlamEmitter");

	ADunDef_OldOne_SpawnSingleSlamEmitter_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoubleStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::DoubleStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoubleStomp");

	ADunDef_OldOne_DoubleStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RightFootStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::RightFootStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RightFootStomp");

	ADunDef_OldOne_RightFootStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.LeftFootStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::LeftFootStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.LeftFootStomp");

	ADunDef_OldOne_LeftFootStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.UpdateDifficultyValues
// (Defined, Public)

void ADunDef_OldOne::UpdateDifficultyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.UpdateDifficultyValues");

	ADunDef_OldOne_UpdateDifficultyValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DeActivateCollisionDamage
// (Defined, Event, Public)

void ADunDef_OldOne::DeActivateCollisionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DeActivateCollisionDamage");

	ADunDef_OldOne_DeActivateCollisionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ActivateCollisionDamage
// (Defined, Event, Public)

void ADunDef_OldOne::ActivateCollisionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ActivateCollisionDamage");

	ADunDef_OldOne_ActivateCollisionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetNumCrystalsThisPhase
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDef_OldOne::GetNumCrystalsThisPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetNumCrystalsThisPhase");

	ADunDef_OldOne_GetNumCrystalsThisPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.DoPhaseShift
// (Defined, Public)

void ADunDef_OldOne::DoPhaseShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoPhaseShift");

	ADunDef_OldOne_DoPhaseShift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ArePlayersWithinRange
// (Defined, Public)
// Parameters:
// struct FVector                 LocCheck                       (Parm)
// float                          distCheck                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::ArePlayersWithinRange(const struct FVector& LocCheck, float distCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ArePlayersWithinRange");

	ADunDef_OldOne_ArePlayersWithinRange_Params params;
	params.LocCheck = LocCheck;
	params.distCheck = distCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.DoDeath
// (Defined, Public, HasDefaults)

void ADunDef_OldOne::DoDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoDeath");

	ADunDef_OldOne_DoDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckCrystalDeaths
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::CheckCrystalDeaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckCrystalDeaths");

	ADunDef_OldOne_CheckCrystalDeaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.NotifyCrystalDeath
// (Defined, Public)
// Parameters:
// class ADunDef_OldOneCrystals*  diedCrystal                    (Parm)

void ADunDef_OldOne::NotifyCrystalDeath(class ADunDef_OldOneCrystals* diedCrystal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.NotifyCrystalDeath");

	ADunDef_OldOne_NotifyCrystalDeath_Params params;
	params.diedCrystal = diedCrystal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoubleFootStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::DoubleFootStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoubleFootStomp");

	ADunDef_OldOne_DoubleFootStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.LeftHandProjectile
// (Event, Public)

void ADunDef_OldOne::LeftHandProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.LeftHandProjectile");

	ADunDef_OldOne_LeftHandProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RightHandProjectile
// (Event, Public)

void ADunDef_OldOne::RightHandProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RightHandProjectile");

	ADunDef_OldOne_RightHandProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PickSmashAttack
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::PickSmashAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PickSmashAttack");

	ADunDef_OldOne_PickSmashAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.DoProjectileAttack
// (Simulated, Public)

void ADunDef_OldOne::DoProjectileAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoProjectileAttack");

	ADunDef_OldOne_DoProjectileAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckProjectileAttack
// (Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::CheckProjectileAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckProjectileAttack");

	ADunDef_OldOne_CheckProjectileAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForTaunt
// (Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::CheckForTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForTaunt");

	ADunDef_OldOne_CheckForTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForBeamAttack
// (Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::CheckForBeamAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForBeamAttack");

	ADunDef_OldOne_CheckForBeamAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.DoTaunt
// (Simulated, Public)

void ADunDef_OldOne::DoTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoTaunt");

	ADunDef_OldOne_DoTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetTauntAnim
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDef_OldOne::GetTauntAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetTauntAnim");

	ADunDef_OldOne_GetTauntAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.PlayHurtAnim
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   theHurtAnim                    (Parm)

void ADunDef_OldOne::PlayHurtAnim(const struct FName& theHurtAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PlayHurtAnim");

	ADunDef_OldOne_PlayHurtAnim_Params params;
	params.theHurtAnim = theHurtAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.FinishTaunt
// (Defined, Public)

void ADunDef_OldOne::FinishTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.FinishTaunt");

	ADunDef_OldOne_FinishTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SpawnMeteor
// (Defined, Public, HasDefaults)
// Parameters:
// class ADunDefCustomNode*       theNode                        (Parm)

void ADunDef_OldOne::SpawnMeteor(class ADunDefCustomNode* theNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SpawnMeteor");

	ADunDef_OldOne_SpawnMeteor_Params params;
	params.theNode = theNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartMeteorAttack
// (Defined, Event, Public)

void ADunDef_OldOne::StartMeteorAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartMeteorAttack");

	ADunDef_OldOne_StartMeteorAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForMeteorAttack
// (Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::CheckForMeteorAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForMeteorAttack");

	ADunDef_OldOne_CheckForMeteorAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForFlame
// (Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::CheckForFlame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForFlame");

	ADunDef_OldOne_CheckForFlame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForLazer
// (Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::CheckForLazer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForLazer");

	ADunDef_OldOne_CheckForLazer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForSweep
// (Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::CheckForSweep()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForSweep");

	ADunDef_OldOne_CheckForSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.EndAttack
// (HasOptionalParms, Public)
// Parameters:
// bool                           bDontEndState                  (OptionalParm, Parm)

void ADunDef_OldOne::EndAttack(bool bDontEndState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.EndAttack");

	ADunDef_OldOne_EndAttack_Params params;
	params.bDontEndState = bDontEndState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ShutDownLazers
// (Defined, Simulated, Public)

void ADunDef_OldOne::ShutDownLazers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ShutDownLazers");

	ADunDef_OldOne_ShutDownLazers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetInitalEyeLazerTarget
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  newLazerTarget                 (Parm)

void ADunDef_OldOne::SetInitalEyeLazerTarget(class AActor* newLazerTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetInitalEyeLazerTarget");

	ADunDef_OldOne_SetInitalEyeLazerTarget_Params params;
	params.newLazerTarget = newLazerTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartBellyLazer
// (Defined, Simulated, Public)

void ADunDef_OldOne::StartBellyLazer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartBellyLazer");

	ADunDef_OldOne_StartBellyLazer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartEyeLazer
// (Defined, Simulated, Public)

void ADunDef_OldOne::StartEyeLazer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartEyeLazer");

	ADunDef_OldOne_StartEyeLazer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.BeginFlameSweepAnim
// (Simulated, Event, Public)

void ADunDef_OldOne::BeginFlameSweepAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.BeginFlameSweepAnim");

	ADunDef_OldOne_BeginFlameSweepAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoFlameSweep
// (Defined, Simulated, Public)

void ADunDef_OldOne::DoFlameSweep()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoFlameSweep");

	ADunDef_OldOne_DoFlameSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoubleHandStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::DoubleHandStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoubleHandStomp");

	ADunDef_OldOne_DoubleHandStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.LeftHandStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::LeftHandStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.LeftHandStomp");

	ADunDef_OldOne_LeftHandStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RightHandStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::RightHandStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RightHandStomp");

	ADunDef_OldOne_RightHandStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetAttackDelay
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOne::GetAttackDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetAttackDelay");

	ADunDef_OldOne_GetAttackDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.SetPhase
// (Defined, Public)
// Parameters:
// TEnumAsByte<EPhase>            newPhase                       (Parm)

void ADunDef_OldOne::SetPhase(TEnumAsByte<EPhase> newPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetPhase");

	ADunDef_OldOne_SetPhase_Params params;
	params.newPhase = newPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void ADunDef_OldOne::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.OnToggle");

	ADunDef_OldOne_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartAttack
// (Simulated, Public)

void ADunDef_OldOne::StartAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartAttack");

	ADunDef_OldOne_StartAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PickAttack
// (Public)

void ADunDef_OldOne::PickAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PickAttack");

	ADunDef_OldOne_PickAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StopCustomAnim
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          blendTimeOut                   (OptionalParm, Parm)
// struct FName                   CustomAnimationToStop          (OptionalParm, Parm)
// bool                           bReplicate                     (OptionalParm, Parm)
// bool                           bForceReplication              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOne::StopCustomAnim(float blendTimeOut, const struct FName& CustomAnimationToStop, bool bReplicate, bool bForceReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StopCustomAnim");

	ADunDef_OldOne_StopCustomAnim_Params params;
	params.blendTimeOut = blendTimeOut;
	params.CustomAnimationToStop = CustomAnimationToStop;
	params.bReplicate = bReplicate;
	params.bForceReplication = bForceReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.PlayCustomAnim
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FName                   inAnim                         (Parm)
// float                          blendTimeIn                    (OptionalParm, Parm)
// bool                           Looping                        (OptionalParm, Parm)
// float                          Speed                          (OptionalParm, Parm)
// float                          BlendOutTime                   (OptionalParm, Parm)
// bool                           bOverride                      (OptionalParm, Parm)
// bool                           Replicate                      (OptionalParm, Parm)
// bool                           bUninterruptable               (OptionalParm, Parm)
// bool                           bReplicateToOwners             (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOne::PlayCustomAnim(const struct FName& inAnim, float blendTimeIn, bool Looping, float Speed, float BlendOutTime, bool bOverride, bool Replicate, bool bUninterruptable, bool bReplicateToOwners)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PlayCustomAnim");

	ADunDef_OldOne_PlayCustomAnim_Params params;
	params.inAnim = inAnim;
	params.blendTimeIn = blendTimeIn;
	params.Looping = Looping;
	params.Speed = Speed;
	params.BlendOutTime = BlendOutTime;
	params.bOverride = bOverride;
	params.Replicate = Replicate;
	params.bUninterruptable = bUninterruptable;
	params.bReplicateToOwners = bReplicateToOwners;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOne.InitCrystals
// (Defined, Public)

void ADunDef_OldOne::InitCrystals()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.InitCrystals");

	ADunDef_OldOne_InitCrystals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ClearCrystalsRefs
// (Defined, Simulated, Public)

void ADunDef_OldOne::ClearCrystalsRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ClearCrystalsRefs");

	ADunDef_OldOne_ClearCrystalsRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PopulateCustomNode
// (Defined, Public)

void ADunDef_OldOne::PopulateCustomNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PopulateCustomNode");

	ADunDef_OldOne_PopulateCustomNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PostBeginPlay
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PostBeginPlay");

	ADunDef_OldOne_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ExecReplicatedFunction
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
// bool                           boolParam1                     (OptionalParm, Parm)
// bool                           boolParam2                     (OptionalParm, Parm)
// bool                           boolParam3                     (OptionalParm, Parm)
// struct FString                 stringParam1                   (OptionalParm, Parm, NeedCtorLink)
// class UObject*                 objectParam1                   (OptionalParm, Parm)

void ADunDef_OldOne::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ExecReplicatedFunction");

	ADunDef_OldOne_ExecReplicatedFunction_Params params;
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


// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* forController                  (Parm)
// class ADunDefPlayer*           ForPlayer                      (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOneCrystals::DTGetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetPlayerTargetingDesirability");

	ADunDef_OldOneCrystals_DTGetPlayerTargetingDesirability_Params params;
	params.forController = forController;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDef_OldOneCrystals::DTGetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetTowerTargetingDesirability");

	ADunDef_OldOneCrystals_DTGetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.IgnoreFriendlyFireDamage
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> instigatorActor                (Parm)
// class AController*             OptionalController             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOneCrystals::IgnoreFriendlyFireDamage(const TScriptInterface<class UDunDefTargetableInterface>& instigatorActor, class AController* OptionalController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.IgnoreFriendlyFireDamage");

	ADunDef_OldOneCrystals_IgnoreFriendlyFireDamage_Params params;
	params.instigatorActor = instigatorActor;
	params.OptionalController = OptionalController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOneCrystals::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.DrawMyHUD");

	ADunDef_OldOneCrystals_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayHitEffect
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDef_OldOneCrystals::PlayHitEffect(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.PlayHitEffect");

	ADunDef_OldOneCrystals_PlayHitEffect_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDamageFlashing
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::UpdateDamageFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDamageFlashing");

	ADunDef_OldOneCrystals_UpdateDamageFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.LocalTookDamage
// (Defined, Simulated, Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// struct FVector                 atPosition                     (Parm)
// class UClass*                  fromDamageType                 (Parm)

void ADunDef_OldOneCrystals::LocalTookDamage(int DamageAmount, const struct FVector& atPosition, class UClass* fromDamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.LocalTookDamage");

	ADunDef_OldOneCrystals_LocalTookDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.atPosition = atPosition;
	params.fromDamageType = fromDamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.SubtractHealth
// (Defined, Public)
// Parameters:
// int                            DamageAmount                   (Parm)

void ADunDef_OldOneCrystals::SubtractHealth(int DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.SubtractHealth");

	ADunDef_OldOneCrystals_SubtractHealth_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.SetInPlay
// (Defined, Public)

void ADunDef_OldOneCrystals::SetInPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.SetInPlay");

	ADunDef_OldOneCrystals_SetInPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.RepairCrystal
// (Defined, Public)

void ADunDef_OldOneCrystals::RepairCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.RepairCrystal");

	ADunDef_OldOneCrystals_RepairCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.StopsProjectile
// (Defined, Simulated, Public)
// Parameters:
// class AProjectile*             P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDef_OldOneCrystals::StopsProjectile(class AProjectile* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.StopsProjectile");

	ADunDef_OldOneCrystals_StopsProjectile_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateHealthColor
// (Simulated, Public)

void ADunDef_OldOneCrystals::UpdateHealthColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateHealthColor");

	ADunDef_OldOneCrystals_UpdateHealthColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.NotifyHealthChange
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::NotifyHealthChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.NotifyHealthChange");

	ADunDef_OldOneCrystals_NotifyHealthChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateActivate
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOneCrystals::UpdateActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateActivate");

	ADunDef_OldOneCrystals_UpdateActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.Deactivate
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.Deactivate");

	ADunDef_OldOneCrystals_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.Activate
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.Activate");

	ADunDef_OldOneCrystals_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.BaseChange
// (Event, Public)

void ADunDef_OldOneCrystals::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.BaseChange");

	ADunDef_OldOneCrystals_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.ShutDownCrystal
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::ShutDownCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.ShutDownCrystal");

	ADunDef_OldOneCrystals_ShutDownCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDissolve
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::UpdateDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDissolve");

	ADunDef_OldOneCrystals_UpdateDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.DissolveCrystal
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::DissolveCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.DissolveCrystal");

	ADunDef_OldOneCrystals_DissolveCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayDeath
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::PlayDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.PlayDeath");

	ADunDef_OldOneCrystals_PlayDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.Died
// (Defined, Public)
// Parameters:
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDef_OldOneCrystals::Died(class AController* EventInstigator, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.Died");

	ADunDef_OldOneCrystals_Died_Params params;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.InitCrystal
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDef_OldOne*          owningOldOne                   (Parm)

void ADunDef_OldOneCrystals::InitCrystal(class ADunDef_OldOne* owningOldOne)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.InitCrystal");

	ADunDef_OldOneCrystals_InitCrystal_Params params;
	params.owningOldOne = owningOldOne;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDef_OldOneCrystals::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.ReplicatedEvent");

	ADunDef_OldOneCrystals_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefOldOneBreath.HurtRadius
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// float                          BaseDamage                     (Parm)
// float                          DamageRadius                   (Parm)
// class UClass*                  DamageType                     (Parm)
// float                          Momentum                       (Parm)
// struct FVector                 HurtOrigin                     (Parm)
// class AActor*                  IgnoredActor                   (OptionalParm, Parm)
// class AController*             InstigatedByController         (OptionalParm, Parm)
// bool                           bDoFullDamage                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefOldOneBreath::HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, bool bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefOldOneBreath.HurtRadius");

	ADunDefOldOneBreath_HurtRadius_Params params;
	params.BaseDamage = BaseDamage;
	params.DamageRadius = DamageRadius;
	params.DamageType = DamageType;
	params.Momentum = Momentum;
	params.HurtOrigin = HurtOrigin;
	params.IgnoredActor = IgnoredActor;
	params.InstigatedByController = InstigatedByController;
	params.bDoFullDamage = bDoFullDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.RingHurtRadius
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          BaseDamage                     (Parm)
// float                          DamageRadius                   (Parm)
// class UClass*                  DamageType                     (Parm)
// float                          Momentum                       (Parm)
// struct FVector                 HurtOrigin                     (Parm)
// class AActor*                  IgnoredActor                   (OptionalParm, Parm)
// class AController*             InstigatedByController         (OptionalParm, Parm)
// bool                           bDoFullDamage                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefEmitterShockwave::RingHurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, bool bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.RingHurtRadius");

	ADunDefEmitterShockwave_RingHurtRadius_Params params;
	params.BaseDamage = BaseDamage;
	params.DamageRadius = DamageRadius;
	params.DamageType = DamageType;
	params.Momentum = Momentum;
	params.HurtOrigin = HurtOrigin;
	params.IgnoredActor = IgnoredActor;
	params.InstigatedByController = InstigatedByController;
	params.bDoFullDamage = bDoFullDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.Tick
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefEmitterShockwave::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.Tick");

	ADunDefEmitterShockwave_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.AllowSpawn
// (Defined, Event, Static, Public)
// Parameters:
// class AActor*                  theArchetype                   (Parm)
// struct FVector                 theLoc                         (Parm)
// struct FRotator                theRot                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefEmitterShockwave::STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.AllowSpawn");

	ADunDefEmitterShockwave_AllowSpawn_Params params;
	params.theArchetype = theArchetype;
	params.theLoc = theLoc;
	params.theRot = theRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.HurtRadius
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          BaseDamage                     (Parm)
// float                          DamageRadius                   (Parm)
// class UClass*                  DamageType                     (Parm)
// float                          Momentum                       (Parm)
// struct FVector                 HurtOrigin                     (Parm)
// class AActor*                  IgnoredActor                   (OptionalParm, Parm)
// class AController*             InstigatedByController         (OptionalParm, Parm)
// bool                           bDoFullDamage                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefEmitterShockwave::HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, bool bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.HurtRadius");

	ADunDefEmitterShockwave_HurtRadius_Params params;
	params.BaseDamage = BaseDamage;
	params.DamageRadius = DamageRadius;
	params.DamageType = DamageType;
	params.Momentum = Momentum;
	params.HurtOrigin = HurtOrigin;
	params.IgnoredActor = IgnoredActor;
	params.InstigatedByController = InstigatedByController;
	params.bDoFullDamage = bDoFullDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.DoDamage
// (Defined, Public)

void ADunDefEmitterShockwave::DoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.DoDamage");

	ADunDefEmitterShockwave_DoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefEmitterShockwave::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.PostBeginPlay");

	ADunDefEmitterShockwave_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.TakeDamage
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void ADunDefGoblinCopter::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.TakeDamage");

	ADunDefGoblinCopter_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;
	params.WhatHitMe = WhatHitMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.GetTargetingLocation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefGoblinCopter::GetTargetingLocation(class AActor* RequestedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.GetTargetingLocation");

	ADunDefGoblinCopter_GetTargetingLocation_Params params;
	params.RequestedBy = RequestedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.SpawnFlare
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 flareLoc                       (Parm)
// struct FRotator                flareRot                       (Parm)

void ADunDefGoblinCopter::SpawnFlare(const struct FVector& flareLoc, const struct FRotator& flareRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.SpawnFlare");

	ADunDefGoblinCopter_SpawnFlare_Params params;
	params.flareLoc = flareLoc;
	params.flareRot = flareRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.GetFlareSpawnLocAndRot
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 flareLoc                       (Parm, OutParm)
// struct FRotator                flareRot                       (Parm, OutParm)

void ADunDefGoblinCopter::GetFlareSpawnLocAndRot(struct FVector* flareLoc, struct FRotator* flareRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.GetFlareSpawnLocAndRot");

	ADunDefGoblinCopter_GetFlareSpawnLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flareLoc != nullptr)
		*flareLoc = params.flareLoc;
	if (flareRot != nullptr)
		*flareRot = params.flareRot;
}


// Function DunDefSkyCity.DunDefGoblinCopter.CheckGCopterProximity
// (Defined, Public, HasDefaults)

void ADunDefGoblinCopter::CheckGCopterProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.CheckGCopterProximity");

	ADunDefGoblinCopter_CheckGCopterProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyValues
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           UpdateMaterial                 (OptionalParm, Parm)
// bool                           onlyDynamicValues              (OptionalParm, Parm)

void ADunDefGoblinCopter::UpdateDifficultyValues(bool UpdateMaterial, bool onlyDynamicValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyValues");

	ADunDefGoblinCopter_UpdateDifficultyValues_Params params;
	params.UpdateMaterial = UpdateMaterial;
	params.onlyDynamicValues = onlyDynamicValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefGoblinCopter::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DrawMiniMapIcon");

	ADunDefGoblinCopter_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PauseAnimationAfterDeath
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopter::PauseAnimationAfterDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PauseAnimationAfterDeath");

	ADunDefGoblinCopter_PauseAnimationAfterDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayDying
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLoc                         (Parm)

void ADunDefGoblinCopter::PlayDying(class UClass* DamageType, const struct FVector& HitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayDying");

	ADunDefGoblinCopter_PlayDying_Params params;
	params.DamageType = DamageType;
	params.HitLoc = HitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGoblinCopter::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.Died");

	ADunDefGoblinCopter_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DoDoubleShoot
// (Defined, Event, Public)

void ADunDefGoblinCopter::DoDoubleShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DoDoubleShoot");

	ADunDefGoblinCopter_DoDoubleShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DoRightShoot
// (Defined, Event, Public, HasDefaults)

void ADunDefGoblinCopter::DoRightShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DoRightShoot");

	ADunDefGoblinCopter_DoRightShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DoLeftShoot
// (Defined, Event, Public, HasDefaults)

void ADunDefGoblinCopter::DoLeftShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DoLeftShoot");

	ADunDefGoblinCopter_DoLeftShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayDoubleShootAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGoblinCopter::PlayDoubleShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayDoubleShootAnim");

	ADunDefGoblinCopter_PlayDoubleShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayRightShootAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          shootPlayRate                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGoblinCopter::PlayRightShootAnim(float shootPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayRightShootAnim");

	ADunDefGoblinCopter_PlayRightShootAnim_Params params;
	params.shootPlayRate = shootPlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayLeftShootAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          shootPlayRate                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGoblinCopter::PlayLeftShootAnim(float shootPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayLeftShootAnim");

	ADunDefGoblinCopter_PlayLeftShootAnim_Params params;
	params.shootPlayRate = shootPlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.ResetHeldPawnValues
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            thePawn                        (Parm)

void ADunDefGoblinCopter::ResetHeldPawnValues(class ADunDefEnemy* thePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.ResetHeldPawnValues");

	ADunDefGoblinCopter_ResetHeldPawnValues_Params params;
	params.thePawn = thePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DropPawn
// (Defined, Event, Public)

void ADunDefGoblinCopter::DropPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DropPawn");

	ADunDefGoblinCopter_DropPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayDropOffAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGoblinCopter::PlayDropOffAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayDropOffAnim");

	ADunDefGoblinCopter_PlayDropOffAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.SetMovementPhysics
// (Defined, Public)

void ADunDefGoblinCopter::SetMovementPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.SetMovementPhysics");

	ADunDefGoblinCopter_SetMovementPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.CanBeBaseForPawn
// (Defined, Simulated, Public)
// Parameters:
// class APawn*                   aPawn                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGoblinCopter::CanBeBaseForPawn(class APawn* aPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.CanBeBaseForPawn");

	ADunDefGoblinCopter_CanBeBaseForPawn_Params params;
	params.aPawn = aPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.InitNewHeldPawn
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::InitNewHeldPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.InitNewHeldPawn");

	ADunDefGoblinCopter_InitNewHeldPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.SetUpHoldingPawn
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefEnemy*            newHeldPawn                    (Parm)

void ADunDefGoblinCopter::SetUpHoldingPawn(class ADunDefEnemy* newHeldPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.SetUpHoldingPawn");

	ADunDefGoblinCopter_SetUpHoldingPawn_Params params;
	params.newHeldPawn = newHeldPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.SpawnHoldingPawn
// (Defined, Public, HasDefaults)

void ADunDefGoblinCopter::SpawnHoldingPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.SpawnHoldingPawn");

	ADunDefGoblinCopter_SpawnHoldingPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.GetHeldPawnExtraDifficultyOffset
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGoblinCopter::GetHeldPawnExtraDifficultyOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.GetHeldPawnExtraDifficultyOffset");

	ADunDefGoblinCopter_GetHeldPawnExtraDifficultyOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGoblinCopter::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.Tick");

	ADunDefGoblinCopter_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.TurnOnVFX
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::TurnOnVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.TurnOnVFX");

	ADunDefGoblinCopter_TurnOnVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyMaterial
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefGoblinCopter::UpdateDifficultyMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyMaterial");

	ADunDefGoblinCopter_UpdateDifficultyMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopter::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PostBeginPlay");

	ADunDefGoblinCopter_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.ExecReplicatedFunction
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
// bool                           boolParam1                     (OptionalParm, Parm)
// bool                           boolParam2                     (OptionalParm, Parm)
// bool                           boolParam3                     (OptionalParm, Parm)
// struct FString                 stringParam1                   (OptionalParm, Parm, NeedCtorLink)
// class UObject*                 objectParam1                   (OptionalParm, Parm)

void ADunDefGoblinCopter::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.ExecReplicatedFunction");

	ADunDefGoblinCopter_ExecReplicatedFunction_Params params;
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


// Function DunDefSkyCity.DunDefGoblinCopter.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefGoblinCopter::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.ReplicatedEvent");

	ADunDefGoblinCopter_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.SpawnRocket
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 SpawnLoc                       (Parm)

void ADunDefGoblinCopterController::SpawnRocket(const struct FVector& SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.SpawnRocket");

	ADunDefGoblinCopterController_SpawnRocket_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.PlayMissileShootAnim
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGoblinCopterController::PlayMissileShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.PlayMissileShootAnim");

	ADunDefGoblinCopterController_PlayMissileShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinDropRange
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGoblinCopterController::IsWithinDropRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinDropRange");

	ADunDefGoblinCopterController_IsWithinDropRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDropOffLoS
// (Defined, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGoblinCopterController::CheckDropOffLoS(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckDropOffLoS");

	ADunDefGoblinCopterController_CheckDropOffLoS_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.ShootFlare
// (Defined, Public, HasDefaults)

void ADunDefGoblinCopterController::ShootFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.ShootFlare");

	ADunDefGoblinCopterController_ShootFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckForDropOffRange
// (Defined, Public)

void ADunDefGoblinCopterController::CheckForDropOffRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckForDropOffRange");

	ADunDefGoblinCopterController_CheckForDropOffRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckAttackSight
// (Defined, Public)

void ADunDefGoblinCopterController::CheckAttackSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckAttackSight");

	ADunDefGoblinCopterController_CheckAttackSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinAttackRange
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AActor*                  Other                          (Parm)
// float                          AttackRangeOffset              (OptionalParm, Parm)
// bool                           bCheckDeltaZ                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGoblinCopterController::IsWithinAttackRange(class AActor* Other, float AttackRangeOffset, bool bCheckDeltaZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinAttackRange");

	ADunDefGoblinCopterController_IsWithinAttackRange_Params params;
	params.Other = Other;
	params.AttackRangeOffset = AttackRangeOffset;
	params.bCheckDeltaZ = bCheckDeltaZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.DoAttack
// (Defined, Public)

void ADunDefGoblinCopterController::DoAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.DoAttack");

	ADunDefGoblinCopterController_DoAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.FindDropOffPoint
// (Defined, Public)

void ADunDefGoblinCopterController::FindDropOffPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.FindDropOffPoint");

	ADunDefGoblinCopterController_FindDropOffPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.GetTargetMoveToPoint
// (Defined, Public)
// Parameters:
// class AActor*                  moveToActor                    (Parm)

void ADunDefGoblinCopterController::GetTargetMoveToPoint(class AActor* moveToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.GetTargetMoveToPoint");

	ADunDefGoblinCopterController_GetTargetMoveToPoint_Params params;
	params.moveToActor = moveToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.GetZDifference
// (Defined, Public)
// Parameters:
// class AActor*                  zActor                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGoblinCopterController::GetZDifference(class AActor* zActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.GetZDifference");

	ADunDefGoblinCopterController_GetZDifference_Params params;
	params.zActor = zActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDirectReachability
// (Defined, Public)

void ADunDefGoblinCopterController::CheckDirectReachability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckDirectReachability");

	ADunDefGoblinCopterController_CheckDirectReachability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckIndirectReachability
// (Defined, Public)

void ADunDefGoblinCopterController::CheckIndirectReachability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckIndirectReachability");

	ADunDefGoblinCopterController_CheckIndirectReachability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefGoblinCopterController::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.GeneratePathToActor");

	ADunDefGoblinCopterController_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.NavActorReachable
// (Defined, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGoblinCopterController::NavActorReachable(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.NavActorReachable");

	ADunDefGoblinCopterController_NavActorReachable_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.FindNearestNavPointTo
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           bCheckVisible                  (OptionalParm, Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* ADunDefGoblinCopterController::FindNearestNavPointTo(class AActor* A, bool bCheckVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.FindNearestNavPointTo");

	ADunDefGoblinCopterController_FindNearestNavPointTo_Params params;
	params.A = A;
	params.bCheckVisible = bCheckVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.SetMyPawn
// (Defined, Public)

void ADunDefGoblinCopterController::SetMyPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.SetMyPawn");

	ADunDefGoblinCopterController_SetMyPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.Possess
// (Defined, Event, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)
// bool                           bVehicleTransition             (Parm)

void ADunDefGoblinCopterController::Possess(class APawn* inPawn, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.Possess");

	ADunDefGoblinCopterController_Possess_Params params;
	params.inPawn = inPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopterController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.Destroyed");

	ADunDefGoblinCopterController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopterController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.PostBeginPlay");

	ADunDefGoblinCopterController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
