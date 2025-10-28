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

// Function CDT8.DunDefEmitterRadialForce.AllowSpawn
// (Defined, Event, Static, Public)
// Parameters:
// class AActor*                  theArchetype                   (Parm)
// struct FVector                 theLoc                         (Parm)
// struct FRotator                theRot                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefEmitterRadialForce::STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.AllowSpawn");

	ADunDefEmitterRadialForce_AllowSpawn_Params params;
	params.theArchetype = theArchetype;
	params.theLoc = theLoc;
	params.theRot = theRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.StaticGetCloudLifeSpan
// (Defined, Static, Public)
// Parameters:
// float                          lifeSpanStatModifier           (Parm)
// class ADunDefEmitterRadialForce* gCloud                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefEmitterRadialForce::STATIC_StaticGetCloudLifeSpan(float lifeSpanStatModifier, class ADunDefEmitterRadialForce* gCloud)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.StaticGetCloudLifeSpan");

	ADunDefEmitterRadialForce_StaticGetCloudLifeSpan_Params params;
	params.lifeSpanStatModifier = lifeSpanStatModifier;
	params.gCloud = gCloud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.StaticGetAttackRange
// (Defined, Static, Public)
// Parameters:
// float                          attackRangeStatModifier        (Parm)
// class ADunDefEmitterRadialForce* gCloud                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefEmitterRadialForce::STATIC_StaticGetAttackRange(float attackRangeStatModifier, class ADunDefEmitterRadialForce* gCloud)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.StaticGetAttackRange");

	ADunDefEmitterRadialForce_StaticGetAttackRange_Params params;
	params.attackRangeStatModifier = attackRangeStatModifier;
	params.gCloud = gCloud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.StaticGetAttackDamage
// (Defined, Static, Public)
// Parameters:
// float                          damageStatModifier             (Parm)
// class ADunDefEmitterRadialForce* gCloud                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefEmitterRadialForce::STATIC_StaticGetAttackDamage(float damageStatModifier, class ADunDefEmitterRadialForce* gCloud)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.StaticGetAttackDamage");

	ADunDefEmitterRadialForce_StaticGetAttackDamage_Params params;
	params.damageStatModifier = damageStatModifier;
	params.gCloud = gCloud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.StaticGetAttackRate
// (Defined, Static, Public)
// Parameters:
// float                          attackRateStatModifier         (Parm)
// class ADunDefEmitterRadialForce* gCloud                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefEmitterRadialForce::STATIC_StaticGetAttackRate(float attackRateStatModifier, class ADunDefEmitterRadialForce* gCloud)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.StaticGetAttackRate");

	ADunDefEmitterRadialForce_StaticGetAttackRate_Params params;
	params.attackRateStatModifier = attackRateStatModifier;
	params.gCloud = gCloud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.UpdateEffectInterval
// (Defined, Public)

void ADunDefEmitterRadialForce::UpdateEffectInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.UpdateEffectInterval");

	ADunDefEmitterRadialForce_UpdateEffectInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.GetDamageMult
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefEmitterRadialForce::GetDamageMult()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.GetDamageMult");

	ADunDefEmitterRadialForce_GetDamageMult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.GetDamageCauser
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ADunDefEmitterRadialForce::GetDamageCauser()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.GetDamageCauser");

	ADunDefEmitterRadialForce_GetDamageCauser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.ScaleRadiusEffect
// (Defined, Simulated, Public, HasDefaults)

void ADunDefEmitterRadialForce::ScaleRadiusEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.ScaleRadiusEffect");

	ADunDefEmitterRadialForce_ScaleRadiusEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefEmitterRadialForce::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.ScaleForHeroModifiers");

	ADunDefEmitterRadialForce_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.AllowHeroGUID
// (Defined, Public)
// Parameters:
// int                            GUID1                          (Parm)
// int                            GUID2                          (Parm)
// int                            GUID3                          (Parm)
// int                            GUID4                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefEmitterRadialForce::AllowHeroGUID(int GUID1, int GUID2, int GUID3, int GUID4)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.AllowHeroGUID");

	ADunDefEmitterRadialForce_AllowHeroGUID_Params params;
	params.GUID1 = GUID1;
	params.GUID2 = GUID2;
	params.GUID3 = GUID3;
	params.GUID4 = GUID4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.InitializeDD
