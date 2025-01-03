// clang-format off
#include "pch.h"
#include "../includes/menu_item.h"
// clang-format on

#define IMGUI_BITFIELD_CHECKBOX(label, structMember)                           \
  {                                                                            \
    bool temp = (uHeroEquipment->structMember != 0);                           \
    if (ImGui::Checkbox(label, &temp)) {                                       \
      uHeroEquipment->structMember = temp ? 1 : 0;                             \
    }                                                                          \
  }

void MenuItem::OnBegin() { ImGui::Begin("Item"); }

void MenuItem::RenderUI() {
  if (!uHeroEquipment)
    return;

  ImGui::PushItemWidth(200);
  RenderItem();
  ImGui::PopItemWidth();
}

void MenuItem::RenderItem() {
  ImGui::Text("UserEquipmentName :  %s",
              uHeroEquipment->UserEquipmentName.ToString().c_str());

  // Render input field
  ImGui::InputText("UserEquipmentName: ", itemName, sizeof(itemName));
  if (ImGui::Button("Update")) {
    ChangeFString(uHeroEquipment->UserEquipmentName, itemName);
  }
  // When the input is updated, convert the itemNamefer back to std::wstring

  ImGui::Text("InternalName : %s",
              uHeroEquipment->EquipmentName.ToString().c_str());

  ImGui::Text("ItemAddr     : 0x%p", uHeroEquipment);
  ImGui::SameLine();
  if (ImGui::Button("Copy to clipboard")) {
    ImGui::LogToClipboard();
    ImGui::LogText("%p", uHeroEquipment);
    ImGui::LogFinish();
  }

  FeaturesAndRequirements();
}

