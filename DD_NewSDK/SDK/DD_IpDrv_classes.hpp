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

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0048 - 0x003C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                               // 0x003C(0x0004)
	struct FName                                       BeaconName;                                               // 0x0040(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		return ptr;
	}

};


// Class IpDrv.HTTPDownload
// 0x00FC (0x0B6C - 0x0A70)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                          // 0x0A70(0x000C) (Config, NeedCtorLink)
	int                                                ProxyServerPort;                                          // 0x0A7C(0x0004) (Config)
	unsigned long                                      MaxRedirection : 1;                                       // 0x0A80(0x0004) (Config)
	float                                              ConnectionTimeout;                                        // 0x0A84(0x0004) (Config)
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0A88(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HTTPDownload");
		return ptr;
	}

};


// Class IpDrv.InternetLink
// 0x0018 (0x0234 - 0x021C)
class AInternetLink : public AInfo
{
public:
	TEnumAsByte<ELinkMode>                             LinkMode;                                                 // 0x021C(0x0001)
	TEnumAsByte<ELineMode>                             InLineMode;                                               // 0x021D(0x0001)
	TEnumAsByte<ELineMode>                             OutLineMode;                                              // 0x021E(0x0001)
	TEnumAsByte<EReceiveMode>                          ReceiveMode;                                              // 0x021F(0x0001)
	struct FPointer                                    Socket;                                                   // 0x0220(0x0004) (Const)
	int                                                Port;                                                     // 0x0224(0x0004) (Const)
	struct FPointer                                    RemoteSocket;                                             // 0x0228(0x0004) (Const)
	struct FPointer                                    PrivateResolveInfo;                                       // 0x022C(0x0004) (Const, Native)
	int                                                DataPending;                                              // 0x0230(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.InternetLink");
		return ptr;
	}


	void ResolveFailed();
	void Resolved(const struct FIpAddr& Addr);
	void GetLocalIP(struct FIpAddr* Arg);
	bool StringToIpAddr(const struct FString& Str, struct FIpAddr* Addr);
	struct FString IpAddrToString(const struct FIpAddr& Arg);
	int GetLastError();
	void Resolve(const struct FString& Domain);
	bool ParseURL(const struct FString& URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName);
	bool IsDataPending();
};


// Class IpDrv.TcpLink
// 0x0028 (0x025C - 0x0234)
class ATcpLink : public AInternetLink
{
public:
	TEnumAsByte<ELinkState>                            LinkState;                                                // 0x0234(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	struct FIpAddr                                     RemoteAddr;                                               // 0x0238(0x0008)
	class UClass*                                      AcceptClass;                                              // 0x0240(0x0004)
	TArray<unsigned char>                              SendFIFO;                                                 // 0x0244(0x000C) (Const, NeedCtorLink)
	struct FString                                     RecvBuf;                                                  // 0x0250(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpLink");
		return ptr;
	}


	void ReceivedBinary(int Count, unsigned char B);
	void ReceivedLine(const struct FString& Line);
	void ReceivedText(const struct FString& Text);
	void Closed();
	void Opened();
	void Accepted();
	int ReadBinary(int Count, unsigned char* B);
	int ReadText(struct FString* Str);
	int SendBinary(int Count, unsigned char B);
	int SendText(const struct FString& Str);
	bool IsConnected();
	bool Close();
	bool Open(const struct FIpAddr& Addr);
	bool Listen();
	int BindPort(int PortNum, bool bUseNextAvailable);
};


// Class IpDrv.MCPBase
// 0x0004 (0x0040 - 0x003C)
class UMCPBase : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MCPBase");
		return ptr;
	}

};


// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0028 (0x0068 - 0x0040)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                                       // 0x0040(0x000C) (Const, Config, NeedCtorLink)
	TArray<struct FPointer>                            HttpPostObjects;                                          // 0x004C(0x000C) (Const, Native)
	TArray<TEnumAsByte<EEventUploadType>>              DisabledUploadTypes;                                      // 0x0058(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bBinaryStats : 1;                                         // 0x0064(0x0004) (Const, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		return ptr;
	}


	bool UploadHardwareData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick);
	bool UploadGameplayEventsData(class UOnlineGameplayEvents* Events);
	bool UploadProfileData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings);
};


// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0028 (0x0068 - 0x0040)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                                // 0x0040(0x000C) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                                        // 0x004C(0x000C) (NeedCtorLink)
	unsigned long                                      bNeedsTicking : 1;                                        // 0x0058(0x0004) (Transient)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                          // 0x005C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		return ptr;
	}


	struct FString GetNews(unsigned char LocalUserNum, TEnumAsByte<EOnlineNewsType> NewsType);
	void ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate);
	void OnReadNewsCompleted(bool bWasSuccessful, TEnumAsByte<EOnlineNewsType> NewsType);
	bool ReadNews(unsigned char LocalUserNum, TEnumAsByte<EOnlineNewsType> NewsType);
};


// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x003C (0x007C - 0x0040)
class UOnlineTitleFileDownloadMcp : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x0040(0x000C) (NeedCtorLink)
	TArray<struct FTitleFile>                          TitleFiles;                                               // 0x004C(0x000C) (NeedCtorLink)
	struct FPointer                                    HttpDownloader;                                           // 0x0058(0x0004) (Const, Native)
	int                                                CurrentIndex;                                             // 0x005C(0x0004) (Transient)
	struct FString                                     BaseUrl;                                                  // 0x0060(0x000C) (Config, NeedCtorLink)
	float                                              TimeOut;                                                  // 0x006C(0x0004) (Config)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x0070(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		return ptr;
	}


	bool ClearDownloadedFiles();
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const struct FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
};


// Class IpDrv.MeshBeacon
// 0x003C (0x0078 - 0x003C)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	int                                                MeshBeaconPort;                                           // 0x0040(0x0004) (Config)
	struct FPointer                                    Socket;                                                   // 0x0044(0x0004) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                            // 0x0048(0x0004) (Transient)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0048(0x0004) (Transient)
	unsigned long                                      bShouldTick : 1;                                          // 0x0048(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x004C(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                     // 0x0050(0x0004)
	struct FName                                       BeaconName;                                               // 0x0054(0x0008)
	int                                                SocketSendBufferSize;                                     // 0x005C(0x0004) (Config)
	int                                                SocketReceiveBufferSize;                                  // 0x0060(0x0004) (Config)
	int                                                MaxBandwidthTestBufferSize;                               // 0x0064(0x0004) (Config)
	int                                                MinBandwidthTestBufferSize;                               // 0x0068(0x0004) (Config)
	float                                              MaxBandwidthTestSendTime;                                 // 0x006C(0x0004) (Config)
	float                                              MaxBandwidthTestReceiveTime;                              // 0x0070(0x0004) (Config)
	int                                                MaxBandwidthHistoryEntries;                               // 0x0074(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeacon");
		return ptr;
	}


	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconClient
// 0x00A4 (0x011C - 0x0078)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x0078(0x000C) (Const)
	struct FClientConnectionRequest                    ClientPendingRequest;                                     // 0x0084(0x0024) (Const, NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                                     // 0x00A8(0x0014)
	TEnumAsByte<EMeshBeaconClientState>                ClientBeaconState;                                        // 0x00BC(0x0001)
	TEnumAsByte<EMeshBeaconPacketType>                 ClientBeaconRequestType;                                  // 0x00BD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	float                                              ConnectionRequestTimeout;                                 // 0x00C0(0x0004) (Config)
	float                                              ConnectionRequestElapsedTime;                             // 0x00C4(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x00C8(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                            // 0x00D4(0x0004)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x00D8(0x0004)
	unsigned long                                      bUsingRegisteredAddr : 1;                                 // 0x00DC(0x0004) (Transient)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;                    // 0x00E0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;               // 0x00EC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;               // 0x00F8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x0104(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;            // 0x0110(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		return ptr;
	}


	bool SendHostNewGameSessionResponse(bool bSuccess, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnReceivedBandwidthTestRequest(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType);
	void OnConnectionRequestResult(TEnumAsByte<EMeshBeaconConnectionResult> ConnectionResult);
	bool BeginBandwidthTest(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, int TestBufferSize);
	bool RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest);
	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconHost
