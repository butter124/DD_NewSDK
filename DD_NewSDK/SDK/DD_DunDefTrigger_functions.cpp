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

// Function DunDefTrigger.DunDefTrigger.GetActivationOffset
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTrigger::GetActivationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.GetActivationOffset");

	ADunDefTrigger_GetActivationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefTrigger.DunDefTrigger.GetActivationWeighting
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefTrigger::GetActivationWeighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.GetActivationWeighting");

	ADunDefTrigger_GetActivationWeighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefTrigger.DunDefTrigger.Client_Activate
// (Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)

void ADunDefTrigger::Client_Activate(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.Client_Activate");

	ADunDefTrigger_Client_Activate_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefTrigger.DunDefTrigger.UpdateActivationTime
// (Defined, Simulated, Public)

void ADunDefTrigger::UpdateActivationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.UpdateActivationTime");

	ADunDefTrigger_UpdateActivationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefTrigger.DunDefTrigger.Server_Activate
// (Defined, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// unsigned long                  forceActivation                (OptionalParm, Parm)
// int                            activationType                 (OptionalParm, Parm)

void ADunDefTrigger::Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.Server_Activate");

	ADunDefTrigger_Server_Activate_Params params;
	params.PC = PC;
	params.forceActivation = forceActivation;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefTrigger.DunDefTrigger.AllowActivation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* PC                             (Parm)
// int                            activationType                 (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTrigger::AllowActivation(class ADunDefPlayerController* PC, int activationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.AllowActivation");

	ADunDefTrigger_AllowActivation_Params params;
	params.PC = PC;
	params.activationType = activationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefTrigger.DunDefTrigger.GetToolTipPriority
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefTrigger::GetToolTipPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.GetToolTipPriority");

	ADunDefTrigger_GetToolTipPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefTrigger.DunDefTrigger.TakesToolTipPriority
// (Defined, Simulated, Public)
// Parameters:
// TScriptInterface<class UDunDefToolTipInterface> otherToolTip                   (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTrigger::TakesToolTipPriority(const TScriptInterface<class UDunDefToolTipInterface>& otherToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.TakesToolTipPriority");

	ADunDefTrigger_TakesToolTipPriority_Params params;
	params.otherToolTip = otherToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefTrigger.DunDefTrigger.DrawToolTip
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class UCanvas*                 C                              (Parm)
// int                            PosX                           (Parm)
// int                            PosY                           (Parm)
// class ULocalPlayer*            ForPlayer                      (OptionalParm, Parm)

void ADunDefTrigger::DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.DrawToolTip");

	ADunDefTrigger_DrawToolTip_Params params;
	params.C = C;
	params.PosX = PosX;
	params.PosY = PosY;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefTrigger.DunDefTrigger.ContinueDrawingToolTip
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ContinueDrawing                (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefTrigger::ContinueDrawingToolTip(unsigned long ContinueDrawing)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.ContinueDrawingToolTip");

	ADunDefTrigger_ContinueDrawingToolTip_Params params;
	params.ContinueDrawing = ContinueDrawing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefTrigger.DunDefTrigger.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefTrigger::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefTrigger.DunDefTrigger.PostBeginPlay");

	ADunDefTrigger_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