void MenuItem::FeaturesAndRequirements() {
  std::string itemQuality = config.GetItemQuality(uHeroEquipment);
  ImGui::Text("item quality: %s", itemQuality.c_str());
  // clang-format off
  ImGui::InputInt("HHealth   ", &uHeroEquipment->StatModifiers[eHHealth]);
  ImGui::InputInt("HSpeed    ", &uHeroEquipment->StatModifiers[eHSpeed]);
  ImGui::InputInt("HDamage   ", &uHeroEquipment->StatModifiers[eHDamage]);
  ImGui::InputInt("HCast     ", &uHeroEquipment->StatModifiers[eHCast]);
  ImGui::InputInt("Ability1  ", &uHeroEquipment->StatModifiers[Ability1]);
  ImGui::InputInt("Ability2  ", &uHeroEquipment->StatModifiers[Ability2]);
  ImGui::InputInt("THealth   ", &uHeroEquipment->StatModifiers[eTHealth]);
  ImGui::InputInt("TSpeed    ", &uHeroEquipment->StatModifiers[eTSpeed]);
  ImGui::InputInt("TDamage   ", &uHeroEquipment->StatModifiers[eTDamage]);
  ImGui::InputInt("TRange    ", &uHeroEquipment->StatModifiers[eTRange]);

  ImGui::InputInt("MaxEquipmentLevel", &(uHeroEquipment->MaxEquipmentLevel));
  ImGui::InputInt("DamageReductions1", &(uHeroEquipment->DamageReductions[0].PercentageReduction));
  ImGui::InputInt("DamageReductions2", &(uHeroEquipment->DamageReductions[1].PercentageReduction));
  ImGui::InputInt("DamageReductions3", &(uHeroEquipment->DamageReductions[2].PercentageReduction));
  ImGui::InputInt("DamageReductions4", &(uHeroEquipment->DamageReductions[3].PercentageReduction));

  ImGui::InputInt("WeaponDamageBonus", &uHeroEquipment->WeaponDamageBonus);
  ImGui::InputInt("WeaponNumberOfProjectilesBonus", &uHeroEquipment->WeaponNumberOfProjectilesBonus);
  ImGui::InputInt("WeaponSpeedOfProjectilesBonus", &uHeroEquipment->WeaponSpeedOfProjectilesBonus);
  //-class UClass *WeaponAdditionalDamageType;
  ImGui::InputInt("WeaponAdditionalDamageAmount", &uHeroEquipment->WeaponAdditionalDamageAmount);
  ImGui::InputFloat("WeaponDrawScaleMultiplier", &uHeroEquipment->WeaponDrawScaleMultiplier);
  ImGui::InputFloat("MaxRandomElementalDamageMultiplier", &uHeroEquipment->MaxRandomElementalDamageMultiplier);
  ImGui::InputFloat("WeaponSwingSpeedMultiplier", &uHeroEquipment->WeaponSwingSpeedMultiplier);
  IMGUI_BITFIELD_CHECKBOX("WeaponReloadSpeedBonusUse", WeaponReloadSpeedBonusUse);
  IMGUI_BITFIELD_CHECKBOX("bIgnoreLevelRequirement", bIgnoreLevelRequirement);
  IMGUI_BITFIELD_CHECKBOX("WeaponKnockbackBonusUse", WeaponKnockbackBonusUse);
  IMGUI_BITFIELD_CHECKBOX("bCanBeUpgraded", bCanBeUpgraded);
  IMGUI_BITFIELD_CHECKBOX("AllowRenamingAtMaxUpgrade", AllowRenamingAtMaxUpgrade);
  IMGUI_BITFIELD_CHECKBOX("bForceUseParentTemplate", bForceUseParentTemplate);
  IMGUI_BITFIELD_CHECKBOX("WeaponAltDamageBonusUse", WeaponAltDamageBonusUse);
  IMGUI_BITFIELD_CHECKBOX("bDisableTheRandomization", bDisableTheRandomization);
  IMGUI_BITFIELD_CHECKBOX("WeaponBlockingBonusUse", WeaponBlockingBonusUse);
  IMGUI_BITFIELD_CHECKBOX("bDontCalculateLevelRequirement", bDontCalculateLevelRequirement);
  IMGUI_BITFIELD_CHECKBOX("WeaponClipAmmoBonusUse", WeaponClipAmmoBonusUse);
  IMGUI_BITFIELD_CHECKBOX("bDontUseLevelName", bDontUseLevelName);
  IMGUI_BITFIELD_CHECKBOX("WeaponChargeSpeedBonusUse", WeaponChargeSpeedBonusUse);
  IMGUI_BITFIELD_CHECKBOX("WeaponShotsPerSecondBonusUse", WeaponShotsPerSecondBonusUse);
  IMGUI_BITFIELD_CHECKBOX("UseWeaponCoreStats", UseWeaponCoreStats);
  IMGUI_BITFIELD_CHECKBOX("bIsLocked", bIsLocked);
  IMGUI_BITFIELD_CHECKBOX("bWasAttached", bWasAttached);
  IMGUI_BITFIELD_CHECKBOX("bIsShopEquipment", bIsShopEquipment);
  IMGUI_BITFIELD_CHECKBOX("bIsSecondary", bIsSecondary);
  IMGUI_BITFIELD_CHECKBOX("bIsNameOnlineVerified", bIsNameOnlineVerified);
  IMGUI_BITFIELD_CHECKBOX("bIsForgerNameOnlineVerified", bIsForgerNameOnlineVerified);
  IMGUI_BITFIELD_CHECKBOX("bWasAddedToDefenderStore", bWasAddedToDefenderStore);
  ImGui::InputInt("WeaponReloadSpeedBonus", &uHeroEquipment->WeaponReloadSpeedBonus);
  ImGui::InputInt("WeaponKnockbackBonus", &uHeroEquipment->WeaponKnockbackBonus);
  ImGui::InputInt("WeaponAltDamageBonus", &uHeroEquipment->WeaponAltDamageBonus);
  ImGui::InputInt("WeaponBlockingBonus", &uHeroEquipment->WeaponBlockingBonus);
  ImGui::InputInt("WeaponClipAmmoBonus", &uHeroEquipment->WeaponClipAmmoBonus);
  ImGui::InputInt("AdditionalAllowedUpgradeResistancePoints", &uHeroEquipment->AdditionalAllowedUpgradeResistancePoints);
  ImGui::InputInt("RequirementLevelOverride", &uHeroEquipment->RequirementLevelOverride);
  ImGui::InputInt("WeaponChargeSpeedBonus", &uHeroEquipment->WeaponChargeSpeedBonus);
  ImGui::InputInt("WeaponShotsPerSecondBonus", &uHeroEquipment->WeaponShotsPerSecondBonus);
  // unsigned char NameIndex_Base;
  // unsigned char NameIndex_QualityDescriptor;
  // unsigned char NameIndex_DamageReduction;
  // unsigned char PrimaryColorSet;
  // unsigned char SecondaryColorSet;
  //-unsigned char bCantBeDropped;
  //-unsigned char bCantBeSold;
  //-unsigned char bAutoLockInItemBox;
  //-unsigned char bDidOnetimeEffect;
  //-unsigned char ManualLR;
  //-TEnumAsByte<EEquipmentType> EquipmentType;
  // unsigned char UnknownData00[0x1];
  // TArray<struct FLinearColor> PrimaryColorSets;
  // TArray<struct FLinearColor> SecondaryColorSets;
  //-struct FLinearColor PrimaryColorOverride;
  //-struct FLinearColor SecondaryColorOverride;
  ImGui::InputInt("MaximumSellWorth", &uHeroEquipment->MaximumSellWorth);
  ImGui::InputInt("MinimumSellWorth", &uHeroEquipment->MinimumSellWorth);
  ImGui::InputInt("ShopMinimumSellWorth", &uHeroEquipment->ShopMinimumSellWorth);
  //-ImGui::InputInt("MaxEquipmentLevel", &uheroequipment->MaxEquipmentLevel);
  //--IMGUI_FSTRING(UserEquipmentName);
  //--IMGUI_FSTRING(EquipmentDescription);
  //-ImGui::InputInt("StatEquipmentIDs",
  //&uheroequipment->StatEquipmentIDs)[0x3];
  //-ImGui::InputInt("StatEquipmentTiers",&uheroequipment->StatEquipmentTiers)[0x3];
  //-struct FLinearColor QualityBeamColorOverride;
  ImGui::InputInt("equipmentTemplateUniqueID", &uHeroEquipment->equipmentTemplateUniqueID);
  //--IMGUI_FSTRING(UserForgerName);
  // struct FVector DroppedLocation;
  ImGui::InputInt("FolderID", &uHeroEquipment->FolderID);
  ImGui::InputInt("Level", &uHeroEquipment->Level);
  ImGui::InputInt("StoredMana", &uHeroEquipment->StoredMana);
  ImGui::InputInt("UserID", &uHeroEquipment->UserID);
  ImGui::InputFloat("MyRatingPercent", &uHeroEquipment->MyRatingPercent);
  ImGui::InputFloat("MyRating", &uHeroEquipment->MyRating);
  ImGui::InputInt("EquipmentID1", &uHeroEquipment->EquipmentID1);
  ImGui::InputInt("EquipmentID2", &uHeroEquipment->EquipmentID2);
  //--IMGUI_FSTRING(EquipmentName);
  // struct FEG_StatRandomizer StatModifierRandomizers[0xB];
  IMGUI_BITFIELD_CHECKBOX("bForceRandomDLCColor", bForceRandomDLCColor);
  IMGUI_BITFIELD_CHECKBOX("bUseShotsPerSecondRandomizerMult", bUseShotsPerSecondRandomizerMult);
  IMGUI_BITFIELD_CHECKBOX("bForceAllowDropping", bForceAllowDropping);
  IMGUI_BITFIELD_CHECKBOX("bForceAllowSelling", bForceAllowSelling);
  IMGUI_BITFIELD_CHECKBOX("bDoTranscendentLevelBoost", bDoTranscendentLevelBoost);
  IMGUI_BITFIELD_CHECKBOX("bUseLevelRequirementOverrides", bUseLevelRequirementOverrides);
  IMGUI_BITFIELD_CHECKBOX("bForceRandomizerWithMinEquipmentLevel", bForceRandomizerWithMinEquipmentLevel);
  IMGUI_BITFIELD_CHECKBOX("bAllowSellingToExceedSoftManaCap", bAllowSellingToExceedSoftManaCap);
  IMGUI_BITFIELD_CHECKBOX("bCanBeEquipped", bCanBeEquipped);
  IMGUI_BITFIELD_CHECKBOX("bForceUseEquipmentDrawScale", bForceUseEquipmentDrawScale);
  IMGUI_BITFIELD_CHECKBOX("bDistributeManaUponDroppedDestruction", bDistributeManaUponDroppedDestruction);
  IMGUI_BITFIELD_CHECKBOX("bAllowDroppedDestruction", bAllowDroppedDestruction);
  IMGUI_BITFIELD_CHECKBOX("bDontHideEquipmentAttachmentInFPV", bDontHideEquipmentAttachmentInFPV);
  IMGUI_BITFIELD_CHECKBOX("bEncumberHero", bEncumberHero);
  IMGUI_BITFIELD_CHECKBOX("bIconUseEquipmentRating", bIconUseEquipmentRating);
  IMGUI_BITFIELD_CHECKBOX("bPlayerShopForceToMinimumSellWorth", bPlayerShopForceToMinimumSellWorth);
  IMGUI_BITFIELD_CHECKBOX("bMaxEquipLevelUseAltCalc", bMaxEquipLevelUseAltCalc);
  IMGUI_BITFIELD_CHECKBOX("bUseExtraQualityDamage", bUseExtraQualityDamage);
  IMGUI_BITFIELD_CHECKBOX("bUseSecondExtraQualityDamage", bUseSecondExtraQualityDamage);
  IMGUI_BITFIELD_CHECKBOX("AllowNameRandomization", AllowNameRandomization);
  IMGUI_BITFIELD_CHECKBOX("OnlyRandomizeBaseName", OnlyRandomizeBaseName);
  IMGUI_BITFIELD_CHECKBOX("bNoNegativeRandomizations", bNoNegativeRandomizations);
  IMGUI_BITFIELD_CHECKBOX("WeaponAdditionalDamageTypeNotPoison", WeaponAdditionalDamageTypeNotPoison);
  IMGUI_BITFIELD_CHECKBOX("UsesEquipmentAttachments", UsesEquipmentAttachments);
  IMGUI_BITFIELD_CHECKBOX("UseColorSets", UseColorSets);
  IMGUI_BITFIELD_CHECKBOX("RandomizeColorSets", RandomizeColorSets);
  IMGUI_BITFIELD_CHECKBOX("ForceQualityBeam", ForceQualityBeam);
  IMGUI_BITFIELD_CHECKBOX("bUsePreviewZOffsetting", bUsePreviewZOffsetting);
  IMGUI_BITFIELD_CHECKBOX("bUseSelectionPreviewScale", bUseSelectionPreviewScale);
  IMGUI_BITFIELD_CHECKBOX("bUsePawnWeaponDamageCallback", bUsePawnWeaponDamageCallback);
  IMGUI_BITFIELD_CHECKBOX("bUsePawnDamageCallback", bUsePawnDamageCallback);
  IMGUI_BITFIELD_CHECKBOX("bCantSave", bCantSave);
  IMGUI_BITFIELD_CHECKBOX("bCantPutInItemBox", bCantPutInItemBox);
  IMGUI_BITFIELD_CHECKBOX("ProvideHealOnBlock", ProvideHealOnBlock);
  IMGUI_BITFIELD_CHECKBOX("bSetRandomizerMultipliers", bSetRandomizerMultipliers);
  IMGUI_BITFIELD_CHECKBOX("bPlayerShopPurchasePending", bPlayerShopPurchasePending);
  IMGUI_BITFIELD_CHECKBOX("bEnchantmentsInitalized", bEnchantmentsInitalized);
  IMGUI_BITFIELD_CHECKBOX("bDontDisplayPetSize", bDontDisplayPetSize);
  IMGUI_BITFIELD_CHECKBOX("bCanModifyParticleColour", bCanModifyParticleColour);
  IMGUI_BITFIELD_CHECKBOX("bUseHighDigitManaTokenValue", bUseHighDigitManaTokenValue);
  ImGui::InputInt("RandomizerStatModifierGoNegativeThreshold", &uHeroEquipment->RandomizerStatModifierGoNegativeThreshold);
  ImGui::InputInt("MaxUpgradeableSpeedOfProjectilesBonus", &uHeroEquipment->MaxUpgradeableSpeedOfProjectilesBonus);
  ImGui::InputFloat("RandomizerStatModifierGoNegativeMultiplier", &uHeroEquipment->RandomizerStatModifierGoNegativeMultiplier);
  ImGui::InputFloat("RandomizerStatModifierGoNegativeChance", &uHeroEquipment->RandomizerStatModifierGoNegativeChance); // class ADunDefWeapon*// EquipmentWeaponTemplate;
  ImGui::InputFloat("RandomizerQualityMultiplier", &uHeroEquipment->RandomizerQualityMultiplier);
  ImGui::InputFloat("LevelRequirementRatingOffset", &uHeroEquipment->LevelRequirementRatingOffset);
  ImGui::InputFloat("MinElementalDamageIncreasePerLevel", &uHeroEquipment->MinElementalDamageIncreasePerLevel);
  ImGui::InputFloat("HighLevelRequirementsRatingThreshold", &uHeroEquipment->HighLevelRequirementsRatingThreshold);
  ImGui::InputFloat("MaximumSellWorthUpgradeDepreciationFactor", &uHeroEquipment->MaximumSellWorthUpgradeDepreciationFactor);
  ImGui::InputFloat("TranscendentLevelBoostAmount", &uHeroEquipment->TranscendentLevelBoostAmount);
  ImGui::InputFloat("TranscendentLevelBoostRandomizerPower", &uHeroEquipment->TranscendentLevelBoostRandomizerPower);
  ImGui::InputFloat("HighResaleWorthPower", &uHeroEquipment->HighResaleWorthPower);
  ImGui::InputFloat("SupremeLevelBoostAmount", &uHeroEquipment->SupremeLevelBoostAmount);
  ImGui::InputFloat("SupremeLevelBoostRandomizerPower", &uHeroEquipment->SupremeLevelBoostRandomizerPower);
  ImGui::InputFloat("UltimateLevelBoostAmount", &uHeroEquipment->UltimateLevelBoostAmount);
  ImGui::InputFloat("UltimateLevelBoostRandomizerPower", &uHeroEquipment->UltimateLevelBoostRandomizerPower);
  // TArray<struct FLevelRequirementOverride> LevelRequirementOverrides;
  // struct// FEG_StatRandomizer WeaponDamageBonusRandomizer;
  ImGui::InputInt("OneTime_ExpBonus", &uHeroEquipment->OneTime_ExpBonus);
  ImGui::InputInt("HighLevelThreshold", &uHeroEquipment->HighLevelThreshold);
  ImGui::InputInt("MaxHeroStatValue", &uHeroEquipment->MaxHeroStatValue);
  ImGui::InputInt("TranscendentMaxHeroStatValue", &uHeroEquipment->TranscendentMaxHeroStatValue);
  ImGui::InputInt("SupremeMaxHeroStatValue", &uHeroEquipment->SupremeMaxHeroStatValue);
  ImGui::InputInt("MinTranscendentLevel", &uHeroEquipment->MinTranscendentLevel);
  ImGui::InputInt("MinSupremeLevel", &uHeroEquipment->MinSupremeLevel);
  ImGui::InputInt("UltimateMaxHeroStatValue", &uHeroEquipment->UltimateMaxHeroStatValue);
  ImGui::InputInt("UltimatePlusMaxHeroStatValue", &uHeroEquipment->UltimatePlusMaxHeroStatValue);
  ImGui::InputInt("MinUltimateLevel", &uHeroEquipment->MinUltimateLevel);
  // TArray<struct FString> DescriptionStringOriginalReplacements;
  // TArray<struct// FString> DescriptionStringNewReplacements; struct
  // FEG_StatRandomizer WeaponAltDamageBonusRandomizer; struct
  // FEG_StatRandomizer DamageReductionRandomizers[0x4]; struct//// FEG_StatRandomizer                          WeaponClipAmmoBonusRandomizer;
  // struct FEG_StatRandomizer WeaponReloadSpeedBonusRandomizer; struct//// FEG_StatRandomizer                          WeaponKnockbackBonusRandomizer;
  // struct FEG_StatRandomizer WeaponChargeSpeedBonusRandomizer; struct//// FEG_StatRandomizer                          WeaponBlockingBonusRandomizer;
  // struct FEG_StatRandomizer MaxEquipmentLevelRandomizer;
  ImGui::InputFloat("SellWorthLinearFactor", &uHeroEquipment->SellWorthLinearFactor);
  ImGui::InputFloat("SellWorthExponentialFactor", &uHeroEquipment->SellWorthExponentialFactor);
  ImGui::InputFloat("SellWorthMin", &uHeroEquipment->SellWorthMin);
  ImGui::InputFloat("SellWorthMax", &uHeroEquipment->SellWorthMax);
  ImGui::InputFloat("SellRatingExponent", &uHeroEquipment->SellRatingExponent);
  ImGui::InputFloat("SellWorthEquipmentRatingBase", &uHeroEquipment->SellWorthEquipmentRatingBase);
  ImGui::InputFloat("ElementalDamageMultiplier", &uHeroEquipment->ElementalDamageMultiplier);
  ImGui::InputFloat("ShopSellWorthLinearFactor", &uHeroEquipment->ShopSellWorthLinearFactor);
  ImGui::InputFloat("ShopSellWorthExponentialFactor", &uHeroEquipment->ShopSellWorthExponentialFactor);
  ImGui::InputFloat("ShopSellWorthMin", &uHeroEquipment->ShopSellWorthMin);
  ImGui::InputFloat("ShopSellWorthMax", &uHeroEquipment->ShopSellWorthMax);
  ImGui::InputFloat("ShopSellRatingExponent", &uHeroEquipment->ShopSellRatingExponent);
  ImGui::InputFloat("ShopSellWorthEquipmentRatingBase", &uHeroEquipment->ShopSellWorthEquipmentRatingBase);
  ImGui::InputFloat("ShopSellWorthWeaponMultiplier", &uHeroEquipment->ShopSellWorthWeaponMultiplier);
  ImGui::InputFloat("ShopSellWorthWeaponExponentialFactorMult", &uHeroEquipment->ShopSellWorthWeaponExponentialFactorMult);
  ImGui::InputFloat("AltDamageRandomizerMult", &uHeroEquipment->AltDamageRandomizerMult);
  ImGui::InputFloat("MaxShopSellWorth", &uHeroEquipment->MaxShopSellWorth);
  ImGui::InputFloat("ShopSellWorthMinWeaponMultiplier", &uHeroEquipment->ShopSellWorthMinWeaponMultiplier);
  ImGui::InputFloat("ShopSellWorthMaxWeaponMultiplier", &uHeroEquipment->ShopSellWorthMaxWeaponMultiplier);
  ImGui::InputFloat("ShopSellWorthRatingWeaponMultiplier", &uHeroEquipment->ShopSellWorthRatingWeaponMultiplier);
  ImGui::InputFloat("ManaCostPerLevelMaxQualityMultiplierAdditional", &uHeroEquipment->ManaCostPerLevelMaxQualityMultiplierAdditional);
  ImGui::InputFloat("HighLevelManaCostPerLevelMaxQualityMultiplierAdditional", &uHeroEquipment->HighLevelManaCostPerLevelMaxQualityMultiplierAdditional);
  ImGui::InputFloat("ManaCostPerLevelExponentialFactorAdditional", &uHeroEquipment->ManaCostPerLevelExponentialFactorAdditional);
  ImGui::InputFloat("HighLevelManaCostPerLevelExponentialFactorAdditional", &uHeroEquipment->HighLevelManaCostPerLevelExponentialFactorAdditional);
  ImGui::InputFloat("WeaponDrawScaleRandomizerExtraMultiplier", &uHeroEquipment->WeaponDrawScaleRandomizerExtraMultiplier); // TArray<int>// EquipLevelRequirements;
  ImGui::InputInt("ExtraQualityUpgradeDamageNumberDescriptor", &uHeroEquipment->ExtraQualityUpgradeDamageNumberDescriptor);
  ImGui::InputInt("SecondExtraQualityUpgradeDamageNumberDescriptor", &uHeroEquipment->SecondExtraQualityUpgradeDamageNumberDescriptor);
  ImGui::InputFloat("ElementalDamageIncreasePerLevelMultiplier", &uHeroEquipment->ElementalDamageIncreasePerLevelMultiplier);
  ImGui::InputFloat("DamageIncreasePerLevelMultiplier", &uHeroEquipment->DamageIncreasePerLevelMultiplier);
  ImGui::InputFloat("UltimateDamageIncreasePerLevelMultiplier", &uHeroEquipment->UltimateDamageIncreasePerLevelMultiplier);
  ImGui::InputFloat("ExtraQualityDamageIncreasePerLevelMultiplier", &uHeroEquipment->ExtraQualityDamageIncreasePerLevelMultiplier);
  ImGui::InputFloat("SecondExtraQualityDamageIncreasePerLevelMultiplier", &uHeroEquipment->SecondExtraQualityDamageIncreasePerLevelMultiplier);
  ImGui::InputFloat("MaxElementalDamageIncreasePerLevel", &uHeroEquipment->MaxElementalDamageIncreasePerLevel);
  ImGui::InputFloat("MaxDamageIncreasePerLevel", &uHeroEquipment->MaxDamageIncreasePerLevel);
  ImGui::InputFloat("UltimateMaxDamageIncreasePerLevel", &uHeroEquipment->UltimateMaxDamageIncreasePerLevel);
  ImGui::InputFloat("ExtraQualityMaxDamageIncreasePerLevel", &uHeroEquipment->ExtraQualityMaxDamageIncreasePerLevel);
  ImGui::InputFloat("SecondExtraQualityMaxDamageIncreasePerLevel", &uHeroEquipment->SecondExtraQualityMaxDamageIncreasePerLevel);
  ImGui::InputFloat("SelectionPreviewScaleMultiplier", &uHeroEquipment->SelectionPreviewScaleMultiplier);
  ImGui::InputFloat("AltDamageIncreasePerLevelMultiplier", &uHeroEquipment->AltDamageIncreasePerLevelMultiplier);
  ImGui::InputFloat("AltMaxDamageIncreasePerLevel", &uHeroEquipment->AltMaxDamageIncreasePerLevel);
  ImGui::InputFloat("PrimaryColorOverrideMultiplier", &uHeroEquipment->PrimaryColorOverrideMultiplier);
  ImGui::InputFloat("SecondaryColorOverrideMultiplier", &uHeroEquipment->SecondaryColorOverrideMultiplier);
  ImGui::InputFloat("GlobalSelectionPreviewScaleMultiplier", &uHeroEquipment->GlobalSelectionPreviewScaleMultiplier);
  ImGui::InputFloat("ShopSellWorthMaxExponentAbsolute", &uHeroEquipment->ShopSellWorthMaxExponentAbsolute);
  ImGui::InputFloat("EquipmentRatingPercentBase", &uHeroEquipment->EquipmentRatingPercentBase);
  ImGui::InputFloat("WeaponEquipmentRatingPercentBase", &uHeroEquipment->WeaponEquipmentRatingPercentBase);
  // TArray<float> QualityShopCostMultipliers; TArray<float>
  // QualityShopCostCaps;
  ImGui::InputInt("WeaponKnockbackMax", &uHeroEquipment->WeaponKnockbackMax);
  ImGui::InputInt("MaxNonTranscendentStatRollValue", &uHeroEquipment->MaxNonTranscendentStatRollValue);
  ImGui::InputInt("MinDamageBonus", &uHeroEquipment->MinDamageBonus);
  ImGui::InputInt("MinEquipmentLevels", &uHeroEquipment->MinEquipmentLevels);
  ImGui::InputInt("LevelRequirementOffset", &uHeroEquipment->LevelRequirementOffset);
  // struct FEG_StatRandomizer WeaponShotsPerSecondBonusRandomizer;
  ImGui::InputInt("WeaponNumberOfProjectilesQualityBaseline", &uHeroEquipment->WeaponNumberOfProjectilesQualityBaseline);
  ImGui::InputInt("DamageReductionUpgradeInterval", &uHeroEquipment->DamageReductionUpgradeInterval);
  // struct FEG_StatRandomizer WeaponNumberOfProjectilesBonusRandomizer; struct
  // FEG_StatRandomizer WeaponSpeedOfProjectilesBonusRandomizer; struct
  // FEG_StatRandomizer WeaponAdditionalDamageAmountRandomizer; struct
  // FEG_StatRandomizer WeaponDrawScaleMultiplierRandomizer; TArray<class//// ADunDefDroppedEquipment*>             DroppedEquipmentTemplates;//// TEnumAsByte<EWeaponType>                           weaponType;// unsigned// char                                      EquipmentSetID;// unsigned char
  // UnknownData00[0x2];// TArray<TEnumAsByte<EAccessoryType>>
  // AccessoryRequirements;
  ImGui::InputFloat("ManaCostPerLevelLinearFactor", &uHeroEquipment->ManaCostPerLevelLinearFactor);
  ImGui::InputFloat("IconColorMultPrimary", &uHeroEquipment->IconColorMultPrimary);
  ImGui::InputFloat("IconColorMultSecondary", &uHeroEquipment->IconColorMultSecondary);
  ImGui::InputFloat("ManaCostPerLevelExponentialFactor", &uHeroEquipment->ManaCostPerLevelExponentialFactor);
  ImGui::InputFloat("ManaCostPerLevelMinQualityMultiplier", &uHeroEquipment->ManaCostPerLevelMinQualityMultiplier);
  ImGui::InputFloat("ManaCostPerLevelMaxQualityMultiplier", &uHeroEquipment->ManaCostPerLevelMaxQualityMultiplier);
  ImGui::InputFloat("RespawnTimeMultiplier", &uHeroEquipment->RespawnTimeMultiplier);
  ImGui::InputFloat("TotalRandomizerMultiplier", &uHeroEquipment->TotalRandomizerMultiplier);
  // TArray<struct FEquipmentAttachmentInfo> EquipmentAttachmentInfos; struct//// FString                                     LevelString; struct FString
  // ForgedByDescription;
  ImGui::InputFloat("Ultimate93Chance", &uHeroEquipment->Ultimate93Chance);
  ImGui::InputFloat("UltimatePlusChance", &uHeroEquipment->UltimatePlusChance);
  ImGui::InputFloat("UltimatePlusPlusChance", &uHeroEquipment->UltimatePlusPlusChance);
  ImGui::InputFloat("RuthlessUltimate93Chance", &uHeroEquipment->RuthlessUltimate93Chance);
  ImGui::InputFloat("RuthlessUltimatePlusChance", &uHeroEquipment->RuthlessUltimatePlusChance);
  ImGui::InputFloat("RuthlessUltimatePlusPlusChance", &uHeroEquipment->RuthlessUltimatePlusPlusChance);
  ImGui::InputFloat("PrimaryColorSetIntensity", &uHeroEquipment->PrimaryColorSetIntensity);
  ImGui::InputFloat("PrimaryColorSetPow", &uHeroEquipment->PrimaryColorSetPow);
  ImGui::InputFloat("SecondaryColorSetIntensity", &uHeroEquipment->SecondaryColorSetIntensity);
  ImGui::InputFloat("SecondaryColorSetPow", &uHeroEquipment->SecondaryColorSetPow);
  ImGui::InputFloat("WeaponDrawScaleGlobalMultiplier", &uHeroEquipment->WeaponDrawScaleGlobalMultiplier);
  ImGui::InputFloat("IconScaleMultiplier", &uHeroEquipment->IconScaleMultiplier);
  ImGui::InputFloat("FullEquipmentSetStatMultiplier", &uHeroEquipment->FullEquipmentSetStatMultiplier);
  ImGui::InputFloat("MythicalFullEquipmentSetStatMultiplier", &uHeroEquipment->MythicalFullEquipmentSetStatMultiplier);
  ImGui::InputFloat("TranscendentFullEquipmentSetStatMultiplier", &uHeroEquipment->TranscendentFullEquipmentSetStatMultiplier);
  ImGui::InputFloat("SupremeFullEquipmentSetStatMultiplier", &uHeroEquipment->SupremeFullEquipmentSetStatMultiplier);
  ImGui::InputFloat("UltimateFullEquipmentSetStatMultiplier", &uHeroEquipment->UltimateFullEquipmentSetStatMultiplier);
  ImGui::InputFloat("WeaponDamageDisplayValueScale", &uHeroEquipment->WeaponDamageDisplayValueScale);
  ImGui::InputFloat("RatingPercentForLevelUpCostExponent", &uHeroEquipment->RatingPercentForLevelUpCostExponent);
  ImGui::InputFloat("WeaponDamageBonusRandomizerMultiplier", &uHeroEquipment->WeaponDamageBonusRandomizerMultiplier);
  ImGui::InputFloat("AdditionalWeaponDamageBonusRandomizerMultiplier", &uHeroEquipment->AdditionalWeaponDamageBonusRandomizerMultiplier);
  ImGui::InputFloat("SellWorthMultiplierLevelBase", &uHeroEquipment->SellWorthMultiplierLevelBase);
  ImGui::InputFloat("SellWorthMultiplierLevelMin", &uHeroEquipment->SellWorthMultiplierLevelMin);
  ImGui::InputFloat("SellWorthMultiplierLevelMax", &uHeroEquipment->SellWorthMultiplierLevelMax);
  // struct FLinearColor ExtraEquipmentColorMultiplier; struct FName
  // ExtraEquipmentColorMultiplierMaterialParamName;
  ImGui::InputFloat("PreviewMinOffsetScale", &uHeroEquipment->PreviewMinOffsetScale);
  ImGui::InputFloat("PreviewMinOffsetZ", &uHeroEquipment->PreviewMinOffsetZ);
  ImGui::InputFloat("PreviewMaxOffsetScale", &uHeroEquipment->PreviewMaxOffsetScale);
  ImGui::InputFloat("PreviewMaxOffsetZ", &uHeroEquipment->PreviewMaxOffsetZ); // class UMaterialInstanceConstant*// EquipmentIconMat;
  //--IMGUI_FSTRING(AdditionalDescription);
  //--IMGUI_FSTRING(DamageDescription);
  // TArray<struct FString> EquipmentStatNames;
  // TArray<struct FString> EquipmentStatDescriptions;
  // TArray<class USurface *> EquipmentStatIcons;
  // struct FLinearColor IconColorAddPrimary;
  // struct FLinearColor IconColorAddSecondary;
  //--IMGUI_FSTRING(BaseForgerName);
  ImGui::InputFloat("ComparisonSimilarRatingAllowance", &uHeroEquipment->ComparisonSimilarRatingAllowance);
  ImGui::InputFloat("ComparisonRatingExponent", &uHeroEquipment->ComparisonRatingExponent);
  ImGui::InputFloat("PlayerSpeedMultiplier", &uHeroEquipment->PlayerSpeedMultiplier);
  ImGui::InputFloat("PlayerGravityMultiplier", &uHeroEquipment->PlayerGravityMultiplier);
  //-struct FColor GivenEquipmentMessageColor;
  //--IMGUI_FSTRING(GivenEquipmentMessageString);
  //--IMGUI_FSTRING(RequiredLevelString);
  //--IMGUI_FSTRING(RequiredClassString);
  // class USoundCue *EquipSound;
  // struct FVector PreviewTranslationOffset;
  ImGui::InputFloat("ProtonChargeBlastDamageMultiplier", &uHeroEquipment->ProtonChargeBlastDamageMultiplier);
  ImGui::InputFloat("HealingPerBlock", &uHeroEquipment->HealingPerBlock);
  //--IMGUI_FSTRING(BackupUserForgerName);
  //--IMGUI_FSTRING(BackupUserEquipmentName);
  ImGui::InputFloat("MyNonUpgradeLevelRating", &uHeroEquipment->MyNonUpgradeLevelRating);
  ImGui::InputInt("PlayerShopSellAmount", &uHeroEquipment->PlayerShopSellAmount);
  //-struct FHighDigitInt PlayerShopSellAmountHDI;
  ImGui::InputFloat("DebugPreTranscendentEquipmentRating", &uHeroEquipment->DebugPreTranscendentEquipmentRating);
  ImGui::InputFloat("MinWeaponScale", &uHeroEquipment->MinWeaponScale);
  ImGui::InputFloat("WeaponDamageMultiplier", &uHeroEquipment->WeaponDamageMultiplier);
  ImGui::InputFloat("WeaponAltDamageMultiplier", &uHeroEquipment->WeaponAltDamageMultiplier);
  // class ACosmeticSetBonus *CosmeticSet;
  //  TArray<struct FLevelRange> MaxLevelRangeDifficultyArray;
  //  TArray<struct FEquipmentComparison> compareSets;
  //  class UDunDefHero *EquipmentHero;
  //  TArray<class UStatObject_Equipment *> DefaultEnchantments;
  //  TArray<class UStatObject_Equipment *> StatObjectArray;
  //--IMGUI_FSTRING(CustomEffectText);
  // clang-format on
}

void MenuItem::SetItem(Classes::UHeroEquipment *obj) {
  uHeroEquipment = obj;
  std::memcpy(itemName, uHeroEquipment->UserEquipmentName.ToString().c_str(),
              uHeroEquipment->UserEquipmentName.ToString().length());
}

void MenuItem::ChangeFString(Classes::FString &str, char *to) {
  if (!str.IsValid())
    return;

  std::wstring wideStr(to, to + std::strlen(to));

  str.Data = new wchar_t[wideStr.length() + 1];
  memset(str.Data, 0, wideStr.length() + 1);
  std::wmemcpy(str.Data, wideStr.c_str(), wideStr.length() + 1);

  str.Max = wideStr.length() + 1;
  str.Count = wideStr.length() + 1;
}
