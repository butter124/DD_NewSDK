#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x008C (0x01EC - 0x0160)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray<struct FServerQueryToRulesResponseMapping>  QueryToRulesResponseMap;                                  // 0x0160(0x000C) (NeedCtorLink)
	TArray<struct FServerQueryToPingResponseMapping>   QueryToPingResponseMap;                                   // 0x016C(0x000C) (NeedCtorLink)
	TArray<int>                                        ServerIndexMap;                                           // 0x0178(0x000C) (NeedCtorLink)
	struct FPointer                                    ServerListResponse;                                       // 0x0184(0x0004) (Const, Native, Transient)
	TEnumAsByte<ESteamMatchmakingType>                 CurrentMatchmakingType;                                   // 0x0188(0x0001)
	TEnumAsByte<ESteamCreateGameFailure>               LastCreateGameFailure;                                    // 0x0189(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	struct FPointer                                    CurrentMatchmakingQuery;                                  // 0x018C(0x0004) (Const, Native, Transient)
	struct FPointer                                    CallbackBridge;                                           // 0x0190(0x0004) (Native)
	TArray<struct FScriptDelegate>                     GameInviteAcceptedDelegates;                              // 0x0194(0x000C) (NeedCtorLink)
	class UOnlineGameSearch*                           InviteGameSearch;                                         // 0x01A0(0x0004) (Const)
	struct FString                                     InviteLocationUrl;                                        // 0x01A4(0x000C) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                          // 0x01B0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                        // 0x01BC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x01C8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x01D4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x01E0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		return ptr;
	}


	int CreateOnlineGameFailureID();
	unsigned long GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo);
	unsigned long QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, unsigned long bWasSuccessful);
	unsigned long UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, unsigned long bWasSuccessful);
	unsigned long RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, unsigned long bWasInvited);
	unsigned long AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName, TArray<int> participatingPlayerControllerIds);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	unsigned long UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
};


// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x05D8 (0x06C8 - 0x00F0)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    CallbackBridge;                                           // 0x00F0(0x0004) (Native)
	unsigned long                                      bStoringAchievement : 1;                                  // 0x00F4(0x0004)
	unsigned long                                      bGSStatsStoresSuccess : 1;                                // 0x00F4(0x0004)
	unsigned long                                      bNeedsKeyboardTicking : 1;                                // 0x00F4(0x0004) (Const)
	unsigned long                                      bLastHasConnection : 1;                                   // 0x00F4(0x0004)
	unsigned long                                      bIsStatsSessionOk : 1;                                    // 0x00F4(0x0004)
	unsigned long                                      bHasSteamworksAccount : 1;                                // 0x00F4(0x0004) (Const, Config)
	unsigned long                                      bShouldUseMcp : 1;                                        // 0x00F4(0x0004) (Const, Config)
	unsigned long                                      bListenHostPendingAuth : 1;                               // 0x00F4(0x0004) (Const)
	unsigned long                                      bListenHostAuthenticated : 1;                             // 0x00F4(0x0004) (Const)
	unsigned long                                      bIncrementStatValues : 1;                                 // 0x00F4(0x0004)
	int                                                TotalGSStatsStoresPending;                                // 0x00F8(0x0004)
	TEnumAsByte<EOnlineEnumerationReadState>           UserStatsReceivedState;                                   // 0x00FC(0x0001)
	TEnumAsByte<ELoginStatus>                          LoggedInStatus;                                           // 0x00FD(0x0001) (Const)
	unsigned char                                      bWasKeyboardInputCanceled;                                // 0x00FE(0x0001) (Const)
	TEnumAsByte<ENetworkNotificationPosition>          CurrentNotificationPosition;                              // 0x00FF(0x0001) (Config)
	unsigned char                                      ListenAuthRetryCount;                                     // 0x0100(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                            // 0x0104(0x0004) (Const)
	struct FString                                     LocalProfileName;                                         // 0x0108(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     LoggedInPlayerName;                                       // 0x0114(0x000C) (Const, NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                                         // 0x0120(0x0008) (Const)
	int                                                LoggedInPlayerNum;                                        // 0x0128(0x0004) (Const)
	struct FString                                     ProfileDataDirectory;                                     // 0x012C(0x000C) (Config, NeedCtorLink)
	struct FString                                     ProfileDataExtension;                                     // 0x0138(0x000C) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                            // 0x0144(0x000C) (NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                            // 0x0150(0x0004)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;                          // 0x0154(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;                         // 0x0160(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;                         // 0x016C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                       // 0x0178(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                     // 0x0184(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                   // 0x0190(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                    // 0x019C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                                     // 0x01A8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                                     // 0x01B4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                                 // 0x01C0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AccountCreateDelegates;                                   // 0x01CC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                                         // 0x01D8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PlayerStartedTalkingDelegates;                            // 0x01E4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PlayerStoppedTalkingDelegates;                            // 0x01F0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;                         // 0x01FC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                                // 0x0208(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;                          // 0x0214(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ControllerChangeDelegates;                                // 0x0220(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                                      // 0x022C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x0238(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                                     // 0x0244(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                                 // 0x0250(0x000C) (NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                                       // 0x025C(0x0008)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                            // 0x0264(0x000C) (NeedCtorLink)
	int                                                GameID;                                                   // 0x0270(0x0004) (Const, Config)
	class UOnlineStatsRead*                            CurrentStatsRead;                                         // 0x0274(0x0004) (Const)
	TArray<struct FPendingPlayerStats>                 PendingStats;                                             // 0x0278(0x000C) (Const, NeedCtorLink)
	struct FString                                     KeyboardResultsString;                                    // 0x0284(0x000C) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputDelegates;                                   // 0x0290(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                            // 0x029C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                           // 0x02A8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;                         // 0x02B4(0x000C) (NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                             // 0x02C0(0x0028) (NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                                       // 0x02E8(0x0004)
	struct FString                                     CachedFriendMessage;                                      // 0x02EC(0x000C) (Const, NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                              // 0x02F8(0x001C) (NeedCtorLink)
	TArray<struct FString>                             LocationUrlsForInvites;                                   // 0x0314(0x000C) (Const, Config, NeedCtorLink)
	struct FString                                     LocationUrl;                                              // 0x0320(0x000C) (Const, Config, NeedCtorLink)
	TArray<struct FMappedAchievement>                  AchievementMapping;                                       // 0x032C(0x000C) (Const, Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                              // 0x0338(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                          // 0x0344(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;               // 0x0350(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterHostStatGuidCompleteDelegates;                    // 0x035C(0x000C) (NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                                     // 0x0368(0x000C) (NeedCtorLink)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                           // 0x0374(0x000C) (Const, Config, NeedCtorLink)
	struct FString                                     DefaultStatus;                                            // 0x0380(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     GameInviteMessage;                                        // 0x038C(0x000C) (Const, Localized, NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[0x4];                                    // 0x0398(0x0008)
	float                                              ConnectionPresenceTimeInterval;                           // 0x03B8(0x0004)
	float                                              ConnectionPresenceElapsedTime;                            // 0x03BC(0x0004)
	struct FString                                     EncryptedProductKey;                                      // 0x03C0(0x000C) (Const, Config, NeedCtorLink)
	int                                                NextAuthId;                                               // 0x03CC(0x0004) (Const, Transient)
	struct FString                                     ServerChallenge;                                          // 0x03D0(0x000C) (Const, NeedCtorLink)
	struct FString                                     ServerResponse;                                           // 0x03DC(0x000C) (Const, NeedCtorLink)
	int                                                ServerLocalId;                                            // 0x03E8(0x0004) (Const)
	TArray<struct FUniqueNetId>                        MuteList;                                                 // 0x03EC(0x000C) (Const, NeedCtorLink)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                                     // 0x03F8(0x000C) (Const, NeedCtorLink)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                                      // 0x0404(0x000C) (Config, NeedCtorLink)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                               // 0x0410(0x000C) (Const, NeedCtorLink)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                                          // 0x041C(0x000C) (NeedCtorLink)
	int                                                PendingLeaderboardInits;                                  // 0x0428(0x0004) (Const)
	int                                                PendingLeaderboardReads;                                  // 0x042C(0x0004) (Const)
	int                                                PendingLeaderboardWrites;                                 // 0x0430(0x0004) (Const)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                                 // 0x0434(0x000C) (Const, NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                                // 0x0440(0x000C) (Const, NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                                  // 0x044C(0x000C) (Const, NeedCtorLink)
	TArray<struct FTalkerIDMap>                        TalkerAudioComponentMap;                                  // 0x0458(0x000C) (Const, Transient, Component, NeedCtorLink)
	float                                              PlaybackVolume;                                           // 0x0464(0x0004) (Const)
	float                                              CaptureVolume;                                            // 0x0468(0x0004) (Const)
	TArray<struct FScriptDelegate>                     QuerySubscribedDelegates;                                 // 0x046C(0x000C) (NeedCtorLink)
	TArray<struct FLeaderboardEntry>                   ProcessedLeaderboardReads;                                // 0x0478(0x000C) (Const, NeedCtorLink)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                                  // 0x0484(0x000C) (Config, NeedCtorLink)
	float                                              ListenAuthTimestamp;                                      // 0x0490(0x0004) (Const)
	TArray<struct FUniqueNetId>                        StatsReadList;                                            // 0x0494(0x000C) (Const, NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                // 0x04A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                             // 0x04AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                               // 0x04B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                              // 0x04C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                // 0x04D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                            // 0x04DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                          // 0x04E8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x04F4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x0500(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                  // 0x050C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;          // 0x0518(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                 // 0x0524(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                        // 0x0530(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerBeginTalking__Delegate;                         // 0x053C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerStopTalking__Delegate;                          // 0x0548(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                        // 0x0554(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x0560(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x056C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                           // 0x0578(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                           // 0x0584(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                           // 0x0590(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                     // 0x059C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                        // 0x05A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x05B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;               // 0x05C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                      // 0x05CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                    // 0x05D8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                       // 0x05E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                         // 0x05F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                     // 0x05FC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                      // 0x0608(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;               // 0x0614(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;                    // 0x0620(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                  // 0x062C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                         // 0x0638(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                   // 0x0644(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;                   // 0x0650(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;          // 0x065C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFindUniqueNetIdForPlayerComplete__Delegate;           // 0x0668(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceFound__Delegate;                                // 0x0674(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDLCStorageDeviceRemoved__Delegate;                    // 0x0680(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStringVerificationComplete__Delegate;                 // 0x068C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnContentChange__Delegate;                              // 0x0698(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadContentComplete__Delegate;                        // 0x06A4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryAvailableDownloadsComplete__Delegate;            // 0x06B0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQuerySubscribedDownloadsComplete__Delegate;           // 0x06BC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		return ptr;
	}


	void ClearQuerySubscribedDownloadsComplete(const struct FScriptDelegate& QueryDelegate);
	void AddQuerySubscribedDownloadsComplete(const struct FScriptDelegate& QueryDelegate);
	void OnQuerySubscribedDownloadsComplete(unsigned long bWasSuccessful);
	struct FString SubscribedDownloadsInformation();
	unsigned long QuerySubscribedDownloads();
	void GetAvailableDownloadCounts(unsigned char LocalUserNum, int* NewDownloads, int* TotalDownloads);
	void ClearQueryAvailableDownloadsComplete(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate);
	void AddQueryAvailableDownloadsComplete(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate);
	void OnQueryAvailableDownloadsComplete(unsigned long bWasSuccessful);
	unsigned long QueryAvailableDownloads(unsigned char LocalUserNum, int CategoryMask);
	TEnumAsByte<EOnlineEnumerationReadState> GetContentList(unsigned char LocalUserNum, TArray<struct FOnlineContent>* ContentList);
	unsigned long ReadContentList(unsigned char LocalUserNum);
	void ClearReadContentComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadContentCompleteDelegate);
	void AddReadContentComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadContentCompleteDelegate);
	void OnReadContentComplete(unsigned long bWasSuccessful);
	void ClearContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, unsigned char LocalUserNum);
	void AddContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, unsigned char LocalUserNum);
	void OnContentChange();
	void Exit();
	void VerifyStrings(TArray<struct FStringVerificationEntry> stringEntries);
	void ClearStringVerificationDelegate(const struct FScriptDelegate& stringVerificationComplete);
	void AddStringVerificationDelegate(const struct FScriptDelegate& stringVerificationComplete);
	void OnStringVerificationComplete(unsigned long bVerifiedSuccessfully, int StringID, unsigned char StringType);
	void ClearDLCStorageDeviceRemovedDelegate(const struct FScriptDelegate& DLCStorageDeviceRemovedDelegate);
	void AddDLCStorageDeviceRemovedDelegate(const struct FScriptDelegate& DLCStorageDeviceRemovedDelegate);
	void OnDLCStorageDeviceRemoved();
	void ClearAllFlushOnlineStatsCompleteDelegates();
	void ClearDeviceFoundDelegate(const struct FScriptDelegate& deviceFoundDelegate);
	void AddDeviceFoundDelegate(const struct FScriptDelegate& deviceFoundDelegate);
	void OnDeviceFound();
	unsigned long HasBeenRegistered();
	unsigned long SetCaptureVolume(unsigned char LocalUserNum, float NewVolume);
	unsigned long SetPlaybackVolume(unsigned char LocalUserNum, float NewVolume);
	void CancelLogin();
	void ManageInvites();
	unsigned long FindUniqueNetIdForPlayer(const struct FString& PlayerName);
	void ClearFindUniqueNetIdForPlayerDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FindDelegate);
	void AddFindUniqueNetIdForPlayerDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FindDelegate);
	void OnFindUniqueNetIdForPlayerComplete(unsigned long Found, const struct FString& PlayerName, int Id);
	unsigned long AddToPlayersMetList(const struct FUniqueNetId& PlayerIdToAdd, const struct FString& PlayerName);
	unsigned long CreateLeaderboard(const struct FString& LeaderboardName, TEnumAsByte<ELeaderboardSortType> SortType, TEnumAsByte<ELeaderboardFormat> DisplayFormat);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int TotalPlayers);
	unsigned long GetNumberOfCurrentPlayers();
	void ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
	void OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar);
	unsigned long ShowCustomPlayersUI(unsigned char LocalUserNum, const struct FString& Title, const struct FString& Description, TArray<struct FUniqueNetId>* Players);
	TEnumAsByte<EOnlineEnumerationReadState> GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int TitleId);
	unsigned long ReadAchievements(unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages);
	unsigned long ShowPlayersUI(unsigned char LocalUserNum);
	unsigned long ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	unsigned long ShowFriendsUI(unsigned char LocalUserNum);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	unsigned long UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(unsigned long bWasSuccessful);
	unsigned long UnlockAchievement(unsigned char LocalUserNum, int AchievementId);
	unsigned long IsDeviceValid(int DeviceID, int SizeNeeded);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void OnDeviceSelectionComplete(unsigned long bWasSuccessful);
	unsigned long ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI, unsigned long bManageStorage);
	unsigned long ShowMembershipMarketplaceUI(unsigned char LocalUserNum);
	unsigned long ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId);
	unsigned long ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText);
	unsigned long ShowAchievementsUI(unsigned char LocalUserNum);
	unsigned long ShowMessagesUI(unsigned char LocalUserNum);
	unsigned long ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName);
	unsigned long ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	unsigned long DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	unsigned long UnmuteAll(unsigned char LocalUserNum);
	unsigned long MuteAll(unsigned char LocalUserNum, unsigned long bAllowFriends);
	unsigned long RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful);
	unsigned long RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(unsigned long bWasSuccessful);
	unsigned long JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	unsigned long SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	unsigned long SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text);
	unsigned long SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	unsigned long DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	unsigned long AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	unsigned long RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete(unsigned long bWasSuccessful);
	unsigned long AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	unsigned long AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(unsigned long bWasSuccessful);
	unsigned long ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, const struct FString& DefaultText, int MaxResultLength, unsigned long bAllowSpaces);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties);
	unsigned long GetLocalAccountNames(TArray<struct FString>* Accounts);
	unsigned long DeleteLocalAccount(const struct FString& UserName, const struct FString& Password);
	unsigned long RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password);
	unsigned long CreateLocalAccount(const struct FString& UserName, const struct FString& Password);
	void ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus);
	unsigned long CreateOnlineAccount(const struct FString& UserName, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey);
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	unsigned long GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	unsigned long ReadTitleFile(const struct FString& FileToRead);
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, const struct FString& Filename);
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	TEnumAsByte<ENATType> GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	unsigned long IsControllerConnected(int ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, unsigned long bIsConnected);
	void SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos);
	TEnumAsByte<ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void OnExternalUIChange(unsigned long bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(unsigned long bIsConnected);
	unsigned long HasLinkConnection();
	struct FUniqueNetId GetPlayerUniqueNetIdFromIndex(int UserIndex);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
	unsigned long WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(const struct FName& SessionName, unsigned long bWasSuccessful);
	unsigned long FlushOnlineStats(const struct FName& SessionName);
	unsigned long WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(unsigned long bWasSuccessful);
	unsigned long ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	unsigned long ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	unsigned long ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	unsigned long ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players);
	unsigned long SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	unsigned long SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void OnRecognitionComplete();
	unsigned long GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* words);
	unsigned long StopSpeechRecognition(unsigned char LocalUserNum);
	unsigned long StartSpeechRecognition(unsigned char LocalUserNum);
	void StopNetworkedVoice(unsigned char LocalUserNum);
	void StartNetworkedVoice(unsigned char LocalUserNum);
	void ClearPlayerTalkingDelegates();
	void ClearPlayerStoppedTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void ClearPlayerStartedTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerStoppedTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerStartedTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void OnPlayerStopTalking(const struct FUniqueNetId& Player);
	void OnPlayerBeginTalking(const struct FUniqueNetId& Player);
	unsigned long UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	unsigned long MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	unsigned long SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority);
	unsigned long IsHeadsetPresent(unsigned char LocalUserNum);
	unsigned long IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	unsigned long IsLocalPlayerTalking(unsigned char LocalUserNum);
	unsigned long UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	unsigned long RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	unsigned long UnregisterLocalTalker(unsigned char LocalUserNum);
	unsigned long RegisterLocalTalker(unsigned char LocalUserNum);
	TEnumAsByte<EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(unsigned long bWasSuccessful);
	unsigned long ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	unsigned long WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, unsigned long bWasSuccessful);
	unsigned long ReadPlayerStorageForNetId(const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	unsigned long ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	unsigned long WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	unsigned long ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	unsigned long IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	unsigned long AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	unsigned long IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	TEnumAsByte<EFeaturePrivilegeLevel> CanShowPresenceInformation(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanViewPlayerProfiles(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPurchaseContent(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanDownloadUserContent(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanCommunicate(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPlayOnline(unsigned char LocalUserNum);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	unsigned long GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	unsigned long IsLocalLogin(unsigned char LocalUserNum);
	unsigned long IsGuestLogin(unsigned char LocalUserNum);
	TEnumAsByte<ELoginStatus> GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted(unsigned long bWasSuccessful);
	unsigned long Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	unsigned long AutoLogin();
	unsigned long Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, unsigned long bWantsLocalOnly);
	unsigned long ShowLoginUI(unsigned long bShowOnlineOnly);
	void UpdateDiscordRichPresence();
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
	unsigned long Init();
};


// Class OnlineSubsystemSteamworks.SteamworksNetConnection
// 0x0030 (0x5008 - 0x4FD8)
class USteamworksNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x4FD8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamworksNetConnection");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.SteamWorksNetDriver
// 0x0008 (0x0178 - 0x0170)
class USteamWorksNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamWorksNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
