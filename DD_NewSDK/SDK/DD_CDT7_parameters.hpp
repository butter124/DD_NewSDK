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

// Function CDT7.DunDefProjectile_HarpoonDot.ProcessTouch
struct ADunDefProjectile_HarpoonDot_ProcessTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function CDT7.DunDefProjectile_HarpoonDot.SpawnDot
struct ADunDefProjectile_HarpoonDot_SpawnDot_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnEffect
struct ADunDefProjectile_StaffDot_SpawnEffect_Params
{
};

// Function CDT7.DunDefProjectile_StaffDot.Landed
struct ADunDefProjectile_StaffDot_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Floor;                                                    // (Parm)
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnDot
struct ADunDefProjectile_StaffDot_SpawnDot_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function CDT7.DunDefProjectile_StaffDot.DoEffect
struct ADunDefProjectile_StaffDot_DoEffect_Params
{
};

// Function CDT7.DunDefProjectile_StaffDot.Explode
struct ADunDefProjectile_StaffDot_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function CDT7.DunDefWeapon_MagicStaff_Dot.ShootProjectiles
struct ADunDefWeapon_MagicStaff_Dot_ShootProjectiles_Params
{
	int                                                theFireMode;                                              // (OptionalParm, Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetHealAmount
struct UHeroEquipment_Familiar_TowerDamageScaling_GetHealAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.OnDunDefProjectileImpacted
struct UHeroEquipment_Familiar_TowerDamageScaling_OnDunDefProjectileImpacted_Params
{
	class ADunDefProjectile*                           aProjectile;                                              // (Parm)
	class AActor*                                      impactedOn;                                               // (Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_PawnTookDamage
struct UHeroEquipment_Familiar_TowerDamageScaling_NotifyEquipment_PawnTookDamage_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_AnimNotifyAttachment
struct UHeroEquipment_Familiar_TowerDamageScaling_NotifyEquipment_AnimNotifyAttachment_Params
{
	int                                                NotifyID;                                                 // (Parm)
	class USkeletalMeshComponent*                      equipmentSkelComp;                                        // (Parm, EditInline)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShootProjectile
struct UHeroEquipment_Familiar_TowerDamageScaling_ShootProjectile_Params
{
	bool                                               bIsAltProjectile;                                         // (OptionalParm, Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetMuzzleTransformation
struct UHeroEquipment_Familiar_TowerDamageScaling_GetMuzzleTransformation_Params
{
	class USkeletalMeshComponent*                      myMeshComp;                                               // (Parm, EditInline)
	struct FVector                                     SpawnLocation;                                            // (Parm, OutParm)
	struct FRotator                                    SpawnRotation;                                            // (Parm, OutParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetWeaponDamage
struct UHeroEquipment_Familiar_TowerDamageScaling_GetWeaponDamage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ApplyPrimaryDamageMultiplierDisplay
struct UHeroEquipment_Familiar_TowerDamageScaling_ApplyPrimaryDamageMultiplierDisplay_Params
{
	int                                                StatValue;                                                // (Parm, OutParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetEquipmentStatValue
struct UHeroEquipment_Familiar_TowerDamageScaling_GetEquipmentStatValue_Params
{
	TEnumAsByte<EEquipmentStatType>                    equipmentStatType;                                        // (Parm)
	bool                                               returnFinalAddedValue;                                    // (OptionalParm, Parm)
	bool                                               includeStatLevelUp;                                       // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AddRandomizeValues
struct UHeroEquipment_Familiar_TowerDamageScaling_AddRandomizeValues_Params
{
	float                                              equipmentQuality;                                         // (Parm)
	bool                                               doResetStatsToTemplate;                                   // (OptionalParm, Parm)
	bool                                               bDontUseMissionRandomizerMultiplier;                      // (OptionalParm, Parm)
	float                                              RandomizerMultiplierOverride;                             // (OptionalParm, Parm)
	bool                                               bIsForShop;                                               // (OptionalParm, Parm)
	bool                                               bAllowTranscendentGear;                                   // (OptionalParm, Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AllowStatLevelUp
struct UHeroEquipment_Familiar_TowerDamageScaling_AllowStatLevelUp_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	bool                                               IsInForgeUI;                                              // (OptionalParm, Parm)
	bool                                               bIgnoreManaRequirement;                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetAttackInterval
struct UHeroEquipment_Familiar_TowerDamageScaling_GetAttackInterval_Params
{
	bool                                               bIncludeShotsPerSecondExponent;                           // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetElementalDamageType
struct UHeroEquipment_Familiar_TowerDamageScaling_GetElementalDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileElementalDamage
struct UHeroEquipment_Familiar_TowerDamageScaling_GetProjectileElementalDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileDamage
struct UHeroEquipment_Familiar_TowerDamageScaling_GetProjectileDamage_Params
{
	class ADunDefProjectile*                           projectileArch;                                           // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileSpeed
struct UHeroEquipment_Familiar_TowerDamageScaling_GetProjectileSpeed_Params
{
	class ADunDefProjectile*                           projectileArch;                                           // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetNumProjectiles
struct UHeroEquipment_Familiar_TowerDamageScaling_GetNumProjectiles_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredSphereRotationalPlacement
struct UHeroEquipment_Familiar_TowerDamageScaling_GetDesiredSphereRotationalPlacement_Params
{
	class USkeletalMeshComponent*                      myMeshComp;                                               // (Parm, EditInline)
	class ADunDefPlayer*                               myPlayer;                                                 // (Parm)
	unsigned char                                      HasTarget;                                                // (Parm, OutParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredDirection
struct UHeroEquipment_Familiar_TowerDamageScaling_GetDesiredDirection_Params
{
	class USkeletalMeshComponent*                      myMeshComp;                                               // (Parm, EditInline)
	class ADunDefPlayer*                               myPlayer;                                                 // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShutDown
struct UHeroEquipment_Familiar_TowerDamageScaling_ShutDown_Params
{
	bool                                               isDestruction;                                            // (OptionalParm, Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AttachedComponent
struct UHeroEquipment_Familiar_TowerDamageScaling_AttachedComponent_Params
{
	class UPrimitiveComponent*                         aComp;                                                    // (Parm, EditInline)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateAI
struct UHeroEquipment_Familiar_TowerDamageScaling_UpdateAI_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateDelayedShots
struct UHeroEquipment_Familiar_TowerDamageScaling_UpdateDelayedShots_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.TickedByPawn
struct UHeroEquipment_Familiar_TowerDamageScaling_TickedByPawn_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestTarget
struct UHeroEquipment_Familiar_TowerDamageScaling_GetBestTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestHealingTarget
struct UHeroEquipment_Familiar_TowerDamageScaling_GetBestHealingTarget_Params
{
	float                                              CheckHealthPercentageThreshold;                           // (OptionalParm, Parm)
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AttachedComponent
struct UHeroEquipment_Familiar_Melee_TowerScaling_AttachedComponent_Params
{
	class UPrimitiveComponent*                         aComp;                                                    // (Parm, EditInline)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.NotifyEquipment_AnimNotifyAttachment
struct UHeroEquipment_Familiar_Melee_TowerScaling_NotifyEquipment_AnimNotifyAttachment_Params
{
	int                                                NotifyID;                                                 // (Parm)
	class USkeletalMeshComponent*                      equipmentSkelComp;                                        // (Parm, EditInline)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.ShutDown
struct UHeroEquipment_Familiar_Melee_TowerScaling_ShutDown_Params
{
	bool                                               isDestruction;                                            // (OptionalParm, Parm)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAI
struct UHeroEquipment_Familiar_Melee_TowerScaling_UpdateAI_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetHealMultiplier
struct UHeroEquipment_Familiar_Melee_TowerScaling_GetHealMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetMomentumMultiplier
struct UHeroEquipment_Familiar_Melee_TowerScaling_GetMomentumMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAttackSwing
struct UHeroEquipment_Familiar_Melee_TowerScaling_UpdateAttackSwing_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AddToSwingHurtList
struct UHeroEquipment_Familiar_Melee_TowerScaling_AddToSwingHurtList_Params
{
	class ADunDefPlayer*                               myOwner;                                                  // (Parm)
	class AActor*                                      newEntry;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.TickedByPawn
struct UHeroEquipment_Familiar_Melee_TowerScaling_TickedByPawn_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT7.UI_TBR.LaunchMap
struct UUI_TBR_LaunchMap_Params
{
	bool                                               bStartTrueBossRush;                                       // (OptionalParm, Parm)
};

// Function CDT7.UI_TBR.WasCheckPointButtonPressed
struct UUI_TBR_WasCheckPointButtonPressed_Params
{
	class UUIObject*                                   Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_TBR.NotifyWidgetClicked
struct UUI_TBR_NotifyWidgetClicked_Params
{
	class UUIObject*                                   Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_TBR.CheckProgress
struct UUI_TBR_CheckProgress_Params
{
};

// Function CDT7.UI_TBR.SceneActivated
struct UUI_TBR_SceneActivated_Params
{
	bool                                               bInitialActivation;                                       // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
