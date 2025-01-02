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

// Function GameFramework.GameAIController.GetActionString
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameAIController::GetActionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActionString");

	AGameAIController_GetActionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.GeneratePathToLocation
// (Event, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameAIController::GeneratePathToLocation(const struct FVector& Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GeneratePathToLocation");

	AGameAIController_GeneratePathToLocation_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.GeneratePathToActor
// (Event, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameAIController::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GeneratePathToActor");

	AGameAIController_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.SetDesiredRotation
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FRotator                TargetDesiredRotation          (Parm)
// bool                           InLockDesiredRotation          (OptionalParm, Parm)
// bool                           InUnlockWhenReached            (OptionalParm, Parm)
// float                          InterpolationTime              (OptionalParm, Parm)

void AGameAIController::SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.SetDesiredRotation");

	AGameAIController_SetDesiredRotation_Params params;
	params.TargetDesiredRotation = TargetDesiredRotation;
	params.InLockDesiredRotation = InLockDesiredRotation;
	params.InUnlockWhenReached = InUnlockWhenReached;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AILog_Internal
// (Event, HasOptionalParms, Public)
// Parameters:
// struct FString                 LogText                        (Parm, CoerceParm, NeedCtorLink)
// struct FName                   LogCategory                    (OptionalParm, Parm)
// bool                           bForce                         (OptionalParm, Parm)

