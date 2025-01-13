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

// Function DunDefSpecial.DunDefBuff_Harbinger.DeactivateBuff
// (Defined, Simulated, Public)

void UDunDefBuff_Harbinger::DeactivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefBuff_Harbinger.DeactivateBuff");

	UDunDefBuff_Harbinger_DeactivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefBuff_Harbinger.BuffEffect
// (Defined, Simulated, Public)

void UDunDefBuff_Harbinger::BuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefBuff_Harbinger.BuffEffect");

	UDunDefBuff_Harbinger_BuffEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefBuff_Harbinger.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UDunDefBuff_Harbinger::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefBuff_Harbinger.Tick");

	UDunDefBuff_Harbinger_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefBuff_Harbinger.Initialize
// (Defined, Simulated, Public)

void UDunDefBuff_Harbinger::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefBuff_Harbinger.Initialize");

	UDunDefBuff_Harbinger_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateBuffValues
// (Defined, Simulated, Public)

void ADunDefTower_SummonEnemy::UpdateBuffValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateBuffValues");

	ADunDefTower_SummonEnemy_UpdateBuffValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAttackDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_SummonEnemy::GetAttackDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetAttackDamage");

	ADunDefTower_SummonEnemy_GetAttackDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnDefaultBuffs
// (Defined, Simulated, Public)

void ADunDefTower_SummonEnemy::SpawnDefaultBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnDefaultBuffs");

	ADunDefTower_SummonEnemy_SpawnDefaultBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.ClientDisableMovementReplication
// (Simulated, Public)
// Parameters:
// struct FVector                 endedLoc                       (Parm)

