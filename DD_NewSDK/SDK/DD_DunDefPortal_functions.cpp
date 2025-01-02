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

// Function DunDefPortal.DunDefPortalNode.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPortalNode::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.PostBeginPlay");

	ADunDefPortalNode_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefPortalNode::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.Tick");

	ADunDefPortalNode_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.AllowSpawn
// (Defined, Event, Static, Public)
// Parameters:
// class AActor*                  theArchetype                   (Parm)
// struct FVector                 theLoc                         (Parm)
// struct FRotator                theRot                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefPortalNode::STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.AllowSpawn");

	ADunDefPortalNode_AllowSpawn_Params params;
	params.theArchetype = theArchetype;
	params.theLoc = theLoc;
	params.theRot = theRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefPortalNode.FadeOut
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          theLightFadeOutTime            (OptionalParm, Parm)

void ADunDefPortalNode::FadeOut(float theLightFadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.FadeOut");

	ADunDefPortalNode_FadeOut_Params params;
	params.theLightFadeOutTime = theLightFadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.Touch
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ADunDefPortalNode::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.Touch");

	ADunDefPortalNode_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.ExecReplicatedFunction
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

void ADunDefPortalNode::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.ExecReplicatedFunction");

	ADunDefPortalNode_ExecReplicatedFunction_Params params;
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


// Function DunDefPortal.DunDefPortalNode.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ADunDefPortalNode::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.ReplicatedEvent");

	ADunDefPortalNode_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.HitBlockingVolume
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FVector                 End                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefWeapon_PortalGun::HitBlockingVolume(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.HitBlockingVolume");

	ADunDefWeapon_PortalGun_HitBlockingVolume_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.IsInAnyPortalBlockingVolume
// (Defined, Public)
// Parameters:
// struct FVector                 aPoint                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefWeapon_PortalGun::IsInAnyPortalBlockingVolume(const struct FVector& aPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.IsInAnyPortalBlockingVolume");

	ADunDefWeapon_PortalGun_IsInAnyPortalBlockingVolume_Params params;
	params.aPoint = aPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.Tick
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ADunDefWeapon_PortalGun::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.Tick");

	ADunDefWeapon_PortalGun_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetReloadingColors
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FLinearColor            BarColor                       (Parm, OutParm)
// struct FLinearColor            TextColor                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefWeapon_PortalGun::GetReloadingColors(struct FLinearColor* BarColor, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetReloadingColors");

	ADunDefWeapon_PortalGun_GetReloadingColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BarColor != nullptr)
		*BarColor = params.BarColor;
	if (TextColor != nullptr)
		*TextColor = params.TextColor;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.HasBothPortals
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefWeapon_PortalGun::HasBothPortals()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.HasBothPortals");

	ADunDefWeapon_PortalGun_HasBothPortals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.ClearPortal
// (Defined, Public)
// Parameters:
// int                            portalIndex                    (Parm)

void ADunDefWeapon_PortalGun::ClearPortal(int portalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.ClearPortal");

	ADunDefWeapon_PortalGun_ClearPortal_Params params;
	params.portalIndex = portalIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefWeapon_PortalGun::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.Destroyed");

	ADunDefWeapon_PortalGun_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.DetachWeapon
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::DetachWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.DetachWeapon");

	ADunDefWeapon_PortalGun_DetachWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.HolderDied
// (Defined, Public)

void ADunDefWeapon_PortalGun::HolderDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.HolderDied");

	ADunDefWeapon_PortalGun_HolderDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.CustomFire
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// int                            theFireMode                    (Parm)

void ADunDefWeapon_PortalGun::CustomFire(int theFireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.CustomFire");

	ADunDefWeapon_PortalGun_CustomFire_Params params;
	params.theFireMode = theFireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.ShootProjectiles
// (Simulated, HasOptionalParms, Public)
// Parameters:
// int                            theFireMode                    (OptionalParm, Parm)

void ADunDefWeapon_PortalGun::ShootProjectiles(int theFireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.ShootProjectiles");

	ADunDefWeapon_PortalGun_ShootProjectiles_Params params;
	params.theFireMode = theFireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.HasAnyAmmo
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefWeapon_PortalGun::HasAnyAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.HasAnyAmmo");

	ADunDefWeapon_PortalGun_HasAnyAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.BeginFire
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void ADunDefWeapon_PortalGun::BeginFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.BeginFire");

	ADunDefWeapon_PortalGun_BeginFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetSiblingPortal
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class ADunDefPortalNode*       aPortal                        (Parm)
// class ADunDefPortalNode*       aSibling                       (OptionalParm, Parm, OutParm)
// class UTextureRenderTarget2D*  portalTextureTarget            (OptionalParm, Parm, OutParm)
// class ADunDefPortalNode*       ReturnValue                    (Parm, OutParm, ReturnParm)

class ADunDefPortalNode* ADunDefWeapon_PortalGun::GetSiblingPortal(class ADunDefPortalNode* aPortal, class ADunDefPortalNode** aSibling, class UTextureRenderTarget2D** portalTextureTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetSiblingPortal");

	ADunDefWeapon_PortalGun_GetSiblingPortal_Params params;
	params.aPortal = aPortal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (aSibling != nullptr)
		*aSibling = params.aSibling;
	if (portalTextureTarget != nullptr)
		*portalTextureTarget = params.portalTextureTarget;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefWeapon_PortalGun::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.PostBeginPlay");

	ADunDefWeapon_PortalGun_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.PlayCancelAnimation
// (Defined, Simulated, Public)
// Parameters:
// bool                           bIsPrimary                     (Parm)

void ADunDefWeapon_PortalGun::PlayCancelAnimation(bool bIsPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.PlayCancelAnimation");

	ADunDefWeapon_PortalGun_PlayCancelAnimation_Params params;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.PlayedShootAnimation
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// bool                           isBigShot                      (OptionalParm, Parm)

void ADunDefWeapon_PortalGun::PlayedShootAnimation(bool isBigShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.PlayedShootAnimation");

	ADunDefWeapon_PortalGun_PlayedShootAnimation_Params params;
	params.isBigShot = isBigShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetTotalAmmo
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefWeapon_PortalGun::GetTotalAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetTotalAmmo");

	ADunDefWeapon_PortalGun_GetTotalAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetMaxAmmo
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefWeapon_PortalGun::GetMaxAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetMaxAmmo");

	ADunDefWeapon_PortalGun_GetMaxAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmo
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ADunDefWeapon_PortalGun::GetAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmo");

	ADunDefWeapon_PortalGun_GetAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmoPercent
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ADunDefWeapon_PortalGun::GetAmmoPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmoPercent");

	ADunDefWeapon_PortalGun_GetAmmoPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.UsesAmmo
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADunDefWeapon_PortalGun::UsesAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.UsesAmmo");

	ADunDefWeapon_PortalGun_UsesAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.ExecReplicatedFunction
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

void ADunDefWeapon_PortalGun::ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.ExecReplicatedFunction");

	ADunDefWeapon_PortalGun_ExecReplicatedFunction_Params params;
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