// (Defined, Simulated, Public)

void ADunDefEmitterRadialForce::InitializeDD()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.InitializeDD");

	ADunDefEmitterRadialForce_InitializeDD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.SetLifeSpanTimeout
// (Defined, Simulated, Public)

void ADunDefEmitterRadialForce::SetLifeSpanTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.SetLifeSpanTimeout");

	ADunDefEmitterRadialForce_SetLifeSpanTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefEmitterRadialForce::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.PostBeginPlay");

	ADunDefEmitterRadialForce_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.StartEffectTimer
// (Defined, Simulated, Event, Public)

void ADunDefEmitterRadialForce::StartEffectTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.StartEffectTimer");

	ADunDefEmitterRadialForce_StartEffectTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.GetTargetDesirability
// (Defined, Simulated, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> aTarget                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefEmitterRadialForce::GetTargetDesirability(const TScriptInterface<class UDunDefTargetableInterface>& aTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.GetTargetDesirability");

	ADunDefEmitterRadialForce_GetTargetDesirability_Params params;
	params.aTarget = aTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.CheckValidAngle
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  Victim                         (Parm)
// struct FVector                 Origin                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefEmitterRadialForce::CheckValidAngle(class AActor* Victim, const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.CheckValidAngle");

	ADunDefEmitterRadialForce_CheckValidAngle_Params params;
	params.Victim = Victim;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.EffectTimer
// (Defined, Simulated, Public)

void ADunDefEmitterRadialForce::EffectTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.EffectTimer");

	ADunDefEmitterRadialForce_EffectTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.ScaleDamageForNumberOfPlayers
// (Defined, Public)

void ADunDefEmitterRadialForce::ScaleDamageForNumberOfPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.ScaleDamageForNumberOfPlayers");

	ADunDefEmitterRadialForce_ScaleDamageForNumberOfPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.GetRadiusDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          theBaseDamage                  (Parm)
// class AActor*                  Victim                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefEmitterRadialForce::GetRadiusDamage(float theBaseDamage, class AActor* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.GetRadiusDamage");

	ADunDefEmitterRadialForce_GetRadiusDamage_Params params;
	params.theBaseDamage = theBaseDamage;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.HurtRadius
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          BaseDamage                     (Parm)
// float                          DamageRadius                   (Parm)
// class UClass*                  DamageType                     (Parm)
// float                          Momentum                       (Parm)
// struct FVector                 HurtOrigin                     (Parm)
// class AActor*                  IgnoredActor                   (OptionalParm, Parm)
// class AController*             InstigatedByController         (OptionalParm, Parm)
// unsigned long                  bDoFullDamage                  (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefEmitterRadialForce::HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.HurtRadius");

	ADunDefEmitterRadialForce_HurtRadius_Params params;
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


// Function CDT8.DunDefEmitterRadialForce.ApplyRadialForce
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class AActor*                  Target                         (Parm)