void ADunDefTower_SummonEnemy::ClientDisableMovementReplication(const struct FVector& endedLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.ClientDisableMovementReplication");

	ADunDefTower_SummonEnemy_ClientDisableMovementReplication_Params params;
	params.endedLoc = endedLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.TransferTowerOwnership
// (Defined, Public)
// Parameters:
// class APawn*                   toPawn                         (Parm)

void ADunDefTower_SummonEnemy::TransferTowerOwnership(class APawn* toPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.TransferTowerOwnership");

	ADunDefTower_SummonEnemy_TransferTowerOwnership_Params params;
	params.toPawn = toPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.ForceSingleMove
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 NewLoc                         (Parm)
// struct FRotator                NewRot                         (Parm)
// unsigned long                  bShouldCollideWorld            (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_SummonEnemy::ForceSingleMove(const struct FVector& NewLoc, const struct FRotator& NewRot, unsigned long bShouldCollideWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.ForceSingleMove");

	ADunDefTower_SummonEnemy_ForceSingleMove_Params params;
	params.NewLoc = NewLoc;
	params.NewRot = NewRot;
	params.bShouldCollideWorld = bShouldCollideWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.ForceMoveActor
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Mover                          (Parm)
// struct FVector                 NewLoc                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_SummonEnemy::ForceMoveActor(class AActor* Mover, const struct FVector& NewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.ForceMoveActor");

	ADunDefTower_SummonEnemy_ForceMoveActor_Params params;
	params.Mover = Mover;
	params.NewLoc = NewLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateAggroActor
// (Defined, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> AltActor                       (Parm, OutParm)

void ADunDefTower_SummonEnemy::GetAlternateAggroActor(TScriptInterface<class UDunDefTargetableInterface>* AltActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateAggroActor");

	ADunDefTower_SummonEnemy_GetAlternateAggroActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AltActor != nullptr)
		*AltActor = params.AltActor;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* forController                  (Parm)
// class ADunDefPlayer*           ForPlayer                      (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_SummonEnemy::GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetPlayerTargetingDesirability");

	ADunDefTower_SummonEnemy_GetPlayerTargetingDesirability_Params params;
	params.forController = forController;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_SummonEnemy::GetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetTowerTargetingDesirability");

	ADunDefTower_SummonEnemy_GetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetEnemyTargetingDesirability
// (Defined, Event, Public)
// Parameters:
// class AEngineNativeDunDefAIController* forController                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_SummonEnemy::GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetEnemyTargetingDesirability");

	ADunDefTower_SummonEnemy_GetEnemyTargetingDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawToolTip
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class UCanvas*                 C                              (Parm)
// int                            PosX                           (Parm)
// int                            PosY                           (Parm)
// class ULocalPlayer*            ForPlayer                      (OptionalParm, Parm)

void ADunDefTower_SummonEnemy::DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.DrawToolTip");

	ADunDefTower_SummonEnemy_DrawToolTip_Params params;
	params.C = C;
	params.PosX = PosX;
	params.PosY = PosY;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawTowerToolTipStats
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)
// float                          Opacity                        (Parm)
// class ULocalPlayer*            ForPlayer                      (Parm)
// float                          canvasScale                    (Parm)

void ADunDefTower_SummonEnemy::DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.DrawTowerToolTipStats");

	ADunDefTower_SummonEnemy_DrawTowerToolTipStats_Params params;
	params.C = C;
	params.Opacity = Opacity;
	params.ForPlayer = ForPlayer;
	params.canvasScale = canvasScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostString
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefTower_SummonEnemy::GetBoostString(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostString");

	ADunDefTower_SummonEnemy_GetBoostString_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostedTargets
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<class APawn*>           boostedTargets                 (Parm, OutParm, NeedCtorLink)

void ADunDefTower_SummonEnemy::GetBoostedTargets(TArray<class APawn*>* boostedTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostedTargets");

	ADunDefTower_SummonEnemy_GetBoostedTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (boostedTargets != nullptr)
		*boostedTargets = params.boostedTargets;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.NotifyOfBoostedRemoval
// (Defined, Public)
// Parameters:
// class APawn*                   removedBoostee                 (Parm)

void ADunDefTower_SummonEnemy::NotifyOfBoostedRemoval(class APawn* removedBoostee)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.NotifyOfBoostedRemoval");

	ADunDefTower_SummonEnemy_NotifyOfBoostedRemoval_Params params;
	params.removedBoostee = removedBoostee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipStatValue
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_SummonEnemy::GetToolTipStatValue(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipStatValue");

	ADunDefTower_SummonEnemy_GetToolTipStatValue_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetPawnBoostAmount
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_SummonEnemy::GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetPawnBoostAmount");

	ADunDefTower_SummonEnemy_GetPawnBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.HasPawnBoostingType
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_SummonEnemy::HasPawnBoostingType(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.HasPawnBoostingType");

	ADunDefTower_SummonEnemy_HasPawnBoostingType_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.TakeDamage
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

void ADunDefTower_SummonEnemy::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.TakeDamage");

	ADunDefTower_SummonEnemy_TakeDamage_Params params;
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


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateActor
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ADunDefTower_SummonEnemy::GetAlternateActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateActor");

	ADunDefTower_SummonEnemy_GetAlternateActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealth
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bGetMax                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_SummonEnemy::GetHealth(unsigned long bGetMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealth");

	ADunDefTower_SummonEnemy_GetHealth_Params params;
	params.bGetMax = bGetMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.HealDamage
// (Defined, Event, Public)
// Parameters:
// int                            Amount                         (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_SummonEnemy::HealDamage(int Amount, class AController* Healer, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.HealDamage");

	ADunDefTower_SummonEnemy_HealDamage_Params params;
	params.Amount = Amount;
	params.Healer = Healer;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.AddHealth
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            howMuch                        (Parm)
// unsigned long                  bDontDisplayFloatingNumber     (OptionalParm, Parm)

void ADunDefTower_SummonEnemy::AddHealth(int howMuch, unsigned long bDontDisplayFloatingNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.AddHealth");

	ADunDefTower_SummonEnemy_AddHealth_Params params;
	params.howMuch = howMuch;
	params.bDontDisplayFloatingNumber = bDontDisplayFloatingNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealthPercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_SummonEnemy::GetHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealthPercent");

	ADunDefTower_SummonEnemy_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.StartRepair
// (Defined, Simulated, Public)

void ADunDefTower_SummonEnemy::StartRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.StartRepair");

	ADunDefTower_SummonEnemy_StartRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipText
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefTower_SummonEnemy::GetToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipText");

	ADunDefTower_SummonEnemy_GetToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefTower_SummonEnemy::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.ScaleForHeroModifiers");

	ADunDefTower_SummonEnemy_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_SummonEnemy::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.DrawMyHUD");

	ADunDefTower_SummonEnemy_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateCommand
// (Defined, Simulated, Public)

void ADunDefTower_SummonEnemy::UpdateCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateCommand");

	ADunDefTower_SummonEnemy_UpdateCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.HandleCommand
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// TEnumAsByte<ESummonedCommand>  NewCommand                     (Parm)
// struct FVector                 commandPoint                   (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_SummonEnemy::HandleCommand(class AActor* Target, TEnumAsByte<ESummonedCommand> NewCommand, const struct FVector& commandPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.HandleCommand");

	ADunDefTower_SummonEnemy_HandleCommand_Params params;
	params.Target = Target;
	params.NewCommand = NewCommand;
	params.commandPoint = commandPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.SetCommand
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 commandPoint                   (Parm)
// TEnumAsByte<ESummonedCommand>  NewCommand                     (Parm)
// class AActor*                  commandInstigator              (Parm)
// class AActor*                  targetedActor                  (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_SummonEnemy::SetCommand(const struct FVector& commandPoint, TEnumAsByte<ESummonedCommand> NewCommand, class AActor* commandInstigator, class AActor* targetedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.SetCommand");

	ADunDefTower_SummonEnemy_SetCommand_Params params;
	params.commandPoint = commandPoint;
	params.NewCommand = NewCommand;
	params.commandInstigator = commandInstigator;
	params.targetedActor = targetedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.SetSelected
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bWantsSelected                 (Parm)
// class AActor*                  selectingActor                 (Parm)

void ADunDefTower_SummonEnemy::SetSelected(unsigned long bWantsSelected, class AActor* selectingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.SetSelected");

	ADunDefTower_SummonEnemy_SetSelected_Params params;
	params.bWantsSelected = bWantsSelected;
	params.selectingActor = selectingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.SetPendingSelection
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bIsPending                     (Parm)

void ADunDefTower_SummonEnemy::SetPendingSelection(unsigned long bIsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.SetPendingSelection");

	ADunDefTower_SummonEnemy_SetPendingSelection_Params params;
	params.bIsPending = bIsPending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.CleanUpSummon
// (Defined, Simulated, Public)

void ADunDefTower_SummonEnemy::CleanUpSummon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.CleanUpSummon");

	ADunDefTower_SummonEnemy_CleanUpSummon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefTower_SummonEnemy::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.Destroyed");

	ADunDefTower_SummonEnemy_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.BaseChange
// (Defined, Event, Public)

void ADunDefTower_SummonEnemy::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.BaseChange");

	ADunDefTower_SummonEnemy_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.SetUpEnemyValues
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bInitialSetup                  (OptionalParm, Parm)

void ADunDefTower_SummonEnemy::SetUpEnemyValues(unsigned long bInitialSetup)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.SetUpEnemyValues");

	ADunDefTower_SummonEnemy_SetUpEnemyValues_Params params;
	params.bInitialSetup = bInitialSetup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnMyEnemy
// (Defined, Public)

void ADunDefTower_SummonEnemy::SpawnMyEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnMyEnemy");

	ADunDefTower_SummonEnemy_SpawnMyEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.InitializeForInstigator
// (Defined, Public)
// Parameters:
// class APawn*                   Pawn                           (Parm)

void ADunDefTower_SummonEnemy::InitializeForInstigator(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.InitializeForInstigator");

	ADunDefTower_SummonEnemy_InitializeForInstigator_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.GetLastDamageTime
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_SummonEnemy::GetLastDamageTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.GetLastDamageTime");

	ADunDefTower_SummonEnemy_GetLastDamageTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.HasBeenRendered
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_SummonEnemy::HasBeenRendered()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.HasBeenRendered");

	ADunDefTower_SummonEnemy_HasBeenRendered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateEnemyCollisionValues
// (Defined, Simulated, Public)

void ADunDefTower_SummonEnemy::UpdateEnemyCollisionValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateEnemyCollisionValues");

	ADunDefTower_SummonEnemy_UpdateEnemyCollisionValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateReplicatedStatValues
// (Defined, Public)

void ADunDefTower_SummonEnemy::UpdateReplicatedStatValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateReplicatedStatValues");

	ADunDefTower_SummonEnemy_UpdateReplicatedStatValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_SummonEnemy.ExecReplicatedFunction
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

void ADunDefTower_SummonEnemy::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.ExecReplicatedFunction");

	ADunDefTower_SummonEnemy_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefTower_SummonEnemy.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefTower_SummonEnemy::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_SummonEnemy.ReplicatedEvent");

	ADunDefTower_SummonEnemy_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefEmitterDamage.GetDamageCauser
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ADunDefEmitterDamage::GetDamageCauser()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.GetDamageCauser");

	ADunDefEmitterDamage_GetDamageCauser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefEmitterDamage.CheckValidAngle
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  Victim                         (Parm)
// struct FVector                 Origin                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefEmitterDamage::CheckValidAngle(class AActor* Victim, const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.CheckValidAngle");

	ADunDefEmitterDamage_CheckValidAngle_Params params;
	params.Victim = Victim;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefEmitterDamage.GetStatModifierObject
// (Defined, Simulated, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UIActorModifierInterface> ADunDefEmitterDamage::GetStatModifierObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.GetStatModifierObject");

	ADunDefEmitterDamage_GetStatModifierObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefEmitterDamage.GetStatValueByTag
// (HasOptionalParms, Public)
// Parameters:
// float                          initalValue                    (Parm)
// struct FString                 StatTag                        (Parm, NeedCtorLink)
// TScriptInterface<class UIActorModifierInterface> TagActor                       (Parm)
// TEnumAsByte<ELevelUpValueType> statType                       (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefEmitterDamage::GetStatValueByTag(float initalValue, const struct FString& StatTag, const TScriptInterface<class UIActorModifierInterface>& TagActor, TEnumAsByte<ELevelUpValueType> statType, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.GetStatValueByTag");

	ADunDefEmitterDamage_GetStatValueByTag_Params params;
	params.initalValue = initalValue;
	params.StatTag = StatTag;
	params.TagActor = TagActor;
	params.statType = statType;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefEmitterDamage.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void ADunDefEmitterDamage::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.InitalizeActorStats");

	ADunDefEmitterDamage_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefEmitterDamage.AllowSpawn
// (Defined, Event, Static, Public)
// Parameters:
// class AActor*                  theArchetype                   (Parm)
// struct FVector                 theLoc                         (Parm)
// struct FRotator                theRot                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefEmitterDamage::STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.AllowSpawn");

	ADunDefEmitterDamage_AllowSpawn_Params params;
	params.theArchetype = theArchetype;
	params.theLoc = theLoc;
	params.theRot = theRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefEmitterDamage.HurtRadius
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

unsigned long ADunDefEmitterDamage::HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.HurtRadius");

	ADunDefEmitterDamage_HurtRadius_Params params;
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


// Function DunDefSpecial.DunDefEmitterDamage.DoDamage
// (Defined, Public)

void ADunDefEmitterDamage::DoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.DoDamage");

	ADunDefEmitterDamage_DoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefEmitterDamage.InitDamageEmitter
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            BaseDamage                     (OptionalParm, Parm)
// float                          BaseRange                      (OptionalParm, Parm)
// TScriptInterface<class UIActorModifierInterface> aActorStatModifier             (OptionalParm, Parm)

void ADunDefEmitterDamage::InitDamageEmitter(int BaseDamage, float BaseRange, const TScriptInterface<class UIActorModifierInterface>& aActorStatModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.InitDamageEmitter");

	ADunDefEmitterDamage_InitDamageEmitter_Params params;
	params.BaseDamage = BaseDamage;
	params.BaseRange = BaseRange;
	params.aActorStatModifier = aActorStatModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefEmitterDamage.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefEmitterDamage::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEmitterDamage.PostBeginPlay");

	ADunDefEmitterDamage_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_PlayerAbility_PickupFlag.RequestPickup
// (Defined, Simulated, Public)
// Parameters:
// class ACTF_Flag*               newFlag                        (Parm)

void ACTF_PlayerAbility_PickupFlag::RequestPickup(class ACTF_Flag* newFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_PlayerAbility_PickupFlag.RequestPickup");

	ACTF_PlayerAbility_PickupFlag_RequestPickup_Params params;
	params.newFlag = newFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.SetAtBase
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bIsAtBase                      (Parm)

void ACTF_Flag::SetAtBase(unsigned long bIsAtBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.SetAtBase");

	ACTF_Flag_SetAtBase_Params params;
	params.bIsAtBase = bIsAtBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.SetDroppedParticleColor
// (Defined, Simulated, Public, HasDefaults)

void ACTF_Flag::SetDroppedParticleColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.SetDroppedParticleColor");

	ACTF_Flag_SetDroppedParticleColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.SetTeam
// (Defined, Simulated, Public)
// Parameters:
// int                            NewTeam                        (Parm)

void ACTF_Flag::SetTeam(int NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.SetTeam");

	ACTF_Flag_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.InitFlag
// (Defined, Public)
// Parameters:
// int                            NewTeam                        (Parm)
// class ACTF_FlagBase*           NewBase                        (Parm)

void ACTF_Flag::InitFlag(int NewTeam, class ACTF_FlagBase* NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.InitFlag");

	ACTF_Flag_InitFlag_Params params;
	params.NewTeam = NewTeam;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.AutoTeleport
// (Defined, Public)

void ACTF_Flag::AutoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.AutoTeleport");

	ACTF_Flag_AutoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.AdjustDamage
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// int                            Damage                         (Parm, OutParm)

void ACTF_Flag::AdjustDamage(int* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.AdjustDamage");

	ACTF_Flag_AdjustDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function DunDefSpecial.CTF_Flag.PreventTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// float                          towerRadius                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.PreventTowerAtPoint");

	ACTF_Flag_PreventTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;
	params.towerRadius = towerRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.AllowTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.AllowTowerAtPoint");

	ACTF_Flag_AllowTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.CheckAllowance
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::CheckAllowance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.CheckAllowance");

	ACTF_Flag_CheckAllowance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.PhysicsVolumeChange
// (Defined, Event, Public)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)

void ACTF_Flag::PhysicsVolumeChange(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.PhysicsVolumeChange");

	ACTF_Flag_PhysicsVolumeChange_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.FellOutOfWorld
// (Defined, Simulated, Event, Public)
// Parameters:
// class UClass*                  dmgType                        (Parm)

void ACTF_Flag::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.FellOutOfWorld");

	ACTF_Flag_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.ResetCollision
// (Defined, Simulated, Public)

void ACTF_Flag::ResetCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.ResetCollision");

	ACTF_Flag_ResetCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.DisableCollision
// (Defined, Simulated, Public)

void ACTF_Flag::DisableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.DisableCollision");

	ACTF_Flag_DisableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.IsInAuraOrTrap
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Loc                            (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::IsInAuraOrTrap(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.IsInAuraOrTrap");

	ACTF_Flag_IsInAuraOrTrap_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.CaptureFlag
// (Defined, Simulated, Public)

void ACTF_Flag::CaptureFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.CaptureFlag");

	ACTF_Flag_CaptureFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.ReturnToBase
// (Defined, Simulated, Public)

void ACTF_Flag::ReturnToBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.ReturnToBase");

	ACTF_Flag_ReturnToBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.DropFlag
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bForceRandomizedPosition       (OptionalParm, Parm)
// unsigned long                  bForceDroppedMessage           (OptionalParm, Parm)

void ACTF_Flag::DropFlag(unsigned long bForceRandomizedPosition, unsigned long bForceDroppedMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.DropFlag");

	ACTF_Flag_DropFlag_Params params;
	params.bForceRandomizedPosition = bForceRandomizedPosition;
	params.bForceDroppedMessage = bForceDroppedMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.PickUpFlag
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefPlayer*           newHolder                      (Parm)

void ACTF_Flag::PickUpFlag(class ADunDefPlayer* newHolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.PickUpFlag");

	ACTF_Flag_PickUpFlag_Params params;
	params.newHolder = newHolder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.BeginBeingPickedUp
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* newHolder                      (Parm)

void ACTF_Flag::BeginBeingPickedUp(class ADunDefPlayerController* newHolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.BeginBeingPickedUp");

	ACTF_Flag_BeginBeingPickedUp_Params params;
	params.newHolder = newHolder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.CanBePickedUp
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::CanBePickedUp(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.CanBePickedUp");

	ACTF_Flag_CanBePickedUp_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ACTF_Flag::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.DrawMiniMapIcon");

	ACTF_Flag_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.GetActivationOffset
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ACTF_Flag::GetActivationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.GetActivationOffset");

	ACTF_Flag_GetActivationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.GetActivationWeighting
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ACTF_Flag::GetActivationWeighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.GetActivationWeighting");

	ACTF_Flag_GetActivationWeighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.Client_Activate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)

void ACTF_Flag::Client_Activate(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.Client_Activate");

	ACTF_Flag_Client_Activate_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.Server_Activate
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  forceActivation                (OptionalParm, Parm)
// int                            activationType                 (OptionalParm, Parm)

void ACTF_Flag::Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.Server_Activate");

	ACTF_Flag_Server_Activate_Params params;
	params.PC = PC;
	params.forceActivation = forceActivation;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.AllowActivation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ACTF_Flag::AllowActivation(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.AllowActivation");

	ACTF_Flag_AllowActivation_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.GetToolTipPriority
// (Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ACTF_Flag::GetToolTipPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.GetToolTipPriority");

	ACTF_Flag_GetToolTipPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.TakesToolTipPriority
// (Defined, Simulated, Public)
// Parameters:
// TScriptInterface<class UDunDefToolTipInterface> otherToolTip                   (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::TakesToolTipPriority(const TScriptInterface<class UDunDefToolTipInterface>& otherToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.TakesToolTipPriority");

	ACTF_Flag_TakesToolTipPriority_Params params;
	params.otherToolTip = otherToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.ContinueDrawingToolTip
// (Simulated, Public)
// Parameters:
// unsigned long                  ContinueDrawing                (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::ContinueDrawingToolTip(unsigned long ContinueDrawing)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.ContinueDrawingToolTip");

	ACTF_Flag_ContinueDrawingToolTip_Params params;
	params.ContinueDrawing = ContinueDrawing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.DrawToolTip
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// int                            PosX                           (Parm)
// int                            PosY                           (Parm)
// class ULocalPlayer*            ForPlayer                      (OptionalParm, Parm)

void ACTF_Flag::DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.DrawToolTip");

	ACTF_Flag_DrawToolTip_Params params;
	params.C = C;
	params.PosX = PosX;
	params.PosY = PosY;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.Destroyed
// (Defined, Simulated, Event, Public)

void ACTF_Flag::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.Destroyed");

	ACTF_Flag_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ACTF_Flag::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.PostBeginPlay");

	ACTF_Flag_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_Flag.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.DrawMyHUD");

	ACTF_Flag_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.OnlyDrawHUDForOwner
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_Flag::OnlyDrawHUDForOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.OnlyDrawHUDForOwner");

	ACTF_Flag_OnlyDrawHUDForOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_Flag.ExecReplicatedFunction
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

void ACTF_Flag::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.ExecReplicatedFunction");

	ACTF_Flag_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.CTF_Flag.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ACTF_Flag::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_Flag.ReplicatedEvent");

	ACTF_Flag_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_UIGlobalHUD.GetUITeamLists
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// int                            TeamOnlyCheck                  (Parm)
// struct FString                 tList                          (Parm, OutParm, NeedCtorLink)
// struct FString                 kList                          (Parm, OutParm, NeedCtorLink)
// struct FString                 sList                          (Parm, OutParm, NeedCtorLink)

void UCTF_UIGlobalHUD::GetUITeamLists(int TeamOnlyCheck, struct FString* tList, struct FString* kList, struct FString* sList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGlobalHUD.GetUITeamLists");

	UCTF_UIGlobalHUD_GetUITeamLists_Params params;
	params.TeamOnlyCheck = TeamOnlyCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tList != nullptr)
		*tList = params.tList;
	if (kList != nullptr)
		*kList = params.kList;
	if (sList != nullptr)
		*sList = params.sList;
}


// Function DunDefSpecial.CTF_UIGlobalHUD.GetColorString
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  aColor                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UCTF_UIGlobalHUD::GetColorString(const struct FColor& aColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGlobalHUD.GetColorString");

	UCTF_UIGlobalHUD_GetColorString_Params params;
	params.aColor = aColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_UIGlobalHUD.UpdateTeamPanels
// (Defined, Simulated, Public)

void UCTF_UIGlobalHUD::UpdateTeamPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGlobalHUD.UpdateTeamPanels");

	UCTF_UIGlobalHUD_UpdateTeamPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_UIGlobalHUD.Update
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UCTF_UIGlobalHUD::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGlobalHUD.Update");

	UCTF_UIGlobalHUD_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_UIGlobalHUD.UpdateCompetitive
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UCTF_UIGlobalHUD::UpdateCompetitive(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGlobalHUD.UpdateCompetitive");

	UCTF_UIGlobalHUD_UpdateCompetitive_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPRI.IsFriendlyToLocal
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDPRI::IsFriendlyToLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.IsFriendlyToLocal");

	ACTF_DDPRI_IsFriendlyToLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDPRI.PrintHeroLevelUpMessage
// (Defined, Simulated, Public)

void ACTF_DDPRI::PrintHeroLevelUpMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.PrintHeroLevelUpMessage");

	ACTF_DDPRI_PrintHeroLevelUpMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPRI.PrintNewHeroMessage
// (Defined, Simulated, Public)

void ACTF_DDPRI::PrintNewHeroMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.PrintNewHeroMessage");

	ACTF_DDPRI_PrintNewHeroMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPRI.SetReadyToSpawn
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bIsReady                       (Parm)

void ACTF_DDPRI::SetReadyToSpawn(unsigned long bIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.SetReadyToSpawn");

	ACTF_DDPRI_SetReadyToSpawn_Params params;
	params.bIsReady = bIsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPRI.GetTeamName
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ACTF_DDPRI::GetTeamName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.GetTeamName");

	ACTF_DDPRI_GetTeamName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDPRI.GetTeamColor
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ACTF_DDPRI::GetTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.GetTeamColor");

	ACTF_DDPRI_GetTeamColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDPRI.Destroyed
// (Defined, Simulated, Event, Public)

void ACTF_DDPRI::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.Destroyed");

	ACTF_DDPRI_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPRI.AddToTeam
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            TeamIndex                      (OptionalParm, Parm)

void ACTF_DDPRI::AddToTeam(int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.AddToTeam");

	ACTF_DDPRI_AddToTeam_Params params;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPRI.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ACTF_DDPRI::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPRI.ReplicatedEvent");

	ACTF_DDPRI_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.AllowedToTeleport
// (Defined, Public)
// Parameters:
// class APawn*                   Teleportee                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::AllowedToTeleport(class APawn* Teleportee)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.AllowedToTeleport");

	ACTF_DDGRI_AllowedToTeleport_Params params;
	params.Teleportee = Teleportee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.DoDeathNotification
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerReplicationInfo* Killer                         (Parm)
// class ADunDefPlayerReplicationInfo* Victim                         (Parm)
// int                            damageTypeIndex                (Parm)

void ACTF_DDGRI::DoDeathNotification(class ADunDefPlayerReplicationInfo* Killer, class ADunDefPlayerReplicationInfo* Victim, int damageTypeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.DoDeathNotification");

	ACTF_DDGRI_DoDeathNotification_Params params;
	params.Killer = Killer;
	params.Victim = Victim;
	params.damageTypeIndex = damageTypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.GetJumpZMultiplier
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPawn*             aPawn                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ACTF_DDGRI::GetJumpZMultiplier(class ADunDefPawn* aPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetJumpZMultiplier");

	ACTF_DDGRI_GetJumpZMultiplier_Params params;
	params.aPawn = aPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.ExtraDrawHUDInterface
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// TScriptInterface<class UDunDefHUDInterface> hudint                         (Parm)

void ACTF_DDGRI::ExtraDrawHUDInterface(class ADunDefHUD* H, const TScriptInterface<class UDunDefHUDInterface>& hudint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.ExtraDrawHUDInterface");

	ACTF_DDGRI_ExtraDrawHUDInterface_Params params;
	params.H = H;
	params.hudint = hudint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.CustomUpdatePlayerScoreLabel
// (Defined, Simulated, Public)
// Parameters:
// class ULocalPlayer*            ForPlayer                      (Parm)
// class UUILabel_ScoreIndicator* ScoreLabel                     (Parm)

void ACTF_DDGRI::CustomUpdatePlayerScoreLabel(class ULocalPlayer* ForPlayer, class UUILabel_ScoreIndicator* ScoreLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.CustomUpdatePlayerScoreLabel");

	ACTF_DDGRI_CustomUpdatePlayerScoreLabel_Params params;
	params.ForPlayer = ForPlayer;
	params.ScoreLabel = ScoreLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.AllowDeathSpectatorMode
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::AllowDeathSpectatorMode(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.AllowDeathSpectatorMode");

	ACTF_DDGRI_AllowDeathSpectatorMode_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.ModifyPlayerGroundSpeed
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)
// float                          theGroundSpeed                 (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ACTF_DDGRI::ModifyPlayerGroundSpeed(class ADunDefPlayer* aPlayer, float theGroundSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.ModifyPlayerGroundSpeed");

	ACTF_DDGRI_ModifyPlayerGroundSpeed_Params params;
	params.aPlayer = aPlayer;
	params.theGroundSpeed = theGroundSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelColor
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ACTF_DDGRI::GetGameOverLabelColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelColor");

	ACTF_DDGRI_GetGameOverLabelColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelColor
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ACTF_DDGRI::GetVictoryLabelColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelColor");

	ACTF_DDGRI_GetVictoryLabelColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelString
// (Defined, Simulated, Public)
// Parameters:
// class APlayerReplicationInfo*  myPlayer                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ACTF_DDGRI::GetGameOverLabelString(class APlayerReplicationInfo* myPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelString");

	ACTF_DDGRI_GetGameOverLabelString_Params params;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelString
// (Defined, Simulated, Public)
// Parameters:
// class APlayerReplicationInfo*  myPlayer                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ACTF_DDGRI::GetVictoryLabelString(class APlayerReplicationInfo* myPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelString");

	ACTF_DDGRI_GetVictoryLabelString_Params params;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.OverrideEndGameLabel
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::OverrideEndGameLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.OverrideEndGameLabel");

	ACTF_DDGRI_OverrideEndGameLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetWinningPRI
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerReplicationInfo* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefPlayerReplicationInfo* ACTF_DDGRI::GetWinningPRI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetWinningPRI");

	ACTF_DDGRI_GetWinningPRI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetDataListEntries
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            dataSetType                    (OptionalParm, Parm)
// int                            PlayerIndex                    (OptionalParm, Parm)
// int                            FolderID                       (OptionalParm, Parm)
// TArray<TScriptInterface<class UDataListEntryInterface>> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<TScriptInterface<class UDataListEntryInterface>> ACTF_DDGRI::GetDataListEntries(int dataSetType, int PlayerIndex, int FolderID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetDataListEntries");

	ACTF_DDGRI_GetDataListEntries_Params params;
	params.dataSetType = dataSetType;
	params.PlayerIndex = PlayerIndex;
	params.FolderID = FolderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetTeamIcon
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            TeamIndex                      (Parm)
// class USurface*                theTeamIcon                    (OptionalParm, Parm, OutParm)
// struct FColor                  theTeamColor                   (OptionalParm, Parm, OutParm)

void ACTF_DDGRI::GetTeamIcon(int TeamIndex, class USurface** theTeamIcon, struct FColor* theTeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetTeamIcon");

	ACTF_DDGRI_GetTeamIcon_Params params;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theTeamIcon != nullptr)
		*theTeamIcon = params.theTeamIcon;
	if (theTeamColor != nullptr)
		*theTeamColor = params.theTeamColor;
}


// Function DunDefSpecial.CTF_DDGRI.IsTeamCompetitive
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::IsTeamCompetitive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.IsTeamCompetitive");

	ACTF_DDGRI_IsTeamCompetitive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.AllowChatBetween
// (Defined, Simulated, Public)
// Parameters:
// class APlayerReplicationInfo*  myPlayer                       (Parm)
// class APlayerReplicationInfo*  TheirPlayer                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::AllowChatBetween(class APlayerReplicationInfo* myPlayer, class APlayerReplicationInfo* TheirPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.AllowChatBetween");

	ACTF_DDGRI_AllowChatBetween_Params params;
	params.myPlayer = myPlayer;
	params.TheirPlayer = TheirPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetTeamThatHasFlag
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ACTF_DDGRI::GetTeamThatHasFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetTeamThatHasFlag");

	ACTF_DDGRI_GetTeamThatHasFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.DoLevelVictory
// (Defined, Simulated, Public)

void ACTF_DDGRI::DoLevelVictory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.DoLevelVictory");

	ACTF_DDGRI_DoLevelVictory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.GiveWinningBonus
// (Defined, Public)

void ACTF_DDGRI::GiveWinningBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GiveWinningBonus");

	ACTF_DDGRI_GiveWinningBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.WonGame
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerReplicationInfo* theWinningPlayer               (Parm)
// int                            WinningTeamIndex               (OptionalParm, Parm)

void ACTF_DDGRI::WonGame(class ADunDefPlayerReplicationInfo* theWinningPlayer, int WinningTeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.WonGame");

	ACTF_DDGRI_WonGame_Params params;
	params.theWinningPlayer = theWinningPlayer;
	params.WinningTeamIndex = WinningTeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.CheckAllReady
// (Defined, Public)

void ACTF_DDGRI::CheckAllReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.CheckAllReady");

	ACTF_DDGRI_CheckAllReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.CheckReadyPlayers
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::CheckReadyPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.CheckReadyPlayers");

	ACTF_DDGRI_CheckReadyPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.SetAllowCountDown
// (Defined, Public)
// Parameters:
// unsigned long                  setAllow                       (Parm)

void ACTF_DDGRI::SetAllowCountDown(unsigned long setAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.SetAllowCountDown");

	ACTF_DDGRI_SetAllowCountDown_Params params;
	params.setAllow = setAllow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.AllowGameCountDown
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::AllowGameCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.AllowGameCountDown");

	ACTF_DDGRI_AllowGameCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.SetGameReady
// (Defined, Public)

void ACTF_DDGRI::SetGameReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.SetGameReady");

	ACTF_DDGRI_SetGameReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.SetGameTime
// (Defined, Public)
// Parameters:
// float                          NewTime                        (Parm)

void ACTF_DDGRI::SetGameTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.SetGameTime");

	ACTF_DDGRI_SetGameTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.UpdateGameTime
// (Defined, Simulated, Public)

void ACTF_DDGRI::UpdateGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.UpdateGameTime");

	ACTF_DDGRI_UpdateGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ACTF_DDGRI::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.Tick");

	ACTF_DDGRI_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.FilloutTeams
// (Defined, Simulated, Public)

void ACTF_DDGRI::FilloutTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.FilloutTeams");

	ACTF_DDGRI_FilloutTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.FlushTeams
// (Defined, Simulated, Public)

void ACTF_DDGRI::FlushTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.FlushTeams");

	ACTF_DDGRI_FlushTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.AutoBalanceTeams
// (Defined, Simulated, Public)

void ACTF_DDGRI::AutoBalanceTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.AutoBalanceTeams");

	ACTF_DDGRI_AutoBalanceTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.AutoSortTeams
// (Defined, Simulated, Public)

void ACTF_DDGRI::AutoSortTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.AutoSortTeams");

	ACTF_DDGRI_AutoSortTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.GetLowestBalancedTeam
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ACTF_DDGRI::GetLowestBalancedTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetLowestBalancedTeam");

	ACTF_DDGRI_GetLowestBalancedTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.IncrementTeamScore
// (Defined, Public)
// Parameters:
// int                            ScoringTeam                    (Parm)
// int                            Score                          (Parm)

void ACTF_DDGRI::IncrementTeamScore(int ScoringTeam, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.IncrementTeamScore");

	ACTF_DDGRI_IncrementTeamScore_Params params;
	params.ScoringTeam = ScoringTeam;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ACTF_DDGRI::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.PostBeginPlay");

	ACTF_DDGRI_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.ModifyCustomColors
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* aController                    (Parm)
// class ADunDefPlayer*           aPlayer                        (Parm)

void ACTF_DDGRI::ModifyCustomColors(class ADunDefPlayerController* aController, class ADunDefPlayer* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.ModifyCustomColors");

	ACTF_DDGRI_ModifyCustomColors_Params params;
	params.aController = aController;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.DrawExtraPlayerFloatingHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)
// class ADunDefHUD*              H                              (Parm)

void ACTF_DDGRI::DrawExtraPlayerFloatingHUD(class ADunDefPlayer* aPlayer, class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.DrawExtraPlayerFloatingHUD");

	ACTF_DDGRI_DrawExtraPlayerFloatingHUD_Params params;
	params.aPlayer = aPlayer;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.GetTeamScores
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ACTF_DDGRI::GetTeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetTeamScores");

	ACTF_DDGRI_GetTeamScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.Server_AddGRIHeroAbilities
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)

void ACTF_DDGRI::Server_AddGRIHeroAbilities(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.Server_AddGRIHeroAbilities");

	ACTF_DDGRI_Server_AddGRIHeroAbilities_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.GetColorString
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  aColor                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ACTF_DDGRI::GetColorString(const struct FColor& aColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetColorString");

	ACTF_DDGRI_GetColorString_Params params;
	params.aColor = aColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetTeamLists
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            TeamOnlyCheck                  (Parm)
// unsigned long                  bWantsReadyCheck               (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ACTF_DDGRI::GetTeamLists(int TeamOnlyCheck, unsigned long bWantsReadyCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetTeamLists");

	ACTF_DDGRI_GetTeamLists_Params params;
	params.TeamOnlyCheck = TeamOnlyCheck;
	params.bWantsReadyCheck = bWantsReadyCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetCompetitivePlayerList
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ACTF_DDGRI::GetCompetitivePlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetCompetitivePlayerList");

	ACTF_DDGRI_GetCompetitivePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.DestroyTowerOnOwnerLeft
// (Defined, Public)
// Parameters:
// class ADunDefTower*            aTower                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::DestroyTowerOnOwnerLeft(class ADunDefTower* aTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.DestroyTowerOnOwnerLeft");

	ACTF_DDGRI_DestroyTowerOnOwnerLeft_Params params;
	params.aTower = aTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetMaxTowerUnits
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerReplicationInfo* ddPRI                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ACTF_DDGRI::GetMaxTowerUnits(class ADunDefPlayerReplicationInfo* ddPRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetMaxTowerUnits");

	ACTF_DDGRI_GetMaxTowerUnits_Params params;
	params.ddPRI = ddPRI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetAltCurrentTowerUnits
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerReplicationInfo* ddPRI                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ACTF_DDGRI::GetAltCurrentTowerUnits(class ADunDefPlayerReplicationInfo* ddPRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetAltCurrentTowerUnits");

	ACTF_DDGRI_GetAltCurrentTowerUnits_Params params;
	params.ddPRI = ddPRI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.GetCurrentTowerUnits
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerReplicationInfo* ddPRI                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ACTF_DDGRI::GetCurrentTowerUnits(class ADunDefPlayerReplicationInfo* ddPRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetCurrentTowerUnits");

	ACTF_DDGRI_GetCurrentTowerUnits_Params params;
	params.ddPRI = ddPRI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.CanPlaceTowerUnitCost
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            Cost                           (Parm)
// class ADunDefPlayerController* ForPlayer                      (Parm)
// class ADunDefTower*            Tower                          (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_DDGRI::CanPlaceTowerUnitCost(int Cost, class ADunDefPlayerController* ForPlayer, class ADunDefTower* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.CanPlaceTowerUnitCost");

	ACTF_DDGRI_CanPlaceTowerUnitCost_Params params;
	params.Cost = Cost;
	params.ForPlayer = ForPlayer;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.RemovedTower
// (Defined, Public)
// Parameters:
// class ADunDefTower*            Tower                          (Parm)

void ACTF_DDGRI::RemovedTower(class ADunDefTower* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.RemovedTower");

	ACTF_DDGRI_RemovedTower_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.AddedTower
// (Defined, Public)
// Parameters:
// class ADunDefTower*            Tower                          (Parm)

void ACTF_DDGRI::AddedTower(class ADunDefTower* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.AddedTower");

	ACTF_DDGRI_AddedTower_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.RemovePlayerFromTeam
// (Defined, Simulated, Public)
// Parameters:
// class ACTF_DDPRI*              aPRI                           (Parm)
// int                            TeamIndex                      (Parm)

void ACTF_DDGRI::RemovePlayerFromTeam(class ACTF_DDPRI* aPRI, int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.RemovePlayerFromTeam");

	ACTF_DDGRI_RemovePlayerFromTeam_Params params;
	params.aPRI = aPRI;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.AddPlayerToTeam
// (Defined, Simulated, Public)
// Parameters:
// class ACTF_DDPRI*              aPRI                           (Parm)
// int                            TeamIndex                      (Parm)

void ACTF_DDGRI::AddPlayerToTeam(class ACTF_DDPRI* aPRI, int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.AddPlayerToTeam");

	ACTF_DDGRI_AddPlayerToTeam_Params params;
	params.aPRI = aPRI;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.RemoveFromAnyTeams
// (Defined, Simulated, Public)
// Parameters:
// class ACTF_DDPRI*              aPRI                           (Parm)

void ACTF_DDGRI::RemoveFromAnyTeams(class ACTF_DDPRI* aPRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.RemoveFromAnyTeams");

	ACTF_DDGRI_RemoveFromAnyTeams_Params params;
	params.aPRI = aPRI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDGRI.GetSmallestTeam
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ACTF_DDGRI::GetSmallestTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.GetSmallestTeam");

	ACTF_DDGRI_GetSmallestTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_DDGRI.ExecReplicatedFunction
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

void ACTF_DDGRI::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDGRI.ExecReplicatedFunction");

	ACTF_DDGRI_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.CTF_DDPC.AdjustDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            inDamage                       (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void ACTF_DDPC::AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.AdjustDamage");

	ACTF_DDPC_AdjustDamage_Params params;
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


// Function DunDefSpecial.CTF_DDPC.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ACTF_DDPC::PawnDied(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.PawnDied");

	ACTF_DDPC_PawnDied_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPC.GiveFlag
// (Defined, Simulated, Public)
// Parameters:
// class ACTF_Flag*               newFlag                        (Parm)

void ACTF_DDPC::GiveFlag(class ACTF_Flag* newFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.GiveFlag");

	ACTF_DDPC_GiveFlag_Params params;
	params.newFlag = newFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPC.SetIsReady
// (Defined, Net, NetReliable, HasOptionalParms, Public, NetServer)
// Parameters:
// unsigned long                  bIsReady                       (OptionalParm, Parm)

void ACTF_DDPC::SetIsReady(unsigned long bIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.SetIsReady");

	ACTF_DDPC_SetIsReady_Params params;
	params.bIsReady = bIsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPC.SetDesiredTeam
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// int                            desiredTeam                    (Parm)

void ACTF_DDPC::SetDesiredTeam(int desiredTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.SetDesiredTeam");

	ACTF_DDPC_SetDesiredTeam_Params params;
	params.desiredTeam = desiredTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPC.CreateHUD
// (Defined, Public)

void ACTF_DDPC::CreateHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.CreateHUD");

	ACTF_DDPC_CreateHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPC.LocalAttemptSpawn
// (Defined, Simulated, Public)

void ACTF_DDPC::LocalAttemptSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.LocalAttemptSpawn");

	ACTF_DDPC_LocalAttemptSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPC.ServerRestartPlayer
// (Defined, Net, NetReliable, Public, NetServer)

void ACTF_DDPC::ServerRestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.ServerRestartPlayer");

	ACTF_DDPC_ServerRestartPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_DDPC.ShowTeamSelectionUI
// (Public)

void ACTF_DDPC::ShowTeamSelectionUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_DDPC.ShowTeamSelectionUI");

	ACTF_DDPC_ShowTeamSelectionUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTD_DDGRI.AllowedToTeleport
// (Defined, Public)
// Parameters:
// class APawn*                   Teleportee                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTD_DDGRI::AllowedToTeleport(class APawn* Teleportee)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.AllowedToTeleport");

	ACTD_DDGRI_AllowedToTeleport_Params params;
	params.Teleportee = Teleportee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTD_DDGRI.DoLevelVictory
// (Defined, Simulated, Public)

void ACTD_DDGRI::DoLevelVictory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.DoLevelVictory");

	ACTD_DDGRI_DoLevelVictory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTD_DDGRI.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ACTD_DDGRI::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.Tick");

	ACTD_DDGRI_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTD_DDGRI.GetSkipBuildPhaseString
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ACTD_DDGRI::GetSkipBuildPhaseString()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.GetSkipBuildPhaseString");

	ACTD_DDGRI_GetSkipBuildPhaseString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTD_DDGRI.DrawExtraPlayerFloatingHUD
// (Simulated, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)
// class ADunDefHUD*              H                              (Parm)

void ACTD_DDGRI::DrawExtraPlayerFloatingHUD(class ADunDefPlayer* aPlayer, class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.DrawExtraPlayerFloatingHUD");

	ACTD_DDGRI_DrawExtraPlayerFloatingHUD_Params params;
	params.aPlayer = aPlayer;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTD_DDGRI.Server_AddGRIHeroAbilities
// (Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)

void ACTD_DDGRI::Server_AddGRIHeroAbilities(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.Server_AddGRIHeroAbilities");

	ACTD_DDGRI_Server_AddGRIHeroAbilities_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTD_DDGRI.DestroyTowerOnOwnerLeft
// (Defined, Public)
// Parameters:
// class ADunDefTower*            aTower                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTD_DDGRI::DestroyTowerOnOwnerLeft(class ADunDefTower* aTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.DestroyTowerOnOwnerLeft");

	ACTD_DDGRI_DestroyTowerOnOwnerLeft_Params params;
	params.aTower = aTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTD_DDGRI.AllowActivatingCrystal
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTD_DDGRI::AllowActivatingCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.AllowActivatingCrystal");

	ACTD_DDGRI_AllowActivatingCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTD_DDGRI.SetGameReady
// (Defined, Public)

void ACTD_DDGRI::SetGameReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_DDGRI.SetGameReady");

	ACTD_DDGRI_SetGameReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.UI_TeamSelect.OnInterceptedInputKey
// (Defined, Public, HasOutParms)
// Parameters:
// struct FInputEventParameters   EventParms                     (Const, Parm, OutParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_TeamSelect::OnInterceptedInputKey(struct FInputEventParameters* EventParms)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_TeamSelect.OnInterceptedInputKey");

	UUI_TeamSelect_OnInterceptedInputKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventParms != nullptr)
		*EventParms = params.EventParms;

	return params.ReturnValue;
}


// Function DunDefSpecial.UI_TeamSelect.NotifyWidgetClicked
// (Defined, Event, Public)
// Parameters:
// class UUIObject*               Widget                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UUI_TeamSelect::NotifyWidgetClicked(class UUIObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_TeamSelect.NotifyWidgetClicked");

	UUI_TeamSelect_NotifyWidgetClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.UI_TeamSelect.Update
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UUI_TeamSelect::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_TeamSelect.Update");

	UUI_TeamSelect_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.UI_TeamSelect.SceneActivated
// (Defined, Event, Public)
// Parameters:
// unsigned long                  bInitialActivation             (Parm)

void UUI_TeamSelect::SceneActivated(unsigned long bInitialActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_TeamSelect.SceneActivated");

	UUI_TeamSelect_SceneActivated_Params params;
	params.bInitialActivation = bInitialActivation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_GameInfo.AdjustDTDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class ADunDefDamageableTarget* forDT                          (Parm)
// int                            inDamage                       (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)

void ACTF_GameInfo::AdjustDTDamage(class ADunDefDamageableTarget* forDT, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, int* inDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.AdjustDTDamage");

	ACTF_GameInfo_AdjustDTDamage_Params params;
	params.forDT = forDT;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inDamage != nullptr)
		*inDamage = params.inDamage;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefSpecial.CTF_GameInfo.AdjustPawnDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class ADunDefPawn*             forPawn                        (Parm)
// int                            inDamage                       (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)

void ACTF_GameInfo::AdjustPawnDamage(class ADunDefPawn* forPawn, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, int* inDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.AdjustPawnDamage");

	ACTF_GameInfo_AdjustPawnDamage_Params params;
	params.forPawn = forPawn;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inDamage != nullptr)
		*inDamage = params.inDamage;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefSpecial.CTF_GameInfo.GetPlayerTeamForStart
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AController*             Player                         (Parm)
// unsigned char                  InTeam                         (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char ACTF_GameInfo::GetPlayerTeamForStart(class AController* Player, unsigned char InTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.GetPlayerTeamForStart");

	ACTF_GameInfo_GetPlayerTeamForStart_Params params;
	params.Player = Player;
	params.InTeam = InTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_GameInfo.CheckScore
// (Defined, Public)
// Parameters:
// class APlayerReplicationInfo*  Scorer                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_GameInfo::CheckScore(class APlayerReplicationInfo* Scorer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.CheckScore");

	ACTF_GameInfo_CheckScore_Params params;
	params.Scorer = Scorer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_GameInfo.ScoreKill
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Other                          (Parm)

void ACTF_GameInfo::ScoreKill(class AController* Killer, class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.ScoreKill");

	ACTF_GameInfo_ScoreKill_Params params;
	params.Killer = Killer;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_GameInfo.ScoreObjective
// (Defined, Public)
// Parameters:
// class APlayerReplicationInfo*  Scorer                         (Parm)
// int                            Score                          (Parm)

void ACTF_GameInfo::ScoreObjective(class APlayerReplicationInfo* Scorer, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.ScoreObjective");

	ACTF_GameInfo_ScoreObjective_Params params;
	params.Scorer = Scorer;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_GameInfo.AddObjectiveScore
// (Defined, Public)
// Parameters:
// class APlayerReplicationInfo*  Scorer                         (Parm)
// int                            Score                          (Parm)

void ACTF_GameInfo::AddObjectiveScore(class APlayerReplicationInfo* Scorer, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.AddObjectiveScore");

	ACTF_GameInfo_AddObjectiveScore_Params params;
	params.Scorer = Scorer;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_GameInfo.PlayerReplicationInfoInitialized
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)

void ACTF_GameInfo::PlayerReplicationInfoInitialized(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.PlayerReplicationInfoInitialized");

	ACTF_GameInfo_PlayerReplicationInfoInitialized_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_GameInfo.DoPlayerLeaving
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  bForceLocal                    (OptionalParm, Parm)

void ACTF_GameInfo::DoPlayerLeaving(class ADunDefPlayerController* PC, unsigned long bForceLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.DoPlayerLeaving");

	ACTF_GameInfo_DoPlayerLeaving_Params params;
	params.PC = PC;
	params.bForceLocal = bForceLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_GameInfo.SpawnPlayerController
// (Defined, Public)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (Parm)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* ACTF_GameInfo::SpawnPlayerController(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_GameInfo.SpawnPlayerController");

	ACTF_GameInfo_SpawnPlayerController_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTD_GameInfo.WaveSpawnerCreateEnemy
// (Defined, Public)
// Parameters:
// class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner                       (Parm)
// class ADunDefEnemy*            EnemyTemplate                  (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (Parm)
// class ADunDefEnemy*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEnemy* ACTD_GameInfo::WaveSpawnerCreateEnemy(class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_GameInfo.WaveSpawnerCreateEnemy");

	ACTD_GameInfo_WaveSpawnerCreateEnemy_Params params;
	params.aSpawner = aSpawner;
	params.EnemyTemplate = EnemyTemplate;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTD_GameInfo.RatePlayerStart
// (Defined, Public)
// Parameters:
// class APlayerStart*            P                              (Parm)
// unsigned char                  Team                           (Parm)
// class AController*             Player                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ACTD_GameInfo::RatePlayerStart(class APlayerStart* P, unsigned char Team, class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_GameInfo.RatePlayerStart");

	ACTD_GameInfo_RatePlayerStart_Params params;
	params.P = P;
	params.Team = Team;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTD_GameInfo.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ACTD_GameInfo::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTD_GameInfo.PostBeginPlay");

	ACTD_GameInfo_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.PreventTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// float                          towerRadius                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_FlagBase::PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.PreventTowerAtPoint");

	ACTF_FlagBase_PreventTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;
	params.towerRadius = towerRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_FlagBase.AllowTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_FlagBase::AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.AllowTowerAtPoint");

	ACTF_FlagBase_AllowTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_FlagBase.CheckAllowance
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ACTF_FlagBase::CheckAllowance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.CheckAllowance");

	ACTF_FlagBase_CheckAllowance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_FlagBase.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ACTF_FlagBase::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.DrawMiniMapIcon");

	ACTF_FlagBase_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.SpawnFlag
// (Defined, Public)

void ACTF_FlagBase::SpawnFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.SpawnFlag");

	ACTF_FlagBase_SpawnFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.FlagTaken
// (Defined, Simulated, Public)

void ACTF_FlagBase::FlagTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.FlagTaken");

	ACTF_FlagBase_FlagTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.FlagReturned
// (Defined, Public)

void ACTF_FlagBase::FlagReturned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.FlagReturned");

	ACTF_FlagBase_FlagReturned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.DoCaptureEffects
// (Defined, Simulated, Public)

void ACTF_FlagBase::DoCaptureEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.DoCaptureEffects");

	ACTF_FlagBase_DoCaptureEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.ScoreFlag
// (Defined, Public)
// Parameters:
// class ACTF_Flag*               scoredFlag                     (Parm)

void ACTF_FlagBase::ScoreFlag(class ACTF_Flag* scoredFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.ScoreFlag");

	ACTF_FlagBase_ScoreFlag_Params params;
	params.scoredFlag = scoredFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ACTF_FlagBase::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.Touch");

	ACTF_FlagBase_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.InitBase
// (Defined, Simulated, Public, HasDefaults)

void ACTF_FlagBase::InitBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.InitBase");

	ACTF_FlagBase_InitBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.SetTeamIndex
// (Defined, Public)
// Parameters:
// int                            NewTeam                        (Parm)

void ACTF_FlagBase::SetTeamIndex(int NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.SetTeamIndex");

	ACTF_FlagBase_SetTeamIndex_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ACTF_FlagBase::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.PostBeginPlay");

	ACTF_FlagBase_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_FlagBase.ExecReplicatedFunction
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

void ACTF_FlagBase::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.ExecReplicatedFunction");

	ACTF_FlagBase_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.CTF_FlagBase.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ACTF_FlagBase::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_FlagBase.ReplicatedEvent");

	ACTF_FlagBase_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_MultiFlag_GameInfo.RatePlayerStart
// (Defined, Public)
// Parameters:
// class APlayerStart*            P                              (Parm)
// unsigned char                  Team                           (Parm)
// class AController*             Player                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ACTF_MultiFlag_GameInfo::RatePlayerStart(class APlayerStart* P, unsigned char Team, class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_MultiFlag_GameInfo.RatePlayerStart");

	ACTF_MultiFlag_GameInfo_RatePlayerStart_Params params;
	params.P = P;
	params.Team = Team;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_MultiFlag_GameInfo.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ACTF_MultiFlag_GameInfo::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_MultiFlag_GameInfo.PostBeginPlay");

	ACTF_MultiFlag_GameInfo_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTeamTowerVolume.SetMyTeam
// (Defined, Simulated, Public)
// Parameters:
// int                            NewTeam                        (Parm)

void ADunDefTeamTowerVolume::SetMyTeam(int NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTeamTowerVolume.SetMyTeam");

	ADunDefTeamTowerVolume_SetMyTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTeamTowerVolume.Destroyed
// (Defined, Simulated, Public)

void ADunDefTeamTowerVolume::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTeamTowerVolume.Destroyed");

	ADunDefTeamTowerVolume_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTeamTowerVolume.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefTeamTowerVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTeamTowerVolume.PostBeginPlay");

	ADunDefTeamTowerVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTeamTowerVolume.AllowTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTeamTowerVolume::AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTeamTowerVolume.AllowTowerAtPoint");

	ADunDefTeamTowerVolume_AllowTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTeamTowerVolume.PreventTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// float                          towerRadius                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTeamTowerVolume::PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTeamTowerVolume.PreventTowerAtPoint");

	ADunDefTeamTowerVolume_PreventTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;
	params.towerRadius = towerRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTeamTowerVolume.CheckAllowance
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTeamTowerVolume::CheckAllowance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTeamTowerVolume.CheckAllowance");

	ADunDefTeamTowerVolume_CheckAllowance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTeamTowerVolume.ExecReplicatedFunction
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

void ADunDefTeamTowerVolume::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTeamTowerVolume.ExecReplicatedFunction");

	ADunDefTeamTowerVolume_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.CTF_UIGameStats.GetUITeamLists
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// int                            TeamOnlyCheck                  (Parm)
// struct FString                 tList                          (Parm, OutParm, NeedCtorLink)
// struct FString                 kList                          (Parm, OutParm, NeedCtorLink)
// struct FString                 sList                          (Parm, OutParm, NeedCtorLink)

void UCTF_UIGameStats::GetUITeamLists(int TeamOnlyCheck, struct FString* tList, struct FString* kList, struct FString* sList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGameStats.GetUITeamLists");

	UCTF_UIGameStats_GetUITeamLists_Params params;
	params.TeamOnlyCheck = TeamOnlyCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tList != nullptr)
		*tList = params.tList;
	if (kList != nullptr)
		*kList = params.kList;
	if (sList != nullptr)
		*sList = params.sList;
}


// Function DunDefSpecial.CTF_UIGameStats.GetColorString
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  aColor                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UCTF_UIGameStats::GetColorString(const struct FColor& aColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGameStats.GetColorString");

	UCTF_UIGameStats_GetColorString_Params params;
	params.aColor = aColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.CTF_UIGameStats.UpdateTeamPanels
// (Defined, Simulated, Public)

void UCTF_UIGameStats::UpdateTeamPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGameStats.UpdateTeamPanels");

	UCTF_UIGameStats_UpdateTeamPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.CTF_UIGameStats.CustomInit
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            CustomInitIndex                (OptionalParm, Parm)

void UCTF_UIGameStats::CustomInit(int CustomInitIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.CTF_UIGameStats.CustomInit");

	UCTF_UIGameStats_CustomInit_Params params;
	params.CustomInitIndex = CustomInitIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_AddPlatformToVerticalTowerMover::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover.Activated");

	UDunDef_SeqAct_AddPlatformToVerticalTowerMover_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDef_VerticalTowerMover.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDef_VerticalTowerMover::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_VerticalTowerMover.Tick");

	ADunDef_VerticalTowerMover_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDef_VerticalTowerMover.MoveTowers
// (Defined, Net, NetReliable, Public, NetServer, HasDefaults)
// Parameters:
// struct FPlatformInfo           Info                           (Parm, NeedCtorLink)

void ADunDef_VerticalTowerMover::MoveTowers(const struct FPlatformInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_VerticalTowerMover.MoveTowers");

	ADunDef_VerticalTowerMover_MoveTowers_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDef_VerticalTowerMover.RebuildTowerCache
// (Defined, Public, HasDefaults)
// Parameters:
// struct FPlatformInfo           thePlatformInfo                (Parm, NeedCtorLink)
// TArray<struct FTowerInfo>      ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FTowerInfo> ADunDef_VerticalTowerMover::RebuildTowerCache(const struct FPlatformInfo& thePlatformInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_VerticalTowerMover.RebuildTowerCache");

	ADunDef_VerticalTowerMover_RebuildTowerCache_Params params;
	params.thePlatformInfo = thePlatformInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDef_VerticalTowerMover.AddInterpActor
// (Defined, Public, HasDefaults)
// Parameters:
// class AInterpActor*            TheActor                       (Parm)

void ADunDef_VerticalTowerMover::AddInterpActor(class AInterpActor* TheActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_VerticalTowerMover.AddInterpActor");

	ADunDef_VerticalTowerMover_AddInterpActor_Params params;
	params.TheActor = TheActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_CheckToUnlockAchievements::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements.Activated");

	UDunDef_SeqAct_CheckToUnlockAchievements_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_CTDWinGameForTeam::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam.Activated");

	UDunDef_SeqAct_CTDWinGameForTeam_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDef_SeqAct_GetMVP.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_GetMVP::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_SeqAct_GetMVP.Activated");

	UDunDef_SeqAct_GetMVP_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_HideGlobalUIScene::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene.Activated");

	UDunDef_SeqAct_HideGlobalUIScene_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.StaticGetTowerScale
// (Defined, Static, Public)
// Parameters:
// class UDunDefHero*             hero                           (Parm)
// class ADunDefTower*            Tower                          (Parm)
// float                          TowerRangeScaler               (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::STATIC_StaticGetTowerScale(class UDunDefHero* hero, class ADunDefTower* Tower, float TowerRangeScaler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.StaticGetTowerScale");

	ADunDefTower_TripWire_StaticGetTowerScale_Params params;
	params.hero = hero;
	params.Tower = Tower;
	params.TowerRangeScaler = TowerRangeScaler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.AllowAbilityMove
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::AllowAbilityMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.AllowAbilityMove");

	ADunDefTower_TripWire_AllowAbilityMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.TransferTowerOwnership
// (Defined, Public)
// Parameters:
// class APawn*                   toPawn                         (Parm)

void ADunDefTower_TripWire::TransferTowerOwnership(class APawn* toPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.TransferTowerOwnership");

	ADunDefTower_TripWire_TransferTowerOwnership_Params params;
	params.toPawn = toPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.CheckAssociateWithHero
// (Defined, Public)
// Parameters:
// class UDunDefHero*             hero                           (Parm)
// class ADunDefPawn*             pawnInstigator                 (Parm)
// class ADunDefPlayerController* PC                             (Parm)

void ADunDefTower_TripWire::CheckAssociateWithHero(class UDunDefHero* hero, class ADunDefPawn* pawnInstigator, class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.CheckAssociateWithHero");

	ADunDefTower_TripWire_CheckAssociateWithHero_Params params;
	params.hero = hero;
	params.pawnInstigator = pawnInstigator;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.CanDetonate
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::CanDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.CanDetonate");

	ADunDefTower_TripWire_CanDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.HasCharges
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::HasCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.HasCharges");

	ADunDefTower_TripWire_HasCharges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetSellWorth
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetSellWorth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetSellWorth");

	ADunDefTower_TripWire_GetSellWorth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetEnemyTargetingDesirability
// (Defined, Event, Public)
// Parameters:
// class AEngineNativeDunDefAIController* forController                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetEnemyTargetingDesirability");

	ADunDefTower_TripWire_GetEnemyTargetingDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefTower_TripWire::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DrawMiniMapIcon");

	ADunDefTower_TripWire_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.HealDetonationStyle
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            HealAmt                        (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// unsigned long                  bShowFloatingNumbers           (OptionalParm, Parm)

void ADunDefTower_TripWire::HealDetonationStyle(int HealAmt, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.HealDetonationStyle");

	ADunDefTower_TripWire_HealDetonationStyle_Params params;
	params.HealAmt = HealAmt;
	params.Healer = Healer;
	params.DamageType = DamageType;
	params.bShowFloatingNumbers = bShowFloatingNumbers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetAlternateActor
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ADunDefTower_TripWire::GetAlternateActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetAlternateActor");

	ADunDefTower_TripWire_GetAlternateActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.IsMultiActorTower
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::IsMultiActorTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.IsMultiActorTower");

	ADunDefTower_TripWire_IsMultiActorTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.DrawUpgradeOverlay
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// float                          Opacity                        (Parm)
// struct FColor                  upgradeOverlayColor            (Parm)

void ADunDefTower_TripWire::DrawUpgradeOverlay(class ADunDefHUD* H, float Opacity, const struct FColor& upgradeOverlayColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DrawUpgradeOverlay");

	ADunDefTower_TripWire_DrawUpgradeOverlay_Params params;
	params.H = H;
	params.Opacity = Opacity;
	params.upgradeOverlayColor = upgradeOverlayColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetGlobalTowerHealthMultiplier
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetGlobalTowerHealthMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetGlobalTowerHealthMultiplier");

	ADunDefTower_TripWire_GetGlobalTowerHealthMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.PerformFullHeal
// (Defined, Public)

void ADunDefTower_TripWire::PerformFullHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.PerformFullHeal");

	ADunDefTower_TripWire_PerformFullHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.SetRadiusScale
// (Simulated, Public)
// Parameters:
// float                          theRadiusScale                 (Parm)

void ADunDefTower_TripWire::SetRadiusScale(float theRadiusScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.SetRadiusScale");

	ADunDefTower_TripWire_SetRadiusScale_Params params;
	params.theRadiusScale = theRadiusScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.DrawTowerToolTipStats
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)
// float                          Opacity                        (Parm)
// class ULocalPlayer*            ForPlayer                      (Parm)
// float                          canvasScale                    (Parm)

void ADunDefTower_TripWire::DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DrawTowerToolTipStats");

	ADunDefTower_TripWire_DrawTowerToolTipStats_Params params;
	params.C = C;
	params.Opacity = Opacity;
	params.ForPlayer = ForPlayer;
	params.canvasScale = canvasScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetToolTipText
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefTower_TripWire::GetToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetToolTipText");

	ADunDefTower_TripWire_GetToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefTower_TripWire::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ScaleForHeroModifiers");

	ADunDefTower_TripWire_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ScaleHealthMultiplier
// (Defined, Public)

void ADunDefTower_TripWire::ScaleHealthMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ScaleHealthMultiplier");

	ADunDefTower_TripWire_ScaleHealthMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ReportSummoned
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ReportSummoned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ReportSummoned");

	ADunDefTower_TripWire_ReportSummoned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.UpdateTowerRatingMaterial
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::UpdateTowerRatingMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.UpdateTowerRatingMaterial");

	ADunDefTower_TripWire_UpdateTowerRatingMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.NeedsRepair
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  requireFullHealth              (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::NeedsRepair(unsigned long requireFullHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.NeedsRepair");

	ADunDefTower_TripWire_NeedsRepair_Params params;
	params.requireFullHealth = requireFullHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetHealthPercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetHealthPercent");

	ADunDefTower_TripWire_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.HealDamage
// (Defined, Event, Public)
// Parameters:
// int                            Amount                         (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::HealDamage(int Amount, class AController* Healer, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.HealDamage");

	ADunDefTower_TripWire_HealDamage_Params params;
	params.Amount = Amount;
	params.Healer = Healer;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.HealPctOfMaxHealth
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          HealPct                        (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// unsigned long                  bShowFloatingNumbers           (OptionalParm, Parm)

void ADunDefTower_TripWire::HealPctOfMaxHealth(float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.HealPctOfMaxHealth");

	ADunDefTower_TripWire_HealPctOfMaxHealth_Params params;
	params.HealPct = HealPct;
	params.Healer = Healer;
	params.DamageType = DamageType;
	params.bShowFloatingNumbers = bShowFloatingNumbers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetHealth
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bGetMax                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_TripWire::GetHealth(unsigned long bGetMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetHealth");

	ADunDefTower_TripWire_GetHealth_Params params;
	params.bGetMax = bGetMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.IncrementRepair
// (Defined, Public)
// Parameters:
// float                          CurrentMana                    (Parm)
// float                          DeltaTime                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::IncrementRepair(float CurrentMana, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.IncrementRepair");

	ADunDefTower_TripWire_IncrementRepair_Params params;
	params.CurrentMana = CurrentMana;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.IncrementDetonationRepair
// (Defined, Public)
// Parameters:
// float                          CurrentMana                    (Parm)
// float                          DeltaTime                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::IncrementDetonationRepair(float CurrentMana, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.IncrementDetonationRepair");

	ADunDefTower_TripWire_IncrementDetonationRepair_Params params;
	params.CurrentMana = CurrentMana;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetCurrentRepairPercentage
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          StartRepairTime                (OptionalParm, Parm)
// float                          RepairSpeed                    (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetCurrentRepairPercentage(float StartRepairTime, float RepairSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetCurrentRepairPercentage");

	ADunDefTower_TripWire_GetCurrentRepairPercentage_Params params;
	params.StartRepairTime = StartRepairTime;
	params.RepairSpeed = RepairSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.StartRepair
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::StartRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.StartRepair");

	ADunDefTower_TripWire_StartRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetTimeToRepair
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetTimeToRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetTimeToRepair");

	ADunDefTower_TripWire_GetTimeToRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetCostToRepair
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetCostToRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetCostToRepair");

	ADunDefTower_TripWire_GetCostToRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetTimeOfTotalRepair
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetTimeOfTotalRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetTimeOfTotalRepair");

	ADunDefTower_TripWire_GetTimeOfTotalRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.Died
// (Defined, Public)
// Parameters:
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefTower_TripWire::Died(class AController* EventInstigator, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.Died");

	ADunDefTower_TripWire_Died_Params params;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ReportedDeath
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ReportedDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ReportedDeath");

	ADunDefTower_TripWire_ReportedDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ReportDeath
// (Defined, Public)

void ADunDefTower_TripWire::ReportDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ReportDeath");

	ADunDefTower_TripWire_ReportDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.DecreaseLifeEnergy
// (Defined, Simulated, Public)
// Parameters:
// float                          X                              (Parm)

void ADunDefTower_TripWire::DecreaseLifeEnergy(float X)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DecreaseLifeEnergy");

	ADunDefTower_TripWire_DecreaseLifeEnergy_Params params;
	params.X = X;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ContinueDrawingToolTip
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ContinueDrawing                (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::ContinueDrawingToolTip(unsigned long ContinueDrawing)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ContinueDrawingToolTip");

	ADunDefTower_TripWire_ContinueDrawingToolTip_Params params;
	params.ContinueDrawing = ContinueDrawing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.DrawToolTip
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// int                            PosX                           (Parm)
// int                            PosY                           (Parm)
// class ULocalPlayer*            ForPlayer                      (OptionalParm, Parm)

void ADunDefTower_TripWire::DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DrawToolTip");

	ADunDefTower_TripWire_DrawToolTip_Params params;
	params.C = C;
	params.PosX = PosX;
	params.PosY = PosY;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.Sell
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::Sell(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.Sell");

	ADunDefTower_TripWire_Sell_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefTower_TripWire::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.Destroyed");

	ADunDefTower_TripWire_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.PlaySellFX
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::PlaySellFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.PlaySellFX");

	ADunDefTower_TripWire_PlaySellFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.Detonate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            SetDetonationsNumber           (OptionalParm, Parm)

void ADunDefTower_TripWire::Detonate(int SetDetonationsNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.Detonate");

	ADunDefTower_TripWire_Detonate_Params params;
	params.SetDetonationsNumber = SetDetonationsNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ChildEndDetonate
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ChildEndDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ChildEndDetonate");

	ADunDefTower_TripWire_ChildEndDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ChildDetonate
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ChildDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ChildDetonate");

	ADunDefTower_TripWire_ChildDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.RemoveStunnedActor
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  stunRemoval                    (Parm)
// int                            removalIndex                   (OptionalParm, Parm)
// unsigned long                  bDontReplicate                 (OptionalParm, Parm)

void ADunDefTower_TripWire::RemoveStunnedActor(class AActor* stunRemoval, int removalIndex, unsigned long bDontReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.RemoveStunnedActor");

	ADunDefTower_TripWire_RemoveStunnedActor_Params params;
	params.stunRemoval = stunRemoval;
	params.removalIndex = removalIndex;
	params.bDontReplicate = bDontReplicate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.CanStun
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            stunTest                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::CanStun(class ADunDefEnemy* stunTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.CanStun");

	ADunDefTower_TripWire_CanStun_Params params;
	params.stunTest = stunTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.AddStunnedActor
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefEnemy*            newStun                        (Parm)
// struct FBeamTrippers           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBeamTrippers ADunDefTower_TripWire::AddStunnedActor(class ADunDefEnemy* newStun)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.AddStunnedActor");

	ADunDefTower_TripWire_AddStunnedActor_Params params;
	params.newStun = newStun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.ClearBeamTrippers
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bFullClear                     (Parm)

void ADunDefTower_TripWire::ClearBeamTrippers(unsigned long bFullClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ClearBeamTrippers");

	ADunDefTower_TripWire_ClearBeamTrippers_Params params;
	params.bFullClear = bFullClear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetAttackDuration
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetAttackDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetAttackDuration");

	ADunDefTower_TripWire_GetAttackDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.ResetTrip
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ResetTrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ResetTrip");

	ADunDefTower_TripWire_ResetTrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.DeactivateTrip
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bShutDownEffects               (OptionalParm, Parm)

void ADunDefTower_TripWire::DeactivateTrip(unsigned long bShutDownEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DeactivateTrip");

	ADunDefTower_TripWire_DeactivateTrip_Params params;
	params.bShutDownEffects = bShutDownEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ActivateTrip
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ActivateTrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ActivateTrip");

	ADunDefTower_TripWire_ActivateTrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DrawMyHUD");

	ADunDefTower_TripWire_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetTrapDamageMultiplier
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetTrapDamageMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetTrapDamageMultiplier");

	ADunDefTower_TripWire_GetTrapDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetDamageMultiplier
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetDamageMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetDamageMultiplier");

	ADunDefTower_TripWire_GetDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetAttackDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetAttackDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetAttackDamage");

	ADunDefTower_TripWire_GetAttackDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetStunTime
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetStunTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetStunTime");

	ADunDefTower_TripWire_GetStunTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.RemoveTowerBooster
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UTowerBoosterInterface> aBooster                       (Parm)
// int                            indexOverride                  (OptionalParm, Parm)

void ADunDefTower_TripWire::RemoveTowerBooster(const TScriptInterface<class UTowerBoosterInterface>& aBooster, int indexOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.RemoveTowerBooster");

	ADunDefTower_TripWire_RemoveTowerBooster_Params params;
	params.aBooster = aBooster;
	params.indexOverride = indexOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.AddTowerBooster
// (Defined, Simulated, Public)
// Parameters:
// TScriptInterface<class UTowerBoosterInterface> aBooster                       (Parm)

void ADunDefTower_TripWire::AddTowerBooster(const TScriptInterface<class UTowerBoosterInterface>& aBooster)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.AddTowerBooster");

	ADunDefTower_TripWire_AddTowerBooster_Params params;
	params.aBooster = aBooster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.UpdateStuns
// (Defined, Public)

void ADunDefTower_TripWire::UpdateStuns()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.UpdateStuns");

	ADunDefTower_TripWire_UpdateStuns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetAttackRate
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripWire::GetAttackRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetAttackRate");

	ADunDefTower_TripWire_GetAttackRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.DoTracing
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// float                          dt                             (Parm)
// unsigned long                  bForceDamage                   (OptionalParm, Parm)

void ADunDefTower_TripWire::DoTracing(float dt, unsigned long bForceDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DoTracing");

	ADunDefTower_TripWire_DoTracing_Params params;
	params.dt = dt;
	params.bForceDamage = bForceDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.UnTouch
// (Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADunDefTower_TripWire::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.UnTouch");

	ADunDefTower_TripWire_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.Touch
// (Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefTower_TripWire::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.Touch");

	ADunDefTower_TripWire_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.SetDetonateTimer
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::SetDetonateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.SetDetonateTimer");

	ADunDefTower_TripWire_SetDetonateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetEndPoint
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefTower_TripWire::GetEndPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetEndPoint");

	ADunDefTower_TripWire_GetEndPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetBeamStartLoc
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefTower_TripWire::GetBeamStartLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetBeamStartLoc");

	ADunDefTower_TripWire_GetBeamStartLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.UpdateMovementBeams
// (Defined, Simulated, Public, HasDefaults)

void ADunDefTower_TripWire::UpdateMovementBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.UpdateMovementBeams");

	ADunDefTower_TripWire_UpdateMovementBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefTower_TripWire::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.Tick");

	ADunDefTower_TripWire_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ClientSingleSetMovement
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 endLoc                         (Parm)
// struct FRotator                endRot                         (Parm)
// unsigned long                  bShouldCollideWorld            (OptionalParm, Parm)

void ADunDefTower_TripWire::ClientSingleSetMovement(const struct FVector& endLoc, const struct FRotator& endRot, unsigned long bShouldCollideWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ClientSingleSetMovement");

	ADunDefTower_TripWire_ClientSingleSetMovement_Params params;
	params.endLoc = endLoc;
	params.endRot = endRot;
	params.bShouldCollideWorld = bShouldCollideWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ForceSingleMove
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 NewLoc                         (Parm)
// struct FRotator                NewRot                         (Parm)
// unsigned long                  bShouldCollideWorld            (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::ForceSingleMove(const struct FVector& NewLoc, const struct FRotator& NewRot, unsigned long bShouldCollideWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ForceSingleMove");

	ADunDefTower_TripWire_ForceSingleMove_Params params;
	params.NewLoc = NewLoc;
	params.NewRot = NewRot;
	params.bShouldCollideWorld = bShouldCollideWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.DisableSingleMovementReplication
// (Defined, Public)

void ADunDefTower_TripWire::DisableSingleMovementReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DisableSingleMovementReplication");

	ADunDefTower_TripWire_DisableSingleMovementReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.EnableSingleMovementReplicationTimer
// (Defined, Public)
// Parameters:
// float                          Time                           (Parm)

void ADunDefTower_TripWire::EnableSingleMovementReplicationTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.EnableSingleMovementReplicationTimer");

	ADunDefTower_TripWire_EnableSingleMovementReplicationTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.DisableMovementReplication
// (Defined, Public)

void ADunDefTower_TripWire::DisableMovementReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DisableMovementReplication");

	ADunDefTower_TripWire_DisableMovementReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.EnableMovementReplicationTimer
// (Defined, Public)
// Parameters:
// float                          Time                           (Parm)

void ADunDefTower_TripWire::EnableMovementReplicationTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.EnableMovementReplicationTimer");

	ADunDefTower_TripWire_EnableMovementReplicationTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.SetDUCost
// (Defined, Simulated, Public)
// Parameters:
// int                            newDUCost                      (Parm)

void ADunDefTower_TripWire::SetDUCost(int newDUCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.SetDUCost");

	ADunDefTower_TripWire_SetDUCost_Params params;
	params.newDUCost = newDUCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetNextUpgradeLevel
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bForceBeyondMaxUpgrade         (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_TripWire::GetNextUpgradeLevel(unsigned long bForceBeyondMaxUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetNextUpgradeLevel");

	ADunDefTower_TripWire_GetNextUpgradeLevel_Params params;
	params.bForceBeyondMaxUpgrade = bForceBeyondMaxUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetTimeToUpgradeTower
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_TripWire::GetTimeToUpgradeTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetTimeToUpgradeTower");

	ADunDefTower_TripWire_GetTimeToUpgradeTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetCostToUpgradeTower
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_TripWire::GetCostToUpgradeTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetCostToUpgradeTower");

	ADunDefTower_TripWire_GetCostToUpgradeTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetTowerUpgradeLevelStatModifier
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<ELevelUpValueType> valueType                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_TripWire::GetTowerUpgradeLevelStatModifier(TEnumAsByte<ELevelUpValueType> valueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetTowerUpgradeLevelStatModifier");

	ADunDefTower_TripWire_GetTowerUpgradeLevelStatModifier_Params params;
	params.valueType = valueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.ChildDoUpgrade
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ChildDoUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ChildDoUpgrade");

	ADunDefTower_TripWire_ChildDoUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ChildDoDowngrade
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ChildDoDowngrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ChildDoDowngrade");

	ADunDefTower_TripWire_ChildDoDowngrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.DoDowngrade
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::DoDowngrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DoDowngrade");

	ADunDefTower_TripWire_DoDowngrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.DoUpgrade
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::DoUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.DoUpgrade");

	ADunDefTower_TripWire_DoUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.CanBeUpgraded
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripWire::CanBeUpgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.CanBeUpgraded");

	ADunDefTower_TripWire_CanBeUpgraded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.ShutDownBeamEffects
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ShutDownBeamEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ShutDownBeamEffects");

	ADunDefTower_TripWire_ShutDownBeamEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ActivateBeamEffects
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bActive                        (Parm)

void ADunDefTower_TripWire::ActivateBeamEffects(unsigned long bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ActivateBeamEffects");

	ADunDefTower_TripWire_ActivateBeamEffects_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ActivateBeam
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::ActivateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ActivateBeam");

	ADunDefTower_TripWire_ActivateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetBeamPoint
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefTower_TripWire::GetBeamPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetBeamPoint");

	ADunDefTower_TripWire_GetBeamPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.GetCollisionPoint
// (Simulated, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefTower_TripWire::GetCollisionPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.GetCollisionPoint");

	ADunDefTower_TripWire_GetCollisionPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripWire.SetPlacementPoints
// (Defined, Public, HasDefaults)
// Parameters:
// TArray<struct FVector>         SpawnPoints                    (Parm, NeedCtorLink)
// class ADunDefTower*            NodeTemplate                   (Parm)

void ADunDefTower_TripWire::SetPlacementPoints(TArray<struct FVector> SpawnPoints, class ADunDefTower* NodeTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.SetPlacementPoints");

	ADunDefTower_TripWire_SetPlacementPoints_Params params;
	params.SpawnPoints = SpawnPoints;
	params.NodeTemplate = NodeTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.InitializeForInstigator
// (Defined, Public)
// Parameters:
// class APawn*                   Pawn                           (Parm)

void ADunDefTower_TripWire::InitializeForInstigator(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.InitializeForInstigator");

	ADunDefTower_TripWire_InitializeForInstigator_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.SetUpCollisionMesh
// (Simulated, Public)

void ADunDefTower_TripWire::SetUpCollisionMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.SetUpCollisionMesh");

	ADunDefTower_TripWire_SetUpCollisionMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.InitalizeStatObject
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::InitalizeStatObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.InitalizeStatObject");

	ADunDefTower_TripWire_InitalizeStatObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.OnDestroy_RemoveFromTargetableList
// (Defined, Public)

void ADunDefTower_TripWire::OnDestroy_RemoveFromTargetableList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.OnDestroy_RemoveFromTargetableList");

	ADunDefTower_TripWire_OnDestroy_RemoveFromTargetableList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.OnPostBeginPlay_AddToTargetableList
// (Defined, Public)

void ADunDefTower_TripWire::OnPostBeginPlay_AddToTargetableList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.OnPostBeginPlay_AddToTargetableList");

	ADunDefTower_TripWire_OnPostBeginPlay_AddToTargetableList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefTower_TripWire::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.PostBeginPlay");

	ADunDefTower_TripWire_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.SetUseHealthBarMat
// (Defined, Simulated, Public)

void ADunDefTower_TripWire::SetUseHealthBarMat()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.SetUseHealthBarMat");

	ADunDefTower_TripWire_SetUseHealthBarMat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripWire.ExecReplicatedFunction
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

void ADunDefTower_TripWire::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ExecReplicatedFunction");

	ADunDefTower_TripWire_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefTower_TripWire.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefTower_TripWire::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripWire.ReplicatedEvent");

	ADunDefTower_TripWire_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.DisableAbilityMove
// (Defined, Net, NetReliable, Public, NetServer)

void ADunDefTower_TripPhysical::DisableAbilityMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.DisableAbilityMove");

	ADunDefTower_TripPhysical_DisableAbilityMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.AllowAbilityMove
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripPhysical::AllowAbilityMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.AllowAbilityMove");

	ADunDefTower_TripPhysical_AllowAbilityMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ClientDisableMovementReplication
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 endedLoc                       (Parm)

void ADunDefTower_TripPhysical::ClientDisableMovementReplication(const struct FVector& endedLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ClientDisableMovementReplication");

	ADunDefTower_TripPhysical_ClientDisableMovementReplication_Params params;
	params.endedLoc = endedLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.BaseChange
// (Defined, Event, Public)

void ADunDefTower_TripPhysical::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.BaseChange");

	ADunDefTower_TripPhysical_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ForceMoveActor
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class AActor*                  Mover                          (Parm)
// struct FVector                 NewLoc                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripPhysical::ForceMoveActor(class AActor* Mover, const struct FVector& NewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ForceMoveActor");

	ADunDefTower_TripPhysical_ForceMoveActor_Params params;
	params.Mover = Mover;
	params.NewLoc = NewLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetSelectionLocation
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  wantsLocation                  (Parm)
// struct FVector                 bestLoc                        (Parm, OutParm)

void ADunDefTower_TripPhysical::GetSelectionLocation(class AActor* wantsLocation, struct FVector* bestLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetSelectionLocation");

	ADunDefTower_TripPhysical_GetSelectionLocation_Params params;
	params.wantsLocation = wantsLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bestLoc != nullptr)
		*bestLoc = params.bestLoc;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.IsPhysicalTower
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripPhysical::IsPhysicalTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.IsPhysicalTower");

	ADunDefTower_TripPhysical_IsPhysicalTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefTower_TripPhysical::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.DrawMiniMapIcon");

	ADunDefTower_TripPhysical_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.UpdateMovementBeams
// (Defined, Simulated, Public, HasDefaults)

void ADunDefTower_TripPhysical::UpdateMovementBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.UpdateMovementBeams");

	ADunDefTower_TripPhysical_UpdateMovementBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.IsPreviousToolTipActor
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* ownerCheck                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripPhysical::IsPreviousToolTipActor(class ADunDefPlayerController* ownerCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.IsPreviousToolTipActor");

	ADunDefTower_TripPhysical_IsPreviousToolTipActor_Params params;
	params.ownerCheck = ownerCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.UpdateDamageFlashing
// (Defined, Simulated, Public)

void ADunDefTower_TripPhysical::UpdateDamageFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.UpdateDamageFlashing");

	ADunDefTower_TripPhysical_UpdateDamageFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.PerformFullHeal
// (Defined, Public)

void ADunDefTower_TripPhysical::PerformFullHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.PerformFullHeal");

	ADunDefTower_TripPhysical_PerformFullHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.HealDamage
// (Defined, Event, Public)
// Parameters:
// int                            Amount                         (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripPhysical::HealDamage(int Amount, class AController* Healer, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.HealDamage");

	ADunDefTower_TripPhysical_HealDamage_Params params;
	params.Amount = Amount;
	params.Healer = Healer;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.IncrementRepair
// (Defined, Public)
// Parameters:
// float                          CurrentMana                    (Parm)
// float                          DeltaTime                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::IncrementRepair(float CurrentMana, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.IncrementRepair");

	ADunDefTower_TripPhysical_IncrementRepair_Params params;
	params.CurrentMana = CurrentMana;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetCurrentRepairPercentage
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          StartRepairTime                (OptionalParm, Parm)
// float                          RepairSpeed                    (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetCurrentRepairPercentage(float StartRepairTime, float RepairSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetCurrentRepairPercentage");

	ADunDefTower_TripPhysical_GetCurrentRepairPercentage_Params params;
	params.StartRepairTime = StartRepairTime;
	params.RepairSpeed = RepairSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.StartRepair
// (Defined, Simulated, Public)

void ADunDefTower_TripPhysical::StartRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.StartRepair");

	ADunDefTower_TripPhysical_StartRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeToRepair
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetTimeToRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeToRepair");

	ADunDefTower_TripPhysical_GetTimeToRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetCostToRepair
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetCostToRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetCostToRepair");

	ADunDefTower_TripPhysical_GetCostToRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeOfTotalRepair
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetTimeOfTotalRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeOfTotalRepair");

	ADunDefTower_TripPhysical_GetTimeOfTotalRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetToolTipText
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefTower_TripPhysical::GetToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetToolTipText");

	ADunDefTower_TripPhysical_GetToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetGlobalTowerHealthMultiplier
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetGlobalTowerHealthMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetGlobalTowerHealthMultiplier");

	ADunDefTower_TripPhysical_GetGlobalTowerHealthMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.Bump
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitNormal                      (Parm)

void ADunDefTower_TripPhysical::Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.Bump");

	ADunDefTower_TripPhysical_Bump_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetOverrideTargetComponent
// (Defined, Simulated, Public)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UPrimitiveComponent* ADunDefTower_TripPhysical::GetOverrideTargetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetOverrideTargetComponent");

	ADunDefTower_TripPhysical_GetOverrideTargetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.DrawToolTip
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class UCanvas*                 C                              (Parm)
// int                            PosX                           (Parm)
// int                            PosY                           (Parm)
// class ULocalPlayer*            ForPlayer                      (OptionalParm, Parm)

void ADunDefTower_TripPhysical::DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.DrawToolTip");

	ADunDefTower_TripPhysical_DrawToolTip_Params params;
	params.C = C;
	params.PosX = PosX;
	params.PosY = PosY;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetHealthPercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetHealthPercent");

	ADunDefTower_TripPhysical_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetHealth
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bGetMax                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_TripPhysical::GetHealth(unsigned long bGetMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetHealth");

	ADunDefTower_TripPhysical_GetHealth_Params params;
	params.bGetMax = bGetMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.AddHealth
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            howMuch                        (Parm)
// unsigned long                  bDontDisplayFloatingNumber     (OptionalParm, Parm)

void ADunDefTower_TripPhysical::AddHealth(int howMuch, unsigned long bDontDisplayFloatingNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.AddHealth");

	ADunDefTower_TripPhysical_AddHealth_Params params;
	params.howMuch = howMuch;
	params.bDontDisplayFloatingNumber = bDontDisplayFloatingNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeamEffects
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bActive                        (Parm)

void ADunDefTower_TripPhysical::ActivateBeamEffects(unsigned long bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeamEffects");

	ADunDefTower_TripPhysical_ActivateBeamEffects_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ShutDownBeamEffects
// (Defined, Simulated, Public)

void ADunDefTower_TripPhysical::ShutDownBeamEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ShutDownBeamEffects");

	ADunDefTower_TripPhysical_ShutDownBeamEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateTrip
// (Defined, Simulated, Public)

void ADunDefTower_TripPhysical::ActivateTrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ActivateTrip");

	ADunDefTower_TripPhysical_ActivateTrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripPhysical::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.DrawMyHUD");

	ADunDefTower_TripPhysical_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.NeedsRepair
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  requireFullHealth              (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripPhysical::NeedsRepair(unsigned long requireFullHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.NeedsRepair");

	ADunDefTower_TripPhysical_NeedsRepair_Params params;
	params.requireFullHealth = requireFullHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.SubtractHealth
// (Defined, Public)
// Parameters:
// int                            DamageAmount                   (Parm)

void ADunDefTower_TripPhysical::SubtractHealth(int DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.SubtractHealth");

	ADunDefTower_TripPhysical_SubtractHealth_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.TakeDamage
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

void ADunDefTower_TripPhysical::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.TakeDamage");

	ADunDefTower_TripPhysical_TakeDamage_Params params;
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


// Function DunDefSpecial.DunDefTower_TripPhysical.GetAttackRangeOffset
// (Defined, Public, HasDefaults)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetAttackRangeOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetAttackRangeOffset");

	ADunDefTower_TripPhysical_GetAttackRangeOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetTargetingLocation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefTower_TripPhysical::GetTargetingLocation(class AActor* RequestedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetTargetingLocation");

	ADunDefTower_TripPhysical_GetTargetingLocation_Params params;
	params.RequestedBy = RequestedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerDamageMultiplier
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetPhysicalTowerDamageMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerDamageMultiplier");

	ADunDefTower_TripPhysical_GetPhysicalTowerDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerHealthMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetPhysicalTowerHealthMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerHealthMultiplier");

	ADunDefTower_TripPhysical_GetPhysicalTowerHealthMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetAuraDamageMultiplier
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetAuraDamageMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetAuraDamageMultiplier");

	ADunDefTower_TripPhysical_GetAuraDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.UseForTowerSelectionPassThrough
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripPhysical::UseForTowerSelectionPassThrough()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.UseForTowerSelectionPassThrough");

	ADunDefTower_TripPhysical_UseForTowerSelectionPassThrough_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetTowerTargetingDesirability");

	ADunDefTower_TripPhysical_GetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* forController                  (Parm)
// class ADunDefPlayer*           ForPlayer                      (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripPhysical::GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetPlayerTargetingDesirability");

	ADunDefTower_TripPhysical_GetPlayerTargetingDesirability_Params params;
	params.forController = forController;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ActivatePlaneBeam
// (Defined, Simulated, Public, HasDefaults)

void ADunDefTower_TripPhysical::ActivatePlaneBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ActivatePlaneBeam");

	ADunDefTower_TripPhysical_ActivatePlaneBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeam
// (Simulated, Public)

void ADunDefTower_TripPhysical::ActivateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeam");

	ADunDefTower_TripPhysical_ActivateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ModifyTranslation
// (Defined, Simulated, Public, HasDefaults)

void ADunDefTower_TripPhysical::ModifyTranslation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ModifyTranslation");

	ADunDefTower_TripPhysical_ModifyTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.SetUpCollisionMesh
// (Defined, Simulated, Public)

void ADunDefTower_TripPhysical::SetUpCollisionMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.SetUpCollisionMesh");

	ADunDefTower_TripPhysical_SetUpCollisionMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetCollisionPoint
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefTower_TripPhysical::GetCollisionPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetCollisionPoint");

	ADunDefTower_TripPhysical_GetCollisionPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.GetSecondBeamPoint
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefTower_TripPhysical::GetSecondBeamPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.GetSecondBeamPoint");

	ADunDefTower_TripPhysical_GetSecondBeamPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ScaleInBeams
// (Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefTower_TripPhysical::ScaleInBeams(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ScaleInBeams");

	ADunDefTower_TripPhysical_ScaleInBeams_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.StartBeams
// (Simulated, Public)

void ADunDefTower_TripPhysical::StartBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.StartBeams");

	ADunDefTower_TripPhysical_StartBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefTower_TripPhysical::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.PostBeginPlay");

	ADunDefTower_TripPhysical_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.SetPlacementPoints
// (Defined, Public)
// Parameters:
// TArray<struct FVector>         SpawnPoints                    (Parm, NeedCtorLink)
// class ADunDefTower*            NodeTemplate                   (Parm)

void ADunDefTower_TripPhysical::SetPlacementPoints(TArray<struct FVector> SpawnPoints, class ADunDefTower* NodeTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.SetPlacementPoints");

	ADunDefTower_TripPhysical_SetPlacementPoints_Params params;
	params.SpawnPoints = SpawnPoints;
	params.NodeTemplate = NodeTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripPhysical.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefTower_TripPhysical::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripPhysical.ReplicatedEvent");

	ADunDefTower_TripPhysical_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Hovering.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefPlayer_Hovering::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Hovering.PostBeginPlay");

	ADunDefPlayer_Hovering_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Hovering.StopHovering
// (Defined, Simulated, Public)

void ADunDefPlayer_Hovering::StopHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Hovering.StopHovering");

	ADunDefPlayer_Hovering_StopHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Hovering.StartHovering
// (Defined, Simulated, Public)

void ADunDefPlayer_Hovering::StartHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Hovering.StartHovering");

	ADunDefPlayer_Hovering_StartHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Hovering.ExecReplicatedFunction
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

void ADunDefPlayer_Hovering::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Hovering.ExecReplicatedFunction");

	ADunDefPlayer_Hovering_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayer_Summoner.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefPlayer_Summoner::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.DrawMiniMapIcon");

	ADunDefPlayer_Summoner_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetPhaseShiftMaterials
// (Defined, Simulated, Public)
// Parameters:
// TArray<class UMaterialInstanceConstant*> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UMaterialInstanceConstant*> ADunDefPlayer_Summoner::GetPhaseShiftMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetPhaseShiftMaterials");

	ADunDefPlayer_Summoner_GetPhaseShiftMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.IssuedCommand
// (Defined, Simulated, Public)

void ADunDefPlayer_Summoner::IssuedCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.IssuedCommand");

	ADunDefPlayer_Summoner_IssuedCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetSellTowerEmitter
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEmitterSpawnable* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetSellTowerEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetSellTowerEmitter");

	ADunDefPlayer_Summoner_GetSellTowerEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetTrapDetonationEmitter
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEmitterSpawnable* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetTrapDetonationEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetTrapDetonationEmitter");

	ADunDefPlayer_Summoner_GetTrapDetonationEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetUpgradingWeaponEmitter
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEmitterSpawnable* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetUpgradingWeaponEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetUpgradingWeaponEmitter");

	ADunDefPlayer_Summoner_GetUpgradingWeaponEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetWeaponRepairEmitter
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEmitterSpawnable* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetWeaponRepairEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetWeaponRepairEmitter");

	ADunDefPlayer_Summoner_GetWeaponRepairEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetHealingWeaponEmitter
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEmitterSpawnable* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetHealingWeaponEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetHealingWeaponEmitter");

	ADunDefPlayer_Summoner_GetHealingWeaponEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetSummoningTowerEmitter
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEmitterSpawnable* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetSummoningTowerEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetSummoningTowerEmitter");

	ADunDefPlayer_Summoner_GetSummoningTowerEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.StopSpellEmitter
// (Defined, Simulated, Public)

void ADunDefPlayer_Summoner::StopSpellEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.StopSpellEmitter");

	ADunDefPlayer_Summoner_StopSpellEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.StartSpellEmitter
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class ADunDefEmitterSpawnable* Template                       (Parm)
// unsigned long                  DontSetAsPrimaryEffect         (OptionalParm, Parm)
// unsigned long                  IsSpawnEffect                  (OptionalParm, Parm)
// unsigned long                  bForceSpawnOnWeapon            (OptionalParm, Parm)

void ADunDefPlayer_Summoner::StartSpellEmitter(class ADunDefEmitterSpawnable* Template, unsigned long DontSetAsPrimaryEffect, unsigned long IsSpawnEffect, unsigned long bForceSpawnOnWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.StartSpellEmitter");

	ADunDefPlayer_Summoner_StartSpellEmitter_Params params;
	params.Template = Template;
	params.DontSetAsPrimaryEffect = DontSetAsPrimaryEffect;
	params.IsSpawnEffect = IsSpawnEffect;
	params.bForceSpawnOnWeapon = bForceSpawnOnWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.AllowDropPickups
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_Summoner::AllowDropPickups()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.AllowDropPickups");

	ADunDefPlayer_Summoner_AllowDropPickups_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.SetOwnerNoSee
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  ownerNoSee                     (Parm)
// unsigned long                  ownerNoSeeWeapon               (OptionalParm, Parm)

void ADunDefPlayer_Summoner::SetOwnerNoSee(unsigned long ownerNoSee, unsigned long ownerNoSeeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.SetOwnerNoSee");

	ADunDefPlayer_Summoner_SetOwnerNoSee_Params params;
	params.ownerNoSee = ownerNoSee;
	params.ownerNoSeeWeapon = ownerNoSeeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_Summoner::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.Died");

	ADunDefPlayer_Summoner_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetEnemyTargetingDesirability
// (Defined, Event, Public)
// Parameters:
// class AEngineNativeDunDefAIController* forController                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayer_Summoner::GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetEnemyTargetingDesirability");

	ADunDefPlayer_Summoner_GetEnemyTargetingDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.TakeDamage
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

void ADunDefPlayer_Summoner::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.TakeDamage");

	ADunDefPlayer_Summoner_TakeDamage_Params params;
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


// Function DunDefSpecial.DunDefPlayer_Summoner.PhaseScaleDown
// (Defined, Event, Public)

void ADunDefPlayer_Summoner::PhaseScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.PhaseScaleDown");

	ADunDefPlayer_Summoner_PhaseScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.UsedAbility
// (Defined, Public)
// Parameters:
// class ADunDefPlayerAbility*    ability                        (Parm)

void ADunDefPlayer_Summoner::UsedAbility(class ADunDefPlayerAbility* ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.UsedAbility");

	ADunDefPlayer_Summoner_UsedAbility_Params params;
	params.ability = ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.CheckForTokens
// (Defined, Simulated, Public)

void ADunDefPlayer_Summoner::CheckForTokens()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.CheckForTokens");

	ADunDefPlayer_Summoner_CheckForTokens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.AllowFamiliarAbilities
// (Defined, Simulated, Public)
// Parameters:
// class UHeroEquipment_Familiar* askingFamiliar                 (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_Summoner::AllowFamiliarAbilities(class UHeroEquipment_Familiar* askingFamiliar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.AllowFamiliarAbilities");

	ADunDefPlayer_Summoner_AllowFamiliarAbilities_Params params;
	params.askingFamiliar = askingFamiliar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.AttachAllEquipment
// (Defined, Simulated, Public)

void ADunDefPlayer_Summoner::AttachAllEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.AttachAllEquipment");

	ADunDefPlayer_Summoner_AttachAllEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.DetachAllEquipment
// (Defined, Simulated, Public)

void ADunDefPlayer_Summoner::DetachAllEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.DetachAllEquipment");

	ADunDefPlayer_Summoner_DetachAllEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.SetPhased
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bNewPhaseState                 (Parm)

void ADunDefPlayer_Summoner::SetPhased(unsigned long bNewPhaseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.SetPhased");

	ADunDefPlayer_Summoner_SetPhased_Params params;
	params.bNewPhaseState = bNewPhaseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.AllowEquipmentAttachment
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_Summoner::AllowEquipmentAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.AllowEquipmentAttachment");

	ADunDefPlayer_Summoner_AllowEquipmentAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefPlayer_Summoner::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.Destroyed");

	ADunDefPlayer_Summoner_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.StopFire
// (Simulated, Public)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefPlayer_Summoner::StopFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.StopFire");

	ADunDefPlayer_Summoner_StopFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.StartFire
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefPlayer_Summoner::StartFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.StartFire");

	ADunDefPlayer_Summoner_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.GetSelectedTowers
// (Defined, Simulated, Public)
// Parameters:
// TArray<class ADunDefTower_SummonEnemy*> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class ADunDefTower_SummonEnemy*> ADunDefPlayer_Summoner::GetSelectedTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.GetSelectedTowers");

	ADunDefPlayer_Summoner_GetSelectedTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.RemoveSelectedTower
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower_SummonEnemy* RemoveTower                    (Parm)

void ADunDefPlayer_Summoner::RemoveSelectedTower(class ADunDefTower_SummonEnemy* RemoveTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.RemoveSelectedTower");

	ADunDefPlayer_Summoner_RemoveSelectedTower_Params params;
	params.RemoveTower = RemoveTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.ServerRemoveSelectedTower
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// class ADunDefTower_SummonEnemy* RemoveTower                    (Parm)

void ADunDefPlayer_Summoner::ServerRemoveSelectedTower(class ADunDefTower_SummonEnemy* RemoveTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.ServerRemoveSelectedTower");

	ADunDefPlayer_Summoner_ServerRemoveSelectedTower_Params params;
	params.RemoveTower = RemoveTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.RemoveAllSelectedTowers
// (Defined, Simulated, Public)

void ADunDefPlayer_Summoner::RemoveAllSelectedTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.RemoveAllSelectedTowers");

	ADunDefPlayer_Summoner_RemoveAllSelectedTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.HasSelectedTower
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower_SummonEnemy* chkTower                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_Summoner::HasSelectedTower(class ADunDefTower_SummonEnemy* chkTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.HasSelectedTower");

	ADunDefPlayer_Summoner_HasSelectedTower_Params params;
	params.chkTower = chkTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTowerGroup
// (Defined, Simulated, Public)
// Parameters:
// TArray<class ADunDefTower_SummonEnemy*> newTowers                      (Parm, NeedCtorLink)

void ADunDefPlayer_Summoner::AddSelectedTowerGroup(TArray<class ADunDefTower_SummonEnemy*> newTowers)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTowerGroup");

	ADunDefPlayer_Summoner_AddSelectedTowerGroup_Params params;
	params.newTowers = newTowers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.ServerAddSelectedTower
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// class ADunDefTower_SummonEnemy* newTower                       (Parm)

void ADunDefPlayer_Summoner::ServerAddSelectedTower(class ADunDefTower_SummonEnemy* newTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.ServerAddSelectedTower");

	ADunDefPlayer_Summoner_ServerAddSelectedTower_Params params;
	params.newTower = newTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTower
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower_SummonEnemy* newTower                       (Parm)

void ADunDefPlayer_Summoner::AddSelectedTower(class ADunDefTower_SummonEnemy* newTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTower");

	ADunDefPlayer_Summoner_AddSelectedTower_Params params;
	params.newTower = newTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.ClientSetupColors
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPlayer_Summoner::ClientSetupColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.ClientSetupColors");

	ADunDefPlayer_Summoner_ClientSetupColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.SetMyCustomColors
// (Defined, Public, HasDefaults)
// Parameters:
// class ADunDefPlayerController* aController                    (Parm)
// class UDunDefHero*             usingHero                      (Parm)

void ADunDefPlayer_Summoner::SetMyCustomColors(class ADunDefPlayerController* aController, class UDunDefHero* usingHero)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.SetMyCustomColors");

	ADunDefPlayer_Summoner_SetMyCustomColors_Params params;
	params.aController = aController;
	params.usingHero = usingHero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayer_Summoner::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.PostBeginPlay");

	ADunDefPlayer_Summoner_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Summoner.ExecReplicatedFunction
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

void ADunDefPlayer_Summoner::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.ExecReplicatedFunction");

	ADunDefPlayer_Summoner_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayer_Summoner.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPlayer_Summoner::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Summoner.ReplicatedEvent");

	ADunDefPlayer_Summoner_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.DTGetEnemyTargetingDesirability
// (Defined, Public)
// Parameters:
// class ADunDefEnemyController*  forController                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDecoyTarget::DTGetEnemyTargetingDesirability(class ADunDefEnemyController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.DTGetEnemyTargetingDesirability");

	ADunDefDecoyTarget_DTGetEnemyTargetingDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDecoyTarget.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDecoyTarget::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.DrawMyHUD");

	ADunDefDecoyTarget_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDecoyTarget.PlayDeath
// (Defined, Simulated, Public)

void ADunDefDecoyTarget::PlayDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.PlayDeath");

	ADunDefDecoyTarget_PlayDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.AllowHeroGUID
// (Public)
// Parameters:
// int                            GUID1                          (Parm)
// int                            GUID2                          (Parm)
// int                            GUID3                          (Parm)
// int                            GUID4                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDecoyTarget::AllowHeroGUID(int GUID1, int GUID2, int GUID3, int GUID4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.AllowHeroGUID");

	ADunDefDecoyTarget_AllowHeroGUID_Params params;
	params.GUID1 = GUID1;
	params.GUID2 = GUID2;
	params.GUID3 = GUID3;
	params.GUID4 = GUID4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDecoyTarget.CanDetonate
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDecoyTarget::CanDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.CanDetonate");

	ADunDefDecoyTarget_CanDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDecoyTarget.Detonate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            SetDetonationsNumber           (OptionalParm, Parm)

void ADunDefDecoyTarget::Detonate(int SetDetonationsNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.Detonate");

	ADunDefDecoyTarget_Detonate_Params params;
	params.SetDetonationsNumber = SetDetonationsNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.SelfDestruct
// (Defined, Public)

void ADunDefDecoyTarget::SelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.SelfDestruct");

	ADunDefDecoyTarget_SelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefDecoyTarget::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.ScaleForHeroModifiers");

	ADunDefDecoyTarget_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.IsClassOnIgnoreList
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  ActorClass                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDecoyTarget::IsClassOnIgnoreList(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.IsClassOnIgnoreList");

	ADunDefDecoyTarget_IsClassOnIgnoreList_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDecoyTarget.SetMaxNumberOfAttackers
// (Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDecoyTarget::SetMaxNumberOfAttackers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.SetMaxNumberOfAttackers");

	ADunDefDecoyTarget_SetMaxNumberOfAttackers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDecoyTarget.SetActiveTime
// (Defined, Public)

void ADunDefDecoyTarget::SetActiveTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.SetActiveTime");

	ADunDefDecoyTarget_SetActiveTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.DoPoke
// (Defined, Public)

void ADunDefDecoyTarget::DoPoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.DoPoke");

	ADunDefDecoyTarget_DoPoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.SetDesirability
// (Defined, Simulated, Public)

void ADunDefDecoyTarget::SetDesirability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.SetDesirability");

	ADunDefDecoyTarget_SetDesirability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.SetHealth
// (Defined, Simulated, Public)

void ADunDefDecoyTarget::SetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.SetHealth");

	ADunDefDecoyTarget_SetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefDecoyTarget::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.Tick");

	ADunDefDecoyTarget_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefDecoyTarget::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.DrawMiniMapIcon");

	ADunDefDecoyTarget_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefDecoyTarget::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.Destroyed");

	ADunDefDecoyTarget_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDecoyTarget.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefDecoyTarget::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDecoyTarget.PostBeginPlay");

	ADunDefDecoyTarget_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.PreventTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// float                          towerRadius                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDropOffPoint::PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.PreventTowerAtPoint");

	ADunDefDropOffPoint_PreventTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;
	params.towerRadius = towerRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDropOffPoint.AllowTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDropOffPoint::AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.AllowTowerAtPoint");

	ADunDefDropOffPoint_AllowTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDropOffPoint.CheckAllowance
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDropOffPoint::CheckAllowance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.CheckAllowance");

	ADunDefDropOffPoint_CheckAllowance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDropOffPoint.DTGetEnemyTargetingDesirability
// (Defined, Public)
// Parameters:
// class ADunDefEnemyController*  forController                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDropOffPoint::DTGetEnemyTargetingDesirability(class ADunDefEnemyController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.DTGetEnemyTargetingDesirability");

	ADunDefDropOffPoint_DTGetEnemyTargetingDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDropOffPoint.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefDropOffPoint::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.PostBeginPlay");

	ADunDefDropOffPoint_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDestroyed
// (Defined, Simulated, Public)

void ADunDefDropOffPoint::NotifyPackageDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDestroyed");

	ADunDefDropOffPoint_NotifyPackageDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.Died
// (Defined, Public)
// Parameters:
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefDropOffPoint::Died(class AController* EventInstigator, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.Died");

	ADunDefDropOffPoint_Died_Params params;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.NotifyHealthChange
// (Defined, Simulated, Public)

void ADunDefDropOffPoint::NotifyHealthChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.NotifyHealthChange");

	ADunDefDropOffPoint_NotifyHealthChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.PlayHitEffect
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDefDropOffPoint::PlayHitEffect(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.PlayHitEffect");

	ADunDefDropOffPoint_PlayHitEffect_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.AdjustDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// int                            DamageAmount                   (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)

void ADunDefDropOffPoint::AdjustDamage(class UClass* DamageType, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FTraceHitInfo& HitInfo, int* DamageAmount, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.AdjustDamage");

	ADunDefDropOffPoint_AdjustDamage_Params params;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageAmount != nullptr)
		*DamageAmount = params.DamageAmount;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefSpecial.DunDefDropOffPoint.OnlyDrawHUDForOwner
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDropOffPoint::OnlyDrawHUDForOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.OnlyDrawHUDForOwner");

	ADunDefDropOffPoint_OnlyDrawHUDForOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDropOffPoint.DrawMiniMapIcon
// (Defined, Simulated, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefDropOffPoint::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.DrawMiniMapIcon");

	ADunDefDropOffPoint_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.DrawActiveDisplay
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// struct FVector                 ScreenPos                      (Parm)
// float                          Scale                          (Parm)
// float                          Opacity                        (Parm)
// unsigned long                  bIsMiniMap                     (OptionalParm, Parm)

void ADunDefDropOffPoint::DrawActiveDisplay(class UCanvas* C, const struct FVector& ScreenPos, float Scale, float Opacity, unsigned long bIsMiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.DrawActiveDisplay");

	ADunDefDropOffPoint_DrawActiveDisplay_Params params;
	params.C = C;
	params.ScreenPos = ScreenPos;
	params.Scale = Scale;
	params.Opacity = Opacity;
	params.bIsMiniMap = bIsMiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDropOffPoint::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.DrawMyHUD");

	ADunDefDropOffPoint_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDropOffPoint.DeactivatePoint
// (Defined, Public)

void ADunDefDropOffPoint::DeactivatePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.DeactivatePoint");

	ADunDefDropOffPoint_DeactivatePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.TurnOffActiveEffects
// (Defined, Simulated, Public)

void ADunDefDropOffPoint::TurnOffActiveEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.TurnOffActiveEffects");

	ADunDefDropOffPoint_TurnOffActiveEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.TurnOnActiveEffects
// (Defined, Simulated, Public)

void ADunDefDropOffPoint::TurnOnActiveEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.TurnOnActiveEffects");

	ADunDefDropOffPoint_TurnOnActiveEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.ActivatePoint
// (Defined, Public)
// Parameters:
// int                            maxDropOffs                    (Parm)

void ADunDefDropOffPoint::ActivatePoint(int maxDropOffs)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.ActivatePoint");

	ADunDefDropOffPoint_ActivatePoint_Params params;
	params.maxDropOffs = maxDropOffs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.ClearDropOffActor
// (Defined, Simulated, Public)

void ADunDefDropOffPoint::ClearDropOffActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.ClearDropOffActor");

	ADunDefDropOffPoint_ClearDropOffActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.SetDropOffActor
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           DoA                            (Parm)

void ADunDefDropOffPoint::SetDropOffActor(class ADunDefPlayer* DoA)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.SetDropOffActor");

	ADunDefDropOffPoint_SetDropOffActor_Params params;
	params.DoA = DoA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDropOff
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           theDropper                     (Parm)

void ADunDefDropOffPoint::NotifyPackageDropOff(class ADunDefPlayer* theDropper)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDropOff");

	ADunDefDropOffPoint_NotifyPackageDropOff_Params params;
	params.theDropper = theDropper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.PlaceNewItem
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefPickupableItem*   NewItem                        (Parm)

void ADunDefDropOffPoint::PlaceNewItem(class ADunDefPickupableItem* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.PlaceNewItem");

	ADunDefDropOffPoint_PlaceNewItem_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.IsFull
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefDropOffPoint::IsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.IsFull");

	ADunDefDropOffPoint_IsFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefDropOffPoint.RemoveDropOffItem
// (Defined, Public)
// Parameters:
// class ADunDefPickupableItem*   RemoveItem                     (Parm)

void ADunDefDropOffPoint::RemoveDropOffItem(class ADunDefPickupableItem* RemoveItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.RemoveDropOffItem");

	ADunDefDropOffPoint_RemoveDropOffItem_Params params;
	params.RemoveItem = RemoveItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.DropOffUnFilled
// (Defined, Simulated, Public)

void ADunDefDropOffPoint::DropOffUnFilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.DropOffUnFilled");

	ADunDefDropOffPoint_DropOffUnFilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.DropOffFilled
// (Defined, Simulated, Public)

void ADunDefDropOffPoint::DropOffFilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.DropOffFilled");

	ADunDefDropOffPoint_DropOffFilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.AddDropOffItem
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           droppedOffActor                (Parm)

void ADunDefDropOffPoint::AddDropOffItem(class ADunDefPlayer* droppedOffActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.AddDropOffItem");

	ADunDefDropOffPoint_AddDropOffItem_Params params;
	params.droppedOffActor = droppedOffActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.UpdateDropOff
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefDropOffPoint::UpdateDropOff(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.UpdateDropOff");

	ADunDefDropOffPoint_UpdateDropOff_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefDropOffPoint::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.Tick");

	ADunDefDropOffPoint_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.UnTouch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADunDefDropOffPoint::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.UnTouch");

	ADunDefDropOffPoint_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefDropOffPoint::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.Touch");

	ADunDefDropOffPoint_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefDropOffPoint.ExecReplicatedFunction
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

void ADunDefDropOffPoint::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.ExecReplicatedFunction");

	ADunDefDropOffPoint_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefDropOffPoint.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefDropOffPoint::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefDropOffPoint.ReplicatedEvent");

	ADunDefDropOffPoint_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.SetDroppingOff
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  IsDroppingOff                  (Parm)
// class ADunDefDropOffPoint*     newDP                          (Parm)

void ADunDefPickupableItem::SetDroppingOff(unsigned long IsDroppingOff, class ADunDefDropOffPoint* newDP)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.SetDroppingOff");

	ADunDefPickupableItem_SetDroppingOff_Params params;
	params.IsDroppingOff = IsDroppingOff;
	params.newDP = newDP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefPickupableItem::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.Destroyed");

	ADunDefPickupableItem_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.NotifyHolderLost
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           lostHolder                     (Parm)

void ADunDefPickupableItem::NotifyHolderLost(class ADunDefPlayer* lostHolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.NotifyHolderLost");

	ADunDefPickupableItem_NotifyHolderLost_Params params;
	params.lostHolder = lostHolder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.DoDestroyEffects
// (Defined, Simulated, Public)

void ADunDefPickupableItem::DoDestroyEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.DoDestroyEffects");

	ADunDefPickupableItem_DoDestroyEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.DestroyPickUp
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bFromDamage                    (OptionalParm, Parm)

void ADunDefPickupableItem::DestroyPickUp(unsigned long bFromDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.DestroyPickUp");

	ADunDefPickupableItem_DestroyPickUp_Params params;
	params.bFromDamage = bFromDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.PlaceAtPoint
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 NewLoc                         (Parm)

void ADunDefPickupableItem::PlaceAtPoint(const struct FVector& NewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.PlaceAtPoint");

	ADunDefPickupableItem_PlaceAtPoint_Params params;
	params.NewLoc = NewLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.DropOffItem
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefDropOffPoint*     DropOffPoint                   (OptionalParm, Parm)

void ADunDefPickupableItem::DropOffItem(class ADunDefDropOffPoint* DropOffPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.DropOffItem");

	ADunDefPickupableItem_DropOffItem_Params params;
	params.DropOffPoint = DropOffPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.DrawWaypointToMe
// (Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefPickupableItem::DrawWaypointToMe(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.DrawWaypointToMe");

	ADunDefPickupableItem_DrawWaypointToMe_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.GetDropOffWayPt
// (Public)

void ADunDefPickupableItem::GetDropOffWayPt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.GetDropOffWayPt");

	ADunDefPickupableItem_GetDropOffWayPt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.OnlyDrawHUDForOwner
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableItem::OnlyDrawHUDForOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.OnlyDrawHUDForOwner");

	ADunDefPickupableItem_OnlyDrawHUDForOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableItem::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.DrawMyHUD");

	ADunDefPickupableItem_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.CanBePickedUp
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableItem::CanBePickedUp(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.CanBePickedUp");

	ADunDefPickupableItem_CanBePickedUp_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.PickupItem
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefPlayer*           newHolder                      (Parm)

void ADunDefPickupableItem::PickupItem(class ADunDefPlayer* newHolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.PickupItem");

	ADunDefPickupableItem_PickupItem_Params params;
	params.newHolder = newHolder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.BeginBeingPickedUp
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* newHolder                      (Parm)

void ADunDefPickupableItem::BeginBeingPickedUp(class ADunDefPlayerController* newHolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.BeginBeingPickedUp");

	ADunDefPickupableItem_BeginBeingPickedUp_Params params;
	params.newHolder = newHolder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.AttachToSpawner
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPickupableItem::AttachToSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.AttachToSpawner");

	ADunDefPickupableItem_AttachToSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.InitMesh
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPickupableSpawner* MySpawner                      (Parm)

void ADunDefPickupableItem::InitMesh(class ADunDefPickupableSpawner* MySpawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.InitMesh");

	ADunDefPickupableItem_InitMesh_Params params;
	params.MySpawner = MySpawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.GetToolTipPriority
// (Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPickupableItem::GetToolTipPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.GetToolTipPriority");

	ADunDefPickupableItem_GetToolTipPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.TakesToolTipPriority
// (Defined, Simulated, Public)
// Parameters:
// TScriptInterface<class UDunDefToolTipInterface> otherToolTip                   (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableItem::TakesToolTipPriority(const TScriptInterface<class UDunDefToolTipInterface>& otherToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.TakesToolTipPriority");

	ADunDefPickupableItem_TakesToolTipPriority_Params params;
	params.otherToolTip = otherToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.ContinueDrawingToolTip
// (Simulated, Public)
// Parameters:
// unsigned long                  ContinueDrawing                (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableItem::ContinueDrawingToolTip(unsigned long ContinueDrawing)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.ContinueDrawingToolTip");

	ADunDefPickupableItem_ContinueDrawingToolTip_Params params;
	params.ContinueDrawing = ContinueDrawing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.DrawToolTip
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// int                            PosX                           (Parm)
// int                            PosY                           (Parm)
// class ULocalPlayer*            ForPlayer                      (OptionalParm, Parm)

void ADunDefPickupableItem::DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.DrawToolTip");

	ADunDefPickupableItem_DrawToolTip_Params params;
	params.C = C;
	params.PosX = PosX;
	params.PosY = PosY;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.AllowTowerAtPoint
// (Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableItem::AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.AllowTowerAtPoint");

	ADunDefPickupableItem_AllowTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.CheckAllowance
// (Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableItem::CheckAllowance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.CheckAllowance");

	ADunDefPickupableItem_CheckAllowance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.PreventTowerAtPoint
// (Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// float                          towerRadius                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableItem::PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.PreventTowerAtPoint");

	ADunDefPickupableItem_PreventTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;
	params.towerRadius = towerRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.DrawMiniMapIcon
// (Simulated, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefPickupableItem::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.DrawMiniMapIcon");

	ADunDefPickupableItem_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.GetActivationOffset
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPickupableItem::GetActivationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.GetActivationOffset");

	ADunDefPickupableItem_GetActivationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.GetActivationWeighting
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPickupableItem::GetActivationWeighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.GetActivationWeighting");

	ADunDefPickupableItem_GetActivationWeighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.Client_Activate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)

void ADunDefPickupableItem::Client_Activate(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.Client_Activate");

	ADunDefPickupableItem_Client_Activate_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.Server_Activate
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  forceActivation                (OptionalParm, Parm)
// int                            activationType                 (OptionalParm, Parm)

void ADunDefPickupableItem::Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.Server_Activate");

	ADunDefPickupableItem_Server_Activate_Params params;
	params.PC = PC;
	params.forceActivation = forceActivation;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.AllowActivation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPickupableItem::AllowActivation(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.AllowActivation");

	ADunDefPickupableItem_AllowActivation_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableItem.SetMyActiveMesh
// (Defined, Simulated, Public)
// Parameters:
// int                            MeshIndex                      (Parm)

void ADunDefPickupableItem::SetMyActiveMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.SetMyActiveMesh");

	ADunDefPickupableItem_SetMyActiveMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPickupableItem::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.PostBeginPlay");

	ADunDefPickupableItem_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableItem.ExecReplicatedFunction
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

void ADunDefPickupableItem::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.ExecReplicatedFunction");

	ADunDefPickupableItem_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPickupableItem.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPickupableItem::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableItem.ReplicatedEvent");

	ADunDefPickupableItem_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTouchForwardingActor.UnTouch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADunDefTouchForwardingActor::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTouchForwardingActor.UnTouch");

	ADunDefTouchForwardingActor_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTouchForwardingActor.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefTouchForwardingActor::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTouchForwardingActor.Touch");

	ADunDefTouchForwardingActor_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTouchForwardingActor.SetTouchParent
// (Defined, Public)
// Parameters:
// class AActor*                  NewParent                      (Parm)

void ADunDefTouchForwardingActor::SetTouchParent(class AActor* NewParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTouchForwardingActor.SetTouchParent");

	ADunDefTouchForwardingActor_SetTouchParent_Params params;
	params.NewParent = NewParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerController_Delivery.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ADunDefPlayerController_Delivery::PawnDied(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerController_Delivery.PawnDied");

	ADunDefPlayerController_Delivery_PawnDied_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerController_Delivery.NotifyTakeHit
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)

void ADunDefPlayerController_Delivery::NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerController_Delivery.NotifyTakeHit");

	ADunDefPlayerController_Delivery_NotifyTakeHit_Params params;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerController_Delivery.DropCurrentItem
// (Defined, Public)

void ADunDefPlayerController_Delivery::DropCurrentItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerController_Delivery.DropCurrentItem");

	ADunDefPlayerController_Delivery_DropCurrentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerController_Delivery.PickupItem
// (Defined, Public)
// Parameters:
// class ADunDefPickupableItem*   newPickup                      (Parm)

void ADunDefPlayerController_Delivery::PickupItem(class ADunDefPickupableItem* newPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerController_Delivery.PickupItem");

	ADunDefPlayerController_Delivery_PickupItem_Params params;
	params.newPickup = newPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.AllowedToTeleport
// (Defined, Public)
// Parameters:
// class APawn*                   Teleportee                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_Delivery::AllowedToTeleport(class APawn* Teleportee)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.AllowedToTeleport");

	ADunDefGRI_Delivery_AllowedToTeleport_Params params;
	params.Teleportee = Teleportee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Delivery.SetCurrentDeliveryItem
// (Defined, Public)
// Parameters:
// class ADunDefPickupableItem*   NewItem                        (Parm)

void ADunDefGRI_Delivery::SetCurrentDeliveryItem(class ADunDefPickupableItem* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.SetCurrentDeliveryItem");

	ADunDefGRI_Delivery_SetCurrentDeliveryItem_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.RemovePackageHolder
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)

void ADunDefGRI_Delivery::RemovePackageHolder(class ADunDefPlayer* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.RemovePackageHolder");

	ADunDefGRI_Delivery_RemovePackageHolder_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.AddPackageHolder
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)

void ADunDefGRI_Delivery::AddPackageHolder(class ADunDefPlayer* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.AddPackageHolder");

	ADunDefGRI_Delivery_AddPackageHolder_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.ModifyPlayerGroundSpeed
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)
// float                          theGroundSpeed                 (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Delivery::ModifyPlayerGroundSpeed(class ADunDefPlayer* aPlayer, float theGroundSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.ModifyPlayerGroundSpeed");

	ADunDefGRI_Delivery_ModifyPlayerGroundSpeed_Params params;
	params.aPlayer = aPlayer;
	params.theGroundSpeed = theGroundSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Delivery.AllowPackageSpawn
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_Delivery::AllowPackageSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.AllowPackageSpawn");

	ADunDefGRI_Delivery_AllowPackageSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Delivery.SetInCombatPhase
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  inCombatPhase                  (Parm)

void ADunDefGRI_Delivery::SetInCombatPhase(unsigned long inCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.SetInCombatPhase");

	ADunDefGRI_Delivery_SetInCombatPhase_Params params;
	params.inCombatPhase = inCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefGRI_Delivery::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.DrawMyHUD");

	ADunDefGRI_Delivery_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.ClearDropPoints
// (Defined, Public)

void ADunDefGRI_Delivery::ClearDropPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.ClearDropPoints");

	ADunDefGRI_Delivery_ClearDropPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.NotifyLostDropOffPoint
// (Defined, Public)
// Parameters:
// class ADunDefDropOffPoint*     lostPoint                      (Parm)

void ADunDefGRI_Delivery::NotifyLostDropOffPoint(class ADunDefDropOffPoint* lostPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.NotifyLostDropOffPoint");

	ADunDefGRI_Delivery_NotifyLostDropOffPoint_Params params;
	params.lostPoint = lostPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.NotifyFilledDropOffPoint
// (Defined, Public)
// Parameters:
// class ADunDefDropOffPoint*     filledPoint                    (Parm)

void ADunDefGRI_Delivery::NotifyFilledDropOffPoint(class ADunDefDropOffPoint* filledPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.NotifyFilledDropOffPoint");

	ADunDefGRI_Delivery_NotifyFilledDropOffPoint_Params params;
	params.filledPoint = filledPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.SelectNewDropOffPoint
// (Defined, Public)

void ADunDefGRI_Delivery::SelectNewDropOffPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.SelectNewDropOffPoint");

	ADunDefGRI_Delivery_SelectNewDropOffPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.Server_AddGRIHeroAbilities
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)

void ADunDefGRI_Delivery::Server_AddGRIHeroAbilities(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.Server_AddGRIHeroAbilities");

	ADunDefGRI_Delivery_Server_AddGRIHeroAbilities_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.EndBuildPhase
// (Defined, Public)

void ADunDefGRI_Delivery::EndBuildPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.EndBuildPhase");

	ADunDefGRI_Delivery_EndBuildPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_Delivery::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.Tick");

	ADunDefGRI_Delivery_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Delivery.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGRI_Delivery::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Delivery.PostBeginPlay");

	ADunDefGRI_Delivery_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefEnemyCrystalCore.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefEnemyCrystalCore::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEnemyCrystalCore.DrawMiniMapIcon");

	ADunDefEnemyCrystalCore_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefEnemyCrystalCore.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefEnemyCrystalCore::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEnemyCrystalCore.Destroyed");

	ADunDefEnemyCrystalCore_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefEnemyCrystalCore.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefEnemyCrystalCore::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefEnemyCrystalCore.PostBeginPlay");

	ADunDefEnemyCrystalCore_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefFlashHeal.SpawnHealEmitter
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  HealedActor                    (Parm)

void ADunDefFlashHeal::SpawnHealEmitter(class AActor* HealedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefFlashHeal.SpawnHealEmitter");

	ADunDefFlashHeal_SpawnHealEmitter_Params params;
	params.HealedActor = HealedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefFlashHeal.AllowSpawn
// (Defined, Event, Static, Public)
// Parameters:
// class AActor*                  theArchetype                   (Parm)
// struct FVector                 theLoc                         (Parm)
// struct FRotator                theRot                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefFlashHeal::STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefFlashHeal.AllowSpawn");

	ADunDefFlashHeal_AllowSpawn_Params params;
	params.theArchetype = theArchetype;
	params.theLoc = theLoc;
	params.theRot = theRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefFlashHeal.FlashHeal
// (Defined, Simulated, Public)

void ADunDefFlashHeal::FlashHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefFlashHeal.FlashHeal");

	ADunDefFlashHeal_FlashHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefFlashHeal.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefFlashHeal::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefFlashHeal.PostBeginPlay");

	ADunDefFlashHeal_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Assault.AllowedToTeleport
// (Defined, Public)
// Parameters:
// class APawn*                   Teleportee                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_Assault::AllowedToTeleport(class APawn* Teleportee)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.AllowedToTeleport");

	ADunDefGRI_Assault_AllowedToTeleport_Params params;
	params.Teleportee = Teleportee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetEnemyLifeSpanMultiplier
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            anEnemy                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetEnemyLifeSpanMultiplier(class ADunDefEnemy* anEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetEnemyLifeSpanMultiplier");

	ADunDefGRI_Assault_GetEnemyLifeSpanMultiplier_Params params;
	params.anEnemy = anEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.ModifyPlayerGroundSpeed
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)
// float                          theGroundSpeed                 (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::ModifyPlayerGroundSpeed(class ADunDefPlayer* aPlayer, float theGroundSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.ModifyPlayerGroundSpeed");

	ADunDefGRI_Assault_ModifyPlayerGroundSpeed_Params params;
	params.aPlayer = aPlayer;
	params.theGroundSpeed = theGroundSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetTrapRangeMultiplier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefTower_DetonationType* aTrap                          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetTrapRangeMultiplier(class ADunDefTower_DetonationType* aTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetTrapRangeMultiplier");

	ADunDefGRI_Assault_GetTrapRangeMultiplier_Params params;
	params.aTrap = aTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetAuraRangeMultiplier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefTower_Aura*       anAura                         (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetAuraRangeMultiplier(class ADunDefTower_Aura* anAura)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetAuraRangeMultiplier");

	ADunDefGRI_Assault_GetAuraRangeMultiplier_Params params;
	params.anAura = anAura;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetTrapDamageMultiplier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefTower_DetonationType* aTrap                          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetTrapDamageMultiplier(class ADunDefTower_DetonationType* aTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetTrapDamageMultiplier");

	ADunDefGRI_Assault_GetTrapDamageMultiplier_Params params;
	params.aTrap = aTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetTrapHealthMultiplier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefTower_DetonationType* aTrap                          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetTrapHealthMultiplier(class ADunDefTower_DetonationType* aTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetTrapHealthMultiplier");

	ADunDefGRI_Assault_GetTrapHealthMultiplier_Params params;
	params.aTrap = aTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetStrengthDrainAuraMultiplier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefTower_AuraStrengthDrain* anAura                         (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetStrengthDrainAuraMultiplier(class ADunDefTower_AuraStrengthDrain* anAura)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetStrengthDrainAuraMultiplier");

	ADunDefGRI_Assault_GetStrengthDrainAuraMultiplier_Params params;
	params.anAura = anAura;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetAuraDamageMultiplier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefTower_Aura*       anAura                         (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetAuraDamageMultiplier(class ADunDefTower_Aura* anAura)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetAuraDamageMultiplier");

	ADunDefGRI_Assault_GetAuraDamageMultiplier_Params params;
	params.anAura = anAura;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetAuraHealthMultiplier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefTower_Aura*       anAura                         (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetAuraHealthMultiplier(class ADunDefTower_Aura* anAura)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetAuraHealthMultiplier");

	ADunDefGRI_Assault_GetAuraHealthMultiplier_Params params;
	params.anAura = anAura;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetProjectileLimitDistance
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  anInstigator                   (Parm)
// float                          originalLimit                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_Assault::GetProjectileLimitDistance(class AActor* anInstigator, float originalLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetProjectileLimitDistance");

	ADunDefGRI_Assault_GetProjectileLimitDistance_Params params;
	params.anInstigator = anInstigator;
	params.originalLimit = originalLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefGRI_Assault::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.PostBeginPlay");

	ADunDefGRI_Assault_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Assault.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_Assault::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.Tick");

	ADunDefGRI_Assault_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Assault.GetNumberOfEnemyCoresRemaining
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefGRI_Assault::GetNumberOfEnemyCoresRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.GetNumberOfEnemyCoresRemaining");

	ADunDefGRI_Assault_GetNumberOfEnemyCoresRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefGRI_Assault::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.DrawMyHUD");

	ADunDefGRI_Assault_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Assault.RestartedPlayer
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* NewPlayer                      (Parm)

void ADunDefGRI_Assault::RestartedPlayer(class ADunDefPlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.RestartedPlayer");

	ADunDefGRI_Assault_RestartedPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Assault.CanEnterSpectatorMode
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* thePlayerController            (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_Assault::CanEnterSpectatorMode(class ADunDefPlayerController* thePlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.CanEnterSpectatorMode");

	ADunDefGRI_Assault_CanEnterSpectatorMode_Params params;
	params.thePlayerController = thePlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Assault.CanRespawnPlayer
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* thePlayerController            (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_Assault::CanRespawnPlayer(class ADunDefPlayerController* thePlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Assault.CanRespawnPlayer");

	ADunDefGRI_Assault_CanRespawnPlayer_Params params;
	params.thePlayerController = thePlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Chicken.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefGRI_Chicken::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.PostBeginPlay");

	ADunDefGRI_Chicken_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Chicken.GetSpectatorWaitString
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefGRI_Chicken::GetSpectatorWaitString()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.GetSpectatorWaitString");

	ADunDefGRI_Chicken_GetSpectatorWaitString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Chicken.RestartedPlayer
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* NewPlayer                      (Parm)

void ADunDefGRI_Chicken::RestartedPlayer(class ADunDefPlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.RestartedPlayer");

	ADunDefGRI_Chicken_RestartedPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Chicken.CanEnterSpectatorMode
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* thePlayerController            (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_Chicken::CanEnterSpectatorMode(class ADunDefPlayerController* thePlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.CanEnterSpectatorMode");

	ADunDefGRI_Chicken_CanEnterSpectatorMode_Params params;
	params.thePlayerController = thePlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Chicken.CanRespawnPlayer
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* thePlayerController            (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_Chicken::CanRespawnPlayer(class ADunDefPlayerController* thePlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.CanRespawnPlayer");

	ADunDefGRI_Chicken_CanRespawnPlayer_Params params;
	params.thePlayerController = thePlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Chicken.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefGRI_Chicken::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.DrawMyHUD");

	ADunDefGRI_Chicken_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Chicken.BeganCombatPhase
// (Defined, Public)

void ADunDefGRI_Chicken::BeganCombatPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.BeganCombatPhase");

	ADunDefGRI_Chicken_BeganCombatPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Chicken.SetChickenPlayer
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           theNewChickenPlayer            (Parm)

void ADunDefGRI_Chicken::SetChickenPlayer(class ADunDefPlayer* theNewChickenPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.SetChickenPlayer");

	ADunDefGRI_Chicken_SetChickenPlayer_Params params;
	params.theNewChickenPlayer = theNewChickenPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Chicken.GetRandomPlayer
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefPlayer* ADunDefGRI_Chicken::GetRandomPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.GetRandomPlayer");

	ADunDefGRI_Chicken_GetRandomPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_Chicken.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_Chicken::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.Tick");

	ADunDefGRI_Chicken_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Chicken.SetInCombatPhase
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  inCombatPhase                  (Parm)

void ADunDefGRI_Chicken::SetInCombatPhase(unsigned long inCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.SetInCombatPhase");

	ADunDefGRI_Chicken_SetInCombatPhase_Params params;
	params.inCombatPhase = inCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Chicken.NotifyOfChicken
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)

void ADunDefGRI_Chicken::NotifyOfChicken(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.NotifyOfChicken");

	ADunDefGRI_Chicken_NotifyOfChicken_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_Chicken.ExecReplicatedFunction
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

void ADunDefGRI_Chicken::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.ExecReplicatedFunction");

	ADunDefGRI_Chicken_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefGRI_Chicken.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefGRI_Chicken::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_Chicken.ReplicatedEvent");

	ADunDefGRI_Chicken_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PickUpItem.RequestPickup
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPickupableItem*   NewItem                        (Parm)

void ADunDefPlayerAbility_PickUpItem::RequestPickup(class ADunDefPickupableItem* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PickUpItem.RequestPickup");

	ADunDefPlayerAbility_PickUpItem_RequestPickup_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefMapInfo_Delivery.GetPointDropOffCount
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UDunDefMapInfo_Delivery::GetPointDropOffCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefMapInfo_Delivery.GetPointDropOffCount");

	UDunDefMapInfo_Delivery_GetPointDropOffCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefMapInfo_Delivery.GetDUForWave
// (Defined, Public)
// Parameters:
// int                            waveNumber                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UDunDefMapInfo_Delivery::GetDUForWave(int waveNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefMapInfo_Delivery.GetDUForWave");

	UDunDefMapInfo_Delivery_GetDUForWave_Params params;
	params.waveNumber = waveNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefMapInfo_Delivery.GetTimeLimit
// (Defined, Public)
// Parameters:
// int                            waveNumber                     (Parm)
// int                            difficulty                     (Parm)
// int                            NumPlayers                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefMapInfo_Delivery::GetTimeLimit(int waveNumber, int difficulty, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefMapInfo_Delivery.GetTimeLimit");

	UDunDefMapInfo_Delivery_GetTimeLimit_Params params;
	params.waveNumber = waveNumber;
	params.difficulty = difficulty;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefMapInfo_Delivery.GetWaveDropOffCount
// (Defined, Public)
// Parameters:
// int                            waveNumber                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UDunDefMapInfo_Delivery::GetWaveDropOffCount(int waveNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefMapInfo_Delivery.GetWaveDropOffCount");

	UDunDefMapInfo_Delivery_GetWaveDropOffCount_Params params;
	params.waveNumber = waveNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefManaToken_Golden.Collected
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           byPlayer                       (Parm)

void ADunDefManaToken_Golden::Collected(class ADunDefPlayer* byPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefManaToken_Golden.Collected");

	ADunDefManaToken_Golden_Collected_Params params;
	params.byPlayer = byPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_GoldenTokens.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefGRI_GoldenTokens::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_GoldenTokens.DrawMyHUD");

	ADunDefGRI_GoldenTokens_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_GoldenTokens.SetInCombatPhase
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  inCombatPhase                  (Parm)

void ADunDefGRI_GoldenTokens::SetInCombatPhase(unsigned long inCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_GoldenTokens.SetInCombatPhase");

	ADunDefGRI_GoldenTokens_SetInCombatPhase_Params params;
	params.inCombatPhase = inCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_GoldenTokens.CollectedGoldenToken
// (Defined, Simulated, Public)

void ADunDefGRI_GoldenTokens::CollectedGoldenToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_GoldenTokens.CollectedGoldenToken");

	ADunDefGRI_GoldenTokens_CollectedGoldenToken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_GoldenTokens.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   KilledPawn                     (Parm)

void ADunDefGRI_GoldenTokens::PawnDied(class APawn* KilledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_GoldenTokens.PawnDied");

	ADunDefGRI_GoldenTokens_PawnDied_Params params;
	params.KilledPawn = KilledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_GoldenTokens.SetGoldenEnemy
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            Enemy                          (Parm)

void ADunDefGRI_GoldenTokens::SetGoldenEnemy(class ADunDefEnemy* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_GoldenTokens.SetGoldenEnemy");

	ADunDefGRI_GoldenTokens_SetGoldenEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_GoldenTokens.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGRI_GoldenTokens::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_GoldenTokens.PostBeginPlay");

	ADunDefGRI_GoldenTokens_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_GoldenTokens.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_GoldenTokens::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_GoldenTokens.Tick");

	ADunDefGRI_GoldenTokens_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_GoldenTokens.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefGRI_GoldenTokens::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_GoldenTokens.ReplicatedEvent");

	ADunDefGRI_GoldenTokens_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.GetSpectatorWaitString
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefGRI_KillEnemiesTimeLimit::GetSpectatorWaitString()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.GetSpectatorWaitString");

	ADunDefGRI_KillEnemiesTimeLimit_GetSpectatorWaitString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.RestartedPlayer
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* NewPlayer                      (Parm)

void ADunDefGRI_KillEnemiesTimeLimit::RestartedPlayer(class ADunDefPlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.RestartedPlayer");

	ADunDefGRI_KillEnemiesTimeLimit_RestartedPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanEnterSpectatorMode
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* thePlayerController            (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_KillEnemiesTimeLimit::CanEnterSpectatorMode(class ADunDefPlayerController* thePlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanEnterSpectatorMode");

	ADunDefGRI_KillEnemiesTimeLimit_CanEnterSpectatorMode_Params params;
	params.thePlayerController = thePlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanRespawnPlayer
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* thePlayerController            (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_KillEnemiesTimeLimit::CanRespawnPlayer(class ADunDefPlayerController* thePlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanRespawnPlayer");

	ADunDefGRI_KillEnemiesTimeLimit_CanRespawnPlayer_Params params;
	params.thePlayerController = thePlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefGRI_KillEnemiesTimeLimit::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.DrawMyHUD");

	ADunDefGRI_KillEnemiesTimeLimit_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.ReceivedGameClass
// (Defined, Simulated, Public)

void ADunDefGRI_KillEnemiesTimeLimit::ReceivedGameClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.ReceivedGameClass");

	ADunDefGRI_KillEnemiesTimeLimit_ReceivedGameClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.SetInCombatPhase
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  inCombatPhase                  (Parm)

void ADunDefGRI_KillEnemiesTimeLimit::SetInCombatPhase(unsigned long inCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.SetInCombatPhase");

	ADunDefGRI_KillEnemiesTimeLimit_SetInCombatPhase_Params params;
	params.inCombatPhase = inCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGRI_KillEnemiesTimeLimit::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.PostBeginPlay");

	ADunDefGRI_KillEnemiesTimeLimit_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_KillEnemiesTimeLimit::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.Tick");

	ADunDefGRI_KillEnemiesTimeLimit_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit.GetTimeLimit
// (Defined, Public)
// Parameters:
// int                            waveNumber                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDunDefMapInfo_KillEnemiesTimeLimit::GetTimeLimit(int waveNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit.GetTimeLimit");

	UDunDefMapInfo_KillEnemiesTimeLimit_GetTimeLimit_Params params;
	params.waveNumber = waveNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.UI_GlobalHUDUberMF.GetPlayerList
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FString                 pList                          (Parm, OutParm, NeedCtorLink)
// struct FString                 sList                          (Parm, OutParm, NeedCtorLink)

void UUI_GlobalHUDUberMF::GetPlayerList(struct FString* pList, struct FString* sList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_GlobalHUDUberMF.GetPlayerList");

	UUI_GlobalHUDUberMF_GetPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pList != nullptr)
		*pList = params.pList;
	if (sList != nullptr)
		*sList = params.sList;
}


// Function DunDefSpecial.UI_GlobalHUDUberMF.GetColorString
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  aColor                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUI_GlobalHUDUberMF::GetColorString(const struct FColor& aColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_GlobalHUDUberMF.GetColorString");

	UUI_GlobalHUDUberMF_GetColorString_Params params;
	params.aColor = aColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.UI_GlobalHUDUberMF.UpdateScorePanel
// (Defined, Simulated, Public)

void UUI_GlobalHUDUberMF::UpdateScorePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_GlobalHUDUberMF.UpdateScorePanel");

	UUI_GlobalHUDUberMF_UpdateScorePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.UI_GlobalHUDUberMF.Update
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UUI_GlobalHUDUberMF::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_GlobalHUDUberMF.Update");

	UUI_GlobalHUDUberMF_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_KillEnemiesTimeLimit_Uber::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.Tick");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.ReadToShowStats
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_KillEnemiesTimeLimit_Uber::ReadToShowStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.ReadToShowStats");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_ReadToShowStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelColor
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ADunDefGRI_KillEnemiesTimeLimit_Uber::GetGameOverLabelColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelColor");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_GetGameOverLabelColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelColor
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ADunDefGRI_KillEnemiesTimeLimit_Uber::GetVictoryLabelColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelColor");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_GetVictoryLabelColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelString
// (Defined, Simulated, Public)
// Parameters:
// class APlayerReplicationInfo*  myPlayer                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefGRI_KillEnemiesTimeLimit_Uber::GetGameOverLabelString(class APlayerReplicationInfo* myPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelString");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_GetGameOverLabelString_Params params;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelString
// (Defined, Simulated, Public)
// Parameters:
// class APlayerReplicationInfo*  myPlayer                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefGRI_KillEnemiesTimeLimit_Uber::GetVictoryLabelString(class APlayerReplicationInfo* myPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelString");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_GetVictoryLabelString_Params params;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.OverrideEndGameLabel
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefGRI_KillEnemiesTimeLimit_Uber::OverrideEndGameLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.OverrideEndGameLabel");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_OverrideEndGameLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetMVP
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerReplicationInfo* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefPlayerReplicationInfo* ADunDefGRI_KillEnemiesTimeLimit_Uber::GetMVP()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetMVP");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_GetMVP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.DoLevelVictory
// (Defined, Simulated, Public)

void ADunDefGRI_KillEnemiesTimeLimit_Uber::DoLevelVictory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.DoLevelVictory");

	ADunDefGRI_KillEnemiesTimeLimit_Uber_DoLevelVictory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_OgreAlly.ReceivedGameClass
// (Defined, Simulated, Public)

void ADunDefGRI_OgreAlly::ReceivedGameClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_OgreAlly.ReceivedGameClass");

	ADunDefGRI_OgreAlly_ReceivedGameClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_OgreAlly.SetInCombatPhase
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  inCombatPhase                  (Parm)

void ADunDefGRI_OgreAlly::SetInCombatPhase(unsigned long inCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_OgreAlly.SetInCombatPhase");

	ADunDefGRI_OgreAlly_SetInCombatPhase_Params params;
	params.inCombatPhase = inCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_OgreAlly.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGRI_OgreAlly::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_OgreAlly.PostBeginPlay");

	ADunDefGRI_OgreAlly_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_UberAssault.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_UberAssault::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_UberAssault.Tick");

	ADunDefGRI_UberAssault_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_UberDefense.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_UberDefense::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_UberDefense.Tick");

	ADunDefGRI_UberDefense_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_VDay2.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefGRI_VDay2::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_VDay2.PostBeginPlay");

	ADunDefGRI_VDay2_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_VDay2.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGRI_VDay2::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_VDay2.Tick");

	ADunDefGRI_VDay2_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_VDay2.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefGRI_VDay2::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_VDay2.DrawMyHUD");

	ADunDefGRI_VDay2_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_VDay2.GetGameOverString
// (Defined, Simulated, Public)
// Parameters:
// int                            GameOverType                   (Parm)
// int                            gameOverNumberAppend           (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefGRI_VDay2::GetGameOverString(int GameOverType, int gameOverNumberAppend)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_VDay2.GetGameOverString");

	ADunDefGRI_VDay2_GetGameOverString_Params params;
	params.GameOverType = GameOverType;
	params.gameOverNumberAppend = gameOverNumberAppend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefGRI_VDay2.DrawExtraEnemyMinimapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)
// class ADunDefEnemy*            Enemy                          (Parm)

void ADunDefGRI_VDay2::DrawExtraEnemyMinimapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap, class ADunDefEnemy* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_VDay2.DrawExtraEnemyMinimapIcon");

	ADunDefGRI_VDay2_DrawExtraEnemyMinimapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_VDay2.PrintPairMatch
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            aPairMatch1                    (Parm)
// class ADunDefEnemy*            aPairMatch2                    (Parm)

void ADunDefGRI_VDay2::PrintPairMatch(class ADunDefEnemy* aPairMatch1, class ADunDefEnemy* aPairMatch2)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_VDay2.PrintPairMatch");

	ADunDefGRI_VDay2_PrintPairMatch_Params params;
	params.aPairMatch1 = aPairMatch1;
	params.aPairMatch2 = aPairMatch2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefGRI_VDay2.ExecReplicatedFunction
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

void ADunDefGRI_VDay2::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefGRI_VDay2.ExecReplicatedFunction");

	ADunDefGRI_VDay2_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootRight
// (Defined, Simulated, Event, Public)

void ADunDefHarbinger_v2::FireAttackShootRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootRight");

	ADunDefHarbinger_v2_FireAttackShootRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootLeft
// (Defined, Simulated, Event, Public)

void ADunDefHarbinger_v2::FireAttackShootLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootLeft");

	ADunDefHarbinger_v2_FireAttackShootLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackBegin
// (Defined, Simulated, Event, Public)

void ADunDefHarbinger_v2::FireAttackBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.FireAttackBegin");

	ADunDefHarbinger_v2_FireAttackBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbinger_v2.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefHarbinger_v2::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.PostBeginPlay");

	ADunDefHarbinger_v2_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbinger_v2.GetProjectileSpawnTransformation
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FName                   socketToUse                    (Parm)
// struct FVector                 Position                       (Parm, OutParm)
// struct FRotator                Orientation                    (Parm, OutParm)

void ADunDefHarbinger_v2::GetProjectileSpawnTransformation(const struct FName& socketToUse, struct FVector* Position, struct FRotator* Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.GetProjectileSpawnTransformation");

	ADunDefHarbinger_v2_GetProjectileSpawnTransformation_Params params;
	params.socketToUse = socketToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
}


// Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingAttackAnimation
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefHarbinger_v2::IsCurrentlyPlayingAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingAttackAnimation");

	ADunDefHarbinger_v2_IsCurrentlyPlayingAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefHarbinger_v2.PlayShootFireAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefHarbinger_v2::PlayShootFireAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.PlayShootFireAnimation");

	ADunDefHarbinger_v2_PlayShootFireAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingChargeAnimation
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefHarbinger_v2::IsCurrentlyPlayingChargeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingChargeAnimation");

	ADunDefHarbinger_v2_IsCurrentlyPlayingChargeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefHarbinger_v2.PlayChargeFireAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefHarbinger_v2::PlayChargeFireAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.PlayChargeFireAnimation");

	ADunDefHarbinger_v2_PlayChargeFireAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefHarbinger_v2.PlayHurtAnimation
// (Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDefHarbinger_v2::PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.PlayHurtAnimation");

	ADunDefHarbinger_v2_PlayHurtAnimation_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbinger_v2.PlayJumpAnimation
// (Simulated, Public)

void ADunDefHarbinger_v2::PlayJumpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.PlayJumpAnimation");

	ADunDefHarbinger_v2_PlayJumpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbinger_v2.ExecReplicatedFunction
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

void ADunDefHarbinger_v2::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbinger_v2.ExecReplicatedFunction");

	ADunDefHarbinger_v2_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefHarbingerController_v2.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ADunDefHarbingerController_v2::PawnDied(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbingerController_v2.PawnDied");

	ADunDefHarbingerController_v2_PawnDied_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbingerController_v2.CheckPlayer
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)

void ADunDefHarbingerController_v2::CheckPlayer(class ADunDefPlayer* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbingerController_v2.CheckPlayer");

	ADunDefHarbingerController_v2_CheckPlayer_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbingerController_v2.CheckForNearbyPlayers
// (Defined, Public)

void ADunDefHarbingerController_v2::CheckForNearbyPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbingerController_v2.CheckForNearbyPlayers");

	ADunDefHarbingerController_v2_CheckForNearbyPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbingerController_v2.ObstructionJump
// (Public)
// Parameters:
// struct FVector                 jumpForwardDir                 (Parm)
// struct FVector                 jumpSideDir                    (Parm)

void ADunDefHarbingerController_v2::ObstructionJump(const struct FVector& jumpForwardDir, const struct FVector& jumpSideDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbingerController_v2.ObstructionJump");

	ADunDefHarbingerController_v2_ObstructionJump_Params params;
	params.jumpForwardDir = jumpForwardDir;
	params.jumpSideDir = jumpSideDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbingerController_v2.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefHarbingerController_v2::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbingerController_v2.NotifyTakeHitEX");

	ADunDefHarbingerController_v2_NotifyTakeHitEX_Params params;
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


// Function DunDefSpecial.DunDefHarbingerController_v2.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefHarbingerController_v2::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbingerController_v2.PostBeginPlay");

	ADunDefHarbingerController_v2_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefHarbingerController_v2.FireProjectiles
// (Public)
// Parameters:
// struct FName                   socketToUse                    (Parm)

void ADunDefHarbingerController_v2::FireProjectiles(const struct FName& socketToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefHarbingerController_v2.FireProjectiles");

	ADunDefHarbingerController_v2_FireProjectiles_Params params;
	params.socketToUse = socketToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.AdjustDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// int                            DamageAmount                   (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)

void ADunDefPickupableSpawner::AdjustDamage(class UClass* DamageType, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FTraceHitInfo& HitInfo, int* DamageAmount, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.AdjustDamage");

	ADunDefPickupableSpawner_AdjustDamage_Params params;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageAmount != nullptr)
		*DamageAmount = params.DamageAmount;
	if (Momentum != nullptr)
		*Momentum = params.Momentum;
}


// Function DunDefSpecial.DunDefPickupableSpawner.OnlyDrawHUDForOwner
// (Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableSpawner::OnlyDrawHUDForOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.OnlyDrawHUDForOwner");

	ADunDefPickupableSpawner_OnlyDrawHUDForOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableSpawner.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableSpawner::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.DrawMyHUD");

	ADunDefPickupableSpawner_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableSpawner.DrawToolTip
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// int                            PosX                           (Parm)
// int                            PosY                           (Parm)
// class ULocalPlayer*            ForPlayer                      (OptionalParm, Parm)

void ADunDefPickupableSpawner::DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.DrawToolTip");

	ADunDefPickupableSpawner_DrawToolTip_Params params;
	params.C = C;
	params.PosX = PosX;
	params.PosY = PosY;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.ChangedGamePhases
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  IsCombatPhase                  (Parm)

void ADunDefPickupableSpawner::ChangedGamePhases(unsigned long IsCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.ChangedGamePhases");

	ADunDefPickupableSpawner_ChangedGamePhases_Params params;
	params.IsCombatPhase = IsCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.NotifyPickUp
// (Defined, Public)
// Parameters:
// class ADunDefPickupableItem*   pickedupItem                   (Parm)
// class ADunDefPlayer*           playerPickUp                   (Parm)

void ADunDefPickupableSpawner::NotifyPickUp(class ADunDefPickupableItem* pickedupItem, class ADunDefPlayer* playerPickUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.NotifyPickUp");

	ADunDefPickupableSpawner_NotifyPickUp_Params params;
	params.pickedupItem = pickedupItem;
	params.playerPickUp = playerPickUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.NotifyDestroyed
// (Defined, Public)
// Parameters:
// class ADunDefPickupableItem*   droppedItem                    (Parm)

void ADunDefPickupableSpawner::NotifyDestroyed(class ADunDefPickupableItem* droppedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.NotifyDestroyed");

	ADunDefPickupableSpawner_NotifyDestroyed_Params params;
	params.droppedItem = droppedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.NotifyDrop
// (Defined, Public)
// Parameters:
// class ADunDefPickupableItem*   droppedItem                    (Parm)

void ADunDefPickupableSpawner::NotifyDrop(class ADunDefPickupableItem* droppedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.NotifyDrop");

	ADunDefPickupableSpawner_NotifyDrop_Params params;
	params.droppedItem = droppedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.GetSpawnLocandRot
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 sLoc                           (Parm, OutParm)
// struct FRotator                sRot                           (Parm, OutParm)

void ADunDefPickupableSpawner::GetSpawnLocandRot(struct FVector* sLoc, struct FRotator* sRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.GetSpawnLocandRot");

	ADunDefPickupableSpawner_GetSpawnLocandRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sLoc != nullptr)
		*sLoc = params.sLoc;
	if (sRot != nullptr)
		*sRot = params.sRot;
}


// Function DunDefSpecial.DunDefPickupableSpawner.ActivateEffects
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// unsigned long                  bTurnOn                        (Parm)

void ADunDefPickupableSpawner::ActivateEffects(unsigned long bTurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.ActivateEffects");

	ADunDefPickupableSpawner_ActivateEffects_Params params;
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.SpawnPickUpItem
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// unsigned long                  bForceSpawn                    (OptionalParm, Parm)

void ADunDefPickupableSpawner::SpawnPickUpItem(unsigned long bForceSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.SpawnPickUpItem");

	ADunDefPickupableSpawner_SpawnPickUpItem_Params params;
	params.bForceSpawn = bForceSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPickupableSpawner::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.PostBeginPlay");

	ADunDefPickupableSpawner_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.AllowTowerAtPoint
// (Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableSpawner::AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.AllowTowerAtPoint");

	ADunDefPickupableSpawner_AllowTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableSpawner.CheckAllowance
// (Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableSpawner::CheckAllowance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.CheckAllowance");

	ADunDefPickupableSpawner_CheckAllowance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableSpawner.PreventTowerAtPoint
// (Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// float                          towerRadius                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPickupableSpawner::PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.PreventTowerAtPoint");

	ADunDefPickupableSpawner_PreventTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;
	params.towerRadius = towerRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableSpawner.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class ADunDefMiniMap*          MiniMap                        (Parm)

void ADunDefPickupableSpawner::DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.DrawMiniMapIcon");

	ADunDefPickupableSpawner_DrawMiniMapIcon_Params params;
	params.Canvas = Canvas;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.Client_Activate
// (Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)

void ADunDefPickupableSpawner::Client_Activate(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.Client_Activate");

	ADunDefPickupableSpawner_Client_Activate_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.GetActivationOffset
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPickupableSpawner::GetActivationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.GetActivationOffset");

	ADunDefPickupableSpawner_GetActivationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableSpawner.GetActivationWeighting
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPickupableSpawner::GetActivationWeighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.GetActivationWeighting");

	ADunDefPickupableSpawner_GetActivationWeighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableSpawner.Server_Activate
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  forceActivation                (OptionalParm, Parm)
// int                            activationType                 (OptionalParm, Parm)

void ADunDefPickupableSpawner::Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.Server_Activate");

	ADunDefPickupableSpawner_Server_Activate_Params params;
	params.PC = PC;
	params.forceActivation = forceActivation;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPickupableSpawner.AllowActivation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPickupableSpawner::AllowActivation(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.AllowActivation");

	ADunDefPickupableSpawner_AllowActivation_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPickupableSpawner.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPickupableSpawner::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPickupableSpawner.ReplicatedEvent");

	ADunDefPickupableSpawner_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.SetOwnerNoSee
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  ownerNoSee                     (Parm)
// unsigned long                  ownerNoSeeWeapon               (OptionalParm, Parm)

void ADunDefPlayer_DualMelee::SetOwnerNoSee(unsigned long ownerNoSee, unsigned long ownerNoSeeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.SetOwnerNoSee");

	ADunDefPlayer_DualMelee_SetOwnerNoSee_Params params;
	params.ownerNoSee = ownerNoSee;
	params.ownerNoSeeWeapon = ownerNoSeeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AutoActivateSecondaryWeapon
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::AutoActivateSecondaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AutoActivateSecondaryWeapon");

	ADunDefPlayer_DualMelee_AutoActivateSecondaryWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AllowNegativeStatusAffecting
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::AllowNegativeStatusAffecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AllowNegativeStatusAffecting");

	ADunDefPlayer_DualMelee_AllowNegativeStatusAffecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.GetAlternateStance
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerAbility_StanceBase* askingStance                   (Parm)
// class ADunDefPlayerAbility_StanceBase* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefPlayerAbility_StanceBase* ADunDefPlayer_DualMelee::GetAlternateStance(class ADunDefPlayerAbility_StanceBase* askingStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.GetAlternateStance");

	ADunDefPlayer_DualMelee_GetAlternateStance_Params params;
	params.askingStance = askingStance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.SetWeaponSpeedMultiplier
// (Defined, Public)
// Parameters:
// float                          newMult                        (Parm)

void ADunDefPlayer_DualMelee::SetWeaponSpeedMultiplier(float newMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.SetWeaponSpeedMultiplier");

	ADunDefPlayer_DualMelee_SetWeaponSpeedMultiplier_Params params;
	params.newMult = newMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.GetOverrideSocketName
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon*           theWeapon                      (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayer_DualMelee::GetOverrideSocketName(class ADunDefWeapon* theWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.GetOverrideSocketName");

	ADunDefPlayer_DualMelee_GetOverrideSocketName_Params params;
	params.theWeapon = theWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.JumpOffPawn
// (Defined, Public)

void ADunDefPlayer_DualMelee::JumpOffPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.JumpOffPawn");

	ADunDefPlayer_DualMelee_JumpOffPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.ShouldPlayHurtAnimation
// (Defined, Public, HasOutParms)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// int                            Result                         (Parm, OutParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::ShouldPlayHurtAnimation(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.ShouldPlayHurtAnimation");

	ADunDefPlayer_DualMelee_ShouldPlayHurtAnimation_Params params;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetOffhandWeaponSwingDamage
// (Defined, Event, Public)

void ADunDefPlayer_DualMelee::AnimNotify_ResetOffhandWeaponSwingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetOffhandWeaponSwingDamage");

	ADunDefPlayer_DualMelee_AnimNotify_ResetOffhandWeaponSwingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopOffhandWeaponSwingDamage
// (Defined, Event, Public)

void ADunDefPlayer_DualMelee::AnimNotify_StopOffhandWeaponSwingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopOffhandWeaponSwingDamage");

	ADunDefPlayer_DualMelee_AnimNotify_StopOffhandWeaponSwingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartOffhandWeaponSwingDamage
// (Defined, Event, Public)

void ADunDefPlayer_DualMelee::AnimNotify_StartOffhandWeaponSwingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartOffhandWeaponSwingDamage");

	ADunDefPlayer_DualMelee_AnimNotify_StartOffhandWeaponSwingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetWeaponSwingDamage
// (Defined, Event, Public)

void ADunDefPlayer_DualMelee::AnimNotify_ResetWeaponSwingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetWeaponSwingDamage");

	ADunDefPlayer_DualMelee_AnimNotify_ResetWeaponSwingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopWeaponSwingDamage
// (Defined, Event, Public)

void ADunDefPlayer_DualMelee::AnimNotify_StopWeaponSwingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopWeaponSwingDamage");

	ADunDefPlayer_DualMelee_AnimNotify_StopWeaponSwingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartWeaponSwingDamage
// (Defined, Event, Public)

void ADunDefPlayer_DualMelee::AnimNotify_StartWeaponSwingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartWeaponSwingDamage");

	ADunDefPlayer_DualMelee_AnimNotify_StartWeaponSwingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefPlayer_DualMelee::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.Destroyed");

	ADunDefPlayer_DualMelee_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AdjustDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            inDamage                       (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void ADunDefPlayer_DualMelee::AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AdjustDamage");

	ADunDefPlayer_DualMelee_AdjustDamage_Params params;
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


// Function DunDefSpecial.DunDefPlayer_DualMelee.GivePlayerHitInfo
// (Defined, Public, HasOutParms)
// Parameters:
// class AActor*                  HitActor                       (Parm)
// int                            dealtDamage                    (Parm)
// unsigned long                  bAllowMomentumOverride         (Parm)
// struct FVector                 appliedMomentum                (Parm, OutParm)

void ADunDefPlayer_DualMelee::GivePlayerHitInfo(class AActor* HitActor, int dealtDamage, unsigned long bAllowMomentumOverride, struct FVector* appliedMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.GivePlayerHitInfo");

	ADunDefPlayer_DualMelee_GivePlayerHitInfo_Params params;
	params.HitActor = HitActor;
	params.dealtDamage = dealtDamage;
	params.bAllowMomentumOverride = bAllowMomentumOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (appliedMomentum != nullptr)
		*appliedMomentum = params.appliedMomentum;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayer_DualMelee::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.Tick");

	ADunDefPlayer_DualMelee_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_Off
// (Defined, Simulated, Public)

void ADunDefPlayer_DualMelee::AnimNotify_CurrentAbility_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_Off");

	ADunDefPlayer_DualMelee_AnimNotify_CurrentAbility_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_On
// (Defined, Simulated, Public)

void ADunDefPlayer_DualMelee::AnimNotify_CurrentAbility_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_On");

	ADunDefPlayer_DualMelee_AnimNotify_CurrentAbility_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceBlend
// (Defined, Simulated, Public)

void ADunDefPlayer_DualMelee::DoStanceBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceBlend");

	ADunDefPlayer_DualMelee_DoStanceBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.DeActivateStance
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerAbility_StanceBase* oldStance                      (Parm)

void ADunDefPlayer_DualMelee::DeActivateStance(class ADunDefPlayerAbility_StanceBase* oldStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.DeActivateStance");

	ADunDefPlayer_DualMelee_DeActivateStance_Params params;
	params.oldStance = oldStance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.ActivateStance
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerAbility_StanceBase* newStance                      (Parm)

void ADunDefPlayer_DualMelee::ActivateStance(class ADunDefPlayerAbility_StanceBase* newStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.ActivateStance");

	ADunDefPlayer_DualMelee_ActivateStance_Params params;
	params.newStance = newStance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.GetMeleeSwingInfoOverride
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// class ADunDefWeapon_MeleeSword* overrideForWeap                (Parm)
// int                            currentMeleeSwingIndex         (Parm, OutParm)
// struct FMeleeSwingInfo         OverrideInfo                   (Parm, OutParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::GetMeleeSwingInfoOverride(class ADunDefWeapon_MeleeSword* overrideForWeap, int* currentMeleeSwingIndex, struct FMeleeSwingInfo* OverrideInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.GetMeleeSwingInfoOverride");

	ADunDefPlayer_DualMelee_GetMeleeSwingInfoOverride_Params params;
	params.overrideForWeap = overrideForWeap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (currentMeleeSwingIndex != nullptr)
		*currentMeleeSwingIndex = params.currentMeleeSwingIndex;
	if (OverrideInfo != nullptr)
		*OverrideInfo = params.OverrideInfo;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.OverrideMeleeSwingInfo
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon_MeleeSword* askingWeapon                   (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::OverrideMeleeSwingInfo(class ADunDefWeapon_MeleeSword* askingWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.OverrideMeleeSwingInfo");

	ADunDefPlayer_DualMelee_OverrideMeleeSwingInfo_Params params;
	params.askingWeapon = askingWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.CheckAllowMelee
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class ADunDefWeapon_MeleeSword* weaponCheck                    (Parm)
// unsigned long                  checkAnimDuration              (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::CheckAllowMelee(class ADunDefWeapon_MeleeSword* weaponCheck, unsigned long checkAnimDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.CheckAllowMelee");

	ADunDefPlayer_DualMelee_CheckAllowMelee_Params params;
	params.weaponCheck = weaponCheck;
	params.checkAnimDuration = checkAnimDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.CheckPlayingCustomAnim
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FName                   inAnim                         (Parm)
// float                          TimeFromEndToConsiderFinished  (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::CheckPlayingCustomAnim(const struct FName& inAnim, float TimeFromEndToConsiderFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.CheckPlayingCustomAnim");

	ADunDefPlayer_DualMelee_CheckPlayingCustomAnim_Params params;
	params.inAnim = inAnim;
	params.TimeFromEndToConsiderFinished = TimeFromEndToConsiderFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.StopFire
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefPlayer_DualMelee::StopFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.StopFire");

	ADunDefPlayer_DualMelee_StopFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStopFire
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefPlayer_DualMelee::ServerStopFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStopFire");

	ADunDefPlayer_DualMelee_ServerStopFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.SetComboInfo
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefWeapon_MeleeSword* comboWeapon                    (Parm)
// unsigned long                  bMainHand                      (Parm)

void ADunDefPlayer_DualMelee::SetComboInfo(class ADunDefWeapon_MeleeSword* comboWeapon, unsigned long bMainHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.SetComboInfo");

	ADunDefPlayer_DualMelee_SetComboInfo_Params params;
	params.comboWeapon = comboWeapon;
	params.bMainHand = bMainHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceCheck
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::DoStanceCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceCheck");

	ADunDefPlayer_DualMelee_DoStanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.StartFire
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefPlayer_DualMelee::StartFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.StartFire");

	ADunDefPlayer_DualMelee_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStartFire
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefPlayer_DualMelee::ServerStartFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStartFire");

	ADunDefPlayer_DualMelee_ServerStartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.GetOffHandSocketName
// (Defined, Static, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayer_DualMelee::STATIC_GetOffHandSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.GetOffHandSocketName");

	ADunDefPlayer_DualMelee_GetOffHandSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.AllowDualWeapon
// (Defined, Static, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::STATIC_AllowDualWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.AllowDualWeapon");

	ADunDefPlayer_DualMelee_AllowDualWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.CreateContainedInventoryFromTemplate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  InventoryActorTemplate         (Parm)
// unsigned long                  bDoNotActivate                 (OptionalParm, Parm)
// class AInventory*              ReturnValue                    (Parm, OutParm, ReturnParm)

class AInventory* ADunDefPlayer_DualMelee::CreateContainedInventoryFromTemplate(class AActor* InventoryActorTemplate, unsigned long bDoNotActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.CreateContainedInventoryFromTemplate");

	ADunDefPlayer_DualMelee_CreateContainedInventoryFromTemplate_Params params;
	params.InventoryActorTemplate = InventoryActorTemplate;
	params.bDoNotActivate = bDoNotActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.SetOffHandWeapon
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon_MeleeSword* newOffHandWeap                 (Parm)

void ADunDefPlayer_DualMelee::SetOffHandWeapon(class ADunDefWeapon_MeleeSword* newOffHandWeap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.SetOffHandWeapon");

	ADunDefPlayer_DualMelee_SetOffHandWeapon_Params params;
	params.newOffHandWeap = newOffHandWeap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.SwapOffHandWeaponFor
// (Defined, Public)
// Parameters:
// class ADunDefWeapon*           weaponTemplate                 (Parm)
// class UHeroEquipment*          equipmentRef                   (Parm)
// class ADunDefWeapon*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefWeapon* ADunDefPlayer_DualMelee::SwapOffHandWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.SwapOffHandWeaponFor");

	ADunDefPlayer_DualMelee_SwapOffHandWeaponFor_Params params;
	params.weaponTemplate = weaponTemplate;
	params.equipmentRef = equipmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.SwapWeaponFor
// (Defined, Public)
// Parameters:
// class ADunDefWeapon*           weaponTemplate                 (Parm)
// class UHeroEquipment*          equipmentRef                   (Parm)
// class ADunDefWeapon*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefWeapon* ADunDefPlayer_DualMelee::SwapWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.SwapWeaponFor");

	ADunDefPlayer_DualMelee_SwapWeaponFor_Params params;
	params.weaponTemplate = weaponTemplate;
	params.equipmentRef = equipmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.HasLightningStance
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_DualMelee::HasLightningStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.HasLightningStance");

	ADunDefPlayer_DualMelee_HasLightningStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_DualMelee.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayer_DualMelee::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_DualMelee.PostBeginPlay");

	ADunDefPlayer_DualMelee_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowNegativeStatusAffecting
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::AllowNegativeStatusAffecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowNegativeStatusAffecting");

	ADunDefPlayerAbility_StanceBase_AllowNegativeStatusAffecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.ResetWeaponDamage
// (Simulated, Public)

void ADunDefPlayerAbility_StanceBase::ResetWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.ResetWeaponDamage");

	ADunDefPlayerAbility_StanceBase_ResetWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopOffHandWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::StopOffHandWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopOffHandWeaponDamage");

	ADunDefPlayerAbility_StanceBase_StopOffHandWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::StopWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopWeaponDamage");

	ADunDefPlayerAbility_StanceBase_StopWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartOffHandWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::StartOffHandWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartOffHandWeaponDamage");

	ADunDefPlayerAbility_StanceBase_StartOffHandWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::StartWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartWeaponDamage");

	ADunDefPlayerAbility_StanceBase_StartWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GivePlayerHitInfo
// (Simulated, Public, HasOutParms)
// Parameters:
// class AActor*                  HitActor                       (Parm)
// int                            dealtDamage                    (Parm)
// unsigned long                  bAllowMomentumOverride         (Parm)
// struct FVector                 appliedMomentum                (Parm, OutParm)

void ADunDefPlayerAbility_StanceBase::GivePlayerHitInfo(class AActor* HitActor, int dealtDamage, unsigned long bAllowMomentumOverride, struct FVector* appliedMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GivePlayerHitInfo");

	ADunDefPlayerAbility_StanceBase_GivePlayerHitInfo_Params params;
	params.HitActor = HitActor;
	params.dealtDamage = dealtDamage;
	params.bAllowMomentumOverride = bAllowMomentumOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (appliedMomentum != nullptr)
		*appliedMomentum = params.appliedMomentum;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_Off
// (Simulated, Public)

void ADunDefPlayerAbility_StanceBase::AnimNotify_CurrentAbility_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_Off");

	ADunDefPlayerAbility_StanceBase_AnimNotify_CurrentAbility_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_On
// (Simulated, Public)

void ADunDefPlayerAbility_StanceBase::AnimNotify_CurrentAbility_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_On");

	ADunDefPlayerAbility_StanceBase_AnimNotify_CurrentAbility_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStanceCancel
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::AllowStanceCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStanceCancel");

	ADunDefPlayerAbility_StanceBase_AllowStanceCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckDoStanceAttack
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::CheckDoStanceAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckDoStanceAttack");

	ADunDefPlayerAbility_StanceBase_CheckDoStanceAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetMultiplierValue
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FStatMultipliers        multiplierCheck                (Parm)
// unsigned long                  bDoLog                         (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_StanceBase::GetMultiplierValue(const struct FStatMultipliers& multiplierCheck, unsigned long bDoLog)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetMultiplierValue");

	ADunDefPlayerAbility_StanceBase_GetMultiplierValue_Params params;
	params.multiplierCheck = multiplierCheck;
	params.bDoLog = bDoLog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckStatus
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::CheckStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckStatus");

	ADunDefPlayerAbility_StanceBase_CheckStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_StanceBase::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetAbilityStatus");

	ADunDefPlayerAbility_StanceBase_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.OnActivate
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPlayerAbility_StanceBase::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.OnActivate");

	ADunDefPlayerAbility_StanceBase_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStepTowards
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceBase::AllowStepTowards()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStepTowards");

	ADunDefPlayerAbility_StanceBase_AllowStepTowards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerMomentumMultiplier
// (Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_StanceBase::GetPlayerMomentumMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerMomentumMultiplier");

	ADunDefPlayerAbility_StanceBase_GetPlayerMomentumMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackKnockbackMultiplier
// (Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_StanceBase::GetPlayerAttackKnockbackMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackKnockbackMultiplier");

	ADunDefPlayerAbility_StanceBase_GetPlayerAttackKnockbackMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackSpeedMultiplier
// (Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_StanceBase::GetPlayerAttackSpeedMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackSpeedMultiplier");

	ADunDefPlayerAbility_StanceBase_GetPlayerAttackSpeedMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.PlayActivationAnimation
// (Simulated, Public)

void ADunDefPlayerAbility_StanceBase::PlayActivationAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceBase.PlayActivationAnimation");

	ADunDefPlayerAbility_StanceBase_PlayActivationAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.OnActivate
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_LeapSlam::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.OnActivate");

	ADunDefPlayerAbility_LeapSlam_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetCostToActivate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  returnTrueValue                (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPlayerAbility_LeapSlam::GetCostToActivate(unsigned long returnTrueValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetCostToActivate");

	ADunDefPlayerAbility_LeapSlam_GetCostToActivate_Params params;
	params.returnTrueValue = returnTrueValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.RequestActivation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bHeld                          (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_LeapSlam::RequestActivation(unsigned long bHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.RequestActivation");

	ADunDefPlayerAbility_LeapSlam_RequestActivation_Params params;
	params.bHeld = bHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.HasNoAutoAim
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_LeapSlam::HasNoAutoAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.HasNoAutoAim");

	ADunDefPlayerAbility_LeapSlam_HasNoAutoAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_LeapSlam::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetAbilityStatus");

	ADunDefPlayerAbility_LeapSlam_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetMomentum
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_LeapSlam::GetMomentum()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetMomentum");

	ADunDefPlayerAbility_LeapSlam_GetMomentum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetElementalDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_LeapSlam::GetElementalDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetElementalDamage");

	ADunDefPlayerAbility_LeapSlam_GetElementalDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetDamage
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon_MeleeSword* weaponCheck                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_LeapSlam::GetDamage(class ADunDefWeapon_MeleeSword* weaponCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetDamage");

	ADunDefPlayerAbility_LeapSlam_GetDamage_Params params;
	params.weaponCheck = weaponCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_Off
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPlayerAbility_LeapSlam::AnimNotify_CurrentAbility_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_Off");

	ADunDefPlayerAbility_LeapSlam_AnimNotify_CurrentAbility_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_On
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPlayerAbility_LeapSlam::AnimNotify_CurrentAbility_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_On");

	ADunDefPlayerAbility_LeapSlam_AnimNotify_CurrentAbility_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ConsumesInputWhenActive
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_LeapSlam::ConsumesInputWhenActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ConsumesInputWhenActive");

	ADunDefPlayerAbility_LeapSlam_ConsumesInputWhenActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.DoTimeOut
// (Defined, Public)

void ADunDefPlayerAbility_LeapSlam::DoTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.DoTimeOut");

	ADunDefPlayerAbility_LeapSlam_DoTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetLeapVelocity
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 End                            (Parm)
// struct FVector                 Start                          (Parm)
// struct FVector                 JumpVelocity                   (Parm, OutParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_LeapSlam::GetLeapVelocity(const struct FVector& End, const struct FVector& Start, struct FVector* JumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetLeapVelocity");

	ADunDefPlayerAbility_LeapSlam_GetLeapVelocity_Params params;
	params.End = End;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpVelocity != nullptr)
		*JumpVelocity = params.JumpVelocity;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.CancelAbility
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_LeapSlam::CancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.CancelAbility");

	ADunDefPlayerAbility_LeapSlam_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PlayStopAnim
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_LeapSlam::PlayStopAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PlayStopAnim");

	ADunDefPlayerAbility_LeapSlam_PlayStopAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ShutOffVFX
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_LeapSlam::ShutOffVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ShutOffVFX");

	ADunDefPlayerAbility_LeapSlam_ShutOffVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ActivateHandVFX
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_LeapSlam::ActivateHandVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ActivateHandVFX");

	ADunDefPlayerAbility_LeapSlam_ActivateHandVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PushCheck
// (Public)

void ADunDefPlayerAbility_LeapSlam::PushCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PushCheck");

	ADunDefPlayerAbility_LeapSlam_PushCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ExecReplicatedFunction
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

void ADunDefPlayerAbility_LeapSlam::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ExecReplicatedFunction");

	ADunDefPlayerAbility_LeapSlam_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPlayerAbility_LeapSlam::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ReplicatedEvent");

	ADunDefPlayerAbility_LeapSlam_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.StaticGetOverrideSocketName
// (Defined, Static, Public)
// Parameters:
// class UDunDefHero*             aHero                          (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayer_Jester::STATIC_StaticGetOverrideSocketName(class UDunDefHero* aHero)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.StaticGetOverrideSocketName");

	ADunDefPlayer_Jester_StaticGetOverrideSocketName_Params params;
	params.aHero = aHero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.GetOverrideSocketName
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon*           theWeapon                      (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayer_Jester::GetOverrideSocketName(class ADunDefWeapon* theWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.GetOverrideSocketName");

	ADunDefPlayer_Jester_GetOverrideSocketName_Params params;
	params.theWeapon = theWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.SwapAnimSets
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon*           NewWeapon                      (Parm)

void ADunDefPlayer_Jester::SwapAnimSets(class ADunDefWeapon* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.SwapAnimSets");

	ADunDefPlayer_Jester_SwapAnimSets_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.WeaponSet
// (Defined, Simulated, Public)
// Parameters:
// class AWeapon*                 NewWeapon                      (Parm)

void ADunDefPlayer_Jester::WeaponSet(class AWeapon* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.WeaponSet");

	ADunDefPlayer_Jester_WeaponSet_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_Jester::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.DrawMyHUD");

	ADunDefPlayer_Jester_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayer_Jester::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.Tick");

	ADunDefPlayer_Jester_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.GetWeaponIcon
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bOffHand                       (Parm)
// class UMaterialInstanceConstant* ReturnValue                    (Parm, OutParm, ReturnParm)

class UMaterialInstanceConstant* ADunDefPlayer_Jester::GetWeaponIcon(unsigned long bOffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.GetWeaponIcon");

	ADunDefPlayer_Jester_GetWeaponIcon_Params params;
	params.bOffHand = bOffHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.DrawWeaponIcons
// (Defined, Simulated, Public)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class ADunDefWeapon*           weapDraw                       (Parm)
// float                          weapOpacity                    (Parm)
// int                            paddingIndex                   (Parm)
// unsigned long                  bSelected                      (Parm)
// float                          hudScale                       (Parm)
// class ADunDefPlayerController* PC                             (Parm)

void ADunDefPlayer_Jester::DrawWeaponIcons(class UCanvas* C, class ADunDefWeapon* weapDraw, float weapOpacity, int paddingIndex, unsigned long bSelected, float hudScale, class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.DrawWeaponIcons");

	ADunDefPlayer_Jester_DrawWeaponIcons_Params params;
	params.C = C;
	params.weapDraw = weapDraw;
	params.weapOpacity = weapOpacity;
	params.paddingIndex = paddingIndex;
	params.bSelected = bSelected;
	params.hudScale = hudScale;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefPlayer_Jester::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.Destroyed");

	ADunDefPlayer_Jester_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.CreateContainedInventoryFromTemplate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  InventoryActorTemplate         (Parm)
// unsigned long                  bDoNotActivate                 (OptionalParm, Parm)
// class AInventory*              ReturnValue                    (Parm, OutParm, ReturnParm)

class AInventory* ADunDefPlayer_Jester::CreateContainedInventoryFromTemplate(class AActor* InventoryActorTemplate, unsigned long bDoNotActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.CreateContainedInventoryFromTemplate");

	ADunDefPlayer_Jester_CreateContainedInventoryFromTemplate_Params params;
	params.InventoryActorTemplate = InventoryActorTemplate;
	params.bDoNotActivate = bDoNotActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.SwapOffHandWeaponFor
// (Defined, Public)
// Parameters:
// class ADunDefWeapon*           weaponTemplate                 (Parm)
// class UHeroEquipment*          equipmentRef                   (Parm)
// class ADunDefWeapon*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefWeapon* ADunDefPlayer_Jester::SwapOffHandWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.SwapOffHandWeaponFor");

	ADunDefPlayer_Jester_SwapOffHandWeaponFor_Params params;
	params.weaponTemplate = weaponTemplate;
	params.equipmentRef = equipmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.DoWeaponSwap
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bForceSwap                     (OptionalParm, Parm)

void ADunDefPlayer_Jester::DoWeaponSwap(unsigned long bForceSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.DoWeaponSwap");

	ADunDefPlayer_Jester_DoWeaponSwap_Params params;
	params.bForceSwap = bForceSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.ServerDoSwap
// (Defined, Net, NetReliable, HasOptionalParms, Public, NetServer)
// Parameters:
// unsigned long                  bForceSwap                     (OptionalParm, Parm)

void ADunDefPlayer_Jester::ServerDoSwap(unsigned long bForceSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.ServerDoSwap");

	ADunDefPlayer_Jester_ServerDoSwap_Params params;
	params.bForceSwap = bForceSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.SetNewMainWeapon
// (Defined, Simulated, Public)
// Parameters:
// class AWeapon*                 theNewWeapon                   (Parm)
// unsigned long                  bRemoveExisting                (Parm)
// class UHeroEquipment*          equipRef                       (Parm)

void ADunDefPlayer_Jester::SetNewMainWeapon(class AWeapon* theNewWeapon, unsigned long bRemoveExisting, class UHeroEquipment* equipRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.SetNewMainWeapon");

	ADunDefPlayer_Jester_SetNewMainWeapon_Params params;
	params.theNewWeapon = theNewWeapon;
	params.bRemoveExisting = bRemoveExisting;
	params.equipRef = equipRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.SetStoredWeapon
// (Defined, Simulated, Public)
// Parameters:
// class AWeapon*                 newStoredWeapon                (Parm)
// class UHeroEquipment*          equipRef                       (Parm)

void ADunDefPlayer_Jester::SetStoredWeapon(class AWeapon* newStoredWeapon, class UHeroEquipment* equipRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.SetStoredWeapon");

	ADunDefPlayer_Jester_SetStoredWeapon_Params params;
	params.newStoredWeapon = newStoredWeapon;
	params.equipRef = equipRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_Jester.GetShootAnim
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayer_Jester::GetShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.GetShootAnim");

	ADunDefPlayer_Jester_GetShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.ForceWeaponActivationOverride
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_Jester::ForceWeaponActivationOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.ForceWeaponActivationOverride");

	ADunDefPlayer_Jester_ForceWeaponActivationOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.SwapWeaponFor
// (Defined, Public)
// Parameters:
// class ADunDefWeapon*           weaponTemplate                 (Parm)
// class UHeroEquipment*          equipmentRef                   (Parm)
// class ADunDefWeapon*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefWeapon* ADunDefPlayer_Jester::SwapWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.SwapWeaponFor");

	ADunDefPlayer_Jester_SwapWeaponFor_Params params;
	params.weaponTemplate = weaponTemplate;
	params.equipmentRef = equipmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.AllowDualWeapon
// (Defined, Static, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_Jester::STATIC_AllowDualWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.AllowDualWeapon");

	ADunDefPlayer_Jester_AllowDualWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_Jester.ExecReplicatedFunction
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

void ADunDefPlayer_Jester::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_Jester.ExecReplicatedFunction");

	ADunDefPlayer_Jester_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayer_SeriesEv.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefPlayer_SeriesEv::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.PostBeginPlay");

	ADunDefPlayer_SeriesEv_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.StopHovering
// (Defined, Simulated, Public)

void ADunDefPlayer_SeriesEv::StopHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.StopHovering");

	ADunDefPlayer_SeriesEv_StopHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.StartHovering
// (Defined, Simulated, Public)

void ADunDefPlayer_SeriesEv::StartHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.StartHovering");

	ADunDefPlayer_SeriesEv_StartHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayer_SeriesEv::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.Tick");

	ADunDefPlayer_SeriesEv_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.UsedAbility
// (Defined, Public)
// Parameters:
// class ADunDefPlayerAbility*    ability                        (Parm)

void ADunDefPlayer_SeriesEv::UsedAbility(class ADunDefPlayerAbility* ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.UsedAbility");

	ADunDefPlayer_SeriesEv_UsedAbility_Params params;
	params.ability = ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetActiveChargeAbility
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerAbility_ManaCharge* newCharge                      (Parm)

void ADunDefPlayer_SeriesEv::SetActiveChargeAbility(class ADunDefPlayerAbility_ManaCharge* newCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.SetActiveChargeAbility");

	ADunDefPlayer_SeriesEv_SetActiveChargeAbility_Params params;
	params.newCharge = newCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetManaTokenAttractionRadius
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayer_SeriesEv::GetManaTokenAttractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.GetManaTokenAttractionRadius");

	ADunDefPlayer_SeriesEv_GetManaTokenAttractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.HasMaxManaPower
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_SeriesEv::HasMaxManaPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.HasMaxManaPower");

	ADunDefPlayer_SeriesEv_HasMaxManaPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.TryTokenCollection
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefManaToken*        Token                          (Parm)

void ADunDefPlayer_SeriesEv::TryTokenCollection(class ADunDefManaToken* Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.TryTokenCollection");

	ADunDefPlayer_SeriesEv_TryTokenCollection_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.IsCurrentlyPlayingHurtAnimation
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_SeriesEv::IsCurrentlyPlayingHurtAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.IsCurrentlyPlayingHurtAnimation");

	ADunDefPlayer_SeriesEv_IsCurrentlyPlayingHurtAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayHurtAnimation
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDefPlayer_SeriesEv::PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayHurtAnimation");

	ADunDefPlayer_SeriesEv_PlayHurtAnimation_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.ShouldOverrideWeaponElementalEffects
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon*           weaponCheck                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_SeriesEv::ShouldOverrideWeaponElementalEffects(class ADunDefWeapon* weaponCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.ShouldOverrideWeaponElementalEffects");

	ADunDefPlayer_SeriesEv_ShouldOverrideWeaponElementalEffects_Params params;
	params.weaponCheck = weaponCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.StopFire
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefPlayer_SeriesEv::StopFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.StopFire");

	ADunDefPlayer_SeriesEv_StopFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayJumpAnimation
// (Defined, Simulated, Public)

void ADunDefPlayer_SeriesEv::PlayJumpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayJumpAnimation");

	ADunDefPlayer_SeriesEv_PlayJumpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.StartFire
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefPlayer_SeriesEv::StartFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.StartFire");

	ADunDefPlayer_SeriesEv_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.PutArmDown
// (Defined, Simulated, Public)

void ADunDefPlayer_SeriesEv::PutArmDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.PutArmDown");

	ADunDefPlayer_SeriesEv_PutArmDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayShootAnimation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  isBigShoot                     (OptionalParm, Parm)
// unsigned long                  Replicate                      (OptionalParm, Parm)
// unsigned long                  bDontPlayAnim                  (OptionalParm, Parm)

void ADunDefPlayer_SeriesEv::PlayShootAnimation(unsigned long isBigShoot, unsigned long Replicate, unsigned long bDontPlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayShootAnimation");

	ADunDefPlayer_SeriesEv_PlayShootAnimation_Params params;
	params.isBigShoot = isBigShoot;
	params.Replicate = Replicate;
	params.bDontPlayAnim = bDontPlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.ForceUseInstigatorForMuzzle
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_SeriesEv::ForceUseInstigatorForMuzzle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.ForceUseInstigatorForMuzzle");

	ADunDefPlayer_SeriesEv_ForceUseInstigatorForMuzzle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.CanReload
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_SeriesEv::CanReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.CanReload");

	ADunDefPlayer_SeriesEv_CanReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetWeaponIcon
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bOffHand                       (Parm)
// class UMaterialInstanceConstant* ReturnValue                    (Parm, OutParm, ReturnParm)

class UMaterialInstanceConstant* ADunDefPlayer_SeriesEv::GetWeaponIcon(unsigned long bOffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.GetWeaponIcon");

	ADunDefPlayer_SeriesEv_GetWeaponIcon_Params params;
	params.bOffHand = bOffHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawWeaponIcons
// (Defined, Simulated, Public)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class ADunDefWeapon*           weapDraw                       (Parm)
// float                          weapOpacity                    (Parm)
// int                            paddingIndex                   (Parm)
// unsigned long                  bSelected                      (Parm)
// float                          hudScale                       (Parm)
// class ADunDefPlayerController* PC                             (Parm)

void ADunDefPlayer_SeriesEv::DrawWeaponIcons(class UCanvas* C, class ADunDefWeapon* weapDraw, float weapOpacity, int paddingIndex, unsigned long bSelected, float hudScale, class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawWeaponIcons");

	ADunDefPlayer_SeriesEv_DrawWeaponIcons_Params params;
	params.C = C;
	params.weapDraw = weapDraw;
	params.weapOpacity = weapOpacity;
	params.paddingIndex = paddingIndex;
	params.bSelected = bSelected;
	params.hudScale = hudScale;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawMyHUD
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_SeriesEv::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawMyHUD");

	ADunDefPlayer_SeriesEv_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefPlayer_SeriesEv::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.Destroyed");

	ADunDefPlayer_SeriesEv_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.CreateContainedInventoryFromTemplate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class AActor*                  InventoryActorTemplate         (Parm)
// unsigned long                  bDoNotActivate                 (OptionalParm, Parm)
// class AInventory*              ReturnValue                    (Parm, OutParm, ReturnParm)

class AInventory* ADunDefPlayer_SeriesEv::CreateContainedInventoryFromTemplate(class AActor* InventoryActorTemplate, unsigned long bDoNotActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.CreateContainedInventoryFromTemplate");

	ADunDefPlayer_SeriesEv_CreateContainedInventoryFromTemplate_Params params;
	params.InventoryActorTemplate = InventoryActorTemplate;
	params.bDoNotActivate = bDoNotActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapOffHandWeaponFor
// (Defined, Public)
// Parameters:
// class ADunDefWeapon*           weaponTemplate                 (Parm)
// class UHeroEquipment*          equipmentRef                   (Parm)
// class ADunDefWeapon*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefWeapon* ADunDefPlayer_SeriesEv::SwapOffHandWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapOffHandWeaponFor");

	ADunDefPlayer_SeriesEv_SwapOffHandWeaponFor_Params params;
	params.weaponTemplate = weaponTemplate;
	params.equipmentRef = equipmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.DoWeaponSwap
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bForceSwap                     (OptionalParm, Parm)

void ADunDefPlayer_SeriesEv::DoWeaponSwap(unsigned long bForceSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.DoWeaponSwap");

	ADunDefPlayer_SeriesEv_DoWeaponSwap_Params params;
	params.bForceSwap = bForceSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.ServerDoSwap
// (Defined, Net, NetReliable, HasOptionalParms, Public, NetServer)
// Parameters:
// unsigned long                  bForceSwap                     (OptionalParm, Parm)

void ADunDefPlayer_SeriesEv::ServerDoSwap(unsigned long bForceSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.ServerDoSwap");

	ADunDefPlayer_SeriesEv_ServerDoSwap_Params params;
	params.bForceSwap = bForceSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetNewMainWeapon
// (Defined, Simulated, Public)
// Parameters:
// class AWeapon*                 theNewWeapon                   (Parm)
// unsigned long                  bRemoveExisting                (Parm)
// class UHeroEquipment*          equipRef                       (Parm)

void ADunDefPlayer_SeriesEv::SetNewMainWeapon(class AWeapon* theNewWeapon, unsigned long bRemoveExisting, class UHeroEquipment* equipRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.SetNewMainWeapon");

	ADunDefPlayer_SeriesEv_SetNewMainWeapon_Params params;
	params.theNewWeapon = theNewWeapon;
	params.bRemoveExisting = bRemoveExisting;
	params.equipRef = equipRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetStoredWeapon
// (Defined, Simulated, Public)
// Parameters:
// class AWeapon*                 newStoredWeapon                (Parm)
// class UHeroEquipment*          equipRef                       (Parm)

void ADunDefPlayer_SeriesEv::SetStoredWeapon(class AWeapon* newStoredWeapon, class UHeroEquipment* equipRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.SetStoredWeapon");

	ADunDefPlayer_SeriesEv_SetStoredWeapon_Params params;
	params.newStoredWeapon = newStoredWeapon;
	params.equipRef = equipRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapWeaponFor
// (Defined, Public)
// Parameters:
// class ADunDefWeapon*           weaponTemplate                 (Parm)
// class UHeroEquipment*          equipmentRef                   (Parm)
// class ADunDefWeapon*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefWeapon* ADunDefPlayer_SeriesEv::SwapWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapWeaponFor");

	ADunDefPlayer_SeriesEv_SwapWeaponFor_Params params;
	params.weaponTemplate = weaponTemplate;
	params.equipmentRef = equipmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetOffHandSocketName
// (Defined, Static, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayer_SeriesEv::STATIC_GetOffHandSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.GetOffHandSocketName");

	ADunDefPlayer_SeriesEv_GetOffHandSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.OverrideWeaponAttach
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon*           weaponCheck                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_SeriesEv::OverrideWeaponAttach(class ADunDefWeapon* weaponCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.OverrideWeaponAttach");

	ADunDefPlayer_SeriesEv_OverrideWeaponAttach_Params params;
	params.weaponCheck = weaponCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.AllowDualWeapon
// (Defined, Static, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayer_SeriesEv::STATIC_AllowDualWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.AllowDualWeapon");

	ADunDefPlayer_SeriesEv_AllowDualWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayer_SeriesEv.ExecReplicatedFunction
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

void ADunDefPlayer_SeriesEv::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayer_SeriesEv.ExecReplicatedFunction");

	ADunDefPlayer_SeriesEv_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_ManaCharge::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetAbilityStatus");

	ADunDefPlayerAbility_ManaCharge_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AllowUsageDuringCastingStates
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_ManaCharge::AllowUsageDuringCastingStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AllowUsageDuringCastingStates");

	ADunDefPlayerAbility_ManaCharge_AllowUsageDuringCastingStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DrawChargeBar
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefPlayerAbility_ManaCharge::DrawChargeBar(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DrawChargeBar");

	ADunDefPlayerAbility_ManaCharge_DrawChargeBar_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetCooldownStartTime
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_ManaCharge::GetCooldownStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetCooldownStartTime");

	ADunDefPlayerAbility_ManaCharge_GetCooldownStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ShouldDrawManaBar
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_ManaCharge::ShouldDrawManaBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ShouldDrawManaBar");

	ADunDefPlayerAbility_ManaCharge_ShouldDrawManaBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StopEffects
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::StopEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StopEffects");

	ADunDefPlayerAbility_ManaCharge_StopEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStopFire
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::NotifyStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStopFire");

	ADunDefPlayerAbility_ManaCharge_NotifyStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerStartDamage
// (Defined, Net, NetReliable, Public, NetServer)

void ADunDefPlayerAbility_ManaCharge::ServerStartDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerStartDamage");

	ADunDefPlayerAbility_ManaCharge_ServerStartDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStartFire
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::NotifyStartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStartFire");

	ADunDefPlayerAbility_ManaCharge_NotifyStartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ActivateEffects
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::ActivateEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ActivateEffects");

	ADunDefPlayerAbility_ManaCharge_ActivateEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetSocketName
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayerAbility_ManaCharge::GetSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetSocketName");

	ADunDefPlayerAbility_ManaCharge_GetSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AttachParticles
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::AttachParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AttachParticles");

	ADunDefPlayerAbility_ManaCharge_AttachParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetDamage
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPlayerAbility_ManaCharge::GetDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetDamage");

	ADunDefPlayerAbility_ManaCharge_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ResetManaCharge
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::ResetManaCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ResetManaCharge");

	ADunDefPlayerAbility_ManaCharge_ResetManaCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AddManaCharge
// (Defined, Simulated, Public)
// Parameters:
// int                            addedMana                      (Parm)

void ADunDefPlayerAbility_ManaCharge::AddManaCharge(int addedMana)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AddManaCharge");

	ADunDefPlayerAbility_ManaCharge_AddManaCharge_Params params;
	params.addedMana = addedMana;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.SpawnManaEffect
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPlayerAbility_ManaCharge::SpawnManaEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.SpawnManaEffect");

	ADunDefPlayerAbility_ManaCharge_SpawnManaEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerCollectManaToken
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// class ADunDefManaToken*        Token                          (Parm)

void ADunDefPlayerAbility_ManaCharge::ServerCollectManaToken(class ADunDefManaToken* Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerCollectManaToken");

	ADunDefPlayerAbility_ManaCharge_ServerCollectManaToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.InCylinderFwd
// (Final, Defined, Simulated, Public)
// Parameters:
// struct FVector                 Origin                         (Parm)
// struct FVector                 VDir                           (Parm)
// float                          RadiusSq                       (Parm)
// struct FVector                 A                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_ManaCharge::InCylinderFwd(const struct FVector& Origin, const struct FVector& VDir, float RadiusSq, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.InCylinderFwd");

	ADunDefPlayerAbility_ManaCharge_InCylinderFwd_Params params;
	params.Origin = Origin;
	params.VDir = VDir;
	params.RadiusSq = RadiusSq;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DoDamage
// (Defined, Public, HasDefaults)

void ADunDefPlayerAbility_ManaCharge::DoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DoDamage");

	ADunDefPlayerAbility_ManaCharge_DoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CheckForFire
// (Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::CheckForFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CheckForFire");

	ADunDefPlayerAbility_ManaCharge_CheckForFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetTimeBasedOnCharge
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_ManaCharge::GetTimeBasedOnCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetTimeBasedOnCharge");

	ADunDefPlayerAbility_ManaCharge_GetTimeBasedOnCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamage
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::StartDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamage");

	ADunDefPlayerAbility_ManaCharge_StartDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamageEffects
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::StartDamageEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamageEffects");

	ADunDefPlayerAbility_ManaCharge_StartDamageEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CanHoldMoreCharge
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_ManaCharge::CanHoldMoreCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CanHoldMoreCharge");

	ADunDefPlayerAbility_ManaCharge_CanHoldMoreCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CancelAbility
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::CancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CancelAbility");

	ADunDefPlayerAbility_ManaCharge_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.OnActivate
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_ManaCharge::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.OnActivate");

	ADunDefPlayerAbility_ManaCharge_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_ManaCharge::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.PostBeginPlay");

	ADunDefPlayerAbility_ManaCharge_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ExecReplicatedFunction
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

void ADunDefPlayerAbility_ManaCharge::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ExecReplicatedFunction");

	ADunDefPlayerAbility_ManaCharge_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.AllowUsageDuringCastingStates
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_PhaseShift::AllowUsageDuringCastingStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.AllowUsageDuringCastingStates");

	ADunDefPlayerAbility_PhaseShift_AllowUsageDuringCastingStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetCastingStateNamePC
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayerAbility_PhaseShift::GetCastingStateNamePC()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetCastingStateNamePC");

	ADunDefPlayerAbility_PhaseShift_GetCastingStateNamePC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.CancelAbility
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShift::CancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.CancelAbility");

	ADunDefPlayerAbility_PhaseShift_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ClientForceCancel
// (Defined, Net, NetReliable, Simulated, Public, NetClient)

void ADunDefPlayerAbility_PhaseShift::ClientForceCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ClientForceCancel");

	ADunDefPlayerAbility_PhaseShift_ClientForceCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ForceCancel
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShift::ForceCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ForceCancel");

	ADunDefPlayerAbility_PhaseShift_ForceCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseMaterials
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  bPhasedMaterials               (Parm)

void ADunDefPlayerAbility_PhaseShift::SetPhaseMaterials(unsigned long bPhasedMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseMaterials");

	ADunDefPlayerAbility_PhaseShift_SetPhaseMaterials_Params params;
	params.bPhasedMaterials = bPhasedMaterials;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.StartScaleUp
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShift::StartScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.StartScaleUp");

	ADunDefPlayerAbility_PhaseShift_StartScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetMaterialColors
// (Defined, Simulated, Public)
// Parameters:
// struct FLinearColor            C1                             (Parm)
// struct FLinearColor            c2                             (Parm)
// struct FLinearColor            C3                             (Parm)

void ADunDefPlayerAbility_PhaseShift::SetMaterialColors(const struct FLinearColor& C1, const struct FLinearColor& c2, const struct FLinearColor& C3)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetMaterialColors");

	ADunDefPlayerAbility_PhaseShift_SetMaterialColors_Params params;
	params.C1 = C1;
	params.c2 = c2;
	params.C3 = C3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.OnActivate
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShift::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.OnActivate");

	ADunDefPlayerAbility_PhaseShift_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetDefaultValues
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShift::SetDefaultValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetDefaultValues");

	ADunDefPlayerAbility_PhaseShift_SetDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseShiftValue
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShift::SetPhaseShiftValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseShiftValue");

	ADunDefPlayerAbility_PhaseShift_SetPhaseShiftValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PhaseScaleDown
// (Simulated, Public)

void ADunDefPlayerAbility_PhaseShift::PhaseScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PhaseScaleDown");

	ADunDefPlayerAbility_PhaseShift_PhaseScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_PhaseShift::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetAbilityStatus");

	ADunDefPlayerAbility_PhaseShift_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.FinishScaleUp
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShift::FinishScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.FinishScaleUp");

	ADunDefPlayerAbility_PhaseShift_FinishScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.InitializeForPlayer
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           myPlayer                       (Parm)

void ADunDefPlayerAbility_PhaseShift::InitializeForPlayer(class ADunDefPlayer* myPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.InitializeForPlayer");

	ADunDefPlayerAbility_PhaseShift_InitializeForPlayer_Params params;
	params.myPlayer = myPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_PhaseShift::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PostBeginPlay");

	ADunDefPlayerAbility_PhaseShift_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ExecReplicatedFunction
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

void ADunDefPlayerAbility_PhaseShift::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ExecReplicatedFunction");

	ADunDefPlayerAbility_PhaseShift_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPlayerAbility_PhaseShift::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ReplicatedEvent");

	ADunDefPlayerAbility_PhaseShift_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_BuilTripWire::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostBeginPlay");

	ADunDefPlayerAbility_BuilTripWire_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CancelAbility
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_BuilTripWire::CancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CancelAbility");

	ADunDefPlayerAbility_BuilTripWire_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AllowTowerPlacementPosition
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 placementPos                   (Parm)
// int                            PlacementDeniedReason          (OptionalParm, Parm, OutParm)
// unsigned long                  bOnlyCheckVolumes              (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_BuilTripWire::AllowTowerPlacementPosition(const struct FVector& placementPos, unsigned long bOnlyCheckVolumes, int* PlacementDeniedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AllowTowerPlacementPosition");

	ADunDefPlayerAbility_BuilTripWire_AllowTowerPlacementPosition_Params params;
	params.placementPos = placementPos;
	params.bOnlyCheckVolumes = bOnlyCheckVolumes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlacementDeniedReason != nullptr)
		*PlacementDeniedReason = params.PlacementDeniedReason;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetCenterLocation
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefPlayerAbility_BuilTripWire::GetCenterLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetCenterLocation");

	ADunDefPlayerAbility_BuilTripWire_GetCenterLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CanPlaceTowerUnitCost
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_BuilTripWire::CanPlaceTowerUnitCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CanPlaceTowerUnitCost");

	ADunDefPlayerAbility_BuilTripWire_CanPlaceTowerUnitCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetDUCost
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// unsigned long                  bUseCustomEndLoc               (OptionalParm, Parm)
// struct FVector                 endLoc                         (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPlayerAbility_BuilTripWire::GetDUCost(unsigned long bUseCustomEndLoc, const struct FVector& endLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetDUCost");

	ADunDefPlayerAbility_BuilTripWire_GetDUCost_Params params;
	params.bUseCustomEndLoc = bUseCustomEndLoc;
	params.endLoc = endLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.DrawCastingHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_BuilTripWire::DrawCastingHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.DrawCastingHUD");

	ADunDefPlayerAbility_BuilTripWire_DrawCastingHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CreateNewPreviewPoint
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FVector                 previewLoc                     (Parm)

void ADunDefPlayerAbility_BuilTripWire::CreateNewPreviewPoint(const struct FVector& previewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CreateNewPreviewPoint");

	ADunDefPlayerAbility_BuilTripWire_CreateNewPreviewPoint_Params params;
	params.previewLoc = previewLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ClearPreviewPoints
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_BuilTripWire::ClearPreviewPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ClearPreviewPoints");

	ADunDefPlayerAbility_BuilTripWire_ClearPreviewPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerAddPlacementPoint
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// struct FVector                 tPlacementLocation             (Parm)

void ADunDefPlayerAbility_BuilTripWire::ServerAddPlacementPoint(const struct FVector& tPlacementLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerAddPlacementPoint");

	ADunDefPlayerAbility_BuilTripWire_ServerAddPlacementPoint_Params params;
	params.tPlacementLocation = tPlacementLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostPlacementUpdate
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_BuilTripWire::PostPlacementUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostPlacementUpdate");

	ADunDefPlayerAbility_BuilTripWire_PostPlacementUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerRequestBuildTower
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// struct FVector                 towerPlacementLocation         (Parm)
// struct FRotator                towerPlacementRotation         (Parm)

void ADunDefPlayerAbility_BuilTripWire::ServerRequestBuildTower(const struct FVector& towerPlacementLocation, const struct FRotator& towerPlacementRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerRequestBuildTower");

	ADunDefPlayerAbility_BuilTripWire_ServerRequestBuildTower_Params params;
	params.towerPlacementLocation = towerPlacementLocation;
	params.towerPlacementRotation = towerPlacementRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AbilityTick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_BuilTripWire::AbilityTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AbilityTick");

	ADunDefPlayerAbility_BuilTripWire_AbilityTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.HidePreviewPoints
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_BuilTripWire::HidePreviewPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.HidePreviewPoints");

	ADunDefPlayerAbility_BuilTripWire_HidePreviewPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFXCompleted
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_BuilTripWire::StopAltSummonTowerFXCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFXCompleted");

	ADunDefPlayerAbility_BuilTripWire_StopAltSummonTowerFXCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFX
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_BuilTripWire::StopAltSummonTowerFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFX");

	ADunDefPlayerAbility_BuilTripWire_StopAltSummonTowerFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.UpdateAltSummonTowerFX
// (Defined, Simulated, Public)
// Parameters:
// float                          Percent                        (Parm)

void ADunDefPlayerAbility_BuilTripWire::UpdateAltSummonTowerFX(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.UpdateAltSummonTowerFX");

	ADunDefPlayerAbility_BuilTripWire_UpdateAltSummonTowerFX_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.BeginAltSummonTowerFX
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefEmitterSpawnable* spellEffect                    (Parm)
// struct FVector                 thePlacementLocation           (Parm)
// struct FRotator                thePlacementRotation           (Parm)
// float                          scaleMult                      (OptionalParm, Parm)
// unsigned long                  bUsesDecal                     (OptionalParm, Parm)

void ADunDefPlayerAbility_BuilTripWire::BeginAltSummonTowerFX(class ADunDefEmitterSpawnable* spellEffect, const struct FVector& thePlacementLocation, const struct FRotator& thePlacementRotation, float scaleMult, unsigned long bUsesDecal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.BeginAltSummonTowerFX");

	ADunDefPlayerAbility_BuilTripWire_BeginAltSummonTowerFX_Params params;
	params.spellEffect = spellEffect;
	params.thePlacementLocation = thePlacementLocation;
	params.thePlacementRotation = thePlacementRotation;
	params.scaleMult = scaleMult;
	params.bUsesDecal = bUsesDecal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ExecReplicatedFunction
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

void ADunDefPlayerAbility_BuilTripWire::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ExecReplicatedFunction");

	ADunDefPlayerAbility_BuilTripWire_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_DefenseBoost::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetAbilityStatus");

	ADunDefPlayerAbility_DefenseBoost_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveTower
// (Defined, Simulated, Public)
// Parameters:
// int                            Index                          (Parm)

void ADunDefPlayerAbility_DefenseBoost::RemoveTower(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveTower");

	ADunDefPlayerAbility_DefenseBoost_RemoveTower_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddTower
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class AActor*                  theAct                         (Parm)

void ADunDefPlayerAbility_DefenseBoost::AddTower(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddTower");

	ADunDefPlayerAbility_DefenseBoost_AddTower_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_DefenseBoost::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.Destroyed");

	ADunDefPlayerAbility_DefenseBoost_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowers
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_DefenseBoost::RemoveAllTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowers");

	ADunDefPlayerAbility_DefenseBoost_RemoveAllTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.CheckAllTowers
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_DefenseBoost::CheckAllTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.CheckAllTowers");

	ADunDefPlayerAbility_DefenseBoost_CheckAllTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowersFor
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)

void ADunDefPlayerAbility_DefenseBoost::RemoveAllTowersFor(class ADunDefPlayer* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowersFor");

	ADunDefPlayerAbility_DefenseBoost_RemoveAllTowersFor_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddAllTowersFor
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)

void ADunDefPlayerAbility_DefenseBoost::AddAllTowersFor(class ADunDefPlayer* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddAllTowersFor");

	ADunDefPlayerAbility_DefenseBoost_AddAllTowersFor_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddEffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  theAct                         (Parm)

void ADunDefPlayerAbility_DefenseBoost::AddEffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddEffect");

	ADunDefPlayerAbility_DefenseBoost_AddEffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveEffect
// (Defined, Simulated, Public)
// Parameters:
// int                            Index                          (Parm)

void ADunDefPlayerAbility_DefenseBoost::RemoveEffect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveEffect");

	ADunDefPlayerAbility_DefenseBoost_RemoveEffect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostAmount
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_DefenseBoost::GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostAmount");

	ADunDefPlayerAbility_DefenseBoost_GetTowerBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.HasTowerBoostingType
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_DefenseBoost::HasTowerBoostingType(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.HasTowerBoostingType");

	ADunDefPlayerAbility_DefenseBoost_HasTowerBoostingType_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostingTarget
// (Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> ADunDefPlayerAbility_DefenseBoost::GetTowerBoostingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostingTarget");

	ADunDefPlayerAbility_DefenseBoost_GetTowerBoostingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_EnemyDrain::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetAbilityStatus");

	ADunDefPlayerAbility_EnemyDrain_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetPawnResistanceMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_EnemyDrain::GetPawnResistanceMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetPawnResistanceMultiplier");

	ADunDefPlayerAbility_EnemyDrain_GetPawnResistanceMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetSpeedMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_EnemyDrain::GetSpeedMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetSpeedMultiplier");

	ADunDefPlayerAbility_EnemyDrain_GetSpeedMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetDamageMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_EnemyDrain::GetDamageMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetDamageMultiplier");

	ADunDefPlayerAbility_EnemyDrain_GetDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.CanAffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  theAct                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_EnemyDrain::CanAffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.CanAffect");

	ADunDefPlayerAbility_EnemyDrain_CanAffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.AddEffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  theAct                         (Parm)

void ADunDefPlayerAbility_EnemyDrain::AddEffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.AddEffect");

	ADunDefPlayerAbility_EnemyDrain_AddEffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.RemoveEffect
// (Defined, Simulated, Public)
// Parameters:
// int                            Index                          (Parm)

void ADunDefPlayerAbility_EnemyDrain::RemoveEffect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.RemoveEffect");

	ADunDefPlayerAbility_EnemyDrain_RemoveEffect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.DoMultiActorSpawn
// (Defined, Public, HasDefaults)

void ADunDefPlayerAbility_GenericMultiActorSpawner::DoMultiActorSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.DoMultiActorSpawn");

	ADunDefPlayerAbility_GenericMultiActorSpawner_DoMultiActorSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.SetUpActorSpawn
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_GenericMultiActorSpawner::SetUpActorSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.SetUpActorSpawn");

	ADunDefPlayerAbility_GenericMultiActorSpawner_SetUpActorSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_InstantUpgradeTower::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetAbilityStatus");

	ADunDefPlayerAbility_InstantUpgradeTower_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.DoEffect
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_InstantUpgradeTower::DoEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.DoEffect");

	ADunDefPlayerAbility_InstantUpgradeTower_DoEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetTowerCost
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            UpgradeTower                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPlayerAbility_InstantUpgradeTower::GetTowerCost(class ADunDefTower* UpgradeTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetTowerCost");

	ADunDefPlayerAbility_InstantUpgradeTower_GetTowerCost_Params params;
	params.UpgradeTower = UpgradeTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefPlayerAbility_InstantUpgradeTower::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.ScaleForHeroModifiers");

	ADunDefPlayerAbility_InstantUpgradeTower_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.IsValidUpgradeTower
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class ADunDefTower*            Tower                          (Parm)
// int                            theNextUpgradeLevel            (OptionalParm, Parm, OutParm)
// unsigned long                  bDontCountMana                 (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_InstantUpgradeTower::IsValidUpgradeTower(class ADunDefTower* Tower, unsigned long bDontCountMana, int* theNextUpgradeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.IsValidUpgradeTower");

	ADunDefPlayerAbility_InstantUpgradeTower_IsValidUpgradeTower_Params params;
	params.Tower = Tower;
	params.bDontCountMana = bDontCountMana;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theNextUpgradeLevel != nullptr)
		*theNextUpgradeLevel = params.theNextUpgradeLevel;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedTower
// (Defined, Public)
// Parameters:
// class ADunDefTower*            affectedTower                  (Parm)

void ADunDefPlayerAbility_InvisibilityAOE::RemovedTower(class ADunDefTower* affectedTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedTower");

	ADunDefPlayerAbility_InvisibilityAOE_RemovedTower_Params params;
	params.affectedTower = affectedTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedTower
// (Defined, Public)
// Parameters:
// class ADunDefTower*            affectedTower                  (Parm)

void ADunDefPlayerAbility_InvisibilityAOE::AddedTower(class ADunDefTower* affectedTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedTower");

	ADunDefPlayerAbility_InvisibilityAOE_AddedTower_Params params;
	params.affectedTower = affectedTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedPawn
// (Defined, Public)
// Parameters:
// class ADunDefPawn*             affectedPawn                   (Parm)

void ADunDefPlayerAbility_InvisibilityAOE::RemovedPawn(class ADunDefPawn* affectedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedPawn");

	ADunDefPlayerAbility_InvisibilityAOE_RemovedPawn_Params params;
	params.affectedPawn = affectedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedPawn
// (Defined, Public)
// Parameters:
// class ADunDefPawn*             affectedPawn                   (Parm)

void ADunDefPlayerAbility_InvisibilityAOE::AddedPawn(class ADunDefPawn* affectedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedPawn");

	ADunDefPlayerAbility_InvisibilityAOE_AddedPawn_Params params;
	params.affectedPawn = affectedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_InvisibilityAOE::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.GetAbilityStatus");

	ADunDefPlayerAbility_InvisibilityAOE_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddEffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  theAct                         (Parm)

void ADunDefPlayerAbility_InvisibilityAOE::AddEffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddEffect");

	ADunDefPlayerAbility_InvisibilityAOE_AddEffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemoveEffect
// (Defined, Simulated, Public)
// Parameters:
// int                            Index                          (Parm)

void ADunDefPlayerAbility_InvisibilityAOE::RemoveEffect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemoveEffect");

	ADunDefPlayerAbility_InvisibilityAOE_RemoveEffect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetCostToActivate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  returnTrueValue                (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPlayerAbility_MoveTower::GetCostToActivate(unsigned long returnTrueValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetCostToActivate");

	ADunDefPlayerAbility_MoveTower_GetCostToActivate_Params params;
	params.returnTrueValue = returnTrueValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_MoveTower::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetAbilityStatus");

	ADunDefPlayerAbility_MoveTower_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientReset
// (Defined, Net, NetReliable, Simulated, Public, NetClient)

void ADunDefPlayerAbility_MoveTower::ClientReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientReset");

	ADunDefPlayerAbility_MoveTower_ClientReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerMoveTower
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// struct FVector                 towerPlacementLocation         (Parm)
// struct FRotator                towerPlacementRotation         (Parm)

void ADunDefPlayerAbility_MoveTower::ServerMoveTower(const struct FVector& towerPlacementLocation, const struct FRotator& towerPlacementRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerMoveTower");

	ADunDefPlayerAbility_MoveTower_ServerMoveTower_Params params;
	params.towerPlacementLocation = towerPlacementLocation;
	params.towerPlacementRotation = towerPlacementRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.SetUpTowerMesh
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            theTower                       (Parm)

void ADunDefPlayerAbility_MoveTower::SetUpTowerMesh(class ADunDefTower* theTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.SetUpTowerMesh");

	ADunDefPlayerAbility_MoveTower_SetUpTowerMesh_Params params;
	params.theTower = theTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerRequestGrabTower
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// class ADunDefTower*            Tower                          (Parm)

void ADunDefPlayerAbility_MoveTower::ServerRequestGrabTower(class ADunDefTower* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerRequestGrabTower");

	ADunDefPlayerAbility_MoveTower_ServerRequestGrabTower_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.StartMovingState
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            Tower                          (Parm)

void ADunDefPlayerAbility_MoveTower::StartMovingState(class ADunDefTower* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.StartMovingState");

	ADunDefPlayerAbility_MoveTower_StartMovingState_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientStartMovingState
// (Defined, Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// class ADunDefTower*            Tower                          (Parm)

void ADunDefPlayerAbility_MoveTower::ClientStartMovingState(class ADunDefTower* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientStartMovingState");

	ADunDefPlayerAbility_MoveTower_ClientStartMovingState_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerReceivePlacementState
// (Defined, Net, Public, NetServer)
// Parameters:
// unsigned long                  bIsValidPlacement              (Parm)
// struct FVector                 tPlacementLocation             (Parm)
// struct FRotator                tPlacementRotation             (Parm)

void ADunDefPlayerAbility_MoveTower::ServerReceivePlacementState(unsigned long bIsValidPlacement, const struct FVector& tPlacementLocation, const struct FRotator& tPlacementRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerReceivePlacementState");

	ADunDefPlayerAbility_MoveTower_ServerReceivePlacementState_Params params;
	params.bIsValidPlacement = bIsValidPlacement;
	params.tPlacementLocation = tPlacementLocation;
	params.tPlacementRotation = tPlacementRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostPlacementUpdate
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_MoveTower::PostPlacementUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostPlacementUpdate");

	ADunDefPlayerAbility_MoveTower_PostPlacementUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateDecalPlacement
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_MoveTower::UpdateDecalPlacement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateDecalPlacement");

	ADunDefPlayerAbility_MoveTower_UpdateDecalPlacement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.AllowTowerPlacementPosition
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 placementPos                   (Parm)
// int                            PlacementDeniedReason          (OptionalParm, Parm, OutParm)
// unsigned long                  bOnlyCheckVolumes              (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_MoveTower::AllowTowerPlacementPosition(const struct FVector& placementPos, unsigned long bOnlyCheckVolumes, int* PlacementDeniedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.AllowTowerPlacementPosition");

	ADunDefPlayerAbility_MoveTower_AllowTowerPlacementPosition_Params params;
	params.placementPos = placementPos;
	params.bOnlyCheckVolumes = bOnlyCheckVolumes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlacementDeniedReason != nullptr)
		*PlacementDeniedReason = params.PlacementDeniedReason;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetOtherMoveAbilityTowerRadius
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_MoveTower::GetOtherMoveAbilityTowerRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetOtherMoveAbilityTowerRadius");

	ADunDefPlayerAbility_MoveTower_GetOtherMoveAbilityTowerRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsInPlacingTowerState
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_MoveTower::IsInPlacingTowerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsInPlacingTowerState");

	ADunDefPlayerAbility_MoveTower_IsInPlacingTowerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsTowerPhysical
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_MoveTower::IsTowerPhysical()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsTowerPhysical");

	ADunDefPlayerAbility_MoveTower_IsTowerPhysical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.OnActivate
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_MoveTower::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.OnActivate");

	ADunDefPlayerAbility_MoveTower_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateClientInterpolations
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_MoveTower::UpdateClientInterpolations(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateClientInterpolations");

	ADunDefPlayerAbility_MoveTower_UpdateClientInterpolations_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerGotoRotationState
// (Net, NetReliable, Public, NetServer)

void ADunDefPlayerAbility_MoveTower::ServerGotoRotationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerGotoRotationState");

	ADunDefPlayerAbility_MoveTower_ServerGotoRotationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetPlacementWeaponEffect
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEmitterSpawnable* ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEmitterSpawnable* ADunDefPlayerAbility_MoveTower::GetPlacementWeaponEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetPlacementWeaponEffect");

	ADunDefPlayerAbility_MoveTower_GetPlacementWeaponEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_MoveTower::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostBeginPlay");

	ADunDefPlayerAbility_MoveTower_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ExecReplicatedFunction
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

void ADunDefPlayerAbility_MoveTower::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ExecReplicatedFunction");

	ADunDefPlayerAbility_MoveTower_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPlayerAbility_MoveTower::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ReplicatedEvent");

	ADunDefPlayerAbility_MoveTower_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_SummonCommand::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetAbilityStatus");

	ADunDefPlayerAbility_SummonCommand_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.RequestActivation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bHeld                          (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_SummonCommand::RequestActivation(unsigned long bHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.RequestActivation");

	ADunDefPlayerAbility_SummonCommand_RequestActivation_Params params;
	params.bHeld = bHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StopTowerPlacingAnimation
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SummonCommand::StopTowerPlacingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StopTowerPlacingAnimation");

	ADunDefPlayerAbility_SummonCommand_StopTowerPlacingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StartTowerPlacingAnimation
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SummonCommand::StartTowerPlacingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StartTowerPlacingAnimation");

	ADunDefPlayerAbility_SummonCommand_StartTowerPlacingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.AllowCastingCancelOnDamage
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_SummonCommand::AllowCastingCancelOnDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.AllowCastingCancelOnDamage");

	ADunDefPlayerAbility_SummonCommand_AllowCastingCancelOnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostPlacementUpdate
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_SummonCommand::PostPlacementUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostPlacementUpdate");

	ADunDefPlayerAbility_SummonCommand_PostPlacementUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.UpdateDecalPlacement
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_SummonCommand::UpdateDecalPlacement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.UpdateDecalPlacement");

	ADunDefPlayerAbility_SummonCommand_UpdateDecalPlacement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.ServerRequestSetCommand
// (Defined, Net, NetReliable, Public, NetServer, HasDefaults)
// Parameters:
// struct FVector                 pLoc                           (Parm)
// class AActor*                  targActor                      (Parm)

void ADunDefPlayerAbility_SummonCommand::ServerRequestSetCommand(const struct FVector& pLoc, class AActor* targActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.ServerRequestSetCommand");

	ADunDefPlayerAbility_SummonCommand_ServerRequestSetCommand_Params params;
	params.pLoc = pLoc;
	params.targActor = targActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.HandleInstantCommand
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SummonCommand::HandleInstantCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.HandleInstantCommand");

	ADunDefPlayerAbility_SummonCommand_HandleInstantCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.OnActivate
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SummonCommand::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.OnActivate");

	ADunDefPlayerAbility_SummonCommand_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetCastingStateNamePC
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayerAbility_SummonCommand::GetCastingStateNamePC()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetCastingStateNamePC");

	ADunDefPlayerAbility_SummonCommand_GetCastingStateNamePC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_SummonCommand::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostBeginPlay");

	ADunDefPlayerAbility_SummonCommand_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.IncreasePlacementTowerRadius
// (Simulated, Public)

void ADunDefPlayerAbility_SummonCommand::IncreasePlacementTowerRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.IncreasePlacementTowerRadius");

	ADunDefPlayerAbility_SummonCommand_IncreasePlacementTowerRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.DecreasePlacementTowerRadius
// (Simulated, Public)

void ADunDefPlayerAbility_SummonCommand::DecreasePlacementTowerRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.DecreasePlacementTowerRadius");

	ADunDefPlayerAbility_SummonCommand_DecreasePlacementTowerRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetCastingStateNamePC
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayerAbility_PhaseShiftOverlord::GetCastingStateNamePC()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetCastingStateNamePC");

	ADunDefPlayerAbility_PhaseShiftOverlord_GetCastingStateNamePC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.ServerRequestSetCommand
// (Defined, Net, NetReliable, Public, NetServer)
// Parameters:
// struct FVector                 pLoc                           (Parm)
// class AActor*                  targActor                      (Parm)
// TEnumAsByte<ESummonedCommand>  myCommand                      (Parm)

void ADunDefPlayerAbility_PhaseShiftOverlord::ServerRequestSetCommand(const struct FVector& pLoc, class AActor* targActor, TEnumAsByte<ESummonedCommand> myCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.ServerRequestSetCommand");

	ADunDefPlayerAbility_PhaseShiftOverlord_ServerRequestSetCommand_Params params;
	params.pLoc = pLoc;
	params.targActor = targActor;
	params.myCommand = myCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DoMovementCommand
// (Defined, Public, HasDefaults)
// Parameters:
// TArray<class ADunDefTower_SummonEnemy*> selectedTowers                 (Parm, NeedCtorLink)
// struct FVector                 pLoc                           (Parm)
// TEnumAsByte<ESummonedCommand>  myCommand                      (Parm)

void ADunDefPlayerAbility_PhaseShiftOverlord::DoMovementCommand(TArray<class ADunDefTower_SummonEnemy*> selectedTowers, const struct FVector& pLoc, TEnumAsByte<ESummonedCommand> myCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DoMovementCommand");

	ADunDefPlayerAbility_PhaseShiftOverlord_DoMovementCommand_Params params;
	params.selectedTowers = selectedTowers;
	params.pLoc = pLoc;
	params.myCommand = myCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DrawCastingHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_PhaseShiftOverlord::DrawCastingHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DrawCastingHUD");

	ADunDefPlayerAbility_PhaseShiftOverlord_DrawCastingHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestActivation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bHeld                          (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_PhaseShiftOverlord::RequestActivation(unsigned long bHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestActivation");

	ADunDefPlayerAbility_PhaseShiftOverlord_RequestActivation_Params params;
	params.bHeld = bHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_PhaseShiftOverlord::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetAbilityStatus");

	ADunDefPlayerAbility_PhaseShiftOverlord_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestCancellation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bForce                         (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_PhaseShiftOverlord::RequestCancellation(unsigned long bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestCancellation");

	ADunDefPlayerAbility_PhaseShiftOverlord_RequestCancellation_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleConfirmation
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShiftOverlord::HandleConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleConfirmation");

	ADunDefPlayerAbility_PhaseShiftOverlord_HandleConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltCancellation
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_PhaseShiftOverlord::HandleAltCancellation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltCancellation");

	ADunDefPlayerAbility_PhaseShiftOverlord_HandleAltCancellation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltConfirmation
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPlayerAbility_PhaseShiftOverlord::HandleAltConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltConfirmation");

	ADunDefPlayerAbility_PhaseShiftOverlord_HandleAltConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StopTowerPlacingAnimation
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SelectSummonUnits::StopTowerPlacingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StopTowerPlacingAnimation");

	ADunDefPlayerAbility_SelectSummonUnits_StopTowerPlacingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StartTowerPlacingAnimation
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SelectSummonUnits::StartTowerPlacingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StartTowerPlacingAnimation");

	ADunDefPlayerAbility_SelectSummonUnits_StartTowerPlacingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AllowCastingCancelOnDamage
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_SelectSummonUnits::AllowCastingCancelOnDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AllowCastingCancelOnDamage");

	ADunDefPlayerAbility_SelectSummonUnits_AllowCastingCancelOnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DeSelectUnits
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SelectSummonUnits::DeSelectUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DeSelectUnits");

	ADunDefPlayerAbility_SelectSummonUnits_DeSelectUnits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.SelectAllTowers
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SelectSummonUnits::SelectAllTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.SelectAllTowers");

	ADunDefPlayerAbility_SelectSummonUnits_SelectAllTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.OnActivate
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SelectSummonUnits::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.OnActivate");

	ADunDefPlayerAbility_SelectSummonUnits_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostPlacementUpdate
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_SelectSummonUnits::PostPlacementUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostPlacementUpdate");

	ADunDefPlayerAbility_SelectSummonUnits_PostPlacementUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.UpdateDecalPlacement
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_SelectSummonUnits::UpdateDecalPlacement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.UpdateDecalPlacement");

	ADunDefPlayerAbility_SelectSummonUnits_UpdateDecalPlacement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.CancelAbility
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SelectSummonUnits::CancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.CancelAbility");

	ADunDefPlayerAbility_SelectSummonUnits_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AbilityTick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_SelectSummonUnits::AbilityTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AbilityTick");

	ADunDefPlayerAbility_SelectSummonUnits_AbilityTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_SelectSummonUnits::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostBeginPlay");

	ADunDefPlayerAbility_SelectSummonUnits_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.IncreasePlacementTowerRadius
// (Simulated, Public)

void ADunDefPlayerAbility_SelectSummonUnits::IncreasePlacementTowerRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.IncreasePlacementTowerRadius");

	ADunDefPlayerAbility_SelectSummonUnits_IncreasePlacementTowerRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DecreasePlacementTowerRadius
// (Simulated, Public)

void ADunDefPlayerAbility_SelectSummonUnits::DecreasePlacementTowerRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DecreasePlacementTowerRadius");

	ADunDefPlayerAbility_SelectSummonUnits_DecreasePlacementTowerRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_SlamDash::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.GetAbilityStatus");

	ADunDefPlayerAbility_SlamDash_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ConsumesInputWhenActive
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_SlamDash::ConsumesInputWhenActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ConsumesInputWhenActive");

	ADunDefPlayerAbility_SlamDash_ConsumesInputWhenActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.AllowUsageDuringCastingStates
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_SlamDash::AllowUsageDuringCastingStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.AllowUsageDuringCastingStates");

	ADunDefPlayerAbility_SlamDash_AllowUsageDuringCastingStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.CheckStuck
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SlamDash::CheckStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.CheckStuck");

	ADunDefPlayerAbility_SlamDash_CheckStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PlayStopAnim
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SlamDash::PlayStopAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PlayStopAnim");

	ADunDefPlayerAbility_SlamDash_PlayStopAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ShutOffVFX
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SlamDash::ShutOffVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ShutOffVFX");

	ADunDefPlayerAbility_SlamDash_ShutOffVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ActivateHandVFX
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_SlamDash::ActivateHandVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ActivateHandVFX");

	ADunDefPlayerAbility_SlamDash_ActivateHandVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PushCheck
// (Public)

void ADunDefPlayerAbility_SlamDash::PushCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PushCheck");

	ADunDefPlayerAbility_SlamDash_PushCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ExecReplicatedFunction
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

void ADunDefPlayerAbility_SlamDash::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ExecReplicatedFunction");

	ADunDefPlayerAbility_SlamDash_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPlayerAbility_SlamDash::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ReplicatedEvent");

	ADunDefPlayerAbility_SlamDash_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_StanceOnDmgEffect::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.GetAbilityStatus");

	ADunDefPlayerAbility_StanceOnDmgEffect_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.SetMaxHealAmountPerAttack
// (Defined, Public)

void ADunDefPlayerAbility_StanceOnDmgEffect::SetMaxHealAmountPerAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.SetMaxHealAmountPerAttack");

	ADunDefPlayerAbility_StanceOnDmgEffect_SetMaxHealAmountPerAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.ResetWeaponDamage
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceOnDmgEffect::ResetWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.ResetWeaponDamage");

	ADunDefPlayerAbility_StanceOnDmgEffect_ResetWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopOffHandWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceOnDmgEffect::StopOffHandWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopOffHandWeaponDamage");

	ADunDefPlayerAbility_StanceOnDmgEffect_StopOffHandWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceOnDmgEffect::StopWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopWeaponDamage");

	ADunDefPlayerAbility_StanceOnDmgEffect_StopWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartOffHandWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceOnDmgEffect::StartOffHandWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartOffHandWeaponDamage");

	ADunDefPlayerAbility_StanceOnDmgEffect_StartOffHandWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceOnDmgEffect::StartWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartWeaponDamage");

	ADunDefPlayerAbility_StanceOnDmgEffect_StartWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.DoAddHealth
// (Defined, Simulated, Public)
// Parameters:
// int                            dmgAmount                      (Parm)

void ADunDefPlayerAbility_StanceOnDmgEffect::DoAddHealth(int dmgAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.DoAddHealth");

	ADunDefPlayerAbility_StanceOnDmgEffect_DoAddHealth_Params params;
	params.dmgAmount = dmgAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_StanceLightning::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetAbilityStatus");

	ADunDefPlayerAbility_StanceLightning_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetStunTime
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_StanceLightning::GetStunTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetStunTime");

	ADunDefPlayerAbility_StanceLightning_GetStunTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ClearChainedList
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceLightning::ClearChainedList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ClearChainedList");

	ADunDefPlayerAbility_StanceLightning_ClearChainedList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ClearStunnedList
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceLightning::ClearStunnedList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ClearStunnedList");

	ADunDefPlayerAbility_StanceLightning_ClearStunnedList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.RemoveStunnedActor
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefEnemy*            stunRemoval                    (Parm)
// unsigned long                  bDontReplicate                 (OptionalParm, Parm)

void ADunDefPlayerAbility_StanceLightning::RemoveStunnedActor(class ADunDefEnemy* stunRemoval, unsigned long bDontReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.RemoveStunnedActor");

	ADunDefPlayerAbility_StanceLightning_RemoveStunnedActor_Params params;
	params.stunRemoval = stunRemoval;
	params.bDontReplicate = bDontReplicate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.AddStunnedActor
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefEnemy*            newStun                        (Parm)

void ADunDefPlayerAbility_StanceLightning::AddStunnedActor(class ADunDefEnemy* newStun)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.AddStunnedActor");

	ADunDefPlayerAbility_StanceLightning_AddStunnedActor_Params params;
	params.newStun = newStun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetChainRange
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_StanceLightning::GetChainRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetChainRange");

	ADunDefPlayerAbility_StanceLightning_GetChainRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.FadeOutChain
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceLightning::FadeOutChain()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.FadeOutChain");

	ADunDefPlayerAbility_StanceLightning_FadeOutChain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetNumberOfChains
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPlayerAbility_StanceLightning::GetNumberOfChains()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetNumberOfChains");

	ADunDefPlayerAbility_StanceLightning_GetNumberOfChains_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetLastChainPos
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefPlayerAbility_StanceLightning::GetLastChainPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetLastChainPos");

	ADunDefPlayerAbility_StanceLightning_GetLastChainPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.CanStun
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            stunTest                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceLightning::CanStun(class ADunDefEnemy* stunTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.CanStun");

	ADunDefPlayerAbility_StanceLightning_CanStun_Params params;
	params.stunTest = stunTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ExecReplicatedFunction
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

void ADunDefPlayerAbility_StanceLightning::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ExecReplicatedFunction");

	ADunDefPlayerAbility_StanceLightning_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_StanceSpecialAttack::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetAbilityStatus");

	ADunDefPlayerAbility_StanceSpecialAttack_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopOffHandWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceSpecialAttack::StopOffHandWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopOffHandWeaponDamage");

	ADunDefPlayerAbility_StanceSpecialAttack_StopOffHandWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceSpecialAttack::StopWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopWeaponDamage");

	ADunDefPlayerAbility_StanceSpecialAttack_StopWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartOffHandWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceSpecialAttack::StartOffHandWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartOffHandWeaponDamage");

	ADunDefPlayerAbility_StanceSpecialAttack_StartOffHandWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartWeaponDamage
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_StanceSpecialAttack::StartWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartWeaponDamage");

	ADunDefPlayerAbility_StanceSpecialAttack_StartWeaponDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetMomentum
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_StanceSpecialAttack::GetMomentum()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetMomentum");

	ADunDefPlayerAbility_StanceSpecialAttack_GetMomentum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetDamage
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefWeapon_MeleeSword* dmgWeapon                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_StanceSpecialAttack::GetDamage(class ADunDefWeapon_MeleeSword* dmgWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetDamage");

	ADunDefPlayerAbility_StanceSpecialAttack_GetDamage_Params params;
	params.dmgWeapon = dmgWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearStanceStun
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceSpecialAttack::ClearStanceStun()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearStanceStun");

	ADunDefPlayerAbility_StanceSpecialAttack_ClearStanceStun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CancelAbility
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceSpecialAttack::CancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CancelAbility");

	ADunDefPlayerAbility_StanceSpecialAttack_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CompletedSpecial
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceSpecialAttack::CompletedSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CompletedSpecial");

	ADunDefPlayerAbility_StanceSpecialAttack_CompletedSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClientCompletedSpecial
// (Defined, Net, NetReliable, Simulated, Public, NetClient)

void ADunDefPlayerAbility_StanceSpecialAttack::ClientCompletedSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClientCompletedSpecial");

	ADunDefPlayerAbility_StanceSpecialAttack_ClientCompletedSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.SpawnFinishEmitter
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPlayerAbility_StanceSpecialAttack::SpawnFinishEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.SpawnFinishEmitter");

	ADunDefPlayerAbility_StanceSpecialAttack_SpawnFinishEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_Off
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceSpecialAttack::AnimNotify_CurrentAbility_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_Off");

	ADunDefPlayerAbility_StanceSpecialAttack_AnimNotify_CurrentAbility_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_On
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceSpecialAttack::AnimNotify_CurrentAbility_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_On");

	ADunDefPlayerAbility_StanceSpecialAttack_AnimNotify_CurrentAbility_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSpecialAttack
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceSpecialAttack::DoSpecialAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSpecialAttack");

	ADunDefPlayerAbility_StanceSpecialAttack_DoSpecialAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearHitList
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceSpecialAttack::ClearHitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearHitList");

	ADunDefPlayerAbility_StanceSpecialAttack_ClearHitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSwinging
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_StanceSpecialAttack::DoSwinging()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSwinging");

	ADunDefPlayerAbility_StanceSpecialAttack_DoSwinging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPlayerAbility_StanceSpecialAttack::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ReplicatedEvent");

	ADunDefPlayerAbility_StanceSpecialAttack_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_WheeloFortuna::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetAbilityStatus");

	ADunDefPlayerAbility_WheeloFortuna_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCostToActivate
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  returnTrueValue                (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefPlayerAbility_WheeloFortuna::GetCostToActivate(unsigned long returnTrueValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCostToActivate");

	ADunDefPlayerAbility_WheeloFortuna_GetCostToActivate_Params params;
	params.returnTrueValue = returnTrueValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.StopLoopingAnims
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_WheeloFortuna::StopLoopingAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.StopLoopingAnims");

	ADunDefPlayerAbility_WheeloFortuna_StopLoopingAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCastingCharacterAnimation
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ADunDefPlayerAbility_WheeloFortuna::GetCastingCharacterAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCastingCharacterAnimation");

	ADunDefPlayerAbility_WheeloFortuna_GetCastingCharacterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_WheeloFortuna::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.Destroyed");

	ADunDefPlayerAbility_WheeloFortuna_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ResetTimeDilation
// (Defined, Public)

void ADunDefPlayerAbility_WheeloFortuna::ResetTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ResetTimeDilation");

	ADunDefPlayerAbility_WheeloFortuna_ResetTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTimeDilation
// (Defined, Public)
// Parameters:
// struct FGlyphPattern           thePattern                     (Parm, NeedCtorLink)

void ADunDefPlayerAbility_WheeloFortuna::DoTimeDilation(const struct FGlyphPattern& thePattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTimeDilation");

	ADunDefPlayerAbility_WheeloFortuna_DoTimeDilation_Params params;
	params.thePattern = thePattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SpawnManaTokens
// (Defined, Public)

void ADunDefPlayerAbility_WheeloFortuna::SpawnManaTokens()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SpawnManaTokens");

	ADunDefPlayerAbility_WheeloFortuna_SpawnManaTokens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GoldEnemy
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            Enemy                          (Parm)

void ADunDefPlayerAbility_WheeloFortuna::GoldEnemy(class ADunDefEnemy* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GoldEnemy");

	ADunDefPlayerAbility_WheeloFortuna_GoldEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoGolding
// (Defined, Public)
// Parameters:
// struct FGlyphPattern           thePattern                     (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_WheeloFortuna::DoGolding(const struct FGlyphPattern& thePattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoGolding");

	ADunDefPlayerAbility_WheeloFortuna_DoGolding_Params params;
	params.thePattern = thePattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.EndEffect
// (Defined, Public)

void ADunDefPlayerAbility_WheeloFortuna::EndEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.EndEffect");

	ADunDefPlayerAbility_WheeloFortuna_EndEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ClearOutBoosters
// (Defined, Public)

void ADunDefPlayerAbility_WheeloFortuna::ClearOutBoosters()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ClearOutBoosters");

	ADunDefPlayerAbility_WheeloFortuna_ClearOutBoosters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleEnemyAffects
// (Defined, Public)
// Parameters:
// struct FGlyphPattern           thePattern                     (Parm, NeedCtorLink)

void ADunDefPlayerAbility_WheeloFortuna::HandleEnemyAffects(const struct FGlyphPattern& thePattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleEnemyAffects");

	ADunDefPlayerAbility_WheeloFortuna_HandleEnemyAffects_Params params;
	params.thePattern = thePattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleTowerAffects
// (Defined, Public)
// Parameters:
// struct FGlyphPattern           thePattern                     (Parm, NeedCtorLink)

void ADunDefPlayerAbility_WheeloFortuna::HandleTowerAffects(const struct FGlyphPattern& thePattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleTowerAffects");

	ADunDefPlayerAbility_WheeloFortuna_HandleTowerAffects_Params params;
	params.thePattern = thePattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandlePlayerAffects
// (Defined, Public)
// Parameters:
// struct FGlyphPattern           thePattern                     (Parm, NeedCtorLink)

void ADunDefPlayerAbility_WheeloFortuna::HandlePlayerAffects(const struct FGlyphPattern& thePattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandlePlayerAffects");

	ADunDefPlayerAbility_WheeloFortuna_HandlePlayerAffects_Params params;
	params.thePattern = thePattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTowerUpgrades
// (Defined, Public)
// Parameters:
// struct FGlyphPattern           thePattern                     (Parm, NeedCtorLink)

void ADunDefPlayerAbility_WheeloFortuna::DoTowerUpgrades(const struct FGlyphPattern& thePattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTowerUpgrades");

	ADunDefPlayerAbility_WheeloFortuna_DoTowerUpgrades_Params params;
	params.thePattern = thePattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.PlayerTeleport
// (Defined, Public)
// Parameters:
// struct FGlyphPattern           thePattern                     (Parm, NeedCtorLink)

void ADunDefPlayerAbility_WheeloFortuna::PlayerTeleport(const struct FGlyphPattern& thePattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.PlayerTeleport");

	ADunDefPlayerAbility_WheeloFortuna_PlayerTeleport_Params params;
	params.thePattern = thePattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleSuccess
// (Defined, Net, NetReliable, Public, NetServer, HasDefaults)
// Parameters:
// int                            patternIdx                     (Parm)

void ADunDefPlayerAbility_WheeloFortuna::ServerHandleSuccess(int patternIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleSuccess");

	ADunDefPlayerAbility_WheeloFortuna_ServerHandleSuccess_Params params;
	params.patternIdx = patternIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleDefault
// (Defined, Net, NetReliable, Public, NetServer)

void ADunDefPlayerAbility_WheeloFortuna::ServerHandleDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleDefault");

	ADunDefPlayerAbility_WheeloFortuna_ServerHandleDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CancelAbility
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_WheeloFortuna::CancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CancelAbility");

	ADunDefPlayerAbility_WheeloFortuna_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SetDoFadeOut
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_WheeloFortuna::SetDoFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SetDoFadeOut");

	ADunDefPlayerAbility_WheeloFortuna_SetDoFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.FinishSelection
// (Defined, Simulated, Public, HasDefaults)

void ADunDefPlayerAbility_WheeloFortuna::FinishSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.FinishSelection");

	ADunDefPlayerAbility_WheeloFortuna_FinishSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CheckPattern
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FGlyphPattern           CheckPattern                   (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_WheeloFortuna::CheckPattern(const struct FGlyphPattern& CheckPattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CheckPattern");

	ADunDefPlayerAbility_WheeloFortuna_CheckPattern_Params params;
	params.CheckPattern = CheckPattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetBoostedTargets
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<class APawn*>           boostedTargets                 (Parm, OutParm, NeedCtorLink)

void ADunDefPlayerAbility_WheeloFortuna::GetBoostedTargets(TArray<class APawn*>* boostedTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetBoostedTargets");

	ADunDefPlayerAbility_WheeloFortuna_GetBoostedTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (boostedTargets != nullptr)
		*boostedTargets = params.boostedTargets;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.NotifyOfBoostedRemoval
// (Defined, Public)
// Parameters:
// class APawn*                   removedBoostee                 (Parm)

void ADunDefPlayerAbility_WheeloFortuna::NotifyOfBoostedRemoval(class APawn* removedBoostee)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.NotifyOfBoostedRemoval");

	ADunDefPlayerAbility_WheeloFortuna_NotifyOfBoostedRemoval_Params params;
	params.removedBoostee = removedBoostee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetPawnBoostAmount
// (Defined, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_WheeloFortuna::GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetPawnBoostAmount");

	ADunDefPlayerAbility_WheeloFortuna_GetPawnBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HasPawnBoostingType
// (Defined, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EPawnBoostType>    boostType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_WheeloFortuna::HasPawnBoostingType(TEnumAsByte<EPawnBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HasPawnBoostingType");

	ADunDefPlayerAbility_WheeloFortuna_HasPawnBoostingType_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.UpdateStuns
// (Defined, Public)

void ADunDefPlayerAbility_WheeloFortuna::UpdateStuns()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.UpdateStuns");

	ADunDefPlayerAbility_WheeloFortuna_UpdateStuns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.AbilityTick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPlayerAbility_WheeloFortuna::AbilityTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.AbilityTick");

	ADunDefPlayerAbility_WheeloFortuna_AbilityTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ForceSelections
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_WheeloFortuna::ForceSelections()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ForceSelections");

	ADunDefPlayerAbility_WheeloFortuna_ForceSelections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPlayerAbility_WheeloFortuna::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.PostBeginPlay");

	ADunDefPlayerAbility_WheeloFortuna_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ExecReplicatedFunction
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

void ADunDefPlayerAbility_WheeloFortuna::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ExecReplicatedFunction");

	ADunDefPlayerAbility_WheeloFortuna_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.ConsumesInputWhenActive
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_WhirlWind::ConsumesInputWhenActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.ConsumesInputWhenActive");

	ADunDefPlayerAbility_WhirlWind_ConsumesInputWhenActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void ADunDefPlayerAbility_WhirlWind::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.InitalizeActorStats");

	ADunDefPlayerAbility_WhirlWind_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.CanAffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  theAct                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_WhirlWind::CanAffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.CanAffect");

	ADunDefPlayerAbility_WhirlWind_CanAffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.SetElementalVFX
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<EElementTrait>     aElementalTrait                (Parm)

void ADunDefPlayerAbility_WhirlWind::SetElementalVFX(TEnumAsByte<EElementTrait> aElementalTrait)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.SetElementalVFX");

	ADunDefPlayerAbility_WhirlWind_SetElementalVFX_Params params;
	params.aElementalTrait = aElementalTrait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AbilityReleased
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_WhirlWind::AbilityReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AbilityReleased");

	ADunDefPlayerAbility_WhirlWind_AbilityReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AbilityPressed
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefPlayerAbility_WhirlWind::AbilityPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AbilityPressed");

	ADunDefPlayerAbility_WhirlWind_AbilityPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.CancelEffect
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_WhirlWind::CancelEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.CancelEffect");

	ADunDefPlayerAbility_WhirlWind_CancelEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetElementalDamageType
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ADunDefPlayerAbility_WhirlWind::GetElementalDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetElementalDamageType");

	ADunDefPlayerAbility_WhirlWind_GetElementalDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetDamageType
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ADunDefPlayerAbility_WhirlWind::GetDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetDamageType");

	ADunDefPlayerAbility_WhirlWind_GetDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetElementalDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_WhirlWind::GetElementalDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetElementalDamage");

	ADunDefPlayerAbility_WhirlWind_GetElementalDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefPlayerAbility_WhirlWind::GetDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetDamage");

	ADunDefPlayerAbility_WhirlWind_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetAbilityStatus
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            ExtraStatusFlag                (OptionalParm, Parm, OutParm)
// TEnumAsByte<EPlayerAbilityStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPlayerAbilityStatus> ADunDefPlayerAbility_WhirlWind::GetAbilityStatus(int* ExtraStatusFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetAbilityStatus");

	ADunDefPlayerAbility_WhirlWind_GetAbilityStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraStatusFlag != nullptr)
		*ExtraStatusFlag = params.ExtraStatusFlag;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.DoEffect
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_WhirlWind::DoEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.DoEffect");

	ADunDefPlayerAbility_WhirlWind_DoEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AddEffect
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class AActor*                  theAct                         (Parm)

void ADunDefPlayerAbility_WhirlWind::AddEffect(class AActor* theAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AddEffect");

	ADunDefPlayerAbility_WhirlWind_AddEffect_Params params;
	params.theAct = theAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.OnActivate
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_WhirlWind::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.OnActivate");

	ADunDefPlayerAbility_WhirlWind_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.PostBeginPlay
// (Defined, Simulated, Public)

void ADunDefPlayerAbility_WhirlWind::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.PostBeginPlay");

	ADunDefPlayerAbility_WhirlWind_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPlayerAbility_WhirlWind::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.ReplicatedEvent");

	ADunDefPlayerAbility_WhirlWind_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.CheckGround
// (Defined, Simulated, Public, HasDefaults)

void ADunDefProjectileHoming_Piercing_GroundBound::CheckGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.CheckGround");

	ADunDefProjectileHoming_Piercing_GroundBound_CheckGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.InitProjectile
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Direction                      (Parm)
// class APawn*                   MyInstigator                   (Parm)
// float                          baseDamageForScaling           (OptionalParm, Parm)
// class AActor*                  myHomingTarget                 (OptionalParm, Parm)
// TScriptInterface<class UIActorModifierInterface> MyActorModifier                (OptionalParm, Parm)

void ADunDefProjectileHoming_Piercing_GroundBound::InitProjectile(const struct FVector& Direction, class APawn* MyInstigator, float baseDamageForScaling, class AActor* myHomingTarget, const TScriptInterface<class UIActorModifierInterface>& MyActorModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.InitProjectile");

	ADunDefProjectileHoming_Piercing_GroundBound_InitProjectile_Params params;
	params.Direction = Direction;
	params.MyInstigator = MyInstigator;
	params.baseDamageForScaling = baseDamageForScaling;
	params.myHomingTarget = myHomingTarget;
	params.MyActorModifier = MyActorModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefProjectileHoming_Piercing_GroundBound::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.PostBeginPlay");

	ADunDefProjectileHoming_Piercing_GroundBound_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.DoPulse
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bForce                         (OptionalParm, Parm)

void ADunDefProjectileHoming_Piercing_GroundBound_Pulse::DoPulse(unsigned long bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.DoPulse");

	ADunDefProjectileHoming_Piercing_GroundBound_Pulse_DoPulse_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.Expire
// (Defined, Simulated, Event, Public)

void ADunDefProjectileHoming_Piercing_GroundBound_Pulse::Expire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.Expire");

	ADunDefProjectileHoming_Piercing_GroundBound_Pulse_Expire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.InitProjectile
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Direction                      (Parm)
// class APawn*                   MyInstigator                   (Parm)
// float                          baseDamageForScaling           (OptionalParm, Parm)
// class AActor*                  myHomingTarget                 (OptionalParm, Parm)
// TScriptInterface<class UIActorModifierInterface> MyActorModifier                (OptionalParm, Parm)

void ADunDefProjectileHoming_Piercing_GroundBound_Pulse::InitProjectile(const struct FVector& Direction, class APawn* MyInstigator, float baseDamageForScaling, class AActor* myHomingTarget, const TScriptInterface<class UIActorModifierInterface>& MyActorModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.InitProjectile");

	ADunDefProjectileHoming_Piercing_GroundBound_Pulse_InitProjectile_Params params;
	params.Direction = Direction;
	params.MyInstigator = MyInstigator;
	params.baseDamageForScaling = baseDamageForScaling;
	params.myHomingTarget = myHomingTarget;
	params.MyActorModifier = MyActorModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.IsImpactAllowed
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefProjectileHoming_Piercing_GroundBound_Pulse::IsImpactAllowed(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.IsImpactAllowed");

	ADunDefProjectileHoming_Piercing_GroundBound_Pulse_IsImpactAllowed_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void ADunDefProjectileHoming_Piercing_GroundBound_Pulse::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.InitalizeActorStats");

	ADunDefProjectileHoming_Piercing_GroundBound_Pulse_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectile_Orb.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefProjectile_Orb::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectile_Orb.Destroyed");

	ADunDefProjectile_Orb_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectile_Orb.DoPulse
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bForce                         (OptionalParm, Parm)

void ADunDefProjectile_Orb::DoPulse(unsigned long bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectile_Orb.DoPulse");

	ADunDefProjectile_Orb_DoPulse_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectile_Orb.IsTargetsInRange
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefProjectile_Orb::IsTargetsInRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectile_Orb.IsTargetsInRange");

	ADunDefProjectile_Orb_IsTargetsInRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefProjectile_Orb.ChangeSpeed
// (Defined, Simulated, Public)
// Parameters:
// float                          spd                            (Parm)
// struct FVector                 Dir                            (Parm)

void ADunDefProjectile_Orb::ChangeSpeed(float spd, const struct FVector& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectile_Orb.ChangeSpeed");

	ADunDefProjectile_Orb_ChangeSpeed_Params params;
	params.spd = spd;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectile_Orb.CheckGround
// (Defined, Simulated, Public)

void ADunDefProjectile_Orb::CheckGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectile_Orb.CheckGround");

	ADunDefProjectile_Orb_CheckGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectile_Orb.InitalizeActorStats
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UIActorModifierInterface> ActorStatObject                (Parm)
// class UObject*                 CallingObject                  (OptionalParm, Parm)
// int                            Tier                           (OptionalParm, Parm)
// unsigned long                  bBaseValueOnly                 (OptionalParm, Parm)

void ADunDefProjectile_Orb::InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectile_Orb.InitalizeActorStats");

	ADunDefProjectile_Orb_InitalizeActorStats_Params params;
	params.ActorStatObject = ActorStatObject;
	params.CallingObject = CallingObject;
	params.Tier = Tier;
	params.bBaseValueOnly = bBaseValueOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefProjectile_Orb.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefProjectile_Orb::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefProjectile_Orb.PostBeginPlay");

	ADunDefProjectile_Orb_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefPurifyingBomb.HurtRadius
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

unsigned long ADunDefPurifyingBomb::HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefPurifyingBomb.HurtRadius");

	ADunDefPurifyingBomb_HurtRadius_Params params;
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


// Function DunDefSpecial.DunDefTower_BoostAura.GetTowerBoostAmount
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_BoostAura::GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.GetTowerBoostAmount");

	ADunDefTower_BoostAura_GetTowerBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BoostAura.HasTowerBoostingType
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_BoostAura::HasTowerBoostingType(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.HasTowerBoostingType");

	ADunDefTower_BoostAura_HasTowerBoostingType_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BoostAura.GetTowerBoostingTarget
// (Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> ADunDefTower_BoostAura::GetTowerBoostingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.GetTowerBoostingTarget");

	ADunDefTower_BoostAura_GetTowerBoostingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BoostAura.SetBoostMultiplier
// (Defined, Public)
// Parameters:
// int                            Idx                            (Parm)

void ADunDefTower_BoostAura::SetBoostMultiplier(int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.SetBoostMultiplier");

	ADunDefTower_BoostAura_SetBoostMultiplier_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.RefreshBoosts
// (Defined, Simulated, Public)

void ADunDefTower_BoostAura::RefreshBoosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.RefreshBoosts");

	ADunDefTower_BoostAura_RefreshBoosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.GetAttackInterval
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_BoostAura::GetAttackInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.GetAttackInterval");

	ADunDefTower_BoostAura_GetAttackInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BoostAura.GetAttackDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_BoostAura::GetAttackDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.GetAttackDamage");

	ADunDefTower_BoostAura_GetAttackDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BoostAura.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefTower_BoostAura::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.ScaleForHeroModifiers");

	ADunDefTower_BoostAura_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.GetToolTipText
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefTower_BoostAura::GetToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.GetToolTipText");

	ADunDefTower_BoostAura_GetToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BoostAura.DrawTowerToolTipStats
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)
// float                          Opacity                        (Parm)
// class ULocalPlayer*            ForPlayer                      (Parm)
// float                          canvasScale                    (Parm)

void ADunDefTower_BoostAura::DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.DrawTowerToolTipStats");

	ADunDefTower_BoostAura_DrawTowerToolTipStats_Params params;
	params.C = C;
	params.Opacity = Opacity;
	params.ForPlayer = ForPlayer;
	params.canvasScale = canvasScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function DunDefSpecial.DunDefTower_BoostAura.ExitEffectDT
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefDamageableTarget* dt                             (Parm)

void ADunDefTower_BoostAura::ExitEffectDT(class ADunDefDamageableTarget* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.ExitEffectDT");

	ADunDefTower_BoostAura_ExitEffectDT_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.EntryEffectDT
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefDamageableTarget* dt                             (Parm)

void ADunDefTower_BoostAura::EntryEffectDT(class ADunDefDamageableTarget* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.EntryEffectDT");

	ADunDefTower_BoostAura_EntryEffectDT_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.AttacksDT
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefDamageableTarget* dt                             (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_BoostAura::AttacksDT(class ADunDefDamageableTarget* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.AttacksDT");

	ADunDefTower_BoostAura_AttacksDT_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BoostAura.EnteredRadiusDT
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefDamageableTarget* dt                             (Parm)

void ADunDefTower_BoostAura::EnteredRadiusDT(class ADunDefDamageableTarget* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.EnteredRadiusDT");

	ADunDefTower_BoostAura_EnteredRadiusDT_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.UnTouch
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADunDefTower_BoostAura::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.UnTouch");

	ADunDefTower_BoostAura_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.CanTargetInvisibleTarget
// (Defined, Simulated, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> aTarget                        (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_BoostAura::CanTargetInvisibleTarget(const TScriptInterface<class UDunDefTargetableInterface>& aTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.CanTargetInvisibleTarget");

	ADunDefTower_BoostAura_CanTargetInvisibleTarget_Params params;
	params.aTarget = aTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BoostAura.Touch
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefTower_BoostAura::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.Touch");

	ADunDefTower_BoostAura_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.CheckForDamagableTargets
// (Defined, Simulated, Public)

void ADunDefTower_BoostAura::CheckForDamagableTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.CheckForDamagableTargets");

	ADunDefTower_BoostAura_CheckForDamagableTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.Timer
// (Defined, Simulated, Public)

void ADunDefTower_BoostAura::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.Timer");

	ADunDefTower_BoostAura_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BoostAura.ExecReplicatedFunction
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

void ADunDefTower_BoostAura::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BoostAura.ExecReplicatedFunction");

	ADunDefTower_BoostAura_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefTower_TripTowerBuff.SetBoostMultiplier
// (Defined, Public)
// Parameters:
// int                            Idx                            (Parm)

void ADunDefTower_TripTowerBuff::SetBoostMultiplier(int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.SetBoostMultiplier");

	ADunDefTower_TripTowerBuff_SetBoostMultiplier_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.RefreshBoosts
// (Defined, Simulated, Public)

void ADunDefTower_TripTowerBuff::RefreshBoosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.RefreshBoosts");

	ADunDefTower_TripTowerBuff_RefreshBoosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefTower_TripTowerBuff::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.ScaleForHeroModifiers");

	ADunDefTower_TripTowerBuff_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.DrawTowerToolTipStats
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)
// float                          Opacity                        (Parm)
// class ULocalPlayer*            ForPlayer                      (Parm)
// float                          canvasScale                    (Parm)

void ADunDefTower_TripTowerBuff::DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.DrawTowerToolTipStats");

	ADunDefTower_TripTowerBuff_DrawTowerToolTipStats_Params params;
	params.C = C;
	params.Opacity = Opacity;
	params.ForPlayer = ForPlayer;
	params.canvasScale = canvasScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.SetUseHealthBarMat
// (Defined, Simulated, Public)

void ADunDefTower_TripTowerBuff::SetUseHealthBarMat()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.SetUseHealthBarMat");

	ADunDefTower_TripTowerBuff_SetUseHealthBarMat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetToolTipText
// (Defined, Simulated, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADunDefTower_TripTowerBuff::GetToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.GetToolTipText");

	ADunDefTower_TripTowerBuff_GetToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.NeedsRepair
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  requireFullHealth              (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripTowerBuff::NeedsRepair(unsigned long requireFullHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.NeedsRepair");

	ADunDefTower_TripTowerBuff_NeedsRepair_Params params;
	params.requireFullHealth = requireFullHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffectIndex
// (Defined, Simulated, Public)
// Parameters:
// int                            Idx                            (Parm)

void ADunDefTower_TripTowerBuff::RemoveTowerEffectIndex(int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffectIndex");

	ADunDefTower_TripTowerBuff_RemoveTowerEffectIndex_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffect
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            theTower                       (Parm)

void ADunDefTower_TripTowerBuff::RemoveTowerEffect(class ADunDefTower* theTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffect");

	ADunDefTower_TripTowerBuff_RemoveTowerEffect_Params params;
	params.theTower = theTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.AddTowerEffect
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefTower*            theTower                       (Parm)

void ADunDefTower_TripTowerBuff::AddTowerEffect(class ADunDefTower* theTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.AddTowerEffect");

	ADunDefTower_TripTowerBuff_AddTowerEffect_Params params;
	params.theTower = theTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetMaxDetonations
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_TripTowerBuff::GetMaxDetonations()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.GetMaxDetonations");

	ADunDefTower_TripTowerBuff_GetMaxDetonations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefTower_TripTowerBuff::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.Destroyed");

	ADunDefTower_TripTowerBuff_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveAllBoosts
// (Defined, Simulated, Public)

void ADunDefTower_TripTowerBuff::RemoveAllBoosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveAllBoosts");

	ADunDefTower_TripTowerBuff_RemoveAllBoosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefTower_TripTowerBuff::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.PostBeginPlay");

	ADunDefTower_TripTowerBuff_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.ClearDeletedTowers
// (Defined, Simulated, Public)

void ADunDefTower_TripTowerBuff::ClearDeletedTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.ClearDeletedTowers");

	ADunDefTower_TripTowerBuff_ClearDeletedTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.CheckTowers
// (Defined, Simulated, Public)

void ADunDefTower_TripTowerBuff::CheckTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.CheckTowers");

	ADunDefTower_TripTowerBuff_CheckTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.CanAffectTower
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            towerCheck                     (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripTowerBuff::CanAffectTower(class ADunDefTower* towerCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.CanAffectTower");

	ADunDefTower_TripTowerBuff_CanAffectTower_Params params;
	params.towerCheck = towerCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.DoTracing
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// float                          dt                             (Parm)
// unsigned long                  bForceDamage                   (OptionalParm, Parm)

void ADunDefTower_TripTowerBuff::DoTracing(float dt, unsigned long bForceDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.DoTracing");

	ADunDefTower_TripTowerBuff_DoTracing_Params params;
	params.dt = dt;
	params.bForceDamage = bForceDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostAmount
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_TripTowerBuff::GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostAmount");

	ADunDefTower_TripTowerBuff_GetTowerBoostAmount_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.HasTowerBoostingType
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<ETowerBoostType>   boostType                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_TripTowerBuff::HasTowerBoostingType(TEnumAsByte<ETowerBoostType> boostType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.HasTowerBoostingType");

	ADunDefTower_TripTowerBuff_HasTowerBoostingType_Params params;
	params.boostType = boostType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostingTarget
// (Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UDunDefTargetableInterface> ADunDefTower_TripTowerBuff::GetTowerBoostingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostingTarget");

	ADunDefTower_TripTowerBuff_GetTowerBoostingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_TripTowerBuff.ExecReplicatedFunction
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

void ADunDefTower_TripTowerBuff::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_TripTowerBuff.ExecReplicatedFunction");

	ADunDefTower_TripTowerBuff_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefTower_BuffSpawner.ChangedGamePhases
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  IsCombatPhase                  (Parm)

void ADunDefTower_BuffSpawner::ChangedGamePhases(unsigned long IsCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.ChangedGamePhases");

	ADunDefTower_BuffSpawner_ChangedGamePhases_Params params;
	params.IsCombatPhase = IsCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.AllowTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_BuffSpawner::AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.AllowTowerAtPoint");

	ADunDefTower_BuffSpawner_AllowTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.CheckAllowance
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_BuffSpawner::CheckAllowance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.CheckAllowance");

	ADunDefTower_BuffSpawner_CheckAllowance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.PreventTowerAtPoint
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// class ADunDefTower*            towerArch                      (Parm)
// struct FVector                 Point                          (Parm)
// float                          towerRadius                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_BuffSpawner::PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.PreventTowerAtPoint");

	ADunDefTower_BuffSpawner_PreventTowerAtPoint_Params params;
	params.PC = PC;
	params.towerArch = towerArch;
	params.Point = Point;
	params.towerRadius = towerRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.IsPhysicalTower
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_BuffSpawner::IsPhysicalTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.IsPhysicalTower");

	ADunDefTower_BuffSpawner_IsPhysicalTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.GetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_BuffSpawner::GetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.GetTowerTargetingDesirability");

	ADunDefTower_BuffSpawner_GetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.GetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* forController                  (Parm)
// class ADunDefPlayer*           ForPlayer                      (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_BuffSpawner::GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.GetPlayerTargetingDesirability");

	ADunDefTower_BuffSpawner_GetPlayerTargetingDesirability_Params params;
	params.forController = forController;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.DrawTowerToolTipStats
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)
// float                          Opacity                        (Parm)
// class ULocalPlayer*            ForPlayer                      (Parm)
// float                          canvasScale                    (Parm)

void ADunDefTower_BuffSpawner::DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.DrawTowerToolTipStats");

	ADunDefTower_BuffSpawner_DrawTowerToolTipStats_Params params;
	params.C = C;
	params.Opacity = Opacity;
	params.ForPlayer = ForPlayer;
	params.canvasScale = canvasScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.GetAttackInterval
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_BuffSpawner::GetAttackInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.GetAttackInterval");

	ADunDefTower_BuffSpawner_GetAttackInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.GetAttackDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_BuffSpawner::GetAttackDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.GetAttackDamage");

	ADunDefTower_BuffSpawner_GetAttackDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefTower_BuffSpawner::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.ScaleForHeroModifiers");

	ADunDefTower_BuffSpawner_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.RemoveAllBuffTargets
// (Defined, Public)

void ADunDefTower_BuffSpawner::RemoveAllBuffTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.RemoveAllBuffTargets");

	ADunDefTower_BuffSpawner_RemoveAllBuffTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.RemoveBuffsFromTarget
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADunDefTower_BuffSpawner::RemoveBuffsFromTarget(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.RemoveBuffsFromTarget");

	ADunDefTower_BuffSpawner_RemoveBuffsFromTarget_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.AddBuffsToTarget
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADunDefTower_BuffSpawner::AddBuffsToTarget(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.AddBuffsToTarget");

	ADunDefTower_BuffSpawner_AddBuffsToTarget_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.CanAffectTarget
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_BuffSpawner::CanAffectTarget(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.CanAffectTarget");

	ADunDefTower_BuffSpawner_CanAffectTarget_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefTower_BuffSpawner::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.Tick");

	ADunDefTower_BuffSpawner_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.TakeDamage
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

void ADunDefTower_BuffSpawner::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.TakeDamage");

	ADunDefTower_BuffSpawner_TakeDamage_Params params;
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


// Function DunDefSpecial.DunDefTower_BuffSpawner.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefTower_BuffSpawner::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.Destroyed");

	ADunDefTower_BuffSpawner_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.UnTouch
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADunDefTower_BuffSpawner::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.UnTouch");

	ADunDefTower_BuffSpawner_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.Touch
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefTower_BuffSpawner::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.Touch");

	ADunDefTower_BuffSpawner_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefTower_BuffSpawner::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.PostBeginPlay");

	ADunDefTower_BuffSpawner_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_BuffSpawner.ExecReplicatedFunction
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

void ADunDefTower_BuffSpawner::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_BuffSpawner.ExecReplicatedFunction");

	ADunDefTower_BuffSpawner_ExecReplicatedFunction_Params params;
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


// Function DunDefSpecial.DunDefTower_EmitterBurst.GetDamageType
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ADunDefTower_EmitterBurst::GetDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_EmitterBurst.GetDamageType");

	ADunDefTower_EmitterBurst_GetDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_EmitterBurst.StaticGetAttackRange
// (Defined, Static, Public)
// Parameters:
// class UDunDefHero*             hero                           (Parm)
// class ADunDefTower*            Tower                          (Parm)
// float                          TowerRangeScaler               (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_EmitterBurst::STATIC_StaticGetAttackRange(class UDunDefHero* hero, class ADunDefTower* Tower, float TowerRangeScaler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_EmitterBurst.StaticGetAttackRange");

	ADunDefTower_EmitterBurst_StaticGetAttackRange_Params params;
	params.hero = hero;
	params.Tower = Tower;
	params.TowerRangeScaler = TowerRangeScaler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_EmitterBurst.GetAttackRange
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_EmitterBurst::GetAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_EmitterBurst.GetAttackRange");

	ADunDefTower_EmitterBurst_GetAttackRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_EmitterBurst.GetAttackDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_EmitterBurst::GetAttackDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_EmitterBurst.GetAttackDamage");

	ADunDefTower_EmitterBurst_GetAttackDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_EmitterBurst.StopShooting
// (Defined, Public)

void ADunDefTower_EmitterBurst::StopShooting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_EmitterBurst.StopShooting");

	ADunDefTower_EmitterBurst_StopShooting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_EmitterBurst.ShootProjectile
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDefTower_EmitterBurst::ShootProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_EmitterBurst.ShootProjectile");

	ADunDefTower_EmitterBurst_ShootProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_EmitterBurst.ReplicatedEvent
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefTower_EmitterBurst::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_EmitterBurst.ReplicatedEvent");

	ADunDefTower_EmitterBurst_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.UpdateTowerRatingMaterial
// (Simulated, Public)

void ADunDefTower_Present::UpdateTowerRatingMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.UpdateTowerRatingMaterial");

	ADunDefTower_Present_UpdateTowerRatingMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.SpawnDroppedEquipment
// (Defined, Public)

void ADunDefTower_Present::SpawnDroppedEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.SpawnDroppedEquipment");

	ADunDefTower_Present_SpawnDroppedEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.SpawnManaTokens
// (Defined, Public)

void ADunDefTower_Present::SpawnManaTokens()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.SpawnManaTokens");

	ADunDefTower_Present_SpawnManaTokens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.DrawTowerToolTipStats
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)
// float                          Opacity                        (Parm)
// class ULocalPlayer*            ForPlayer                      (Parm)
// float                          canvasScale                    (Parm)

void ADunDefTower_Present::DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.DrawTowerToolTipStats");

	ADunDefTower_Present_DrawTowerToolTipStats_Params params;
	params.C = C;
	params.Opacity = Opacity;
	params.ForPlayer = ForPlayer;
	params.canvasScale = canvasScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function DunDefSpecial.DunDefTower_Present.AllowTowerSpawnAtLoc
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefTower*            TowerArchetype                 (Parm)
// struct FVector                 placementPos                   (Parm)
// unsigned long                  bOnlyCheckVolumes              (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_Present::AllowTowerSpawnAtLoc(class ADunDefTower* TowerArchetype, const struct FVector& placementPos, unsigned long bOnlyCheckVolumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.AllowTowerSpawnAtLoc");

	ADunDefTower_Present_AllowTowerSpawnAtLoc_Params params;
	params.TowerArchetype = TowerArchetype;
	params.placementPos = placementPos;
	params.bOnlyCheckVolumes = bOnlyCheckVolumes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_Present.DoActorSpawn
// (Defined, Public)
// Parameters:
// struct FspawnChances           spawnChance                    (Parm)

void ADunDefTower_Present::DoActorSpawn(const struct FspawnChances& spawnChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.DoActorSpawn");

	ADunDefTower_Present_DoActorSpawn_Params params;
	params.spawnChance = spawnChance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.DoEnemySpawn
// (Defined, Public, HasDefaults)
// Parameters:
// struct FspawnChances           spawnChance                    (Parm)

void ADunDefTower_Present::DoEnemySpawn(const struct FspawnChances& spawnChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.DoEnemySpawn");

	ADunDefTower_Present_DoEnemySpawn_Params params;
	params.spawnChance = spawnChance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.DoTowerSpawn
// (Defined, Public)
// Parameters:
// struct FspawnChances           spawnChance                    (Parm)
// struct FVector                 HitLoc                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_Present::DoTowerSpawn(const struct FspawnChances& spawnChance, const struct FVector& HitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.DoTowerSpawn");

	ADunDefTower_Present_DoTowerSpawn_Params params;
	params.spawnChance = spawnChance;
	params.HitLoc = HitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_Present.DoPresentSpawn
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  bSpawnOgresInLobby             (Parm)

void ADunDefTower_Present::DoPresentSpawn(const struct FVector& HitLocation, unsigned long bSpawnOgresInLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.DoPresentSpawn");

	ADunDefTower_Present_DoPresentSpawn_Params params;
	params.HitLocation = HitLocation;
	params.bSpawnOgresInLobby = bSpawnOgresInLobby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.PickActor
// (Defined, Public, HasOutParms)
// Parameters:
// int                            Idx                            (Parm)
// struct FspawnChances           spawnChance                    (Parm, OutParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_Present::PickActor(int Idx, struct FspawnChances* spawnChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.PickActor");

	ADunDefTower_Present_PickActor_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (spawnChance != nullptr)
		*spawnChance = params.spawnChance;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_Present.PickSpawnGroup
// (Defined, Public)

void ADunDefTower_Present::PickSpawnGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.PickSpawnGroup");

	ADunDefTower_Present_PickSpawnGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.Died
// (Defined, Public)
// Parameters:
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefTower_Present::Died(class AController* EventInstigator, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.Died");

	ADunDefTower_Present_Died_Params params;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_Present.ChangedGamePhases
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  IsCombatPhase                  (Parm)

void ADunDefTower_Present::ChangedGamePhases(unsigned long IsCombatPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_Present.ChangedGamePhases");

	ADunDefTower_Present_ChangedGamePhases_Params params;
	params.IsCombatPhase = IsCombatPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_ProjectileReflect.IsPhysicalTower
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_ProjectileReflect::IsPhysicalTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_ProjectileReflect.IsPhysicalTower");

	ADunDefTower_ProjectileReflect_IsPhysicalTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_ProjectileReflect.GetCostPerReflect
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_ProjectileReflect::GetCostPerReflect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_ProjectileReflect.GetCostPerReflect");

	ADunDefTower_ProjectileReflect_GetCostPerReflect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_ProjectileReflect.TakeDamage
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

void ADunDefTower_ProjectileReflect::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_ProjectileReflect.TakeDamage");

	ADunDefTower_ProjectileReflect_TakeDamage_Params params;
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


// Function DunDefSpecial.DunDefTower_ProjectileReflect.GetAttackDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_ProjectileReflect::GetAttackDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_ProjectileReflect.GetAttackDamage");

	ADunDefTower_ProjectileReflect_GetAttackDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_ProjectileReflect.DoReflection
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefProjectile*       reflectedProj                  (Parm)
// struct FVector                 NewDir                         (Parm)

void ADunDefTower_ProjectileReflect::DoReflection(class ADunDefProjectile* reflectedProj, const struct FVector& NewDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_ProjectileReflect.DoReflection");

	ADunDefTower_ProjectileReflect_DoReflection_Params params;
	params.reflectedProj = reflectedProj;
	params.NewDir = NewDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_ProjectileReflect.KilledTarget
// (Defined, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> aTarget                        (Parm)

void ADunDefTower_ProjectileReflect::KilledTarget(const TScriptInterface<class UDunDefTargetableInterface>& aTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_ProjectileReflect.KilledTarget");

	ADunDefTower_ProjectileReflect_KilledTarget_Params params;
	params.aTarget = aTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_ProjectileReflect.Touch
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefTower_ProjectileReflect::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_ProjectileReflect.Touch");

	ADunDefTower_ProjectileReflect_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_WebWall.ScaleForHeroModifiers
// (Defined, Public)
// Parameters:
// unsigned long                  IsFirstTime                    (Parm)

void ADunDefTower_WebWall::ScaleForHeroModifiers(unsigned long IsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.ScaleForHeroModifiers");

	ADunDefTower_WebWall_ScaleForHeroModifiers_Params params;
	params.IsFirstTime = IsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_WebWall.DrawTowerToolTipActorStats
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)
// float                          Opacity                        (Parm)
// class ULocalPlayer*            ForPlayer                      (Parm)
// float                          canvasScale                    (Parm)

void ADunDefTower_WebWall::DrawTowerToolTipActorStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.DrawTowerToolTipActorStats");

	ADunDefTower_WebWall_DrawTowerToolTipActorStats_Params params;
	params.C = C;
	params.Opacity = Opacity;
	params.ForPlayer = ForPlayer;
	params.canvasScale = canvasScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function DunDefSpecial.DunDefTower_WebWall.DrawTowerToolTipStats
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)
// float                          Opacity                        (Parm)
// class ULocalPlayer*            ForPlayer                      (Parm)
// float                          canvasScale                    (Parm)

void ADunDefTower_WebWall::DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.DrawTowerToolTipStats");

	ADunDefTower_WebWall_DrawTowerToolTipStats_Params params;
	params.C = C;
	params.Opacity = Opacity;
	params.ForPlayer = ForPlayer;
	params.canvasScale = canvasScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function DunDefSpecial.DunDefTower_WebWall.CheckTouchingActor
// (Defined, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_WebWall::CheckTouchingActor(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.CheckTouchingActor");

	ADunDefTower_WebWall_CheckTouchingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_WebWall.GetAttackDamage
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTower_WebWall::GetAttackDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.GetAttackDamage");

	ADunDefTower_WebWall_GetAttackDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_WebWall.GetCostPerWeb
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTower_WebWall::GetCostPerWeb()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.GetCostPerWeb");

	ADunDefTower_WebWall_GetCostPerWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_WebWall.TakeDamage
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

void ADunDefTower_WebWall::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.TakeDamage");

	ADunDefTower_WebWall_TakeDamage_Params params;
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


// Function DunDefSpecial.DunDefTower_WebWall.IsPhysicalTower
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTower_WebWall::IsPhysicalTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.IsPhysicalTower");

	ADunDefTower_WebWall_IsPhysicalTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTower_WebWall.KilledTarget
// (Defined, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> aTarget                        (Parm)

void ADunDefTower_WebWall::KilledTarget(const TScriptInterface<class UDunDefTargetableInterface>& aTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.KilledTarget");

	ADunDefTower_WebWall_KilledTarget_Params params;
	params.aTarget = aTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_WebWall.Touch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefTower_WebWall::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.Touch");

	ADunDefTower_WebWall_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_WebWall.UpdateBuffTargets
// (Defined, Simulated, Public)

void ADunDefTower_WebWall::UpdateBuffTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.UpdateBuffTargets");

	ADunDefTower_WebWall_UpdateBuffTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTower_WebWall.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefTower_WebWall::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTower_WebWall.PostBeginPlay");

	ADunDefTower_WebWall_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkey.UpdateDifficultyValues
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  UpdateMaterial                 (OptionalParm, Parm)
// unsigned long                  onlyDynamicValues              (OptionalParm, Parm)

void ADunDefTurkey::UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.UpdateDifficultyValues");

	ADunDefTurkey_UpdateDifficultyValues_Params params;
	params.UpdateMaterial = UpdateMaterial;
	params.onlyDynamicValues = onlyDynamicValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkey.Bump
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitNormal                      (Parm)

void ADunDefTurkey::Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.Bump");

	ADunDefTurkey_Bump_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkey.StopFlee
// (Defined, Public)

void ADunDefTurkey::StopFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.StopFlee");

	ADunDefTurkey_StopFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkey.PlayFleeSound
// (Defined, Simulated, Public)

void ADunDefTurkey::PlayFleeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.PlayFleeSound");

	ADunDefTurkey_PlayFleeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkey.StartFlee
// (Defined, Public)

void ADunDefTurkey::StartFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.StartFlee");

	ADunDefTurkey_StartFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkey.SetGroundSpeed
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          NewSpeed                       (Parm)
// unsigned long                  bUseDifficultyMult             (OptionalParm, Parm)

void ADunDefTurkey::SetGroundSpeed(float NewSpeed, unsigned long bUseDifficultyMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.SetGroundSpeed");

	ADunDefTurkey_SetGroundSpeed_Params params;
	params.NewSpeed = NewSpeed;
	params.bUseDifficultyMult = bUseDifficultyMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkey.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTurkey::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.Died");

	ADunDefTurkey_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTurkey.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefTurkey::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.Destroyed");

	ADunDefTurkey_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkey.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefTurkey::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkey.ReplicatedEvent");

	ADunDefTurkey_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.DunDefTurkeyController.WantsHurtAnimation
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTurkeyController::WantsHurtAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkeyController.WantsHurtAnimation");

	ADunDefTurkeyController_WantsHurtAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTurkeyController.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefTurkeyController::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkeyController.NotifyTakeHitEX");

	ADunDefTurkeyController_NotifyTakeHitEX_Params params;
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


// Function DunDefSpecial.DunDefTurkeyController.GetWanderPoint
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefTurkeyController::GetWanderPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkeyController.GetWanderPoint");

	ADunDefTurkeyController_GetWanderPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTurkeyController.DoFlee
// (Defined, Public, HasDefaults)
// Parameters:
// class ADunDefPlayer*           fleeFrom                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTurkeyController::DoFlee(class ADunDefPlayer* fleeFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkeyController.DoFlee");

	ADunDefTurkeyController_DoFlee_Params params;
	params.fleeFrom = fleeFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTurkeyController.CheckPlayers
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTurkeyController::CheckPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkeyController.CheckPlayers");

	ADunDefTurkeyController_CheckPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.DunDefTurkeyController.TimeOutFlee
// (Defined, Public)

void ADunDefTurkeyController::TimeOutFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.DunDefTurkeyController.TimeOutFlee");

	ADunDefTurkeyController_TimeOutFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_AroundTheWorld.InitGameReplicationInfo
// (Defined, Public)

void AGameInfo_AroundTheWorld::InitGameReplicationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_AroundTheWorld.InitGameReplicationInfo");

	AGameInfo_AroundTheWorld_InitGameReplicationInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_AroundTheWorld.DoWaveSkipping
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bAllowArbritraryWaveSkipping   (OptionalParm, Parm)

void AGameInfo_AroundTheWorld::DoWaveSkipping(unsigned long bAllowArbritraryWaveSkipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_AroundTheWorld.DoWaveSkipping");

	AGameInfo_AroundTheWorld_DoWaveSkipping_Params params;
	params.bAllowArbritraryWaveSkipping = bAllowArbritraryWaveSkipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_Assault.InitGameReplicationInfo
// (Defined, Public)

void AGameInfo_Assault::InitGameReplicationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_Assault.InitGameReplicationInfo");

	AGameInfo_Assault_InitGameReplicationInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_Assault.DoWaveSkipping
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bAllowArbritraryWaveSkipping   (OptionalParm, Parm)

void AGameInfo_Assault::DoWaveSkipping(unsigned long bAllowArbritraryWaveSkipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_Assault.DoWaveSkipping");

	AGameInfo_Assault_DoWaveSkipping_Params params;
	params.bAllowArbritraryWaveSkipping = bAllowArbritraryWaveSkipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_Assault.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AGameInfo_Assault::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_Assault.PostBeginPlay");

	AGameInfo_Assault_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_Assault.RestartPlayer
// (Defined, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AGameInfo_Assault::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_Assault.RestartPlayer");

	AGameInfo_Assault_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_Chicken.RestartPlayer
// (Defined, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AGameInfo_Chicken::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_Chicken.RestartPlayer");

	AGameInfo_Chicken_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_GoldenTokens.Killed
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             KilledPlayer                   (Parm)
// class APawn*                   KilledPawn                     (Parm)
// class UClass*                  DamageType                     (Parm)

void AGameInfo_GoldenTokens::Killed(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_GoldenTokens.Killed");

	AGameInfo_GoldenTokens_Killed_Params params;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;
	params.KilledPawn = KilledPawn;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.RestartPlayer
// (Defined, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AGameInfo_KillEnemiesTimeLimit::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.RestartPlayer");

	AGameInfo_KillEnemiesTimeLimit_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.DoWaveSkipping
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bAllowArbritraryWaveSkipping   (OptionalParm, Parm)

void AGameInfo_KillEnemiesTimeLimit::DoWaveSkipping(unsigned long bAllowArbritraryWaveSkipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.DoWaveSkipping");

	AGameInfo_KillEnemiesTimeLimit_DoWaveSkipping_Params params;
	params.bAllowArbritraryWaveSkipping = bAllowArbritraryWaveSkipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.AddObjectiveScore
// (Public)
// Parameters:
// class APlayerReplicationInfo*  Scorer                         (Parm)
// int                            Score                          (Parm)

void AGameInfo_KillEnemiesTimeLimit_Uber::AddObjectiveScore(class APlayerReplicationInfo* Scorer, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.AddObjectiveScore");

	AGameInfo_KillEnemiesTimeLimit_Uber_AddObjectiveScore_Params params;
	params.Scorer = Scorer;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.ScoreKill
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Other                          (Parm)

void AGameInfo_KillEnemiesTimeLimit_Uber::ScoreKill(class AController* Killer, class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.ScoreKill");

	AGameInfo_KillEnemiesTimeLimit_Uber_ScoreKill_Params params;
	params.Killer = Killer;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.Killed
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             KilledPlayer                   (Parm)
// class APawn*                   KilledPawn                     (Parm)
// class UClass*                  DamageType                     (Parm)

void AGameInfo_KillEnemiesTimeLimit_Uber::Killed(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.Killed");

	AGameInfo_KillEnemiesTimeLimit_Uber_Killed_Params params;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;
	params.KilledPawn = KilledPawn;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_NoTowers.InitGameReplicationInfo
// (Defined, Public)

void AGameInfo_NoTowers::InitGameReplicationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_NoTowers.InitGameReplicationInfo");

	AGameInfo_NoTowers_InitGameReplicationInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_OgreAlly.InitGameReplicationInfo
// (Defined, Public)

void AGameInfo_OgreAlly::InitGameReplicationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_OgreAlly.InitGameReplicationInfo");

	AGameInfo_OgreAlly_InitGameReplicationInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_RainingGoblins.InitGameReplicationInfo
// (Defined, Public)

void AGameInfo_RainingGoblins::InitGameReplicationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_RainingGoblins.InitGameReplicationInfo");

	AGameInfo_RainingGoblins_InitGameReplicationInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_VDay2.PairMatched
// (Defined, Public)
// Parameters:
// class ADunDefEnemy*            Boy                            (Parm)
// class ADunDefEnemy*            Girl                           (Parm)

void AGameInfo_VDay2::PairMatched(class ADunDefEnemy* Boy, class ADunDefEnemy* Girl)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_VDay2.PairMatched");

	AGameInfo_VDay2_PairMatched_Params params;
	params.Boy = Boy;
	params.Girl = Girl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_VDay2.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AGameInfo_VDay2::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_VDay2.Tick");

	AGameInfo_VDay2_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_VDay2.EnemyDied
// (Defined, Public)
// Parameters:
// class ADunDefEnemy*            anEnemy                        (Parm)

void AGameInfo_VDay2::EnemyDied(class ADunDefEnemy* anEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_VDay2.EnemyDied");

	AGameInfo_VDay2_EnemyDied_Params params;
	params.anEnemy = anEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_VDay2.WaveSpawnerCreateEnemy
// (Defined, Public)
// Parameters:
// class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner                       (Parm)
// class ADunDefEnemy*            EnemyTemplate                  (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (Parm)
// class ADunDefEnemy*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefEnemy* AGameInfo_VDay2::WaveSpawnerCreateEnemy(class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_VDay2.WaveSpawnerCreateEnemy");

	AGameInfo_VDay2_WaveSpawnerCreateEnemy_Params params;
	params.aSpawner = aSpawner;
	params.EnemyTemplate = EnemyTemplate;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.GameInfo_Wizardry.MageCheck
// (Defined, Public)

void AGameInfo_Wizardry::MageCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_Wizardry.MageCheck");

	AGameInfo_Wizardry_MageCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_Wizardry.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AGameInfo_Wizardry::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_Wizardry.PostBeginPlay");

	AGameInfo_Wizardry_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.GameInfo_ZippyTerror.InitGameReplicationInfo
// (Defined, Public)

void AGameInfo_ZippyTerror::InitGameReplicationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.GameInfo_ZippyTerror.InitGameReplicationInfo");

	AGameInfo_ZippyTerror_InitGameReplicationInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.StartMovement
// (Defined, Simulated, Public)

void ASnowManBoss::StartMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.StartMovement");

	ASnowManBoss_StartMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.StopMovement
// (Defined, Simulated, Public)

void ASnowManBoss::StopMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.StopMovement");

	ASnowManBoss_StopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ASnowManBoss::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.Died");

	ASnowManBoss_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.SnowManBoss.Destroyed
// (Defined, Simulated, Event, Public)

void ASnowManBoss::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.Destroyed");

	ASnowManBoss_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.DoStompDamage
// (Defined, Event, Public)

void ASnowManBoss::DoStompDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.DoStompDamage");

	ASnowManBoss_DoStompDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.DoStomp
// (Defined, Event, Public, HasDefaults)

void ASnowManBoss::DoStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.DoStomp");

	ASnowManBoss_DoStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.DoPeck
// (Defined, Event, Public, HasDefaults)

void ASnowManBoss::DoPeck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.DoPeck");

	ASnowManBoss_DoPeck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.GetPeckLoc
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm)

void ASnowManBoss::GetPeckLoc(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.GetPeckLoc");

	ASnowManBoss_GetPeckLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
}


// Function DunDefSpecial.SnowManBoss.SnowBallRight
// (Defined, Event, Public)

void ASnowManBoss::SnowBallRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.SnowBallRight");

	ASnowManBoss_SnowBallRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.SnowBallLeft
// (Defined, Event, Public)

void ASnowManBoss::SnowBallLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.SnowBallLeft");

	ASnowManBoss_SnowBallLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.SpawnSnowShootEffect
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 SpawnLoc                       (Parm)
// struct FRotator                SpawnRot                       (Parm)

void ASnowManBoss::SpawnSnowShootEffect(const struct FVector& SpawnLoc, const struct FRotator& SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.SpawnSnowShootEffect");

	ASnowManBoss_SpawnSnowShootEffect_Params params;
	params.SpawnLoc = SpawnLoc;
	params.SpawnRot = SpawnRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.GetProjectileSpawnLoc
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// unsigned long                  bIsLeftSocket                  (Parm)
// struct FVector                 Loc                            (Parm, OutParm)
// struct FRotator                Rot                            (Parm, OutParm)

void ASnowManBoss::GetProjectileSpawnLoc(unsigned long bIsLeftSocket, struct FVector* Loc, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.GetProjectileSpawnLoc");

	ASnowManBoss_GetProjectileSpawnLoc_Params params;
	params.bIsLeftSocket = bIsLeftSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
	if (Rot != nullptr)
		*Rot = params.Rot;
}


// Function DunDefSpecial.SnowManBoss.PlayStomp
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ASnowManBoss::PlayStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.PlayStomp");

	ASnowManBoss_PlayStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.SnowManBoss.PlaySnowShoot
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ASnowManBoss::PlaySnowShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.PlaySnowShoot");

	ASnowManBoss_PlaySnowShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.SnowManBoss.PlayPeckAttack
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ASnowManBoss::PlayPeckAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.PlayPeckAttack");

	ASnowManBoss_PlayPeckAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.SnowManBoss.PlaySpawnIn
// (Defined, Simulated, Public)

void ASnowManBoss::PlaySpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.PlaySpawnIn");

	ASnowManBoss_PlaySpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBoss.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ASnowManBoss::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBoss.PostBeginPlay");

	ASnowManBoss_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBossController.CheckForCustomAttacks
// (Defined, Public)

void ASnowManBossController::CheckForCustomAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBossController.CheckForCustomAttacks");

	ASnowManBossController_CheckForCustomAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBossController.WantsHurtAnimation
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ASnowManBossController::WantsHurtAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBossController.WantsHurtAnimation");

	ASnowManBossController_WantsHurtAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.SnowManBossController.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ASnowManBossController::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBossController.NotifyTakeHitEX");

	ASnowManBossController_NotifyTakeHitEX_Params params;
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


// Function DunDefSpecial.SnowManBossController.CheckStomp
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ASnowManBossController::CheckStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBossController.CheckStomp");

	ASnowManBossController_CheckStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.SnowManBossController.ChooseAttack
// (Defined, Public)

void ASnowManBossController::ChooseAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBossController.ChooseAttack");

	ASnowManBossController_ChooseAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBossController.DoPeck
// (Defined, Public, HasDefaults)

void ASnowManBossController::DoPeck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBossController.DoPeck");

	ASnowManBossController_DoPeck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBossController.DoStomp
// (Defined, Public, HasDefaults)

void ASnowManBossController::DoStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBossController.DoStomp");

	ASnowManBossController_DoStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.SnowManBossController.SpawnSnowProjectile
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// unsigned long                  bIsLeftSocket                  (OptionalParm, Parm)

void ASnowManBossController::SpawnSnowProjectile(unsigned long bIsLeftSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.SnowManBossController.SpawnSnowProjectile");

	ASnowManBossController_SpawnSnowProjectile_Params params;
	params.bIsLeftSocket = bIsLeftSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBoss.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ATurkeyBoss::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.Died");

	ATurkeyBoss_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.TurkeyBoss.Destroyed
// (Defined, Simulated, Event, Public)

void ATurkeyBoss::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.Destroyed");

	ATurkeyBoss_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBoss.DoStompDamage
// (Defined, Event, Public)

void ATurkeyBoss::DoStompDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.DoStompDamage");

	ATurkeyBoss_DoStompDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBoss.DoStomp
// (Defined, Event, Public, HasDefaults)

void ATurkeyBoss::DoStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.DoStomp");

	ATurkeyBoss_DoStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBoss.DoPeck
// (Defined, Event, Public, HasDefaults)

void ATurkeyBoss::DoPeck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.DoPeck");

	ATurkeyBoss_DoPeck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBoss.GetPeckLoc
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm)

void ATurkeyBoss::GetPeckLoc(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.GetPeckLoc");

	ATurkeyBoss_GetPeckLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
}


// Function DunDefSpecial.TurkeyBoss.ShootEgg
// (Defined, Event, Public)

void ATurkeyBoss::ShootEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.ShootEgg");

	ATurkeyBoss_ShootEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBoss.SpawnEggShootEffect
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 SpawnLoc                       (Parm)
// struct FRotator                SpawnRot                       (Parm)

void ATurkeyBoss::SpawnEggShootEffect(const struct FVector& SpawnLoc, const struct FRotator& SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.SpawnEggShootEffect");

	ATurkeyBoss_SpawnEggShootEffect_Params params;
	params.SpawnLoc = SpawnLoc;
	params.SpawnRot = SpawnRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBoss.GetProjectileSpawnLoc
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm)
// struct FRotator                Rot                            (Parm, OutParm)

void ATurkeyBoss::GetProjectileSpawnLoc(struct FVector* Loc, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.GetProjectileSpawnLoc");

	ATurkeyBoss_GetProjectileSpawnLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
	if (Rot != nullptr)
		*Rot = params.Rot;
}


// Function DunDefSpecial.TurkeyBoss.PlayStomp
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ATurkeyBoss::PlayStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.PlayStomp");

	ATurkeyBoss_PlayStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.TurkeyBoss.PlayEggShoot
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ATurkeyBoss::PlayEggShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.PlayEggShoot");

	ATurkeyBoss_PlayEggShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.TurkeyBoss.PlayPeckAttack
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ATurkeyBoss::PlayPeckAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBoss.PlayPeckAttack");

	ATurkeyBoss_PlayPeckAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.TurkeyBossController.WantsHurtAnimation
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ATurkeyBossController::WantsHurtAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBossController.WantsHurtAnimation");

	ATurkeyBossController_WantsHurtAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.TurkeyBossController.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ATurkeyBossController::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBossController.NotifyTakeHitEX");

	ATurkeyBossController_NotifyTakeHitEX_Params params;
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


// Function DunDefSpecial.TurkeyBossController.CheckStomp
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ATurkeyBossController::CheckStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBossController.CheckStomp");

	ATurkeyBossController_CheckStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.TurkeyBossController.ChooseAttack
// (Defined, Public)

void ATurkeyBossController::ChooseAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBossController.ChooseAttack");

	ATurkeyBossController_ChooseAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBossController.DoPeck
// (Defined, Public, HasDefaults)

void ATurkeyBossController::DoPeck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBossController.DoPeck");

	ATurkeyBossController_DoPeck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBossController.DoStomp
// (Defined, Public, HasDefaults)

void ATurkeyBossController::DoStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBossController.DoStomp");

	ATurkeyBossController_DoStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.TurkeyBossController.SpawnEggProjectile
// (Defined, Public, HasDefaults)

void ATurkeyBossController::SpawnEggProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.TurkeyBossController.SpawnEggProjectile");

	ATurkeyBossController_SpawnEggProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.UI_GameStatsUberMF.GetPlayerList
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FString                 pList                          (Parm, OutParm, NeedCtorLink)
// struct FString                 sList                          (Parm, OutParm, NeedCtorLink)

void UUI_GameStatsUberMF::GetPlayerList(struct FString* pList, struct FString* sList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_GameStatsUberMF.GetPlayerList");

	UUI_GameStatsUberMF_GetPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pList != nullptr)
		*pList = params.pList;
	if (sList != nullptr)
		*sList = params.sList;
}


// Function DunDefSpecial.UI_GameStatsUberMF.GetColorString
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  aColor                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUI_GameStatsUberMF::GetColorString(const struct FColor& aColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_GameStatsUberMF.GetColorString");

	UUI_GameStatsUberMF_GetColorString_Params params;
	params.aColor = aColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefSpecial.UI_GameStatsUberMF.UpdateTeamPanels
// (Defined, Simulated, Public)

void UUI_GameStatsUberMF::UpdateTeamPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_GameStatsUberMF.UpdateTeamPanels");

	UUI_GameStatsUberMF_UpdateTeamPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSpecial.UI_GameStatsUberMF.CustomInit
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            CustomInitIndex                (OptionalParm, Parm)

void UUI_GameStatsUberMF::CustomInit(int CustomInitIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSpecial.UI_GameStatsUberMF.CustomInit");

	UUI_GameStatsUberMF_CustomInit_Params params;
	params.CustomInitIndex = CustomInitIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
