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

// Function DunDefArabia.GenieLamp.PlayActivateAnim
// (Defined, Simulated, Public, HasDefaults)

void AGenieLamp::PlayActivateAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.PlayActivateAnim");

	AGenieLamp_PlayActivateAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.ShutDownEffects
// (Defined, Simulated, Public)

void AGenieLamp::ShutDownEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.ShutDownEffects");

	AGenieLamp_ShutDownEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.StartActiveEffects
// (Defined, Simulated, Public)

void AGenieLamp::StartActiveEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.StartActiveEffects");

	AGenieLamp_StartActiveEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.DoActivation
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)

void AGenieLamp::DoActivation(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.DoActivation");

	AGenieLamp_DoActivation_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.RemoveCurrentGenieFromLamp
// (Defined, Public)

void AGenieLamp::RemoveCurrentGenieFromLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.RemoveCurrentGenieFromLamp");

	AGenieLamp_RemoveCurrentGenieFromLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.GiveLampAGenie
// (Defined, Public)
// Parameters:
// class AController*             newGenie                       (Parm)

void AGenieLamp::GiveLampAGenie(class AController* newGenie)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.GiveLampAGenie");

	AGenieLamp_GiveLampAGenie_Params params;
	params.newGenie = newGenie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.GetToolTipPriority
// (Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGenieLamp::GetToolTipPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.GetToolTipPriority");

	AGenieLamp_GetToolTipPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.GenieLamp.TakesToolTipPriority
// (Simulated, Public)
// Parameters:
// TScriptInterface<class UDunDefToolTipInterface> otherToolTip                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGenieLamp::TakesToolTipPriority(const TScriptInterface<class UDunDefToolTipInterface>& otherToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.TakesToolTipPriority");

	AGenieLamp_TakesToolTipPriority_Params params;
	params.otherToolTip = otherToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.GenieLamp.ContinueDrawingToolTip
// (Simulated, Public)
// Parameters:
// bool                           ContinueDrawing                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGenieLamp::ContinueDrawingToolTip(bool ContinueDrawing)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.ContinueDrawingToolTip");

	AGenieLamp_ContinueDrawingToolTip_Params params;
	params.ContinueDrawing = ContinueDrawing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.GenieLamp.DrawToolTip
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// int                            PosX                           (Parm)
// int                            PosY                           (Parm)
// class ULocalPlayer*            ForPlayer                      (OptionalParm, Parm)

void AGenieLamp::DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.DrawToolTip");

	AGenieLamp_DrawToolTip_Params params;
	params.C = C;
	params.PosX = PosX;
	params.PosY = PosY;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.GetActivationOffset
// (Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGenieLamp::GetActivationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.GetActivationOffset");

	AGenieLamp_GetActivationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.GenieLamp.GetActivationWeighting
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGenieLamp::GetActivationWeighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.GetActivationWeighting");

	AGenieLamp_GetActivationWeighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.GenieLamp.Client_Activate
// (Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)

void AGenieLamp::Client_Activate(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.Client_Activate");

	AGenieLamp_Client_Activate_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.Server_Activate
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// bool                           forceActivation                (OptionalParm, Parm)
// int                            activationType                 (OptionalParm, Parm)

void AGenieLamp::Server_Activate(class ADunDefPlayerController* PC, bool forceActivation, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.Server_Activate");

	AGenieLamp_Server_Activate_Params params;
	params.PC = PC;
	params.forceActivation = forceActivation;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.AllowActivation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGenieLamp::AllowActivation(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.AllowActivation");

	AGenieLamp_AllowActivation_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.GenieLamp.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AGenieLamp::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.PostBeginPlay");

	AGenieLamp_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.GenieLamp.ExecReplicatedFunction
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

void AGenieLamp::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.GenieLamp.ExecReplicatedFunction");

	AGenieLamp_ExecReplicatedFunction_Params params;
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


// Function DunDefArabia.DunDefGenieBossController.NotifyDjinnDeath
// (Defined, Public)
// Parameters:
// class ADunDefDjinn*            deadDjinn                      (Parm)

void ADunDefGenieBossController::NotifyDjinnDeath(class ADunDefDjinn* deadDjinn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.NotifyDjinnDeath");

	ADunDefGenieBossController_NotifyDjinnDeath_Params params;
	params.deadDjinn = deadDjinn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.SpawnDjinn
// (Defined, Public, HasDefaults)

void ADunDefGenieBossController::SpawnDjinn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.SpawnDjinn");

	ADunDefGenieBossController_SpawnDjinn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.KeepSpawningBabies
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::KeepSpawningBabies()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.KeepSpawningBabies");

	ADunDefGenieBossController_KeepSpawningBabies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.ClearHitList
// (Defined, Public)

void ADunDefGenieBossController::ClearHitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.ClearHitList");

	ADunDefGenieBossController_ClearHitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.SetTongueSwing
// (Defined, Public)

void ADunDefGenieBossController::SetTongueSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.SetTongueSwing");

	ADunDefGenieBossController_SetTongueSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.AddToSwingHurtList
// (Defined, Public)
// Parameters:
// class AActor*                  newEntry                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::AddToSwingHurtList(class AActor* newEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.AddToSwingHurtList");

	ADunDefGenieBossController_AddToSwingHurtList_Params params;
	params.newEntry = newEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.ShouldDamage
// (Defined, Public)
// Parameters:
// class AActor*                  act                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::ShouldDamage(class AActor* act)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.ShouldDamage");

	ADunDefGenieBossController_ShouldDamage_Params params;
	params.act = act;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.CheckForBurp
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::CheckForBurp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.CheckForBurp");

	ADunDefGenieBossController_CheckForBurp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.CheckForMelee
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::CheckForMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.CheckForMelee");

	ADunDefGenieBossController_CheckForMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.CheckForSuperTongue
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::CheckForSuperTongue()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.CheckForSuperTongue");

	ADunDefGenieBossController_CheckForSuperTongue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.BiteStop
// (Defined, Public)

void ADunDefGenieBossController::BiteStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.BiteStop");

	ADunDefGenieBossController_BiteStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.BiteStart
// (Public)

void ADunDefGenieBossController::BiteStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.BiteStart");

	ADunDefGenieBossController_BiteStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.DoBurp
// (Defined, Public, HasDefaults)

void ADunDefGenieBossController::DoBurp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.DoBurp");

	ADunDefGenieBossController_DoBurp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.CheckForCustomAttacks
// (Defined, Public)

void ADunDefGenieBossController::CheckForCustomAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.CheckForCustomAttacks");

	ADunDefGenieBossController_CheckForCustomAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.GetCDMultiplier
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGenieBossController::GetCDMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.GetCDMultiplier");

	ADunDefGenieBossController_GetCDMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.CheckPlayerCloseness
// (Public)

void ADunDefGenieBossController::CheckPlayerCloseness()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.CheckPlayerCloseness");

	ADunDefGenieBossController_CheckPlayerCloseness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.PickLamp
// (Defined, Public)

void ADunDefGenieBossController::PickLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.PickLamp");

	ADunDefGenieBossController_PickLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.NotifyLampRubbed
// (Defined, Public)
// Parameters:
// class AActor*                  newSpawnPoint                  (Parm)

void ADunDefGenieBossController::NotifyLampRubbed(class AActor* newSpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.NotifyLampRubbed");

	ADunDefGenieBossController_NotifyLampRubbed_Params params;
	params.newSpawnPoint = newSpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.NotifyReformed
// (Defined, Public)

void ADunDefGenieBossController::NotifyReformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.NotifyReformed");

	ADunDefGenieBossController_NotifyReformed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.LeaveLamp
// (Public)

void ADunDefGenieBossController::LeaveLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.LeaveLamp");

	ADunDefGenieBossController_LeaveLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.CheckActiveDamage
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::CheckActiveDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.CheckActiveDamage");

	ADunDefGenieBossController_CheckActiveDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.FindTargetRightEye
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bSetTarget                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::FindTargetRightEye(bool bSetTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.FindTargetRightEye");

	ADunDefGenieBossController_FindTargetRightEye_Params params;
	params.bSetTarget = bSetTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.FindTargetLeftEye
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bSetTarget                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::FindTargetLeftEye(bool bSetTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.FindTargetLeftEye");

	ADunDefGenieBossController_FindTargetLeftEye_Params params;
	params.bSetTarget = bSetTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.TraceRightEye
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// class UClass*                  currentEyeDmgType              (Parm)

void ADunDefGenieBossController::TraceRightEye(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, class UClass* currentEyeDmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.TraceRightEye");

	ADunDefGenieBossController_TraceRightEye_Params params;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.currentEyeDmgType = currentEyeDmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.TraceLeftEye
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// class UClass*                  currentEyeDmgType              (Parm)

void ADunDefGenieBossController::TraceLeftEye(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, class UClass* currentEyeDmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.TraceLeftEye");

	ADunDefGenieBossController_TraceLeftEye_Params params;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.currentEyeDmgType = currentEyeDmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.ShutDownEyes
// (Defined, Public)

void ADunDefGenieBossController::ShutDownEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.ShutDownEyes");

	ADunDefGenieBossController_ShutDownEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.StopEyeTracking
// (Defined, Public)

void ADunDefGenieBossController::StopEyeTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.StopEyeTracking");

	ADunDefGenieBossController_StopEyeTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.GoToLamp
// (Defined, Public)

void ADunDefGenieBossController::GoToLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.GoToLamp");

	ADunDefGenieBossController_GoToLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.SetRageMode
// (Defined, Public)

void ADunDefGenieBossController::SetRageMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.SetRageMode");

	ADunDefGenieBossController_SetRageMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefGenieBossController::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.NotifyTakeHitEX");

	ADunDefGenieBossController_NotifyTakeHitEX_Params params;
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


// Function DunDefArabia.DunDefGenieBossController.WantsHurtAnimation
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::WantsHurtAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.WantsHurtAnimation");

	ADunDefGenieBossController_WantsHurtAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.ForceIntoLamp
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefGenieBossController::ForceIntoLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.ForceIntoLamp");

	ADunDefGenieBossController_ForceIntoLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBossController.SetInitialState
// (Defined, Simulated, Event, Public)

void ADunDefGenieBossController::SetInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.SetInitialState");

	ADunDefGenieBossController_SetInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBossController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGenieBossController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBossController.PostBeginPlay");

	ADunDefGenieBossController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DjinnLamp.PlayKillAnim
// (Defined, Simulated, Public, HasDefaults)

void ADjinnLamp::PlayKillAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DjinnLamp.PlayKillAnim");

	ADjinnLamp_PlayKillAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DjinnLamp.DoActivation
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)

void ADjinnLamp::DoActivation(class ADunDefPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DjinnLamp.DoActivation");

	ADjinnLamp_DoActivation_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DjinnLamp.RemoveCurrentGenieFromLamp
// (Defined, Public)

void ADjinnLamp::RemoveCurrentGenieFromLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DjinnLamp.RemoveCurrentGenieFromLamp");

	ADjinnLamp_RemoveCurrentGenieFromLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DjinnLamp.GiveLampAGenie
// (Defined, Public)
// Parameters:
// class AController*             newGenie                       (Parm)

void ADjinnLamp::GiveLampAGenie(class AController* newGenie)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DjinnLamp.GiveLampAGenie");

	ADjinnLamp_GiveLampAGenie_Params params;
	params.newGenie = newGenie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DjinnLamp.ExecReplicatedFunction
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

void ADjinnLamp::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DjinnLamp.ExecReplicatedFunction");

	ADjinnLamp_ExecReplicatedFunction_Params params;
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


// Function DunDefArabia.DunDefDjinnController.Destroyed
// (Defined, Event, Public)

void ADunDefDjinnController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.Destroyed");

	ADunDefDjinnController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.DoAllyDjinnTimeOut
// (Defined, Public)

void ADunDefDjinnController::DoAllyDjinnTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.DoAllyDjinnTimeOut");

	ADunDefDjinnController_DoAllyDjinnTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.NotifyLampRubbed
// (Defined, Public)
// Parameters:
// class AActor*                  SpawnPoint                     (Parm)
// class ADunDefPlayerController* RubbedController               (Parm)

void ADunDefDjinnController::NotifyLampRubbed(class AActor* SpawnPoint, class ADunDefPlayerController* RubbedController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.NotifyLampRubbed");

	ADunDefDjinnController_NotifyLampRubbed_Params params;
	params.SpawnPoint = SpawnPoint;
	params.RubbedController = RubbedController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.PickLamp
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::PickLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.PickLamp");

	ADunDefDjinnController_PickLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.AllowDeath
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::AllowDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.AllowDeath");

	ADunDefDjinnController_AllowDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.NotifyFinishedReforming
// (Public)

void ADunDefDjinnController::NotifyFinishedReforming()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.NotifyFinishedReforming");

	ADunDefDjinnController_NotifyFinishedReforming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.LeaveLamp
// (Public)

void ADunDefDjinnController::LeaveLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.LeaveLamp");

	ADunDefDjinnController_LeaveLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.NotifyGenieOfDeath
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ADunDefDjinnController::NotifyGenieOfDeath(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.NotifyGenieOfDeath");

	ADunDefDjinnController_NotifyGenieOfDeath_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ADunDefDjinnController::PawnDied(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.PawnDied");

	ADunDefDjinnController_PawnDied_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.SetMyGenie
// (Defined, Public)
// Parameters:
// class ADunDefGenieBossController* newGenie                       (Parm)

void ADunDefDjinnController::SetMyGenie(class ADunDefGenieBossController* newGenie)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.SetMyGenie");

	ADunDefDjinnController_SetMyGenie_Params params;
	params.newGenie = newGenie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.ForceFlee
// (Defined, Public)
// Parameters:
// class ADunDefPawn*             ForceFleeTarget                (Parm)

void ADunDefDjinnController::ForceFlee(class ADunDefPawn* ForceFleeTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.ForceFlee");

	ADunDefDjinnController_ForceFlee_Params params;
	params.ForceFleeTarget = ForceFleeTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckForFlee
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::CheckForFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckForFlee");

	ADunDefDjinnController_CheckForFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.GetProjectile
// (Defined, Public)
// Parameters:
// class ADunDefProjectile*       ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefProjectile* ADunDefDjinnController::GetProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.GetProjectile");

	ADunDefDjinnController_GetProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.PickProjectileType
// (Defined, Public)

void ADunDefDjinnController::PickProjectileType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.PickProjectileType");

	ADunDefDjinnController_PickProjectileType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.ShootProjectile
// (Defined, Public, HasDefaults)

void ADunDefDjinnController::ShootProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.ShootProjectile");

	ADunDefDjinnController_ShootProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckForCustomAttacks
// (Defined, Public)

void ADunDefDjinnController::CheckForCustomAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckForCustomAttacks");

	ADunDefDjinnController_CheckForCustomAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.IsValidUpgradeTower
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            Tower                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::IsValidUpgradeTower(class ADunDefTower* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.IsValidUpgradeTower");

	ADunDefDjinnController_IsValidUpgradeTower_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.CastTowerDestructSpell
// (Defined, Public)

void ADunDefDjinnController::CastTowerDestructSpell()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CastTowerDestructSpell");

	ADunDefDjinnController_CastTowerDestructSpell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.FindDestroyTower
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ADunDefDjinnController::FindDestroyTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.FindDestroyTower");

	ADunDefDjinnController_FindDestroyTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.DestroyTower
// (Defined, Public)

void ADunDefDjinnController::DestroyTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.DestroyTower");

	ADunDefDjinnController_DestroyTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.PlayFinishTowerDestructAnim
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinnController::PlayFinishTowerDestructAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.PlayFinishTowerDestructAnim");

	ADunDefDjinnController_PlayFinishTowerDestructAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.FinishTowerDestructCast
// (Defined, Public)

void ADunDefDjinnController::FinishTowerDestructCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.FinishTowerDestructCast");

	ADunDefDjinnController_FinishTowerDestructCast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.HealGoldTarget
// (Defined, Public)

void ADunDefDjinnController::HealGoldTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.HealGoldTarget");

	ADunDefDjinnController_HealGoldTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CastGoldEnemySpell
// (Defined, Public)

void ADunDefDjinnController::CastGoldEnemySpell()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CastGoldEnemySpell");

	ADunDefDjinnController_CastGoldEnemySpell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.FindGoldEnemyTarget
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ADunDefDjinnController::FindGoldEnemyTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.FindGoldEnemyTarget");

	ADunDefDjinnController_FindGoldEnemyTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.CheckValidGoldTarget
// (Defined, Public)
// Parameters:
// class ADunDefEnemy*            checkActor                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::CheckValidGoldTarget(class ADunDefEnemy* checkActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckValidGoldTarget");

	ADunDefDjinnController_CheckValidGoldTarget_Params params;
	params.checkActor = checkActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.PlayFinishGoldAnim
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinnController::PlayFinishGoldAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.PlayFinishGoldAnim");

	ADunDefDjinnController_PlayFinishGoldAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.FinishGoldEnemyCast
// (Defined, Public)

void ADunDefDjinnController::FinishGoldEnemyCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.FinishGoldEnemyCast");

	ADunDefDjinnController_FinishGoldEnemyCast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckCastTimeout
// (Defined, Public)

void ADunDefDjinnController::CheckCastTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckCastTimeout");

	ADunDefDjinnController_CheckCastTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckForCastingMovement
// (Defined, Public)
// Parameters:
// bool                           bHasLineOfSight                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::CheckForCastingMovement(bool bHasLineOfSight)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckForCastingMovement");

	ADunDefDjinnController_CheckForCastingMovement_Params params;
	params.bHasLineOfSight = bHasLineOfSight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.ClearCurrentSpellTarget
// (Defined, Public)

void ADunDefDjinnController::ClearCurrentSpellTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.ClearCurrentSpellTarget");

	ADunDefDjinnController_ClearCurrentSpellTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefDjinnController::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.NotifyTakeHitEX");

	ADunDefDjinnController_NotifyTakeHitEX_Params params;
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


// Function DunDefArabia.DunDefDjinnController.NotifyDamageTaken
// (Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefDjinnController::NotifyDamageTaken(int DamageAmount, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.NotifyDamageTaken");

	ADunDefDjinnController_NotifyDamageTaken_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckCurrentCastTarget
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::CheckCurrentCastTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckCurrentCastTarget");

	ADunDefDjinnController_CheckCurrentCastTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.Cough
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   coughAnimName                  (OptionalParm, Parm)

void ADunDefDjinnController::Cough(const struct FName& coughAnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.Cough");

	ADunDefDjinnController_Cough_Params params;
	params.coughAnimName = coughAnimName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.InterruptSpellCast
// (HasOptionalParms, Public)
// Parameters:
// bool                           bNoSeeking                     (OptionalParm, Parm)

void ADunDefDjinnController::InterruptSpellCast(bool bNoSeeking)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.InterruptSpellCast");

	ADunDefDjinnController_InterruptSpellCast_Params params;
	params.bNoSeeking = bNoSeeking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckSpellDamageAmount
// (Defined, Public)
// Parameters:
// class AActor*                  DamageCauser                   (Parm)

void ADunDefDjinnController::CheckSpellDamageAmount(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckSpellDamageAmount");

	ADunDefDjinnController_CheckSpellDamageAmount_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckAllowedCastingStart
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::CheckAllowedCastingStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckAllowedCastingStart");

	ADunDefDjinnController_CheckAllowedCastingStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.IsWithinCastingRange
// (Defined, Public)
// Parameters:
// class AActor*                  FollowTarget                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::IsWithinCastingRange(class AActor* FollowTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.IsWithinCastingRange");

	ADunDefDjinnController_IsWithinCastingRange_Params params;
	params.FollowTarget = FollowTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.FindNearestFleePoint
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// bool                           bIgnoreFleeAngle               (OptionalParm, Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* ADunDefDjinnController::FindNearestFleePoint(bool bIgnoreFleeAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.FindNearestFleePoint");

	ADunDefDjinnController_FindNearestFleePoint_Params params;
	params.bIgnoreFleeAngle = bIgnoreFleeAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.CheckFleeDistance
// (Defined, Public)

void ADunDefDjinnController::CheckFleeDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckFleeDistance");

	ADunDefDjinnController_CheckFleeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.StopFlee
// (Defined, Public)

void ADunDefDjinnController::StopFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.StopFlee");

	ADunDefDjinnController_StopFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckDirectReachability
// (Defined, Public)

void ADunDefDjinnController::CheckDirectReachability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckDirectReachability");

	ADunDefDjinnController_CheckDirectReachability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.CheckIndirectReachability
// (Defined, Public)

void ADunDefDjinnController::CheckIndirectReachability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.CheckIndirectReachability");

	ADunDefDjinnController_CheckIndirectReachability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.MoveUnreachable
// (Event, Public)
// Parameters:
// struct FVector                 AttemptedDest                  (Parm)
// class AActor*                  AttemptedTarget                (Parm)

void ADunDefDjinnController::MoveUnreachable(const struct FVector& AttemptedDest, class AActor* AttemptedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.MoveUnreachable");

	ADunDefDjinnController_MoveUnreachable_Params params;
	params.AttemptedDest = AttemptedDest;
	params.AttemptedTarget = AttemptedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.GetObstructionJumpForwardDir
// (Defined, Public)
// Parameters:
// struct FVector                 forwardDir                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefDjinnController::GetObstructionJumpForwardDir(const struct FVector& forwardDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.GetObstructionJumpForwardDir");

	ADunDefDjinnController_GetObstructionJumpForwardDir_Params params;
	params.forwardDir = forwardDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.ObstructionJump
// (Defined, Public)
// Parameters:
// struct FVector                 jumpForwardDir                 (Parm)
// struct FVector                 jumpSideDir                    (Parm)

void ADunDefDjinnController::ObstructionJump(const struct FVector& jumpForwardDir, const struct FVector& jumpSideDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.ObstructionJump");

	ADunDefDjinnController_ObstructionJump_Params params;
	params.jumpForwardDir = jumpForwardDir;
	params.jumpSideDir = jumpSideDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnController.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefDjinnController::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.GeneratePathToActor");

	ADunDefDjinnController_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.MoveAroundBlockade
// (HasOptionalParms, Public)
// Parameters:
// class AActor*                  blockadeActor                  (Parm)
// float                          BlockadeWidth                  (Parm)
// struct FVector                 HitNormal                      (Parm)
// bool                           SkipBlockingCheck              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::MoveAroundBlockade(class AActor* blockadeActor, float BlockadeWidth, const struct FVector& HitNormal, bool SkipBlockingCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.MoveAroundBlockade");

	ADunDefDjinnController_MoveAroundBlockade_Params params;
	params.blockadeActor = blockadeActor;
	params.BlockadeWidth = BlockadeWidth;
	params.HitNormal = HitNormal;
	params.SkipBlockingCheck = SkipBlockingCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.NavActorReachable
// (Defined, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnController::NavActorReachable(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.NavActorReachable");

	ADunDefDjinnController_NavActorReachable_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.FindNearestNavPointTo
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           bCheckVisible                  (OptionalParm, Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* ADunDefDjinnController::FindNearestNavPointTo(class AActor* A, bool bCheckVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.FindNearestNavPointTo");

	ADunDefDjinnController_FindNearestNavPointTo_Params params;
	params.A = A;
	params.bCheckVisible = bCheckVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.GetTargetingMultiplier
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  ActorRef                       (Parm)
// float                          baseDesirability               (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinnController::GetTargetingMultiplier(class AActor* ActorRef, float baseDesirability)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.GetTargetingMultiplier");

	ADunDefDjinnController_GetTargetingMultiplier_Params params;
	params.ActorRef = ActorRef;
	params.baseDesirability = baseDesirability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefDjinnController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnController.PostBeginPlay");

	ADunDefDjinnController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia.Activated");

	UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge.RefreshBillboard
// (Defined, Public)

void ADunDefWaveBillBoard_ArabiaChallenge::RefreshBillboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge.RefreshBillboard");

	ADunDefWaveBillBoard_ArabiaChallenge_RefreshBillboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.GetPawnDamageModifier
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// bool                           bDontIncludeAbilities          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::GetPawnDamageModifier(bool bDontIncludeAbilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.GetPawnDamageModifier");

	ADunDefDjinn_GetPawnDamageModifier_Params params;
	params.bDontIncludeAbilities = bDontIncludeAbilities;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.GetMiniMapIconTexture
// (Defined, Simulated, Public)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture2D* ADunDefDjinn::GetMiniMapIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.GetMiniMapIconTexture");

	ADunDefDjinn_GetMiniMapIconTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.UpdateToTeamMaterial
// (Defined, Simulated, Public)

void ADunDefDjinn::UpdateToTeamMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.UpdateToTeamMaterial");

	ADunDefDjinn_UpdateToTeamMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.NotifyTeamSwitch
// (Defined, Simulated, Public)

void ADunDefDjinn::NotifyTeamSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.NotifyTeamSwitch");

	ADunDefDjinn_NotifyTeamSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.NotifyOfDeath
// (Defined, Public)
// Parameters:
// class ADunDefPlayerController* Killer                         (Parm)

void ADunDefDjinn::NotifyOfDeath(class ADunDefPlayerController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.NotifyOfDeath");

	ADunDefDjinn_NotifyOfDeath_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.UnHideDjinn
// (Defined, Simulated, Public)

void ADunDefDjinn::UnHideDjinn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.UnHideDjinn");

	ADunDefDjinn_UnHideDjinn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.HideDjinn
// (Defined, Simulated, Public)

void ADunDefDjinn::HideDjinn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.HideDjinn");

	ADunDefDjinn_HideDjinn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.PlayGoToLamp
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class AActor*                  theLamp                        (Parm)

void ADunDefDjinn::PlayGoToLamp(class AActor* theLamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.PlayGoToLamp");

	ADunDefDjinn_PlayGoToLamp_Params params;
	params.theLamp = theLamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.PlayLeaveLamp
// (Defined, Simulated, Public)

void ADunDefDjinn::PlayLeaveLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.PlayLeaveLamp");

	ADunDefDjinn_PlayLeaveLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.LeaveLamp
// (Defined, Public)
// Parameters:
// struct FVector                 NewLocation                    (Parm)

void ADunDefDjinn::LeaveLamp(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.LeaveLamp");

	ADunDefDjinn_LeaveLamp_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.GetEnemyTargetingDesirability
// (Defined, Event, Public)
// Parameters:
// class AEngineNativeDunDefAIController* forController                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.GetEnemyTargetingDesirability");

	ADunDefDjinn_GetEnemyTargetingDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.GetMiniMapIconColor
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ADunDefDjinn::GetMiniMapIconColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.GetMiniMapIconColor");

	ADunDefDjinn_GetMiniMapIconColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.CheckDjinnProximity
// (Defined, Public, HasDefaults)

void ADunDefDjinn::CheckDjinnProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.CheckDjinnProximity");

	ADunDefDjinn_CheckDjinnProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.TakeDamage
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

void ADunDefDjinn::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.TakeDamage");

	ADunDefDjinn_TakeDamage_Params params;
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


// Function DunDefArabia.DunDefDjinn.AllowTrapSpringing
// (Defined, Public)
// Parameters:
// class ADunDefTower_DetonationType* trap                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinn::AllowTrapSpringing(class ADunDefTower_DetonationType* trap)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.AllowTrapSpringing");

	ADunDefDjinn_AllowTrapSpringing_Params params;
	params.trap = trap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.ShutDownAllCastingVFX
// (Defined, Simulated, Public)

void ADunDefDjinn::ShutDownAllCastingVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.ShutDownAllCastingVFX");

	ADunDefDjinn_ShutDownAllCastingVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.PlayAttackAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::PlayAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.PlayAttackAnimation");

	ADunDefDjinn_PlayAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.GetProjectileLocAndRot
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FVector                 Position                       (Parm, OutParm)
// struct FRotator                Orientation                    (Parm, OutParm)

void ADunDefDjinn::GetProjectileLocAndRot(struct FVector* Position, struct FRotator* Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.GetProjectileLocAndRot");

	ADunDefDjinn_GetProjectileLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
}


// Function DunDefArabia.DunDefDjinn.FireProjectile
// (Defined, Event, Public)

void ADunDefDjinn::FireProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.FireProjectile");

	ADunDefDjinn_FireProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.ResetTowers
// (Defined, Simulated, Public)

void ADunDefDjinn::ResetTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.ResetTowers");

	ADunDefDjinn_ResetTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.ShutDownTowerVFX
// (Defined, Simulated, Public)

void ADunDefDjinn::ShutDownTowerVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.ShutDownTowerVFX");

	ADunDefDjinn_ShutDownTowerVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.StopTowerDestructCast
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            theTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::StopTowerDestructCast(class ADunDefTower* theTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.StopTowerDestructCast");

	ADunDefDjinn_StopTowerDestructCast_Params params;
	params.theTower = theTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.SetInitialTowerValues
// (Defined, Simulated, Public)

void ADunDefDjinn::SetInitialTowerValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.SetInitialTowerValues");

	ADunDefDjinn_SetInitialTowerValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.StartTowerUpgradeCast
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  castTarget                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::StartTowerUpgradeCast(class AActor* castTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.StartTowerUpgradeCast");

	ADunDefDjinn_StartTowerUpgradeCast_Params params;
	params.castTarget = castTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.StartTowerDestructCast
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  castTarget                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::StartTowerDestructCast(class AActor* castTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.StartTowerDestructCast");

	ADunDefDjinn_StartTowerDestructCast_Params params;
	params.castTarget = castTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.StartTowerBeam
// (Defined, Simulated, Event, Public)

void ADunDefDjinn::StartTowerBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.StartTowerBeam");

	ADunDefDjinn_StartTowerBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.UpdateTower
// (Defined, Simulated, Public)

void ADunDefDjinn::UpdateTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.UpdateTower");

	ADunDefDjinn_UpdateTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinn::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.Died");

	ADunDefDjinn_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.AdjustDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            inDamage                       (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void ADunDefDjinn::AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.AdjustDamage");

	ADunDefDjinn_AdjustDamage_Params params;
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


// Function DunDefArabia.DunDefDjinn.UnSetGoldenEnemy
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            Enemy                          (Parm)

void ADunDefDjinn::UnSetGoldenEnemy(class ADunDefEnemy* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.UnSetGoldenEnemy");

	ADunDefDjinn_UnSetGoldenEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.SetGoldenEnemy
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefEnemy*            Enemy                          (Parm)

void ADunDefDjinn::SetGoldenEnemy(class ADunDefEnemy* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.SetGoldenEnemy");

	ADunDefDjinn_SetGoldenEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.PlayInterruptAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::PlayInterruptAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.PlayInterruptAnimation");

	ADunDefDjinn_PlayInterruptAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.ShutDownGoldVFX
// (Defined, Simulated, Public)

void ADunDefDjinn::ShutDownGoldVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.ShutDownGoldVFX");

	ADunDefDjinn_ShutDownGoldVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.StopGoldEnemyCast
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::StopGoldEnemyCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.StopGoldEnemyCast");

	ADunDefDjinn_StopGoldEnemyCast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.StartGoldEnemyCast
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  castTarget                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::StartGoldEnemyCast(class AActor* castTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.StartGoldEnemyCast");

	ADunDefDjinn_StartGoldEnemyCast_Params params;
	params.castTarget = castTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.StartBeam
// (Simulated, Event, Public)

void ADunDefDjinn::StartBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.StartBeam");

	ADunDefDjinn_StartBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.PlayMajorHurtAnimation
// (Defined, Simulated, Public)

void ADunDefDjinn::PlayMajorHurtAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.PlayMajorHurtAnimation");

	ADunDefDjinn_PlayMajorHurtAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.PlayHurtAnimation
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDefDjinn::PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.PlayHurtAnimation");

	ADunDefDjinn_PlayHurtAnimation_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.UpdateDifficultyMaterial
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefDjinn::UpdateDifficultyMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.UpdateDifficultyMaterial");

	ADunDefDjinn_UpdateDifficultyMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinn.SetMovementPhysics
// (Defined, Public)

void ADunDefDjinn::SetMovementPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.SetMovementPhysics");

	ADunDefDjinn_SetMovementPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.DisableSpawnCollision
// (Defined, Simulated, Public)

void ADunDefDjinn::DisableSpawnCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.DisableSpawnCollision");

	ADunDefDjinn_DisableSpawnCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefDjinn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.PostBeginPlay");

	ADunDefDjinn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinn.ExecReplicatedFunction
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

void ADunDefDjinn::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.ExecReplicatedFunction");

	ADunDefDjinn_ExecReplicatedFunction_Params params;
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


// Function DunDefArabia.DunDefDjinn.GetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefDjinn::GetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinn.GetTowerTargetingDesirability");

	ADunDefDjinn_GetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnManager.PickDjinnLamp
// (Defined, Public)
// Parameters:
// class ADjinnLamp*              ReturnValue                    (Parm, OutParm, ReturnParm)

class ADjinnLamp* ADunDefDjinnManager::PickDjinnLamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.PickDjinnLamp");

	ADunDefDjinnManager_PickDjinnLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyGold
// (Defined, Public)
// Parameters:
// class AActor*                  checkActor                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnManager::IsActorAlreadyGold(class AActor* checkActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyGold");

	ADunDefDjinnManager_IsActorAlreadyGold_Params params;
	params.checkActor = checkActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActorIndexed
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void ADunDefDjinnManager::RemoveGoldenActorIndexed(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActorIndexed");

	ADunDefDjinnManager_RemoveGoldenActorIndexed_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActor
// (Defined, Public)
// Parameters:
// class AActor*                  removeActor                    (Parm)

void ADunDefDjinnManager::RemoveGoldenActor(class AActor* removeActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActor");

	ADunDefDjinnManager_RemoveGoldenActor_Params params;
	params.removeActor = removeActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnManager.AddGoldenActor
// (Defined, Public)
// Parameters:
// class AActor*                  NewActor                       (Parm)

void ADunDefDjinnManager::AddGoldenActor(class AActor* NewActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.AddGoldenActor");

	ADunDefDjinnManager_AddGoldenActor_Params params;
	params.NewActor = NewActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyTargeted
// (Defined, Public)
// Parameters:
// class AActor*                  checkActor                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefDjinnManager::IsActorAlreadyTargeted(class AActor* checkActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyTargeted");

	ADunDefDjinnManager_IsActorAlreadyTargeted_Params params;
	params.checkActor = checkActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefDjinnManager.RemoveTargetedActor
// (Defined, Public)
// Parameters:
// class AActor*                  removeActor                    (Parm)

void ADunDefDjinnManager::RemoveTargetedActor(class AActor* removeActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.RemoveTargetedActor");

	ADunDefDjinnManager_RemoveTargetedActor_Params params;
	params.removeActor = removeActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnManager.AddTargetedActor
// (Defined, Public)
// Parameters:
// class AActor*                  NewActor                       (Parm)

void ADunDefDjinnManager::AddTargetedActor(class AActor* NewActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.AddTargetedActor");

	ADunDefDjinnManager_AddTargetedActor_Params params;
	params.NewActor = NewActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefDjinnManager.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefDjinnManager::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefDjinnManager.PostBeginPlay");

	ADunDefDjinnManager_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdatingDelayTurnOff
// (Simulated, HasOptionalParms, Public)
// Parameters:
// bool                           Force                          (Parm)
// float                          delayTurnOff                   (OptionalParm, Parm)

void ADunDefGenieBoss::ForceSkelUpdatingDelayTurnOff(bool Force, float delayTurnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdatingDelayTurnOff");

	ADunDefGenieBoss_ForceSkelUpdatingDelayTurnOff_Params params;
	params.Force = Force;
	params.delayTurnOff = delayTurnOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdating
// (Simulated, HasOptionalParms, Public)
// Parameters:
// bool                           Force                          (Parm)
// bool                           bOnlyForceTickAnimNodes        (OptionalParm, Parm)

void ADunDefGenieBoss::ForceSkelUpdating(bool Force, bool bOnlyForceTickAnimNodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdating");

	ADunDefGenieBoss_ForceSkelUpdating_Params params;
	params.Force = Force;
	params.bOnlyForceTickAnimNodes = bOnlyForceTickAnimNodes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.ClearElementalEffect
// (Defined, Public)

void ADunDefGenieBoss::ClearElementalEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.ClearElementalEffect");

	ADunDefGenieBoss_ClearElementalEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.GetElementalDamageType
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ADunDefGenieBoss::GetElementalDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetElementalDamageType");

	ADunDefGenieBoss_GetElementalDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.TakeDamage
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

void ADunDefGenieBoss::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.TakeDamage");

	ADunDefGenieBoss_TakeDamage_Params params;
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


// Function DunDefArabia.DunDefGenieBoss.GetMiniMapIconColor
// (Defined, Simulated, Public)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ADunDefGenieBoss::GetMiniMapIconColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetMiniMapIconColor");

	ADunDefGenieBoss_GetMiniMapIconColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.ActivateRageMode
// (Defined, Simulated, Public)

void ADunDefGenieBoss::ActivateRageMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.ActivateRageMode");

	ADunDefGenieBoss_ActivateRageMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.PauseAnimationAfterDeath
// (Defined, Simulated, Event, Public)

void ADunDefGenieBoss::PauseAnimationAfterDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PauseAnimationAfterDeath");

	ADunDefGenieBoss_PauseAnimationAfterDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.GetBurpProjectileLocAndRot
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 burpLoc                        (Parm, OutParm)
// struct FRotator                burpRot                        (Parm, OutParm)

void ADunDefGenieBoss::GetBurpProjectileLocAndRot(struct FVector* burpLoc, struct FRotator* burpRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetBurpProjectileLocAndRot");

	ADunDefGenieBoss_GetBurpProjectileLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (burpLoc != nullptr)
		*burpLoc = params.burpLoc;
	if (burpRot != nullptr)
		*burpRot = params.burpRot;
}


// Function DunDefArabia.DunDefGenieBoss.GetRightEyeLocAndRot
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FVector                 eyeLoc                         (Parm, OutParm)
// struct FRotator                eyeRot                         (Parm, OutParm)

void ADunDefGenieBoss::GetRightEyeLocAndRot(struct FVector* eyeLoc, struct FRotator* eyeRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetRightEyeLocAndRot");

	ADunDefGenieBoss_GetRightEyeLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (eyeLoc != nullptr)
		*eyeLoc = params.eyeLoc;
	if (eyeRot != nullptr)
		*eyeRot = params.eyeRot;
}


// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeLocAndRot
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FVector                 eyeLoc                         (Parm, OutParm)
// struct FRotator                eyeRot                         (Parm, OutParm)

void ADunDefGenieBoss::GetLeftEyeLocAndRot(struct FVector* eyeLoc, struct FRotator* eyeRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetLeftEyeLocAndRot");

	ADunDefGenieBoss_GetLeftEyeLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (eyeLoc != nullptr)
		*eyeLoc = params.eyeLoc;
	if (eyeRot != nullptr)
		*eyeRot = params.eyeRot;
}


// Function DunDefArabia.DunDefGenieBoss.GetRightEyeDmgType
// (Defined, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ADunDefGenieBoss::GetRightEyeDmgType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetRightEyeDmgType");

	ADunDefGenieBoss_GetRightEyeDmgType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeDmgType
// (Defined, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ADunDefGenieBoss::GetLeftEyeDmgType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetLeftEyeDmgType");

	ADunDefGenieBoss_GetLeftEyeDmgType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.PickRightEyeBeam
// (Defined, Public)

void ADunDefGenieBoss::PickRightEyeBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PickRightEyeBeam");

	ADunDefGenieBoss_PickRightEyeBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.PickLeftEyeBeam
// (Defined, Public)

void ADunDefGenieBoss::PickLeftEyeBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PickLeftEyeBeam");

	ADunDefGenieBoss_PickLeftEyeBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.PlayBiteAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGenieBoss::PlayBiteAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlayBiteAnim");

	ADunDefGenieBoss_PlayBiteAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.GetDjinnSpawnLocandRot
// (Defined, Public, HasOutParms)
// Parameters:
// struct FName                   SocketName                     (Parm)
// struct FVector                 SpawnLoc                       (Parm, OutParm)
// struct FRotator                SpawnRot                       (Parm, OutParm)

void ADunDefGenieBoss::GetDjinnSpawnLocandRot(const struct FName& SocketName, struct FVector* SpawnLoc, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetDjinnSpawnLocandRot");

	ADunDefGenieBoss_GetDjinnSpawnLocandRot_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnLoc != nullptr)
		*SpawnLoc = params.SpawnLoc;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function DunDefArabia.DunDefGenieBoss.GetBiteLocation
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 biteLocation                   (Parm, OutParm)
// struct FRotator                biteRot                        (OptionalParm, Parm, OutParm)

void ADunDefGenieBoss::GetBiteLocation(struct FVector* biteLocation, struct FRotator* biteRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetBiteLocation");

	ADunDefGenieBoss_GetBiteLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (biteLocation != nullptr)
		*biteLocation = params.biteLocation;
	if (biteRot != nullptr)
		*biteRot = params.biteRot;
}


// Function DunDefArabia.DunDefGenieBoss.SpawnBabyDjinn
// (Defined, Event, Public)

void ADunDefGenieBoss::SpawnBabyDjinn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SpawnBabyDjinn");

	ADunDefGenieBoss_SpawnBabyDjinn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.ClearHitList
// (Defined, Event, Public)

void ADunDefGenieBoss::ClearHitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.ClearHitList");

	ADunDefGenieBoss_ClearHitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.BiteStop
// (Defined, Event, Public)

void ADunDefGenieBoss::BiteStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.BiteStop");

	ADunDefGenieBoss_BiteStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.BiteStart
// (Defined, Event, Public)

void ADunDefGenieBoss::BiteStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.BiteStart");

	ADunDefGenieBoss_BiteStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.Burp
// (Defined, Event, Public)

void ADunDefGenieBoss::Burp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.Burp");

	ADunDefGenieBoss_Burp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.SpawnMoveToLampVFX
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 particleDir                    (Parm)

void ADunDefGenieBoss::SpawnMoveToLampVFX(const struct FVector& particleDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SpawnMoveToLampVFX");

	ADunDefGenieBoss_SpawnMoveToLampVFX_Params params;
	params.particleDir = particleDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.PlayBabySpawnAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGenieBoss::PlayBabySpawnAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlayBabySpawnAnim");

	ADunDefGenieBoss_PlayBabySpawnAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.PlayBurpAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGenieBoss::PlayBurpAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlayBurpAnim");

	ADunDefGenieBoss_PlayBurpAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.PlayDisappearAnim
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// bool                           bPlayEffects                   (Parm)
// class AActor*                  newLamp                        (Parm)

void ADunDefGenieBoss::PlayDisappearAnim(bool bPlayEffects, class AActor* newLamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlayDisappearAnim");

	ADunDefGenieBoss_PlayDisappearAnim_Params params;
	params.bPlayEffects = bPlayEffects;
	params.newLamp = newLamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.PlayLickAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGenieBoss::PlayLickAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlayLickAnim");

	ADunDefGenieBoss_PlayLickAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.PlaySuperLickAnim
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGenieBoss::PlaySuperLickAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlaySuperLickAnim");

	ADunDefGenieBoss_PlaySuperLickAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.PlayEyeBeamLoop
// (Defined, Simulated, Public)

void ADunDefGenieBoss::PlayEyeBeamLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlayEyeBeamLoop");

	ADunDefGenieBoss_PlayEyeBeamLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.TongueStart
// (Defined, Event, Public)

void ADunDefGenieBoss::TongueStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.TongueStart");

	ADunDefGenieBoss_TongueStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.GetTongueSocketLocation
// (Defined, Public, HasDefaults)
// Parameters:
// struct FName                   currentSocket                  (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefGenieBoss::GetTongueSocketLocation(const struct FName& currentSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.GetTongueSocketLocation");

	ADunDefGenieBoss_GetTongueSocketLocation_Params params;
	params.currentSocket = currentSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.StopCrazyEye
// (Defined, Simulated, Public)

void ADunDefGenieBoss::StopCrazyEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.StopCrazyEye");

	ADunDefGenieBoss_StopCrazyEye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.PlayCrazyEyesAttack
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGenieBoss::PlayCrazyEyesAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlayCrazyEyesAttack");

	ADunDefGenieBoss_PlayCrazyEyesAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.StartEyeDamage
// (Defined, Public)

void ADunDefGenieBoss::StartEyeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.StartEyeDamage");

	ADunDefGenieBoss_StartEyeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeTarget
// (Defined, Public)
// Parameters:
// class AActor*                  newLeftEyeTarget               (Parm)

void ADunDefGenieBoss::SetLeftEyeTarget(class AActor* newLeftEyeTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SetLeftEyeTarget");

	ADunDefGenieBoss_SetLeftEyeTarget_Params params;
	params.newLeftEyeTarget = newLeftEyeTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.SetRightEyeTarget
// (Defined, Public)
// Parameters:
// class AActor*                  newRightEyeTarget              (Parm)

void ADunDefGenieBoss::SetRightEyeTarget(class AActor* newRightEyeTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SetRightEyeTarget");

	ADunDefGenieBoss_SetRightEyeTarget_Params params;
	params.newRightEyeTarget = newRightEyeTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.PlayEyeAttackStart
// (Defined, Simulated, Public)
// Parameters:
// bool                           bIgnoreEyeTracking             (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGenieBoss::PlayEyeAttackStart(bool bIgnoreEyeTracking)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PlayEyeAttackStart");

	ADunDefGenieBoss_PlayEyeAttackStart_Params params;
	params.bIgnoreEyeTracking = bIgnoreEyeTracking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefArabia.DunDefGenieBoss.StartUpEyes
// (Defined, Public)
// Parameters:
// float                          DamageTime                     (Parm)

void ADunDefGenieBoss::StartUpEyes(float DamageTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.StartUpEyes");

	ADunDefGenieBoss_StartUpEyes_Params params;
	params.DamageTime = DamageTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.AdjustDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            inDamage                       (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void ADunDefGenieBoss::AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.AdjustDamage");

	ADunDefGenieBoss_AdjustDamage_Params params;
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


// Function DunDefArabia.DunDefGenieBoss.UnHideHead
// (Defined, Simulated, Public)

void ADunDefGenieBoss::UnHideHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.UnHideHead");

	ADunDefGenieBoss_UnHideHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.HideHead
// (Defined, Simulated, Public)

void ADunDefGenieBoss::HideHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.HideHead");

	ADunDefGenieBoss_HideHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.BringGenieOutOfLamp
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 lampLoc                        (Parm)

void ADunDefGenieBoss::BringGenieOutOfLamp(const struct FVector& lampLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.BringGenieOutOfLamp");

	ADunDefGenieBoss_BringGenieOutOfLamp_Params params;
	params.lampLoc = lampLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.ShutDownEyes
// (Defined, Simulated, Public)

void ADunDefGenieBoss::ShutDownEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.ShutDownEyes");

	ADunDefGenieBoss_ShutDownEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.SetRightEyeBeamLocation
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// struct FVector                 BeamNormal                     (Parm)

void ADunDefGenieBoss::SetRightEyeBeamLocation(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SetRightEyeBeamLocation");

	ADunDefGenieBoss_SetRightEyeBeamLocation_Params params;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.BeamNormal = BeamNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// struct FVector                 beamStartLoc                   (Parm)
// struct FVector                 BeamEndLoc                     (Parm)
// struct FVector                 BeamNormal                     (OptionalParm, Parm)

void ADunDefGenieBoss::SetLeftEyeBeamLocation(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SetLeftEyeBeamLocation");

	ADunDefGenieBoss_SetLeftEyeBeamLocation_Params params;
	params.beamStartLoc = beamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.BeamNormal = BeamNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.TraceRightEye
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGenieBoss::TraceRightEye(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.TraceRightEye");

	ADunDefGenieBoss_TraceRightEye_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.TraceLeftEye
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGenieBoss::TraceLeftEye(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.TraceLeftEye");

	ADunDefGenieBoss_TraceLeftEye_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.EndEyeAttack
// (Simulated, Public)

void ADunDefGenieBoss::EndEyeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.EndEyeAttack");

	ADunDefGenieBoss_EndEyeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.UpdateHeadLookAt
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGenieBoss::UpdateHeadLookAt(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.UpdateHeadLookAt");

	ADunDefGenieBoss_UpdateHeadLookAt_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.SetMovementPhysics
// (Defined, Public)

void ADunDefGenieBoss::SetMovementPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SetMovementPhysics");

	ADunDefGenieBoss_SetMovementPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefGenieBoss::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.Tick");

	ADunDefGenieBoss_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.SetOnAllOverlappingAuras
// (Defined, Public)
// Parameters:
// bool                           bSet                           (Parm)

void ADunDefGenieBoss::SetOnAllOverlappingAuras(bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SetOnAllOverlappingAuras");

	ADunDefGenieBoss_SetOnAllOverlappingAuras_Params params;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.SetInitialState
// (Defined, Simulated, Event, Public)

void ADunDefGenieBoss::SetInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.SetInitialState");

	ADunDefGenieBoss_SetInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGenieBoss::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.PostBeginPlay");

	ADunDefGenieBoss_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefArabia.DunDefGenieBoss.ExecReplicatedFunction
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

void ADunDefGenieBoss::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.ExecReplicatedFunction");

	ADunDefGenieBoss_ExecReplicatedFunction_Params params;
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


// Function DunDefArabia.DunDefGenieBoss.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefGenieBoss::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefArabia.DunDefGenieBoss.ReplicatedEvent");

	ADunDefGenieBoss_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
