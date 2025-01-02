#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_DunDefGameStorageUpdates_MAX_BUFF_TIERS            6
#define CONST_DunDefGameStorageUpdates_MAX_LEVELUP_STATS         11
#define CONST_DunDefGameStorageUpdates_MAX_BUFF_SLOTS            3
#define CONST_DunDefGameStorageUpdates_MAX_TUTORIAL_SETS         10
#define CONST_DunDefGameStorageUpdates_MAX_ACHIEVEMENTS_TO_STORE 500
#define CONST_DunDefGameStorageUpdates_MAX_CORES                 40
#define CONST_DunDefGameStorageUpdates_MAX_DAMAGEREDUCTIONS      4

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DunDefMiscNoMedia.DunDefGameStorageUpdates.OptionsInfo_FIXED_36
// 0x00F0
struct FOptionsInfo_FIXED_36
{
	struct FOptionsFixedStruct_42                      fixedSizeOptions;                                         // 0x0000(0x008C) (NeedCtorLink)
	struct FString                                     Resolution;                                               // 0x008C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     lastLevelTag;                                             // 0x0098(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x00A4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00B0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FSearchFilterSettings_36                    searchFilters;                                            // 0x00BC(0x0028) (NeedCtorLink)
	TArray<int>                                        installedDLCEquipments;                                   // 0x00E4(0x000C) (NeedCtorLink)
};

// ScriptStruct DunDefMiscNoMedia.DunDefGameStorageUpdates.GameStorage_FIXED_35
// 0x01EC
struct FGameStorage_FIXED_35
{
	struct FOptionsInfo_FIXED_36                       GameOptions;                                              // 0x0000(0x00F0) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_37>                Heroes;                                                   // 0x00F0(0x000C) (NeedCtorLink)
	struct FAchievementInfo_38                         Achievements;                                             // 0x00FC(0x003C)
	struct FCoreUnlockInfo                             Core_Info;                                                // 0x0138(0x0028)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0160(0x0034)
	TArray<struct FLevelProgressInfo_38>               Beaten_Levels;                                            // 0x0194(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo_38>               Unlocked_Levels;                                          // 0x01A0(0x000C) (NeedCtorLink)
	struct FItemBoxInfo                                Item_Box;                                                 // 0x01AC(0x0010)
	TArray<struct FEquipmentSaveInfo_37>               Equipment;                                                // 0x01BC(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Hero_Equipment;                                           // 0x01C8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Lobby_Equipment;                                          // 0x01D4(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_37>                 Shop_Sets;                                                // 0x01E0(0x000C) (NeedCtorLink)
};

// ScriptStruct DunDefMiscNoMedia.DunDefGameStorageUpdates.GameStorage_FIXED_36
// 0x01F8
struct FGameStorage_FIXED_36
{
	struct FOptionsInfo_FIXED_36                       GameOptions;                                              // 0x0000(0x00F0) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_37>                Heroes;                                                   // 0x00F0(0x000C) (NeedCtorLink)
	struct FAchievementInfo_38                         Achievements;                                             // 0x00FC(0x003C)
	struct FCoreUnlockInfo                             Core_Info;                                                // 0x0138(0x0028)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0160(0x0034)
	TArray<struct FLevelProgressInfo_38>               Beaten_Levels;                                            // 0x0194(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo_38>               Unlocked_Levels;                                          // 0x01A0(0x000C) (NeedCtorLink)
	struct FItemBoxInfo                                Item_Box;                                                 // 0x01AC(0x0010)
	TArray<struct FEquipmentSaveInfo_37>               Equipment;                                                // 0x01BC(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Hero_Equipment;                                           // 0x01C8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Lobby_Equipment;                                          // 0x01D4(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_37>                 Shop_Sets;                                                // 0x01E0(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_37>         Player_Shop_Entries;                                      // 0x01EC(0x000C) (NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
