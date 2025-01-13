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

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGameFailureID
struct UOnlineGameInterfaceSteamworks_CreateOnlineGameFailureID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
struct UOnlineGameInterfaceSteamworks_GetResolvedConnectString_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     ConnectInfo;                                              // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
struct UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                  // (Parm)
	int                                                NumberToQuery;                                            // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
struct UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
struct UOnlineGameInterfaceSteamworks_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      bWasInvited;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
struct UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	TArray<int>                                        participatingPlayerControllerIds;                         // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
struct UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (Const, Parm, OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
struct UOnlineGameInterfaceSteamworks_ClearGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
struct UOnlineGameInterfaceSteamworks_AddGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
struct UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (Parm)
	unsigned long                                      bShouldRefreshOnlineData;                                 // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQuerySubscribedDownloadsComplete
struct UOnlineSubsystemSteamworks_ClearQuerySubscribedDownloadsComplete_Params
{
	struct FScriptDelegate                             QueryDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQuerySubscribedDownloadsComplete
struct UOnlineSubsystemSteamworks_AddQuerySubscribedDownloadsComplete_Params
{
	struct FScriptDelegate                             QueryDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQuerySubscribedDownloadsComplete
struct UOnlineSubsystemSteamworks_OnQuerySubscribedDownloadsComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribedDownloadsInformation
struct UOnlineSubsystemSteamworks_SubscribedDownloadsInformation_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QuerySubscribedDownloads
struct UOnlineSubsystemSteamworks_QuerySubscribedDownloads_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts
struct UOnlineSubsystemSteamworks_GetAvailableDownloadCounts_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                NewDownloads;                                             // (Parm, OutParm)
	int                                                TotalDownloads;                                           // (Parm, OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete
struct UOnlineSubsystemSteamworks_ClearQueryAvailableDownloadsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             QueryDownloadsDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete
struct UOnlineSubsystemSteamworks_AddQueryAvailableDownloadsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             QueryDownloadsDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete
struct UOnlineSubsystemSteamworks_OnQueryAvailableDownloadsComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads
struct UOnlineSubsystemSteamworks_QueryAvailableDownloads_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                CategoryMask;                                             // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList
struct UOnlineSubsystemSteamworks_GetContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineContent>                      ContentList;                                              // (Parm, OutParm, NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList
struct UOnlineSubsystemSteamworks_ReadContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete
struct UOnlineSubsystemSteamworks_ClearReadContentComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadContentCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete
struct UOnlineSubsystemSteamworks_AddReadContentComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadContentCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
struct UOnlineSubsystemSteamworks_OnReadContentComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate
struct UOnlineSubsystemSteamworks_ClearContentChangeDelegate_Params
{
	struct FScriptDelegate                             ContentDelegate;                                          // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate
struct UOnlineSubsystemSteamworks_AddContentChangeDelegate_Params
{
	struct FScriptDelegate                             ContentDelegate;                                          // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
struct UOnlineSubsystemSteamworks_OnContentChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
struct UOnlineSubsystemSteamworks_Exit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VerifyStrings
struct UOnlineSubsystemSteamworks_VerifyStrings_Params
{
	TArray<struct FStringVerificationEntry>            stringEntries;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStringVerificationDelegate
struct UOnlineSubsystemSteamworks_ClearStringVerificationDelegate_Params
{
	struct FScriptDelegate                             stringVerificationComplete;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStringVerificationDelegate
struct UOnlineSubsystemSteamworks_AddStringVerificationDelegate_Params
{
	struct FScriptDelegate                             stringVerificationComplete;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStringVerificationComplete
struct UOnlineSubsystemSteamworks_OnStringVerificationComplete_Params
{
	unsigned long                                      bVerifiedSuccessfully;                                    // (Parm)
	int                                                StringID;                                                 // (Parm)
	unsigned char                                      StringType;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDLCStorageDeviceRemovedDelegate
struct UOnlineSubsystemSteamworks_ClearDLCStorageDeviceRemovedDelegate_Params
{
	struct FScriptDelegate                             DLCStorageDeviceRemovedDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDLCStorageDeviceRemovedDelegate
struct UOnlineSubsystemSteamworks_AddDLCStorageDeviceRemovedDelegate_Params
{
	struct FScriptDelegate                             DLCStorageDeviceRemovedDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDLCStorageDeviceRemoved
struct UOnlineSubsystemSteamworks_OnDLCStorageDeviceRemoved_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllFlushOnlineStatsCompleteDelegates
struct UOnlineSubsystemSteamworks_ClearAllFlushOnlineStatsCompleteDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceFoundDelegate
struct UOnlineSubsystemSteamworks_ClearDeviceFoundDelegate_Params
{
	struct FScriptDelegate                             deviceFoundDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceFoundDelegate
struct UOnlineSubsystemSteamworks_AddDeviceFoundDelegate_Params
{
	struct FScriptDelegate                             deviceFoundDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceFound
struct UOnlineSubsystemSteamworks_OnDeviceFound_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasBeenRegistered
struct UOnlineSubsystemSteamworks_HasBeenRegistered_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetCaptureVolume
struct UOnlineSubsystemSteamworks_SetCaptureVolume_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	float                                              NewVolume;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlaybackVolume
struct UOnlineSubsystemSteamworks_SetPlaybackVolume_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	float                                              NewVolume;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelLogin
struct UOnlineSubsystemSteamworks_CancelLogin_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ManageInvites
struct UOnlineSubsystemSteamworks_ManageInvites_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FindUniqueNetIdForPlayer
struct UOnlineSubsystemSteamworks_FindUniqueNetIdForPlayer_Params
{
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFindUniqueNetIdForPlayerDelegate
struct UOnlineSubsystemSteamworks_ClearFindUniqueNetIdForPlayerDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FindDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFindUniqueNetIdForPlayerDelegate
struct UOnlineSubsystemSteamworks_AddFindUniqueNetIdForPlayerDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FindDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFindUniqueNetIdForPlayerComplete
struct UOnlineSubsystemSteamworks_OnFindUniqueNetIdForPlayerComplete_Params
{
	unsigned long                                      Found;                                                    // (Parm)
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
	int                                                Id;                                                       // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddToPlayersMetList
struct UOnlineSubsystemSteamworks_AddToPlayersMetList_Params
{
	struct FUniqueNetId                                PlayerIdToAdd;                                            // (Parm)
	struct FString                                     PlayerName;                                               // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
struct UOnlineSubsystemSteamworks_CreateLeaderboard_Params
{
	struct FString                                     LeaderboardName;                                          // (Parm, NeedCtorLink)
	TEnumAsByte<ELeaderboardSortType>                  SortType;                                                 // (Parm)
	TEnumAsByte<ELeaderboardFormat>                    DisplayFormat;                                            // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
struct UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params
{
	int                                                TotalPlayers;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
struct UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
struct UOnlineSubsystemSteamworks_ReadOnlineAvatar_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Const, Parm)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineAvatarComplete_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Const, Parm)
	class UTexture2D*                                  Avatar;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
struct UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Description;                                              // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
struct UOnlineSubsystemSteamworks_GetAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FAchievementDetails>                 Achievements;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
struct UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params
{
	int                                                TitleId;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
struct UOnlineSubsystemSteamworks_ReadAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	unsigned long                                      bShouldReadText;                                          // (OptionalParm, Parm)
	unsigned long                                      bShouldReadImages;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
struct UOnlineSubsystemSteamworks_ShowPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
struct UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
struct UOnlineSubsystemSteamworks_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
struct UOnlineSubsystemSteamworks_OnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
struct UOnlineSubsystemSteamworks_UnlockGamerPicture_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                PictureId;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
struct UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
struct UOnlineSubsystemSteamworks_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                AchievementId;                                            // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
struct UOnlineSubsystemSteamworks_IsDeviceValid_Params
{
	int                                                DeviceID;                                                 // (Parm)
	int                                                SizeNeeded;                                               // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
struct UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     DeviceName;                                               // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
struct UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
struct UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                SizeNeeded;                                               // (Parm)
	unsigned long                                      bForceShowUI;                                             // (OptionalParm, Parm)
	unsigned long                                      bManageStorage;                                           // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                CategoryMask;                                             // (OptionalParm, Parm)
	int                                                OfferId;                                                  // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
struct UOnlineSubsystemSteamworks_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviteText;                                               // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
struct UOnlineSubsystemSteamworks_ShowAchievementsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
struct UOnlineSubsystemSteamworks_ShowMessagesUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
struct UOnlineSubsystemSteamworks_ShowGamerCardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     PlayerName;                                               // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
struct UOnlineSubsystemSteamworks_ShowFeedbackUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
struct UOnlineSubsystemSteamworks_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
struct UOnlineSubsystemSteamworks_UnmuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
struct UOnlineSubsystemSteamworks_MuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      bAllowFriends;                                            // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
struct UOnlineSubsystemSteamworks_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     ClientStatGuid;                                           // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
struct UOnlineSubsystemSteamworks_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
struct UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
struct UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                             // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
struct UOnlineSubsystemSteamworks_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
struct UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
struct UOnlineSubsystemSteamworks_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
struct UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
struct UOnlineSubsystemSteamworks_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
struct UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviterName;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
struct UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
struct UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
struct UOnlineSubsystemSteamworks_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
struct UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
struct UOnlineSubsystemSteamworks_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
struct UOnlineSubsystemSteamworks_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
struct UOnlineSubsystemSteamworks_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                FormerFriend;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
struct UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
struct UOnlineSubsystemSteamworks_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     FriendName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
struct UOnlineSubsystemSteamworks_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
struct UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                             // (Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
struct UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
struct UOnlineSubsystemSteamworks_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	unsigned long                                      bIsPassword;                                              // (OptionalParm, Parm)
	unsigned long                                      bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	unsigned long                                      bAllowSpaces;                                             // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
struct UOnlineSubsystemSteamworks_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                StatusId;                                                 // (Parm)
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                                  // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
struct UOnlineSubsystemSteamworks_GetLocalAccountNames_Params
{
	TArray<struct FString>                             Accounts;                                                 // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
struct UOnlineSubsystemSteamworks_DeleteLocalAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
struct UOnlineSubsystemSteamworks_RenameLocalAccount_Params
{
	struct FString                                     NewUserName;                                              // (Parm, NeedCtorLink)
	struct FString                                     OldUserName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
struct UOnlineSubsystemSteamworks_CreateLocalAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemSteamworks_ClearCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemSteamworks_AddCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
struct UOnlineSubsystemSteamworks_OnCreateOnlineAccountCompleted_Params
{
	TEnumAsByte<EOnlineAccountCreateStatus>            ErrorStatus;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
struct UOnlineSubsystemSteamworks_CreateOnlineAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	struct FString                                     EmailAddress;                                             // (Parm, NeedCtorLink)
	struct FString                                     ProductKey;                                               // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
struct UOnlineSubsystemSteamworks_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
struct UOnlineSubsystemSteamworks_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
struct UOnlineSubsystemSteamworks_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                               // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
struct UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
struct UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
struct UOnlineSubsystemSteamworks_GetNATType_Params
{
	TEnumAsByte<ENATType>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
struct UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
struct UOnlineSubsystemSteamworks_IsControllerConnected_Params
{
	int                                                ControllerId;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
struct UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
struct UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
struct UOnlineSubsystemSteamworks_OnControllerChange_Params
{
	int                                                ControllerId;                                             // (Parm)
	unsigned long                                      bIsConnected;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          NewPos;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
struct UOnlineSubsystemSteamworks_OnExternalUIChange_Params
{
	unsigned long                                      bIsOpening;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
struct UOnlineSubsystemSteamworks_OnLinkStatusChange_Params
{
	unsigned long                                      bIsConnected;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
struct UOnlineSubsystemSteamworks_HasLinkConnection_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerUniqueNetIdFromIndex
struct UOnlineSubsystemSteamworks_GetPlayerUniqueNetIdFromIndex_Params
{
	int                                                UserIndex;                                                // (Parm)
	struct FUniqueNetId                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
struct UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
struct UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	int                                                LeaderboardId;                                            // (Parm)
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                             // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
struct UOnlineSubsystemSteamworks_FlushOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
struct UOnlineSubsystemSteamworks_WriteOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                Player;                                                   // (Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                               // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
struct UOnlineSubsystemSteamworks_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                NumRows;                                                  // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                StartIndex;                                               // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
struct UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
struct UOnlineSubsystemSteamworks_ReadOnlineStats_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
struct UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class USpeechRecognition*                          SpeechRecogObj;                                           // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
struct UOnlineSubsystemSteamworks_SelectVocabulary_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                VocabularyId;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
struct UOnlineSubsystemSteamworks_OnRecognitionComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
struct UOnlineSubsystemSteamworks_GetRecognitionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSpeechRecognizedWord>               words;                                                    // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
struct UOnlineSubsystemSteamworks_StopSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
struct UOnlineSubsystemSteamworks_StartSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
struct UOnlineSubsystemSteamworks_StopNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
struct UOnlineSubsystemSteamworks_StartNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegates
struct UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerStoppedTalkingDelegate
struct UOnlineSubsystemSteamworks_ClearPlayerStoppedTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerStartedTalkingDelegate
struct UOnlineSubsystemSteamworks_ClearPlayerStartedTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerStoppedTalkingDelegate
struct UOnlineSubsystemSteamworks_AddPlayerStoppedTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerStartedTalkingDelegate
struct UOnlineSubsystemSteamworks_AddPlayerStartedTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerStopTalking
struct UOnlineSubsystemSteamworks_OnPlayerStopTalking_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerBeginTalking
struct UOnlineSubsystemSteamworks_OnPlayerBeginTalking_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
struct UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
struct UOnlineSubsystemSteamworks_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
struct UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                Priority;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
struct UOnlineSubsystemSteamworks_IsHeadsetPresent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
struct UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
struct UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
struct UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
struct UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
struct UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
struct UOnlineSubsystemSteamworks_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
struct UOnlineSubsystemSteamworks_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
struct UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
struct UOnlineSubsystemSteamworks_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
struct UOnlineSubsystemSteamworks_WritePlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
struct UOnlineSubsystemSteamworks_GetPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
struct UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
struct UOnlineSubsystemSteamworks_ReadPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
struct UOnlineSubsystemSteamworks_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
struct UOnlineSubsystemSteamworks_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
struct UOnlineSubsystemSteamworks_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
struct UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
struct UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
struct UOnlineSubsystemSteamworks_OnLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>                          NewStatus;                                                // (Parm)
	struct FUniqueNetId                                NewId;                                                    // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
struct UOnlineSubsystemSteamworks_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
struct UOnlineSubsystemSteamworks_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FFriendsQuery>                       Query;                                                    // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
struct UOnlineSubsystemSteamworks_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
struct UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
struct UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
struct UOnlineSubsystemSteamworks_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
struct UOnlineSubsystemSteamworks_CanDownloadUserContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
struct UOnlineSubsystemSteamworks_CanCommunicate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
struct UOnlineSubsystemSteamworks_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
struct UOnlineSubsystemSteamworks_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
struct UOnlineSubsystemSteamworks_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm, OutParm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
struct UOnlineSubsystemSteamworks_IsLocalLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
struct UOnlineSubsystemSteamworks_IsGuestLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
struct UOnlineSubsystemSteamworks_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<ELoginStatus>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
struct UOnlineSubsystemSteamworks_OnLogoutCompleted_Params
{
	unsigned long                                      bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
struct UOnlineSubsystemSteamworks_Logout_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
struct UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
struct UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
struct UOnlineSubsystemSteamworks_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
struct UOnlineSubsystemSteamworks_AutoLogin_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
struct UOnlineSubsystemSteamworks_Login_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     LoginName;                                                // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	unsigned long                                      bWantsLocalOnly;                                          // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
struct UOnlineSubsystemSteamworks_ShowLoginUI_Params
{
	unsigned long                                      bShowOnlineOnly;                                          // (OptionalParm, Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateDiscordRichPresence
struct UOnlineSubsystemSteamworks_UpdateDiscordRichPresence_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
struct UOnlineSubsystemSteamworks_OnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
struct UOnlineSubsystemSteamworks_OnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
struct UOnlineSubsystemSteamworks_OnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
struct UOnlineSubsystemSteamworks_OnLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
struct UOnlineSubsystemSteamworks_Init_Params
{
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