void ADunDefEmitterRadialForce::ApplyRadialForce(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.ApplyRadialForce");

	ADunDefEmitterRadialForce_ApplyRadialForce_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.IsClassOnIgnoreList
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  ActorClass                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefEmitterRadialForce::IsClassOnIgnoreList(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.IsClassOnIgnoreList");

	ADunDefEmitterRadialForce_IsClassOnIgnoreList_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefEmitterRadialForce.FadeOut
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          theLightFadeOutTime            (OptionalParm, Parm)

void ADunDefEmitterRadialForce::FadeOut(float theLightFadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.FadeOut");

	ADunDefEmitterRadialForce_FadeOut_Params params;
	params.theLightFadeOutTime = theLightFadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.ActorTouchedCenter
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPawn*             P                              (Parm)

void ADunDefEmitterRadialForce::ActorTouchedCenter(class ADunDefPawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.ActorTouchedCenter");

	ADunDefEmitterRadialForce_ActorTouchedCenter_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefEmitterRadialForce::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.ReplicatedEvent");

	ADunDefEmitterRadialForce_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefEmitterRadialForce.NotifyWeapon
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Target                         (Parm)

void ADunDefEmitterRadialForce::NotifyWeapon(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefEmitterRadialForce.NotifyWeapon");

	ADunDefEmitterRadialForce_NotifyWeapon_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_NessieLauncher.NeedsReload
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefWeapon_NessieLauncher::NeedsReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.NeedsReload");

	ADunDefWeapon_NessieLauncher_NeedsReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefWeapon_NessieLauncher.FireAmmunition
// (Defined, Simulated, Public, HasDefaults)

void ADunDefWeapon_NessieLauncher::FireAmmunition()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.FireAmmunition");

	ADunDefWeapon_NessieLauncher_FireAmmunition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_NessieLauncher.EnemyDiedFromSource
// (Defined, Simulated, Public)

void ADunDefWeapon_NessieLauncher::EnemyDiedFromSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.EnemyDiedFromSource");

	ADunDefWeapon_NessieLauncher_EnemyDiedFromSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_NessieLauncher.HasAnyClipAmmo
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefWeapon_NessieLauncher::HasAnyClipAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.HasAnyClipAmmo");

	ADunDefWeapon_NessieLauncher_HasAnyClipAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefWeapon_NessieLauncher.SpawnExplodingNessie
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// int                            Ammo                           (Parm)

void ADunDefWeapon_NessieLauncher::SpawnExplodingNessie(int Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.SpawnExplodingNessie");

	ADunDefWeapon_NessieLauncher_SpawnExplodingNessie_Params params;
	params.Ammo = Ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_NessieLauncher.GetAmmoPercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWeapon_NessieLauncher::GetAmmoPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.GetAmmoPercent");

	ADunDefWeapon_NessieLauncher_GetAmmoPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefWeapon_NessieLauncher.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefWeapon_NessieLauncher::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.PostBeginPlay");

	ADunDefWeapon_NessieLauncher_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_NessieLauncher.GetTotalAmmo
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefWeapon_NessieLauncher::GetTotalAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.GetTotalAmmo");

	ADunDefWeapon_NessieLauncher_GetTotalAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT8.DunDefWeapon_NessieLauncher.Reload
// (Defined, Simulated, Public)

void ADunDefWeapon_NessieLauncher::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_NessieLauncher.Reload");

	ADunDefWeapon_NessieLauncher_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefExplodingActor.SetRandomColor
// (Defined, Simulated, Public, HasDefaults)

void ADunDefExplodingActor::SetRandomColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefExplodingActor.SetRandomColor");

	ADunDefExplodingActor_SetRandomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefExplodingActor.SetMultiplier
// (Defined, Simulated, Public)
// Parameters:
// float                          multi                          (Parm)

void ADunDefExplodingActor::SetMultiplier(float multi)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefExplodingActor.SetMultiplier");

	ADunDefExplodingActor_SetMultiplier_Params params;
	params.multi = multi;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefExplodingActor.SelfDestruct
// (Defined, Public, HasDefaults)

void ADunDefExplodingActor::SelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefExplodingActor.SelfDestruct");

	ADunDefExplodingActor_SelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefExplodingActor.SetActiveTime
// (Defined, Public)

void ADunDefExplodingActor::SetActiveTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefExplodingActor.SetActiveTime");

	ADunDefExplodingActor_SetActiveTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefExplodingActor.SetHealth
// (Defined, Simulated, Public)

void ADunDefExplodingActor::SetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefExplodingActor.SetHealth");

	ADunDefExplodingActor_SetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefExplodingActor.SetPokeRadius
// (Defined, Simulated, Public)

void ADunDefExplodingActor::SetPokeRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefExplodingActor.SetPokeRadius");

	ADunDefExplodingActor_SetPokeRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefExplodingActor.FlyForward
// (Defined, Simulated, Public)

void ADunDefExplodingActor::FlyForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefExplodingActor.FlyForward");

	ADunDefExplodingActor_FlyForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefExplodingActor.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefExplodingActor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefExplodingActor.PostBeginPlay");

	ADunDefExplodingActor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefWeapon_HoloSword::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.Tick");

	ADunDefWeapon_HoloSword_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.TeleportToOldestHolo
// (Defined, Simulated, Public)

void ADunDefWeapon_HoloSword::TeleportToOldestHolo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.TeleportToOldestHolo");

	ADunDefWeapon_HoloSword_TeleportToOldestHolo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.DestroyOldestHolo
// (Defined, Simulated, Public)

void ADunDefWeapon_HoloSword::DestroyOldestHolo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.DestroyOldestHolo");

	ADunDefWeapon_HoloSword_DestroyOldestHolo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.SpawnHolo
// (Defined, Simulated, Public, HasDefaults)

void ADunDefWeapon_HoloSword::SpawnHolo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.SpawnHolo");

	ADunDefWeapon_HoloSword_SpawnHolo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.EnableBlocking
// (Defined, Simulated, Public)

void ADunDefWeapon_HoloSword::EnableBlocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.EnableBlocking");

	ADunDefWeapon_HoloSword_EnableBlocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.HandleCloneAttacks
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  ishawk                         (OptionalParm, Parm)

void ADunDefWeapon_HoloSword::HandleCloneAttacks(unsigned long ishawk)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.HandleCloneAttacks");

	ADunDefWeapon_HoloSword_HandleCloneAttacks_Params params;
	params.ishawk = ishawk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.DoSwinging
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bForceSwing                    (OptionalParm, Parm)
// unsigned long                  bOverrideExtent                (OptionalParm, Parm)
// struct FVector                 extentOverride                 (OptionalParm, Parm)
// float                          damageOverride                 (OptionalParm, Parm)
// float                          momentumOverride               (OptionalParm, Parm)
// unsigned long                  scaleMomentumByMass            (OptionalParm, Parm)
// float                          scaleMomentumByMassExponent    (OptionalParm, Parm)

void ADunDefWeapon_HoloSword::DoSwinging(unsigned long bForceSwing, unsigned long bOverrideExtent, const struct FVector& extentOverride, float damageOverride, float momentumOverride, unsigned long scaleMomentumByMass, float scaleMomentumByMassExponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.DoSwinging");

	ADunDefWeapon_HoloSword_DoSwinging_Params params;
	params.bForceSwing = bForceSwing;
	params.bOverrideExtent = bOverrideExtent;
	params.extentOverride = extentOverride;
	params.damageOverride = damageOverride;
	params.momentumOverride = momentumOverride;
	params.scaleMomentumByMass = scaleMomentumByMass;
	params.scaleMomentumByMassExponent = scaleMomentumByMassExponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.DoMeleeAttack
// (Defined, Simulated, Public)

void ADunDefWeapon_HoloSword::DoMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.DoMeleeAttack");

	ADunDefWeapon_HoloSword_DoMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_HoloSword.ExecReplicatedFunction
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

void ADunDefWeapon_HoloSword::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_HoloSword.ExecReplicatedFunction");

	ADunDefWeapon_HoloSword_ExecReplicatedFunction_Params params;
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


// Function CDT8.DunDefWeapon_Minigun.GraduallyReturnMovementSpeed
// (Defined, Simulated, Public)
// Parameters:
// float                          Delta                          (Parm)

void ADunDefWeapon_Minigun::GraduallyReturnMovementSpeed(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_Minigun.GraduallyReturnMovementSpeed");

	ADunDefWeapon_Minigun_GraduallyReturnMovementSpeed_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT8.DunDefWeapon_Minigun.StartMSReturn
// (Defined, Simulated, Public)

void ADunDefWeapon_Minigun::StartMSReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT8.DunDefWeapon_Minigun.StartMSReturn");

	ADunDefWeapon_Minigun_StartMSReturn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
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