// 0x0064 (0x00DC - 0x0078)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                                        // 0x0078(0x000C) (Const, NeedCtorLink)
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                                 // 0x0084(0x000C) (NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                           // 0x0090(0x0008) (Const)
	unsigned long                                      bAllowBandwidthTesting : 1;                               // 0x0098(0x0004)
	int                                                ConnectionBacklog;                                        // 0x009C(0x0004) (Config)
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;            // 0x00A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;                       // 0x00AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;                      // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;                 // 0x00C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;       // 0x00D0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		return ptr;
	}


	void OnReceivedClientCreateNewSessionResult(bool bSucceeded, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	bool RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(TArray<struct FUniqueNetId>* Players);
	int GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId);
	void SetPendingPlayerConnections(TArray<struct FUniqueNetId>* Players);
	void OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection);
	void AllowBandwidthTesting(bool bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, int TestBufferSize);
	void DestroyBeacon();
	bool InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId);
};


// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0014 (0x00F0 - 0x00DC)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                              // 0x00DC(0x0004) (Const, Native, Transient)
	int                                                MaxLocalTalkers;                                          // 0x00E0(0x0004) (Config)
	int                                                MaxRemoteTalkers;                                         // 0x00E4(0x0004) (Config)
	unsigned long                                      bIsUsingSpeechRecognition : 1;                            // 0x00E8(0x0004) (Config)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                        // 0x00EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		return ptr;
	}


	bool IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	struct FUniqueNetId GetPlayerUniqueNetIdFromIndex(int UserIndex);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
};


// Class IpDrv.OnlineGameInterfaceImpl
// 0x0124 (0x0160 - 0x003C)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x003C(0x0004)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0040(0x0004) (Const)
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0044(0x0004) (Const)
	TEnumAsByte<EOnlineGameState>                      CurrentGameState;                                         // 0x0048(0x0001) (Const)
	TEnumAsByte<ELanBeaconState>                       LanBeaconState;                                           // 0x0049(0x0001) (Const)
	unsigned char                                      LanNonce[0x8];                                            // 0x004A(0x0001) (Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;                        // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;                        // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;                       // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;                          // 0x0078(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;                         // 0x0084(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                           // 0x0090(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;                         // 0x009C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;                   // 0x00A8(0x000C) (NeedCtorLink)
	int                                                LanAnnouncePort;                                          // 0x00B4(0x0004) (Const, Config)
	int                                                LanGameUniqueId;                                          // 0x00B8(0x0004) (Const, Config)
	int                                                LanPacketPlatformMask;                                    // 0x00BC(0x0004) (Const, Config)
	float                                              LanQueryTimeLeft;                                         // 0x00C0(0x0004)
	float                                              LanQueryTimeout;                                          // 0x00C4(0x0004) (Config)
	struct FPointer                                    LanBeacon;                                                // 0x00C8(0x0004) (Const, Native, Transient)
	struct FPointer                                    SessionInfo;                                              // 0x00CC(0x0004) (Const, Native, Transient)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;                    // 0x00D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;                   // 0x00DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;                   // 0x00E8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;                  // 0x00F4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;              // 0x0100(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;                     // 0x010C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0118(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x0124(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;                    // 0x0130(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;                      // 0x013C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;            // 0x0148(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x0154(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		return ptr;
	}


	void CancelPendingAsyncTasks();
	bool BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	bool RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName, TArray<int> participatingPlayerControllerIds);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const struct FName& SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RegisterForArbitration(const struct FName& SessionName);
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool EndOnlineGame(const struct FName& SessionName);
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool StartOnlineGame(const struct FName& SessionName);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, TArray<int> participatingPlayerControllerIds, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, int numParticipatingLocalPlayers);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool DestroyOnlineGame(const struct FName& SessionName, bool bShouldCleanupTasks);
	void ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	int CreateOnlineGameFailureID();
	bool CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings, TArray<int> participatingPlayerControllerIds);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(const struct FName& SessionName);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};