void AGameAIController::AILog_Internal(const struct FString& LogText, const struct FName& LogCategory, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AILog_Internal");

	AGameAIController_AILog_Internal_Params params;
	params.LogText = LogText;
	params.LogCategory = LogCategory;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.RecordDemoAILog
// (Protected)
// Parameters:
// struct FString                 LogText                        (Parm, CoerceParm, NeedCtorLink)

void AGameAIController::RecordDemoAILog(const struct FString& LogText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.RecordDemoAILog");

	AGameAIController_RecordDemoAILog_Params params;
	params.LogText = LogText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.Destroyed
// (Defined, Event, Public)

void AGameAIController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.Destroyed");

	AGameAIController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetAICommandInStack
// (Native, Public)
// Parameters:
// class UClass*                  InClass                        (Const, Parm)
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameAICommand* AGameAIController::GetAICommandInStack(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetAICommandInStack");

	AGameAIController_GetAICommandInStack_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.FindCommandOfClass
// (Final, Native, Public)
// Parameters:
// class UClass*                  SearchClass                    (Parm)
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm, CoerceParm)

class UGameAICommand* AGameAIController::FindCommandOfClass(class UClass* SearchClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.FindCommandOfClass");

	AGameAIController_FindCommandOfClass_Params params;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.DumpCommandStack
// (Final, Native, Public)

void AGameAIController::DumpCommandStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.DumpCommandStack");

	AGameAIController_DumpCommandStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.CheckCommandCount
// (Final, Native, Public)

void AGameAIController::CheckCommandCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.CheckCommandCount");

	AGameAIController_CheckCommandCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetActiveCommand
// (Final, Native, Public)
// Parameters:
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameAICommand* AGameAIController::GetActiveCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActiveCommand");

	AGameAIController_GetActiveCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.AbortCommand
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class UGameAICommand*          AbortCmd                       (Parm)
// class UClass*                  AbortClass                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameAIController::AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AbortCommand");

	AGameAIController_AbortCommand_Params params;
	params.AbortCmd = AbortCmd;
	params.AbortClass = AbortClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.PopCommand
// (Final, Native, Public)
// Parameters:
// class UGameAICommand*          ToBePoppedCommand              (Parm)

void AGameAIController::PopCommand(class UGameAICommand* ToBePoppedCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PopCommand");

	AGameAIController_PopCommand_Params params;
	params.ToBePoppedCommand = ToBePoppedCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.PushCommand
// (Final, Native, Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void AGameAIController::PushCommand(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PushCommand");

	AGameAIController_PushCommand_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDebugOverheadText
// (Public, HasOutParms)
// Parameters:
// class APlayerController*       PC                             (Parm)
// TArray<struct FString>         OutText                        (Parm, OutParm, NeedCtorLink)

void UGameAICommand::GetDebugOverheadText(class APlayerController* PC, TArray<struct FString>* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugOverheadText");

	UGameAICommand_GetDebugOverheadText_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function GameFramework.GameAICommand.DrawDebug
// (Event, Public)
// Parameters:
// class AHUD*                    H                              (Parm)
// struct FName                   Category                       (Parm)

void UGameAICommand::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.DrawDebug");

	UGameAICommand_DrawDebug_Params params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDumpString
// (Defined, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameAICommand::GetDumpString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDumpString");

	UGameAICommand_GetDumpString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.Resumed
// (Defined, Public)
// Parameters:
// struct FName                   OldCommandName                 (Parm)

void UGameAICommand::Resumed(const struct FName& OldCommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Resumed");

	UGameAICommand_Resumed_Params params;
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Paused
// (Defined, Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void UGameAICommand::Paused(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Paused");

	UGameAICommand_Paused_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Popped
// (Defined, Public)

void UGameAICommand::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Popped");

	UGameAICommand_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Pushed
// (Defined, Public)

void UGameAICommand::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Pushed");

	UGameAICommand_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PostPopped
// (Public)

void UGameAICommand::PostPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PostPopped");

	UGameAICommand_PostPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PrePushed
// (Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)

void UGameAICommand::PrePushed(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PrePushed");

	UGameAICommand_PrePushed_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.AllowStateTransitionTo
// (Defined, Public)
// Parameters:
// struct FName                   StateName                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::AllowStateTransitionTo(const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowStateTransitionTo");

	UGameAICommand_AllowStateTransitionTo_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.AllowTransitionTo
// (Defined, Public)
// Parameters:
// class UClass*                  AttemptCommand                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::AllowTransitionTo(class UClass* AttemptCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowTransitionTo");

	UGameAICommand_AllowTransitionTo_Params params;
	params.AttemptCommand = AttemptCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.Tick
// (Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameAICommand::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Tick");

	UGameAICommand_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::ShouldIgnoreNotifies()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.ShouldIgnoreNotifies");

	UGameAICommand_ShouldIgnoreNotifies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.InternalTick
// (Final, Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameAICommand::InternalTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalTick");

	UGameAICommand_InternalTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalResumed
// (Final, Defined, Event, Public)
// Parameters:
// struct FName                   OldCommandName                 (Parm)

void UGameAICommand::InternalResumed(const struct FName& OldCommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalResumed");

	UGameAICommand_InternalResumed_Params params;
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPaused
// (Final, Defined, Event, Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void UGameAICommand::InternalPaused(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPaused");

	UGameAICommand_InternalPaused_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPopped
// (Defined, Event, Public)

void UGameAICommand::InternalPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPopped");

	UGameAICommand_InternalPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPushed
// (Final, Defined, Event, Public)

void UGameAICommand::InternalPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPushed");

	UGameAICommand_InternalPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPrePushed
// (Final, Defined, Event, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)

void UGameAICommand::InternalPrePushed(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPrePushed");

	UGameAICommand_InternalPrePushed_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InitCommand
// (Defined, Static, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::STATIC_InitCommand(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommand");

	UGameAICommand_InitCommand_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.InitCommandUserActor
// (Defined, Static, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)
// class AActor*                  UserActor                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::STATIC_InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommandUserActor");

	UGameAICommand_InitCommandUserActor_Params params;
	params.AI = AI;
	params.UserActor = UserActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameCrowdAgent::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetBehaviorString");

	AGameCrowdAgent_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.GetDestString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameCrowdAgent::GetDestString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetDestString");

	AGameCrowdAgent_GetDestString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.PostRenderFor
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AGameCrowdAgent::PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostRenderFor");

	AGameCrowdAgent_PostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// (Simulated, Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AGameCrowdAgent::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NativePostRenderFor");

	AGameCrowdAgent_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdAgent::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GeneratePathToActor");

	AGameCrowdAgent_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// (Defined, Event, Public)

void AGameCrowdAgent::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitNavigationHandle");

	AGameCrowdAgent_InitNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// (Event, Public)
// Parameters:
// class AActor*                  A                              (Parm)

void AGameCrowdAgent::OverlappedActorEvent(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OverlappedActorEvent");

	AGameCrowdAgent_OverlappedActorEvent_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TakeDamage
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void AGameCrowdAgent::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TakeDamage");

	AGameCrowdAgent_TakeDamage_Params params;
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


// Function GameFramework.GameCrowdAgent.FireDeathEvent
// (Defined, Simulated, Event, Public)

void AGameCrowdAgent::FireDeathEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FireDeathEvent");

	AGameCrowdAgent_FireDeathEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayDeath
// (Native, Public)
// Parameters:
// struct FVector                 KillMomentum                   (Parm)

void AGameCrowdAgent::PlayDeath(const struct FVector& KillMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayDeath");

	AGameCrowdAgent_PlayDeath_Params params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class AActor*                  DestinationActor               (OptionalParm, Parm)

void AGameCrowdAgent::UpdateIntermediatePoint(class AActor* DestinationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint");

	AGameCrowdAgent_UpdateIntermediatePoint_Params params;
	params.DestinationActor = DestinationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.CalcCamera
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// float                          fDeltaTime                     (Parm)
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.CalcCamera");

	AGameCrowdAgent_CalcCamera_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.IsIdle
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsIdle");

	AGameCrowdAgent_IsIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// (Final, Native, Public)
// Parameters:
// class UGameCrowdAgentBehavior* BehaviorArchetype              (Parm)

void AGameCrowdAgent::SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentBehavior");

	AGameCrowdAgent_SetCurrentBehavior_Params params;
	params.BehaviorArchetype = BehaviorArchetype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopBehavior
// (Defined, Event, Public)

void AGameCrowdAgent::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopBehavior");

	AGameCrowdAgent_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// (Defined, Public)
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorObject              (Parm)

void AGameCrowdAgent::ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior");

	AGameCrowdAgent_ActivateInstancedBehavior_Params params;
	params.NewBehaviorObject = NewBehaviorObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateBehavior
// (Defined, Event, Public)
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (Parm)

void AGameCrowdAgent::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateBehavior");

	AGameCrowdAgent_ActivateBehavior_Params params;
	params.NewBehaviorArchetype = NewBehaviorArchetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// (Defined, Public)

void AGameCrowdAgent::ResetSeePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetSeePlayer");

	AGameCrowdAgent_ResetSeePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// (Defined, Public)

void AGameCrowdAgent::TryRandomBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TryRandomBehavior");

	AGameCrowdAgent_TryRandomBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// (Defined, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AGameCrowdAgent::NotifySeePlayer(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NotifySeePlayer");

	AGameCrowdAgent_NotifySeePlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// (Defined, Public)

void AGameCrowdAgent::PlaySpawnBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlaySpawnBehavior");

	AGameCrowdAgent_PlaySpawnBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// (Defined, Event, Public)

void AGameCrowdAgent::HandlePotentialAgentEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter");

	AGameCrowdAgent_HandlePotentialAgentEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// (Simulated, Event, Public)

void AGameCrowdAgent::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopIdleAnimation");

	AGameCrowdAgent_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// (Simulated, Event, Public)

void AGameCrowdAgent::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayIdleAnimation");

	AGameCrowdAgent_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_PlayAgentAnimation* Action                         (Parm)

void AGameCrowdAgent::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation");

	AGameCrowdAgent_OnPlayAgentAnimation_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitializeAgent
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class AActor*                  SpawnLoc                       (Parm)
// class AGameCrowdAgent*         AgentTemplate                  (Parm)
// class UGameCrowdGroup*         NewGroup                       (Parm)
// float                          AgentWarmupTime                (Parm)
// bool                           bWarmupPosition                (Parm)
// bool                           bCheckWarmupVisibility         (Parm)

void AGameCrowdAgent::InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitializeAgent");

	AGameCrowdAgent_InitializeAgent_Params params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;
	params.AgentWarmupTime = AgentWarmupTime;
	params.bWarmupPosition = bWarmupPosition;
	params.bCheckWarmupVisibility = bCheckWarmupVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetLighting
// (Defined, Simulated, Public)
// Parameters:
// bool                           bEnableLightEnvironment        (Parm)
// struct FLightingChannelContainer AgentLightingChannel           (Parm)
// bool                           bCastShadows                   (Parm)

void AGameCrowdAgent::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetLighting");

	AGameCrowdAgent_SetLighting_Params params;
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGameCrowdAgent::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.DisplayDebug");

	AGameCrowdAgent_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCrowdAgent.Destroyed
// (Defined, Simulated, Public)

void AGameCrowdAgent::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.Destroyed");

	AGameCrowdAgent_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// (Defined, Public)

void AGameCrowdAgent::ResetPooledAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetPooledAgent");

	AGameCrowdAgent_ResetPooledAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.KillAgent
// (Defined, Event, Public)

void AGameCrowdAgent::KillAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.KillAgent");

	AGameCrowdAgent_KillAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PostBeginPlay
// (Defined, Simulated, Public, HasDefaults)

void AGameCrowdAgent::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostBeginPlay");

	AGameCrowdAgent_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// (Defined, Public)

void AGameCrowdAgent::SetMaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetMaxSpeed");

	AGameCrowdAgent_SetMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void AGameCrowdAgent::SetCurrentDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentDestination");

	AGameCrowdAgent_SetCurrentDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// (Defined, Event, Public)

void AGameCrowdAgent::WaitForGroupMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.WaitForGroupMembers");

	AGameCrowdAgent_WaitForGroupMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TArray<struct FBehaviorEntry>  BehaviorList                   (Parm, NeedCtorLink)
// struct FVector                 BestCameraLoc                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::PickBehaviorFrom(TArray<struct FBehaviorEntry> BehaviorList, const struct FVector& BestCameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PickBehaviorFrom");

	AGameCrowdAgent_PickBehaviorFrom_Params params;
	params.BehaviorList = BehaviorList;
	params.BestCameraLoc = BestCameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.SetPanic
// (Defined, Public)
// Parameters:
// class AActor*                  PanicActor                     (Parm)
// bool                           bNewPanic                      (Parm)

void AGameCrowdAgent::SetPanic(class AActor* PanicActor, bool bNewPanic)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetPanic");

	AGameCrowdAgent_SetPanic_Params params;
	params.PanicActor = PanicActor;
	params.bNewPanic = bNewPanic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.IsPanicked
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::IsPanicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsPanicked");

	AGameCrowdAgent_IsPanicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// (Defined, Simulated, Event, Public)
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AGameCrowdAgent::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FellOutOfWorld");

	AGameCrowdAgent_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// (Defined, Simulated, Public)

void AGameCrowdAgentSkeletal::CreateAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments");

	AGameCrowdAgentSkeletal_CreateAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// (Defined, Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AGameCrowdAgentSkeletal::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");

	AGameCrowdAgentSkeletal_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// (Defined, Simulated, Event, Public)

void AGameCrowdAgentSkeletal::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation");

	AGameCrowdAgentSkeletal_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// (Defined, Simulated, Event, Public)

void AGameCrowdAgentSkeletal::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation");

	AGameCrowdAgentSkeletal_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// (Defined, Event, Public)

void AGameCrowdAgentSkeletal::ClearLatentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation");

	AGameCrowdAgentSkeletal_ClearLatentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_PlayAgentAnimation* Action                         (Parm)

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation");

	AGameCrowdAgentSkeletal_OnPlayAgentAnimation_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// (Native, Public)
// Parameters:
// bool                           bRootMotionEnabled             (Parm)

void AGameCrowdAgentSkeletal::SetRootMotion(bool bRootMotionEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion");

	AGameCrowdAgentSkeletal_SetRootMotion_Params params;
	params.bRootMotionEnabled = bRootMotionEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// (Native, Public)
// Parameters:
// struct FVector                 KillMomentum                   (Parm)

void AGameCrowdAgentSkeletal::PlayDeath(const struct FVector& KillMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");

	AGameCrowdAgentSkeletal_PlayDeath_Params params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// (Defined, Simulated, Public)
// Parameters:
// bool                           bEnableLightEnvironment        (Parm)
// struct FLightingChannelContainer AgentLightingChannel           (Parm)
// bool                           bCastShadows                   (Parm)

void AGameCrowdAgentSkeletal::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetLighting");

	AGameCrowdAgentSkeletal_SetLighting_Params params;
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// (Defined, Simulated, Public)

void AGameCrowdAgentSkeletal::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay");

	AGameCrowdAgentSkeletal_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt");

	UGameCrowdAgentBehavior_AllowBehaviorAt_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination");

	UGameCrowdAgentBehavior_AllowThisDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// (Event, Public)
// Parameters:
// class AGameCrowdAgent*         OtherAgent                     (Parm)

void UGameCrowdAgentBehavior::PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo");

	UGameCrowdAgentBehavior_PropagateViralBehaviorTo_Params params;
	params.OtherAgent = OtherAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// (Defined, Public)
// Parameters:
// class AActor*                  NewActionTarget                (Parm)

void UGameCrowdAgentBehavior::ActivatedBy(class AActor* NewActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ActivatedBy");

	UGameCrowdAgentBehavior_ActivatedBy_Params params;
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor");

	UGameCrowdAgentBehavior_GetDestinationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// (Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void UGameCrowdAgentBehavior::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ChangingDestination");

	UGameCrowdAgentBehavior_ChangingDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdAgentBehavior::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString");

	UGameCrowdAgentBehavior_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// (Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void UGameCrowdAgentBehavior::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd");

	UGameCrowdAgentBehavior_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// (Public)

void UGameCrowdAgentBehavior::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.StopBehavior");

	UGameCrowdAgentBehavior_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdAgentBehavior::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.InitBehavior");

	UGameCrowdAgentBehavior_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.HandleMovement");

	UGameCrowdAgentBehavior_HandleMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// (Event, Public)

void UGameCrowdAgentBehavior::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation");

	UGameCrowdAgentBehavior_FinishedTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 cameraLoc                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& cameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy");

	UGameCrowdAgentBehavior_CanBeUsedBy_Params params;
	params.Agent = Agent;
	params.cameraLoc = cameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.Tick
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameCrowdAgentBehavior::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.Tick");

	UGameCrowdAgentBehavior_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle");

	UGameCrowdAgentBehavior_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString");

	UGameCrowdBehavior_PlayAnimation_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// (Defined, Public)

void UGameCrowdBehavior_PlayAnimation::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior");

	UGameCrowdBehavior_PlayAnimation_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// (Defined, Public)

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow");

	UGameCrowdBehavior_PlayAnimation_PlayAgentAnimationNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// (Defined, Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void UGameCrowdBehavior_PlayAnimation::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd");

	UGameCrowdBehavior_PlayAnimation_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// (Native, Public)

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput");

	UGameCrowdBehavior_PlayAnimation_SetSequenceOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// (Defined, Event, Public)

void UGameCrowdBehavior_PlayAnimation::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation");

	UGameCrowdBehavior_PlayAnimation_FinishedTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_PlayAnimation::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior");

	UGameCrowdBehavior_PlayAnimation_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString");

	UGameCrowdBehavior_RunFromPanic_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt");

	UGameCrowdBehavior_RunFromPanic_AllowBehaviorAt_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination");

	UGameCrowdBehavior_RunFromPanic_AllowThisDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdAgent*         OtherAgent                     (Parm)

void UGameCrowdBehavior_RunFromPanic::PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo");

	UGameCrowdBehavior_RunFromPanic_PropagateViralBehaviorTo_Params params;
	params.OtherAgent = OtherAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// (Defined, Public)

void UGameCrowdBehavior_RunFromPanic::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior");

	UGameCrowdBehavior_RunFromPanic_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_RunFromPanic::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior");

	UGameCrowdBehavior_RunFromPanic_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// (Defined, Public)
// Parameters:
// class AActor*                  NewActionTarget                (Parm)

void UGameCrowdBehavior_RunFromPanic::ActivatedBy(class AActor* NewActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy");

	UGameCrowdBehavior_RunFromPanic_ActivatedBy_Params params;
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// (Defined, Public)

void UGameCrowdBehavior_WaitForGroup::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior");

	UGameCrowdBehavior_WaitForGroup_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle");

	UGameCrowdBehavior_WaitForGroup_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString");

	UGameCrowdBehavior_WaitForGroup_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_WaitForGroup::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior");

	UGameCrowdBehavior_WaitForGroup_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// (Defined, Public)

void UGameCrowdBehavior_WaitInQueue::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior");

	UGameCrowdBehavior_WaitInQueue_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle");

	UGameCrowdBehavior_WaitInQueue_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString");

	UGameCrowdBehavior_WaitInQueue_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor");

	UGameCrowdBehavior_WaitInQueue_GetDestinationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void UGameCrowdBehavior_WaitInQueue::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination");

	UGameCrowdBehavior_WaitInQueue_ChangingDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement");

	UGameCrowdBehavior_WaitInQueue_HandleMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdGroup.UpdateDestinations
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   NewDestination                 (Parm)

void UGameCrowdGroup::UpdateDestinations(class AGameCrowdDestination* NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.UpdateDestinations");

	UGameCrowdGroup_UpdateDestinations_Params params;
	params.NewDestination = NewDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.RemoveMember
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdGroup::RemoveMember(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.RemoveMember");

	UGameCrowdGroup_RemoveMember_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.AddMember
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdGroup::AddMember(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.AddMember");

	UGameCrowdGroup_AddMember_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// (Defined, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AGameCrowdInteractionPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInteractionPoint.OnToggle");

	AGameCrowdInteractionPoint_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdDestination::GeneratePathToActor(class AGameCrowdAgent* Agent, class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GeneratePathToActor");

	AGameCrowdDestination_GeneratePathToActor_Params params;
	params.Agent = Agent;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.InitNavigationHandle
// (Defined, Event, Public)

void AGameCrowdDestination::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.InitNavigationHandle");

	AGameCrowdDestination_InitNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// class USeqAct_GameCrowdSpawner* Spawner                        (Parm)
// struct FVector                 SpawnPos                       (Parm, OutParm)
// struct FRotator                SpawnRot                       (Parm, OutParm)

void AGameCrowdDestination::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnPosition");

	AGameCrowdDestination_GetSpawnPosition_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::AllowableDestinationFor(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");

	AGameCrowdDestination_AllowableDestinationFor_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.AtCapacity
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::AtCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AtCapacity");

	AGameCrowdDestination_AtCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdAgent*         ArrivingAgent                  (Parm)

void AGameCrowdDestination::IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");

	AGameCrowdDestination_IncrementCustomerCount_Params params;
	params.ArrivingAgent = ArrivingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdAgent*         DepartingAgent                 (Parm)

void AGameCrowdDestination::DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");

	AGameCrowdDestination_DecrementCustomerCount_Params params;
	params.DepartingAgent = DepartingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           bIgnoreRestrictions            (Parm)

void AGameCrowdDestination::PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");

	AGameCrowdDestination_PickNewDestinationFor_Params params;
	params.Agent = Agent;
	params.bIgnoreRestrictions = bIgnoreRestrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedDestination
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdDestination::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedDestination");

	AGameCrowdDestination_ReachedDestination_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PostBeginPlay
// (Defined, Simulated, Public)

void AGameCrowdDestination::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PostBeginPlay");

	AGameCrowdDestination_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedByAgent
// (Native, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 TestPosition                   (Parm)
// bool                           bTestExactly                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedByAgent");

	AGameCrowdDestination_ReachedByAgent_Params params;
	params.Agent = Agent;
	params.TestPosition = TestPosition;
	params.bTestExactly = bTestExactly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.GetSpreadValue
// (Defined, Event, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameCrowdDestination::GetSpreadValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpreadValue");

	AGameCrowdDestination_GetSpreadValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.NotifyPathChanged
// (Event, Public)

void AGameCrowdDestination::NotifyPathChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.NotifyPathChanged");

	AGameCrowdDestination_NotifyPathChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasCustomer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer");

	AGameCrowdDestinationQueuePoint_HasCustomer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         OldCustomer                    (Parm)

void AGameCrowdDestinationQueuePoint::ClearQueue(class AGameCrowdAgent* OldCustomer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue");

	AGameCrowdDestinationQueuePoint_ClearQueue_Params params;
	params.OldCustomer = OldCustomer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         NewCustomer                    (Parm)
// class AGameCrowdInteractionPoint* PreviousPosition               (Parm)

void AGameCrowdDestinationQueuePoint::AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer");

	AGameCrowdDestinationQueuePoint_AddCustomer_Params params;
	params.NewCustomer = NewCustomer;
	params.PreviousPosition = PreviousPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// (Final, Defined, Private)

void AGameCrowdDestinationQueuePoint::ActuallyAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");

	AGameCrowdDestinationQueuePoint_ActuallyAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// (Defined, Public)
// Parameters:
// class AGameCrowdInteractionPoint* FrontPosition                  (Parm)

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo");

	AGameCrowdDestinationQueuePoint_AdvanceCustomerTo_Params params;
	params.FrontPosition = FrontPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdDestinationQueuePoint::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination");

	AGameCrowdDestinationQueuePoint_ReachedDestination_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace");

	AGameCrowdDestinationQueuePoint_HasSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// (Native, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 TestPosition                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy");

	AGameCrowdDestinationQueuePoint_QueueReachedBy_Params params;
	params.Agent = Agent;
	params.TestPosition = TestPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdForcePoint.AppliedForce
// (Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdForcePoint::AppliedForce(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdForcePoint.AppliedForce");

	AGameCrowdForcePoint_AppliedForce_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdForcePoint.UnTouch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AGameCrowdForcePoint::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdForcePoint.UnTouch");

	AGameCrowdForcePoint_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdForcePoint.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AGameCrowdForcePoint::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdForcePoint.Touch");

	AGameCrowdForcePoint_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAttractor.AppliedForce
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdAttractor::AppliedForce(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAttractor.AppliedForce");

	AGameCrowdAttractor_AppliedForce_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdRepulsor.AppliedForce
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdRepulsor::AppliedForce(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdRepulsor.AppliedForce");

	AGameCrowdRepulsor_AppliedForce_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_GameCrowdSpawner::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");

	USeqAct_GameCrowdSpawner_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  SpawnLoc                       (Parm)
// class AGameCrowdAgent*         AgentTemplate                  (Parm)
// class UGameCrowdGroup*         NewGroup                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* USeqAct_GameCrowdSpawner::CreateNewAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent");

	USeqAct_GameCrowdSpawner_CreateNewAgent_Params params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent
// (Defined, Event, Public)
// Parameters:
// class AActor*                  SpawnLoc                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* USeqAct_GameCrowdSpawner::SpawnAgent(class AActor* SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent");

	USeqAct_GameCrowdSpawner_SpawnAgent_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning
// (Simulated, Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void USeqAct_GameCrowdSpawner::UpdateSpawning(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning");

	USeqAct_GameCrowdSpawner_UpdateSpawning_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents
// (Simulated, Native, Public)

void USeqAct_GameCrowdSpawner::KillAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents");

	USeqAct_GameCrowdSpawner_KillAgents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars
// (Simulated, Native, Public)

void USeqAct_GameCrowdSpawner::CacheSpawnerVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars");

	USeqAct_GameCrowdSpawner_CacheSpawnerVars_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent
// (Native, Public)
// Parameters:
// class AGameCrowdAgent*         NewAgent                       (Parm)

void USeqAct_GameCrowdSpawner::SpawnedAgent(class AGameCrowdAgent* NewAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent");

	USeqAct_GameCrowdSpawner_SpawnedAgent_Params params;
	params.NewAgent = NewAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// (Defined, Public, HasDefaults)
// Parameters:
// class AGameCrowdDestination*   SpawnLoc                       (Parm)
// class AGameCrowdAgent*         AgentTemplate                  (Parm)
// class UGameCrowdGroup*         NewGroup                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::CreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateNewAgent");

	AGameCrowdPopulationManager_CreateNewAgent_Params params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdDestination*   SpawnLoc                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent(class AGameCrowdDestination* SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgent");

	AGameCrowdPopulationManager_SpawnAgent_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// (Defined, Public, HasDefaults)
// Parameters:
// class AGameCrowdDestination*   Candidate                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::ValidateSpawnAt(class AGameCrowdDestination* Candidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt");

	AGameCrowdPopulationManager_ValidateSpawnAt_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.InitializeSpawnPoints
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 ViewLocation                   (Parm)
// struct FVector                 PredictionLocation             (Parm)

void AGameCrowdPopulationManager::InitializeSpawnPoints(const struct FVector& ViewLocation, const struct FVector& PredictionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.InitializeSpawnPoints");

	AGameCrowdPopulationManager_InitializeSpawnPoints_Params params;
	params.ViewLocation = ViewLocation;
	params.PredictionLocation = PredictionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   GCD                            (Parm)
// struct FVector                 ViewLocation                   (Parm)

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, const struct FVector& ViewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint");

	AGameCrowdPopulationManager_AddPrioritizedSpawnPoint_Params params;
	params.GCD = GCD;
	params.ViewLocation = ViewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// (Defined, Public, HasDefaults)
// Parameters:
// int                            StartIndex                     (Parm)
// int                            StopIndex                      (Parm)
// struct FVector                 ViewLocation                   (Parm)
// struct FVector                 PredictionLocation             (Parm)

void AGameCrowdPopulationManager::AnalyzeSpawnPoints(int StartIndex, int StopIndex, const struct FVector& ViewLocation, const struct FVector& PredictionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints");

	AGameCrowdPopulationManager_AnalyzeSpawnPoints_Params params;
	params.StartIndex = StartIndex;
	params.StopIndex = StopIndex;
	params.ViewLocation = ViewLocation;
	params.PredictionLocation = PredictionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// (Defined, Public, HasDefaults)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void AGameCrowdPopulationManager::PrioritizeSpawnPoints(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints");

	AGameCrowdPopulationManager_PrioritizeSpawnPoints_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdDestination* AGameCrowdPopulationManager::PickSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint");

	AGameCrowdPopulationManager_PickSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.Tick
// (Defined, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void AGameCrowdPopulationManager::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Tick");

	AGameCrowdPopulationManager_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGameCrowdPopulationManager::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.DisplayDebug");

	AGameCrowdPopulationManager_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCrowdPopulationManager.AddToAgentPool
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::AddToAgentPool(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddToAgentPool");

	AGameCrowdPopulationManager_AddToAgentPool_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdPopulationManager::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AgentDestroyed");

	AGameCrowdPopulationManager_AgentDestroyed_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.OnGameCrowdPopulationManagerToggle
// (Defined, Public)
// Parameters:
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       (Parm)

void AGameCrowdPopulationManager::OnGameCrowdPopulationManagerToggle(class USeqAct_GameCrowdPopulationManagerToggle* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.OnGameCrowdPopulationManagerToggle");

	AGameCrowdPopulationManager_OnGameCrowdPopulationManagerToggle_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// (Defined, Simulated, Public)

void AGameCrowdPopulationManager::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PostBeginPlay");

	AGameCrowdPopulationManager_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void AGameCrowdReplicationActor::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent");

	AGameCrowdReplicationActor_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameDamageType.HandleDamageFX
// (Static, Public, HasOutParms)
// Parameters:
// class AGamePawn*               DamagedPawn                    (Parm)
// struct FTakeHitInfo            HitInfo                        (Const, Parm, OutParm)

void UGameDamageType::STATIC_HandleDamageFX(class AGamePawn* DamagedPawn, struct FTakeHitInfo* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.HandleDamageFX");

	UGameDamageType_HandleDamageFX_Params params;
	params.DamagedPawn = DamagedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function GameFramework.GameDamageType.ShouldHeadShotGib
// (Defined, Static, Public)
// Parameters:
// class APawn*                   TestPawn                       (Parm)
// class APawn*                   Instigator                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameDamageType::STATIC_ShouldHeadShotGib(class APawn* TestPawn, class APawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.ShouldHeadShotGib");

	UGameDamageType_ShouldHeadShotGib_Params params;
	params.TestPawn = TestPawn;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameDamageType.PlayExtraDamageSound
// (Defined, Static, Public)
// Parameters:
// class APawn*                   VictimPawn                     (Parm)

void UGameDamageType::STATIC_PlayExtraDamageSound(class APawn* VictimPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.PlayExtraDamageSound");

	UGameDamageType_PlayExtraDamageSound_Params params;
	params.VictimPawn = VictimPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameDamageType.IsScriptedDamageType
// (Defined, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameDamageType::STATIC_IsScriptedDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.IsScriptedDamageType");

	UGameDamageType_IsScriptedDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameDamageType.ShouldPlayForceFeedback
// (Defined, Static, Public)
// Parameters:
// class APawn*                   DamagedPawn                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameDamageType::STATIC_ShouldPlayForceFeedback(class APawn* DamagedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.ShouldPlayForceFeedback");

	UGameDamageType_ShouldPlayForceFeedback_Params params;
	params.DamagedPawn = DamagedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameDamageType.HandleDeadPlayer
// (Static, Public)
// Parameters:
// class AGamePlayerController*   Player                         (Parm)

void UGameDamageType::STATIC_HandleDeadPlayer(class AGamePlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.HandleDeadPlayer");

	UGameDamageType_HandleDeadPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameDamageType.HandleKilledPawn
// (Static, Public)
// Parameters:
// class APawn*                   KilledPawn                     (Parm)
// class APawn*                   Instigator                     (Parm)

void UGameDamageType::STATIC_HandleKilledPawn(class APawn* KilledPawn, class APawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.HandleKilledPawn");

	UGameDamageType_HandleKilledPawn_Params params;
	params.KilledPawn = KilledPawn;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameDamageType.HandleDamagedPawn
// (Static, Public)
// Parameters:
// class APawn*                   DamagedPawn                    (Parm)
// class APawn*                   Instigator                     (Parm)
// int                            DamageAmt                      (Parm)
// struct FVector                 Momentum                       (Parm)

void UGameDamageType::STATIC_HandleDamagedPawn(class APawn* DamagedPawn, class APawn* Instigator, int DamageAmt, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.HandleDamagedPawn");

	UGameDamageType_HandleDamagedPawn_Params params;
	params.DamagedPawn = DamagedPawn;
	params.Instigator = Instigator;
	params.DamageAmt = DamageAmt;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameDamageType.ModifyDamage
// (Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Victim                         (Parm)
// class AController*             InstigatedBy                   (Parm)
// int                            out_Damage                     (Parm, OutParm)
// struct FVector                 out_Momentum                   (Parm, OutParm)
// struct FVector                 HitLocation                    (Parm)
// struct FTraceHitInfo           HitInfo                        (Parm)

void UGameDamageType::STATIC_ModifyDamage(class APawn* Victim, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FTraceHitInfo& HitInfo, int* out_Damage, struct FVector* out_Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.ModifyDamage");

	UGameDamageType_ModifyDamage_Params params;
	params.Victim = Victim;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Damage != nullptr)
		*out_Damage = params.out_Damage;
	if (out_Momentum != nullptr)
		*out_Momentum = params.out_Momentum;
}


// Function GameFramework.GameDamageType.ShouldGib
// (Defined, Static, Public)
// Parameters:
// class APawn*                   TestPawn                       (Parm)
// class APawn*                   Instigator                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameDamageType::STATIC_ShouldGib(class APawn* TestPawn, class APawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDamageType.ShouldGib");

	UGameDamageType_ShouldGib_Params params;
	params.TestPawn = TestPawn;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.ChooseCameraShake
// (Defined, Simulated, Protected, HasDefaults)
// Parameters:
// struct FVector                 Epicenter                      (Parm)
// class APlayerController*       PC                             (Parm)
// class UCameraShake*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UCameraShake* AGameExplosionActor::ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.ChooseCameraShake");

	AGameExplosionActor_ChooseCameraShake_Params params;
	params.Epicenter = Epicenter;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// (Defined, Simulated, Public)

void AGameExplosionActor::DoExplosionCameraEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionCameraEffects");

	AGameExplosionActor_DoExplosionCameraEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.Tick
// (Defined, Simulated, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AGameExplosionActor::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.Tick");

	AGameExplosionActor_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DoExplosionDamage
// (Defined, Simulated, Public)

void AGameExplosionActor::DoExplosionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionDamage");

	AGameExplosionActor_DoExplosionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DrawDebug
// (Defined, Simulated, Public, HasDefaults)

void AGameExplosionActor::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DrawDebug");

	AGameExplosionActor_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.Explode
// (Defined, Simulated, Event, HasOptionalParms, Public)
// Parameters:
// class UGameExplosion*          NewExplosionTemplate           (Parm)
// struct FVector                 Direction                      (OptionalParm, Parm)

void AGameExplosionActor::Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.Explode");

	AGameExplosionActor_Explode_Params params;
	params.NewExplosionTemplate = NewExplosionTemplate;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// (Simulated, Public)

void AGameExplosionActor::SpawnExplosionFogVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume");

	AGameExplosionActor_SpawnExplosionFogVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// (Simulated, Public)

void AGameExplosionActor::SpawnExplosionDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionDecal");

	AGameExplosionActor_SpawnExplosionDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// (Simulated, Public)
// Parameters:
// class UParticleSystem*         Template                       (Parm)

void AGameExplosionActor::SpawnExplosionParticleSystem(class UParticleSystem* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem");

	AGameExplosionActor_SpawnExplosionParticleSystem_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// (Simulated, Protected)
// Parameters:
// class UPhysicalMaterial*       PhysMaterial                   (Parm)

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX");

	AGameExplosionActor_UpdateExplosionTemplateWithPerMaterialFX_Params params;
	params.PhysMaterial = PhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.KnockdownPawn
// (Defined, Protected)
// Parameters:
// class AGamePawn*               Victim                         (Parm)
// float                          DistFromExplosion              (Parm)

void AGameExplosionActor::KnockdownPawn(class AGamePawn* Victim, float DistFromExplosion)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.KnockdownPawn");

	AGameExplosionActor_KnockdownPawn_Params params;
	params.Victim = Victim;
	params.DistFromExplosion = DistFromExplosion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.CringePawn
// (Defined, Protected)
// Parameters:
// class AGamePawn*               Victim                         (Parm)
// float                          DistFromExplosion              (Parm)

void AGameExplosionActor::CringePawn(class AGamePawn* Victim, float DistFromExplosion)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.CringePawn");

	AGameExplosionActor_CringePawn_Params params;
	params.Victim = Victim;
	params.DistFromExplosion = DistFromExplosion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DoCringesAndKnockdowns
// (Defined, Protected, HasDefaults)

void AGameExplosionActor::DoCringesAndKnockdowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoCringesAndKnockdowns");

	AGameExplosionActor_DoCringesAndKnockdowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.ShouldDoCringeFor
// (Defined, Protected)
// Parameters:
// class AGamePawn*               Victim                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameExplosionActor::ShouldDoCringeFor(class AGamePawn* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.ShouldDoCringeFor");

	AGameExplosionActor_ShouldDoCringeFor_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoBreakFracturedMeshes
// (Defined, Simulated, Protected)
// Parameters:
// struct FVector                 ExploOrigin                    (Parm)
// float                          DamageRadius                   (Parm)
// float                          RBStrength                     (Parm)
// class UClass*                  dmgType                        (Parm)

void AGameExplosionActor::DoBreakFracturedMeshes(const struct FVector& ExploOrigin, float DamageRadius, float RBStrength, class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoBreakFracturedMeshes");

	AGameExplosionActor_DoBreakFracturedMeshes_Params params;
	params.ExploOrigin = ExploOrigin;
	params.DamageRadius = DamageRadius;
	params.RBStrength = RBStrength;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.HurtExplosion
// (Defined, Simulated, Protected, HasDefaults)
// Parameters:
// float                          BaseDamage                     (Parm)
// float                          DamageRadius                   (Parm)
// float                          DamageFalloffExp               (Parm)
// class UClass*                  DamageType                     (Parm)
// float                          MomentumScale                  (Parm)
// struct FVector                 ExploOrigin                    (Parm)
// class AActor*                  IgnoredActor                   (Parm)
// class UClass*                  ActorClassToIgnoreForDamage    (Parm)
// class AController*             InstigatedByController         (Parm)
// bool                           bDoFullDamage                  (Parm)

void AGameExplosionActor::HurtExplosion(float BaseDamage, float DamageRadius, float DamageFalloffExp, class UClass* DamageType, float MomentumScale, const struct FVector& ExploOrigin, class AActor* IgnoredActor, class UClass* ActorClassToIgnoreForDamage, class AController* InstigatedByController, bool bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.HurtExplosion");

	AGameExplosionActor_HurtExplosion_Params params;
	params.BaseDamage = BaseDamage;
	params.DamageRadius = DamageRadius;
	params.DamageFalloffExp = DamageFalloffExp;
	params.DamageType = DamageType;
	params.MomentumScale = MomentumScale;
	params.ExploOrigin = ExploOrigin;
	params.IgnoredActor = IgnoredActor;
	params.ActorClassToIgnoreForDamage = ActorClassToIgnoreForDamage;
	params.InstigatedByController = InstigatedByController;
	params.bDoFullDamage = bDoFullDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.IsBehindExplosion
// (Defined, Simulated, Protected)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameExplosionActor::IsBehindExplosion(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.IsBehindExplosion");

	AGameExplosionActor_IsBehindExplosion_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Victim                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameExplosionActor::DoFullDamageToActor(class AActor* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoFullDamageToActor");

	AGameExplosionActor_DoFullDamageToActor_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// (Defined, Simulated, Protected, HasDefaults)
// Parameters:
// class UPhysicalMaterial*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetPhysicalMaterial");

	AGameExplosionActor_GetPhysicalMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.PreBeginPlay
// (Defined, Event, Public)

void AGameExplosionActor::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.PreBeginPlay");

	AGameExplosionActor_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.ResetMobileInputConfig
// (Defined, Exec, Public)

void AMobileHUD::ResetMobileInputConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.ResetMobileInputConfig");

	AMobileHUD_ResetMobileInputConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.NextMobileInputConfig
// (Defined, Exec, Public)

void AMobileHUD::NextMobileInputConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.NextMobileInputConfig");

	AMobileHUD_NextMobileInputConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawInputOverlays
// (Defined, Public, HasDefaults)

void AMobileHUD::DrawInputOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawInputOverlays");

	AMobileHUD_DrawInputOverlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostRender
// (Defined, Public)

void AMobileHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostRender");

	AMobileHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostBeginPlay
// (Defined, Simulated, Public)

void AMobileHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostBeginPlay");

	AMobileHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// (Defined, Simulated, Public)

void AGamePawn::ReattachMeshWithoutBeingSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");

	AGamePawn_ReattachMeshWithoutBeingSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMesh
// (Defined, Simulated, Public)

void AGamePawn::ReattachMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMesh");

	AGamePawn_ReattachMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.UpdateShadowSettings
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           bInWantShadow                  (Parm)

void AGamePawn::UpdateShadowSettings(bool bInWantShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.UpdateShadowSettings");

	AGamePawn_UpdateShadowSettings_Params params;
	params.bInWantShadow = bInWantShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.Cringe
// (Event, HasOptionalParms, Public)
// Parameters:
// float                          Duration                       (OptionalParm, Parm)

void AGamePawn::Cringe(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.Cringe");

	AGamePawn_Cringe_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ServerKnockdown
// (Net, NetReliable, HasOptionalParms, Public, NetServer)
// Parameters:
// struct FVector                 RBLinearVelocity               (OptionalParm, Parm)
// struct FVector                 RBAngularVelocity              (OptionalParm, Parm)
// struct FVector                 RadialOrigin                   (OptionalParm, Parm)
// float                          RadialRadius                   (OptionalParm, Parm)
// float                          RadialStrength                 (OptionalParm, Parm)
// struct FVector                 PointImpulse                   (OptionalParm, Parm)
// struct FVector                 PointImpulsePosition           (OptionalParm, Parm)
// struct FName                   PointImpulseBoneName           (OptionalParm, Parm)

void AGamePawn::ServerKnockdown(const struct FVector& RBLinearVelocity, const struct FVector& RBAngularVelocity, const struct FVector& RadialOrigin, float RadialRadius, float RadialStrength, const struct FVector& PointImpulse, const struct FVector& PointImpulsePosition, const struct FName& PointImpulseBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ServerKnockdown");

	AGamePawn_ServerKnockdown_Params params;
	params.RBLinearVelocity = RBLinearVelocity;
	params.RBAngularVelocity = RBAngularVelocity;
	params.RadialOrigin = RadialOrigin;
	params.RadialRadius = RadialRadius;
	params.RadialStrength = RadialStrength;
	params.PointImpulse = PointImpulse;
	params.PointImpulsePosition = PointImpulsePosition;
	params.PointImpulseBoneName = PointImpulseBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.GetTargetFrictionCylinder
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          CylinderRadius                 (Parm, OutParm)
// float                          CylinderHeight                 (Parm, OutParm)

void AGamePawn::GetTargetFrictionCylinder(float* CylinderRadius, float* CylinderHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.GetTargetFrictionCylinder");

	AGamePawn_GetTargetFrictionCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CylinderRadius != nullptr)
		*CylinderRadius = params.CylinderRadius;
	if (CylinderHeight != nullptr)
		*CylinderHeight = params.CylinderHeight;
}


// Function GameFramework.GamePlayerController.ClientColorFade
// (Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// struct FColor                  FadeColor                      (Parm)
// unsigned char                  FromAlpha                      (Parm)
// unsigned char                  ToAlpha                        (Parm)
// float                          FadeTime                       (Parm)

void AGamePlayerController::ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientColorFade");

	AGamePlayerController_ClientColorFade_Params params;
	params.FadeColor = FadeColor;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.WarmupPause
// (Defined, Event, Public, HasDefaults)
// Parameters:
// bool                           bDesiredPauseState             (Parm)

void AGamePlayerController::WarmupPause(bool bDesiredPauseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.WarmupPause");

	AGamePlayerController_WarmupPause_Params params;
	params.bDesiredPauseState = bDesiredPauseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGamePlayerController::CanUnpauseWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CanUnpauseWarmup");

	AGamePlayerController_CanUnpauseWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.GetCurrentMovie
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 MovieName                      (Parm, OutParm, NeedCtorLink)

void AGamePlayerController::GetCurrentMovie(struct FString* MovieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetCurrentMovie");

	AGamePlayerController_GetCurrentMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieName != nullptr)
		*MovieName = params.MovieName;
}


// Function GameFramework.GamePlayerController.ClientStopMovie
// (Final, Net, NetReliable, Simulated, Native, Event, Public, NetClient)
// Parameters:
// float                          DelayInSeconds                 (Parm)
// bool                           bAllowMovieToFinish            (Parm)
// bool                           bForceStopNonSkippable         (Parm)
// bool                           bForceStopLoadingMovie         (Parm)

void AGamePlayerController::ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientStopMovie");

	AGamePlayerController_ClientStopMovie_Params params;
	params.DelayInSeconds = DelayInSeconds;
	params.bAllowMovieToFinish = bAllowMovieToFinish;
	params.bForceStopNonSkippable = bForceStopNonSkippable;
	params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientPlayMovie
// (Final, Net, NetReliable, Simulated, Native, Event, HasOptionalParms, Public, NetClient)
// Parameters:
// struct FString                 MovieName                      (Parm, NeedCtorLink)
// int                            InStartOfRenderingMovieFrame   (OptionalParm, Parm)
// int                            InEndOfRenderingMovieFrame     (OptionalParm, Parm)

void AGamePlayerController::ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientPlayMovie");

	AGamePlayerController_ClientPlayMovie_Params params;
	params.MovieName = MovieName;
	params.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	params.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// (Final, Native, Static, Public)

void AGamePlayerController::STATIC_KeepPlayingLoadingMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie");

	AGamePlayerController_KeepPlayingLoadingMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ShowLoadingMovie
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// bool                           bShowMovie                     (Parm)
// bool                           bPauseAfterHide                (OptionalParm, Parm)
// float                          PauseDuration                  (OptionalParm, Parm)
// float                          KeepPlayingDuration            (OptionalParm, Parm)
// bool                           bOverridePreviousDelays        (OptionalParm, Parm)

void AGamePlayerController::STATIC_ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ShowLoadingMovie");

	AGamePlayerController_ShowLoadingMovie_Params params;
	params.bShowMovie = bShowMovie;
	params.bPauseAfterHide = bPauseAfterHide;
	params.PauseDuration = PauseDuration;
	params.KeepPlayingDuration = KeepPlayingDuration;
	params.bOverridePreviousDelays = bOverridePreviousDelays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.GetCurrentSoundMode
// (Final, Defined, Simulated, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AGamePlayerController::GetCurrentSoundMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetCurrentSoundMode");

	AGamePlayerController_GetCurrentSoundMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.SetSoundMode
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   InSoundModeName                (Parm)

void AGamePlayerController::SetSoundMode(const struct FName& InSoundModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.SetSoundMode");

	AGamePlayerController_SetSoundMode_Params params;
	params.InSoundModeName = InSoundModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// (Defined, Simulated, Protected)
// Parameters:
// class UCameraShake*            ShakeData                      (Parm)
// float                          Scale                          (Parm)

void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");

	AGamePlayerController_DoForceFeedbackForScreenShake_Params params;
	params.ShakeData = ShakeData;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// (Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGamePlayerController::NotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius");

	AGamePlayerController_NotifyCrowdAgentInRadius_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// (Event, Public)

void AGamePlayerController::NotifyCrowdAgentRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh");

	AGamePlayerController_NotifyCrowdAgentRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdDebug
// (Defined, Exec, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void AGamePlayerController::CrowdDebug(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdDebug");

	AGamePlayerController_CrowdDebug_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdToggle
// (Defined, Exec, Public)

void AGamePlayerController::CrowdToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdToggle");

	AGamePlayerController_CrowdToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdFocus
// (Defined, Exec, Public)

void AGamePlayerController::CrowdFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdFocus");

	AGamePlayerController_CrowdFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGamePlayerController::GetUIPlayerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetUIPlayerIndex");

	AGamePlayerController_GetUIPlayerIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// (Defined, Public)

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");

	UNavMeshGoal_OutOfViewFrom_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// (Defined, Static, Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// struct FVector                 InOutOfViewLocation            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavMeshGoal_OutOfViewFrom::STATIC_MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");

	UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params params;
	params.NavHandle = NavHandle;
	params.InOutOfViewLocation = InOutOfViewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// (Native, Public)

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");

	UNavMeshGoal_OutOfViewFrom_RecycleNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// (Defined, Public)

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// (Defined, Static, Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// struct FVector                 InLocation                     (Const, Parm)
// struct FRotator                InRotation                     (Const, Parm)
// float                          InDistanceToCheck              (Const, Parm)
// TArray<struct FVector>         InLocationsToCheck             (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::STATIC_BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params params;
	params.NavHandle = NavHandle;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InDistanceToCheck = InDistanceToCheck;
	params.InLocationsToCheck = InLocationsToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_GameCrowdPopulationManagerToggle::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion");

	USeqAct_GameCrowdPopulationManagerToggle_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FindPopMgrTarget
// (Defined, Event, Public)

void USeqAct_GameCrowdPopulationManagerToggle::FindPopMgrTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FindPopMgrTarget");

	USeqAct_GameCrowdPopulationManagerToggle_FindPopMgrTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// (Defined, Public)
// Parameters:
// class AGameCrowdAgentSkeletal* Agent                          (Parm)

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor");

	USeqAct_PlayAgentAnimation_SetCurrentAnimationActionFor_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_PlayAgentAnimation::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion");

	USeqAct_PlayAgentAnimation_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// (Event, Public, HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm)

void UGameCameraBase::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ModifyPostProcessSettings");

	UGameCameraBase_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameCameraBase.Init
// (Public)

void UGameCameraBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.Init");

	UGameCameraBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.ProcessViewRotation
// (Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameCameraBase::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ProcessViewRotation");

	UGameCameraBase_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameCameraBase.UpdateCamera
// (Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameCameraBase::UpdateCamera(class APawn* P, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.UpdateCamera");

	UGameCameraBase_UpdateCamera_Params params;
	params.P = P;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameCameraBase.ResetInterpolation
// (Defined, Public)

void UGameCameraBase::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ResetInterpolation");

	UGameCameraBase_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeInActive
// (Public)
// Parameters:
// class UGameCameraBase*         NewCamera                      (Parm)

void UGameCameraBase::OnBecomeInActive(class UGameCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeInActive");

	UGameCameraBase_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeActive
// (Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameCameraBase::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeActive");

	UGameCameraBase_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// (Defined, Public)

void UGameThirdPersonCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");

	UGameThirdPersonCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm)

void UGameThirdPersonCamera::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings");

	UGameThirdPersonCamera_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// (Defined, Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameThirdPersonCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");

	UGameThirdPersonCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// (Defined, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameThirdPersonCamera::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");

	UGameThirdPersonCamera_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// (Final, Defined, Protected)
// Parameters:
// class APawn*                   P                              (Parm)

void UGameThirdPersonCamera::UpdateCameraMode(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");

	UGameThirdPersonCamera_UpdateCameraMode_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// (Defined, Public)
// Parameters:
// class APawn*                   P                              (Parm)
// class UGameThirdPersonCameraMode* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");

	UGameThirdPersonCamera_FindBestCameraMode_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// (Defined, Public)
// Parameters:
// struct FRotator                Delta                          (Parm)

void UGameThirdPersonCamera::AdjustFocusPointInterpolation(const struct FRotator& Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");

	UGameThirdPersonCamera_AdjustFocusPointInterpolation_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// (Defined, Protected, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCamera::GetActualFocusLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");

	UGameThirdPersonCamera_GetActualFocusLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// (Defined, Event, Protected)
// Parameters:
// class APawn*                   P                              (Parm)

void UGameThirdPersonCamera::UpdateFocusPoint(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");

	UGameThirdPersonCamera_UpdateFocusPoint_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bLeaveCameraRotation           (OptionalParm, Parm)

void UGameThirdPersonCamera::ClearFocusPoint(bool bLeaveCameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");

	UGameThirdPersonCamera_ClearFocusPoint_Params params;
	params.bLeaveCameraRotation = bLeaveCameraRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameThirdPersonCamera::GetFocusActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetFocusActor");

	UGameThirdPersonCamera_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  FocusActor                     (Parm)
// struct FName                   FocusBoneName                  (Parm)
// struct FVector2D               InterpSpeedRange               (Parm)
// struct FVector2D               InFocusFOV                     (Parm)
// float                          CameraFOV                      (OptionalParm, Parm)
// bool                           bAlwaysFocus                   (OptionalParm, Parm)
// bool                           bAdjustCamera                  (OptionalParm, Parm)
// bool                           bIgnoreTrace                   (OptionalParm, Parm)
// float                          FocusPitchOffsetDeg            (OptionalParm, Parm)

void UGameThirdPersonCamera::SetFocusOnActor(class AActor* FocusActor, const struct FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");

	UGameThirdPersonCamera_SetFocusOnActor_Params params;
	params.FocusActor = FocusActor;
	params.FocusBoneName = FocusBoneName;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FVector                 FocusWorldLoc                  (Parm)
// struct FVector2D               InterpSpeedRange               (Parm)
// struct FVector2D               InFocusFOV                     (Parm)
// float                          CameraFOV                      (OptionalParm, Parm)
// bool                           bAlwaysFocus                   (OptionalParm, Parm)
// bool                           bAdjustCamera                  (OptionalParm, Parm)
// bool                           bIgnoreTrace                   (OptionalParm, Parm)
// float                          FocusPitchOffsetDeg            (OptionalParm, Parm)

void UGameThirdPersonCamera::SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");

	UGameThirdPersonCamera_SetFocusOnLoc_Params params;
	params.FocusWorldLoc = FocusWorldLoc;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// (Defined, Public)
// Parameters:
// int                            AngleOffset                    (Parm)

void UGameThirdPersonCamera::AdjustTurn(int AngleOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustTurn");

	UGameThirdPersonCamera_AdjustTurn_Params params;
	params.AngleOffset = AngleOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.EndTurn
// (Native, Public)

void UGameThirdPersonCamera::EndTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.EndTurn");

	UGameThirdPersonCamera_EndTurn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.BeginTurn
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            StartAngle                     (Parm)
// int                            EndAngle                       (Parm)
// float                          TimeSec                        (Parm)
// float                          DelaySec                       (OptionalParm, Parm)
// bool                           bAlignTargetWhenFinished       (OptionalParm, Parm)

void UGameThirdPersonCamera::BeginTurn(int StartAngle, int EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.BeginTurn");

	UGameThirdPersonCamera_BeginTurn_Params params;
	params.StartAngle = StartAngle;
	params.EndAngle = EndAngle;
	params.TimeSec = TimeSec;
	params.DelaySec = DelaySec;
	params.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// (Native, Protected, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameThirdPersonCamera::PlayerUpdateCamera(class APawn* P, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");

	UGameThirdPersonCamera_PlayerUpdateCamera_Params params;
	params.P = P;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// (Defined, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameThirdPersonCamera::UpdateCamera(class APawn* P, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCamera");

	UGameThirdPersonCamera_UpdateCamera_Params params;
	params.P = P;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// (Defined, Event, Public)
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGameThirdPersonCamera::GetDesiredFOV(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");

	UGameThirdPersonCamera_GetDesiredFOV_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.Init
// (Defined, Public)

void UGameThirdPersonCamera::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Init");

	UGameThirdPersonCamera_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.Reset
// (Defined, Public)

void UGameThirdPersonCamera::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Reset");

	UGameThirdPersonCamera_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// (Defined, Protected)
// Parameters:
// class UClass*                  ModeClass                      (Parm)
// class UGameThirdPersonCameraMode* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode(class UClass* ModeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");

	UGameThirdPersonCamera_CreateCameraMode_Params params;
	params.ModeClass = ModeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// (Final, Native, Protected)
// Parameters:
// float                          inHorizFOV                     (Parm)
// class APawn*                   CameraTargetPawn               (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGamePlayerCamera::AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");

	AGamePlayerCamera_AdjustFOVForViewport_Params params;
	params.inHorizFOV = inHorizFOV;
	params.CameraTargetPawn = CameraTargetPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// (Defined, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void AGamePlayerCamera::ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ProcessViewRotation");

	AGamePlayerCamera_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GamePlayerCamera.ResetInterpolation
// (Defined, Simulated, Public)

void AGamePlayerCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ResetInterpolation");

	AGamePlayerCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.SetColorScale
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 NewColorScale                  (Parm)

void AGamePlayerCamera::SetColorScale(const struct FVector& NewColorScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.SetColorScale");

	AGamePlayerCamera_SetColorScale_Params params;
	params.NewColorScale = NewColorScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGamePlayerCamera::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.DisplayDebug");

	AGamePlayerCamera_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FTViewTarget            OutVT                          (Const, Parm, OutParm)

void AGamePlayerCamera::UpdateCameraLensEffects(struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");

	AGamePlayerCamera_UpdateCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// (Defined, Public, HasOutParms)
// Parameters:
// struct FTViewTarget            OutVT                          (Parm, OutParm)
// float                          DeltaTime                      (Parm)

void AGamePlayerCamera::UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateViewTarget");

	AGamePlayerCamera_UpdateViewTarget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGamePlayerCamera::ShouldConstrainAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");

	AGamePlayerCamera_ShouldConstrainAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.FindBestCameraType
// (Defined, Protected)
// Parameters:
// class AActor*                  CameraTarget                   (Parm)
// class UGameCameraBase*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.FindBestCameraType");

	AGamePlayerCamera_FindBestCameraType_Params params;
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.Reset
// (Defined, Public)

void AGamePlayerCamera::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.Reset");

	AGamePlayerCamera_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.PostBeginPlay
// (Defined, Simulated, Public)

void AGamePlayerCamera::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.PostBeginPlay");

	AGamePlayerCamera_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// (Native, Protected)
// Parameters:
// class AActor*                  TargetBase                     (Parm)

void AGamePlayerCamera::CacheLastTargetBaseInfo(class AActor* TargetBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");

	AGamePlayerCamera_CacheLastTargetBaseInfo_Params params;
	params.TargetBase = TargetBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CreateCamera
// (Defined, Protected)
// Parameters:
// class UClass*                  CameraClass                    (Parm)
// class UGameCameraBase*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameCameraBase* AGamePlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CreateCamera");

	AGamePlayerCamera_CreateCamera_Params params;
	params.CameraClass = CameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FViewOffsetData         NewViewOffset                  (Const, Parm, OutParm)

void UGameThirdPersonCameraMode::SetViewOffset(struct FViewOffsetData* NewViewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");

	UGameThirdPersonCameraMode_SetViewOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewViewOffset != nullptr)
		*NewViewOffset = params.NewViewOffset;
}


// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm)

void UGameThirdPersonCameraMode::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings");

	UGameThirdPersonCameraMode_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTViewTarget            VT                             (Const, Parm, OutParm)
// float                          DeltaTime                      (Parm)

void UGameThirdPersonCameraMode::UpdatePostProcess(float DeltaTime, struct FTViewTarget* VT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");

	UGameThirdPersonCameraMode_UpdatePostProcess_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VT != nullptr)
		*VT = params.VT;
}


// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// (Defined, Simulated, Protected, HasDefaults)
// Parameters:
// class AActor*                  TraceOwner                     (Parm)
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");

	UGameThirdPersonCameraMode_DOFTrace_Params params;
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// (Defined, Simulated, Protected)
// Parameters:
// class AActor*                  TraceOwner                     (Parm)
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");

	UGameThirdPersonCameraMode_GetDOFFocusLoc_Params params;
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// (Simulated, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameThirdPersonCameraMode::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");

	UGameThirdPersonCameraMode_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// (Defined, Simulated, Public)
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameThirdPersonCameraMode::SetFocusPoint(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");

	UGameThirdPersonCameraMode_SetFocusPoint_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// (Defined, Simulated, Event, Public)
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::GetCameraWorstCaseLoc(class APawn* TargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");

	UGameThirdPersonCameraMode_GetCameraWorstCaseLoc_Params params;
	params.TargetPawn = TargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// (Defined, Public)
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGameThirdPersonCameraMode::GetDesiredFOV(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");

	UGameThirdPersonCameraMode_GetDesiredFOV_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// (Defined, Event, Public)
// Parameters:
// class APawn*                   P                              (Parm)
// struct FVector                 Offset                         (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::AdjustViewOffset(class APawn* P, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");

	UGameThirdPersonCameraMode_AdjustViewOffset_Params params;
	params.P = P;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// (Public)
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// class UGameThirdPersonCameraMode* NewMode                        (Parm)

void UGameThirdPersonCameraMode::OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");

	UGameThirdPersonCameraMode_OnBecomeInActive_Params params;
	params.TargetPawn = TargetPawn;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// (Defined, Public)
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// class UGameThirdPersonCameraMode* PrevMode                       (Parm)

void UGameThirdPersonCameraMode::OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");

	UGameThirdPersonCameraMode_OnBecomeActive_Params params;
	params.TargetPawn = TargetPawn;
	params.PrevMode = PrevMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameDecalManager.SpawnDecalMinimal
// (Final, Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 DecalLocation                  (Const, Parm, OutParm)
// float                          InDecalLifeSpan                (Const, Parm)
// float                          InCanSpawnDistance             (Const, Parm)
// class UGameDecal*              ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UGameDecal* AGameDecalManager::SpawnDecalMinimal(float InDecalLifeSpan, float InCanSpawnDistance, struct FVector* DecalLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDecalManager.SpawnDecalMinimal");

	AGameDecalManager_SpawnDecalMinimal_Params params;
	params.InDecalLifeSpan = InDecalLifeSpan;
	params.InCanSpawnDistance = InCanSpawnDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DecalLocation != nullptr)
		*DecalLocation = params.DecalLocation;

	return params.ReturnValue;
}


// Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVector                 DecalLocation                  (Const, Parm, OutParm)
// float                          InCanSpawnDistance             (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameDecalManager::IsTooCloseToActiveDecal(float InCanSpawnDistance, struct FVector* DecalLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal");

	AGameDecalManager_IsTooCloseToActiveDecal_Params params;
	params.InCanSpawnDistance = InCanSpawnDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DecalLocation != nullptr)
		*DecalLocation = params.DecalLocation;

	return params.ReturnValue;
}


// Function GameFramework.GameParticleEventManager.HandleParticleModuleEventSendToGame
// (Defined, Event, Public, HasOutParms)
// Parameters:
// class UParticleModuleEventSendToGame* InEvent                        (Parm)
// struct FVector                 InCollideDirection             (Const, Parm, OutParm)
// struct FVector                 InHitLocation                  (Const, Parm, OutParm)
// struct FVector                 InHitNormal                    (Const, Parm, OutParm)
// struct FName                   InBoneName                     (Const, Parm, OutParm)

void AGameParticleEventManager::HandleParticleModuleEventSendToGame(class UParticleModuleEventSendToGame* InEvent, struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameParticleEventManager.HandleParticleModuleEventSendToGame");

	AGameParticleEventManager_HandleParticleModuleEventSendToGame_Params params;
	params.InEvent = InEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCollideDirection != nullptr)
		*InCollideDirection = params.InCollideDirection;
	if (InHitLocation != nullptr)
		*InHitLocation = params.InHitLocation;
	if (InHitNormal != nullptr)
		*InHitNormal = params.InHitNormal;
	if (InBoneName != nullptr)
		*InBoneName = params.InBoneName;
}


// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// (Final, Native, Public)
// Parameters:
// struct FRotator                InRotation                     (Parm)
// struct FVector                 RelativeSpaceOffset            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameSpecialMove::RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.RelativeToWorldOffset");

	UGameSpecialMove_RelativeToWorldOffset_Params params;
	params.InRotation = InRotation;
	params.RelativeSpaceOffset = RelativeSpaceOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// (Final, Native, Public)
// Parameters:
// struct FRotator                InRotation                     (Parm)
// struct FVector                 WorldSpaceOffset               (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameSpecialMove::WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.WorldToRelativeOffset");

	UGameSpecialMove_WorldToRelativeOffset_Params params;
	params.InRotation = InRotation;
	params.WorldSpaceOffset = WorldSpaceOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ForcePawnRotation
// (Final, Native, Public)
// Parameters:
// class APawn*                   P                              (Parm)
// struct FRotator                NewRotation                    (Parm)

void UGameSpecialMove::ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ForcePawnRotation");

	UGameSpecialMove_ForcePawnRotation_Params params;
	params.P = P;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.MessageEvent
// (Defined, Public)
// Parameters:
// struct FName                   EventName                      (Parm)
// class UObject*                 Sender                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::MessageEvent(const struct FName& EventName, class UObject* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.MessageEvent");

	UGameSpecialMove_MessageEvent_Params params;
	params.EventName = EventName;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// (Final, Native, Public)

void UGameSpecialMove::ResetFacePreciseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ResetFacePreciseRotation");

	UGameSpecialMove_ResetFacePreciseRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// (Event, Public)

void UGameSpecialMove::ReachedPrecisePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ReachedPrecisePosition");

	UGameSpecialMove_ReachedPrecisePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// (Final, Native, Public)
// Parameters:
// struct FRotator                RotationToFace                 (Parm)
// float                          InterpolationTime              (Parm)

void UGameSpecialMove::SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetFacePreciseRotation");

	UGameSpecialMove_SetFacePreciseRotation_Params params;
	params.RotationToFace = RotationToFace;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 DestinationToReach             (Parm)
// bool                           bCancel                        (OptionalParm, Parm)

void UGameSpecialMove::SetReachPreciseDestination(const struct FVector& DestinationToReach, bool bCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetReachPreciseDestination");

	UGameSpecialMove_SetReachPreciseDestination_Params params;
	params.DestinationToReach = DestinationToReach;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ShouldReplicate
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::ShouldReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ShouldReplicate");

	UGameSpecialMove_ShouldReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// (Public)

void UGameSpecialMove::SpecialMoveFlagsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated");

	UGameSpecialMove_SpecialMoveFlagsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.Tick
// (Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameSpecialMove::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.Tick");

	UGameSpecialMove_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// (Public)
// Parameters:
// struct FName                   PrevMove                       (Parm)
// struct FName                   NextMove                       (Parm)

void UGameSpecialMove::SpecialMoveEnded(const struct FName& PrevMove, const struct FName& NextMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveEnded");

	UGameSpecialMove_SpecialMoveEnded_Params params;
	params.PrevMove = PrevMove;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// (Public)
// Parameters:
// bool                           bForced                        (Parm)
// struct FName                   PrevMove                       (Parm)

void UGameSpecialMove::SpecialMoveStarted(bool bForced, const struct FName& PrevMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveStarted");

	UGameSpecialMove_SpecialMoveStarted_Params params;
	params.bForced = bForced;
	params.PrevMove = PrevMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// (Defined, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::InternalCanDoSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove");

	UGameSpecialMove_InternalCanDoSpecialMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// (Final, Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bForceCheck                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanDoSpecialMove(bool bForceCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanDoSpecialMove");

	UGameSpecialMove_CanDoSpecialMove_Params params;
	params.bForceCheck = bForceCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// (Defined, Public)
// Parameters:
// struct FName                   InMove                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanOverrideSpecialMove(const struct FName& InMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideSpecialMove");

	UGameSpecialMove_CanOverrideSpecialMove_Params params;
	params.InMove = InMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// (Defined, Public)
// Parameters:
// struct FName                   NewMove                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanOverrideMoveWith(const struct FName& NewMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideMoveWith");

	UGameSpecialMove_CanOverrideMoveWith_Params params;
	params.NewMove = NewMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanChainMove
// (Defined, Public)
// Parameters:
// struct FName                   NextMove                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanChainMove(const struct FName& NextMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanChainMove");

	UGameSpecialMove_CanChainMove_Params params;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// (Public)
// Parameters:
// int                            Flags                          (Parm)

void UGameSpecialMove::ExtractSpecialMoveFlags(int Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags");

	UGameSpecialMove_ExtractSpecialMoveFlags_Params params;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// (Public, HasOutParms)
// Parameters:
// int                            out_Flags                      (Parm, OutParm)

void UGameSpecialMove::InitSpecialMoveFlags(int* out_Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMoveFlags");

	UGameSpecialMove_InitSpecialMoveFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Flags != nullptr)
		*out_Flags = params.out_Flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMove
// (Defined, Public)
// Parameters:
// class AGamePawn*               inPawn                         (Parm)
// struct FName                   InHandle                       (Parm)

void UGameSpecialMove::InitSpecialMove(class AGamePawn* inPawn, const struct FName& InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMove");

	UGameSpecialMove_InitSpecialMove_Params params;
	params.inPawn = inPawn;
	params.InHandle = InHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnerInterface.AddToAgentPool
// (Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdSpawnerInterface::AddToAgentPool(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.AddToAgentPool");

	UGameCrowdSpawnerInterface_AddToAgentPool_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// (Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdSpawnerInterface::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed");

	UGameCrowdSpawnerInterface_AgentDestroyed_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// (Public, HasOutParms)
// Parameters:
// class USeqAct_GameCrowdSpawner* Spawner                        (Parm)
// struct FVector                 SpawnPos                       (Parm, OutParm)
// struct FRotator                SpawnRot                       (Parm, OutParm)

void UGameCrowdSpawnInterface::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition");

	UGameCrowdSpawnInterface_GetSpawnPosition_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function GameFramework.GameFixedCamera.OnBecomeActive
// (Defined, Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameFixedCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.OnBecomeActive");

	UGameFixedCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameFixedCamera.UpdateCamera
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameFixedCamera::UpdateCamera(class APawn* P, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.UpdateCamera");

	UGameFixedCamera_UpdateCamera_Params params;
	params.P = P;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameKActorSpawnableEffect.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AGameKActorSpawnableEffect::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.Tick");

	AGameKActorSpawnableEffect_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// (Defined, Simulated, Event, Public)
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AGameKActorSpawnableEffect::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");

	AGameKActorSpawnableEffect_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// (Simulated, Event, Public)

void AGameKActorSpawnableEffect::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");

	AGameKActorSpawnableEffect_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
