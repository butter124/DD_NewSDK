#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DunDefSpecial.DunDefBuff_Harbinger.DeactivateBuff
struct UDunDefBuff_Harbinger_DeactivateBuff_Params
{
};

// Function DunDefSpecial.DunDefBuff_Harbinger.BuffEffect
struct UDunDefBuff_Harbinger_BuffEffect_Params
{
};

// Function DunDefSpecial.DunDefBuff_Harbinger.Tick
struct UDunDefBuff_Harbinger_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefBuff_Harbinger.Initialize
struct UDunDefBuff_Harbinger_Initialize_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateBuffValues
struct ADunDefTower_SummonEnemy_UpdateBuffValues_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAttackDamage
struct ADunDefTower_SummonEnemy_GetAttackDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnDefaultBuffs
struct ADunDefTower_SummonEnemy_SpawnDefaultBuffs_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ClientDisableMovementReplication
struct ADunDefTower_SummonEnemy_ClientDisableMovementReplication_Params
{
	struct FVector                                     endedLoc;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.TransferTowerOwnership
struct ADunDefTower_SummonEnemy_TransferTowerOwnership_Params
{
	class APawn*                                       toPawn;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ForceSingleMove
struct ADunDefTower_SummonEnemy_ForceSingleMove_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm)
	struct FRotator                                    NewRot;                                                   // (Parm)
	unsigned long                                      bShouldCollideWorld;                                      // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ForceMoveActor
struct ADunDefTower_SummonEnemy_ForceMoveActor_Params
{
	class AActor*                                      Mover;                                                    // (Parm)
	struct FVector                                     NewLoc;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateAggroActor
struct ADunDefTower_SummonEnemy_GetAlternateAggroActor_Params
{
	TScriptInterface<class UDunDefTargetableInterface> AltActor;                                                 // (Parm, OutParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetPlayerTargetingDesirability
struct ADunDefTower_SummonEnemy_GetPlayerTargetingDesirability_Params
{
	class ADunDefPlayerController*                     forController;                                            // (Parm)
	class ADunDefPlayer*                               ForPlayer;                                                // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetTowerTargetingDesirability
struct ADunDefTower_SummonEnemy_GetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetEnemyTargetingDesirability
struct ADunDefTower_SummonEnemy_GetEnemyTargetingDesirability_Params
{
	class AEngineNativeDunDefAIController*             forController;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawToolTip
struct ADunDefTower_SummonEnemy_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	int                                                PosX;                                                     // (Parm)
	int                                                PosY;                                                     // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawTowerToolTipStats
struct ADunDefTower_SummonEnemy_DrawTowerToolTipStats_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              PosX;                                                     // (Parm, OutParm)
	float                                              PosY;                                                     // (Parm, OutParm)
	float                                              Opacity;                                                  // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	float                                              canvasScale;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostString
struct ADunDefTower_SummonEnemy_GetBoostString_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostedTargets
struct ADunDefTower_SummonEnemy_GetBoostedTargets_Params
{
	TArray<class APawn*>                               boostedTargets;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.NotifyOfBoostedRemoval
struct ADunDefTower_SummonEnemy_NotifyOfBoostedRemoval_Params
{
	class APawn*                                       removedBoostee;                                           // (Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipStatValue
struct ADunDefTower_SummonEnemy_GetToolTipStatValue_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetPawnBoostAmount
struct ADunDefTower_SummonEnemy_GetPawnBoostAmount_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HasPawnBoostingType
struct ADunDefTower_SummonEnemy_HasPawnBoostingType_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.TakeDamage
struct ADunDefTower_SummonEnemy_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateActor
struct ADunDefTower_SummonEnemy_GetAlternateActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealth
struct ADunDefTower_SummonEnemy_GetHealth_Params
{
	unsigned long                                      bGetMax;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HealDamage
struct ADunDefTower_SummonEnemy_HealDamage_Params
{
	int                                                Amount;                                                   // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.AddHealth
struct ADunDefTower_SummonEnemy_AddHealth_Params
{
	int                                                howMuch;                                                  // (Parm)
	unsigned long                                      bDontDisplayFloatingNumber;                               // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealthPercent
struct ADunDefTower_SummonEnemy_GetHealthPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.StartRepair
struct ADunDefTower_SummonEnemy_StartRepair_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipText
struct ADunDefTower_SummonEnemy_GetToolTipText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ScaleForHeroModifiers
struct ADunDefTower_SummonEnemy_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawMyHUD
struct ADunDefTower_SummonEnemy_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateCommand
struct ADunDefTower_SummonEnemy_UpdateCommand_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HandleCommand
struct ADunDefTower_SummonEnemy_HandleCommand_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	TEnumAsByte<ESummonedCommand>                      NewCommand;                                               // (Parm)
	struct FVector                                     commandPoint;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetCommand
struct ADunDefTower_SummonEnemy_SetCommand_Params
{
	struct FVector                                     commandPoint;                                             // (Parm)
	TEnumAsByte<ESummonedCommand>                      NewCommand;                                               // (Parm)
	class AActor*                                      commandInstigator;                                        // (Parm)
	class AActor*                                      targetedActor;                                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetSelected
struct ADunDefTower_SummonEnemy_SetSelected_Params
{
	unsigned long                                      bWantsSelected;                                           // (Parm)
	class AActor*                                      selectingActor;                                           // (Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetPendingSelection
struct ADunDefTower_SummonEnemy_SetPendingSelection_Params
{
	unsigned long                                      bIsPending;                                               // (Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.CleanUpSummon
struct ADunDefTower_SummonEnemy_CleanUpSummon_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.Destroyed
struct ADunDefTower_SummonEnemy_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.BaseChange
struct ADunDefTower_SummonEnemy_BaseChange_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetUpEnemyValues
struct ADunDefTower_SummonEnemy_SetUpEnemyValues_Params
{
	unsigned long                                      bInitialSetup;                                            // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnMyEnemy
struct ADunDefTower_SummonEnemy_SpawnMyEnemy_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.InitializeForInstigator
struct ADunDefTower_SummonEnemy_InitializeForInstigator_Params
{
	class APawn*                                       Pawn;                                                     // (Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetLastDamageTime
struct ADunDefTower_SummonEnemy_GetLastDamageTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HasBeenRendered
struct ADunDefTower_SummonEnemy_HasBeenRendered_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateEnemyCollisionValues
struct ADunDefTower_SummonEnemy_UpdateEnemyCollisionValues_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateReplicatedStatValues
struct ADunDefTower_SummonEnemy_UpdateReplicatedStatValues_Params
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ExecReplicatedFunction
struct ADunDefTower_SummonEnemy_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ReplicatedEvent
struct ADunDefTower_SummonEnemy_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefEmitterDamage.GetDamageCauser
struct ADunDefEmitterDamage_GetDamageCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefEmitterDamage.CheckValidAngle
struct ADunDefEmitterDamage_CheckValidAngle_Params
{
	class AActor*                                      Victim;                                                   // (Parm)
	struct FVector                                     Origin;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefEmitterDamage.GetStatModifierObject
struct ADunDefEmitterDamage_GetStatModifierObject_Params
{
	TScriptInterface<class UIActorModifierInterface>   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefEmitterDamage.GetStatValueByTag
struct ADunDefEmitterDamage_GetStatValueByTag_Params
{
	float                                              initalValue;                                              // (Parm)
	struct FString                                     StatTag;                                                  // (Parm, NeedCtorLink)
	TScriptInterface<class UIActorModifierInterface>   TagActor;                                                 // (Parm)
	TEnumAsByte<ELevelUpValueType>                     statType;                                                 // (OptionalParm, Parm)
	unsigned long                                      bBaseValueOnly;                                           // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefEmitterDamage.InitalizeActorStats
struct ADunDefEmitterDamage_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	unsigned long                                      bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefEmitterDamage.AllowSpawn
struct ADunDefEmitterDamage_AllowSpawn_Params
{
	class AActor*                                      theArchetype;                                             // (Parm)
	struct FVector                                     theLoc;                                                   // (Parm)
	struct FRotator                                    theRot;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefEmitterDamage.HurtRadius
struct ADunDefEmitterDamage_HurtRadius_Params
{
	float                                              BaseDamage;                                               // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HurtOrigin;                                               // (Parm)
	class AActor*                                      IgnoredActor;                                             // (OptionalParm, Parm)
	class AController*                                 InstigatedByController;                                   // (OptionalParm, Parm)
	unsigned long                                      bDoFullDamage;                                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefEmitterDamage.DoDamage
struct ADunDefEmitterDamage_DoDamage_Params
{
};

// Function DunDefSpecial.DunDefEmitterDamage.InitDamageEmitter
struct ADunDefEmitterDamage_InitDamageEmitter_Params
{
	int                                                BaseDamage;                                               // (OptionalParm, Parm)
	float                                              BaseRange;                                                // (OptionalParm, Parm)
	TScriptInterface<class UIActorModifierInterface>   aActorStatModifier;                                       // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefEmitterDamage.PostBeginPlay
struct ADunDefEmitterDamage_PostBeginPlay_Params
{
};

// Function DunDefSpecial.CTF_PlayerAbility_PickupFlag.RequestPickup
struct ACTF_PlayerAbility_PickupFlag_RequestPickup_Params
{
	class ACTF_Flag*                                   newFlag;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_Flag.SetAtBase
struct ACTF_Flag_SetAtBase_Params
{
	unsigned long                                      bIsAtBase;                                                // (Parm)
};

// Function DunDefSpecial.CTF_Flag.SetDroppedParticleColor
struct ACTF_Flag_SetDroppedParticleColor_Params
{
};

// Function DunDefSpecial.CTF_Flag.SetTeam
struct ACTF_Flag_SetTeam_Params
{
	int                                                NewTeam;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_Flag.InitFlag
struct ACTF_Flag_InitFlag_Params
{
	int                                                NewTeam;                                                  // (Parm)
	class ACTF_FlagBase*                               NewBase;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_Flag.AutoTeleport
struct ACTF_Flag_AutoTeleport_Params
{
};

// Function DunDefSpecial.CTF_Flag.AdjustDamage
struct ACTF_Flag_AdjustDamage_Params
{
	int                                                Damage;                                                   // (Parm, OutParm)
};

// Function DunDefSpecial.CTF_Flag.PreventTowerAtPoint
struct ACTF_Flag_PreventTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	float                                              towerRadius;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.AllowTowerAtPoint
struct ACTF_Flag_AllowTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.CheckAllowance
struct ACTF_Flag_CheckAllowance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.PhysicsVolumeChange
struct ACTF_Flag_PhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function DunDefSpecial.CTF_Flag.FellOutOfWorld
struct ACTF_Flag_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_Flag.ResetCollision
struct ACTF_Flag_ResetCollision_Params
{
};

// Function DunDefSpecial.CTF_Flag.DisableCollision
struct ACTF_Flag_DisableCollision_Params
{
};

// Function DunDefSpecial.CTF_Flag.IsInAuraOrTrap
struct ACTF_Flag_IsInAuraOrTrap_Params
{
	struct FVector                                     Loc;                                                      // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.CaptureFlag
struct ACTF_Flag_CaptureFlag_Params
{
};

// Function DunDefSpecial.CTF_Flag.ReturnToBase
struct ACTF_Flag_ReturnToBase_Params
{
};

// Function DunDefSpecial.CTF_Flag.DropFlag
struct ACTF_Flag_DropFlag_Params
{
	unsigned long                                      bForceRandomizedPosition;                                 // (OptionalParm, Parm)
	unsigned long                                      bForceDroppedMessage;                                     // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_Flag.PickUpFlag
struct ACTF_Flag_PickUpFlag_Params
{
	class ADunDefPlayer*                               newHolder;                                                // (Parm)
};

// Function DunDefSpecial.CTF_Flag.BeginBeingPickedUp
struct ACTF_Flag_BeginBeingPickedUp_Params
{
	class ADunDefPlayerController*                     newHolder;                                                // (Parm)
};

// Function DunDefSpecial.CTF_Flag.CanBePickedUp
struct ACTF_Flag_CanBePickedUp_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.DrawMiniMapIcon
struct ACTF_Flag_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_Flag.GetActivationOffset
struct ACTF_Flag_GetActivationOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.GetActivationWeighting
struct ACTF_Flag_GetActivationWeighting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.Client_Activate
struct ACTF_Flag_Client_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_Flag.Server_Activate
struct ACTF_Flag_Server_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      forceActivation;                                          // (OptionalParm, Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_Flag.AllowActivation
struct ACTF_Flag_AllowActivation_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.GetToolTipPriority
struct ACTF_Flag_GetToolTipPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.TakesToolTipPriority
struct ACTF_Flag_TakesToolTipPriority_Params
{
	TScriptInterface<class UDunDefToolTipInterface>    otherToolTip;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.ContinueDrawingToolTip
struct ACTF_Flag_ContinueDrawingToolTip_Params
{
	unsigned long                                      ContinueDrawing;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.DrawToolTip
struct ACTF_Flag_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	int                                                PosX;                                                     // (Parm)
	int                                                PosY;                                                     // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_Flag.Destroyed
struct ACTF_Flag_Destroyed_Params
{
};

// Function DunDefSpecial.CTF_Flag.PostBeginPlay
struct ACTF_Flag_PostBeginPlay_Params
{
};

// Function DunDefSpecial.CTF_Flag.DrawMyHUD
struct ACTF_Flag_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.OnlyDrawHUDForOwner
struct ACTF_Flag_OnlyDrawHUDForOwner_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_Flag.ExecReplicatedFunction
struct ACTF_Flag_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_Flag.ReplicatedEvent
struct ACTF_Flag_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_UIGlobalHUD.GetUITeamLists
struct UCTF_UIGlobalHUD_GetUITeamLists_Params
{
	int                                                TeamOnlyCheck;                                            // (Parm)
	struct FString                                     tList;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     kList;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sList;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_UIGlobalHUD.GetColorString
struct UCTF_UIGlobalHUD_GetColorString_Params
{
	struct FColor                                      aColor;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_UIGlobalHUD.UpdateTeamPanels
struct UCTF_UIGlobalHUD_UpdateTeamPanels_Params
{
};

// Function DunDefSpecial.CTF_UIGlobalHUD.Update
struct UCTF_UIGlobalHUD_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.CTF_UIGlobalHUD.UpdateCompetitive
struct UCTF_UIGlobalHUD_UpdateCompetitive_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.CTF_DDPRI.IsFriendlyToLocal
struct ACTF_DDPRI_IsFriendlyToLocal_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDPRI.PrintHeroLevelUpMessage
struct ACTF_DDPRI_PrintHeroLevelUpMessage_Params
{
};

// Function DunDefSpecial.CTF_DDPRI.PrintNewHeroMessage
struct ACTF_DDPRI_PrintNewHeroMessage_Params
{
};

// Function DunDefSpecial.CTF_DDPRI.SetReadyToSpawn
struct ACTF_DDPRI_SetReadyToSpawn_Params
{
	unsigned long                                      bIsReady;                                                 // (Parm)
};

// Function DunDefSpecial.CTF_DDPRI.GetTeamName
struct ACTF_DDPRI_GetTeamName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_DDPRI.GetTeamColor
struct ACTF_DDPRI_GetTeamColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDPRI.Destroyed
struct ACTF_DDPRI_Destroyed_Params
{
};

// Function DunDefSpecial.CTF_DDPRI.AddToTeam
struct ACTF_DDPRI_AddToTeam_Params
{
	int                                                TeamIndex;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_DDPRI.ReplicatedEvent
struct ACTF_DDPRI_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.AllowedToTeleport
struct ACTF_DDGRI_AllowedToTeleport_Params
{
	class APawn*                                       Teleportee;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.DoDeathNotification
struct ACTF_DDGRI_DoDeathNotification_Params
{
	class ADunDefPlayerReplicationInfo*                Killer;                                                   // (Parm)
	class ADunDefPlayerReplicationInfo*                Victim;                                                   // (Parm)
	int                                                damageTypeIndex;                                          // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.GetJumpZMultiplier
struct ACTF_DDGRI_GetJumpZMultiplier_Params
{
	class ADunDefPawn*                                 aPawn;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.ExtraDrawHUDInterface
struct ACTF_DDGRI_ExtraDrawHUDInterface_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	TScriptInterface<class UDunDefHUDInterface>        hudint;                                                   // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.CustomUpdatePlayerScoreLabel
struct ACTF_DDGRI_CustomUpdatePlayerScoreLabel_Params
{
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	class UUILabel_ScoreIndicator*                     ScoreLabel;                                               // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.AllowDeathSpectatorMode
struct ACTF_DDGRI_AllowDeathSpectatorMode_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.ModifyPlayerGroundSpeed
struct ACTF_DDGRI_ModifyPlayerGroundSpeed_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
	float                                              theGroundSpeed;                                           // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelColor
struct ACTF_DDGRI_GetGameOverLabelColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelColor
struct ACTF_DDGRI_GetVictoryLabelColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelString
struct ACTF_DDGRI_GetGameOverLabelString_Params
{
	class APlayerReplicationInfo*                      myPlayer;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelString
struct ACTF_DDGRI_GetVictoryLabelString_Params
{
	class APlayerReplicationInfo*                      myPlayer;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_DDGRI.OverrideEndGameLabel
struct ACTF_DDGRI_OverrideEndGameLabel_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetWinningPRI
struct ACTF_DDGRI_GetWinningPRI_Params
{
	class ADunDefPlayerReplicationInfo*                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetDataListEntries
struct ACTF_DDGRI_GetDataListEntries_Params
{
	int                                                dataSetType;                                              // (OptionalParm, Parm)
	int                                                PlayerIndex;                                              // (OptionalParm, Parm)
	int                                                FolderID;                                                 // (OptionalParm, Parm)
	TArray<TScriptInterface<class UDataListEntryInterface>> ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamIcon
struct ACTF_DDGRI_GetTeamIcon_Params
{
	int                                                TeamIndex;                                                // (Parm)
	class USurface*                                    theTeamIcon;                                              // (OptionalParm, Parm, OutParm)
	struct FColor                                      theTeamColor;                                             // (OptionalParm, Parm, OutParm)
};

// Function DunDefSpecial.CTF_DDGRI.IsTeamCompetitive
struct ACTF_DDGRI_IsTeamCompetitive_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.AllowChatBetween
struct ACTF_DDGRI_AllowChatBetween_Params
{
	class APlayerReplicationInfo*                      myPlayer;                                                 // (Parm)
	class APlayerReplicationInfo*                      TheirPlayer;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamThatHasFlag
struct ACTF_DDGRI_GetTeamThatHasFlag_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.DoLevelVictory
struct ACTF_DDGRI_DoLevelVictory_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.GiveWinningBonus
struct ACTF_DDGRI_GiveWinningBonus_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.WonGame
struct ACTF_DDGRI_WonGame_Params
{
	class ADunDefPlayerReplicationInfo*                theWinningPlayer;                                         // (Parm)
	int                                                WinningTeamIndex;                                         // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_DDGRI.CheckAllReady
struct ACTF_DDGRI_CheckAllReady_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.CheckReadyPlayers
struct ACTF_DDGRI_CheckReadyPlayers_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.SetAllowCountDown
struct ACTF_DDGRI_SetAllowCountDown_Params
{
	unsigned long                                      setAllow;                                                 // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.AllowGameCountDown
struct ACTF_DDGRI_AllowGameCountDown_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.SetGameReady
struct ACTF_DDGRI_SetGameReady_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.SetGameTime
struct ACTF_DDGRI_SetGameTime_Params
{
	float                                              NewTime;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.UpdateGameTime
struct ACTF_DDGRI_UpdateGameTime_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.Tick
struct ACTF_DDGRI_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.FilloutTeams
struct ACTF_DDGRI_FilloutTeams_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.FlushTeams
struct ACTF_DDGRI_FlushTeams_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.AutoBalanceTeams
struct ACTF_DDGRI_AutoBalanceTeams_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.AutoSortTeams
struct ACTF_DDGRI_AutoSortTeams_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.GetLowestBalancedTeam
struct ACTF_DDGRI_GetLowestBalancedTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.IncrementTeamScore
struct ACTF_DDGRI_IncrementTeamScore_Params
{
	int                                                ScoringTeam;                                              // (Parm)
	int                                                Score;                                                    // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.PostBeginPlay
struct ACTF_DDGRI_PostBeginPlay_Params
{
};

// Function DunDefSpecial.CTF_DDGRI.ModifyCustomColors
struct ACTF_DDGRI_ModifyCustomColors_Params
{
	class ADunDefPlayerController*                     aController;                                              // (Parm)
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.DrawExtraPlayerFloatingHUD
struct ACTF_DDGRI_DrawExtraPlayerFloatingHUD_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamScores
struct ACTF_DDGRI_GetTeamScores_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_DDGRI.Server_AddGRIHeroAbilities
struct ACTF_DDGRI_Server_AddGRIHeroAbilities_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.GetColorString
struct ACTF_DDGRI_GetColorString_Params
{
	struct FColor                                      aColor;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamLists
struct ACTF_DDGRI_GetTeamLists_Params
{
	int                                                TeamOnlyCheck;                                            // (Parm)
	unsigned long                                      bWantsReadyCheck;                                         // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_DDGRI.GetCompetitivePlayerList
struct ACTF_DDGRI_GetCompetitivePlayerList_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_DDGRI.DestroyTowerOnOwnerLeft
struct ACTF_DDGRI_DestroyTowerOnOwnerLeft_Params
{
	class ADunDefTower*                                aTower;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetMaxTowerUnits
struct ACTF_DDGRI_GetMaxTowerUnits_Params
{
	class ADunDefPlayerReplicationInfo*                ddPRI;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetAltCurrentTowerUnits
struct ACTF_DDGRI_GetAltCurrentTowerUnits_Params
{
	class ADunDefPlayerReplicationInfo*                ddPRI;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.GetCurrentTowerUnits
struct ACTF_DDGRI_GetCurrentTowerUnits_Params
{
	class ADunDefPlayerReplicationInfo*                ddPRI;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.CanPlaceTowerUnitCost
struct ACTF_DDGRI_CanPlaceTowerUnitCost_Params
{
	int                                                Cost;                                                     // (Parm)
	class ADunDefPlayerController*                     ForPlayer;                                                // (Parm)
	class ADunDefTower*                                Tower;                                                    // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.RemovedTower
struct ACTF_DDGRI_RemovedTower_Params
{
	class ADunDefTower*                                Tower;                                                    // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.AddedTower
struct ACTF_DDGRI_AddedTower_Params
{
	class ADunDefTower*                                Tower;                                                    // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.RemovePlayerFromTeam
struct ACTF_DDGRI_RemovePlayerFromTeam_Params
{
	class ACTF_DDPRI*                                  aPRI;                                                     // (Parm)
	int                                                TeamIndex;                                                // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.AddPlayerToTeam
struct ACTF_DDGRI_AddPlayerToTeam_Params
{
	class ACTF_DDPRI*                                  aPRI;                                                     // (Parm)
	int                                                TeamIndex;                                                // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.RemoveFromAnyTeams
struct ACTF_DDGRI_RemoveFromAnyTeams_Params
{
	class ACTF_DDPRI*                                  aPRI;                                                     // (Parm)
};

// Function DunDefSpecial.CTF_DDGRI.GetSmallestTeam
struct ACTF_DDGRI_GetSmallestTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_DDGRI.ExecReplicatedFunction
struct ACTF_DDGRI_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_DDPC.AdjustDamage
struct ACTF_DDPC_AdjustDamage_Params
{
	int                                                inDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_DDPC.PawnDied
struct ACTF_DDPC_PawnDied_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function DunDefSpecial.CTF_DDPC.GiveFlag
struct ACTF_DDPC_GiveFlag_Params
{
	class ACTF_Flag*                                   newFlag;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_DDPC.SetIsReady
struct ACTF_DDPC_SetIsReady_Params
{
	unsigned long                                      bIsReady;                                                 // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_DDPC.SetDesiredTeam
struct ACTF_DDPC_SetDesiredTeam_Params
{
	int                                                desiredTeam;                                              // (Parm)
};

// Function DunDefSpecial.CTF_DDPC.CreateHUD
struct ACTF_DDPC_CreateHUD_Params
{
};

// Function DunDefSpecial.CTF_DDPC.LocalAttemptSpawn
struct ACTF_DDPC_LocalAttemptSpawn_Params
{
};

// Function DunDefSpecial.CTF_DDPC.ServerRestartPlayer
struct ACTF_DDPC_ServerRestartPlayer_Params
{
};

// Function DunDefSpecial.CTF_DDPC.ShowTeamSelectionUI
struct ACTF_DDPC_ShowTeamSelectionUI_Params
{
};

// Function DunDefSpecial.CTD_DDGRI.AllowedToTeleport
struct ACTD_DDGRI_AllowedToTeleport_Params
{
	class APawn*                                       Teleportee;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTD_DDGRI.DoLevelVictory
struct ACTD_DDGRI_DoLevelVictory_Params
{
};

// Function DunDefSpecial.CTD_DDGRI.Tick
struct ACTD_DDGRI_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.CTD_DDGRI.GetSkipBuildPhaseString
struct ACTD_DDGRI_GetSkipBuildPhaseString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTD_DDGRI.DrawExtraPlayerFloatingHUD
struct ACTD_DDGRI_DrawExtraPlayerFloatingHUD_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.CTD_DDGRI.Server_AddGRIHeroAbilities
struct ACTD_DDGRI_Server_AddGRIHeroAbilities_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefSpecial.CTD_DDGRI.DestroyTowerOnOwnerLeft
struct ACTD_DDGRI_DestroyTowerOnOwnerLeft_Params
{
	class ADunDefTower*                                aTower;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTD_DDGRI.AllowActivatingCrystal
struct ACTD_DDGRI_AllowActivatingCrystal_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTD_DDGRI.SetGameReady
struct ACTD_DDGRI_SetGameReady_Params
{
};

// Function DunDefSpecial.UI_TeamSelect.OnInterceptedInputKey
struct UUI_TeamSelect_OnInterceptedInputKey_Params
{
	struct FInputEventParameters                       EventParms;                                               // (Const, Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.UI_TeamSelect.NotifyWidgetClicked
struct UUI_TeamSelect_NotifyWidgetClicked_Params
{
	class UUIObject*                                   Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.UI_TeamSelect.Update
struct UUI_TeamSelect_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.UI_TeamSelect.SceneActivated
struct UUI_TeamSelect_SceneActivated_Params
{
	unsigned long                                      bInitialActivation;                                       // (Parm)
};

// Function DunDefSpecial.CTF_GameInfo.AdjustDTDamage
struct ACTF_GameInfo_AdjustDTDamage_Params
{
	class ADunDefDamageableTarget*                     forDT;                                                    // (Parm)
	int                                                inDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_GameInfo.AdjustPawnDamage
struct ACTF_GameInfo_AdjustPawnDamage_Params
{
	class ADunDefPawn*                                 forPawn;                                                  // (Parm)
	int                                                inDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_GameInfo.GetPlayerTeamForStart
struct ACTF_GameInfo_GetPlayerTeamForStart_Params
{
	class AController*                                 Player;                                                   // (Parm)
	unsigned char                                      InTeam;                                                   // (OptionalParm, Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_GameInfo.CheckScore
struct ACTF_GameInfo_CheckScore_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_GameInfo.ScoreKill
struct ACTF_GameInfo_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Other;                                                    // (Parm)
};

// Function DunDefSpecial.CTF_GameInfo.ScoreObjective
struct ACTF_GameInfo_ScoreObjective_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	int                                                Score;                                                    // (Parm)
};

// Function DunDefSpecial.CTF_GameInfo.AddObjectiveScore
struct ACTF_GameInfo_AddObjectiveScore_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	int                                                Score;                                                    // (Parm)
};

// Function DunDefSpecial.CTF_GameInfo.PlayerReplicationInfoInitialized
struct ACTF_GameInfo_PlayerReplicationInfoInitialized_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefSpecial.CTF_GameInfo.DoPlayerLeaving
struct ACTF_GameInfo_DoPlayerLeaving_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      bForceLocal;                                              // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_GameInfo.SpawnPlayerController
struct ACTF_GameInfo_SpawnPlayerController_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTD_GameInfo.WaveSpawnerCreateEnemy
struct ACTD_GameInfo_WaveSpawnerCreateEnemy_Params
{
	class UDunDef_SeqAct_EnemyWaveSpawner*             aSpawner;                                                 // (Parm)
	class ADunDefEnemy*                                EnemyTemplate;                                            // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	class ADunDefEnemy*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTD_GameInfo.RatePlayerStart
struct ACTD_GameInfo_RatePlayerStart_Params
{
	class APlayerStart*                                P;                                                        // (Parm)
	unsigned char                                      Team;                                                     // (Parm)
	class AController*                                 Player;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTD_GameInfo.PostBeginPlay
struct ACTD_GameInfo_PostBeginPlay_Params
{
};

// Function DunDefSpecial.CTF_FlagBase.PreventTowerAtPoint
struct ACTF_FlagBase_PreventTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	float                                              towerRadius;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_FlagBase.AllowTowerAtPoint
struct ACTF_FlagBase_AllowTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_FlagBase.CheckAllowance
struct ACTF_FlagBase_CheckAllowance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_FlagBase.DrawMiniMapIcon
struct ACTF_FlagBase_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_FlagBase.SpawnFlag
struct ACTF_FlagBase_SpawnFlag_Params
{
};

// Function DunDefSpecial.CTF_FlagBase.FlagTaken
struct ACTF_FlagBase_FlagTaken_Params
{
};

// Function DunDefSpecial.CTF_FlagBase.FlagReturned
struct ACTF_FlagBase_FlagReturned_Params
{
};

// Function DunDefSpecial.CTF_FlagBase.DoCaptureEffects
struct ACTF_FlagBase_DoCaptureEffects_Params
{
};

// Function DunDefSpecial.CTF_FlagBase.ScoreFlag
struct ACTF_FlagBase_ScoreFlag_Params
{
	class ACTF_Flag*                                   scoredFlag;                                               // (Parm)
};

// Function DunDefSpecial.CTF_FlagBase.Touch
struct ACTF_FlagBase_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.CTF_FlagBase.InitBase
struct ACTF_FlagBase_InitBase_Params
{
};

// Function DunDefSpecial.CTF_FlagBase.SetTeamIndex
struct ACTF_FlagBase_SetTeamIndex_Params
{
	int                                                NewTeam;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_FlagBase.PostBeginPlay
struct ACTF_FlagBase_PostBeginPlay_Params
{
};

// Function DunDefSpecial.CTF_FlagBase.ExecReplicatedFunction
struct ACTF_FlagBase_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_FlagBase.ReplicatedEvent
struct ACTF_FlagBase_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.CTF_MultiFlag_GameInfo.RatePlayerStart
struct ACTF_MultiFlag_GameInfo_RatePlayerStart_Params
{
	class APlayerStart*                                P;                                                        // (Parm)
	unsigned char                                      Team;                                                     // (Parm)
	class AController*                                 Player;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.CTF_MultiFlag_GameInfo.PostBeginPlay
struct ACTF_MultiFlag_GameInfo_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefTeamTowerVolume.SetMyTeam
struct ADunDefTeamTowerVolume_SetMyTeam_Params
{
	int                                                NewTeam;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTeamTowerVolume.Destroyed
struct ADunDefTeamTowerVolume_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefTeamTowerVolume.PostBeginPlay
struct ADunDefTeamTowerVolume_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefTeamTowerVolume.AllowTowerAtPoint
struct ADunDefTeamTowerVolume_AllowTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTeamTowerVolume.PreventTowerAtPoint
struct ADunDefTeamTowerVolume_PreventTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	float                                              towerRadius;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTeamTowerVolume.CheckAllowance
struct ADunDefTeamTowerVolume_CheckAllowance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTeamTowerVolume.ExecReplicatedFunction
struct ADunDefTeamTowerVolume_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.CTF_UIGameStats.GetUITeamLists
struct UCTF_UIGameStats_GetUITeamLists_Params
{
	int                                                TeamOnlyCheck;                                            // (Parm)
	struct FString                                     tList;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     kList;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sList;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_UIGameStats.GetColorString
struct UCTF_UIGameStats_GetColorString_Params
{
	struct FColor                                      aColor;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.CTF_UIGameStats.UpdateTeamPanels
struct UCTF_UIGameStats_UpdateTeamPanels_Params
{
};

// Function DunDefSpecial.CTF_UIGameStats.CustomInit
struct UCTF_UIGameStats_CustomInit_Params
{
	int                                                CustomInitIndex;                                          // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover.Activated
struct UDunDef_SeqAct_AddPlatformToVerticalTowerMover_Activated_Params
{
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.Tick
struct ADunDef_VerticalTowerMover_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.MoveTowers
struct ADunDef_VerticalTowerMover_MoveTowers_Params
{
	struct FPlatformInfo                               Info;                                                     // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.RebuildTowerCache
struct ADunDef_VerticalTowerMover_RebuildTowerCache_Params
{
	struct FPlatformInfo                               thePlatformInfo;                                          // (Parm, NeedCtorLink)
	TArray<struct FTowerInfo>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.AddInterpActor
struct ADunDef_VerticalTowerMover_AddInterpActor_Params
{
	class AInterpActor*                                TheActor;                                                 // (Parm)
};

// Function DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements.Activated
struct UDunDef_SeqAct_CheckToUnlockAchievements_Activated_Params
{
};

// Function DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam.Activated
struct UDunDef_SeqAct_CTDWinGameForTeam_Activated_Params
{
};

// Function DunDefSpecial.DunDef_SeqAct_GetMVP.Activated
struct UDunDef_SeqAct_GetMVP_Activated_Params
{
};

// Function DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene.Activated
struct UDunDef_SeqAct_HideGlobalUIScene_Activated_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.StaticGetTowerScale
struct ADunDefTower_TripWire_StaticGetTowerScale_Params
{
	class UDunDefHero*                                 hero;                                                     // (Parm)
	class ADunDefTower*                                Tower;                                                    // (Parm)
	float                                              TowerRangeScaler;                                         // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.AllowAbilityMove
struct ADunDefTower_TripWire_AllowAbilityMove_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.TransferTowerOwnership
struct ADunDefTower_TripWire_TransferTowerOwnership_Params
{
	class APawn*                                       toPawn;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.CheckAssociateWithHero
struct ADunDefTower_TripWire_CheckAssociateWithHero_Params
{
	class UDunDefHero*                                 hero;                                                     // (Parm)
	class ADunDefPawn*                                 pawnInstigator;                                           // (Parm)
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.CanDetonate
struct ADunDefTower_TripWire_CanDetonate_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.HasCharges
struct ADunDefTower_TripWire_HasCharges_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetSellWorth
struct ADunDefTower_TripWire_GetSellWorth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetEnemyTargetingDesirability
struct ADunDefTower_TripWire_GetEnemyTargetingDesirability_Params
{
	class AEngineNativeDunDefAIController*             forController;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawMiniMapIcon
struct ADunDefTower_TripWire_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.HealDetonationStyle
struct ADunDefTower_TripWire_HealDetonationStyle_Params
{
	int                                                HealAmt;                                                  // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	unsigned long                                      bShowFloatingNumbers;                                     // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAlternateActor
struct ADunDefTower_TripWire_GetAlternateActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.IsMultiActorTower
struct ADunDefTower_TripWire_IsMultiActorTower_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawUpgradeOverlay
struct ADunDefTower_TripWire_DrawUpgradeOverlay_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	float                                              Opacity;                                                  // (Parm)
	struct FColor                                      upgradeOverlayColor;                                      // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetGlobalTowerHealthMultiplier
struct ADunDefTower_TripWire_GetGlobalTowerHealthMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.PerformFullHeal
struct ADunDefTower_TripWire_PerformFullHeal_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.SetRadiusScale
struct ADunDefTower_TripWire_SetRadiusScale_Params
{
	float                                              theRadiusScale;                                           // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawTowerToolTipStats
struct ADunDefTower_TripWire_DrawTowerToolTipStats_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              PosX;                                                     // (Parm, OutParm)
	float                                              PosY;                                                     // (Parm, OutParm)
	float                                              Opacity;                                                  // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	float                                              canvasScale;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetToolTipText
struct ADunDefTower_TripWire_GetToolTipText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefTower_TripWire.ScaleForHeroModifiers
struct ADunDefTower_TripWire_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ScaleHealthMultiplier
struct ADunDefTower_TripWire_ScaleHealthMultiplier_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportSummoned
struct ADunDefTower_TripWire_ReportSummoned_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateTowerRatingMaterial
struct ADunDefTower_TripWire_UpdateTowerRatingMaterial_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.NeedsRepair
struct ADunDefTower_TripWire_NeedsRepair_Params
{
	unsigned long                                      requireFullHealth;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetHealthPercent
struct ADunDefTower_TripWire_GetHealthPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.HealDamage
struct ADunDefTower_TripWire_HealDamage_Params
{
	int                                                Amount;                                                   // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.HealPctOfMaxHealth
struct ADunDefTower_TripWire_HealPctOfMaxHealth_Params
{
	float                                              HealPct;                                                  // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	unsigned long                                      bShowFloatingNumbers;                                     // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetHealth
struct ADunDefTower_TripWire_GetHealth_Params
{
	unsigned long                                      bGetMax;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.IncrementRepair
struct ADunDefTower_TripWire_IncrementRepair_Params
{
	float                                              CurrentMana;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.IncrementDetonationRepair
struct ADunDefTower_TripWire_IncrementDetonationRepair_Params
{
	float                                              CurrentMana;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCurrentRepairPercentage
struct ADunDefTower_TripWire_GetCurrentRepairPercentage_Params
{
	float                                              StartRepairTime;                                          // (OptionalParm, Parm)
	float                                              RepairSpeed;                                              // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.StartRepair
struct ADunDefTower_TripWire_StartRepair_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeToRepair
struct ADunDefTower_TripWire_GetTimeToRepair_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCostToRepair
struct ADunDefTower_TripWire_GetCostToRepair_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeOfTotalRepair
struct ADunDefTower_TripWire_GetTimeOfTotalRepair_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.Died
struct ADunDefTower_TripWire_Died_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportedDeath
struct ADunDefTower_TripWire_ReportedDeath_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportDeath
struct ADunDefTower_TripWire_ReportDeath_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DecreaseLifeEnergy
struct ADunDefTower_TripWire_DecreaseLifeEnergy_Params
{
	float                                              X;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ContinueDrawingToolTip
struct ADunDefTower_TripWire_ContinueDrawingToolTip_Params
{
	unsigned long                                      ContinueDrawing;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawToolTip
struct ADunDefTower_TripWire_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	int                                                PosX;                                                     // (Parm)
	int                                                PosY;                                                     // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.Sell
struct ADunDefTower_TripWire_Sell_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.Destroyed
struct ADunDefTower_TripWire_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.PlaySellFX
struct ADunDefTower_TripWire_PlaySellFX_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.Detonate
struct ADunDefTower_TripWire_Detonate_Params
{
	int                                                SetDetonationsNumber;                                     // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildEndDetonate
struct ADunDefTower_TripWire_ChildEndDetonate_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDetonate
struct ADunDefTower_TripWire_ChildDetonate_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.RemoveStunnedActor
struct ADunDefTower_TripWire_RemoveStunnedActor_Params
{
	class AActor*                                      stunRemoval;                                              // (Parm)
	int                                                removalIndex;                                             // (OptionalParm, Parm)
	unsigned long                                      bDontReplicate;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.CanStun
struct ADunDefTower_TripWire_CanStun_Params
{
	class ADunDefEnemy*                                stunTest;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.AddStunnedActor
struct ADunDefTower_TripWire_AddStunnedActor_Params
{
	class ADunDefEnemy*                                newStun;                                                  // (Parm)
	struct FBeamTrippers                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ClearBeamTrippers
struct ADunDefTower_TripWire_ClearBeamTrippers_Params
{
	unsigned long                                      bFullClear;                                               // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackDuration
struct ADunDefTower_TripWire_GetAttackDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ResetTrip
struct ADunDefTower_TripWire_ResetTrip_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DeactivateTrip
struct ADunDefTower_TripWire_DeactivateTrip_Params
{
	unsigned long                                      bShutDownEffects;                                         // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateTrip
struct ADunDefTower_TripWire_ActivateTrip_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawMyHUD
struct ADunDefTower_TripWire_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTrapDamageMultiplier
struct ADunDefTower_TripWire_GetTrapDamageMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetDamageMultiplier
struct ADunDefTower_TripWire_GetDamageMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackDamage
struct ADunDefTower_TripWire_GetAttackDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetStunTime
struct ADunDefTower_TripWire_GetStunTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.RemoveTowerBooster
struct ADunDefTower_TripWire_RemoveTowerBooster_Params
{
	TScriptInterface<class UTowerBoosterInterface>     aBooster;                                                 // (Parm)
	int                                                indexOverride;                                            // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.AddTowerBooster
struct ADunDefTower_TripWire_AddTowerBooster_Params
{
	TScriptInterface<class UTowerBoosterInterface>     aBooster;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateStuns
struct ADunDefTower_TripWire_UpdateStuns_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackRate
struct ADunDefTower_TripWire_GetAttackRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.DoTracing
struct ADunDefTower_TripWire_DoTracing_Params
{
	float                                              dt;                                                       // (Parm)
	unsigned long                                      bForceDamage;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.UnTouch
struct ADunDefTower_TripWire_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.Touch
struct ADunDefTower_TripWire_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.SetDetonateTimer
struct ADunDefTower_TripWire_SetDetonateTimer_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.GetEndPoint
struct ADunDefTower_TripWire_GetEndPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetBeamStartLoc
struct ADunDefTower_TripWire_GetBeamStartLoc_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateMovementBeams
struct ADunDefTower_TripWire_UpdateMovementBeams_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.Tick
struct ADunDefTower_TripWire_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ClientSingleSetMovement
struct ADunDefTower_TripWire_ClientSingleSetMovement_Params
{
	struct FVector                                     endLoc;                                                   // (Parm)
	struct FRotator                                    endRot;                                                   // (Parm)
	unsigned long                                      bShouldCollideWorld;                                      // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ForceSingleMove
struct ADunDefTower_TripWire_ForceSingleMove_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm)
	struct FRotator                                    NewRot;                                                   // (Parm)
	unsigned long                                      bShouldCollideWorld;                                      // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.DisableSingleMovementReplication
struct ADunDefTower_TripWire_DisableSingleMovementReplication_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.EnableSingleMovementReplicationTimer
struct ADunDefTower_TripWire_EnableSingleMovementReplicationTimer_Params
{
	float                                              Time;                                                     // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.DisableMovementReplication
struct ADunDefTower_TripWire_DisableMovementReplication_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.EnableMovementReplicationTimer
struct ADunDefTower_TripWire_EnableMovementReplicationTimer_Params
{
	float                                              Time;                                                     // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.SetDUCost
struct ADunDefTower_TripWire_SetDUCost_Params
{
	int                                                newDUCost;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetNextUpgradeLevel
struct ADunDefTower_TripWire_GetNextUpgradeLevel_Params
{
	unsigned long                                      bForceBeyondMaxUpgrade;                                   // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeToUpgradeTower
struct ADunDefTower_TripWire_GetTimeToUpgradeTower_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCostToUpgradeTower
struct ADunDefTower_TripWire_GetCostToUpgradeTower_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTowerUpgradeLevelStatModifier
struct ADunDefTower_TripWire_GetTowerUpgradeLevelStatModifier_Params
{
	TEnumAsByte<ELevelUpValueType>                     valueType;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDoUpgrade
struct ADunDefTower_TripWire_ChildDoUpgrade_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDoDowngrade
struct ADunDefTower_TripWire_ChildDoDowngrade_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DoDowngrade
struct ADunDefTower_TripWire_DoDowngrade_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DoUpgrade
struct ADunDefTower_TripWire_DoUpgrade_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.CanBeUpgraded
struct ADunDefTower_TripWire_CanBeUpgraded_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ShutDownBeamEffects
struct ADunDefTower_TripWire_ShutDownBeamEffects_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateBeamEffects
struct ADunDefTower_TripWire_ActivateBeamEffects_Params
{
	unsigned long                                      bActive;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateBeam
struct ADunDefTower_TripWire_ActivateBeam_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.GetBeamPoint
struct ADunDefTower_TripWire_GetBeamPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCollisionPoint
struct ADunDefTower_TripWire_GetCollisionPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripWire.SetPlacementPoints
struct ADunDefTower_TripWire_SetPlacementPoints_Params
{
	TArray<struct FVector>                             SpawnPoints;                                              // (Parm, NeedCtorLink)
	class ADunDefTower*                                NodeTemplate;                                             // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.InitializeForInstigator
struct ADunDefTower_TripWire_InitializeForInstigator_Params
{
	class APawn*                                       Pawn;                                                     // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.SetUpCollisionMesh
struct ADunDefTower_TripWire_SetUpCollisionMesh_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.InitalizeStatObject
struct ADunDefTower_TripWire_InitalizeStatObject_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.OnDestroy_RemoveFromTargetableList
struct ADunDefTower_TripWire_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.OnPostBeginPlay_AddToTargetableList
struct ADunDefTower_TripWire_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.PostBeginPlay
struct ADunDefTower_TripWire_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.SetUseHealthBarMat
struct ADunDefTower_TripWire_SetUseHealthBarMat_Params
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ExecReplicatedFunction
struct ADunDefTower_TripWire_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripWire.ReplicatedEvent
struct ADunDefTower_TripWire_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DisableAbilityMove
struct ADunDefTower_TripPhysical_DisableAbilityMove_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.AllowAbilityMove
struct ADunDefTower_TripPhysical_AllowAbilityMove_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ClientDisableMovementReplication
struct ADunDefTower_TripPhysical_ClientDisableMovementReplication_Params
{
	struct FVector                                     endedLoc;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.BaseChange
struct ADunDefTower_TripPhysical_BaseChange_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ForceMoveActor
struct ADunDefTower_TripPhysical_ForceMoveActor_Params
{
	class AActor*                                      Mover;                                                    // (Parm)
	struct FVector                                     NewLoc;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetSelectionLocation
struct ADunDefTower_TripPhysical_GetSelectionLocation_Params
{
	class AActor*                                      wantsLocation;                                            // (Parm)
	struct FVector                                     bestLoc;                                                  // (Parm, OutParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IsPhysicalTower
struct ADunDefTower_TripPhysical_IsPhysicalTower_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawMiniMapIcon
struct ADunDefTower_TripPhysical_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UpdateMovementBeams
struct ADunDefTower_TripPhysical_UpdateMovementBeams_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IsPreviousToolTipActor
struct ADunDefTower_TripPhysical_IsPreviousToolTipActor_Params
{
	class ADunDefPlayerController*                     ownerCheck;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UpdateDamageFlashing
struct ADunDefTower_TripPhysical_UpdateDamageFlashing_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.PerformFullHeal
struct ADunDefTower_TripPhysical_PerformFullHeal_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.HealDamage
struct ADunDefTower_TripPhysical_HealDamage_Params
{
	int                                                Amount;                                                   // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IncrementRepair
struct ADunDefTower_TripPhysical_IncrementRepair_Params
{
	float                                              CurrentMana;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCurrentRepairPercentage
struct ADunDefTower_TripPhysical_GetCurrentRepairPercentage_Params
{
	float                                              StartRepairTime;                                          // (OptionalParm, Parm)
	float                                              RepairSpeed;                                              // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.StartRepair
struct ADunDefTower_TripPhysical_StartRepair_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeToRepair
struct ADunDefTower_TripPhysical_GetTimeToRepair_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCostToRepair
struct ADunDefTower_TripPhysical_GetCostToRepair_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeOfTotalRepair
struct ADunDefTower_TripPhysical_GetTimeOfTotalRepair_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetToolTipText
struct ADunDefTower_TripPhysical_GetToolTipText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetGlobalTowerHealthMultiplier
struct ADunDefTower_TripPhysical_GetGlobalTowerHealthMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.Bump
struct ADunDefTower_TripPhysical_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetOverrideTargetComponent
struct ADunDefTower_TripPhysical_GetOverrideTargetComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawToolTip
struct ADunDefTower_TripPhysical_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	int                                                PosX;                                                     // (Parm)
	int                                                PosY;                                                     // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetHealthPercent
struct ADunDefTower_TripPhysical_GetHealthPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetHealth
struct ADunDefTower_TripPhysical_GetHealth_Params
{
	unsigned long                                      bGetMax;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.AddHealth
struct ADunDefTower_TripPhysical_AddHealth_Params
{
	int                                                howMuch;                                                  // (Parm)
	unsigned long                                      bDontDisplayFloatingNumber;                               // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeamEffects
struct ADunDefTower_TripPhysical_ActivateBeamEffects_Params
{
	unsigned long                                      bActive;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ShutDownBeamEffects
struct ADunDefTower_TripPhysical_ShutDownBeamEffects_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateTrip
struct ADunDefTower_TripPhysical_ActivateTrip_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawMyHUD
struct ADunDefTower_TripPhysical_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.NeedsRepair
struct ADunDefTower_TripPhysical_NeedsRepair_Params
{
	unsigned long                                      requireFullHealth;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SubtractHealth
struct ADunDefTower_TripPhysical_SubtractHealth_Params
{
	int                                                DamageAmount;                                             // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.TakeDamage
struct ADunDefTower_TripPhysical_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetAttackRangeOffset
struct ADunDefTower_TripPhysical_GetAttackRangeOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTargetingLocation
struct ADunDefTower_TripPhysical_GetTargetingLocation_Params
{
	class AActor*                                      RequestedBy;                                              // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerDamageMultiplier
struct ADunDefTower_TripPhysical_GetPhysicalTowerDamageMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerHealthMultiplier
struct ADunDefTower_TripPhysical_GetPhysicalTowerHealthMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetAuraDamageMultiplier
struct ADunDefTower_TripPhysical_GetAuraDamageMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UseForTowerSelectionPassThrough
struct ADunDefTower_TripPhysical_UseForTowerSelectionPassThrough_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTowerTargetingDesirability
struct ADunDefTower_TripPhysical_GetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPlayerTargetingDesirability
struct ADunDefTower_TripPhysical_GetPlayerTargetingDesirability_Params
{
	class ADunDefPlayerController*                     forController;                                            // (Parm)
	class ADunDefPlayer*                               ForPlayer;                                                // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivatePlaneBeam
struct ADunDefTower_TripPhysical_ActivatePlaneBeam_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeam
struct ADunDefTower_TripPhysical_ActivateBeam_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ModifyTranslation
struct ADunDefTower_TripPhysical_ModifyTranslation_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SetUpCollisionMesh
struct ADunDefTower_TripPhysical_SetUpCollisionMesh_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCollisionPoint
struct ADunDefTower_TripPhysical_GetCollisionPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetSecondBeamPoint
struct ADunDefTower_TripPhysical_GetSecondBeamPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ScaleInBeams
struct ADunDefTower_TripPhysical_ScaleInBeams_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.StartBeams
struct ADunDefTower_TripPhysical_StartBeams_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.PostBeginPlay
struct ADunDefTower_TripPhysical_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SetPlacementPoints
struct ADunDefTower_TripPhysical_SetPlacementPoints_Params
{
	TArray<struct FVector>                             SpawnPoints;                                              // (Parm, NeedCtorLink)
	class ADunDefTower*                                NodeTemplate;                                             // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ReplicatedEvent
struct ADunDefTower_TripPhysical_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Hovering.PostBeginPlay
struct ADunDefPlayer_Hovering_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Hovering.StopHovering
struct ADunDefPlayer_Hovering_StopHovering_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Hovering.StartHovering
struct ADunDefPlayer_Hovering_StartHovering_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Hovering.ExecReplicatedFunction
struct ADunDefPlayer_Hovering_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.DrawMiniMapIcon
struct ADunDefPlayer_Summoner_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetPhaseShiftMaterials
struct ADunDefPlayer_Summoner_GetPhaseShiftMaterials_Params
{
	TArray<class UMaterialInstanceConstant*>           ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.IssuedCommand
struct ADunDefPlayer_Summoner_IssuedCommand_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSellTowerEmitter
struct ADunDefPlayer_Summoner_GetSellTowerEmitter_Params
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetTrapDetonationEmitter
struct ADunDefPlayer_Summoner_GetTrapDetonationEmitter_Params
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetUpgradingWeaponEmitter
struct ADunDefPlayer_Summoner_GetUpgradingWeaponEmitter_Params
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetWeaponRepairEmitter
struct ADunDefPlayer_Summoner_GetWeaponRepairEmitter_Params
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetHealingWeaponEmitter
struct ADunDefPlayer_Summoner_GetHealingWeaponEmitter_Params
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSummoningTowerEmitter
struct ADunDefPlayer_Summoner_GetSummoningTowerEmitter_Params
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StopSpellEmitter
struct ADunDefPlayer_Summoner_StopSpellEmitter_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StartSpellEmitter
struct ADunDefPlayer_Summoner_StartSpellEmitter_Params
{
	class ADunDefEmitterSpawnable*                     Template;                                                 // (Parm)
	unsigned long                                      DontSetAsPrimaryEffect;                                   // (OptionalParm, Parm)
	unsigned long                                      IsSpawnEffect;                                            // (OptionalParm, Parm)
	unsigned long                                      bForceSpawnOnWeapon;                                      // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowDropPickups
struct ADunDefPlayer_Summoner_AllowDropPickups_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetOwnerNoSee
struct ADunDefPlayer_Summoner_SetOwnerNoSee_Params
{
	unsigned long                                      ownerNoSee;                                               // (Parm)
	unsigned long                                      ownerNoSeeWeapon;                                         // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.Died
struct ADunDefPlayer_Summoner_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetEnemyTargetingDesirability
struct ADunDefPlayer_Summoner_GetEnemyTargetingDesirability_Params
{
	class AEngineNativeDunDefAIController*             forController;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.TakeDamage
struct ADunDefPlayer_Summoner_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.PhaseScaleDown
struct ADunDefPlayer_Summoner_PhaseScaleDown_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.UsedAbility
struct ADunDefPlayer_Summoner_UsedAbility_Params
{
	class ADunDefPlayerAbility*                        ability;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.CheckForTokens
struct ADunDefPlayer_Summoner_CheckForTokens_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowFamiliarAbilities
struct ADunDefPlayer_Summoner_AllowFamiliarAbilities_Params
{
	class UHeroEquipment_Familiar*                     askingFamiliar;                                           // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AttachAllEquipment
struct ADunDefPlayer_Summoner_AttachAllEquipment_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.DetachAllEquipment
struct ADunDefPlayer_Summoner_DetachAllEquipment_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetPhased
struct ADunDefPlayer_Summoner_SetPhased_Params
{
	unsigned long                                      bNewPhaseState;                                           // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowEquipmentAttachment
struct ADunDefPlayer_Summoner_AllowEquipmentAttachment_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.Destroyed
struct ADunDefPlayer_Summoner_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StopFire
struct ADunDefPlayer_Summoner_StopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StartFire
struct ADunDefPlayer_Summoner_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSelectedTowers
struct ADunDefPlayer_Summoner_GetSelectedTowers_Params
{
	TArray<class ADunDefTower_SummonEnemy*>            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.RemoveSelectedTower
struct ADunDefPlayer_Summoner_RemoveSelectedTower_Params
{
	class ADunDefTower_SummonEnemy*                    RemoveTower;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ServerRemoveSelectedTower
struct ADunDefPlayer_Summoner_ServerRemoveSelectedTower_Params
{
	class ADunDefTower_SummonEnemy*                    RemoveTower;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.RemoveAllSelectedTowers
struct ADunDefPlayer_Summoner_RemoveAllSelectedTowers_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.HasSelectedTower
struct ADunDefPlayer_Summoner_HasSelectedTower_Params
{
	class ADunDefTower_SummonEnemy*                    chkTower;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTowerGroup
struct ADunDefPlayer_Summoner_AddSelectedTowerGroup_Params
{
	TArray<class ADunDefTower_SummonEnemy*>            newTowers;                                                // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ServerAddSelectedTower
struct ADunDefPlayer_Summoner_ServerAddSelectedTower_Params
{
	class ADunDefTower_SummonEnemy*                    newTower;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTower
struct ADunDefPlayer_Summoner_AddSelectedTower_Params
{
	class ADunDefTower_SummonEnemy*                    newTower;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ClientSetupColors
struct ADunDefPlayer_Summoner_ClientSetupColors_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetMyCustomColors
struct ADunDefPlayer_Summoner_SetMyCustomColors_Params
{
	class ADunDefPlayerController*                     aController;                                              // (Parm)
	class UDunDefHero*                                 usingHero;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.PostBeginPlay
struct ADunDefPlayer_Summoner_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ExecReplicatedFunction
struct ADunDefPlayer_Summoner_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ReplicatedEvent
struct ADunDefPlayer_Summoner_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefDecoyTarget.DTGetEnemyTargetingDesirability
struct ADunDefDecoyTarget_DTGetEnemyTargetingDesirability_Params
{
	class ADunDefEnemyController*                      forController;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDecoyTarget.DrawMyHUD
struct ADunDefDecoyTarget_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDecoyTarget.PlayDeath
struct ADunDefDecoyTarget_PlayDeath_Params
{
};

// Function DunDefSpecial.DunDefDecoyTarget.AllowHeroGUID
struct ADunDefDecoyTarget_AllowHeroGUID_Params
{
	int                                                GUID1;                                                    // (Parm)
	int                                                GUID2;                                                    // (Parm)
	int                                                GUID3;                                                    // (Parm)
	int                                                GUID4;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDecoyTarget.CanDetonate
struct ADunDefDecoyTarget_CanDetonate_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDecoyTarget.Detonate
struct ADunDefDecoyTarget_Detonate_Params
{
	int                                                SetDetonationsNumber;                                     // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefDecoyTarget.SelfDestruct
struct ADunDefDecoyTarget_SelfDestruct_Params
{
};

// Function DunDefSpecial.DunDefDecoyTarget.ScaleForHeroModifiers
struct ADunDefDecoyTarget_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function DunDefSpecial.DunDefDecoyTarget.IsClassOnIgnoreList
struct ADunDefDecoyTarget_IsClassOnIgnoreList_Params
{
	class UClass*                                      ActorClass;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDecoyTarget.SetMaxNumberOfAttackers
struct ADunDefDecoyTarget_SetMaxNumberOfAttackers_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDecoyTarget.SetActiveTime
struct ADunDefDecoyTarget_SetActiveTime_Params
{
};

// Function DunDefSpecial.DunDefDecoyTarget.DoPoke
struct ADunDefDecoyTarget_DoPoke_Params
{
};

// Function DunDefSpecial.DunDefDecoyTarget.SetDesirability
struct ADunDefDecoyTarget_SetDesirability_Params
{
};

// Function DunDefSpecial.DunDefDecoyTarget.SetHealth
struct ADunDefDecoyTarget_SetHealth_Params
{
};

// Function DunDefSpecial.DunDefDecoyTarget.Tick
struct ADunDefDecoyTarget_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefDecoyTarget.DrawMiniMapIcon
struct ADunDefDecoyTarget_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefDecoyTarget.Destroyed
struct ADunDefDecoyTarget_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefDecoyTarget.PostBeginPlay
struct ADunDefDecoyTarget_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.PreventTowerAtPoint
struct ADunDefDropOffPoint_PreventTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	float                                              towerRadius;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDropOffPoint.AllowTowerAtPoint
struct ADunDefDropOffPoint_AllowTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDropOffPoint.CheckAllowance
struct ADunDefDropOffPoint_CheckAllowance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDropOffPoint.DTGetEnemyTargetingDesirability
struct ADunDefDropOffPoint_DTGetEnemyTargetingDesirability_Params
{
	class ADunDefEnemyController*                      forController;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDropOffPoint.PostBeginPlay
struct ADunDefDropOffPoint_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDestroyed
struct ADunDefDropOffPoint_NotifyPackageDestroyed_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.Died
struct ADunDefDropOffPoint_Died_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyHealthChange
struct ADunDefDropOffPoint_NotifyHealthChange_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.PlayHitEffect
struct ADunDefDropOffPoint_PlayHitEffect_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.AdjustDamage
struct ADunDefDropOffPoint_AdjustDamage_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	int                                                DamageAmount;                                             // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.OnlyDrawHUDForOwner
struct ADunDefDropOffPoint_OnlyDrawHUDForOwner_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawMiniMapIcon
struct ADunDefDropOffPoint_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawActiveDisplay
struct ADunDefDropOffPoint_DrawActiveDisplay_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	struct FVector                                     ScreenPos;                                                // (Parm)
	float                                              Scale;                                                    // (Parm)
	float                                              Opacity;                                                  // (Parm)
	unsigned long                                      bIsMiniMap;                                               // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawMyHUD
struct ADunDefDropOffPoint_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDropOffPoint.DeactivatePoint
struct ADunDefDropOffPoint_DeactivatePoint_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.TurnOffActiveEffects
struct ADunDefDropOffPoint_TurnOffActiveEffects_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.TurnOnActiveEffects
struct ADunDefDropOffPoint_TurnOnActiveEffects_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.ActivatePoint
struct ADunDefDropOffPoint_ActivatePoint_Params
{
	int                                                maxDropOffs;                                              // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.ClearDropOffActor
struct ADunDefDropOffPoint_ClearDropOffActor_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.SetDropOffActor
struct ADunDefDropOffPoint_SetDropOffActor_Params
{
	class ADunDefPlayer*                               DoA;                                                      // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDropOff
struct ADunDefDropOffPoint_NotifyPackageDropOff_Params
{
	class ADunDefPlayer*                               theDropper;                                               // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.PlaceNewItem
struct ADunDefDropOffPoint_PlaceNewItem_Params
{
	class ADunDefPickupableItem*                       NewItem;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.IsFull
struct ADunDefDropOffPoint_IsFull_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefDropOffPoint.RemoveDropOffItem
struct ADunDefDropOffPoint_RemoveDropOffItem_Params
{
	class ADunDefPickupableItem*                       RemoveItem;                                               // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.DropOffUnFilled
struct ADunDefDropOffPoint_DropOffUnFilled_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.DropOffFilled
struct ADunDefDropOffPoint_DropOffFilled_Params
{
};

// Function DunDefSpecial.DunDefDropOffPoint.AddDropOffItem
struct ADunDefDropOffPoint_AddDropOffItem_Params
{
	class ADunDefPlayer*                               droppedOffActor;                                          // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.UpdateDropOff
struct ADunDefDropOffPoint_UpdateDropOff_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.Tick
struct ADunDefDropOffPoint_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.UnTouch
struct ADunDefDropOffPoint_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.Touch
struct ADunDefDropOffPoint_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.ExecReplicatedFunction
struct ADunDefDropOffPoint_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefDropOffPoint.ReplicatedEvent
struct ADunDefDropOffPoint_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.SetDroppingOff
struct ADunDefPickupableItem_SetDroppingOff_Params
{
	unsigned long                                      IsDroppingOff;                                            // (Parm)
	class ADunDefDropOffPoint*                         newDP;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.Destroyed
struct ADunDefPickupableItem_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefPickupableItem.NotifyHolderLost
struct ADunDefPickupableItem_NotifyHolderLost_Params
{
	class ADunDefPlayer*                               lostHolder;                                               // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.DoDestroyEffects
struct ADunDefPickupableItem_DoDestroyEffects_Params
{
};

// Function DunDefSpecial.DunDefPickupableItem.DestroyPickUp
struct ADunDefPickupableItem_DestroyPickUp_Params
{
	unsigned long                                      bFromDamage;                                              // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.PlaceAtPoint
struct ADunDefPickupableItem_PlaceAtPoint_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.DropOffItem
struct ADunDefPickupableItem_DropOffItem_Params
{
	class ADunDefDropOffPoint*                         DropOffPoint;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.DrawWaypointToMe
struct ADunDefPickupableItem_DrawWaypointToMe_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.GetDropOffWayPt
struct ADunDefPickupableItem_GetDropOffWayPt_Params
{
};

// Function DunDefSpecial.DunDefPickupableItem.OnlyDrawHUDForOwner
struct ADunDefPickupableItem_OnlyDrawHUDForOwner_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.DrawMyHUD
struct ADunDefPickupableItem_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.CanBePickedUp
struct ADunDefPickupableItem_CanBePickedUp_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.PickupItem
struct ADunDefPickupableItem_PickupItem_Params
{
	class ADunDefPlayer*                               newHolder;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.BeginBeingPickedUp
struct ADunDefPickupableItem_BeginBeingPickedUp_Params
{
	class ADunDefPlayerController*                     newHolder;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.AttachToSpawner
struct ADunDefPickupableItem_AttachToSpawner_Params
{
};

// Function DunDefSpecial.DunDefPickupableItem.InitMesh
struct ADunDefPickupableItem_InitMesh_Params
{
	class ADunDefPickupableSpawner*                    MySpawner;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.GetToolTipPriority
struct ADunDefPickupableItem_GetToolTipPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.TakesToolTipPriority
struct ADunDefPickupableItem_TakesToolTipPriority_Params
{
	TScriptInterface<class UDunDefToolTipInterface>    otherToolTip;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.ContinueDrawingToolTip
struct ADunDefPickupableItem_ContinueDrawingToolTip_Params
{
	unsigned long                                      ContinueDrawing;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.DrawToolTip
struct ADunDefPickupableItem_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	int                                                PosX;                                                     // (Parm)
	int                                                PosY;                                                     // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.AllowTowerAtPoint
struct ADunDefPickupableItem_AllowTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.CheckAllowance
struct ADunDefPickupableItem_CheckAllowance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.PreventTowerAtPoint
struct ADunDefPickupableItem_PreventTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	float                                              towerRadius;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.DrawMiniMapIcon
struct ADunDefPickupableItem_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.GetActivationOffset
struct ADunDefPickupableItem_GetActivationOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.GetActivationWeighting
struct ADunDefPickupableItem_GetActivationWeighting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.Client_Activate
struct ADunDefPickupableItem_Client_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.Server_Activate
struct ADunDefPickupableItem_Server_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      forceActivation;                                          // (OptionalParm, Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.AllowActivation
struct ADunDefPickupableItem_AllowActivation_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableItem.SetMyActiveMesh
struct ADunDefPickupableItem_SetMyActiveMesh_Params
{
	int                                                MeshIndex;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.PostBeginPlay
struct ADunDefPickupableItem_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPickupableItem.ExecReplicatedFunction
struct ADunDefPickupableItem_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableItem.ReplicatedEvent
struct ADunDefPickupableItem_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTouchForwardingActor.UnTouch
struct ADunDefTouchForwardingActor_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefTouchForwardingActor.Touch
struct ADunDefTouchForwardingActor_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTouchForwardingActor.SetTouchParent
struct ADunDefTouchForwardingActor_SetTouchParent_Params
{
	class AActor*                                      NewParent;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.PawnDied
struct ADunDefPlayerController_Delivery_PawnDied_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.NotifyTakeHit
struct ADunDefPlayerController_Delivery_NotifyTakeHit_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.DropCurrentItem
struct ADunDefPlayerController_Delivery_DropCurrentItem_Params
{
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.PickupItem
struct ADunDefPlayerController_Delivery_PickupItem_Params
{
	class ADunDefPickupableItem*                       newPickup;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.AllowedToTeleport
struct ADunDefGRI_Delivery_AllowedToTeleport_Params
{
	class APawn*                                       Teleportee;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.SetCurrentDeliveryItem
struct ADunDefGRI_Delivery_SetCurrentDeliveryItem_Params
{
	class ADunDefPickupableItem*                       NewItem;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.RemovePackageHolder
struct ADunDefGRI_Delivery_RemovePackageHolder_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.AddPackageHolder
struct ADunDefGRI_Delivery_AddPackageHolder_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.ModifyPlayerGroundSpeed
struct ADunDefGRI_Delivery_ModifyPlayerGroundSpeed_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
	float                                              theGroundSpeed;                                           // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.AllowPackageSpawn
struct ADunDefGRI_Delivery_AllowPackageSpawn_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.SetInCombatPhase
struct ADunDefGRI_Delivery_SetInCombatPhase_Params
{
	unsigned long                                      inCombatPhase;                                            // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.DrawMyHUD
struct ADunDefGRI_Delivery_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.ClearDropPoints
struct ADunDefGRI_Delivery_ClearDropPoints_Params
{
};

// Function DunDefSpecial.DunDefGRI_Delivery.NotifyLostDropOffPoint
struct ADunDefGRI_Delivery_NotifyLostDropOffPoint_Params
{
	class ADunDefDropOffPoint*                         lostPoint;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.NotifyFilledDropOffPoint
struct ADunDefGRI_Delivery_NotifyFilledDropOffPoint_Params
{
	class ADunDefDropOffPoint*                         filledPoint;                                              // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.SelectNewDropOffPoint
struct ADunDefGRI_Delivery_SelectNewDropOffPoint_Params
{
};

// Function DunDefSpecial.DunDefGRI_Delivery.Server_AddGRIHeroAbilities
struct ADunDefGRI_Delivery_Server_AddGRIHeroAbilities_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.EndBuildPhase
struct ADunDefGRI_Delivery_EndBuildPhase_Params
{
};

// Function DunDefSpecial.DunDefGRI_Delivery.Tick
struct ADunDefGRI_Delivery_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Delivery.PostBeginPlay
struct ADunDefGRI_Delivery_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.DrawMiniMapIcon
struct ADunDefEnemyCrystalCore_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.Destroyed
struct ADunDefEnemyCrystalCore_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.PostBeginPlay
struct ADunDefEnemyCrystalCore_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefFlashHeal.SpawnHealEmitter
struct ADunDefFlashHeal_SpawnHealEmitter_Params
{
	class AActor*                                      HealedActor;                                              // (Parm)
};

// Function DunDefSpecial.DunDefFlashHeal.AllowSpawn
struct ADunDefFlashHeal_AllowSpawn_Params
{
	class AActor*                                      theArchetype;                                             // (Parm)
	struct FVector                                     theLoc;                                                   // (Parm)
	struct FRotator                                    theRot;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefFlashHeal.FlashHeal
struct ADunDefFlashHeal_FlashHeal_Params
{
};

// Function DunDefSpecial.DunDefFlashHeal.PostBeginPlay
struct ADunDefFlashHeal_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefGRI_Assault.AllowedToTeleport
struct ADunDefGRI_Assault_AllowedToTeleport_Params
{
	class APawn*                                       Teleportee;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetEnemyLifeSpanMultiplier
struct ADunDefGRI_Assault_GetEnemyLifeSpanMultiplier_Params
{
	class ADunDefEnemy*                                anEnemy;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.ModifyPlayerGroundSpeed
struct ADunDefGRI_Assault_ModifyPlayerGroundSpeed_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
	float                                              theGroundSpeed;                                           // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapRangeMultiplier
struct ADunDefGRI_Assault_GetTrapRangeMultiplier_Params
{
	class ADunDefTower_DetonationType*                 aTrap;                                                    // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraRangeMultiplier
struct ADunDefGRI_Assault_GetAuraRangeMultiplier_Params
{
	class ADunDefTower_Aura*                           anAura;                                                   // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapDamageMultiplier
struct ADunDefGRI_Assault_GetTrapDamageMultiplier_Params
{
	class ADunDefTower_DetonationType*                 aTrap;                                                    // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapHealthMultiplier
struct ADunDefGRI_Assault_GetTrapHealthMultiplier_Params
{
	class ADunDefTower_DetonationType*                 aTrap;                                                    // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetStrengthDrainAuraMultiplier
struct ADunDefGRI_Assault_GetStrengthDrainAuraMultiplier_Params
{
	class ADunDefTower_AuraStrengthDrain*              anAura;                                                   // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraDamageMultiplier
struct ADunDefGRI_Assault_GetAuraDamageMultiplier_Params
{
	class ADunDefTower_Aura*                           anAura;                                                   // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraHealthMultiplier
struct ADunDefGRI_Assault_GetAuraHealthMultiplier_Params
{
	class ADunDefTower_Aura*                           anAura;                                                   // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetProjectileLimitDistance
struct ADunDefGRI_Assault_GetProjectileLimitDistance_Params
{
	class AActor*                                      anInstigator;                                             // (Parm)
	float                                              originalLimit;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.PostBeginPlay
struct ADunDefGRI_Assault_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefGRI_Assault.Tick
struct ADunDefGRI_Assault_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Assault.GetNumberOfEnemyCoresRemaining
struct ADunDefGRI_Assault_GetNumberOfEnemyCoresRemaining_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.DrawMyHUD
struct ADunDefGRI_Assault_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Assault.RestartedPlayer
struct ADunDefGRI_Assault_RestartedPlayer_Params
{
	class ADunDefPlayerController*                     NewPlayer;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Assault.CanEnterSpectatorMode
struct ADunDefGRI_Assault_CanEnterSpectatorMode_Params
{
	class ADunDefPlayerController*                     thePlayerController;                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Assault.CanRespawnPlayer
struct ADunDefGRI_Assault_CanRespawnPlayer_Params
{
	class ADunDefPlayerController*                     thePlayerController;                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.PostBeginPlay
struct ADunDefGRI_Chicken_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefGRI_Chicken.GetSpectatorWaitString
struct ADunDefGRI_Chicken_GetSpectatorWaitString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefGRI_Chicken.RestartedPlayer
struct ADunDefGRI_Chicken_RestartedPlayer_Params
{
	class ADunDefPlayerController*                     NewPlayer;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.CanEnterSpectatorMode
struct ADunDefGRI_Chicken_CanEnterSpectatorMode_Params
{
	class ADunDefPlayerController*                     thePlayerController;                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.CanRespawnPlayer
struct ADunDefGRI_Chicken_CanRespawnPlayer_Params
{
	class ADunDefPlayerController*                     thePlayerController;                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.DrawMyHUD
struct ADunDefGRI_Chicken_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.BeganCombatPhase
struct ADunDefGRI_Chicken_BeganCombatPhase_Params
{
};

// Function DunDefSpecial.DunDefGRI_Chicken.SetChickenPlayer
struct ADunDefGRI_Chicken_SetChickenPlayer_Params
{
	class ADunDefPlayer*                               theNewChickenPlayer;                                      // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.GetRandomPlayer
struct ADunDefGRI_Chicken_GetRandomPlayer_Params
{
	class ADunDefPlayer*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.Tick
struct ADunDefGRI_Chicken_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.SetInCombatPhase
struct ADunDefGRI_Chicken_SetInCombatPhase_Params
{
	unsigned long                                      inCombatPhase;                                            // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.NotifyOfChicken
struct ADunDefGRI_Chicken_NotifyOfChicken_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.ExecReplicatedFunction
struct ADunDefGRI_Chicken_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefGRI_Chicken.ReplicatedEvent
struct ADunDefGRI_Chicken_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PickUpItem.RequestPickup
struct ADunDefPlayerAbility_PickUpItem_RequestPickup_Params
{
	class ADunDefPickupableItem*                       NewItem;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetPointDropOffCount
struct UDunDefMapInfo_Delivery_GetPointDropOffCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetDUForWave
struct UDunDefMapInfo_Delivery_GetDUForWave_Params
{
	int                                                waveNumber;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetTimeLimit
struct UDunDefMapInfo_Delivery_GetTimeLimit_Params
{
	int                                                waveNumber;                                               // (Parm)
	int                                                difficulty;                                               // (Parm)
	int                                                NumPlayers;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetWaveDropOffCount
struct UDunDefMapInfo_Delivery_GetWaveDropOffCount_Params
{
	int                                                waveNumber;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefManaToken_Golden.Collected
struct ADunDefManaToken_Golden_Collected_Params
{
	class ADunDefPlayer*                               byPlayer;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.DrawMyHUD
struct ADunDefGRI_GoldenTokens_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.SetInCombatPhase
struct ADunDefGRI_GoldenTokens_SetInCombatPhase_Params
{
	unsigned long                                      inCombatPhase;                                            // (Parm)
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.CollectedGoldenToken
struct ADunDefGRI_GoldenTokens_CollectedGoldenToken_Params
{
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.PawnDied
struct ADunDefGRI_GoldenTokens_PawnDied_Params
{
	class APawn*                                       KilledPawn;                                               // (Parm)
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.SetGoldenEnemy
struct ADunDefGRI_GoldenTokens_SetGoldenEnemy_Params
{
	class ADunDefEnemy*                                Enemy;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.PostBeginPlay
struct ADunDefGRI_GoldenTokens_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.Tick
struct ADunDefGRI_GoldenTokens_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.ReplicatedEvent
struct ADunDefGRI_GoldenTokens_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.GetSpectatorWaitString
struct ADunDefGRI_KillEnemiesTimeLimit_GetSpectatorWaitString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.RestartedPlayer
struct ADunDefGRI_KillEnemiesTimeLimit_RestartedPlayer_Params
{
	class ADunDefPlayerController*                     NewPlayer;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanEnterSpectatorMode
struct ADunDefGRI_KillEnemiesTimeLimit_CanEnterSpectatorMode_Params
{
	class ADunDefPlayerController*                     thePlayerController;                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanRespawnPlayer
struct ADunDefGRI_KillEnemiesTimeLimit_CanRespawnPlayer_Params
{
	class ADunDefPlayerController*                     thePlayerController;                                      // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.DrawMyHUD
struct ADunDefGRI_KillEnemiesTimeLimit_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.ReceivedGameClass
struct ADunDefGRI_KillEnemiesTimeLimit_ReceivedGameClass_Params
{
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.SetInCombatPhase
struct ADunDefGRI_KillEnemiesTimeLimit_SetInCombatPhase_Params
{
	unsigned long                                      inCombatPhase;                                            // (Parm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.PostBeginPlay
struct ADunDefGRI_KillEnemiesTimeLimit_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.Tick
struct ADunDefGRI_KillEnemiesTimeLimit_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit.GetTimeLimit
struct UDunDefMapInfo_KillEnemiesTimeLimit_GetTimeLimit_Params
{
	int                                                waveNumber;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.GetPlayerList
struct UUI_GlobalHUDUberMF_GetPlayerList_Params
{
	struct FString                                     pList;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sList;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.GetColorString
struct UUI_GlobalHUDUberMF_GetColorString_Params
{
	struct FColor                                      aColor;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.UpdateScorePanel
struct UUI_GlobalHUDUberMF_UpdateScorePanel_Params
{
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.Update
struct UUI_GlobalHUDUberMF_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.Tick
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.ReadToShowStats
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_ReadToShowStats_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelColor
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_GetGameOverLabelColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelColor
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_GetVictoryLabelColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelString
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_GetGameOverLabelString_Params
{
	class APlayerReplicationInfo*                      myPlayer;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelString
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_GetVictoryLabelString_Params
{
	class APlayerReplicationInfo*                      myPlayer;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.OverrideEndGameLabel
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_OverrideEndGameLabel_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetMVP
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_GetMVP_Params
{
	class ADunDefPlayerReplicationInfo*                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.DoLevelVictory
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_DoLevelVictory_Params
{
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.ReceivedGameClass
struct ADunDefGRI_OgreAlly_ReceivedGameClass_Params
{
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.SetInCombatPhase
struct ADunDefGRI_OgreAlly_SetInCombatPhase_Params
{
	unsigned long                                      inCombatPhase;                                            // (Parm)
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.PostBeginPlay
struct ADunDefGRI_OgreAlly_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefGRI_UberAssault.Tick
struct ADunDefGRI_UberAssault_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_UberDefense.Tick
struct ADunDefGRI_UberDefense_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_VDay2.PostBeginPlay
struct ADunDefGRI_VDay2_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefGRI_VDay2.Tick
struct ADunDefGRI_VDay2_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefGRI_VDay2.DrawMyHUD
struct ADunDefGRI_VDay2_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefGRI_VDay2.GetGameOverString
struct ADunDefGRI_VDay2_GetGameOverString_Params
{
	int                                                GameOverType;                                             // (Parm)
	int                                                gameOverNumberAppend;                                     // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefGRI_VDay2.DrawExtraEnemyMinimapIcon
struct ADunDefGRI_VDay2_DrawExtraEnemyMinimapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
	class ADunDefEnemy*                                Enemy;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefGRI_VDay2.PrintPairMatch
struct ADunDefGRI_VDay2_PrintPairMatch_Params
{
	class ADunDefEnemy*                                aPairMatch1;                                              // (Parm)
	class ADunDefEnemy*                                aPairMatch2;                                              // (Parm)
};

// Function DunDefSpecial.DunDefGRI_VDay2.ExecReplicatedFunction
struct ADunDefGRI_VDay2_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootRight
struct ADunDefHarbinger_v2_FireAttackShootRight_Params
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootLeft
struct ADunDefHarbinger_v2_FireAttackShootLeft_Params
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackBegin
struct ADunDefHarbinger_v2_FireAttackBegin_Params
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.PostBeginPlay
struct ADunDefHarbinger_v2_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.GetProjectileSpawnTransformation
struct ADunDefHarbinger_v2_GetProjectileSpawnTransformation_Params
{
	struct FName                                       socketToUse;                                              // (Parm)
	struct FVector                                     Position;                                                 // (Parm, OutParm)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm)
};

// Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingAttackAnimation
struct ADunDefHarbinger_v2_IsCurrentlyPlayingAttackAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayShootFireAnimation
struct ADunDefHarbinger_v2_PlayShootFireAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingChargeAnimation
struct ADunDefHarbinger_v2_IsCurrentlyPlayingChargeAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayChargeFireAnimation
struct ADunDefHarbinger_v2_PlayChargeFireAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayHurtAnimation
struct ADunDefHarbinger_v2_PlayHurtAnimation_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayJumpAnimation
struct ADunDefHarbinger_v2_PlayJumpAnimation_Params
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.ExecReplicatedFunction
struct ADunDefHarbinger_v2_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefHarbingerController_v2.PawnDied
struct ADunDefHarbingerController_v2_PawnDied_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefHarbingerController_v2.CheckPlayer
struct ADunDefHarbingerController_v2_CheckPlayer_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefHarbingerController_v2.CheckForNearbyPlayers
struct ADunDefHarbingerController_v2_CheckForNearbyPlayers_Params
{
};

// Function DunDefSpecial.DunDefHarbingerController_v2.ObstructionJump
struct ADunDefHarbingerController_v2_ObstructionJump_Params
{
	struct FVector                                     jumpForwardDir;                                           // (Parm)
	struct FVector                                     jumpSideDir;                                              // (Parm)
};

// Function DunDefSpecial.DunDefHarbingerController_v2.NotifyTakeHitEX
struct ADunDefHarbingerController_v2_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefSpecial.DunDefHarbingerController_v2.PostBeginPlay
struct ADunDefHarbingerController_v2_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefHarbingerController_v2.FireProjectiles
struct ADunDefHarbingerController_v2_FireProjectiles_Params
{
	struct FName                                       socketToUse;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.AdjustDamage
struct ADunDefPickupableSpawner_AdjustDamage_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	int                                                DamageAmount;                                             // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.OnlyDrawHUDForOwner
struct ADunDefPickupableSpawner_OnlyDrawHUDForOwner_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawMyHUD
struct ADunDefPickupableSpawner_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawToolTip
struct ADunDefPickupableSpawner_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	int                                                PosX;                                                     // (Parm)
	int                                                PosY;                                                     // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.ChangedGamePhases
struct ADunDefPickupableSpawner_ChangedGamePhases_Params
{
	unsigned long                                      IsCombatPhase;                                            // (Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyPickUp
struct ADunDefPickupableSpawner_NotifyPickUp_Params
{
	class ADunDefPickupableItem*                       pickedupItem;                                             // (Parm)
	class ADunDefPlayer*                               playerPickUp;                                             // (Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyDestroyed
struct ADunDefPickupableSpawner_NotifyDestroyed_Params
{
	class ADunDefPickupableItem*                       droppedItem;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyDrop
struct ADunDefPickupableSpawner_NotifyDrop_Params
{
	class ADunDefPickupableItem*                       droppedItem;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetSpawnLocandRot
struct ADunDefPickupableSpawner_GetSpawnLocandRot_Params
{
	struct FVector                                     sLoc;                                                     // (Parm, OutParm)
	struct FRotator                                    sRot;                                                     // (Parm, OutParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.ActivateEffects
struct ADunDefPickupableSpawner_ActivateEffects_Params
{
	unsigned long                                      bTurnOn;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.SpawnPickUpItem
struct ADunDefPickupableSpawner_SpawnPickUpItem_Params
{
	unsigned long                                      bForceSpawn;                                              // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.PostBeginPlay
struct ADunDefPickupableSpawner_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPickupableSpawner.AllowTowerAtPoint
struct ADunDefPickupableSpawner_AllowTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.CheckAllowance
struct ADunDefPickupableSpawner_CheckAllowance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.PreventTowerAtPoint
struct ADunDefPickupableSpawner_PreventTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	float                                              towerRadius;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawMiniMapIcon
struct ADunDefPickupableSpawner_DrawMiniMapIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class ADunDefMiniMap*                              MiniMap;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.Client_Activate
struct ADunDefPickupableSpawner_Client_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetActivationOffset
struct ADunDefPickupableSpawner_GetActivationOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetActivationWeighting
struct ADunDefPickupableSpawner_GetActivationWeighting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.Server_Activate
struct ADunDefPickupableSpawner_Server_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      forceActivation;                                          // (OptionalParm, Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.AllowActivation
struct ADunDefPickupableSpawner_AllowActivation_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPickupableSpawner.ReplicatedEvent
struct ADunDefPickupableSpawner_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetOwnerNoSee
struct ADunDefPlayer_DualMelee_SetOwnerNoSee_Params
{
	unsigned long                                      ownerNoSee;                                               // (Parm)
	unsigned long                                      ownerNoSeeWeapon;                                         // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AutoActivateSecondaryWeapon
struct ADunDefPlayer_DualMelee_AutoActivateSecondaryWeapon_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AllowNegativeStatusAffecting
struct ADunDefPlayer_DualMelee_AllowNegativeStatusAffecting_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetAlternateStance
struct ADunDefPlayer_DualMelee_GetAlternateStance_Params
{
	class ADunDefPlayerAbility_StanceBase*             askingStance;                                             // (Parm)
	class ADunDefPlayerAbility_StanceBase*             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetWeaponSpeedMultiplier
struct ADunDefPlayer_DualMelee_SetWeaponSpeedMultiplier_Params
{
	float                                              newMult;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetOverrideSocketName
struct ADunDefPlayer_DualMelee_GetOverrideSocketName_Params
{
	class ADunDefWeapon*                               theWeapon;                                                // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.JumpOffPawn
struct ADunDefPlayer_DualMelee_JumpOffPawn_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ShouldPlayHurtAnimation
struct ADunDefPlayer_DualMelee_ShouldPlayHurtAnimation_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	int                                                Result;                                                   // (Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetOffhandWeaponSwingDamage
struct ADunDefPlayer_DualMelee_AnimNotify_ResetOffhandWeaponSwingDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopOffhandWeaponSwingDamage
struct ADunDefPlayer_DualMelee_AnimNotify_StopOffhandWeaponSwingDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartOffhandWeaponSwingDamage
struct ADunDefPlayer_DualMelee_AnimNotify_StartOffhandWeaponSwingDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetWeaponSwingDamage
struct ADunDefPlayer_DualMelee_AnimNotify_ResetWeaponSwingDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopWeaponSwingDamage
struct ADunDefPlayer_DualMelee_AnimNotify_StopWeaponSwingDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartWeaponSwingDamage
struct ADunDefPlayer_DualMelee_AnimNotify_StartWeaponSwingDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.Destroyed
struct ADunDefPlayer_DualMelee_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AdjustDamage
struct ADunDefPlayer_DualMelee_AdjustDamage_Params
{
	int                                                inDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GivePlayerHitInfo
struct ADunDefPlayer_DualMelee_GivePlayerHitInfo_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	int                                                dealtDamage;                                              // (Parm)
	unsigned long                                      bAllowMomentumOverride;                                   // (Parm)
	struct FVector                                     appliedMomentum;                                          // (Parm, OutParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.Tick
struct ADunDefPlayer_DualMelee_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_Off
struct ADunDefPlayer_DualMelee_AnimNotify_CurrentAbility_Off_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_On
struct ADunDefPlayer_DualMelee_AnimNotify_CurrentAbility_On_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceBlend
struct ADunDefPlayer_DualMelee_DoStanceBlend_Params
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DeActivateStance
struct ADunDefPlayer_DualMelee_DeActivateStance_Params
{
	class ADunDefPlayerAbility_StanceBase*             oldStance;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ActivateStance
struct ADunDefPlayer_DualMelee_ActivateStance_Params
{
	class ADunDefPlayerAbility_StanceBase*             newStance;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetMeleeSwingInfoOverride
struct ADunDefPlayer_DualMelee_GetMeleeSwingInfoOverride_Params
{
	class ADunDefWeapon_MeleeSword*                    overrideForWeap;                                          // (Parm)
	int                                                currentMeleeSwingIndex;                                   // (Parm, OutParm)
	struct FMeleeSwingInfo                             OverrideInfo;                                             // (Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.OverrideMeleeSwingInfo
struct ADunDefPlayer_DualMelee_OverrideMeleeSwingInfo_Params
{
	class ADunDefWeapon_MeleeSword*                    askingWeapon;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CheckAllowMelee
struct ADunDefPlayer_DualMelee_CheckAllowMelee_Params
{
	class ADunDefWeapon_MeleeSword*                    weaponCheck;                                              // (Parm)
	unsigned long                                      checkAnimDuration;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CheckPlayingCustomAnim
struct ADunDefPlayer_DualMelee_CheckPlayingCustomAnim_Params
{
	struct FName                                       inAnim;                                                   // (Parm)
	float                                              TimeFromEndToConsiderFinished;                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.StopFire
struct ADunDefPlayer_DualMelee_StopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStopFire
struct ADunDefPlayer_DualMelee_ServerStopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetComboInfo
struct ADunDefPlayer_DualMelee_SetComboInfo_Params
{
	class ADunDefWeapon_MeleeSword*                    comboWeapon;                                              // (Parm)
	unsigned long                                      bMainHand;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceCheck
struct ADunDefPlayer_DualMelee_DoStanceCheck_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.StartFire
struct ADunDefPlayer_DualMelee_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStartFire
struct ADunDefPlayer_DualMelee_ServerStartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetOffHandSocketName
struct ADunDefPlayer_DualMelee_GetOffHandSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AllowDualWeapon
struct ADunDefPlayer_DualMelee_AllowDualWeapon_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CreateContainedInventoryFromTemplate
struct ADunDefPlayer_DualMelee_CreateContainedInventoryFromTemplate_Params
{
	class AActor*                                      InventoryActorTemplate;                                   // (Parm)
	unsigned long                                      bDoNotActivate;                                           // (OptionalParm, Parm)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetOffHandWeapon
struct ADunDefPlayer_DualMelee_SetOffHandWeapon_Params
{
	class ADunDefWeapon_MeleeSword*                    newOffHandWeap;                                           // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SwapOffHandWeaponFor
struct ADunDefPlayer_DualMelee_SwapOffHandWeaponFor_Params
{
	class ADunDefWeapon*                               weaponTemplate;                                           // (Parm)
	class UHeroEquipment*                              equipmentRef;                                             // (Parm)
	class ADunDefWeapon*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SwapWeaponFor
struct ADunDefPlayer_DualMelee_SwapWeaponFor_Params
{
	class ADunDefWeapon*                               weaponTemplate;                                           // (Parm)
	class UHeroEquipment*                              equipmentRef;                                             // (Parm)
	class ADunDefWeapon*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.HasLightningStance
struct ADunDefPlayer_DualMelee_HasLightningStance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.PostBeginPlay
struct ADunDefPlayer_DualMelee_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowNegativeStatusAffecting
struct ADunDefPlayerAbility_StanceBase_AllowNegativeStatusAffecting_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.ResetWeaponDamage
struct ADunDefPlayerAbility_StanceBase_ResetWeaponDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopOffHandWeaponDamage
struct ADunDefPlayerAbility_StanceBase_StopOffHandWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopWeaponDamage
struct ADunDefPlayerAbility_StanceBase_StopWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartOffHandWeaponDamage
struct ADunDefPlayerAbility_StanceBase_StartOffHandWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartWeaponDamage
struct ADunDefPlayerAbility_StanceBase_StartWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GivePlayerHitInfo
struct ADunDefPlayerAbility_StanceBase_GivePlayerHitInfo_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	int                                                dealtDamage;                                              // (Parm)
	unsigned long                                      bAllowMomentumOverride;                                   // (Parm)
	struct FVector                                     appliedMomentum;                                          // (Parm, OutParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_Off
struct ADunDefPlayerAbility_StanceBase_AnimNotify_CurrentAbility_Off_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_On
struct ADunDefPlayerAbility_StanceBase_AnimNotify_CurrentAbility_On_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStanceCancel
struct ADunDefPlayerAbility_StanceBase_AllowStanceCancel_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckDoStanceAttack
struct ADunDefPlayerAbility_StanceBase_CheckDoStanceAttack_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetMultiplierValue
struct ADunDefPlayerAbility_StanceBase_GetMultiplierValue_Params
{
	struct FStatMultipliers                            multiplierCheck;                                          // (Parm)
	unsigned long                                      bDoLog;                                                   // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckStatus
struct ADunDefPlayerAbility_StanceBase_CheckStatus_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetAbilityStatus
struct ADunDefPlayerAbility_StanceBase_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.OnActivate
struct ADunDefPlayerAbility_StanceBase_OnActivate_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStepTowards
struct ADunDefPlayerAbility_StanceBase_AllowStepTowards_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerMomentumMultiplier
struct ADunDefPlayerAbility_StanceBase_GetPlayerMomentumMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackKnockbackMultiplier
struct ADunDefPlayerAbility_StanceBase_GetPlayerAttackKnockbackMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackSpeedMultiplier
struct ADunDefPlayerAbility_StanceBase_GetPlayerAttackSpeedMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.PlayActivationAnimation
struct ADunDefPlayerAbility_StanceBase_PlayActivationAnimation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.OnActivate
struct ADunDefPlayerAbility_LeapSlam_OnActivate_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetCostToActivate
struct ADunDefPlayerAbility_LeapSlam_GetCostToActivate_Params
{
	unsigned long                                      returnTrueValue;                                          // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.RequestActivation
struct ADunDefPlayerAbility_LeapSlam_RequestActivation_Params
{
	unsigned long                                      bHeld;                                                    // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.HasNoAutoAim
struct ADunDefPlayerAbility_LeapSlam_HasNoAutoAim_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetAbilityStatus
struct ADunDefPlayerAbility_LeapSlam_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetMomentum
struct ADunDefPlayerAbility_LeapSlam_GetMomentum_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetElementalDamage
struct ADunDefPlayerAbility_LeapSlam_GetElementalDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetDamage
struct ADunDefPlayerAbility_LeapSlam_GetDamage_Params
{
	class ADunDefWeapon_MeleeSword*                    weaponCheck;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_Off
struct ADunDefPlayerAbility_LeapSlam_AnimNotify_CurrentAbility_Off_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_On
struct ADunDefPlayerAbility_LeapSlam_AnimNotify_CurrentAbility_On_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ConsumesInputWhenActive
struct ADunDefPlayerAbility_LeapSlam_ConsumesInputWhenActive_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.DoTimeOut
struct ADunDefPlayerAbility_LeapSlam_DoTimeOut_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetLeapVelocity
struct ADunDefPlayerAbility_LeapSlam_GetLeapVelocity_Params
{
	struct FVector                                     End;                                                      // (Parm)
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     JumpVelocity;                                             // (Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.CancelAbility
struct ADunDefPlayerAbility_LeapSlam_CancelAbility_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PlayStopAnim
struct ADunDefPlayerAbility_LeapSlam_PlayStopAnim_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ShutOffVFX
struct ADunDefPlayerAbility_LeapSlam_ShutOffVFX_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ActivateHandVFX
struct ADunDefPlayerAbility_LeapSlam_ActivateHandVFX_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PushCheck
struct ADunDefPlayerAbility_LeapSlam_PushCheck_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ExecReplicatedFunction
struct ADunDefPlayerAbility_LeapSlam_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ReplicatedEvent
struct ADunDefPlayerAbility_LeapSlam_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.StaticGetOverrideSocketName
struct ADunDefPlayer_Jester_StaticGetOverrideSocketName_Params
{
	class UDunDefHero*                                 aHero;                                                    // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetOverrideSocketName
struct ADunDefPlayer_Jester_GetOverrideSocketName_Params
{
	class ADunDefWeapon*                               theWeapon;                                                // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapAnimSets
struct ADunDefPlayer_Jester_SwapAnimSets_Params
{
	class ADunDefWeapon*                               NewWeapon;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.WeaponSet
struct ADunDefPlayer_Jester_WeaponSet_Params
{
	class AWeapon*                                     NewWeapon;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.DrawMyHUD
struct ADunDefPlayer_Jester_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.Tick
struct ADunDefPlayer_Jester_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetWeaponIcon
struct ADunDefPlayer_Jester_GetWeaponIcon_Params
{
	unsigned long                                      bOffHand;                                                 // (Parm)
	class UMaterialInstanceConstant*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.DrawWeaponIcons
struct ADunDefPlayer_Jester_DrawWeaponIcons_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class ADunDefWeapon*                               weapDraw;                                                 // (Parm)
	float                                              weapOpacity;                                              // (Parm)
	int                                                paddingIndex;                                             // (Parm)
	unsigned long                                      bSelected;                                                // (Parm)
	float                                              hudScale;                                                 // (Parm)
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.Destroyed
struct ADunDefPlayer_Jester_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefPlayer_Jester.CreateContainedInventoryFromTemplate
struct ADunDefPlayer_Jester_CreateContainedInventoryFromTemplate_Params
{
	class AActor*                                      InventoryActorTemplate;                                   // (Parm)
	unsigned long                                      bDoNotActivate;                                           // (OptionalParm, Parm)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapOffHandWeaponFor
struct ADunDefPlayer_Jester_SwapOffHandWeaponFor_Params
{
	class ADunDefWeapon*                               weaponTemplate;                                           // (Parm)
	class UHeroEquipment*                              equipmentRef;                                             // (Parm)
	class ADunDefWeapon*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.DoWeaponSwap
struct ADunDefPlayer_Jester_DoWeaponSwap_Params
{
	unsigned long                                      bForceSwap;                                               // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.ServerDoSwap
struct ADunDefPlayer_Jester_ServerDoSwap_Params
{
	unsigned long                                      bForceSwap;                                               // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.SetNewMainWeapon
struct ADunDefPlayer_Jester_SetNewMainWeapon_Params
{
	class AWeapon*                                     theNewWeapon;                                             // (Parm)
	unsigned long                                      bRemoveExisting;                                          // (Parm)
	class UHeroEquipment*                              equipRef;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.SetStoredWeapon
struct ADunDefPlayer_Jester_SetStoredWeapon_Params
{
	class AWeapon*                                     newStoredWeapon;                                          // (Parm)
	class UHeroEquipment*                              equipRef;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetShootAnim
struct ADunDefPlayer_Jester_GetShootAnim_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.ForceWeaponActivationOverride
struct ADunDefPlayer_Jester_ForceWeaponActivationOverride_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapWeaponFor
struct ADunDefPlayer_Jester_SwapWeaponFor_Params
{
	class ADunDefWeapon*                               weaponTemplate;                                           // (Parm)
	class UHeroEquipment*                              equipmentRef;                                             // (Parm)
	class ADunDefWeapon*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.AllowDualWeapon
struct ADunDefPlayer_Jester_AllowDualWeapon_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_Jester.ExecReplicatedFunction
struct ADunDefPlayer_Jester_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PostBeginPlay
struct ADunDefPlayer_SeriesEv_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StopHovering
struct ADunDefPlayer_SeriesEv_StopHovering_Params
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StartHovering
struct ADunDefPlayer_SeriesEv_StartHovering_Params
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.Tick
struct ADunDefPlayer_SeriesEv_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.UsedAbility
struct ADunDefPlayer_SeriesEv_UsedAbility_Params
{
	class ADunDefPlayerAbility*                        ability;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetActiveChargeAbility
struct ADunDefPlayer_SeriesEv_SetActiveChargeAbility_Params
{
	class ADunDefPlayerAbility_ManaCharge*             newCharge;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetManaTokenAttractionRadius
struct ADunDefPlayer_SeriesEv_GetManaTokenAttractionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.HasMaxManaPower
struct ADunDefPlayer_SeriesEv_HasMaxManaPower_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.TryTokenCollection
struct ADunDefPlayer_SeriesEv_TryTokenCollection_Params
{
	class ADunDefManaToken*                            Token;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.IsCurrentlyPlayingHurtAnimation
struct ADunDefPlayer_SeriesEv_IsCurrentlyPlayingHurtAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayHurtAnimation
struct ADunDefPlayer_SeriesEv_PlayHurtAnimation_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ShouldOverrideWeaponElementalEffects
struct ADunDefPlayer_SeriesEv_ShouldOverrideWeaponElementalEffects_Params
{
	class ADunDefWeapon*                               weaponCheck;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StopFire
struct ADunDefPlayer_SeriesEv_StopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayJumpAnimation
struct ADunDefPlayer_SeriesEv_PlayJumpAnimation_Params
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StartFire
struct ADunDefPlayer_SeriesEv_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PutArmDown
struct ADunDefPlayer_SeriesEv_PutArmDown_Params
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayShootAnimation
struct ADunDefPlayer_SeriesEv_PlayShootAnimation_Params
{
	unsigned long                                      isBigShoot;                                               // (OptionalParm, Parm)
	unsigned long                                      Replicate;                                                // (OptionalParm, Parm)
	unsigned long                                      bDontPlayAnim;                                            // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ForceUseInstigatorForMuzzle
struct ADunDefPlayer_SeriesEv_ForceUseInstigatorForMuzzle_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.CanReload
struct ADunDefPlayer_SeriesEv_CanReload_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetWeaponIcon
struct ADunDefPlayer_SeriesEv_GetWeaponIcon_Params
{
	unsigned long                                      bOffHand;                                                 // (Parm)
	class UMaterialInstanceConstant*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawWeaponIcons
struct ADunDefPlayer_SeriesEv_DrawWeaponIcons_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class ADunDefWeapon*                               weapDraw;                                                 // (Parm)
	float                                              weapOpacity;                                              // (Parm)
	int                                                paddingIndex;                                             // (Parm)
	unsigned long                                      bSelected;                                                // (Parm)
	float                                              hudScale;                                                 // (Parm)
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawMyHUD
struct ADunDefPlayer_SeriesEv_DrawMyHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.Destroyed
struct ADunDefPlayer_SeriesEv_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.CreateContainedInventoryFromTemplate
struct ADunDefPlayer_SeriesEv_CreateContainedInventoryFromTemplate_Params
{
	class AActor*                                      InventoryActorTemplate;                                   // (Parm)
	unsigned long                                      bDoNotActivate;                                           // (OptionalParm, Parm)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapOffHandWeaponFor
struct ADunDefPlayer_SeriesEv_SwapOffHandWeaponFor_Params
{
	class ADunDefWeapon*                               weaponTemplate;                                           // (Parm)
	class UHeroEquipment*                              equipmentRef;                                             // (Parm)
	class ADunDefWeapon*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DoWeaponSwap
struct ADunDefPlayer_SeriesEv_DoWeaponSwap_Params
{
	unsigned long                                      bForceSwap;                                               // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ServerDoSwap
struct ADunDefPlayer_SeriesEv_ServerDoSwap_Params
{
	unsigned long                                      bForceSwap;                                               // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetNewMainWeapon
struct ADunDefPlayer_SeriesEv_SetNewMainWeapon_Params
{
	class AWeapon*                                     theNewWeapon;                                             // (Parm)
	unsigned long                                      bRemoveExisting;                                          // (Parm)
	class UHeroEquipment*                              equipRef;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetStoredWeapon
struct ADunDefPlayer_SeriesEv_SetStoredWeapon_Params
{
	class AWeapon*                                     newStoredWeapon;                                          // (Parm)
	class UHeroEquipment*                              equipRef;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapWeaponFor
struct ADunDefPlayer_SeriesEv_SwapWeaponFor_Params
{
	class ADunDefWeapon*                               weaponTemplate;                                           // (Parm)
	class UHeroEquipment*                              equipmentRef;                                             // (Parm)
	class ADunDefWeapon*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetOffHandSocketName
struct ADunDefPlayer_SeriesEv_GetOffHandSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.OverrideWeaponAttach
struct ADunDefPlayer_SeriesEv_OverrideWeaponAttach_Params
{
	class ADunDefWeapon*                               weaponCheck;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.AllowDualWeapon
struct ADunDefPlayer_SeriesEv_AllowDualWeapon_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ExecReplicatedFunction
struct ADunDefPlayer_SeriesEv_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetAbilityStatus
struct ADunDefPlayerAbility_ManaCharge_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AllowUsageDuringCastingStates
struct ADunDefPlayerAbility_ManaCharge_AllowUsageDuringCastingStates_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DrawChargeBar
struct ADunDefPlayerAbility_ManaCharge_DrawChargeBar_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetCooldownStartTime
struct ADunDefPlayerAbility_ManaCharge_GetCooldownStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ShouldDrawManaBar
struct ADunDefPlayerAbility_ManaCharge_ShouldDrawManaBar_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StopEffects
struct ADunDefPlayerAbility_ManaCharge_StopEffects_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStopFire
struct ADunDefPlayerAbility_ManaCharge_NotifyStopFire_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerStartDamage
struct ADunDefPlayerAbility_ManaCharge_ServerStartDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStartFire
struct ADunDefPlayerAbility_ManaCharge_NotifyStartFire_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ActivateEffects
struct ADunDefPlayerAbility_ManaCharge_ActivateEffects_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetSocketName
struct ADunDefPlayerAbility_ManaCharge_GetSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AttachParticles
struct ADunDefPlayerAbility_ManaCharge_AttachParticles_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetDamage
struct ADunDefPlayerAbility_ManaCharge_GetDamage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ResetManaCharge
struct ADunDefPlayerAbility_ManaCharge_ResetManaCharge_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AddManaCharge
struct ADunDefPlayerAbility_ManaCharge_AddManaCharge_Params
{
	int                                                addedMana;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.SpawnManaEffect
struct ADunDefPlayerAbility_ManaCharge_SpawnManaEffect_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerCollectManaToken
struct ADunDefPlayerAbility_ManaCharge_ServerCollectManaToken_Params
{
	class ADunDefManaToken*                            Token;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.InCylinderFwd
struct ADunDefPlayerAbility_ManaCharge_InCylinderFwd_Params
{
	struct FVector                                     Origin;                                                   // (Parm)
	struct FVector                                     VDir;                                                     // (Parm)
	float                                              RadiusSq;                                                 // (Parm)
	struct FVector                                     A;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DoDamage
struct ADunDefPlayerAbility_ManaCharge_DoDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CheckForFire
struct ADunDefPlayerAbility_ManaCharge_CheckForFire_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetTimeBasedOnCharge
struct ADunDefPlayerAbility_ManaCharge_GetTimeBasedOnCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamage
struct ADunDefPlayerAbility_ManaCharge_StartDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamageEffects
struct ADunDefPlayerAbility_ManaCharge_StartDamageEffects_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CanHoldMoreCharge
struct ADunDefPlayerAbility_ManaCharge_CanHoldMoreCharge_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CancelAbility
struct ADunDefPlayerAbility_ManaCharge_CancelAbility_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.OnActivate
struct ADunDefPlayerAbility_ManaCharge_OnActivate_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.PostBeginPlay
struct ADunDefPlayerAbility_ManaCharge_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ExecReplicatedFunction
struct ADunDefPlayerAbility_ManaCharge_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.AllowUsageDuringCastingStates
struct ADunDefPlayerAbility_PhaseShift_AllowUsageDuringCastingStates_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetCastingStateNamePC
struct ADunDefPlayerAbility_PhaseShift_GetCastingStateNamePC_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.CancelAbility
struct ADunDefPlayerAbility_PhaseShift_CancelAbility_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ClientForceCancel
struct ADunDefPlayerAbility_PhaseShift_ClientForceCancel_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ForceCancel
struct ADunDefPlayerAbility_PhaseShift_ForceCancel_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseMaterials
struct ADunDefPlayerAbility_PhaseShift_SetPhaseMaterials_Params
{
	unsigned long                                      bPhasedMaterials;                                         // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.StartScaleUp
struct ADunDefPlayerAbility_PhaseShift_StartScaleUp_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetMaterialColors
struct ADunDefPlayerAbility_PhaseShift_SetMaterialColors_Params
{
	struct FLinearColor                                C1;                                                       // (Parm)
	struct FLinearColor                                c2;                                                       // (Parm)
	struct FLinearColor                                C3;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.OnActivate
struct ADunDefPlayerAbility_PhaseShift_OnActivate_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetDefaultValues
struct ADunDefPlayerAbility_PhaseShift_SetDefaultValues_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseShiftValue
struct ADunDefPlayerAbility_PhaseShift_SetPhaseShiftValue_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PhaseScaleDown
struct ADunDefPlayerAbility_PhaseShift_PhaseScaleDown_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetAbilityStatus
struct ADunDefPlayerAbility_PhaseShift_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.FinishScaleUp
struct ADunDefPlayerAbility_PhaseShift_FinishScaleUp_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.InitializeForPlayer
struct ADunDefPlayerAbility_PhaseShift_InitializeForPlayer_Params
{
	class ADunDefPlayer*                               myPlayer;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PostBeginPlay
struct ADunDefPlayerAbility_PhaseShift_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ExecReplicatedFunction
struct ADunDefPlayerAbility_PhaseShift_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ReplicatedEvent
struct ADunDefPlayerAbility_PhaseShift_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostBeginPlay
struct ADunDefPlayerAbility_BuilTripWire_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CancelAbility
struct ADunDefPlayerAbility_BuilTripWire_CancelAbility_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AllowTowerPlacementPosition
struct ADunDefPlayerAbility_BuilTripWire_AllowTowerPlacementPosition_Params
{
	struct FVector                                     placementPos;                                             // (Parm)
	int                                                PlacementDeniedReason;                                    // (OptionalParm, Parm, OutParm)
	unsigned long                                      bOnlyCheckVolumes;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetCenterLocation
struct ADunDefPlayerAbility_BuilTripWire_GetCenterLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CanPlaceTowerUnitCost
struct ADunDefPlayerAbility_BuilTripWire_CanPlaceTowerUnitCost_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetDUCost
struct ADunDefPlayerAbility_BuilTripWire_GetDUCost_Params
{
	unsigned long                                      bUseCustomEndLoc;                                         // (OptionalParm, Parm)
	struct FVector                                     endLoc;                                                   // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.DrawCastingHUD
struct ADunDefPlayerAbility_BuilTripWire_DrawCastingHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CreateNewPreviewPoint
struct ADunDefPlayerAbility_BuilTripWire_CreateNewPreviewPoint_Params
{
	struct FVector                                     previewLoc;                                               // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ClearPreviewPoints
struct ADunDefPlayerAbility_BuilTripWire_ClearPreviewPoints_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerAddPlacementPoint
struct ADunDefPlayerAbility_BuilTripWire_ServerAddPlacementPoint_Params
{
	struct FVector                                     tPlacementLocation;                                       // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostPlacementUpdate
struct ADunDefPlayerAbility_BuilTripWire_PostPlacementUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerRequestBuildTower
struct ADunDefPlayerAbility_BuilTripWire_ServerRequestBuildTower_Params
{
	struct FVector                                     towerPlacementLocation;                                   // (Parm)
	struct FRotator                                    towerPlacementRotation;                                   // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AbilityTick
struct ADunDefPlayerAbility_BuilTripWire_AbilityTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.HidePreviewPoints
struct ADunDefPlayerAbility_BuilTripWire_HidePreviewPoints_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFXCompleted
struct ADunDefPlayerAbility_BuilTripWire_StopAltSummonTowerFXCompleted_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFX
struct ADunDefPlayerAbility_BuilTripWire_StopAltSummonTowerFX_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.UpdateAltSummonTowerFX
struct ADunDefPlayerAbility_BuilTripWire_UpdateAltSummonTowerFX_Params
{
	float                                              Percent;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.BeginAltSummonTowerFX
struct ADunDefPlayerAbility_BuilTripWire_BeginAltSummonTowerFX_Params
{
	class ADunDefEmitterSpawnable*                     spellEffect;                                              // (Parm)
	struct FVector                                     thePlacementLocation;                                     // (Parm)
	struct FRotator                                    thePlacementRotation;                                     // (Parm)
	float                                              scaleMult;                                                // (OptionalParm, Parm)
	unsigned long                                      bUsesDecal;                                               // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ExecReplicatedFunction
struct ADunDefPlayerAbility_BuilTripWire_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetAbilityStatus
struct ADunDefPlayerAbility_DefenseBoost_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveTower
struct ADunDefPlayerAbility_DefenseBoost_RemoveTower_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddTower
struct ADunDefPlayerAbility_DefenseBoost_AddTower_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.Destroyed
struct ADunDefPlayerAbility_DefenseBoost_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowers
struct ADunDefPlayerAbility_DefenseBoost_RemoveAllTowers_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.CheckAllTowers
struct ADunDefPlayerAbility_DefenseBoost_CheckAllTowers_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowersFor
struct ADunDefPlayerAbility_DefenseBoost_RemoveAllTowersFor_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddAllTowersFor
struct ADunDefPlayerAbility_DefenseBoost_AddAllTowersFor_Params
{
	class ADunDefPlayer*                               aPlayer;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddEffect
struct ADunDefPlayerAbility_DefenseBoost_AddEffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveEffect
struct ADunDefPlayerAbility_DefenseBoost_RemoveEffect_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostAmount
struct ADunDefPlayerAbility_DefenseBoost_GetTowerBoostAmount_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.HasTowerBoostingType
struct ADunDefPlayerAbility_DefenseBoost_HasTowerBoostingType_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostingTarget
struct ADunDefPlayerAbility_DefenseBoost_GetTowerBoostingTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetAbilityStatus
struct ADunDefPlayerAbility_EnemyDrain_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetPawnResistanceMultiplier
struct ADunDefPlayerAbility_EnemyDrain_GetPawnResistanceMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetSpeedMultiplier
struct ADunDefPlayerAbility_EnemyDrain_GetSpeedMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetDamageMultiplier
struct ADunDefPlayerAbility_EnemyDrain_GetDamageMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.CanAffect
struct ADunDefPlayerAbility_EnemyDrain_CanAffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.AddEffect
struct ADunDefPlayerAbility_EnemyDrain_AddEffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.RemoveEffect
struct ADunDefPlayerAbility_EnemyDrain_RemoveEffect_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.DoMultiActorSpawn
struct ADunDefPlayerAbility_GenericMultiActorSpawner_DoMultiActorSpawn_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.SetUpActorSpawn
struct ADunDefPlayerAbility_GenericMultiActorSpawner_SetUpActorSpawn_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetAbilityStatus
struct ADunDefPlayerAbility_InstantUpgradeTower_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.DoEffect
struct ADunDefPlayerAbility_InstantUpgradeTower_DoEffect_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetTowerCost
struct ADunDefPlayerAbility_InstantUpgradeTower_GetTowerCost_Params
{
	class ADunDefTower*                                UpgradeTower;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.ScaleForHeroModifiers
struct ADunDefPlayerAbility_InstantUpgradeTower_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.IsValidUpgradeTower
struct ADunDefPlayerAbility_InstantUpgradeTower_IsValidUpgradeTower_Params
{
	class ADunDefTower*                                Tower;                                                    // (Parm)
	int                                                theNextUpgradeLevel;                                      // (OptionalParm, Parm, OutParm)
	unsigned long                                      bDontCountMana;                                           // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedTower
struct ADunDefPlayerAbility_InvisibilityAOE_RemovedTower_Params
{
	class ADunDefTower*                                affectedTower;                                            // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedTower
struct ADunDefPlayerAbility_InvisibilityAOE_AddedTower_Params
{
	class ADunDefTower*                                affectedTower;                                            // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedPawn
struct ADunDefPlayerAbility_InvisibilityAOE_RemovedPawn_Params
{
	class ADunDefPawn*                                 affectedPawn;                                             // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedPawn
struct ADunDefPlayerAbility_InvisibilityAOE_AddedPawn_Params
{
	class ADunDefPawn*                                 affectedPawn;                                             // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.GetAbilityStatus
struct ADunDefPlayerAbility_InvisibilityAOE_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddEffect
struct ADunDefPlayerAbility_InvisibilityAOE_AddEffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemoveEffect
struct ADunDefPlayerAbility_InvisibilityAOE_RemoveEffect_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetCostToActivate
struct ADunDefPlayerAbility_MoveTower_GetCostToActivate_Params
{
	unsigned long                                      returnTrueValue;                                          // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetAbilityStatus
struct ADunDefPlayerAbility_MoveTower_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientReset
struct ADunDefPlayerAbility_MoveTower_ClientReset_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerMoveTower
struct ADunDefPlayerAbility_MoveTower_ServerMoveTower_Params
{
	struct FVector                                     towerPlacementLocation;                                   // (Parm)
	struct FRotator                                    towerPlacementRotation;                                   // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.SetUpTowerMesh
struct ADunDefPlayerAbility_MoveTower_SetUpTowerMesh_Params
{
	class ADunDefTower*                                theTower;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerRequestGrabTower
struct ADunDefPlayerAbility_MoveTower_ServerRequestGrabTower_Params
{
	class ADunDefTower*                                Tower;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.StartMovingState
struct ADunDefPlayerAbility_MoveTower_StartMovingState_Params
{
	class ADunDefTower*                                Tower;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientStartMovingState
struct ADunDefPlayerAbility_MoveTower_ClientStartMovingState_Params
{
	class ADunDefTower*                                Tower;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerReceivePlacementState
struct ADunDefPlayerAbility_MoveTower_ServerReceivePlacementState_Params
{
	unsigned long                                      bIsValidPlacement;                                        // (Parm)
	struct FVector                                     tPlacementLocation;                                       // (Parm)
	struct FRotator                                    tPlacementRotation;                                       // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostPlacementUpdate
struct ADunDefPlayerAbility_MoveTower_PostPlacementUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateDecalPlacement
struct ADunDefPlayerAbility_MoveTower_UpdateDecalPlacement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.AllowTowerPlacementPosition
struct ADunDefPlayerAbility_MoveTower_AllowTowerPlacementPosition_Params
{
	struct FVector                                     placementPos;                                             // (Parm)
	int                                                PlacementDeniedReason;                                    // (OptionalParm, Parm, OutParm)
	unsigned long                                      bOnlyCheckVolumes;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetOtherMoveAbilityTowerRadius
struct ADunDefPlayerAbility_MoveTower_GetOtherMoveAbilityTowerRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsInPlacingTowerState
struct ADunDefPlayerAbility_MoveTower_IsInPlacingTowerState_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsTowerPhysical
struct ADunDefPlayerAbility_MoveTower_IsTowerPhysical_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.OnActivate
struct ADunDefPlayerAbility_MoveTower_OnActivate_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateClientInterpolations
struct ADunDefPlayerAbility_MoveTower_UpdateClientInterpolations_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerGotoRotationState
struct ADunDefPlayerAbility_MoveTower_ServerGotoRotationState_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetPlacementWeaponEffect
struct ADunDefPlayerAbility_MoveTower_GetPlacementWeaponEffect_Params
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostBeginPlay
struct ADunDefPlayerAbility_MoveTower_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ExecReplicatedFunction
struct ADunDefPlayerAbility_MoveTower_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ReplicatedEvent
struct ADunDefPlayerAbility_MoveTower_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetAbilityStatus
struct ADunDefPlayerAbility_SummonCommand_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.RequestActivation
struct ADunDefPlayerAbility_SummonCommand_RequestActivation_Params
{
	unsigned long                                      bHeld;                                                    // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StopTowerPlacingAnimation
struct ADunDefPlayerAbility_SummonCommand_StopTowerPlacingAnimation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StartTowerPlacingAnimation
struct ADunDefPlayerAbility_SummonCommand_StartTowerPlacingAnimation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.AllowCastingCancelOnDamage
struct ADunDefPlayerAbility_SummonCommand_AllowCastingCancelOnDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostPlacementUpdate
struct ADunDefPlayerAbility_SummonCommand_PostPlacementUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.UpdateDecalPlacement
struct ADunDefPlayerAbility_SummonCommand_UpdateDecalPlacement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.ServerRequestSetCommand
struct ADunDefPlayerAbility_SummonCommand_ServerRequestSetCommand_Params
{
	struct FVector                                     pLoc;                                                     // (Parm)
	class AActor*                                      targActor;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.HandleInstantCommand
struct ADunDefPlayerAbility_SummonCommand_HandleInstantCommand_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.OnActivate
struct ADunDefPlayerAbility_SummonCommand_OnActivate_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetCastingStateNamePC
struct ADunDefPlayerAbility_SummonCommand_GetCastingStateNamePC_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostBeginPlay
struct ADunDefPlayerAbility_SummonCommand_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.IncreasePlacementTowerRadius
struct ADunDefPlayerAbility_SummonCommand_IncreasePlacementTowerRadius_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.DecreasePlacementTowerRadius
struct ADunDefPlayerAbility_SummonCommand_DecreasePlacementTowerRadius_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetCastingStateNamePC
struct ADunDefPlayerAbility_PhaseShiftOverlord_GetCastingStateNamePC_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.ServerRequestSetCommand
struct ADunDefPlayerAbility_PhaseShiftOverlord_ServerRequestSetCommand_Params
{
	struct FVector                                     pLoc;                                                     // (Parm)
	class AActor*                                      targActor;                                                // (Parm)
	TEnumAsByte<ESummonedCommand>                      myCommand;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DoMovementCommand
struct ADunDefPlayerAbility_PhaseShiftOverlord_DoMovementCommand_Params
{
	TArray<class ADunDefTower_SummonEnemy*>            selectedTowers;                                           // (Parm, NeedCtorLink)
	struct FVector                                     pLoc;                                                     // (Parm)
	TEnumAsByte<ESummonedCommand>                      myCommand;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DrawCastingHUD
struct ADunDefPlayerAbility_PhaseShiftOverlord_DrawCastingHUD_Params
{
	class ADunDefHUD*                                  H;                                                        // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestActivation
struct ADunDefPlayerAbility_PhaseShiftOverlord_RequestActivation_Params
{
	unsigned long                                      bHeld;                                                    // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetAbilityStatus
struct ADunDefPlayerAbility_PhaseShiftOverlord_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestCancellation
struct ADunDefPlayerAbility_PhaseShiftOverlord_RequestCancellation_Params
{
	unsigned long                                      bForce;                                                   // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleConfirmation
struct ADunDefPlayerAbility_PhaseShiftOverlord_HandleConfirmation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltCancellation
struct ADunDefPlayerAbility_PhaseShiftOverlord_HandleAltCancellation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltConfirmation
struct ADunDefPlayerAbility_PhaseShiftOverlord_HandleAltConfirmation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StopTowerPlacingAnimation
struct ADunDefPlayerAbility_SelectSummonUnits_StopTowerPlacingAnimation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StartTowerPlacingAnimation
struct ADunDefPlayerAbility_SelectSummonUnits_StartTowerPlacingAnimation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AllowCastingCancelOnDamage
struct ADunDefPlayerAbility_SelectSummonUnits_AllowCastingCancelOnDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DeSelectUnits
struct ADunDefPlayerAbility_SelectSummonUnits_DeSelectUnits_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.SelectAllTowers
struct ADunDefPlayerAbility_SelectSummonUnits_SelectAllTowers_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.OnActivate
struct ADunDefPlayerAbility_SelectSummonUnits_OnActivate_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostPlacementUpdate
struct ADunDefPlayerAbility_SelectSummonUnits_PostPlacementUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.UpdateDecalPlacement
struct ADunDefPlayerAbility_SelectSummonUnits_UpdateDecalPlacement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.CancelAbility
struct ADunDefPlayerAbility_SelectSummonUnits_CancelAbility_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AbilityTick
struct ADunDefPlayerAbility_SelectSummonUnits_AbilityTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostBeginPlay
struct ADunDefPlayerAbility_SelectSummonUnits_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.IncreasePlacementTowerRadius
struct ADunDefPlayerAbility_SelectSummonUnits_IncreasePlacementTowerRadius_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DecreasePlacementTowerRadius
struct ADunDefPlayerAbility_SelectSummonUnits_DecreasePlacementTowerRadius_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.GetAbilityStatus
struct ADunDefPlayerAbility_SlamDash_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ConsumesInputWhenActive
struct ADunDefPlayerAbility_SlamDash_ConsumesInputWhenActive_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.AllowUsageDuringCastingStates
struct ADunDefPlayerAbility_SlamDash_AllowUsageDuringCastingStates_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.CheckStuck
struct ADunDefPlayerAbility_SlamDash_CheckStuck_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PlayStopAnim
struct ADunDefPlayerAbility_SlamDash_PlayStopAnim_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ShutOffVFX
struct ADunDefPlayerAbility_SlamDash_ShutOffVFX_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ActivateHandVFX
struct ADunDefPlayerAbility_SlamDash_ActivateHandVFX_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PushCheck
struct ADunDefPlayerAbility_SlamDash_PushCheck_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ExecReplicatedFunction
struct ADunDefPlayerAbility_SlamDash_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ReplicatedEvent
struct ADunDefPlayerAbility_SlamDash_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.GetAbilityStatus
struct ADunDefPlayerAbility_StanceOnDmgEffect_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.SetMaxHealAmountPerAttack
struct ADunDefPlayerAbility_StanceOnDmgEffect_SetMaxHealAmountPerAttack_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.ResetWeaponDamage
struct ADunDefPlayerAbility_StanceOnDmgEffect_ResetWeaponDamage_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopOffHandWeaponDamage
struct ADunDefPlayerAbility_StanceOnDmgEffect_StopOffHandWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopWeaponDamage
struct ADunDefPlayerAbility_StanceOnDmgEffect_StopWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartOffHandWeaponDamage
struct ADunDefPlayerAbility_StanceOnDmgEffect_StartOffHandWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartWeaponDamage
struct ADunDefPlayerAbility_StanceOnDmgEffect_StartWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.DoAddHealth
struct ADunDefPlayerAbility_StanceOnDmgEffect_DoAddHealth_Params
{
	int                                                dmgAmount;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetAbilityStatus
struct ADunDefPlayerAbility_StanceLightning_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetStunTime
struct ADunDefPlayerAbility_StanceLightning_GetStunTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ClearChainedList
struct ADunDefPlayerAbility_StanceLightning_ClearChainedList_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ClearStunnedList
struct ADunDefPlayerAbility_StanceLightning_ClearStunnedList_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.RemoveStunnedActor
struct ADunDefPlayerAbility_StanceLightning_RemoveStunnedActor_Params
{
	class ADunDefEnemy*                                stunRemoval;                                              // (Parm)
	unsigned long                                      bDontReplicate;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.AddStunnedActor
struct ADunDefPlayerAbility_StanceLightning_AddStunnedActor_Params
{
	class ADunDefEnemy*                                newStun;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetChainRange
struct ADunDefPlayerAbility_StanceLightning_GetChainRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.FadeOutChain
struct ADunDefPlayerAbility_StanceLightning_FadeOutChain_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetNumberOfChains
struct ADunDefPlayerAbility_StanceLightning_GetNumberOfChains_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetLastChainPos
struct ADunDefPlayerAbility_StanceLightning_GetLastChainPos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.CanStun
struct ADunDefPlayerAbility_StanceLightning_CanStun_Params
{
	class ADunDefEnemy*                                stunTest;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ExecReplicatedFunction
struct ADunDefPlayerAbility_StanceLightning_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetAbilityStatus
struct ADunDefPlayerAbility_StanceSpecialAttack_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopOffHandWeaponDamage
struct ADunDefPlayerAbility_StanceSpecialAttack_StopOffHandWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopWeaponDamage
struct ADunDefPlayerAbility_StanceSpecialAttack_StopWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartOffHandWeaponDamage
struct ADunDefPlayerAbility_StanceSpecialAttack_StartOffHandWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartWeaponDamage
struct ADunDefPlayerAbility_StanceSpecialAttack_StartWeaponDamage_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetMomentum
struct ADunDefPlayerAbility_StanceSpecialAttack_GetMomentum_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetDamage
struct ADunDefPlayerAbility_StanceSpecialAttack_GetDamage_Params
{
	class ADunDefWeapon_MeleeSword*                    dmgWeapon;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearStanceStun
struct ADunDefPlayerAbility_StanceSpecialAttack_ClearStanceStun_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CancelAbility
struct ADunDefPlayerAbility_StanceSpecialAttack_CancelAbility_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CompletedSpecial
struct ADunDefPlayerAbility_StanceSpecialAttack_CompletedSpecial_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClientCompletedSpecial
struct ADunDefPlayerAbility_StanceSpecialAttack_ClientCompletedSpecial_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.SpawnFinishEmitter
struct ADunDefPlayerAbility_StanceSpecialAttack_SpawnFinishEmitter_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_Off
struct ADunDefPlayerAbility_StanceSpecialAttack_AnimNotify_CurrentAbility_Off_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_On
struct ADunDefPlayerAbility_StanceSpecialAttack_AnimNotify_CurrentAbility_On_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSpecialAttack
struct ADunDefPlayerAbility_StanceSpecialAttack_DoSpecialAttack_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearHitList
struct ADunDefPlayerAbility_StanceSpecialAttack_ClearHitList_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSwinging
struct ADunDefPlayerAbility_StanceSpecialAttack_DoSwinging_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ReplicatedEvent
struct ADunDefPlayerAbility_StanceSpecialAttack_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetAbilityStatus
struct ADunDefPlayerAbility_WheeloFortuna_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCostToActivate
struct ADunDefPlayerAbility_WheeloFortuna_GetCostToActivate_Params
{
	unsigned long                                      returnTrueValue;                                          // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.StopLoopingAnims
struct ADunDefPlayerAbility_WheeloFortuna_StopLoopingAnims_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCastingCharacterAnimation
struct ADunDefPlayerAbility_WheeloFortuna_GetCastingCharacterAnimation_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.Destroyed
struct ADunDefPlayerAbility_WheeloFortuna_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ResetTimeDilation
struct ADunDefPlayerAbility_WheeloFortuna_ResetTimeDilation_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTimeDilation
struct ADunDefPlayerAbility_WheeloFortuna_DoTimeDilation_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SpawnManaTokens
struct ADunDefPlayerAbility_WheeloFortuna_SpawnManaTokens_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GoldEnemy
struct ADunDefPlayerAbility_WheeloFortuna_GoldEnemy_Params
{
	class ADunDefEnemy*                                Enemy;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoGolding
struct ADunDefPlayerAbility_WheeloFortuna_DoGolding_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.EndEffect
struct ADunDefPlayerAbility_WheeloFortuna_EndEffect_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ClearOutBoosters
struct ADunDefPlayerAbility_WheeloFortuna_ClearOutBoosters_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleEnemyAffects
struct ADunDefPlayerAbility_WheeloFortuna_HandleEnemyAffects_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleTowerAffects
struct ADunDefPlayerAbility_WheeloFortuna_HandleTowerAffects_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandlePlayerAffects
struct ADunDefPlayerAbility_WheeloFortuna_HandlePlayerAffects_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTowerUpgrades
struct ADunDefPlayerAbility_WheeloFortuna_DoTowerUpgrades_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SortStuff
struct ADunDefPlayerAbility_WheeloFortuna_SortStuff_Params
{
	TArray<float>                                      arrayin;                                                  // (Parm, NeedCtorLink)
	int                                                Size;                                                     // (Parm)
	TArray<float>                                      arrayout;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CoreDMG
struct ADunDefPlayerAbility_WheeloFortuna_CoreDMG_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CoreHeal
struct ADunDefPlayerAbility_WheeloFortuna_CoreHeal_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.PlayerTeleport
struct ADunDefPlayerAbility_WheeloFortuna_PlayerTeleport_Params
{
	struct FGlyphPattern                               thePattern;                                               // (Parm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleSuccess
struct ADunDefPlayerAbility_WheeloFortuna_ServerHandleSuccess_Params
{
	int                                                patternIdx;                                               // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleDefault
struct ADunDefPlayerAbility_WheeloFortuna_ServerHandleDefault_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CancelAbility
struct ADunDefPlayerAbility_WheeloFortuna_CancelAbility_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SetDoFadeOut
struct ADunDefPlayerAbility_WheeloFortuna_SetDoFadeOut_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.FinishSelection
struct ADunDefPlayerAbility_WheeloFortuna_FinishSelection_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CheckPattern
struct ADunDefPlayerAbility_WheeloFortuna_CheckPattern_Params
{
	struct FGlyphPattern                               CheckPattern;                                             // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetBoostedTargets
struct ADunDefPlayerAbility_WheeloFortuna_GetBoostedTargets_Params
{
	TArray<class APawn*>                               boostedTargets;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.NotifyOfBoostedRemoval
struct ADunDefPlayerAbility_WheeloFortuna_NotifyOfBoostedRemoval_Params
{
	class APawn*                                       removedBoostee;                                           // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetPawnBoostAmount
struct ADunDefPlayerAbility_WheeloFortuna_GetPawnBoostAmount_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HasPawnBoostingType
struct ADunDefPlayerAbility_WheeloFortuna_HasPawnBoostingType_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.UpdateStuns
struct ADunDefPlayerAbility_WheeloFortuna_UpdateStuns_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.AbilityTick
struct ADunDefPlayerAbility_WheeloFortuna_AbilityTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ForceSelections
struct ADunDefPlayerAbility_WheeloFortuna_ForceSelections_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.PostBeginPlay
struct ADunDefPlayerAbility_WheeloFortuna_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ExecReplicatedFunction
struct ADunDefPlayerAbility_WheeloFortuna_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.ConsumesInputWhenActive
struct ADunDefPlayerAbility_WhirlWind_ConsumesInputWhenActive_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.InitalizeActorStats
struct ADunDefPlayerAbility_WhirlWind_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	unsigned long                                      bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.CanAffect
struct ADunDefPlayerAbility_WhirlWind_CanAffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.SetElementalVFX
struct ADunDefPlayerAbility_WhirlWind_SetElementalVFX_Params
{
	TEnumAsByte<EElementTrait>                         aElementalTrait;                                          // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AbilityReleased
struct ADunDefPlayerAbility_WhirlWind_AbilityReleased_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AbilityPressed
struct ADunDefPlayerAbility_WhirlWind_AbilityPressed_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.CancelEffect
struct ADunDefPlayerAbility_WhirlWind_CancelEffect_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetElementalDamageType
struct ADunDefPlayerAbility_WhirlWind_GetElementalDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetDamageType
struct ADunDefPlayerAbility_WhirlWind_GetDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetElementalDamage
struct ADunDefPlayerAbility_WhirlWind_GetElementalDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetDamage
struct ADunDefPlayerAbility_WhirlWind_GetDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetAbilityStatus
struct ADunDefPlayerAbility_WhirlWind_GetAbilityStatus_Params
{
	int                                                ExtraStatusFlag;                                          // (OptionalParm, Parm, OutParm)
	TEnumAsByte<EPlayerAbilityStatus>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.DoEffect
struct ADunDefPlayerAbility_WhirlWind_DoEffect_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AddEffect
struct ADunDefPlayerAbility_WhirlWind_AddEffect_Params
{
	class AActor*                                      theAct;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.OnActivate
struct ADunDefPlayerAbility_WhirlWind_OnActivate_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.PostBeginPlay
struct ADunDefPlayerAbility_WhirlWind_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.ReplicatedEvent
struct ADunDefPlayerAbility_WhirlWind_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.CheckGround
struct ADunDefProjectileHoming_Piercing_GroundBound_CheckGround_Params
{
};

// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.InitProjectile
struct ADunDefProjectileHoming_Piercing_GroundBound_InitProjectile_Params
{
	struct FVector                                     Direction;                                                // (Parm)
	class APawn*                                       MyInstigator;                                             // (Parm)
	float                                              baseDamageForScaling;                                     // (OptionalParm, Parm)
	class AActor*                                      myHomingTarget;                                           // (OptionalParm, Parm)
	TScriptInterface<class UIActorModifierInterface>   MyActorModifier;                                          // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound.PostBeginPlay
struct ADunDefProjectileHoming_Piercing_GroundBound_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.DoPulse
struct ADunDefProjectileHoming_Piercing_GroundBound_Pulse_DoPulse_Params
{
	unsigned long                                      bForce;                                                   // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.Expire
struct ADunDefProjectileHoming_Piercing_GroundBound_Pulse_Expire_Params
{
};

// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.InitProjectile
struct ADunDefProjectileHoming_Piercing_GroundBound_Pulse_InitProjectile_Params
{
	struct FVector                                     Direction;                                                // (Parm)
	class APawn*                                       MyInstigator;                                             // (Parm)
	float                                              baseDamageForScaling;                                     // (OptionalParm, Parm)
	class AActor*                                      myHomingTarget;                                           // (OptionalParm, Parm)
	TScriptInterface<class UIActorModifierInterface>   MyActorModifier;                                          // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.IsImpactAllowed
struct ADunDefProjectileHoming_Piercing_GroundBound_Pulse_IsImpactAllowed_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse.InitalizeActorStats
struct ADunDefProjectileHoming_Piercing_GroundBound_Pulse_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	unsigned long                                      bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefProjectile_Orb.Destroyed
struct ADunDefProjectile_Orb_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefProjectile_Orb.DoPulse
struct ADunDefProjectile_Orb_DoPulse_Params
{
	unsigned long                                      bForce;                                                   // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefProjectile_Orb.IsTargetsInRange
struct ADunDefProjectile_Orb_IsTargetsInRange_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefProjectile_Orb.ChangeSpeed
struct ADunDefProjectile_Orb_ChangeSpeed_Params
{
	float                                              spd;                                                      // (Parm)
	struct FVector                                     Dir;                                                      // (Parm)
};

// Function DunDefSpecial.DunDefProjectile_Orb.CheckGround
struct ADunDefProjectile_Orb_CheckGround_Params
{
};

// Function DunDefSpecial.DunDefProjectile_Orb.InitalizeActorStats
struct ADunDefProjectile_Orb_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	unsigned long                                      bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefProjectile_Orb.PostBeginPlay
struct ADunDefProjectile_Orb_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefPurifyingBomb.HurtRadius
struct ADunDefPurifyingBomb_HurtRadius_Params
{
	float                                              BaseDamage;                                               // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HurtOrigin;                                               // (Parm)
	class AActor*                                      IgnoredActor;                                             // (OptionalParm, Parm)
	class AController*                                 InstigatedByController;                                   // (OptionalParm, Parm)
	unsigned long                                      bDoFullDamage;                                            // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetTowerBoostAmount
struct ADunDefTower_BoostAura_GetTowerBoostAmount_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.HasTowerBoostingType
struct ADunDefTower_BoostAura_HasTowerBoostingType_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetTowerBoostingTarget
struct ADunDefTower_BoostAura_GetTowerBoostingTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.SetBoostMultiplier
struct ADunDefTower_BoostAura_SetBoostMultiplier_Params
{
	int                                                Idx;                                                      // (Parm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.RefreshBoosts
struct ADunDefTower_BoostAura_RefreshBoosts_Params
{
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetAttackInterval
struct ADunDefTower_BoostAura_GetAttackInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetAttackDamage
struct ADunDefTower_BoostAura_GetAttackDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.ScaleForHeroModifiers
struct ADunDefTower_BoostAura_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetToolTipText
struct ADunDefTower_BoostAura_GetToolTipText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefTower_BoostAura.DrawTowerToolTipStats
struct ADunDefTower_BoostAura_DrawTowerToolTipStats_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              PosX;                                                     // (Parm, OutParm)
	float                                              PosY;                                                     // (Parm, OutParm)
	float                                              Opacity;                                                  // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	float                                              canvasScale;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.ExitEffectDT
struct ADunDefTower_BoostAura_ExitEffectDT_Params
{
	class ADunDefDamageableTarget*                     dt;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.EntryEffectDT
struct ADunDefTower_BoostAura_EntryEffectDT_Params
{
	class ADunDefDamageableTarget*                     dt;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.AttacksDT
struct ADunDefTower_BoostAura_AttacksDT_Params
{
	class ADunDefDamageableTarget*                     dt;                                                       // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.EnteredRadiusDT
struct ADunDefTower_BoostAura_EnteredRadiusDT_Params
{
	class ADunDefDamageableTarget*                     dt;                                                       // (Parm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.UnTouch
struct ADunDefTower_BoostAura_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.CanTargetInvisibleTarget
struct ADunDefTower_BoostAura_CanTargetInvisibleTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> aTarget;                                                  // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.Touch
struct ADunDefTower_BoostAura_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_BoostAura.CheckForDamagableTargets
struct ADunDefTower_BoostAura_CheckForDamagableTargets_Params
{
};

// Function DunDefSpecial.DunDefTower_BoostAura.Timer
struct ADunDefTower_BoostAura_Timer_Params
{
};

// Function DunDefSpecial.DunDefTower_BoostAura.ExecReplicatedFunction
struct ADunDefTower_BoostAura_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.SetBoostMultiplier
struct ADunDefTower_TripTowerBuff_SetBoostMultiplier_Params
{
	int                                                Idx;                                                      // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RefreshBoosts
struct ADunDefTower_TripTowerBuff_RefreshBoosts_Params
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ScaleForHeroModifiers
struct ADunDefTower_TripTowerBuff_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.DrawTowerToolTipStats
struct ADunDefTower_TripTowerBuff_DrawTowerToolTipStats_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              PosX;                                                     // (Parm, OutParm)
	float                                              PosY;                                                     // (Parm, OutParm)
	float                                              Opacity;                                                  // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	float                                              canvasScale;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.SetUseHealthBarMat
struct ADunDefTower_TripTowerBuff_SetUseHealthBarMat_Params
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetToolTipText
struct ADunDefTower_TripTowerBuff_GetToolTipText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.NeedsRepair
struct ADunDefTower_TripTowerBuff_NeedsRepair_Params
{
	unsigned long                                      requireFullHealth;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffectIndex
struct ADunDefTower_TripTowerBuff_RemoveTowerEffectIndex_Params
{
	int                                                Idx;                                                      // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffect
struct ADunDefTower_TripTowerBuff_RemoveTowerEffect_Params
{
	class ADunDefTower*                                theTower;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.AddTowerEffect
struct ADunDefTower_TripTowerBuff_AddTowerEffect_Params
{
	class ADunDefTower*                                theTower;                                                 // (Parm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetMaxDetonations
struct ADunDefTower_TripTowerBuff_GetMaxDetonations_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.Destroyed
struct ADunDefTower_TripTowerBuff_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveAllBoosts
struct ADunDefTower_TripTowerBuff_RemoveAllBoosts_Params
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.PostBeginPlay
struct ADunDefTower_TripTowerBuff_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ClearDeletedTowers
struct ADunDefTower_TripTowerBuff_ClearDeletedTowers_Params
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.CheckTowers
struct ADunDefTower_TripTowerBuff_CheckTowers_Params
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.CanAffectTower
struct ADunDefTower_TripTowerBuff_CanAffectTower_Params
{
	class ADunDefTower*                                towerCheck;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.DoTracing
struct ADunDefTower_TripTowerBuff_DoTracing_Params
{
	float                                              dt;                                                       // (Parm)
	unsigned long                                      bForceDamage;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostAmount
struct ADunDefTower_TripTowerBuff_GetTowerBoostAmount_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.HasTowerBoostingType
struct ADunDefTower_TripTowerBuff_HasTowerBoostingType_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostingTarget
struct ADunDefTower_TripTowerBuff_GetTowerBoostingTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ExecReplicatedFunction
struct ADunDefTower_TripTowerBuff_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.ChangedGamePhases
struct ADunDefTower_BuffSpawner_ChangedGamePhases_Params
{
	unsigned long                                      IsCombatPhase;                                            // (Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.AllowTowerAtPoint
struct ADunDefTower_BuffSpawner_AllowTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.CheckAllowance
struct ADunDefTower_BuffSpawner_CheckAllowance_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.PreventTowerAtPoint
struct ADunDefTower_BuffSpawner_PreventTowerAtPoint_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	class ADunDefTower*                                towerArch;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	float                                              towerRadius;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.IsPhysicalTower
struct ADunDefTower_BuffSpawner_IsPhysicalTower_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.GetTowerTargetingDesirability
struct ADunDefTower_BuffSpawner_GetTowerTargetingDesirability_Params
{
	class ADunDefTower*                                forTower;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.GetPlayerTargetingDesirability
struct ADunDefTower_BuffSpawner_GetPlayerTargetingDesirability_Params
{
	class ADunDefPlayerController*                     forController;                                            // (Parm)
	class ADunDefPlayer*                               ForPlayer;                                                // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.DrawTowerToolTipStats
struct ADunDefTower_BuffSpawner_DrawTowerToolTipStats_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              PosX;                                                     // (Parm, OutParm)
	float                                              PosY;                                                     // (Parm, OutParm)
	float                                              Opacity;                                                  // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	float                                              canvasScale;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.GetAttackInterval
struct ADunDefTower_BuffSpawner_GetAttackInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.GetAttackDamage
struct ADunDefTower_BuffSpawner_GetAttackDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.ScaleForHeroModifiers
struct ADunDefTower_BuffSpawner_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.RemoveAllBuffTargets
struct ADunDefTower_BuffSpawner_RemoveAllBuffTargets_Params
{
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.RemoveBuffsFromTarget
struct ADunDefTower_BuffSpawner_RemoveBuffsFromTarget_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.AddBuffsToTarget
struct ADunDefTower_BuffSpawner_AddBuffsToTarget_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.CanAffectTarget
struct ADunDefTower_BuffSpawner_CanAffectTarget_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.Tick
struct ADunDefTower_BuffSpawner_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.TakeDamage
struct ADunDefTower_BuffSpawner_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.Destroyed
struct ADunDefTower_BuffSpawner_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.UnTouch
struct ADunDefTower_BuffSpawner_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.Touch
struct ADunDefTower_BuffSpawner_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.PostBeginPlay
struct ADunDefTower_BuffSpawner_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.ExecReplicatedFunction
struct ADunDefTower_BuffSpawner_ExecReplicatedFunction_Params
{
	struct FName                                       FunctionName;                                             // (Parm)
	struct FName                                       nameParam1;                                               // (OptionalParm, Parm)
	struct FName                                       nameParam2;                                               // (OptionalParm, Parm)
	class AActor*                                      actorParam1;                                              // (OptionalParm, Parm)
	class AActor*                                      actorParam2;                                              // (OptionalParm, Parm)
	struct FVector                                     vecParam1;                                                // (OptionalParm, Parm)
	struct FRotator                                    rotParam1;                                                // (OptionalParm, Parm)
	float                                              floatParam1;                                              // (OptionalParm, Parm)
	float                                              floatParam2;                                              // (OptionalParm, Parm)
	float                                              floatParam3;                                              // (OptionalParm, Parm)
	float                                              floatParam4;                                              // (OptionalParm, Parm)
	unsigned long                                      boolParam1;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam2;                                               // (OptionalParm, Parm)
	unsigned long                                      boolParam3;                                               // (OptionalParm, Parm)
	struct FString                                     stringParam1;                                             // (OptionalParm, Parm, NeedCtorLink)
	class UObject*                                     objectParam1;                                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.GetDamageType
struct ADunDefTower_EmitterBurst_GetDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.StaticGetAttackRange
struct ADunDefTower_EmitterBurst_StaticGetAttackRange_Params
{
	class UDunDefHero*                                 hero;                                                     // (Parm)
	class ADunDefTower*                                Tower;                                                    // (Parm)
	float                                              TowerRangeScaler;                                         // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.GetAttackRange
struct ADunDefTower_EmitterBurst_GetAttackRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.GetAttackDamage
struct ADunDefTower_EmitterBurst_GetAttackDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.StopShooting
struct ADunDefTower_EmitterBurst_StopShooting_Params
{
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.ShootProjectile
struct ADunDefTower_EmitterBurst_ShootProjectile_Params
{
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.ReplicatedEvent
struct ADunDefTower_EmitterBurst_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTower_Present.UpdateTowerRatingMaterial
struct ADunDefTower_Present_UpdateTowerRatingMaterial_Params
{
};

// Function DunDefSpecial.DunDefTower_Present.SpawnDroppedEquipment
struct ADunDefTower_Present_SpawnDroppedEquipment_Params
{
};

// Function DunDefSpecial.DunDefTower_Present.SpawnManaTokens
struct ADunDefTower_Present_SpawnManaTokens_Params
{
};

// Function DunDefSpecial.DunDefTower_Present.DrawTowerToolTipStats
struct ADunDefTower_Present_DrawTowerToolTipStats_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              PosX;                                                     // (Parm, OutParm)
	float                                              PosY;                                                     // (Parm, OutParm)
	float                                              Opacity;                                                  // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	float                                              canvasScale;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_Present.AllowTowerSpawnAtLoc
struct ADunDefTower_Present_AllowTowerSpawnAtLoc_Params
{
	class ADunDefTower*                                TowerArchetype;                                           // (Parm)
	struct FVector                                     placementPos;                                             // (Parm)
	unsigned long                                      bOnlyCheckVolumes;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_Present.DoActorSpawn
struct ADunDefTower_Present_DoActorSpawn_Params
{
	struct FspawnChances                               spawnChance;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_Present.DoEnemySpawn
struct ADunDefTower_Present_DoEnemySpawn_Params
{
	struct FspawnChances                               spawnChance;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_Present.DoTowerSpawn
struct ADunDefTower_Present_DoTowerSpawn_Params
{
	struct FspawnChances                               spawnChance;                                              // (Parm)
	struct FVector                                     HitLoc;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_Present.DoPresentSpawn
struct ADunDefTower_Present_DoPresentSpawn_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      bSpawnOgresInLobby;                                       // (Parm)
};

// Function DunDefSpecial.DunDefTower_Present.PickActor
struct ADunDefTower_Present_PickActor_Params
{
	int                                                Idx;                                                      // (Parm)
	struct FspawnChances                               spawnChance;                                              // (Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_Present.PickSpawnGroup
struct ADunDefTower_Present_PickSpawnGroup_Params
{
};

// Function DunDefSpecial.DunDefTower_Present.Died
struct ADunDefTower_Present_Died_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefSpecial.DunDefTower_Present.ChangedGamePhases
struct ADunDefTower_Present_ChangedGamePhases_Params
{
	unsigned long                                      IsCombatPhase;                                            // (Parm)
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.IsPhysicalTower
struct ADunDefTower_ProjectileReflect_IsPhysicalTower_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.GetCostPerReflect
struct ADunDefTower_ProjectileReflect_GetCostPerReflect_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.TakeDamage
struct ADunDefTower_ProjectileReflect_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.GetAttackDamage
struct ADunDefTower_ProjectileReflect_GetAttackDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.DoReflection
struct ADunDefTower_ProjectileReflect_DoReflection_Params
{
	class ADunDefProjectile*                           reflectedProj;                                            // (Parm)
	struct FVector                                     NewDir;                                                   // (Parm)
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.KilledTarget
struct ADunDefTower_ProjectileReflect_KilledTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> aTarget;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.Touch
struct ADunDefTower_ProjectileReflect_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_WebWall.ScaleForHeroModifiers
struct ADunDefTower_WebWall_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_WebWall.DrawTowerToolTipActorStats
struct ADunDefTower_WebWall_DrawTowerToolTipActorStats_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              PosX;                                                     // (Parm, OutParm)
	float                                              PosY;                                                     // (Parm, OutParm)
	float                                              Opacity;                                                  // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	float                                              canvasScale;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_WebWall.DrawTowerToolTipStats
struct ADunDefTower_WebWall_DrawTowerToolTipStats_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              PosX;                                                     // (Parm, OutParm)
	float                                              PosY;                                                     // (Parm, OutParm)
	float                                              Opacity;                                                  // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (Parm)
	float                                              canvasScale;                                              // (Parm)
};

// Function DunDefSpecial.DunDefTower_WebWall.CheckTouchingActor
struct ADunDefTower_WebWall_CheckTouchingActor_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_WebWall.GetAttackDamage
struct ADunDefTower_WebWall_GetAttackDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_WebWall.GetCostPerWeb
struct ADunDefTower_WebWall_GetCostPerWeb_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_WebWall.TakeDamage
struct ADunDefTower_WebWall_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTower_WebWall.IsPhysicalTower
struct ADunDefTower_WebWall_IsPhysicalTower_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTower_WebWall.KilledTarget
struct ADunDefTower_WebWall_KilledTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> aTarget;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTower_WebWall.Touch
struct ADunDefTower_WebWall_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTower_WebWall.UpdateBuffTargets
struct ADunDefTower_WebWall_UpdateBuffTargets_Params
{
};

// Function DunDefSpecial.DunDefTower_WebWall.PostBeginPlay
struct ADunDefTower_WebWall_PostBeginPlay_Params
{
};

// Function DunDefSpecial.DunDefTurkey.UpdateDifficultyValues
struct ADunDefTurkey_UpdateDifficultyValues_Params
{
	unsigned long                                      UpdateMaterial;                                           // (OptionalParm, Parm)
	unsigned long                                      onlyDynamicValues;                                        // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTurkey.Bump
struct ADunDefTurkey_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function DunDefSpecial.DunDefTurkey.StopFlee
struct ADunDefTurkey_StopFlee_Params
{
};

// Function DunDefSpecial.DunDefTurkey.PlayFleeSound
struct ADunDefTurkey_PlayFleeSound_Params
{
};

// Function DunDefSpecial.DunDefTurkey.StartFlee
struct ADunDefTurkey_StartFlee_Params
{
};

// Function DunDefSpecial.DunDefTurkey.SetGroundSpeed
struct ADunDefTurkey_SetGroundSpeed_Params
{
	float                                              NewSpeed;                                                 // (Parm)
	unsigned long                                      bUseDifficultyMult;                                       // (OptionalParm, Parm)
};

// Function DunDefSpecial.DunDefTurkey.Died
struct ADunDefTurkey_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTurkey.Destroyed
struct ADunDefTurkey_Destroyed_Params
{
};

// Function DunDefSpecial.DunDefTurkey.ReplicatedEvent
struct ADunDefTurkey_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function DunDefSpecial.DunDefTurkeyController.WantsHurtAnimation
struct ADunDefTurkeyController_WantsHurtAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTurkeyController.NotifyTakeHitEX
struct ADunDefTurkeyController_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefSpecial.DunDefTurkeyController.GetWanderPoint
struct ADunDefTurkeyController_GetWanderPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTurkeyController.DoFlee
struct ADunDefTurkeyController_DoFlee_Params
{
	class ADunDefPlayer*                               fleeFrom;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTurkeyController.CheckPlayers
struct ADunDefTurkeyController_CheckPlayers_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.DunDefTurkeyController.TimeOutFlee
struct ADunDefTurkeyController_TimeOutFlee_Params
{
};

// Function DunDefSpecial.GameInfo_AroundTheWorld.InitGameReplicationInfo
struct AGameInfo_AroundTheWorld_InitGameReplicationInfo_Params
{
};

// Function DunDefSpecial.GameInfo_AroundTheWorld.DoWaveSkipping
struct AGameInfo_AroundTheWorld_DoWaveSkipping_Params
{
	unsigned long                                      bAllowArbritraryWaveSkipping;                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.GameInfo_Assault.InitGameReplicationInfo
struct AGameInfo_Assault_InitGameReplicationInfo_Params
{
};

// Function DunDefSpecial.GameInfo_Assault.DoWaveSkipping
struct AGameInfo_Assault_DoWaveSkipping_Params
{
	unsigned long                                      bAllowArbritraryWaveSkipping;                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.GameInfo_Assault.PostBeginPlay
struct AGameInfo_Assault_PostBeginPlay_Params
{
};

// Function DunDefSpecial.GameInfo_Assault.RestartPlayer
struct AGameInfo_Assault_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
};

// Function DunDefSpecial.GameInfo_Chicken.RestartPlayer
struct AGameInfo_Chicken_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
};

// Function DunDefSpecial.GameInfo_GoldenTokens.Killed
struct AGameInfo_GoldenTokens_Killed_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 KilledPlayer;                                             // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.RestartPlayer
struct AGameInfo_KillEnemiesTimeLimit_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.DoWaveSkipping
struct AGameInfo_KillEnemiesTimeLimit_DoWaveSkipping_Params
{
	unsigned long                                      bAllowArbritraryWaveSkipping;                             // (OptionalParm, Parm)
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.AddObjectiveScore
struct AGameInfo_KillEnemiesTimeLimit_Uber_AddObjectiveScore_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	int                                                Score;                                                    // (Parm)
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.ScoreKill
struct AGameInfo_KillEnemiesTimeLimit_Uber_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Other;                                                    // (Parm)
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.Killed
struct AGameInfo_KillEnemiesTimeLimit_Uber_Killed_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 KilledPlayer;                                             // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function DunDefSpecial.GameInfo_NoTowers.InitGameReplicationInfo
struct AGameInfo_NoTowers_InitGameReplicationInfo_Params
{
};

// Function DunDefSpecial.GameInfo_OgreAlly.InitGameReplicationInfo
struct AGameInfo_OgreAlly_InitGameReplicationInfo_Params
{
};

// Function DunDefSpecial.GameInfo_RainingGoblins.InitGameReplicationInfo
struct AGameInfo_RainingGoblins_InitGameReplicationInfo_Params
{
};

// Function DunDefSpecial.GameInfo_VDay2.PairMatched
struct AGameInfo_VDay2_PairMatched_Params
{
	class ADunDefEnemy*                                Boy;                                                      // (Parm)
	class ADunDefEnemy*                                Girl;                                                     // (Parm)
};

// Function DunDefSpecial.GameInfo_VDay2.Tick
struct AGameInfo_VDay2_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function DunDefSpecial.GameInfo_VDay2.EnemyDied
struct AGameInfo_VDay2_EnemyDied_Params
{
	class ADunDefEnemy*                                anEnemy;                                                  // (Parm)
};

// Function DunDefSpecial.GameInfo_VDay2.WaveSpawnerCreateEnemy
struct AGameInfo_VDay2_WaveSpawnerCreateEnemy_Params
{
	class UDunDef_SeqAct_EnemyWaveSpawner*             aSpawner;                                                 // (Parm)
	class ADunDefEnemy*                                EnemyTemplate;                                            // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	class ADunDefEnemy*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.GameInfo_Wizardry.MageCheck
struct AGameInfo_Wizardry_MageCheck_Params
{
};

// Function DunDefSpecial.GameInfo_Wizardry.PostBeginPlay
struct AGameInfo_Wizardry_PostBeginPlay_Params
{
};

// Function DunDefSpecial.GameInfo_ZippyTerror.InitGameReplicationInfo
struct AGameInfo_ZippyTerror_InitGameReplicationInfo_Params
{
};

// Function DunDefSpecial.SnowManBoss.StartMovement
struct ASnowManBoss_StartMovement_Params
{
};

// Function DunDefSpecial.SnowManBoss.StopMovement
struct ASnowManBoss_StopMovement_Params
{
};

// Function DunDefSpecial.SnowManBoss.Died
struct ASnowManBoss_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.SnowManBoss.Destroyed
struct ASnowManBoss_Destroyed_Params
{
};

// Function DunDefSpecial.SnowManBoss.DoStompDamage
struct ASnowManBoss_DoStompDamage_Params
{
};

// Function DunDefSpecial.SnowManBoss.DoStomp
struct ASnowManBoss_DoStomp_Params
{
};

// Function DunDefSpecial.SnowManBoss.DoPeck
struct ASnowManBoss_DoPeck_Params
{
};

// Function DunDefSpecial.SnowManBoss.GetPeckLoc
struct ASnowManBoss_GetPeckLoc_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm)
};

// Function DunDefSpecial.SnowManBoss.SnowBallRight
struct ASnowManBoss_SnowBallRight_Params
{
};

// Function DunDefSpecial.SnowManBoss.SnowBallLeft
struct ASnowManBoss_SnowBallLeft_Params
{
};

// Function DunDefSpecial.SnowManBoss.SpawnSnowShootEffect
struct ASnowManBoss_SpawnSnowShootEffect_Params
{
	struct FVector                                     SpawnLoc;                                                 // (Parm)
	struct FRotator                                    SpawnRot;                                                 // (Parm)
};

// Function DunDefSpecial.SnowManBoss.GetProjectileSpawnLoc
struct ASnowManBoss_GetProjectileSpawnLoc_Params
{
	unsigned long                                      bIsLeftSocket;                                            // (Parm)
	struct FVector                                     Loc;                                                      // (Parm, OutParm)
	struct FRotator                                    Rot;                                                      // (Parm, OutParm)
};

// Function DunDefSpecial.SnowManBoss.PlayStomp
struct ASnowManBoss_PlayStomp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.SnowManBoss.PlaySnowShoot
struct ASnowManBoss_PlaySnowShoot_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.SnowManBoss.PlayPeckAttack
struct ASnowManBoss_PlayPeckAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.SnowManBoss.PlaySpawnIn
struct ASnowManBoss_PlaySpawnIn_Params
{
};

// Function DunDefSpecial.SnowManBoss.PostBeginPlay
struct ASnowManBoss_PostBeginPlay_Params
{
};

// Function DunDefSpecial.SnowManBossController.CheckForCustomAttacks
struct ASnowManBossController_CheckForCustomAttacks_Params
{
};

// Function DunDefSpecial.SnowManBossController.WantsHurtAnimation
struct ASnowManBossController_WantsHurtAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.SnowManBossController.NotifyTakeHitEX
struct ASnowManBossController_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefSpecial.SnowManBossController.CheckStomp
struct ASnowManBossController_CheckStomp_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.SnowManBossController.ChooseAttack
struct ASnowManBossController_ChooseAttack_Params
{
};

// Function DunDefSpecial.SnowManBossController.DoPeck
struct ASnowManBossController_DoPeck_Params
{
};

// Function DunDefSpecial.SnowManBossController.DoStomp
struct ASnowManBossController_DoStomp_Params
{
};

// Function DunDefSpecial.SnowManBossController.SpawnSnowProjectile
struct ASnowManBossController_SpawnSnowProjectile_Params
{
	unsigned long                                      bIsLeftSocket;                                            // (OptionalParm, Parm)
};

// Function DunDefSpecial.TurkeyBoss.Died
struct ATurkeyBoss_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.TurkeyBoss.Destroyed
struct ATurkeyBoss_Destroyed_Params
{
};

// Function DunDefSpecial.TurkeyBoss.DoStompDamage
struct ATurkeyBoss_DoStompDamage_Params
{
};

// Function DunDefSpecial.TurkeyBoss.DoStomp
struct ATurkeyBoss_DoStomp_Params
{
};

// Function DunDefSpecial.TurkeyBoss.DoPeck
struct ATurkeyBoss_DoPeck_Params
{
};

// Function DunDefSpecial.TurkeyBoss.GetPeckLoc
struct ATurkeyBoss_GetPeckLoc_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm)
};

// Function DunDefSpecial.TurkeyBoss.ShootEgg
struct ATurkeyBoss_ShootEgg_Params
{
};

// Function DunDefSpecial.TurkeyBoss.SpawnEggShootEffect
struct ATurkeyBoss_SpawnEggShootEffect_Params
{
	struct FVector                                     SpawnLoc;                                                 // (Parm)
	struct FRotator                                    SpawnRot;                                                 // (Parm)
};

// Function DunDefSpecial.TurkeyBoss.GetProjectileSpawnLoc
struct ATurkeyBoss_GetProjectileSpawnLoc_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm)
	struct FRotator                                    Rot;                                                      // (Parm, OutParm)
};

// Function DunDefSpecial.TurkeyBoss.PlayStomp
struct ATurkeyBoss_PlayStomp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.TurkeyBoss.PlayEggShoot
struct ATurkeyBoss_PlayEggShoot_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.TurkeyBoss.PlayPeckAttack
struct ATurkeyBoss_PlayPeckAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.TurkeyBossController.WantsHurtAnimation
struct ATurkeyBossController_WantsHurtAnimation_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.TurkeyBossController.NotifyTakeHitEX
struct ATurkeyBossController_NotifyTakeHitEX_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function DunDefSpecial.TurkeyBossController.CheckStomp
struct ATurkeyBossController_CheckStomp_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefSpecial.TurkeyBossController.ChooseAttack
struct ATurkeyBossController_ChooseAttack_Params
{
};

// Function DunDefSpecial.TurkeyBossController.DoPeck
struct ATurkeyBossController_DoPeck_Params
{
};

// Function DunDefSpecial.TurkeyBossController.DoStomp
struct ATurkeyBossController_DoStomp_Params
{
};

// Function DunDefSpecial.TurkeyBossController.SpawnEggProjectile
struct ATurkeyBossController_SpawnEggProjectile_Params
{
};

// Function DunDefSpecial.UI_GameStatsUberMF.GetPlayerList
struct UUI_GameStatsUberMF_GetPlayerList_Params
{
	struct FString                                     pList;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sList;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefSpecial.UI_GameStatsUberMF.GetColorString
struct UUI_GameStatsUberMF_GetColorString_Params
{
	struct FColor                                      aColor;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function DunDefSpecial.UI_GameStatsUberMF.UpdateTeamPanels
struct UUI_GameStatsUberMF_UpdateTeamPanels_Params
{
};

// Function DunDefSpecial.UI_GameStatsUberMF.CustomInit
struct UUI_GameStatsUberMF_CustomInit_Params
{
	int                                                CustomInitIndex;                                          // (OptionalParm, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