// Class IpDrv.PartyBeacon
// 0x0020 (0x005C - 0x003C)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	int                                                PartyBeaconPort;                                          // 0x0040(0x0004) (Config)
	struct FPointer                                    Socket;                                                   // 0x0044(0x0004) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                            // 0x0048(0x0004)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0048(0x0004)
	unsigned long                                      bShouldTick : 1;                                          // 0x0048(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x004C(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                     // 0x0050(0x0004)
	struct FName                                       BeaconName;                                               // 0x0054(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeacon");
		return ptr;
	}


	void DestroyBeacon();
};


// Class IpDrv.PartyBeaconClient
// 0x008C (0x00E8 - 0x005C)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x005C(0x000C) (Const)
	struct FPartyReservation                           PendingRequest;                                           // 0x0068(0x0018) (NeedCtorLink)
	TEnumAsByte<EPartyBeaconClientState>               ClientBeaconState;                                        // 0x0080(0x0001)
	TEnumAsByte<EPartyBeaconClientRequest>             ClientBeaconRequestType;                                  // 0x0081(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              ReservationRequestTimeout;                                // 0x0084(0x0004) (Config)
	float                                              ReservationRequestElapsedTime;                            // 0x0088(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x008C(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                            // 0x0098(0x0004)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x009C(0x0004)
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;                 // 0x00A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReservationUpdateRequestComplete__Delegate;           // 0x00AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;                    // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x00C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                                // 0x00D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                           // 0x00DC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		return ptr;
	}


	void DestroyBeacon();
	bool CancelReservation(const struct FUniqueNetId& CancellingPartyLeader);
	bool RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd);
	bool RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo);
	void OnReservationCountUpdated(int ReservationRemaining);
	void OnReservationUpdateRequestComplete(TEnumAsByte<EPartyReservationResult> ReservationResult);
	void OnReservationRequestComplete(TEnumAsByte<EPartyReservationResult> ReservationResult);
};


// Class IpDrv.PartyBeaconHost
// 0x0060 (0x00BC - 0x005C)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                                  // 0x005C(0x000C) (Const, NeedCtorLink)
	int                                                NumTeams;                                                 // 0x0068(0x0004) (Const)
	int                                                NumPlayersPerTeam;                                        // 0x006C(0x0004) (Const)
	int                                                NumReservations;                                          // 0x0070(0x0004) (Const)
	int                                                NumConsumedReservations;                                  // 0x0074(0x0004) (Const)
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0078(0x000C) (Const, NeedCtorLink)
	struct FName                                       OnlineSessionName;                                        // 0x0084(0x0008)
	int                                                ConnectionBacklog;                                        // 0x008C(0x0004) (Config)
	int                                                ReservedHostTeamNum;                                      // 0x0090(0x0004) (Const)
	unsigned long                                      bBestFitTeamAssignment : 1;                               // 0x0094(0x0004)
	struct FScriptDelegate                             __OnReservationChange__Delegate;                          // 0x0098(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                           // 0x00A4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;                 // 0x00B0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		return ptr;
	}


	int GetMaxAvailableTeamSize();
	void GetPartyLeaders(TArray<struct FUniqueNetId>* PartyLeaders);
	void GetPlayers(TArray<struct FUniqueNetId>* Players);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void UnregisterParty(const struct FUniqueNetId& PartyLeader);
	void UnregisterPartyMembers();
	void RegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo);
	void DestroyBeacon();
	void OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty);
	TEnumAsByte<EPartyReservationResult> UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers);
	TEnumAsByte<EPartyReservationResult> AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int TeamNum, bool bIsHost, TArray<struct FPlayerReservation>* PlayerMembers);
	bool InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, const struct FName& InSessionName);
};


