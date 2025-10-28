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

// Function CDT8.DunDefEmitterRadialForce.AllowSpawn
struct ADunDefEmitterRadialForce_AllowSpawn_Params
{
	class AActor*                                      theArchetype;                                             // (Parm)
	struct FVector                                     theLoc;                                                   // (Parm)
	struct FRotator                                    theRot;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.StaticGetCloudLifeSpan
struct ADunDefEmitterRadialForce_StaticGetCloudLifeSpan_Params
{
	float                                              lifeSpanStatModifier;                                     // (Parm)
	class ADunDefEmitterRadialForce*                   gCloud;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.StaticGetAttackRange
struct ADunDefEmitterRadialForce_StaticGetAttackRange_Params
{
	float                                              attackRangeStatModifier;                                  // (Parm)
	class ADunDefEmitterRadialForce*                   gCloud;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.StaticGetAttackDamage
struct ADunDefEmitterRadialForce_StaticGetAttackDamage_Params
{
	float                                              damageStatModifier;                                       // (Parm)
	class ADunDefEmitterRadialForce*                   gCloud;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.StaticGetAttackRate
struct ADunDefEmitterRadialForce_StaticGetAttackRate_Params
{
	float                                              attackRateStatModifier;                                   // (Parm)
	class ADunDefEmitterRadialForce*                   gCloud;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.UpdateEffectInterval
struct ADunDefEmitterRadialForce_UpdateEffectInterval_Params
{
};

// Function CDT8.DunDefEmitterRadialForce.GetDamageMult
struct ADunDefEmitterRadialForce_GetDamageMult_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.GetDamageCauser
struct ADunDefEmitterRadialForce_GetDamageCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.ScaleRadiusEffect
struct ADunDefEmitterRadialForce_ScaleRadiusEffect_Params
{
};

// Function CDT8.DunDefEmitterRadialForce.ScaleForHeroModifiers
struct ADunDefEmitterRadialForce_ScaleForHeroModifiers_Params
{
	unsigned long                                      IsFirstTime;                                              // (Parm)
};

// Function CDT8.DunDefEmitterRadialForce.AllowHeroGUID
struct ADunDefEmitterRadialForce_AllowHeroGUID_Params
{
	int                                                GUID1;                                                    // (Parm)
	int                                                GUID2;                                                    // (Parm)
	int                                                GUID3;                                                    // (Parm)
	int                                                GUID4;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.InitializeDD
struct ADunDefEmitterRadialForce_InitializeDD_Params
{
};

// Function CDT8.DunDefEmitterRadialForce.SetLifeSpanTimeout
struct ADunDefEmitterRadialForce_SetLifeSpanTimeout_Params
{
};

// Function CDT8.DunDefEmitterRadialForce.PostBeginPlay
struct ADunDefEmitterRadialForce_PostBeginPlay_Params
{
};

// Function CDT8.DunDefEmitterRadialForce.StartEffectTimer
struct ADunDefEmitterRadialForce_StartEffectTimer_Params
{
};

// Function CDT8.DunDefEmitterRadialForce.GetTargetDesirability
struct ADunDefEmitterRadialForce_GetTargetDesirability_Params
{
	TScriptInterface<class UDunDefTargetableInterface> aTarget;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.CheckValidAngle
struct ADunDefEmitterRadialForce_CheckValidAngle_Params
{
	class AActor*                                      Victim;                                                   // (Parm)
	struct FVector                                     Origin;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.EffectTimer
struct ADunDefEmitterRadialForce_EffectTimer_Params
{
};

// Function CDT8.DunDefEmitterRadialForce.ScaleDamageForNumberOfPlayers
struct ADunDefEmitterRadialForce_ScaleDamageForNumberOfPlayers_Params
{
};

// Function CDT8.DunDefEmitterRadialForce.GetRadiusDamage
struct ADunDefEmitterRadialForce_GetRadiusDamage_Params
{
	float                                              theBaseDamage;                                            // (Parm)
	class AActor*                                      Victim;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.HurtRadius
struct ADunDefEmitterRadialForce_HurtRadius_Params
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

// Function CDT8.DunDefEmitterRadialForce.ApplyRadialForce
struct ADunDefEmitterRadialForce_ApplyRadialForce_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function CDT8.DunDefEmitterRadialForce.IsClassOnIgnoreList
struct ADunDefEmitterRadialForce_IsClassOnIgnoreList_Params
{
	class UClass*                                      ActorClass;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefEmitterRadialForce.FadeOut
struct ADunDefEmitterRadialForce_FadeOut_Params
{
	float                                              theLightFadeOutTime;                                      // (OptionalParm, Parm)
};

// Function CDT8.DunDefEmitterRadialForce.ActorTouchedCenter
struct ADunDefEmitterRadialForce_ActorTouchedCenter_Params
{
	class ADunDefPawn*                                 P;                                                        // (Parm)
};

// Function CDT8.DunDefEmitterRadialForce.ReplicatedEvent
struct ADunDefEmitterRadialForce_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function CDT8.DunDefEmitterRadialForce.NotifyWeapon
struct ADunDefEmitterRadialForce_NotifyWeapon_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function CDT8.DunDefWeapon_NessieLauncher.NeedsReload
struct ADunDefWeapon_NessieLauncher_NeedsReload_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_NessieLauncher.FireAmmunition
struct ADunDefWeapon_NessieLauncher_FireAmmunition_Params
{
};

// Function CDT8.DunDefWeapon_NessieLauncher.EnemyDiedFromSource
struct ADunDefWeapon_NessieLauncher_EnemyDiedFromSource_Params
{
};

// Function CDT8.DunDefWeapon_NessieLauncher.HasAnyClipAmmo
struct ADunDefWeapon_NessieLauncher_HasAnyClipAmmo_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_NessieLauncher.SpawnExplodingNessie
struct ADunDefWeapon_NessieLauncher_SpawnExplodingNessie_Params
{
	int                                                Ammo;                                                     // (Parm)
};

// Function CDT8.DunDefWeapon_NessieLauncher.GetAmmoPercent
struct ADunDefWeapon_NessieLauncher_GetAmmoPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_NessieLauncher.PostBeginPlay
struct ADunDefWeapon_NessieLauncher_PostBeginPlay_Params
{
};

// Function CDT8.DunDefWeapon_NessieLauncher.GetTotalAmmo
struct ADunDefWeapon_NessieLauncher_GetTotalAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_NessieLauncher.Reload
struct ADunDefWeapon_NessieLauncher_Reload_Params
{
};

// Function CDT8.DunDefExplodingActor.SetRandomColor
struct ADunDefExplodingActor_SetRandomColor_Params
{
};

// Function CDT8.DunDefExplodingActor.SetMultiplier
struct ADunDefExplodingActor_SetMultiplier_Params
{
	float                                              multi;                                                    // (Parm)
};

// Function CDT8.DunDefExplodingActor.SelfDestruct
struct ADunDefExplodingActor_SelfDestruct_Params
{
};

// Function CDT8.DunDefExplodingActor.SetActiveTime
struct ADunDefExplodingActor_SetActiveTime_Params
{
};

// Function CDT8.DunDefExplodingActor.SetHealth
struct ADunDefExplodingActor_SetHealth_Params
{
};

// Function CDT8.DunDefExplodingActor.SetPokeRadius
struct ADunDefExplodingActor_SetPokeRadius_Params
{
};

// Function CDT8.DunDefExplodingActor.FlyForward
struct ADunDefExplodingActor_FlyForward_Params
{
};

// Function CDT8.DunDefExplodingActor.PostBeginPlay
struct ADunDefExplodingActor_PostBeginPlay_Params
{
};

// Function CDT8.DunDefWeapon_HoloSword.Tick
struct ADunDefWeapon_HoloSword_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT8.DunDefWeapon_HoloSword.TeleportToOldestHolo
struct ADunDefWeapon_HoloSword_TeleportToOldestHolo_Params
{
};

// Function CDT8.DunDefWeapon_HoloSword.DestroyOldestHolo
struct ADunDefWeapon_HoloSword_DestroyOldestHolo_Params
{
};

// Function CDT8.DunDefWeapon_HoloSword.SpawnHolo
struct ADunDefWeapon_HoloSword_SpawnHolo_Params
{
};

// Function CDT8.DunDefWeapon_HoloSword.EnableBlocking
struct ADunDefWeapon_HoloSword_EnableBlocking_Params
{
};

// Function CDT8.DunDefWeapon_HoloSword.HandleCloneAttacks
struct ADunDefWeapon_HoloSword_HandleCloneAttacks_Params
{
	unsigned long                                      ishawk;                                                   // (OptionalParm, Parm)
};

// Function CDT8.DunDefWeapon_HoloSword.DoSwinging
struct ADunDefWeapon_HoloSword_DoSwinging_Params
{
	unsigned long                                      bForceSwing;                                              // (OptionalParm, Parm)
	unsigned long                                      bOverrideExtent;                                          // (OptionalParm, Parm)
	struct FVector                                     extentOverride;                                           // (OptionalParm, Parm)
	float                                              damageOverride;                                           // (OptionalParm, Parm)
	float                                              momentumOverride;                                         // (OptionalParm, Parm)
	unsigned long                                      scaleMomentumByMass;                                      // (OptionalParm, Parm)
	float                                              scaleMomentumByMassExponent;                              // (OptionalParm, Parm)
};

// Function CDT8.DunDefWeapon_HoloSword.DoMeleeAttack
struct ADunDefWeapon_HoloSword_DoMeleeAttack_Params
{
};

// Function CDT8.DunDefWeapon_HoloSword.ExecReplicatedFunction
struct ADunDefWeapon_HoloSword_ExecReplicatedFunction_Params
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

// Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.CheckCooldown
struct ADunDefWeapon_MagicStaff_CustomRightClick_CheckCooldown_Params
{
};

// Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.PayBack
struct ADunDefWeapon_MagicStaff_CustomRightClick_PayBack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_MagicStaff_CustomRightClick.PutDownWeapon
struct ADunDefWeapon_MagicStaff_CustomRightClick_PutDownWeapon_Params
{
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.SpawnKnockbackDecal
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_SpawnKnockbackDecal_Params
{
	class UMaterialInterface*                          impactMat;                                                // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	float                                              tSize;                                                    // (Parm)
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.GetTotalKnockbackMomentum
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_GetTotalKnockbackMomentum_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.GetTotalKnockbackRange
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_GetTotalKnockbackRange_Params
{
	unsigned long                                      IgnoreChargePercent;                                      // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.FireAmmunition
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_FireAmmunition_Params
{
};

// Function CDT8.DunDefWeapon_MagicStaff_WithOribitingEffect.UpdateStacks
struct ADunDefWeapon_MagicStaff_WithOribitingEffect_UpdateStacks_Params
{
};

// Function CDT8.DunDefWeapon_Minigun.GetFireInterval
struct ADunDefWeapon_Minigun_GetFireInterval_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_Minigun.GetProjectileDamage
struct ADunDefWeapon_Minigun_GetProjectileDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.DunDefWeapon_Minigun.GraduallyReturnMovementSpeed
struct ADunDefWeapon_Minigun_GraduallyReturnMovementSpeed_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function CDT8.DunDefWeapon_Minigun.StartMSReturn
struct ADunDefWeapon_Minigun_StartMSReturn_Params
{
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.TickedByPawn
struct UHeroEquipment_Familiar_AoeBuffer_TickedByPawn_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AddRandomizeValues
struct UHeroEquipment_Familiar_AoeBuffer_AddRandomizeValues_Params
{
	float                                              equipmentQuality;                                         // (Parm)
	unsigned long                                      doResetStatsToTemplate;                                   // (OptionalParm, Parm)
	unsigned long                                      bDontUseMissionRandomizerMultiplier;                      // (OptionalParm, Parm)
	float                                              RandomizerMultiplierOverride;                             // (OptionalParm, Parm)
	unsigned long                                      bIsForShop;                                               // (OptionalParm, Parm)
	unsigned long                                      bAllowTranscendentGear;                                   // (OptionalParm, Parm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetBuffTier
struct UHeroEquipment_Familiar_AoeBuffer_GetBuffTier_Params
{
	class UDunDefBuff*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetBuffRange
struct UHeroEquipment_Familiar_AoeBuffer_GetBuffRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AttachedComponent
struct UHeroEquipment_Familiar_AoeBuffer_AttachedComponent_Params
{
	class UPrimitiveComponent*                         aComp;                                                    // (Parm, EditInline)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.ApplyLevelUp
struct UHeroEquipment_Familiar_AoeBuffer_ApplyLevelUp_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	struct FString                                     setUserEquipmentName;                                     // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     setUserForgerName;                                        // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      refresh;                                                  // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.InitFromNetInfo
struct UHeroEquipment_Familiar_AoeBuffer_InitFromNetInfo_Params
{
	struct FEquipmentNetInfo                           Info;                                                     // (Parm, NeedCtorLink)
	class UObject*                                     fromDroppedEquipment;                                     // (OptionalParm, Parm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.CheckStatLevelUpIterations
struct UHeroEquipment_Familiar_AoeBuffer_CheckStatLevelUpIterations_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (Parm)
	int                                                EquipmentLevelToCheck;                                    // (Parm)
	float                                              Value;                                                    // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.AllowStatLevelUp
struct UHeroEquipment_Familiar_AoeBuffer_AllowStatLevelUp_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	unsigned long                                      IsInForgeUI;                                              // (OptionalParm, Parm)
	unsigned long                                      bIgnoreManaRequirement;                                   // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetNextStatLevelUpValue
struct UHeroEquipment_Familiar_AoeBuffer_GetNextStatLevelUpValue_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	unsigned long                                      SetAsValue;                                               // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetStatLevelUpAmountIterations
struct UHeroEquipment_Familiar_AoeBuffer_GetStatLevelUpAmountIterations_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT8.HeroEquipment_Familiar_AoeBuffer.GetShiftClickUpgradeCount
struct UHeroEquipment_Familiar_AoeBuffer_GetShiftClickUpgradeCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
