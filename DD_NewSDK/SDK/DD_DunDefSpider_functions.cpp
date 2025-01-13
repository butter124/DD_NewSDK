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

// Function DunDefSpider.DunDefWebProjectile.GetBoostedTargets
// (Public, HasOutParms)
// Parameters:
// TArray<class APawn*>           boostedTargets                 (Parm, OutParm, NeedCtorLink)

void ADunDefWebProjectile::GetBoostedTargets(TArray<class APawn*>* boostedTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.GetBoostedTargets");

	ADunDefWebProjectile_GetBoostedTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (boostedTargets != nullptr)
		*boostedTargets = params.boostedTargets;
}


// Function DunDefSpider.DunDefWebProjectile.NotifyOfBoostedRemoval
// (Public)
// Parameters:
// class APawn*                   removedBoostee                 (Parm)

void ADunDefWebProjectile::NotifyOfBoostedRemoval(class APawn* removedBoostee)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.NotifyOfBoostedRemoval");

	ADunDefWebProjectile_NotifyOfBoostedRemoval_Params params;
	params.removedBoostee = removedBoostee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.GetPawnBoostAmount
// (Defined, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWebProjectile::GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.GetPawnBoostAmount");

	ADunDefWebProjectile_GetPawnBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefWebProjectile.HasPawnBoostingType
// (Defined, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefWebProjectile::HasPawnBoostingType(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.HasPawnBoostingType");

	ADunDefWebProjectile_HasPawnBoostingType_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefWebProjectile.Destroyed
// (Defined, Simulated, Public)

void ADunDefWebProjectile::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.Destroyed");

	ADunDefWebProjectile_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.RemoveWebEffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  theAct                         (Parm)

void ADunDefWebProjectile::RemoveWebEffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.RemoveWebEffect");

	ADunDefWebProjectile_RemoveWebEffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.AddWebEffect
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class AActor*                  theAct                         (Parm)

void ADunDefWebProjectile::AddWebEffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.AddWebEffect");

	ADunDefWebProjectile_AddWebEffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.CanAddWebAffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  theAct                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefWebProjectile::CanAddWebAffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.CanAddWebAffect");

	ADunDefWebProjectile_CanAddWebAffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefWebProjectile.EndRadiusDamage
// (Defined, Simulated, Public)

void ADunDefWebProjectile::EndRadiusDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.EndRadiusDamage");

	ADunDefWebProjectile_EndRadiusDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.AffectVictim
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Victim                         (Parm)