// Class IpDrv.TcpipConnection
// 0x0024 (0x4FFC - 0x4FD8)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x4FD8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpipConnection");
		return ptr;
	}

};


// Class IpDrv.TcpNetDriver
// 0x0024 (0x0194 - 0x0170)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                               // 0x0170(0x0004) (Config)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0170(0x0001)
	unsigned long                                      LogPortUnreach : 1;                                       // 0x0174(0x0004) (Config)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0178(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpNetDriver");
		return ptr;
	}

};


// Class IpDrv.WebRequest
// 0x00BC (0x00F8 - 0x003C)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                               // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     URI;                                                      // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     Password;                                                 // 0x0060(0x000C) (NeedCtorLink)
	int                                                ContentLength;                                            // 0x006C(0x0004)
	struct FString                                     ContentType;                                              // 0x0070(0x000C) (NeedCtorLink)
	TEnumAsByte<ERequestType>                          RequestType;                                              // 0x007C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FMap_Mirror                                 HeaderMap;                                                // 0x0080(0x003C) (Const, Native)
	struct FMap_Mirror                                 VariableMap;                                              // 0x00BC(0x003C) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebRequest");
		return ptr;
	}


	int GetHexDigit(const struct FString& D);
	void DecodeFormData(const struct FString& Data);
	void ProcessHeaderString(const struct FString& S);
	void Dump();
	void GetVariables(TArray<struct FString>* varNames);
	struct FString GetVariableNumber(const struct FString& VariableName, int Number, const struct FString& DefaultValue);
	int GetVariableCount(const struct FString& VariableName);
	struct FString GetVariable(const struct FString& VariableName, const struct FString& DefaultValue);
	void AddVariable(const struct FString& VariableName, const struct FString& Value);
	void GetHeaders(TArray<struct FString>* headers);
	struct FString GetHeader(const struct FString& HeaderName, const struct FString& DefaultValue);
	void AddHeader(const struct FString& HeaderName, const struct FString& Value);
	struct FString EncodeBase64(const struct FString& Decoded);
	struct FString DecodeBase64(const struct FString& Encoded);
};


// Class IpDrv.WebResponse
// 0x0068 (0x00A4 - 0x003C)
class UWebResponse : public UObject
{
public:
	TArray<struct FString>                             headers;                                                  // 0x003C(0x000C) (NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                           // 0x0048(0x003C) (Const, Native)
	struct FString                                     IncludePath;                                              // 0x0084(0x000C) (Const, Config, NeedCtorLink)
	struct FString                                     CharSet;                                                  // 0x0090(0x000C) (Localized, NeedCtorLink)
	class AWebConnection*                              Connection;                                               // 0x009C(0x0004)
	unsigned long                                      bSentText : 1;                                            // 0x00A0(0x0004)
	unsigned long                                      bSentResponse : 1;                                        // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebResponse");
		return ptr;
	}


	bool SentResponse();
	bool SentText();
	void Redirect(const struct FString& URL);
	void SendStandardHeaders(const struct FString& ContentType, bool bCache);
	void HTTPError(int ErrorNum, const struct FString& Data);
	void SendHeaders();
	void AddHeader(const struct FString& Header, bool bReplace);
	void HTTPHeader(const struct FString& Header);
	void HTTPResponse(const struct FString& Header);
	void FailAuthentication(const struct FString& Realm);
	bool SendCachedFile(const struct FString& Filename, const struct FString& ContentType);
	void SendBinary(int Count, unsigned char B);
	void SendText(const struct FString& Text, bool bNoCRLF);
	void Dump();
	struct FString GetHTTPExpiration(int OffsetSeconds);
	struct FString LoadParsedUHTM(const struct FString& Filename);
	bool IncludeBinaryFile(const struct FString& Filename);
	bool IncludeUHTM(const struct FString& Filename);
	void ClearSubst();
	void Subst(const struct FString& Variable, const struct FString& Value, bool bClear);
	bool FileExists(const struct FString& Filename);
};


