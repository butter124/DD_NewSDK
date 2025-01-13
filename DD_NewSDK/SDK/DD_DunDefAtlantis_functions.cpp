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

// Function DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_PickNewPuzzleSolver::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver.Activated");

	UDunDef_SeqAct_PickNewPuzzleSolver_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.AddPlayerToWaterList
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           waterPlayer                    (Parm)

void ADunDefGRI_RisingWater::AddPlayerToWaterList(class ADunDefPlayer* waterPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.AddPlayerToWaterList");

	ADunDefGRI_RisingWater_AddPlayerToWaterList_Params params;
	params.waterPlayer = waterPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.RemovePlayerToWaterList
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayer*           waterPlayer                    (Parm)

void ADunDefGRI_RisingWater::RemovePlayerToWaterList(class ADunDefPlayer* waterPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.RemovePlayerToWaterList");

	ADunDefGRI_RisingWater_RemovePlayerToWaterList_Params params;
	params.waterPlayer = waterPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.SetWaterCastingMultiplier
// (Defined, Public)
// Parameters:
// float                          newCastingMultiplier           (Parm)

void ADunDefGRI_RisingWater::SetWaterCastingMultiplier(float newCastingMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.SetWaterCastingMultiplier");

	ADunDefGRI_RisingWater_SetWaterCastingMultiplier_Params params;
	params.newCastingMultiplier = newCastingMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.GetCastRateMultiplier
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPlayerAbility*    ability                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefGRI_RisingWater::GetCastRateMultiplier(class ADunDefPlayerAbility* ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.GetCastRateMultiplier");

	ADunDefGRI_RisingWater_GetCastRateMultiplier_Params params;
	params.ability = ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.PuzzleComplete
// (Defined, Public)

void ADunDefGRI_RisingWater::PuzzleComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.PuzzleComplete");

	ADunDefGRI_RisingWater_PuzzleComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.GetRandomPlayer
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefPlayer* ADunDefGRI_RisingWater::GetRandomPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.GetRandomPlayer");

	ADunDefGRI_RisingWater_GetRandomPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class ADunDefHUD*              H                              (Parm)

void ADunDefGRI_RisingWater::DrawMyHUD(class ADunDefHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.DrawMyHUD");

	ADunDefGRI_RisingWater_DrawMyHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.SetNewSolver
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayer*           newSolver                      (Parm)
// unsigned long                  bIgnoreGameInfoNotification    (OptionalParm, Parm)

void ADunDefGRI_RisingWater::SetNewSolver(class ADunDefPlayer* newSolver, unsigned long bIgnoreGameInfoNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.SetNewSolver");

	ADunDefGRI_RisingWater_SetNewSolver_Params params;
	params.newSolver = newSolver;
	params.bIgnoreGameInfoNotification = bIgnoreGameInfoNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.NotifyPuzzleSolverDeath
// (Defined, Public)

void ADunDefGRI_RisingWater::NotifyPuzzleSolverDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.NotifyPuzzleSolverDeath");

	ADunDefGRI_RisingWater_NotifyPuzzleSolverDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.ClearPuzzleSolver
// (Defined, Public)

void ADunDefGRI_RisingWater::ClearPuzzleSolver()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.ClearPuzzleSolver");

	ADunDefGRI_RisingWater_ClearPuzzleSolver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.PickNewSolver
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefPlayer* ADunDefGRI_RisingWater::PickNewSolver()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.PickNewSolver");

	ADunDefGRI_RisingWater_PickNewSolver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefGRI_RisingWater.ExecReplicatedFunction
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

void ADunDefGRI_RisingWater::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefGRI_RisingWater.ExecReplicatedFunction");

	ADunDefGRI_RisingWater_ExecReplicatedFunction_Params params;
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


// Function DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle.Activated
// (Defined, Event, Public)

void UDunDef_SeqAct_SetUpPuzzle::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle.Activated");

	UDunDef_SeqAct_SetUpPuzzle_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.Destroyed
// (Defined, Simulated, Event, Public, HasDefaults)

void APuzzleRoomActor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.Destroyed");

	APuzzleRoomActor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.FlashPuzzlePiece
// (Defined, Simulated, Public)
// Parameters:
// int                            pieceIndex                     (Parm)

void APuzzleRoomActor::FlashPuzzlePiece(int pieceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.FlashPuzzlePiece");

	APuzzleRoomActor_FlashPuzzlePiece_Params params;
	params.pieceIndex = pieceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.ShowPuzzlePath
// (Defined, Public)

void APuzzleRoomActor::ShowPuzzlePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.ShowPuzzlePath");

	APuzzleRoomActor_ShowPuzzlePath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.PlayFailedPathVFX
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 actorLoc                       (Parm)

void APuzzleRoomActor::PlayFailedPathVFX(const struct FVector& actorLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.PlayFailedPathVFX");

	APuzzleRoomActor_PlayFailedPathVFX_Params params;
	params.actorLoc = actorLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.PlayInitalFailVFX
// (Defined, Simulated, Public)
// Parameters:
// int                            failedIndex                    (Parm)

void APuzzleRoomActor::PlayInitalFailVFX(int failedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.PlayInitalFailVFX");

	APuzzleRoomActor_PlayInitalFailVFX_Params params;
	params.failedIndex = failedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.FailedPath
// (Defined, Public)

void APuzzleRoomActor::FailedPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.FailedPath");

	APuzzleRoomActor_FailedPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulMove
// (Defined, Simulated, Public)
// Parameters:
// int                            moveIndex                      (Parm)

void APuzzleRoomActor::SuccessfulMove(int moveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.SuccessfulMove");

	APuzzleRoomActor_SuccessfulMove_Params params;
	params.moveIndex = moveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulFinish
// (Defined, Simulated, Public)
// Parameters:
// int                            finalIndex                     (Parm)

void APuzzleRoomActor::SuccessfulFinish(int finalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.SuccessfulFinish");

	APuzzleRoomActor_SuccessfulFinish_Params params;
	params.finalIndex = finalIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.FinishedPuzzle
// (Defined, Public)
// Parameters:
// int                            finalIndex                     (Parm)

void APuzzleRoomActor::FinishedPuzzle(int finalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.FinishedPuzzle");

	APuzzleRoomActor_FinishedPuzzle_Params params;
	params.finalIndex = finalIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.NotifyPieceTouched
// (Defined, Public)
// Parameters:
// class APuzzlePieceActor*       touchedPiece                   (Parm)
// class AActor*                  TouchingActor                  (Parm)

void APuzzleRoomActor::NotifyPieceTouched(class APuzzlePieceActor* touchedPiece, class AActor* TouchingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.NotifyPieceTouched");

	APuzzleRoomActor_NotifyPieceTouched_Params params;
	params.touchedPiece = touchedPiece;
	params.TouchingActor = TouchingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.ResetPuzzle
// (Defined, Public)

void APuzzleRoomActor::ResetPuzzle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.ResetPuzzle");

	APuzzleRoomActor_ResetPuzzle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.DrawDebugPathLines
// (Defined, Public, HasDefaults)

void APuzzleRoomActor::DrawDebugPathLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.DrawDebugPathLines");

	APuzzleRoomActor_DrawDebugPathLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.StartEffect
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// int                            pieceIndex                     (OptionalParm, Parm)

void APuzzleRoomActor::StartEffect(int pieceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.StartEffect");

	APuzzleRoomActor_StartEffect_Params params;
	params.pieceIndex = pieceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.AddValidPathPiece
// (Defined, Simulated, Public)
// Parameters:
// int                            newPieceIndex                  (Parm)
// int                            newValidIndex                  (Parm)

void APuzzleRoomActor::AddValidPathPiece(int newPieceIndex, int newValidIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.AddValidPathPiece");

	APuzzleRoomActor_AddValidPathPiece_Params params;
	params.newPieceIndex = newPieceIndex;
	params.newValidIndex = newValidIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.MakePuzzle
// (Defined, Public, HasDefaults)

void APuzzleRoomActor::MakePuzzle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.MakePuzzle");

	APuzzleRoomActor_MakePuzzle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.CalculatePieceIndex
// (Defined, Simulated, Public)
// Parameters:
// int                            X_loc                          (Parm)
// int                            Y_loc                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int APuzzleRoomActor::CalculatePieceIndex(int X_loc, int Y_loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.CalculatePieceIndex");

	APuzzleRoomActor_CalculatePieceIndex_Params params;
	params.X_loc = X_loc;
	params.Y_loc = Y_loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.PuzzleRoomActor.InitGrid
// (Defined, Simulated, Public, HasDefaults)

void APuzzleRoomActor::InitGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.InitGrid");

	APuzzleRoomActor_InitGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.PostBeginPlay
// (Defined, Simulated, Event, Public)

void APuzzleRoomActor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.PostBeginPlay");

	APuzzleRoomActor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzleRoomActor.ExecReplicatedFunction
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

void APuzzleRoomActor::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzleRoomActor.ExecReplicatedFunction");

	APuzzleRoomActor_ExecReplicatedFunction_Params params;
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


// Function DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft.Activated
// (Defined, Event, Public)

void UDunDef_SeqEvent_PuzzleSolverLeft::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft.Activated");

	UDunDef_SeqEvent_PuzzleSolverLeft_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.GameInfo_RisingWater.Logout
// (Defined, Public)
// Parameters:
// class AController*             Exiting                        (Parm)

void AGameInfo_RisingWater::Logout(class AController* Exiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.GameInfo_RisingWater.Logout");

	AGameInfo_RisingWater_Logout_Params params;
	params.Exiting = Exiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.GameInfo_RisingWater.SetCurrentPuzzleSolver
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           newPuzzleSolver                (Parm)

void AGameInfo_RisingWater::SetCurrentPuzzleSolver(class ADunDefPlayer* newPuzzleSolver)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.GameInfo_RisingWater.SetCurrentPuzzleSolver");

	AGameInfo_RisingWater_SetCurrentPuzzleSolver_Params params;
	params.newPuzzleSolver = newPuzzleSolver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.GameInfo_RisingWater.SetGRIPuzzleSolver
// (Defined, Public)

void AGameInfo_RisingWater::SetGRIPuzzleSolver()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.GameInfo_RisingWater.SetGRIPuzzleSolver");

	AGameInfo_RisingWater_SetGRIPuzzleSolver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.GameInfo_RisingWater.RestartPlayer
// (Defined, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AGameInfo_RisingWater::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.GameInfo_RisingWater.RestartPlayer");

	AGameInfo_RisingWater_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.GameInfo_RisingWater.Killed
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             KilledPlayer                   (Parm)
// class APawn*                   KilledPawn                     (Parm)
// class UClass*                  DamageType                     (Parm)

void AGameInfo_RisingWater::Killed(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.GameInfo_RisingWater.Killed");

	AGameInfo_RisingWater_Killed_Params params;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;
	params.KilledPawn = KilledPawn;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefInkCloud.ResetCurrentMoveActors
// (Defined, Public)

void ADunDefInkCloud::ResetCurrentMoveActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefInkCloud.ResetCurrentMoveActors");

	ADunDefInkCloud_ResetCurrentMoveActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefInkCloud.HurtRadius
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

unsigned long ADunDefInkCloud::HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefInkCloud.HurtRadius");

	ADunDefInkCloud_HurtRadius_Params params;
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


// Function DunDefAtlantis.DunDefInkCloud.FadeOut
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          theLightFadeOutTime            (OptionalParm, Parm)

void ADunDefInkCloud::FadeOut(float theLightFadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefInkCloud.FadeOut");

	ADunDefInkCloud_FadeOut_Params params;
	params.theLightFadeOutTime = theLightFadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefInkCloud.Init
// (Defined, Public)
// Parameters:
// struct FVector                 Direction                      (Parm)

void ADunDefInkCloud::Init(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefInkCloud.Init");

	ADunDefInkCloud_Init_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.CheckKrakenProximity
// (Defined, Public, HasDefaults)

void ADunDefKraken::CheckKrakenProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.CheckKrakenProximity");

	ADunDefKraken_CheckKrakenProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKraken::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.Died");

	ADunDefKraken_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.DestroyTentacles
// (Defined, Public)

void ADunDefKraken::DestroyTentacles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.DestroyTentacles");

	ADunDefKraken_DestroyTentacles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.GetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* forController                  (Parm)
// class ADunDefPlayer*           ForPlayer                      (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.GetPlayerTargetingDesirability");

	ADunDefKraken_GetPlayerTargetingDesirability_Params params;
	params.forController = forController;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.BiteStop
// (Defined, Event, Public)

void ADunDefKraken::BiteStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.BiteStop");

	ADunDefKraken_BiteStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.BiteStart
// (Defined, Event, Public)

void ADunDefKraken::BiteStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.BiteStart");

	ADunDefKraken_BiteStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.PlayTentacleAttackAnimation
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::PlayTentacleAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayTentacleAttackAnimation");

	ADunDefKraken_PlayTentacleAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.PlayBiteAttackAnimation
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::PlayBiteAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayBiteAttackAnimation");

	ADunDefKraken_PlayBiteAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.StopSpit
// (Defined, Event, Public)

void ADunDefKraken::StopSpit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.StopSpit");

	ADunDefKraken_StopSpit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.StartSpit
// (Defined, Event, Public)

void ADunDefKraken::StartSpit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.StartSpit");

	ADunDefKraken_StartSpit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.GetSocketLocAndRot
// (Defined, Public, HasOutParms)
// Parameters:
// struct FName                   SocketName                     (Parm)
// struct FVector                 socLoc                         (Parm, OutParm)
// struct FRotator                socRot                         (Parm, OutParm)

void ADunDefKraken::GetSocketLocAndRot(const struct FName& SocketName, struct FVector* socLoc, struct FRotator* socRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.GetSocketLocAndRot");

	ADunDefKraken_GetSocketLocAndRot_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (socLoc != nullptr)
		*socLoc = params.socLoc;
	if (socRot != nullptr)
		*socRot = params.socRot;
}


// Function DunDefAtlantis.DunDefKraken.ShootGiantProjectile
// (Defined, Event, Public)

void ADunDefKraken::ShootGiantProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.ShootGiantProjectile");

	ADunDefKraken_ShootGiantProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.ShootRight
// (Defined, Event, Public)

void ADunDefKraken::ShootRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.ShootRight");

	ADunDefKraken_ShootRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.ShootLeft
// (Defined, Event, Public)

void ADunDefKraken::ShootLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.ShootLeft");

	ADunDefKraken_ShootLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.ResetMovementSettings
// (Defined, Public)

void ADunDefKraken::ResetMovementSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.ResetMovementSettings");

	ADunDefKraken_ResetMovementSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.SetDashMovementSettings
// (Defined, Public)
// Parameters:
// float                          DashAirSpeedScalar             (Parm)
// float                          DashRotationRateScalar         (Parm)

void ADunDefKraken::SetDashMovementSettings(float DashAirSpeedScalar, float DashRotationRateScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.SetDashMovementSettings");

	ADunDefKraken_SetDashMovementSettings_Params params;
	params.DashAirSpeedScalar = DashAirSpeedScalar;
	params.DashRotationRateScalar = DashRotationRateScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.PlayDashWindUp
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::PlayDashWindUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayDashWindUp");

	ADunDefKraken_PlayDashWindUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.PlayInkCloudAttack
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::PlayInkCloudAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayInkCloudAttack");

	ADunDefKraken_PlayInkCloudAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.PlayGiantProjectileAttack
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::PlayGiantProjectileAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayGiantProjectileAttack");

	ADunDefKraken_PlayGiantProjectileAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.PlayRightTentacleAttack
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::PlayRightTentacleAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayRightTentacleAttack");

	ADunDefKraken_PlayRightTentacleAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.GetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::GetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.GetTowerTargetingDesirability");

	ADunDefKraken_GetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.PlayLeftTentacleAttack
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::PlayLeftTentacleAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayLeftTentacleAttack");

	ADunDefKraken_PlayLeftTentacleAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.IsValidRightSwingTarget
// (Defined, Public)
// Parameters:
// class AActor*                  checkTarg                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKraken::IsValidRightSwingTarget(class AActor* checkTarg)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.IsValidRightSwingTarget");

	ADunDefKraken_IsValidRightSwingTarget_Params params;
	params.checkTarg = checkTarg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.IsValidLeftSwingTarget
// (Defined, Public)
// Parameters:
// class AActor*                  checkTarg                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKraken::IsValidLeftSwingTarget(class AActor* checkTarg)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.IsValidLeftSwingTarget");

	ADunDefKraken_IsValidLeftSwingTarget_Params params;
	params.checkTarg = checkTarg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.AddToRightSwingHurtList
// (Defined, Public)
// Parameters:
// class AActor*                  newHitTarg                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefKraken::AddToRightSwingHurtList(class AActor* newHitTarg, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.AddToRightSwingHurtList");

	ADunDefKraken_AddToRightSwingHurtList_Params params;
	params.newHitTarg = newHitTarg;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.AddToLeftSwingHurtList
// (Defined, Public)
// Parameters:
// class AActor*                  newHitTarg                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefKraken::AddToLeftSwingHurtList(class AActor* newHitTarg, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.AddToLeftSwingHurtList");

	ADunDefKraken_AddToLeftSwingHurtList_Params params;
	params.newHitTarg = newHitTarg;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.StopMelee
// (Defined, Public)

void ADunDefKraken::StopMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.StopMelee");

	ADunDefKraken_StopMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.StartMelee
// (Defined, Event, Public)

void ADunDefKraken::StartMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.StartMelee");

	ADunDefKraken_StartMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.CloseMouth
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::CloseMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.CloseMouth");

	ADunDefKraken_CloseMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.OpenMouth
// (Defined, Public)

void ADunDefKraken::OpenMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.OpenMouth");

	ADunDefKraken_OpenMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.PlayMouthOpen
// (Defined, Simulated, Public)

void ADunDefKraken::PlayMouthOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayMouthOpen");

	ADunDefKraken_PlayMouthOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.DoSingleWithdraw
// (Defined, Simulated, Public)
// Parameters:
// int                            tentacleIndex                  (Parm)

void ADunDefKraken::DoSingleWithdraw(int tentacleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.DoSingleWithdraw");

	ADunDefKraken_DoSingleWithdraw_Params params;
	params.tentacleIndex = tentacleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.ForceWithDraw
// (Defined, Public)
// Parameters:
// class AKrakenTentacle*         withdrawTentacle               (Parm)

void ADunDefKraken::ForceWithDraw(class AKrakenTentacle* withdrawTentacle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.ForceWithDraw");

	ADunDefKraken_ForceWithDraw_Params params;
	params.withdrawTentacle = withdrawTentacle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.BringOutAllTentacles
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::BringOutAllTentacles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.BringOutAllTentacles");

	ADunDefKraken_BringOutAllTentacles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.PlayWithDrawTentacle
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// int                            tentacleIndex                  (Parm)

void ADunDefKraken::PlayWithDrawTentacle(int tentacleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayWithDrawTentacle");

	ADunDefKraken_PlayWithDrawTentacle_Params params;
	params.tentacleIndex = tentacleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.NotifyTentacleWithdraw
// (Defined, Public)
// Parameters:
// class AKrakenTentacle*         damagedTentacle                (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKraken::NotifyTentacleWithdraw(class AKrakenTentacle* damagedTentacle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.NotifyTentacleWithdraw");

	ADunDefKraken_NotifyTentacleWithdraw_Params params;
	params.damagedTentacle = damagedTentacle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.CheckSpecialCoreDmg
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKraken::CheckSpecialCoreDmg(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.CheckSpecialCoreDmg");

	ADunDefKraken_CheckSpecialCoreDmg_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.AdjustDamage
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            inDamage                       (Parm, OutParm)
// struct FVector                 Momentum                       (Parm, OutParm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void ADunDefKraken::AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.AdjustDamage");

	ADunDefKraken_AdjustDamage_Params params;
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


// Function DunDefAtlantis.DunDefKraken.PlayRealHurtEffect
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDefKraken::PlayRealHurtEffect(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PlayRealHurtEffect");

	ADunDefKraken_PlayRealHurtEffect_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.NotifyTakeHit
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)

void ADunDefKraken::NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.NotifyTakeHit");

	ADunDefKraken_NotifyTakeHit_Params params;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.TakeDamage
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

void ADunDefKraken::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.TakeDamage");

	ADunDefKraken_TakeDamage_Params params;
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


// Function DunDefAtlantis.DunDefKraken.UpdateDifficultyValues
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned long                  UpdateMaterial                 (OptionalParm, Parm)
// unsigned long                  onlyDynamicValues              (OptionalParm, Parm)

void ADunDefKraken::UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.UpdateDifficultyValues");

	ADunDefKraken_UpdateDifficultyValues_Params params;
	params.UpdateMaterial = UpdateMaterial;
	params.onlyDynamicValues = onlyDynamicValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.SetMovementPhysics
// (Defined, Public)

void ADunDefKraken::SetMovementPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.SetMovementPhysics");

	ADunDefKraken_SetMovementPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.GetAttackPauseRate
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKraken::GetAttackPauseRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.GetAttackPauseRate");

	ADunDefKraken_GetAttackPauseRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKraken.InitTentacles
// (Defined, Simulated, Public)

void ADunDefKraken::InitTentacles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.InitTentacles");

	ADunDefKraken_InitTentacles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefKraken::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.PostBeginPlay");

	ADunDefKraken_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKraken.ExecReplicatedFunction
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

void ADunDefKraken::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.ExecReplicatedFunction");

	ADunDefKraken_ExecReplicatedFunction_Params params;
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


// Function DunDefAtlantis.DunDefKraken.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefKraken::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKraken.ReplicatedEvent");

	ADunDefKraken_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.ForceLineOfSight
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::ForceLineOfSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.ForceLineOfSight");

	AKrakenTentacle_ForceLineOfSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetLightningTowerDamagePercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AKrakenTentacle::GetLightningTowerDamagePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetLightningTowerDamagePercent");

	AKrakenTentacle_GetLightningTowerDamagePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.setIsWebbed
// (Defined, Public)
// Parameters:
// unsigned long                  isWebbed                       (Parm)

void AKrakenTentacle::setIsWebbed(unsigned long isWebbed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.setIsWebbed");

	AKrakenTentacle_setIsWebbed_Params params;
	params.isWebbed = isWebbed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.isWebbed
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::isWebbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.isWebbed");

	AKrakenTentacle_isWebbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetChainIgnore
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::GetChainIgnore()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetChainIgnore");

	AKrakenTentacle_GetChainIgnore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.SetChainIgnore
// (Defined, Public)
// Parameters:
// unsigned long                  ignore                         (Parm)

void AKrakenTentacle::SetChainIgnore(unsigned long ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.SetChainIgnore");

	AKrakenTentacle_SetChainIgnore_Params params;
	params.ignore = ignore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.IsBeingChainedBy
// (Defined, Public)
// Parameters:
// class ADunDefTower_ChainLightning* Tower                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::IsBeingChainedBy(class ADunDefTower_ChainLightning* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.IsBeingChainedBy");

	AKrakenTentacle_IsBeingChainedBy_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.RemoveFromChainingTowers
// (Defined, Public)
// Parameters:
// class ADunDefTower_ChainLightning* Tower                          (Parm)

void AKrakenTentacle::RemoveFromChainingTowers(class ADunDefTower_ChainLightning* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.RemoveFromChainingTowers");

	AKrakenTentacle_RemoveFromChainingTowers_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.AddToChainingTowers
// (Defined, Public)
// Parameters:
// class ADunDefTower_ChainLightning* Tower                          (Parm)

void AKrakenTentacle::AddToChainingTowers(class ADunDefTower_ChainLightning* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.AddToChainingTowers");

	AKrakenTentacle_AddToChainingTowers_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.AllowSuction
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::AllowSuction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.AllowSuction");

	AKrakenTentacle_AllowSuction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.ClientTakeRadiusDamage
// (Simulated, HasOptionalParms, Public)
// Parameters:
// class APawn*                   InstigatorPawn                 (Parm)
// float                          BaseDamage                     (Parm)
// float                          DamageRadius                   (Parm)
// class UClass*                  DamageType                     (Parm)
// float                          Momentum                       (Parm)
// struct FVector                 HurtOrigin                     (Parm)
// unsigned long                  bFullDamage                    (Parm)
// class AActor*                  DamageCauser                   (Parm)
// float                          DamageFalloffExponent          (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void AKrakenTentacle::ClientTakeRadiusDamage(class APawn* InstigatorPawn, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.ClientTakeRadiusDamage");

	AKrakenTentacle_ClientTakeRadiusDamage_Params params;
	params.InstigatorPawn = InstigatorPawn;
	params.BaseDamage = BaseDamage;
	params.DamageRadius = DamageRadius;
	params.DamageType = DamageType;
	params.Momentum = Momentum;
	params.HurtOrigin = HurtOrigin;
	params.bFullDamage = bFullDamage;
	params.DamageCauser = DamageCauser;
	params.DamageFalloffExponent = DamageFalloffExponent;
	params.WhatHitMe = WhatHitMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.ClientTakeDamage
// (Simulated, HasOptionalParms, Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// class APawn*                   InstigatorPawn                 (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)
// class UObject*                 WhatHitMe                      (OptionalParm, Parm)

void AKrakenTentacle::ClientTakeDamage(int DamageAmount, class APawn* InstigatorPawn, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.ClientTakeDamage");

	AKrakenTentacle_ClientTakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.InstigatorPawn = InstigatorPawn;
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


// Function DunDefAtlantis.KrakenTentacle.GetHealthPercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AKrakenTentacle::GetHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetHealthPercent");

	AKrakenTentacle_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.UpdateDamageFlashing
// (Defined, Simulated, Public)

void AKrakenTentacle::UpdateDamageFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.UpdateDamageFlashing");

	AKrakenTentacle_UpdateDamageFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.LocalTookDamage
// (Defined, Simulated, Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// struct FVector                 atPosition                     (Parm)
// class UClass*                  fromDamageType                 (Parm)

void AKrakenTentacle::LocalTookDamage(int DamageAmount, const struct FVector& atPosition, class UClass* fromDamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.LocalTookDamage");

	AKrakenTentacle_LocalTookDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.atPosition = atPosition;
	params.fromDamageType = fromDamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.HealPctOfMaxHealth
// (Defined, HasOptionalParms, Public)
// Parameters:
// float                          HealPct                        (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// unsigned long                  bShowFloatingNumbers           (OptionalParm, Parm)

void AKrakenTentacle::HealPctOfMaxHealth(float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.HealPctOfMaxHealth");

	AKrakenTentacle_HealPctOfMaxHealth_Params params;
	params.HealPct = HealPct;
	params.Healer = Healer;
	params.DamageType = DamageType;
	params.bShowFloatingNumbers = bShowFloatingNumbers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.ForceMoveActor
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Mover                          (Parm)
// struct FVector                 NewLoc                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::ForceMoveActor(class AActor* Mover, const struct FVector& NewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.ForceMoveActor");

	AKrakenTentacle_ForceMoveActor_Params params;
	params.Mover = Mover;
	params.NewLoc = NewLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetOverrideTargetComponent
// (Defined, Simulated, Public)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UPrimitiveComponent* AKrakenTentacle::GetOverrideTargetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetOverrideTargetComponent");

	AKrakenTentacle_GetOverrideTargetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.EncroachingOn
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.EncroachingOn");

	AKrakenTentacle_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.Bump
// (Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitNormal                      (Parm)

void AKrakenTentacle::Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.Bump");

	AKrakenTentacle_Bump_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AKrakenTentacle::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.Touch");

	AKrakenTentacle_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.SetDoDamageChecks
// (Defined, Public)
// Parameters:
// unsigned long                  bAllowDamage                   (Parm)

void AKrakenTentacle::SetDoDamageChecks(unsigned long bAllowDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.SetDoDamageChecks");

	AKrakenTentacle_SetDoDamageChecks_Params params;
	params.bAllowDamage = bAllowDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.GetHealth
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bGetMax                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AKrakenTentacle::GetHealth(unsigned long bGetMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetHealth");

	AKrakenTentacle_GetHealth_Params params;
	params.bGetMax = bGetMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetMass
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AKrakenTentacle::GetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetMass");

	AKrakenTentacle_GetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.AllowDarknessIgnorance
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::AllowDarknessIgnorance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.AllowDarknessIgnorance");

	AKrakenTentacle_AllowDarknessIgnorance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.ForceFriendlyFire
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Target                         (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::ForceFriendlyFire(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.ForceFriendlyFire");

	AKrakenTentacle_ForceFriendlyFire_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetInterpolatedTargetingLocation
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AKrakenTentacle::GetInterpolatedTargetingLocation(class AActor* RequestedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetInterpolatedTargetingLocation");

	AKrakenTentacle_GetInterpolatedTargetingLocation_Params params;
	params.RequestedBy = RequestedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetTargetingLocation
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AKrakenTentacle::GetTargetingLocation(class AActor* RequestedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetTargetingLocation");

	AKrakenTentacle_GetTargetingLocation_Params params;
	params.RequestedBy = RequestedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.OnDestroy_RemoveFromTargetableList
// (Public)

void AKrakenTentacle::OnDestroy_RemoveFromTargetableList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.OnDestroy_RemoveFromTargetableList");

	AKrakenTentacle_OnDestroy_RemoveFromTargetableList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.OnPostBeginPlay_AddToTargetableList
// (Public)

void AKrakenTentacle::OnPostBeginPlay_AddToTargetableList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.OnPostBeginPlay_AddToTargetableList");

	AKrakenTentacle_OnPostBeginPlay_AddToTargetableList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.UnregisterAttacker
// (Public)
// Parameters:
// class ADunDefEnemyController*  forController                  (Parm)

void AKrakenTentacle::UnregisterAttacker(class ADunDefEnemyController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.UnregisterAttacker");

	AKrakenTentacle_UnregisterAttacker_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.RegisterAttacker
// (Public)
// Parameters:
// class ADunDefEnemyController*  forController                  (Parm)

void AKrakenTentacle::RegisterAttacker(class ADunDefEnemyController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.RegisterAttacker");

	AKrakenTentacle_RegisterAttacker_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.GetAttackRangeOffset
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AKrakenTentacle::GetAttackRangeOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetAttackRangeOffset");

	AKrakenTentacle_GetAttackRangeOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.IgnoreFriendlyFireDamage
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TScriptInterface<class UDunDefTargetableInterface> instigatorActor                (Parm)
// class AController*             OptionalController             (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long AKrakenTentacle::IgnoreFriendlyFireDamage(const TScriptInterface<class UDunDefTargetableInterface>& instigatorActor, class AController* OptionalController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.IgnoreFriendlyFireDamage");

	AKrakenTentacle_IgnoreFriendlyFireDamage_Params params;
	params.instigatorActor = instigatorActor;
	params.OptionalController = OptionalController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetTargetingTeam
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AKrakenTentacle::GetTargetingTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetTargetingTeam");

	AKrakenTentacle_GetTargetingTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AKrakenTentacle::GetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetTowerTargetingDesirability");

	AKrakenTentacle_GetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.GetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class ADunDefPlayerController* forController                  (Parm)
// class ADunDefPlayer*           ForPlayer                      (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AKrakenTentacle::GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.GetPlayerTargetingDesirability");

	AKrakenTentacle_GetPlayerTargetingDesirability_Params params;
	params.forController = forController;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.KrakenTentacle.DecreaseHealth
// (Defined, Public)
// Parameters:
// int                            Amount                         (Parm)

void AKrakenTentacle::DecreaseHealth(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.DecreaseHealth");

	AKrakenTentacle_DecreaseHealth_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.ForceWithDraw
// (Defined, Public)

void AKrakenTentacle::ForceWithDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.ForceWithDraw");

	AKrakenTentacle_ForceWithDraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.LeaveShell
// (Defined, Public)

void AKrakenTentacle::LeaveShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.LeaveShell");

	AKrakenTentacle_LeaveShell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.WithdrawIntoShell
// (Defined, Public)

void AKrakenTentacle::WithdrawIntoShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.WithdrawIntoShell");

	AKrakenTentacle_WithdrawIntoShell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.TakeDamage
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

void AKrakenTentacle::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.TakeDamage");

	AKrakenTentacle_TakeDamage_Params params;
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


// Function DunDefAtlantis.KrakenTentacle.SetWithDrawTime
// (Defined, Public)
// Parameters:
// float                          ForceWithDraw                  (Parm)

void AKrakenTentacle::SetWithDrawTime(float ForceWithDraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.SetWithDrawTime");

	AKrakenTentacle_SetWithDrawTime_Params params;
	params.ForceWithDraw = ForceWithDraw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.SetUpMesh
// (Defined, Simulated, Public, HasDefaults)

void AKrakenTentacle::SetUpMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.SetUpMesh");

	AKrakenTentacle_SetUpMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.InitTentacle
// (Defined, Public)
// Parameters:
// class ADunDefKraken*           theKraken                      (Parm)
// struct FName                   BaseSocketName                 (Parm)
// float                          DifficultyHealthMultiplier     (Parm)

void AKrakenTentacle::InitTentacle(class ADunDefKraken* theKraken, const struct FName& BaseSocketName, float DifficultyHealthMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.InitTentacle");

	AKrakenTentacle_InitTentacle_Params params;
	params.theKraken = theKraken;
	params.BaseSocketName = BaseSocketName;
	params.DifficultyHealthMultiplier = DifficultyHealthMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AKrakenTentacle::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.PostBeginPlay");

	AKrakenTentacle_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.KrakenTentacle.ExecReplicatedFunction
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

void AKrakenTentacle::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.ExecReplicatedFunction");

	AKrakenTentacle_ExecReplicatedFunction_Params params;
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


// Function DunDefAtlantis.KrakenTentacle.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void AKrakenTentacle::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.KrakenTentacle.ReplicatedEvent");

	AKrakenTentacle_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.StopInkCloud
// (Defined, Public)

void ADunDefKrakenController::StopInkCloud()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.StopInkCloud");

	ADunDefKrakenController_StopInkCloud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.SpawnInkCloud
// (Defined, Public, HasDefaults)

void ADunDefKrakenController::SpawnInkCloud()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.SpawnInkCloud");

	ADunDefKrakenController_SpawnInkCloud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.SpawnGiantProjectile
// (Defined, Public, HasDefaults)

void ADunDefKrakenController::SpawnGiantProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.SpawnGiantProjectile");

	ADunDefKrakenController_SpawnGiantProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.SpawnRightTentacleProjectiles
// (Defined, Public, HasDefaults)

void ADunDefKrakenController::SpawnRightTentacleProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.SpawnRightTentacleProjectiles");

	ADunDefKrakenController_SpawnRightTentacleProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.SpawnLeftTentacleProjectiles
// (Defined, Public, HasDefaults)

void ADunDefKrakenController::SpawnLeftTentacleProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.SpawnLeftTentacleProjectiles");

	ADunDefKrakenController_SpawnLeftTentacleProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.GetValidShootTargets
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// TArray<class AActor*>          ActorList                      (Parm, OutParm, NeedCtorLink)
// float                          MinRange                       (Parm)
// float                          MaxRange                       (Parm)
// float                          angleCheck                     (OptionalParm, Parm)

void ADunDefKrakenController::GetValidShootTargets(float MinRange, float MaxRange, float angleCheck, TArray<class AActor*>* ActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.GetValidShootTargets");

	ADunDefKrakenController_GetValidShootTargets_Params params;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.angleCheck = angleCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
}


// Function DunDefAtlantis.DunDefKrakenController.CheckCustomOpenMouthAttacks
// (Defined, Public)

void ADunDefKrakenController::CheckCustomOpenMouthAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.CheckCustomOpenMouthAttacks");

	ADunDefKrakenController_CheckCustomOpenMouthAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomClosedMouthAttacks
// (Defined, Public)

void ADunDefKrakenController::CheckForCustomClosedMouthAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.CheckForCustomClosedMouthAttacks");

	ADunDefKrakenController_CheckForCustomClosedMouthAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomAttacks
// (Defined, Public)

void ADunDefKrakenController::CheckForCustomAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.CheckForCustomAttacks");

	ADunDefKrakenController_CheckForCustomAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.CloseMouth
// (Defined, Public)

void ADunDefKrakenController::CloseMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.CloseMouth");

	ADunDefKrakenController_CloseMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.NotifyTentacleBroughtOut
// (Defined, Public)

void ADunDefKrakenController::NotifyTentacleBroughtOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.NotifyTentacleBroughtOut");

	ADunDefKrakenController_NotifyTentacleBroughtOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.NotifyTentecaleWithDrawn
// (Defined, Public)

void ADunDefKrakenController::NotifyTentecaleWithDrawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.NotifyTentecaleWithDrawn");

	ADunDefKrakenController_NotifyTentecaleWithDrawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.HandleTentacleDamage
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  newHitTarg                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefKrakenController::HandleTentacleDamage(class AActor* newHitTarg, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.HandleTentacleDamage");

	ADunDefKrakenController_HandleTentacleDamage_Params params;
	params.newHitTarg = newHitTarg;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.EndDash
// (Defined, Public)

void ADunDefKrakenController::EndDash()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.EndDash");

	ADunDefKrakenController_EndDash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.UpdateDashPoint
// (Defined, Public, HasDefaults)

void ADunDefKrakenController::UpdateDashPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.UpdateDashPoint");

	ADunDefKrakenController_UpdateDashPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.AddToDashHurtList
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  DashedActor                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKrakenController::AddToDashHurtList(class AActor* DashedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.AddToDashHurtList");

	ADunDefKrakenController_AddToDashHurtList_Params params;
	params.DashedActor = DashedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.EndMeleeSwing
// (Defined, Public)

void ADunDefKrakenController::EndMeleeSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.EndMeleeSwing");

	ADunDefKrakenController_EndMeleeSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.BiteStart
// (Public)

void ADunDefKrakenController::BiteStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.BiteStart");

	ADunDefKrakenController_BiteStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.EndBite
// (Defined, Public)

void ADunDefKrakenController::EndBite()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.EndBite");

	ADunDefKrakenController_EndBite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.DoBiting
// (Defined, Public, HasDefaults)

void ADunDefKrakenController::DoBiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.DoBiting");

	ADunDefKrakenController_DoBiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.AddToSwingHurtList
// (Defined, Public)
// Parameters:
// class AActor*                  newEntry                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKrakenController::AddToSwingHurtList(class AActor* newEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.AddToSwingHurtList");

	ADunDefKrakenController_AddToSwingHurtList_Params params;
	params.newEntry = newEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.ShouldDamage
// (Defined, Public)
// Parameters:
// class AActor*                  act                            (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKrakenController::ShouldDamage(class AActor* act)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.ShouldDamage");

	ADunDefKrakenController_ShouldDamage_Params params;
	params.act = act;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.DoAttack
// (Defined, Public)

void ADunDefKrakenController::DoAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.DoAttack");

	ADunDefKrakenController_DoAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefKrakenController.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// unsigned long                  bAllowPartialPath              (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefKrakenController::GeneratePathToActor(class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.GeneratePathToActor");

	ADunDefKrakenController_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.MoveAroundBlockade
// (HasOptionalParms, Public)
// Parameters:
// class AActor*                  blockadeActor                  (Parm)
// float                          BlockadeWidth                  (Parm)
// struct FVector                 HitNormal                      (Parm)
// unsigned long                  SkipBlockingCheck              (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKrakenController::MoveAroundBlockade(class AActor* blockadeActor, float BlockadeWidth, const struct FVector& HitNormal, unsigned long SkipBlockingCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.MoveAroundBlockade");

	ADunDefKrakenController_MoveAroundBlockade_Params params;
	params.blockadeActor = blockadeActor;
	params.BlockadeWidth = BlockadeWidth;
	params.HitNormal = HitNormal;
	params.SkipBlockingCheck = SkipBlockingCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.NavActorReachable
// (Defined, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKrakenController::NavActorReachable(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.NavActorReachable");

	ADunDefKrakenController_NavActorReachable_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.FindNearestNavPointTo
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// unsigned long                  bCheckVisible                  (OptionalParm, Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* ADunDefKrakenController::FindNearestNavPointTo(class AActor* A, unsigned long bCheckVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.FindNearestNavPointTo");

	ADunDefKrakenController_FindNearestNavPointTo_Params params;
	params.A = A;
	params.bCheckVisible = bCheckVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.GetAttackRange
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefKrakenController::GetAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.GetAttackRange");

	ADunDefKrakenController_GetAttackRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.ForceTentacleAttack
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKrakenController::ForceTentacleAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.ForceTentacleAttack");

	ADunDefKrakenController_ForceTentacleAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.WantsHurtAnimation
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefKrakenController::WantsHurtAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.WantsHurtAnimation");

	ADunDefKrakenController_WantsHurtAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefKrakenController.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefKrakenController::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.NotifyTakeHitEX");

	ADunDefKrakenController_NotifyTakeHitEX_Params params;
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


// Function DunDefAtlantis.DunDefKrakenController.Possess
// (Defined, Event, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)
// unsigned long                  bVehicleTransition             (Parm)

void ADunDefKrakenController::Possess(class APawn* inPawn, unsigned long bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefKrakenController.Possess");

	ADunDefKrakenController_Possess_Params params;
	params.inPawn = inPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.IsCurrentlyPlayingAttackAnimation
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSharkMan::IsCurrentlyPlayingAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.IsCurrentlyPlayingAttackAnimation");

	ADunDefSharkMan_IsCurrentlyPlayingAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefSharkMan::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHitEX");

	ADunDefSharkMan_NotifyTakeHitEX_Params params;
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


// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHit
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)

void ADunDefSharkMan::NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHit");

	ADunDefSharkMan_NotifyTakeHit_Params params;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.ClearChargeHurtList
// (Defined, Public)

void ADunDefSharkMan::ClearChargeHurtList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.ClearChargeHurtList");

	ADunDefSharkMan_ClearChargeHurtList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.AddToChargeHurtList
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           Player                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSharkMan::AddToChargeHurtList(class ADunDefPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.AddToChargeHurtList");

	ADunDefSharkMan_AddToChargeHurtList_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.EndCharging
// (Defined, Simulated, Public)

void ADunDefSharkMan::EndCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.EndCharging");

	ADunDefSharkMan_EndCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.SetChargingSpeed
// (Defined, Public)

void ADunDefSharkMan::SetChargingSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.SetChargingSpeed");

	ADunDefSharkMan_SetChargingSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.CheckForEncroachers
// (Defined, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefSharkMan::CheckForEncroachers(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.CheckForEncroachers");

	ADunDefSharkMan_CheckForEncroachers_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAbortAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::PlaySharkManChargeAbortAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAbortAnimation");

	ADunDefSharkMan_PlaySharkManChargeAbortAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManHitWallAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::PlaySharkManHitWallAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlaySharkManHitWallAnimation");

	ADunDefSharkMan_PlaySharkManHitWallAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeFailAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::PlaySharkManChargeFailAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeFailAnimation");

	ADunDefSharkMan_PlaySharkManChargeFailAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.StopSharkManDizzyAnimation
// (Defined, Simulated, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSharkMan::StopSharkManDizzyAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.StopSharkManDizzyAnimation");

	ADunDefSharkMan_StopSharkManDizzyAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManDizzyAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::PlaySharkManDizzyAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlaySharkManDizzyAnimation");

	ADunDefSharkMan_PlaySharkManDizzyAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::PlaySharkManChargeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAnimation");

	ADunDefSharkMan_PlaySharkManChargeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManWindupAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::PlaySharkManWindupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlaySharkManWindupAnimation");

	ADunDefSharkMan_PlaySharkManWindupAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefSharkMan::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.Tick");

	ADunDefSharkMan_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.HandleMomentum
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Momentum                       (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)

void ADunDefSharkMan::HandleMomentum(const struct FVector& Momentum, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.HandleMomentum");

	ADunDefSharkMan_HandleMomentum_Params params;
	params.Momentum = Momentum;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.SetSharkManArmBlend
// (Simulated, Public)
// Parameters:
// int                            animAmount                     (Parm)

void ADunDefSharkMan::SetSharkManArmBlend(int animAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.SetSharkManArmBlend");

	ADunDefSharkMan_SetSharkManArmBlend_Params params;
	params.animAmount = animAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManAttackAnimation
// (Defined, Simulated, Public)
// Parameters:
// int                            AnimationIndex                 (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::PlaySharkManAttackAnimation(int AnimationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlaySharkManAttackAnimation");

	ADunDefSharkMan_PlaySharkManAttackAnimation_Params params;
	params.AnimationIndex = AnimationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.PlayHurtAnimation
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDefSharkMan::PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlayHurtAnimation");

	ADunDefSharkMan_PlayHurtAnimation_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.PlayAttackAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::PlayAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PlayAttackAnimation");

	ADunDefSharkMan_PlayAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.GetEnemyTargetingDesirability
// (Defined, Event, Public)
// Parameters:
// class AEngineNativeDunDefAIController* forController                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.GetEnemyTargetingDesirability");

	ADunDefSharkMan_GetEnemyTargetingDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.GetTowerTargetingDesirability
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefTower*            forTower                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkMan::GetTowerTargetingDesirability(class ADunDefTower* forTower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.GetTowerTargetingDesirability");

	ADunDefSharkMan_GetTowerTargetingDesirability_Params params;
	params.forTower = forTower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.GetMeleeSwingLocation
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefSharkMan::GetMeleeSwingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.GetMeleeSwingLocation");

	ADunDefSharkMan_GetMeleeSwingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.GetMeleeElbowLocation
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EFist>             fist                           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefSharkMan::GetMeleeElbowLocation(TEnumAsByte<EFist> fist)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.GetMeleeElbowLocation");

	ADunDefSharkMan_GetMeleeElbowLocation_Params params;
	params.fist = fist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.GetMeleeFistLocation
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EFist>             fist                           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ADunDefSharkMan::GetMeleeFistLocation(TEnumAsByte<EFist> fist)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.GetMeleeFistLocation");

	ADunDefSharkMan_GetMeleeFistLocation_Params params;
	params.fist = fist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkMan.GroundStrike
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDefSharkMan::GroundStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.GroundStrike");

	ADunDefSharkMan_GroundStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.MeleeBothEnd
// (Defined, Event, Public)

void ADunDefSharkMan::MeleeBothEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.MeleeBothEnd");

	ADunDefSharkMan_MeleeBothEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.MeleeBothStart
// (Defined, Event, Public)

void ADunDefSharkMan::MeleeBothStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.MeleeBothStart");

	ADunDefSharkMan_MeleeBothStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.MeleeRightEnd
// (Defined, Event, Public)

void ADunDefSharkMan::MeleeRightEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.MeleeRightEnd");

	ADunDefSharkMan_MeleeRightEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.MeleeRightStart
// (Defined, Event, Public)

void ADunDefSharkMan::MeleeRightStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.MeleeRightStart");

	ADunDefSharkMan_MeleeRightStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftEnd
// (Defined, Event, Public)

void ADunDefSharkMan::MeleeLeftEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.MeleeLeftEnd");

	ADunDefSharkMan_MeleeLeftEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftStart
// (Defined, Event, Public)

void ADunDefSharkMan::MeleeLeftStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.MeleeLeftStart");

	ADunDefSharkMan_MeleeLeftStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkMan.ExecReplicatedFunction
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

void ADunDefSharkMan::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.ExecReplicatedFunction");

	ADunDefSharkMan_ExecReplicatedFunction_Params params;
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


// Function DunDefAtlantis.DunDefSharkMan.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefSharkMan::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkMan.PostBeginPlay");

	ADunDefSharkMan_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkmanController.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefSharkmanController::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.NotifyTakeHitEX");

	ADunDefSharkmanController_NotifyTakeHitEX_Params params;
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


// Function DunDefAtlantis.DunDefSharkmanController.AbortCharge
// (Defined, Public)

void ADunDefSharkmanController::AbortCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.AbortCharge");

	ADunDefSharkmanController_AbortCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkmanController.CheckTowerViability
// (Defined, Public)
// Parameters:
// class ADunDefTower*            Tower                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkmanController::CheckTowerViability(class ADunDefTower* Tower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.CheckTowerViability");

	ADunDefSharkmanController_CheckTowerViability_Params params;
	params.Tower = Tower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkmanController.CheckForCustomAttacks
// (Defined, Public)

void ADunDefSharkmanController::CheckForCustomAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.CheckForCustomAttacks");

	ADunDefSharkmanController_CheckForCustomAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkmanController.GetReachCheckDuration
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefSharkmanController::GetReachCheckDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.GetReachCheckDuration");

	ADunDefSharkmanController_GetReachCheckDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkmanController.DoPositionPoll
// (Defined, Public)

void ADunDefSharkmanController::DoPositionPoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.DoPositionPoll");

	ADunDefSharkmanController_DoPositionPoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkmanController.IsWinding
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSharkmanController::IsWinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.IsWinding");

	ADunDefSharkmanController_IsWinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkmanController.IsDistractedByCore
// (Defined, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSharkmanController::IsDistractedByCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.IsDistractedByCore");

	ADunDefSharkmanController_IsDistractedByCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToTowers
// (Defined, Public)
// Parameters:
// float                          Radius                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSharkmanController::IsCloseToTowers(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.IsCloseToTowers");

	ADunDefSharkmanController_IsCloseToTowers_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToPlayers
// (Defined, Public)
// Parameters:
// float                          Radius                         (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSharkmanController::IsCloseToPlayers(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.IsCloseToPlayers");

	ADunDefSharkmanController_IsCloseToPlayers_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkmanController.AddToSwingHurtList
// (Defined, Public)
// Parameters:
// class AActor*                  newEntry                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long ADunDefSharkmanController::AddToSwingHurtList(class AActor* newEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.AddToSwingHurtList");

	ADunDefSharkmanController_AddToSwingHurtList_Params params;
	params.newEntry = newEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.DunDefSharkmanController.EndMeleeSwing
// (Defined, Public)
// Parameters:
// TEnumAsByte<EFist>             fist                           (Parm)

void ADunDefSharkmanController::EndMeleeSwing(TEnumAsByte<EFist> fist)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.EndMeleeSwing");

	ADunDefSharkmanController_EndMeleeSwing_Params params;
	params.fist = fist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.DunDefSharkmanController.StartMeleeSwing
// (Public)
// Parameters:
// TEnumAsByte<EFist>             fist                           (Parm)

void ADunDefSharkmanController::StartMeleeSwing(TEnumAsByte<EFist> fist)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.DunDefSharkmanController.StartMeleeSwing");

	ADunDefSharkmanController_StartMeleeSwing_Params params;
	params.fist = fist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.ScaleColor
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long APuzzlePieceActor::ScaleColor(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.ScaleColor");

	APuzzlePieceActor_ScaleColor_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefAtlantis.PuzzlePieceActor.TurnOnStartEmitter
// (Defined, Simulated, Public)

void APuzzlePieceActor::TurnOnStartEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.TurnOnStartEmitter");

	APuzzlePieceActor_TurnOnStartEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.PlayDemoEmitter
// (Defined, Simulated, Public)

void APuzzlePieceActor::PlayDemoEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.PlayDemoEmitter");

	APuzzlePieceActor_PlayDemoEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.ShutOffVFX
// (Defined, Simulated, Public)
// Parameters:
// float                          lerpScale                      (Parm)

void APuzzlePieceActor::ShutOffVFX(float lerpScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.ShutOffVFX");

	APuzzlePieceActor_ShutOffVFX_Params params;
	params.lerpScale = lerpScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.SetColorLerp
// (Defined, Simulated, Public)
// Parameters:
// struct FLinearColor            NewColor                       (Parm)
// unsigned long                  bShouldScaleBack               (Parm)
// float                          lerpScale                      (Parm)

void APuzzlePieceActor::SetColorLerp(const struct FLinearColor& NewColor, unsigned long bShouldScaleBack, float lerpScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.SetColorLerp");

	APuzzlePieceActor_SetColorLerp_Params params;
	params.NewColor = NewColor;
	params.bShouldScaleBack = bShouldScaleBack;
	params.lerpScale = lerpScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.PlayPuzzleCompletedVFX
// (Defined, Simulated, Public)

void APuzzlePieceActor::PlayPuzzleCompletedVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.PlayPuzzleCompletedVFX");

	APuzzlePieceActor_PlayPuzzleCompletedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.PlayFailedVFX
// (Defined, Simulated, Public)

void APuzzlePieceActor::PlayFailedVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.PlayFailedVFX");

	APuzzlePieceActor_PlayFailedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.SetValidDeactivation
// (Defined, Simulated, Public)

void APuzzlePieceActor::SetValidDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.SetValidDeactivation");

	APuzzlePieceActor_SetValidDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.SetValidTouching
// (Defined, Simulated, Public)

void APuzzlePieceActor::SetValidTouching()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.SetValidTouching");

	APuzzlePieceActor_SetValidTouching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.Bump
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitNormal                      (Parm)

void APuzzlePieceActor::Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.Bump");

	APuzzlePieceActor_Bump_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void APuzzlePieceActor::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.Touch");

	APuzzlePieceActor_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.SetMyPuzzleRoom
// (Defined, Public)
// Parameters:
// class APuzzleRoomActor*        newPuzzleRoom                  (Parm)

void APuzzlePieceActor::SetMyPuzzleRoom(class APuzzleRoomActor* newPuzzleRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.SetMyPuzzleRoom");

	APuzzlePieceActor_SetMyPuzzleRoom_Params params;
	params.newPuzzleRoom = newPuzzleRoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.PuzzlePieceActor.PostBeginPlay
// (Defined, Simulated, Event, Public)

void APuzzlePieceActor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.PuzzlePieceActor.PostBeginPlay");

	APuzzlePieceActor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.RaisingWaterVolume.OnModifyProperty
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// class USeqAct_ModifyProperty*  Action                         (Parm)

void ARaisingWaterVolume::OnModifyProperty(class USeqAct_ModifyProperty* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.RaisingWaterVolume.OnModifyProperty");

	ARaisingWaterVolume_OnModifyProperty_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.RaisingWaterVolume.ClearPawnFXOverrides
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPawn*             thePawn                        (Parm)

void ARaisingWaterVolume::ClearPawnFXOverrides(class ADunDefPawn* thePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.RaisingWaterVolume.ClearPawnFXOverrides");

	ARaisingWaterVolume_ClearPawnFXOverrides_Params params;
	params.thePawn = thePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.RaisingWaterVolume.SetPawnFXOverrides
// (Defined, Simulated, Public)
// Parameters:
// class ADunDefPawn*             thePawn                        (Parm)

void ARaisingWaterVolume::SetPawnFXOverrides(class ADunDefPawn* thePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.RaisingWaterVolume.SetPawnFXOverrides");

	ARaisingWaterVolume_SetPawnFXOverrides_Params params;
	params.thePawn = thePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.RaisingWaterVolume.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ARaisingWaterVolume::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.RaisingWaterVolume.Tick");

	ARaisingWaterVolume_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.RaisingWaterVolume.ClearAirControl
// (Defined, Public)

void ARaisingWaterVolume::ClearAirControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.RaisingWaterVolume.ClearAirControl");

	ARaisingWaterVolume_ClearAirControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.RaisingWaterVolume.UnTouch
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  Other                          (Parm)

void ARaisingWaterVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.RaisingWaterVolume.UnTouch");

	ARaisingWaterVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.RaisingWaterVolume.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ARaisingWaterVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.RaisingWaterVolume.Touch");

	ARaisingWaterVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefAtlantis.RaisingWaterVolume.ExecReplicatedFunction
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

void ARaisingWaterVolume::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefAtlantis.RaisingWaterVolume.ExecReplicatedFunction");

	ARaisingWaterVolume_ExecReplicatedFunction_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