void ADunDefWebProjectile::AffectVictim(class AActor* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.AffectVictim");

	ADunDefWebProjectile_AffectVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.StartRadiusDamage
// (Defined, Simulated, Public)

void ADunDefWebProjectile::StartRadiusDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.StartRadiusDamage");

	ADunDefWebProjectile_StartRadiusDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.SetHomingTarget
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  NewTarget                      (Parm)
// struct FVector                 HomingLocation                 (OptionalParm, Parm)

void ADunDefWebProjectile::SetHomingTarget(class AActor* NewTarget, const struct FVector& HomingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.SetHomingTarget");

	ADunDefWebProjectile_SetHomingTarget_Params params;
	params.NewTarget = NewTarget;
	params.HomingLocation = HomingLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.GetTowerBoostAmount
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   checkBoostType                 (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWebProjectile::GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> checkBoostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.GetTowerBoostAmount");

	ADunDefWebProjectile_GetTowerBoostAmount_Params params;
	params.checkBoostType = checkBoostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefWebProjectile.HasTowerBoostingType
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   checkType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefWebProjectile::HasTowerBoostingType(TEnumAsByte<ETowerBoostType> checkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.HasTowerBoostingType");

	ADunDefWebProjectile_HasTowerBoostingType_Params params;
	params.checkType = checkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefWebProjectile.GetTowerBoostingTarget
// (Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> ADunDefWebProjectile::GetTowerBoostingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.GetTowerBoostingTarget");

	ADunDefWebProjectile_GetTowerBoostingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefWebProjectile.EndAttachment
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// unsigned long                  bClearList                     (Parm)

void ADunDefWebProjectile::EndAttachment(unsigned long bClearList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.EndAttachment");

	ADunDefWebProjectile_EndAttachment_Params params;
	params.bClearList = bClearList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.SetScaleTime
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bDoScaleUp                     (OptionalParm, Parm)

void ADunDefWebProjectile::SetScaleTime(unsigned long bDoScaleUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.SetScaleTime");

	ADunDefWebProjectile_SetScaleTime_Params params;
	params.bDoScaleUp = bDoScaleUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.AddNewAffected
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  newAffected                    (Parm)

void ADunDefWebProjectile::AddNewAffected(class AActor* newAffected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.AddNewAffected");

	ADunDefWebProjectile_AddNewAffected_Params params;
	params.newAffected = newAffected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.Expire
// (Defined, Simulated, Public)

void ADunDefWebProjectile::Expire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.Expire");

	ADunDefWebProjectile_Expire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.Explode
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefWebProjectile::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.Explode");

	ADunDefWebProjectile_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.UpdateAttachStatus
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  updateActor                    (Parm)

void ADunDefWebProjectile::UpdateAttachStatus(class AActor* updateActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.UpdateAttachStatus");

	ADunDefWebProjectile_UpdateAttachStatus_Params params;
	params.updateActor = updateActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.Landed
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  FloorActor                     (Parm)

void ADunDefWebProjectile::Landed(const struct FVector& HitNormal, class AActor* FloorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.Landed");

	ADunDefWebProjectile_Landed_Params params;
	params.HitNormal = HitNormal;
	params.FloorActor = FloorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.DoHoming
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefWebProjectile::DoHoming(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.DoHoming");

	ADunDefWebProjectile_DoHoming_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.Tick
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefWebProjectile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.Tick");

	ADunDefWebProjectile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefWebProjectile::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.PostBeginPlay");

	ADunDefWebProjectile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefWebProjectile.ExecReplicatedFunction
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

void ADunDefWebProjectile::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefWebProjectile.ExecReplicatedFunction");

	ADunDefWebProjectile_ExecReplicatedFunction_Params params;
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


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefCrystalCore_PortalDefense::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.DrawMyHUD");

	ADunDefCrystalCore_PortalDefense_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.MakeInvincible
// (Defined, Public)

void ADunDefCrystalCore_PortalDefense::MakeInvincible()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.MakeInvincible");

	ADunDefCrystalCore_PortalDefense_MakeInvincible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.EndWarpInvincibility
// (Defined, Public)

void ADunDefCrystalCore_PortalDefense::EndWarpInvincibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.EndWarpInvincibility");

	ADunDefCrystalCore_PortalDefense_EndWarpInvincibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.OnTeleport
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Teleport*        Action                         (Parm)

void ADunDefCrystalCore_PortalDefense::OnTeleport(class USeqAct_Teleport* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.OnTeleport");

	ADunDefCrystalCore_PortalDefense_OnTeleport_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.UpdateCrystalCore
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  locked                         (OptionalParm, Parm)

void ADunDefCrystalCore_PortalDefense::UpdateCrystalCore(unsigned long locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.UpdateCrystalCore");

	ADunDefCrystalCore_PortalDefense_UpdateCrystalCore_Params params;
	params.locked = locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.TakeDamage
// (Event, HasOptionalParms, Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void ADunDefCrystalCore_PortalDefense::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.TakeDamage");

	ADunDefCrystalCore_PortalDefense_TakeDamage_Params params;
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


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.PlayWarpedFX
// (Defined, Simulated, Public)

void ADunDefCrystalCore_PortalDefense::PlayWarpedFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.PlayWarpedFX");

	ADunDefCrystalCore_PortalDefense_PlayWarpedFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.HandleCoreTouched
// (Defined, Public)
// Parameters:
// class AActor*                  TouchingActor                  (Parm)

void ADunDefCrystalCore_PortalDefense::HandleCoreTouched(class AActor* TouchingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.HandleCoreTouched");

	ADunDefCrystalCore_PortalDefense_HandleCoreTouched_Params params;
	params.TouchingActor = TouchingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.Bump
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitNormal                      (Parm)

void ADunDefCrystalCore_PortalDefense::Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.Bump");

	ADunDefCrystalCore_PortalDefense_Bump_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.Touch
// (Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefCrystalCore_PortalDefense::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.Touch");

	ADunDefCrystalCore_PortalDefense_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefCrystalCore_PortalDefense::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.PostBeginPlay");

	ADunDefCrystalCore_PortalDefense_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefCrystalCore_PortalDefense.ExecReplicatedFunction
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

void ADunDefCrystalCore_PortalDefense::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefCrystalCore_PortalDefense.ExecReplicatedFunction");

	ADunDefCrystalCore_PortalDefense_ExecReplicatedFunction_Params params;
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


// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyEndWarpInvincibility
// (Defined, Public)

void ADunDefGRI_PortalDefense::NotifyEndWarpInvincibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_PortalDefense.NotifyEndWarpInvincibility");

	ADunDefGRI_PortalDefense_NotifyEndWarpInvincibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyWarpInvincibility
// (Defined, Public)

void ADunDefGRI_PortalDefense::NotifyWarpInvincibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_PortalDefense.NotifyWarpInvincibility");

	ADunDefGRI_PortalDefense_NotifyWarpInvincibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_PortalDefense.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefGRI_PortalDefense::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_PortalDefense.DrawMyHUD");

	ADunDefGRI_PortalDefense_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyPortalHit
// (Defined, Public)

void ADunDefGRI_PortalDefense::NotifyPortalHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_PortalDefense.NotifyPortalHit");

	ADunDefGRI_PortalDefense_NotifyPortalHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_PortalDefense.SetInCombatPhase
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  inCombatPhase                  (Parm)

void ADunDefGRI_PortalDefense::SetInCombatPhase(unsigned long inCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_PortalDefense.SetInCombatPhase");

	ADunDefGRI_PortalDefense_SetInCombatPhase_Params params;
	params.inCombatPhase = inCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_PortalDefense.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGRI_PortalDefense::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_PortalDefense.PostBeginPlay");

	ADunDefGRI_PortalDefense_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.PlayDying
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLoc                         (Parm)

void ADunDefSpider::PlayDying(class UClass* DamageType, const struct FVector& HitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.PlayDying");

	ADunDefSpider_PlayDying_Params params;
	params.DamageType = DamageType;
	params.HitLoc = HitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSpider::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.Died");

	ADunDefSpider_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpider.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefSpider::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.Tick");

	ADunDefSpider_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.SetWebChargeTime
// (Defined, Simulated, Public)
// Parameters:
// float                          NewWebChargeTime               (Parm)

void ADunDefSpider::SetWebChargeTime(float NewWebChargeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.SetWebChargeTime");

	ADunDefSpider_SetWebChargeTime_Params params;
	params.NewWebChargeTime = NewWebChargeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.UpdateWebParticle
// (Defined, Simulated, Public)
// Parameters:
// float                          NewScale                       (Parm)

void ADunDefSpider::UpdateWebParticle(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.UpdateWebParticle");

	ADunDefSpider_UpdateWebParticle_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.PlayMeleeAttackAnimation
// (Defined, Simulated, Public)
// Parameters:
// int                            AnimationIndex                 (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpider::PlayMeleeAttackAnimation(int AnimationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.PlayMeleeAttackAnimation");

	ADunDefSpider_PlayMeleeAttackAnimation_Params params;
	params.AnimationIndex = AnimationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpider.ShutDownWebCharge
// (Defined, Simulated, Public)

void ADunDefSpider::ShutDownWebCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.ShutDownWebCharge");

	ADunDefSpider_ShutDownWebCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.ShootWeb
// (Defined, Event, Public)

void ADunDefSpider::ShootWeb()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.ShootWeb");

	ADunDefSpider_ShootWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.MeleeSwingEnd
// (Defined, Event, Public)

void ADunDefSpider::MeleeSwingEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.MeleeSwingEnd");

	ADunDefSpider_MeleeSwingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.MeleeSwingStart
// (Defined, Event, Public)

void ADunDefSpider::MeleeSwingStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.MeleeSwingStart");

	ADunDefSpider_MeleeSwingStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.GetMeleeSwingLocation
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefSpider::GetMeleeSwingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.GetMeleeSwingLocation");

	ADunDefSpider_GetMeleeSwingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpider.GetWebProjectileLocAndRot
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FVector                 Position                       (Parm, OutParm)
// struct FRotator                Orientation                    (Parm, OutParm)

void ADunDefSpider::GetWebProjectileLocAndRot(struct FVector* Position, struct FRotator* Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.GetWebProjectileLocAndRot");

	ADunDefSpider_GetWebProjectileLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
}


// Function DunDefSpider.DunDefSpider.PlayAttackAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpider::PlayAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.PlayAttackAnimation");

	ADunDefSpider_PlayAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpider.PlayWebChargeAnim
// (Defined, Simulated, Public)

void ADunDefSpider::PlayWebChargeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.PlayWebChargeAnim");

	ADunDefSpider_PlayWebChargeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.PlayWebShootAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpider::PlayWebShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.PlayWebShootAnim");

	ADunDefSpider_PlayWebShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpider.PlayLungeAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpider::PlayLungeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.PlayLungeAnimation");

	ADunDefSpider_PlayLungeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpider.UpdateDifficultyValues
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  UpdateMaterial                 (OptionalParm, Parm)
// unsigned long                  onlyDynamicValues              (OptionalParm, Parm)

void ADunDefSpider::UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.UpdateDifficultyValues");

	ADunDefSpider_UpdateDifficultyValues_Params params;
	params.UpdateMaterial = UpdateMaterial;
	params.onlyDynamicValues = onlyDynamicValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.PlaySpawnEffect
// (Defined, Simulated, Public)

void ADunDefSpider::PlaySpawnEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.PlaySpawnEffect");

	ADunDefSpider_PlaySpawnEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.ClearSpawnEffect
// (Defined, Public)

void ADunDefSpider::ClearSpawnEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.ClearSpawnEffect");

	ADunDefSpider_ClearSpawnEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefSpider::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.ReplicatedEvent");

	ADunDefSpider_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpider.ExecReplicatedFunction
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

void ADunDefSpider::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.ExecReplicatedFunction");

	ADunDefSpider_ExecReplicatedFunction_Params params;
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


// Function DunDefSpider.DunDefSpider.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefSpider::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpider.PostBeginPlay");

	ADunDefSpider_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefMapInfo_PortalDefense.GetMaxAllowedCoreHits
// (Defined, Public)
// Parameters:
// int                            difficulty                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UDunDefMapInfo_PortalDefense::GetMaxAllowedCoreHits(int difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefMapInfo_PortalDefense.GetMaxAllowedCoreHits");

	UDunDefMapInfo_PortalDefense_GetMaxAllowedCoreHits_Params params;
	params.difficulty = difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.GameInfo_PortalDefense.GetGameScaleMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameInfo_PortalDefense::GetGameScaleMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_PortalDefense.GetGameScaleMultiplier");

	AGameInfo_PortalDefense_GetGameScaleMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.GameInfo_PortalDefense.GetGameDamageMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameInfo_PortalDefense::GetGameDamageMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_PortalDefense.GetGameDamageMultiplier");

	AGameInfo_PortalDefense_GetGameDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.GameInfo_PortalDefense.GetGameHealthMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameInfo_PortalDefense::GetGameHealthMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_PortalDefense.GetGameHealthMultiplier");

	AGameInfo_PortalDefense_GetGameHealthMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.GameInfo_PortalDefense.UpdateEnemyMultipliers
// (Defined, Public, HasDefaults)
// Parameters:
// float                          DmgPct                         (Parm)

void AGameInfo_PortalDefense::UpdateEnemyMultipliers(float DmgPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_PortalDefense.UpdateEnemyMultipliers");

	AGameInfo_PortalDefense_UpdateEnemyMultipliers_Params params;
	params.DmgPct = DmgPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.GameInfo_PortalDefense.SetWaveNumber
// (Defined, Public)
// Parameters:
// int                            theWaveNumber                  (Parm)

void AGameInfo_PortalDefense::SetWaveNumber(int theWaveNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_PortalDefense.SetWaveNumber");

	AGameInfo_PortalDefense_SetWaveNumber_Params params;
	params.theWaveNumber = theWaveNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.GameInfo_PortalDefense.DoWaveSkipping
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bAllowArbritraryWaveSkipping   (OptionalParm, Parm)

void AGameInfo_PortalDefense::DoWaveSkipping(unsigned long bAllowArbritraryWaveSkipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_PortalDefense.DoWaveSkipping");

	AGameInfo_PortalDefense_DoWaveSkipping_Params params;
	params.bAllowArbritraryWaveSkipping = bAllowArbritraryWaveSkipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.GameInfo_PortalDefense.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AGameInfo_PortalDefense::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_PortalDefense.PostBeginPlay");

	AGameInfo_PortalDefense_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_VDay.DrawExtraEnemyMinimapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)
// class ADunDefEnemy*            Enemy                          (Parm)

void ADunDefGRI_VDay::DrawExtraEnemyMinimapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap, class ADunDefEnemy* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_VDay.DrawExtraEnemyMinimapIcon");

	ADunDefGRI_VDay_DrawExtraEnemyMinimapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_VDay.GenderSpawned
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            enemyActor                     (Parm)
// unsigned long                  isBoy                          (Parm)

void ADunDefGRI_VDay::GenderSpawned(class ADunDefEnemy* enemyActor, unsigned long isBoy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_VDay.GenderSpawned");

	ADunDefGRI_VDay_GenderSpawned_Params params;
	params.enemyActor = enemyActor;
	params.isBoy = isBoy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_VDay.PairMatched
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 Loc1                           (Parm)
// struct FVector                 Loc2                           (Parm)
// class ADunDefEnemy*            enemyArch                      (Parm)

void ADunDefGRI_VDay::PairMatched(const struct FVector& Loc1, const struct FVector& Loc2, class ADunDefEnemy* enemyArch)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_VDay.PairMatched");

	ADunDefGRI_VDay_PairMatched_Params params;
	params.Loc1 = Loc1;
	params.Loc2 = Loc2;
	params.enemyArch = enemyArch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefGRI_VDay.ExecReplicatedFunction
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

void ADunDefGRI_VDay::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefGRI_VDay.ExecReplicatedFunction");

	ADunDefGRI_VDay_ExecReplicatedFunction_Params params;
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


// Function DunDefSpider.DunDefSpiderController.GetToolTipAttackRange
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderController::GetToolTipAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.GetToolTipAttackRange");

	ADunDefSpiderController_GetToolTipAttackRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderController.GetTargetableRange
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bCheckAttackRange              (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderController::GetTargetableRange(unsigned long bCheckAttackRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.GetTargetableRange");

	ADunDefSpiderController_GetTargetableRange_Params params;
	params.bCheckAttackRange = bCheckAttackRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderController.GetAttackDamage
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefSpiderController::GetAttackDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.GetAttackDamage");

	ADunDefSpiderController_GetAttackDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderController.CancelCurrentTarget
// (Public)
// Parameters:
// int                            Reason                         (Parm)

void ADunDefSpiderController::CancelCurrentTarget(int Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.CancelCurrentTarget");

	ADunDefSpiderController_CancelCurrentTarget_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.SetMyQueen
// (Defined, Public)
// Parameters:
// class ADunDefSpiderQueenController* newQueen                       (Parm)

void ADunDefSpiderController::SetMyQueen(class ADunDefSpiderQueenController* newQueen)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.SetMyQueen");

	ADunDefSpiderController_SetMyQueen_Params params;
	params.newQueen = newQueen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.NotifyQueenOfDeath
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ADunDefSpiderController::NotifyQueenOfDeath(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.NotifyQueenOfDeath");

	ADunDefSpiderController_NotifyQueenOfDeath_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ADunDefSpiderController::PawnDied(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.PawnDied");

	ADunDefSpiderController_PawnDied_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.IsWithinAttackRange
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// float                          AttackRangeOffset              (OptionalParm, Parm)
// unsigned long                  bCheckDeltaZ                   (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSpiderController::IsWithinAttackRange(class AActor* Other, float AttackRangeOffset, unsigned long bCheckDeltaZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.IsWithinAttackRange");

	ADunDefSpiderController_IsWithinAttackRange_Params params;
	params.Other = Other;
	params.AttackRangeOffset = AttackRangeOffset;
	params.bCheckDeltaZ = bCheckDeltaZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderController.ShootWeb
// (Defined, Public, HasDefaults)

void ADunDefSpiderController::ShootWeb()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.ShootWeb");

	ADunDefSpiderController_ShootWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.GetAttackRange
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderController::GetAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.GetAttackRange");

	ADunDefSpiderController_GetAttackRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderController.DoLungeAttack
// (Defined, Public)

void ADunDefSpiderController::DoLungeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.DoLungeAttack");

	ADunDefSpiderController_DoLungeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.DoWebAttack
// (Defined, Public)

void ADunDefSpiderController::DoWebAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.DoWebAttack");

	ADunDefSpiderController_DoWebAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.CheckForCustomAttacks
// (Defined, Public)

void ADunDefSpiderController::CheckForCustomAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.CheckForCustomAttacks");

	ADunDefSpiderController_CheckForCustomAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.AllowWebAttack
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSpiderController::AllowWebAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.AllowWebAttack");

	ADunDefSpiderController_AllowWebAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderController.AddToSwingHurtList
// (Defined, Public)
// Parameters:
// class AActor*                  newEntry                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSpiderController::AddToSwingHurtList(class AActor* newEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.AddToSwingHurtList");

	ADunDefSpiderController_AddToSwingHurtList_Params params;
	params.newEntry = newEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderController.EndMeleeSwing
// (Defined, Public)

void ADunDefSpiderController::EndMeleeSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.EndMeleeSwing");

	ADunDefSpiderController_EndMeleeSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.StartMeleeSwing
// (Public)

void ADunDefSpiderController::StartMeleeSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.StartMeleeSwing");

	ADunDefSpiderController_StartMeleeSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderController.GetWebChargeTime
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderController::GetWebChargeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.GetWebChargeTime");

	ADunDefSpiderController_GetWebChargeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderController.NotifyBump
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitNormal                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSpiderController::NotifyBump(class AActor* Other, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderController.NotifyBump");

	ADunDefSpiderController_NotifyBump_Params params;
	params.Other = Other;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueenController.SetTarget
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class AActor*                  NewTarget                      (Parm)
// unsigned long                  bDontClearIgnoreList           (OptionalParm, Parm)

void ADunDefSpiderQueenController::SetTarget(class AActor* NewTarget, unsigned long bDontClearIgnoreList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.SetTarget");

	ADunDefSpiderQueenController_SetTarget_Params params;
	params.NewTarget = NewTarget;
	params.bDontClearIgnoreList = bDontClearIgnoreList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.ShootWeb
// (Defined, Public, HasDefaults)

void ADunDefSpiderQueenController::ShootWeb()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.ShootWeb");

	ADunDefSpiderQueenController_ShootWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.GetWebChargeTime
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderQueenController::GetWebChargeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.GetWebChargeTime");

	ADunDefSpiderQueenController_GetWebChargeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueenController.DoWebAttack
// (Defined, Public)

void ADunDefSpiderQueenController::DoWebAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.DoWebAttack");

	ADunDefSpiderQueenController_DoWebAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.NotifyBabyDeath
// (Defined, Public)
// Parameters:
// class ADunDefSpider*           DeadBaby                       (Parm)

void ADunDefSpiderQueenController::NotifyBabyDeath(class ADunDefSpider* DeadBaby)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.NotifyBabyDeath");

	ADunDefSpiderQueenController_NotifyBabyDeath_Params params;
	params.DeadBaby = DeadBaby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.GetAttackInterval
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Victim                         (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderQueenController::GetAttackInterval(class AActor* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.GetAttackInterval");

	ADunDefSpiderQueenController_GetAttackInterval_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueenController.CheckForCustomAttacks
// (Defined, Public)

void ADunDefSpiderQueenController::CheckForCustomAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.CheckForCustomAttacks");

	ADunDefSpiderQueenController_CheckForCustomAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.FindValidBabyShootLoc
// (Defined, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefSpiderQueenController::FindValidBabyShootLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.FindValidBabyShootLoc");

	ADunDefSpiderQueenController_FindValidBabyShootLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueenController.SpawnBaby
// (Defined, Public, HasDefaults)

void ADunDefSpiderQueenController::SpawnBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.SpawnBaby");

	ADunDefSpiderQueenController_SpawnBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.FlagSpawnBaby
// (Defined, Public)

void ADunDefSpiderQueenController::FlagSpawnBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.FlagSpawnBaby");

	ADunDefSpiderQueenController_FlagSpawnBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.StartBabySpawn
// (Defined, Public)

void ADunDefSpiderQueenController::StartBabySpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.StartBabySpawn");

	ADunDefSpiderQueenController_StartBabySpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.ForceWakeUp
// (Defined, Public)

void ADunDefSpiderQueenController::ForceWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.ForceWakeUp");

	ADunDefSpiderQueenController_ForceWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.AddToSwingHurtList
// (Defined, Public)
// Parameters:
// class AActor*                  newEntry                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSpiderQueenController::AddToSwingHurtList(class AActor* newEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.AddToSwingHurtList");

	ADunDefSpiderQueenController_AddToSwingHurtList_Params params;
	params.newEntry = newEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueenController.EndMeleeSwing
// (Defined, Public)

void ADunDefSpiderQueenController::EndMeleeSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.EndMeleeSwing");

	ADunDefSpiderQueenController_EndMeleeSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.StartMeleeSwing
// (Public)

void ADunDefSpiderQueenController::StartMeleeSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.StartMeleeSwing");

	ADunDefSpiderQueenController_StartMeleeSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueenController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefSpiderQueenController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueenController.PostBeginPlay");

	ADunDefSpiderQueenController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.SetDyingPhysics
// (Simulated, Public)

void ADunDefSpiderQueen::SetDyingPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.SetDyingPhysics");

	ADunDefSpiderQueen_SetDyingPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSpiderQueen::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.Died");

	ADunDefSpiderQueen_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueen.SetUpperBodyLookAt
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bTurnOn                        (Parm)

void ADunDefSpiderQueen::SetUpperBodyLookAt(unsigned long bTurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.SetUpperBodyLookAt");

	ADunDefSpiderQueen_SetUpperBodyLookAt_Params params;
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefSpiderQueen::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.Tick");

	ADunDefSpiderQueen_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.PlayStunnedHurtEffect
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDefSpiderQueen::PlayStunnedHurtEffect(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.PlayStunnedHurtEffect");

	ADunDefSpiderQueen_PlayStunnedHurtEffect_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.ShootWeb
// (Defined, Event, Public)

void ADunDefSpiderQueen::ShootWeb()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.ShootWeb");

	ADunDefSpiderQueen_ShootWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.PlayWebShootAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderQueen::PlayWebShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.PlayWebShootAnim");

	ADunDefSpiderQueen_PlayWebShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueen.PlayWebChargeAnim
// (Defined, Simulated, Public)

void ADunDefSpiderQueen::PlayWebChargeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.PlayWebChargeAnim");

	ADunDefSpiderQueen_PlayWebChargeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.SetWebChargeTime
// (Defined, Simulated, Public)
// Parameters:
// float                          NewWebChargeTime               (Parm)

void ADunDefSpiderQueen::SetWebChargeTime(float NewWebChargeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.SetWebChargeTime");

	ADunDefSpiderQueen_SetWebChargeTime_Params params;
	params.NewWebChargeTime = NewWebChargeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.GetWebProjectileLocAndRot
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FVector                 Position                       (Parm, OutParm)
// struct FRotator                Orientation                    (Parm, OutParm)

void ADunDefSpiderQueen::GetWebProjectileLocAndRot(struct FVector* Position, struct FRotator* Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.GetWebProjectileLocAndRot");

	ADunDefSpiderQueen_GetWebProjectileLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
}


// Function DunDefSpider.DunDefSpiderQueen.GetMeleeSwingLocation
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefSpiderQueen::GetMeleeSwingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.GetMeleeSwingLocation");

	ADunDefSpiderQueen_GetMeleeSwingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueen.MeleeSwingEnd
// (Defined, Event, Public)

void ADunDefSpiderQueen::MeleeSwingEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.MeleeSwingEnd");

	ADunDefSpiderQueen_MeleeSwingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.MeleeSwingStart
// (Defined, Event, Public)

void ADunDefSpiderQueen::MeleeSwingStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.MeleeSwingStart");

	ADunDefSpiderQueen_MeleeSwingStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.SetRageMode
// (Defined, Simulated, Public)

void ADunDefSpiderQueen::SetRageMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.SetRageMode");

	ADunDefSpiderQueen_SetRageMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.GetEnrageIntervalMult
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderQueen::GetEnrageIntervalMult()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.GetEnrageIntervalMult");

	ADunDefSpiderQueen_GetEnrageIntervalMult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueen.TakeDamage
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

void ADunDefSpiderQueen::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.TakeDamage");

	ADunDefSpiderQueen_TakeDamage_Params params;
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


// Function DunDefSpider.DunDefSpiderQueen.CheckSpecialCoreDmg
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSpiderQueen::CheckSpecialCoreDmg(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.CheckSpecialCoreDmg");

	ADunDefSpiderQueen_CheckSpecialCoreDmg_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueen.AdjustDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            inDamage                       (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void ADunDefSpiderQueen::AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.AdjustDamage");

	ADunDefSpiderQueen_AdjustDamage_Params params;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.WhatHitMe = WhatHitMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inDamage != nullptr)
		*inDamage = params.inDamage;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefSpider.DunDefSpiderQueen.NotifyTakeHit
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)

void ADunDefSpiderQueen::NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.NotifyTakeHit");

	ADunDefSpiderQueen_NotifyTakeHit_Params params;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.GetBabySpawnLocandRot
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 SpawnLoc                       (Parm, OutParm)
// struct FRotator                SpawnRot                       (Parm, OutParm)

void ADunDefSpiderQueen::GetBabySpawnLocandRot(struct FVector* SpawnLoc, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.GetBabySpawnLocandRot");

	ADunDefSpiderQueen_GetBabySpawnLocandRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnLoc != nullptr)
		*SpawnLoc = params.SpawnLoc;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function DunDefSpider.DunDefSpiderQueen.DoSpawnBaby
// (Defined, Event, Public)

void ADunDefSpiderQueen::DoSpawnBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.DoSpawnBaby");

	ADunDefSpiderQueen_DoSpawnBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.StopStunAnimation
// (Defined, Simulated, Public)

void ADunDefSpiderQueen::StopStunAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.StopStunAnimation");

	ADunDefSpiderQueen_StopStunAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.PlayStunAnimation
// (Defined, Simulated, Public)

void ADunDefSpiderQueen::PlayStunAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.PlayStunAnimation");

	ADunDefSpiderQueen_PlayStunAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.PlayBabySpawnAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          playSpeed                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderQueen::PlayBabySpawnAnim(float playSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.PlayBabySpawnAnim");

	ADunDefSpiderQueen_PlayBabySpawnAnim_Params params;
	params.playSpeed = playSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueen.GetPawnDamageModifier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bDontIncludeAbilities          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSpiderQueen::GetPawnDamageModifier(unsigned long bDontIncludeAbilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.GetPawnDamageModifier");

	ADunDefSpiderQueen_GetPawnDamageModifier_Params params;
	params.bDontIncludeAbilities = bDontIncludeAbilities;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.DunDefSpiderQueen.UpdateDifficultyValues
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  UpdateMaterial                 (OptionalParm, Parm)
// unsigned long                  onlyDynamicValues              (OptionalParm, Parm)

void ADunDefSpiderQueen::UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.UpdateDifficultyValues");

	ADunDefSpiderQueen_UpdateDifficultyValues_Params params;
	params.UpdateMaterial = UpdateMaterial;
	params.onlyDynamicValues = onlyDynamicValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefSpiderQueen::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.PostBeginPlay");

	ADunDefSpiderQueen_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.PlayJumpAnimation
// (Simulated, Public)

void ADunDefSpiderQueen::PlayJumpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.PlayJumpAnimation");

	ADunDefSpiderQueen_PlayJumpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.DunDefSpiderQueen.ExecReplicatedFunction
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

void ADunDefSpiderQueen::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.DunDefSpiderQueen.ExecReplicatedFunction");

	ADunDefSpiderQueen_ExecReplicatedFunction_Params params;
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


// Function DunDefSpider.TowerDeboosterObject.GetTowerBoostAmount
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UTowerDeboosterObject::GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.TowerDeboosterObject.GetTowerBoostAmount");

	UTowerDeboosterObject_GetTowerBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.TowerDeboosterObject.HasTowerBoostingType
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   checkType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UTowerDeboosterObject::HasTowerBoostingType(TEnumAsByte<ETowerBoostType> checkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.TowerDeboosterObject.HasTowerBoostingType");

	UTowerDeboosterObject_HasTowerBoostingType_Params params;
	params.checkType = checkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.TowerDeboosterObject.GetTowerBoostingTarget
// (Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> UTowerDeboosterObject::GetTowerBoostingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.TowerDeboosterObject.GetTowerBoostingTarget");

	UTowerDeboosterObject_GetTowerBoostingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.TowerDeboosterObject.SetBoostAmount
// (Defined, Public)
// Parameters:
// float                          newBoostAmount                 (Parm)

void UTowerDeboosterObject::SetBoostAmount(float newBoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.TowerDeboosterObject.SetBoostAmount");

	UTowerDeboosterObject_SetBoostAmount_Params params;
	params.newBoostAmount = newBoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.TowerDeboosterObject.SetBoostType
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   newBoostType                   (Parm)

void UTowerDeboosterObject::SetBoostType(TEnumAsByte<ETowerBoostType> newBoostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.TowerDeboosterObject.SetBoostType");

	UTowerDeboosterObject_SetBoostType_Params params;
	params.newBoostType = newBoostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.GameInfo_VDay.PairMatched
// (Defined, Public)
// Parameters:
// class ADunDefEnemy*            Boy                            (Parm)
// class ADunDefEnemy*            Girl                           (Parm)

void AGameInfo_VDay::PairMatched(class ADunDefEnemy* Boy, class ADunDefEnemy* Girl)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_VDay.PairMatched");

	AGameInfo_VDay_PairMatched_Params params;
	params.Boy = Boy;
	params.Girl = Girl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.GameInfo_VDay.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AGameInfo_VDay::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_VDay.Tick");

	AGameInfo_VDay_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpider.GameInfo_VDay.FindBestTemplate
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 GenderString                   (OptionalParm, Parm, OutParm, NeedCtorLink)
// class ADunDefEnemy*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEnemy* AGameInfo_VDay::FindBestTemplate(struct FString* GenderString)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_VDay.FindBestTemplate");

	AGameInfo_VDay_FindBestTemplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenderString != nullptr)
		*GenderString = params.GenderString;

	return params.ReturnValue;
}


// Function DunDefSpider.GameInfo_VDay.WaveSpawnerCreateEnemy
// (Defined, Public)
// Parameters:
// class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner                       (Parm)
// class ADunDefEnemy*            EnemyTemplate                  (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (Parm)
// class ADunDefEnemy*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEnemy* AGameInfo_VDay::WaveSpawnerCreateEnemy(class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_VDay.WaveSpawnerCreateEnemy");

	AGameInfo_VDay_WaveSpawnerCreateEnemy_Params params;
	params.aSpawner = aSpawner;
	params.EnemyTemplate = EnemyTemplate;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpider.GameInfo_VDay.OpenedKillCountUI
// (Defined, Public)
// Parameters:
// class UUI_KillCount*           aKillCountUI                   (Parm)

void AGameInfo_VDay::OpenedKillCountUI(class UUI_KillCount* aKillCountUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpider.GameInfo_VDay.OpenedKillCountUI");

	AGameInfo_VDay_OpenedKillCountUI_Params params;
	params.aKillCountUI = aKillCountUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