// Class IpDrv.WebApplication
// 0x0014 (0x0050 - 0x003C)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                                // 0x003C(0x0004)
	class AWebServer*                                  WebServer;                                                // 0x0040(0x0004)
	struct FString                                     Path;                                                     // 0x0044(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebApplication");
		return ptr;
	}


	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};


// Class IpDrv.WebServer
// 0x014C (0x03A8 - 0x025C)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                               // 0x025C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Applications[0xA];                                        // 0x0268(0x000C) (Config, NeedCtorLink)
	struct FString                                     ApplicationPaths[0xA];                                    // 0x02E0(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                             // 0x0358(0x0004) (Config)
	int                                                ListenPort;                                               // 0x035C(0x0004) (Config)
	int                                                MaxConnections;                                           // 0x0360(0x0004) (Config)
	int                                                DefaultApplication;                                       // 0x0364(0x0004) (Config)
	int                                                ExpirationSeconds;                                        // 0x0368(0x0004) (Config)
	struct FString                                     ServerURL;                                                // 0x036C(0x000C) (NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[0xA];                                  // 0x0378(0x0004)
	int                                                ConnectionCount;                                          // 0x03A0(0x0004)
	int                                                ConnId;                                                   // 0x03A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebServer");
		return ptr;
	}


	class UWebApplication* GetApplication(const struct FString& URI, struct FString* SubURI);
	void LostChild(class AActor* C);
	void GainedChild(class AActor* C);
	void Destroyed();
	void PostBeginPlay();
};


// Class IpDrv.HelloWeb
// 0x0000 (0x0050 - 0x0050)
class UHelloWeb : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HelloWeb");
		return ptr;
	}


	void Query(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};


// Class IpDrv.ImageServer
// 0x0000 (0x0050 - 0x0050)
class UImageServer : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ImageServer");
		return ptr;
	}


	void Query(class UWebRequest* Request, class UWebResponse* Response);
};


// Class IpDrv.IniLocPatcherMcp
// 0x000C (0x0068 - 0x005C)
class UIniLocPatcherMcp : public UIniLocPatcher
{
public:
	struct FName                                       McpDownloaderName;                                        // 0x005C(0x0008) (Config)
	class UOnlineTitleFileDownloadMcp*                 Downloader;                                               // 0x0064(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.IniLocPatcherMcp");
		return ptr;
	}


	void ClearCachedFiles();
	void ClearReadFileDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadFileDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void OnReadFileComplete(bool bWasSuccessful, const struct FString& Filename);
	void DownloadFiles();
	void Init();
};


// Class IpDrv.WebConnection
// 0x0030 (0x028C - 0x025C)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                                // 0x025C(0x0004)
	struct FString                                     ReceivedData;                                             // 0x0260(0x000C) (NeedCtorLink)
	class UWebRequest*                                 Request;                                                  // 0x026C(0x0004)
	class UWebResponse*                                Response;                                                 // 0x0270(0x0004)
	class UWebApplication*                             Application;                                              // 0x0274(0x0004)
	unsigned long                                      bDelayCleanup : 1;                                        // 0x0278(0x0004)
	int                                                RawBytesExpecting;                                        // 0x027C(0x0004)
	int                                                MaxValueLength;                                           // 0x0280(0x0004) (Config)
	int                                                MaxLineLength;                                            // 0x0284(0x0004) (Config)
	int                                                ConnId;                                                   // 0x0288(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebConnection");
		return ptr;
	}


	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(const struct FString& S);
	void ProcessGet(const struct FString& S);
	void ProcessHead(const struct FString& S);
	void ReceivedLine(const struct FString& S);
	void ReceivedText(const struct FString& Text);
	void Timer();
	void Closed();
	void Accepted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
