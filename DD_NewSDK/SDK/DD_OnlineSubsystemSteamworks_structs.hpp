#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamCreateGameFailure
enum class ESteamCreateGameFailure : uint8_t
{
	SCGF_None                      = 0,
	SCGF_FailedToCreateLobby       = 1,
	SCGF_FailedToCreateGameServer  = 2,
	SCGF_FailedToAuthenticateGameServer = 3,
	SCGF_MAX                       = 4
};


// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
enum class ESteamMatchmakingType : uint8_t
{
	SMT_Invalid                    = 0,
	SMT_LAN                        = 1,
	SMT_Internet                   = 2,
	SMT_MAX                        = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
enum class ELeaderboardSortType : uint8_t
{
	LST_Ascending                  = 0,
	LST_Descending                 = 1,
	LST_MAX                        = 2
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
enum class ELeaderboardRequestType : uint8_t
{
	LRT_Global                     = 0,
	LRT_Player                     = 1,
	LRT_Friends                    = 2,
	LRT_MAX                        = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
enum class ELeaderboardFormat : uint8_t
{
	LF_Number                      = 0,
	LF_Seconds                     = 1,
	LF_Milliseconds                = 2,
	LF_MAX                         = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
enum class ELeaderboardUpdateType : uint8_t
{
	LUT_KeepBest                   = 0,
	LUT_Force                      = 1,
	LUT_MAX                        = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0008
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                                    // 0x0000(0x0004)
	struct FPointer                                    Response;                                                 // 0x0004(0x0004) (Native)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0008
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                                    // 0x0000(0x0004)
	struct FPointer                                    Response;                                                 // 0x0004(0x0004) (Native)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001 (0x0005 - 0x0004)
struct FLocalTalkerSteam : public FLocalTalker
{
	TEnumAsByte<EMuteType>                             MuteType;                                                 // 0x0004(0x0001)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                                  // 0x0000(0x0004)
	TArray<struct FScriptDelegate>                     ReadDelegates;                                            // 0x0004(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteDelegates;                                           // 0x0010(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ProfileDataChangedDelegates;                              // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	struct FScriptDelegate                             DeviceSelectionMulticast;                                 // 0x0004(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeviceSelectionDelegates;                                 // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MappedAchievement
// 0x0010
struct FMappedAchievement
{
	struct FString                                     SteamAchievementID;                                       // 0x0000(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bIsActive : 1;                                            // 0x000C(0x0004) (Config)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x001C
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                                // 0x0000(0x0004) (Const)
	int                                                NumberOfAttempts;                                         // 0x0004(0x0004) (Const)
	struct FUniqueNetId                                PlayerNetId;                                              // 0x0008(0x0008) (Const)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // 0x0010(0x000C) (Const, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                            // 0x0000(0x0004)
	struct FName                                       AchievementName;                                          // 0x0004(0x0008)
	int                                                ViewId;                                                   // 0x000C(0x0004)
	int                                                ProgressCount;                                            // 0x0010(0x0004)
	int                                                MaxProgress;                                              // 0x0014(0x0004)
	unsigned long                                      bAutoUnlock : 1;                                          // 0x0018(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                            // 0x0000(0x0004)
	int                                                Progress;                                                 // 0x0004(0x0004)
	int                                                MaxProgress;                                              // 0x0008(0x0004)
	unsigned long                                      bUnlock : 1;                                              // 0x000C(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                                      // 0x0000(0x0008) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0024
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (NeedCtorLink)
	TEnumAsByte<ELeaderboardUpdateType>                UpdateType;                                               // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                LeaderboardSize;                                          // 0x0010(0x0004) (Const)
	TEnumAsByte<ELeaderboardSortType>                  SortType;                                                 // 0x0014(0x0001) (Const)
	TEnumAsByte<ELeaderboardFormat>                    DisplayFormat;                                            // 0x0015(0x0001) (Const)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FLeaderboardHandle                          LeaderboardRef;                                           // 0x0018(0x0008) (Const)
	unsigned long                                      bLeaderboardInitializing : 1;                             // 0x0020(0x0004) (Const)
	unsigned long                                      bLeaderboardInitiated : 1;                                // 0x0020(0x0004) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0018
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      RequestType;                                              // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                Start;                                                    // 0x0010(0x0004)
	int                                                End;                                                      // 0x0014(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x001C
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (NeedCtorLink)
	int                                                Score;                                                    // 0x000C(0x0004)
	TArray<int>                                        WriteData;                                                // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TalkerIDMap
// 0x000C
struct FTalkerIDMap
{
	struct FUniqueNetId                                TalkerId;                                                 // 0x0000(0x0008)
	class UAudioComponent*                             TalkerAudioComponent;                                     // 0x0008(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x001C
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                                // 0x0000(0x0008)
	int                                                Rank;                                                     // 0x0008(0x0004)
	int                                                Score;                                                    // 0x000C(0x0004)
	TArray<int>                                        ReadData;                                                 // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0010
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                                   // 0x0000(0x0004)
	struct FString                                     LeaderboardName;                                          // 0x0004(0x000C) (NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
