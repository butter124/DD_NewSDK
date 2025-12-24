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
	unsigned long                                      bIsAltProjectile;                                         // (OptionalParm, Parm)
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
	unsigned long                                      returnFinalAddedValue;                                    // (OptionalParm, Parm)
	unsigned long                                      includeStatLevelUp;                                       // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AddRandomizeValues
struct UHeroEquipment_Familiar_TowerDamageScaling_AddRandomizeValues_Params
{
	float                                              equipmentQuality;                                         // (Parm)
	unsigned long                                      doResetStatsToTemplate;                                   // (OptionalParm, Parm)
	unsigned long                                      bDontUseMissionRandomizerMultiplier;                      // (OptionalParm, Parm)
	float                                              RandomizerMultiplierOverride;                             // (OptionalParm, Parm)
	unsigned long                                      bIsForShop;                                               // (OptionalParm, Parm)
	unsigned long                                      bAllowTranscendentGear;                                   // (OptionalParm, Parm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AllowStatLevelUp
struct UHeroEquipment_Familiar_TowerDamageScaling_AllowStatLevelUp_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	unsigned long                                      IsInForgeUI;                                              // (OptionalParm, Parm)
	unsigned long                                      bIgnoreManaRequirement;                                   // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetAttackInterval
struct UHeroEquipment_Familiar_TowerDamageScaling_GetAttackInterval_Params
{
	unsigned long                                      bIncludeShotsPerSecondExponent;                           // (OptionalParm, Parm)
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
	unsigned long                                      isDestruction;                                            // (OptionalParm, Parm)
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
	unsigned long                                      isDestruction;                                            // (OptionalParm, Parm)
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
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
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
	unsigned long                                      bStartTrueBossRush;                                       // (OptionalParm, Parm)
};

// Function CDT7.UI_TBR.WasCheckPointButtonPressed
struct UUI_TBR_WasCheckPointButtonPressed_Params
{
	class UUIObject*                                   Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_TBR.NotifyWidgetClicked
struct UUI_TBR_NotifyWidgetClicked_Params
{
	class UUIObject*                                   Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_TBR.CheckProgress
struct UUI_TBR_CheckProgress_Params
{
};

// Function CDT7.UI_TBR.SceneActivated
struct UUI_TBR_SceneActivated_Params
{
	unsigned long                                      bInitialActivation;                                       // (Parm)
};

// Function CDT7.UI_ShopBase.GetSelectedShopButton
struct UUI_ShopBase_GetSelectedShopButton_Params
{
	class UUIButton_DataListEntry*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.GetShopInfo
struct UUI_ShopBase_GetShopInfo_Params
{
	struct FsShopInfo                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT7.UI_ShopBase.GetItemInfo
struct UUI_ShopBase_GetItemInfo_Params
{
	class UUIButton_Shop*                              Button;                                                   // (Parm)
	unsigned long                                      bGetValueFromFocusControl;                                // (Parm)
	unsigned long                                      bGetValueFromLastSelectedButton;                          // (Parm)
	struct FsShopItemInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT7.UI_ShopBase.GetShopName
struct UUI_ShopBase_GetShopName_Params
{
	unsigned long                                      bGetDescription;                                          // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT7.UI_ShopBase.AllowOverlays
struct UUI_ShopBase_AllowOverlays_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.GetConsumedItemList
struct UUI_ShopBase_GetConsumedItemList_Params
{
	struct FsShopItemInfo                              ShopItemInfo;                                             // (Parm, NeedCtorLink)
	TArray<class UHeroEquipment*>                      ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT7.UI_ShopBase.GetLastSelectedItem
struct UUI_ShopBase_GetLastSelectedItem_Params
{
	class UUIButton_Shop*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.GiveMana
struct UUI_ShopBase_GiveMana_Params
{
	struct FsShopItemInfo                              ShopItemInfo;                                             // (Parm, NeedCtorLink)
	class ADunDefPlayerController*                     PlayerController;                                         // (Parm)
};

// Function CDT7.UI_ShopBase.GenerateItem
struct UUI_ShopBase_GenerateItem_Params
{
	struct FsShopItemInfo                              ShopItemInfo;                                             // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.PurchaseItem
struct UUI_ShopBase_PurchaseItem_Params
{
	struct FsShopItemInfo                              ShopItemInfo;                                             // (Parm, NeedCtorLink)
};

// Function CDT7.UI_ShopBase.EntrySelected
struct UUI_ShopBase_EntrySelected_Params
{
	class UUIButton_DataListEntry*                     Button;                                                   // (Parm)
};

// Function CDT7.UI_ShopBase.RefreshedList
struct UUI_ShopBase_RefreshedList_Params
{
};

// Function CDT7.UI_ShopBase.RefreshItemList
struct UUI_ShopBase_RefreshItemList_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function CDT7.UI_ShopBase.OnReceivedInputKey
struct UUI_ShopBase_OnReceivedInputKey_Params
{
	struct FInputEventParameters                       EventParms;                                               // (Const, Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.CancelClicked
struct UUI_ShopBase_CancelClicked_Params
{
};

// Function CDT7.UI_ShopBase.ConfirmClicked
struct UUI_ShopBase_ConfirmClicked_Params
{
};

// Function CDT7.UI_ShopBase.OpenError
struct UUI_ShopBase_OpenError_Params
{
	TEnumAsByte<EErrorCode>                            ErrorCode;                                                // (Parm)
};

// Function CDT7.UI_ShopBase.OpenConfirm
struct UUI_ShopBase_OpenConfirm_Params
{
	struct FsShopItemInfo                              ItemInfo;                                                 // (Parm, NeedCtorLink)
};

// Function CDT7.UI_ShopBase.OnItemPurchased
struct UUI_ShopBase_OnItemPurchased_Params
{
	class UUIObject*                                   CallerObject;                                             // (Parm)
};

// Function CDT7.UI_ShopBase.NotifyWidgetClicked
struct UUI_ShopBase_NotifyWidgetClicked_Params
{
	class UUIObject*                                   Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.GetTotalCost
struct UUI_ShopBase_GetTotalCost_Params
{
	struct FsShopItemInfo                              ShopItemInfo;                                             // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.UpdateUI
struct UUI_ShopBase_UpdateUI_Params
{
};

// Function CDT7.UI_ShopBase.CanPurchaseItem
struct UUI_ShopBase_CanPurchaseItem_Params
{
	class UUIButton_Shop*                              Button;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.ConsumeItems
struct UUI_ShopBase_ConsumeItems_Params
{
	struct FsShopItemInfo                              ShopItemInfo;                                             // (Parm, NeedCtorLink)
	TArray<class UHeroEquipment*>                      ItemsToConsume;                                           // (Parm, NeedCtorLink)
	struct FString                                     ManaToConsume;                                            // (OptionalParm, Parm, NeedCtorLink)
};

// Function CDT7.UI_ShopBase.ClearCurrencyAmounts
struct UUI_ShopBase_ClearCurrencyAmounts_Params
{
};

// Function CDT7.UI_ShopBase.FormatManaString
struct UUI_ShopBase_FormatManaString_Params
{
	struct FString                                     ManaStringin;                                             // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT7.UI_ShopBase.UpdateCurrencyAmounts
struct UUI_ShopBase_UpdateCurrencyAmounts_Params
{
};

// Function CDT7.UI_ShopBase.InitializeShop
struct UUI_ShopBase_InitializeShop_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ShopBase.PostInitialSceneUpdate
struct UUI_ShopBase_PostInitialSceneUpdate_Params
{
};

// Function CDT7.UI_ShopBase.SceneActivated
struct UUI_ShopBase_SceneActivated_Params
{
	unsigned long                                      bInitialActivation;                                       // (Parm)
};

// Function CDT7.UI_ConfirmBox.OnReceivedInputKey
struct UUI_ConfirmBox_OnReceivedInputKey_Params
{
	struct FInputEventParameters                       EventParms;                                               // (Const, Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ConfirmBox.PostInitialSceneUpdate
struct UUI_ConfirmBox_PostInitialSceneUpdate_Params
{
};

// Function CDT7.UI_ConfirmBox.OnButtonPressed
struct UUI_ConfirmBox_OnButtonPressed_Params
{
	class UUIScreenObject*                             EventObject;                                              // (Parm)
	int                                                PlayerIndex;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UI_ConfirmBox.InitalizeItemFromShop
struct UUI_ConfirmBox_InitalizeItemFromShop_Params
{
	struct FsShopItemInfo                              ItemInfo;                                                 // (Parm, NeedCtorLink)
	struct FsShopInfo                                  ShopInfo;                                                 // (Parm, NeedCtorLink)
};

// Function CDT7.UI_ConfirmBox.SceneActivated
struct UUI_ConfirmBox_SceneActivated_Params
{
	unsigned long                                      bInitialActivation;                                       // (Parm)
};

// Function CDT7.UI_ConfirmBox.OnCancelClicked
struct UUI_ConfirmBox_OnCancelClicked_Params
{
};

// Function CDT7.UI_ConfirmBox.OnConfirmClicked
struct UUI_ConfirmBox_OnConfirmClicked_Params
{
};

// Function CDT7.UIButton_Shop.DrawToolTip
struct UUIButton_Shop_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X1;                                                       // (Parm)
	float                                              X2;                                                       // (Parm)
	float                                              Y1;                                                       // (Parm)
	float                                              Y2;                                                       // (Parm)
	float                                              ScaleX;                                                   // (Parm)
	float                                              ScaleY;                                                   // (Parm)
};

// Function CDT7.UIButton_Shop.RenderGame
struct UUIButton_Shop_RenderGame_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X1;                                                       // (Parm)
	float                                              X2;                                                       // (Parm)
	float                                              Y1;                                                       // (Parm)
	float                                              Y2;                                                       // (Parm)
};

// Function CDT7.UIButton_Shop.GetEquipment
struct UUIButton_Shop_GetEquipment_Params
{
	class UHeroEquipment*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UIButton_Shop.UpdateItemInfo
struct UUIButton_Shop_UpdateItemInfo_Params
{
};

// Function CDT7.UIButton_Shop.GetDataContainer
struct UUIButton_Shop_GetDataContainer_Params
{
	class UUIDataContainer_Equipment*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UIButton_Shop.GetToolTipString
struct UUIButton_Shop_GetToolTipString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT7.UIButton_Shop.InitializeFromDataListEntry
struct UUIButton_Shop_InitializeFromDataListEntry_Params
{
	class UUIPanel_DataList*                           DataList;                                                 // (Parm)
	TScriptInterface<class UDataListEntryInterface>    Entry;                                                    // (Parm)
};

// Function CDT7.UIButton_Shop.GetShopInfo
struct UUIButton_Shop_GetShopInfo_Params
{
	struct FsShopInfo                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT7.UIButton_Shop.GetShopItemInfo
struct UUIButton_Shop_GetShopItemInfo_Params
{
	struct FsShopItemInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT7.UIButton_Shop.ButtonClicked
struct UUIButton_Shop_ButtonClicked_Params
{
	class UUIScreenObject*                             Sender;                                                   // (Parm)
	int                                                PlayerIndex;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.UIButton_Shop.NotifyWidgetClicked
struct UUIButton_Shop_NotifyWidgetClicked_Params
{
	class UUIObject*                                   Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT7.IShopHandler.OnItemPurchased
struct UIShopHandler_OnItemPurchased_Params
{
	class UUIObject*                                   CallerObject;                                             // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
