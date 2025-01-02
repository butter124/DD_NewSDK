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

// Function CDT.DunDefHarbinger.FireAttackShootRight
// (Defined, Simulated, Event, Public)

void ADunDefHarbinger::FireAttackShootRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.FireAttackShootRight");

	ADunDefHarbinger_FireAttackShootRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbinger.FireAttackShootLeft
// (Defined, Simulated, Event, Public)

void ADunDefHarbinger::FireAttackShootLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.FireAttackShootLeft");

	ADunDefHarbinger_FireAttackShootLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbinger.FireAttackBegin
// (Defined, Simulated, Event, Public)

void ADunDefHarbinger::FireAttackBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.FireAttackBegin");

	ADunDefHarbinger_FireAttackBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbinger.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefHarbinger::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.PostBeginPlay");

	ADunDefHarbinger_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbinger.GetProjectileSpawnTransformation
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FName                   socketToUse                    (Parm)
// struct FVector                 Position                       (Parm, OutParm)
// struct FRotator                Orientation                    (Parm, OutParm)

void ADunDefHarbinger::GetProjectileSpawnTransformation(const struct FName& socketToUse, struct FVector* Position, struct FRotator* Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.GetProjectileSpawnTransformation");

	ADunDefHarbinger_GetProjectileSpawnTransformation_Params params;
	params.socketToUse = socketToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
}


// Function CDT.DunDefHarbinger.IsCurrentlyPlayingAttackAnimation
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefHarbinger::IsCurrentlyPlayingAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.IsCurrentlyPlayingAttackAnimation");

	ADunDefHarbinger_IsCurrentlyPlayingAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT.DunDefHarbinger.PlayShootFireAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefHarbinger::PlayShootFireAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.PlayShootFireAnimation");

	ADunDefHarbinger_PlayShootFireAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT.DunDefHarbinger.IsCurrentlyPlayingChargeAnimation
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefHarbinger::IsCurrentlyPlayingChargeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.IsCurrentlyPlayingChargeAnimation");

	ADunDefHarbinger_IsCurrentlyPlayingChargeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT.DunDefHarbinger.PlayChargeFireAnimation
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefHarbinger::PlayChargeFireAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.PlayChargeFireAnimation");

	ADunDefHarbinger_PlayChargeFireAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CDT.DunDefHarbinger.PlayHurtAnimation
// (Simulated, Public)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void ADunDefHarbinger::PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.PlayHurtAnimation");

	ADunDefHarbinger_PlayHurtAnimation_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbinger.PlayJumpAnimation
// (Simulated, Public)

void ADunDefHarbinger::PlayJumpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.PlayJumpAnimation");

	ADunDefHarbinger_PlayJumpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbinger.ExecReplicatedFunction
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

void ADunDefHarbinger::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbinger.ExecReplicatedFunction");

	ADunDefHarbinger_ExecReplicatedFunction_Params params;
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


// Function CDT.DunDefHarbingerController.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ADunDefHarbingerController::PawnDied(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbingerController.PawnDied");

	ADunDefHarbingerController_PawnDied_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbingerController.CheckPlayer
// (Defined, Public)
// Parameters:
// class ADunDefPlayer*           aPlayer                        (Parm)

void ADunDefHarbingerController::CheckPlayer(class ADunDefPlayer* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbingerController.CheckPlayer");

	ADunDefHarbingerController_CheckPlayer_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbingerController.CheckForNearbyPlayers
// (Defined, Public)

void ADunDefHarbingerController::CheckForNearbyPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbingerController.CheckForNearbyPlayers");

	ADunDefHarbingerController_CheckForNearbyPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbingerController.ObstructionJump
// (Public)
// Parameters:
// struct FVector                 jumpForwardDir                 (Parm)
// struct FVector                 jumpSideDir                    (Parm)

void ADunDefHarbingerController::ObstructionJump(const struct FVector& jumpForwardDir, const struct FVector& jumpSideDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbingerController.ObstructionJump");

	ADunDefHarbingerController_ObstructionJump_Params params;
	params.jumpForwardDir = jumpForwardDir;
	params.jumpSideDir = jumpSideDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbingerController.NotifyTakeHitEX
// (Defined, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// class AActor*                  DamageCauser                   (Parm)

void ADunDefHarbingerController::NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbingerController.NotifyTakeHitEX");

	ADunDefHarbingerController_NotifyTakeHitEX_Params params;
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


// Function CDT.DunDefHarbingerController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefHarbingerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbingerController.PostBeginPlay");

	ADunDefHarbingerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDT.DunDefHarbingerController.FireProjectiles
// (Public)
// Parameters:
// struct FName                   socketToUse                    (Parm)

void ADunDefHarbingerController::FireProjectiles(const struct FName& socketToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT.DunDefHarbingerController.FireProjectiles");

	ADunDefHarbingerController_FireProjectiles_Params params;
	params.socketToUse = socketToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
