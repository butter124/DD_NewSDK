// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGameFailureID
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameInterfaceSteamworks::CreateOnlineGameFailureID()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGameFailureID");

	UOnlineGameInterfaceSteamworks_CreateOnlineGameFailureID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 ConnectInfo                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString");

	UOnlineGameInterfaceSteamworks_GetResolvedConnectString_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectInfo != nullptr)
		*ConnectInfo = params.ConnectInfo;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// (Native, Public)
// Parameters:
// int                            StartAt                        (Parm)
// int                            NumberToQuery                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData");

	UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params params;
	params.StartAt = StartAt;
	params.NumberToQuery = NumberToQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete");

	UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer");

	UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete");

	UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasInvited                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer");

	UOnlineGameInterfaceSteamworks_RegisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// TArray<int>                    participatingPlayerControllerIds (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName, TArray<int> participatingPlayerControllerIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite");

	UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;
	params.participatingPlayerControllerIds = participatingPlayerControllerIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// (Public, Delegate, HasOutParms)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (Const, Parm, OutParm)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted");

	UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate");

	UOnlineGameInterfaceSteamworks_ClearGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate");

	UOnlineGameInterfaceSteamworks_AddGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (Parm)
// bool                           bShouldRefreshOnlineData       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame");

	UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQuerySubscribedDownloadsComplete
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         QueryDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearQuerySubscribedDownloadsComplete(const struct FScriptDelegate& QueryDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQuerySubscribedDownloadsComplete");

	UOnlineSubsystemSteamworks_ClearQuerySubscribedDownloadsComplete_Params params;
	params.QueryDelegate = QueryDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQuerySubscribedDownloadsComplete
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         QueryDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddQuerySubscribedDownloadsComplete(const struct FScriptDelegate& QueryDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQuerySubscribedDownloadsComplete");

	UOnlineSubsystemSteamworks_AddQuerySubscribedDownloadsComplete_Params params;
	params.QueryDelegate = QueryDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQuerySubscribedDownloadsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnQuerySubscribedDownloadsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQuerySubscribedDownloadsComplete");

	UOnlineSubsystemSteamworks_OnQuerySubscribedDownloadsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribedDownloadsInformation
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::SubscribedDownloadsInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribedDownloadsInformation");

	UOnlineSubsystemSteamworks_SubscribedDownloadsInformation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QuerySubscribedDownloads
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::QuerySubscribedDownloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QuerySubscribedDownloads");

	UOnlineSubsystemSteamworks_QuerySubscribedDownloads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts
// (Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            NewDownloads                   (Parm, OutParm)
// int                            TotalDownloads                 (Parm, OutParm)

void UOnlineSubsystemSteamworks::GetAvailableDownloadCounts(unsigned char LocalUserNum, int* NewDownloads, int* TotalDownloads)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts");

	UOnlineSubsystemSteamworks_GetAvailableDownloadCounts_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDownloads != nullptr)
		*NewDownloads = params.NewDownloads;
	if (TotalDownloads != nullptr)
		*TotalDownloads = params.TotalDownloads;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         QueryDownloadsDelegate         (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearQueryAvailableDownloadsComplete(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete");

	UOnlineSubsystemSteamworks_ClearQueryAvailableDownloadsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.QueryDownloadsDelegate = QueryDownloadsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         QueryDownloadsDelegate         (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddQueryAvailableDownloadsComplete(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete");

	UOnlineSubsystemSteamworks_AddQueryAvailableDownloadsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.QueryDownloadsDelegate = QueryDownloadsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnQueryAvailableDownloadsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete");

	UOnlineSubsystemSteamworks_OnQueryAvailableDownloadsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads
// (HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            CategoryMask                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::QueryAvailableDownloads(unsigned char LocalUserNum, int CategoryMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads");

	UOnlineSubsystemSteamworks_QueryAvailableDownloads_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CategoryMask = CategoryMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList
// (Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineContent>  ContentList                    (Parm, OutParm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::GetContentList(unsigned char LocalUserNum, TArray<struct FOnlineContent>* ContentList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList");

	UOnlineSubsystemSteamworks_GetContentList_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentList != nullptr)
		*ContentList = params.ContentList;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadContentList(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList");

	UOnlineSubsystemSteamworks_ReadContentList_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadContentComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete");

	UOnlineSubsystemSteamworks_ClearReadContentComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadContentCompleteDelegate = ReadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadContentComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete");

	UOnlineSubsystemSteamworks_AddReadContentComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadContentCompleteDelegate = ReadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadContentComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete");

	UOnlineSubsystemSteamworks_OnReadContentComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate
// (HasOptionalParms, Public)
// Parameters:
// struct FScriptDelegate         ContentDelegate                (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (OptionalParm, Parm)

void UOnlineSubsystemSteamworks::ClearContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate");

	UOnlineSubsystemSteamworks_ClearContentChangeDelegate_Params params;
	params.ContentDelegate = ContentDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate
// (HasOptionalParms, Public)
// Parameters:
// struct FScriptDelegate         ContentDelegate                (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (OptionalParm, Parm)

void UOnlineSubsystemSteamworks::AddContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate");

	UOnlineSubsystemSteamworks_AddContentChangeDelegate_Params params;
	params.ContentDelegate = ContentDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnContentChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange");

	UOnlineSubsystemSteamworks_OnContentChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// (Native, Event, Public)

void UOnlineSubsystemSteamworks::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit");

	UOnlineSubsystemSteamworks_Exit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VerifyStrings
// (Public)
// Parameters:
// TArray<struct FStringVerificationEntry> stringEntries                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::VerifyStrings(TArray<struct FStringVerificationEntry> stringEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VerifyStrings");

	UOnlineSubsystemSteamworks_VerifyStrings_Params params;
	params.stringEntries = stringEntries;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStringVerificationDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         stringVerificationComplete     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStringVerificationDelegate(const struct FScriptDelegate& stringVerificationComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStringVerificationDelegate");

	UOnlineSubsystemSteamworks_ClearStringVerificationDelegate_Params params;
	params.stringVerificationComplete = stringVerificationComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStringVerificationDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         stringVerificationComplete     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStringVerificationDelegate(const struct FScriptDelegate& stringVerificationComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStringVerificationDelegate");

	UOnlineSubsystemSteamworks_AddStringVerificationDelegate_Params params;
	params.stringVerificationComplete = stringVerificationComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStringVerificationComplete
// (Public, Delegate)
// Parameters:
// bool                           bVerifiedSuccessfully          (Parm)
// int                            StringID                       (Parm)
// unsigned char                  StringType                     (Parm)

void UOnlineSubsystemSteamworks::OnStringVerificationComplete(bool bVerifiedSuccessfully, int StringID, unsigned char StringType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStringVerificationComplete");

	UOnlineSubsystemSteamworks_OnStringVerificationComplete_Params params;
	params.bVerifiedSuccessfully = bVerifiedSuccessfully;
	params.StringID = StringID;
	params.StringType = StringType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDLCStorageDeviceRemovedDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         DLCStorageDeviceRemovedDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDLCStorageDeviceRemovedDelegate(const struct FScriptDelegate& DLCStorageDeviceRemovedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDLCStorageDeviceRemovedDelegate");

	UOnlineSubsystemSteamworks_ClearDLCStorageDeviceRemovedDelegate_Params params;
	params.DLCStorageDeviceRemovedDelegate = DLCStorageDeviceRemovedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDLCStorageDeviceRemovedDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         DLCStorageDeviceRemovedDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDLCStorageDeviceRemovedDelegate(const struct FScriptDelegate& DLCStorageDeviceRemovedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDLCStorageDeviceRemovedDelegate");

	UOnlineSubsystemSteamworks_AddDLCStorageDeviceRemovedDelegate_Params params;
	params.DLCStorageDeviceRemovedDelegate = DLCStorageDeviceRemovedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDLCStorageDeviceRemoved
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnDLCStorageDeviceRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDLCStorageDeviceRemoved");

	UOnlineSubsystemSteamworks_OnDLCStorageDeviceRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllFlushOnlineStatsCompleteDelegates
// (Public)

void UOnlineSubsystemSteamworks::ClearAllFlushOnlineStatsCompleteDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllFlushOnlineStatsCompleteDelegates");

	UOnlineSubsystemSteamworks_ClearAllFlushOnlineStatsCompleteDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceFoundDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         deviceFoundDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceFoundDelegate(const struct FScriptDelegate& deviceFoundDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceFoundDelegate");

	UOnlineSubsystemSteamworks_ClearDeviceFoundDelegate_Params params;
	params.deviceFoundDelegate = deviceFoundDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceFoundDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         deviceFoundDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceFoundDelegate(const struct FScriptDelegate& deviceFoundDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceFoundDelegate");

	UOnlineSubsystemSteamworks_AddDeviceFoundDelegate_Params params;
	params.deviceFoundDelegate = deviceFoundDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceFound
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnDeviceFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceFound");

	UOnlineSubsystemSteamworks_OnDeviceFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasBeenRegistered
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::HasBeenRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasBeenRegistered");

	UOnlineSubsystemSteamworks_HasBeenRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetCaptureVolume
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// float                          NewVolume                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetCaptureVolume(unsigned char LocalUserNum, float NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetCaptureVolume");

	UOnlineSubsystemSteamworks_SetCaptureVolume_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlaybackVolume
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// float                          NewVolume                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetPlaybackVolume(unsigned char LocalUserNum, float NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlaybackVolume");

	UOnlineSubsystemSteamworks_SetPlaybackVolume_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelLogin
// (Public)

void UOnlineSubsystemSteamworks::CancelLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelLogin");

	UOnlineSubsystemSteamworks_CancelLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ManageInvites
// (Native, Public)

void UOnlineSubsystemSteamworks::ManageInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ManageInvites");

	UOnlineSubsystemSteamworks_ManageInvites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FindUniqueNetIdForPlayer
// (Public)
// Parameters:
// struct FString                 PlayerName                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::FindUniqueNetIdForPlayer(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FindUniqueNetIdForPlayer");

	UOnlineSubsystemSteamworks_FindUniqueNetIdForPlayer_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFindUniqueNetIdForPlayerDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FindDelegate                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFindUniqueNetIdForPlayerDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FindDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFindUniqueNetIdForPlayerDelegate");

	UOnlineSubsystemSteamworks_ClearFindUniqueNetIdForPlayerDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FindDelegate = FindDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFindUniqueNetIdForPlayerDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FindDelegate                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFindUniqueNetIdForPlayerDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FindDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFindUniqueNetIdForPlayerDelegate");

	UOnlineSubsystemSteamworks_AddFindUniqueNetIdForPlayerDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FindDelegate = FindDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFindUniqueNetIdForPlayerComplete
// (Public, Delegate)
// Parameters:
// bool                           Found                          (Parm)
// struct FString                 PlayerName                     (Parm, NeedCtorLink)
// int                            Id                             (Parm)

void UOnlineSubsystemSteamworks::OnFindUniqueNetIdForPlayerComplete(bool Found, const struct FString& PlayerName, int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFindUniqueNetIdForPlayerComplete");

	UOnlineSubsystemSteamworks_OnFindUniqueNetIdForPlayerComplete_Params params;
	params.Found = Found;
	params.PlayerName = PlayerName;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddToPlayersMetList
// (HasOptionalParms, Public)
// Parameters:
// struct FUniqueNetId            PlayerIdToAdd                  (Parm)
// struct FString                 PlayerName                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AddToPlayersMetList(const struct FUniqueNetId& PlayerIdToAdd, const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddToPlayersMetList");

	UOnlineSubsystemSteamworks_AddToPlayersMetList_Params params;
	params.PlayerIdToAdd = PlayerIdToAdd;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// (Native, Public)
// Parameters:
// struct FString                 LeaderboardName                (Parm, NeedCtorLink)
// TEnumAsByte<ELeaderboardSortType> SortType                       (Parm)
// TEnumAsByte<ELeaderboardFormat> DisplayFormat                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CreateLeaderboard(const struct FString& LeaderboardName, TEnumAsByte<ELeaderboardSortType> SortType, TEnumAsByte<ELeaderboardFormat> DisplayFormat)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard");

	UOnlineSubsystemSteamworks_CreateLeaderboard_Params params;
	params.LeaderboardName = LeaderboardName;
	params.SortType = SortType;
	params.DisplayFormat = DisplayFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate");

	UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// (Public, Delegate)
// Parameters:
// int                            TotalPlayers                   (Parm)

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int TotalPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete");

	UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params params;
	params.TotalPlayers = TotalPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers");

	UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Const, Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar");

	UOnlineSubsystemSteamworks_ReadOnlineAvatar_Params params;
	params.PlayerNetId = PlayerNetId;
	params.ReadOnlineAvatarCompleteDelegate = ReadOnlineAvatarCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Const, Parm)
// class UTexture2D*              Avatar                         (Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete");

	UOnlineSubsystemSteamworks_OnReadOnlineAvatarComplete_Params params;
	params.PlayerNetId = PlayerNetId;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// (Native, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Description                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(unsigned char LocalUserNum, const struct FString& Title, const struct FString& Description, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI");

	UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FAchievementDetails> Achievements                   (Parm, OutParm, NeedCtorLink)
// int                            TitleId                        (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements");

	UOnlineSubsystemSteamworks_GetAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// (Public, Delegate)
// Parameters:
// int                            TitleId                        (Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");

	UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params params;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)
// bool                           bShouldReadText                (OptionalParm, Parm)
// bool                           bShouldReadImages              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements");

	UOnlineSubsystemSteamworks_ReadAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bShouldReadText = bShouldReadText;
	params.bShouldReadImages = bShouldReadImages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI");

	UOnlineSubsystemSteamworks_ShowPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI");

	UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI");

	UOnlineSubsystemSteamworks_ShowFriendsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate");

	UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate");

	UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged");

	UOnlineSubsystemSteamworks_OnProfileDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            PictureId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture");

	UOnlineSubsystemSteamworks_UnlockGamerPicture_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PictureId = PictureId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate");

	UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete");

	UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AchievementId                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(unsigned char LocalUserNum, int AchievementId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement");

	UOnlineSubsystemSteamworks_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            DeviceID                       (Parm)
// int                            SizeNeeded                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int DeviceID, int SizeNeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid");

	UOnlineSubsystemSteamworks_IsDeviceValid_Params params;
	params.DeviceID = DeviceID;
	params.SizeNeeded = SizeNeeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// (Native, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 DeviceName                     (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults");

	UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceName != nullptr)
		*DeviceName = params.DeviceName;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate");

	UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate");

	UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete");

	UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            SizeNeeded                     (Parm)
// bool                           bForceShowUI                   (OptionalParm, Parm)
// bool                           bManageStorage                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bForceShowUI, bool bManageStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI");

	UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SizeNeeded = SizeNeeded;
	params.bForceShowUI = bForceShowUI;
	params.bManageStorage = bManageStorage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI");

	UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            CategoryMask                   (OptionalParm, Parm)
// int                            OfferId                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI");

	UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CategoryMask = CategoryMask;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviteText                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI");

	UOnlineSubsystemSteamworks_ShowInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteText = InviteText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI");

	UOnlineSubsystemSteamworks_ShowAchievementsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI");

	UOnlineSubsystemSteamworks_ShowMessagesUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 PlayerName                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI");

	UOnlineSubsystemSteamworks_ShowGamerCardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI");

	UOnlineSubsystemSteamworks_ShowFeedbackUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage");

	UOnlineSubsystemSteamworks_DeleteMessage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnmuteAll(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll");

	UOnlineSubsystemSteamworks_UnmuteAll_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bAllowFriends                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::MuteAll(unsigned char LocalUserNum, bool bAllowFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll");

	UOnlineSubsystemSteamworks_MuteAll_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAllowFriends = bAllowFriends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid");

	UOnlineSubsystemSteamworks_RegisterStatGuid_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid");

	UOnlineSubsystemSteamworks_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate");

	UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete");

	UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid");

	UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid");

	UOnlineSubsystemSteamworks_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate");

	UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate");

	UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            SendingPlayer                  (Parm)
// struct FString                 SendingNick                    (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived");

	UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages");

	UOnlineSubsystemSteamworks_GetFriendMessages_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate");

	UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete");

	UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame");

	UOnlineSubsystemSteamworks_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate");

	UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate");

	UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviterName                    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite");

	UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviterName = InviterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Friends                        (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends");

	UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friends = Friends;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend");

	UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend");

	UOnlineSubsystemSteamworks_SendMessageToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate");

	UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate");

	UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// struct FString                 RequestingNick                 (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived");

	UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite");

	UOnlineSubsystemSteamworks_DenyFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite");

	UOnlineSubsystemSteamworks_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            FormerFriend                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend");

	UOnlineSubsystemSteamworks_RemoveFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate");

	UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete");

	UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName");

	UOnlineSubsystemSteamworks_AddFriendByName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendName = FriendName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NewFriend                      (Parm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend");

	UOnlineSubsystemSteamworks_AddFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  bWasCanceled                   (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults");

	UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasCanceled != nullptr)
		*bWasCanceled = params.bWasCanceled;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate");

	UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate");

	UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");

	UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)
// bool                           bAllowSpaces                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength, bool bAllowSpaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI");

	UOnlineSubsystemSteamworks_ShowKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;
	params.bAllowSpaces = bAllowSpaces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// (Native, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            StatusId                       (Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (Const, Parm, OutParm, NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (Const, Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus");

	UOnlineSubsystemSteamworks_SetOnlineStatus_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusId = StatusId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalizedStringSettings != nullptr)
		*LocalizedStringSettings = params.LocalizedStringSettings;
	if (Properties != nullptr)
		*Properties = params.Properties;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// (Public, HasOutParms)
// Parameters:
// TArray<struct FString>         Accounts                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetLocalAccountNames(TArray<struct FString>* Accounts)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames");

	UOnlineSubsystemSteamworks_GetLocalAccountNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accounts != nullptr)
		*Accounts = params.Accounts;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// (HasOptionalParms, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DeleteLocalAccount(const struct FString& UserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount");

	UOnlineSubsystemSteamworks_DeleteLocalAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// (HasOptionalParms, Public)
// Parameters:
// struct FString                 NewUserName                    (Parm, NeedCtorLink)
// struct FString                 OldUserName                    (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount");

	UOnlineSubsystemSteamworks_RenameLocalAccount_Params params;
	params.NewUserName = NewUserName;
	params.OldUserName = OldUserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// (HasOptionalParms, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CreateLocalAccount(const struct FString& UserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount");

	UOnlineSubsystemSteamworks_CreateLocalAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AccountCreateDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate");

	UOnlineSubsystemSteamworks_ClearCreateOnlineAccountCompletedDelegate_Params params;
	params.AccountCreateDelegate = AccountCreateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AccountCreateDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate");

	UOnlineSubsystemSteamworks_AddCreateOnlineAccountCompletedDelegate_Params params;
	params.AccountCreateDelegate = AccountCreateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus                    (Parm)

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted(TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted");

	UOnlineSubsystemSteamworks_OnCreateOnlineAccountCompleted_Params params;
	params.ErrorStatus = ErrorStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// struct FString                 EmailAddress                   (Parm, NeedCtorLink)
// struct FString                 ProductKey                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CreateOnlineAccount(const struct FString& UserName, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount");

	UOnlineSubsystemSteamworks_CreateOnlineAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;
	params.EmailAddress = EmailAddress;
	params.ProductKey = ProductKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// (Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState");

	UOnlineSubsystemSteamworks_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents");

	UOnlineSubsystemSteamworks_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// (Native, Public)
// Parameters:
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadTitleFile(const struct FString& FileToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile");

	UOnlineSubsystemSteamworks_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete");

	UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate");

	UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate");

	UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange");

	UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// (Native, Public)
// Parameters:
// TEnumAsByte<ENATType>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENATType> UOnlineSubsystemSteamworks::GetNATType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType");

	UOnlineSubsystemSteamworks_GetNATType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange");

	UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected");

	UOnlineSubsystemSteamworks_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate");

	UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate");

	UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// (Public, Delegate)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int ControllerId, bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");

	UOnlineSubsystemSteamworks_OnControllerChange_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// (Native, Public)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> NewPos                         (Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition");

	UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// (Defined, Public)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkNotificationPosition> UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition");

	UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate");

	UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate");

	UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// (Public, Delegate)
// Parameters:
// bool                           bIsOpening                     (Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");

	UOnlineSubsystemSteamworks_OnExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// (Public, Delegate)
// Parameters:
// bool                           bIsConnected                   (Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");

	UOnlineSubsystemSteamworks_OnLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection");

	UOnlineSubsystemSteamworks_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerUniqueNetIdFromIndex
// (Defined, Event, Public, HasDefaults)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FUniqueNetId            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetId UOnlineSubsystemSteamworks::GetPlayerUniqueNetIdFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerUniqueNetIdFromIndex");

	UOnlineSubsystemSteamworks_GetPlayerUniqueNetIdFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// (Defined, Event, Public)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex");

	UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// int                            LeaderboardId                  (Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores");

	UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params params;
	params.SessionName = SessionName;
	params.LeaderboardId = LeaderboardId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete");

	UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::FlushOnlineStats(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats");

	UOnlineSubsystemSteamworks_FlushOnlineStats_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Player                         (Parm)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats");

	UOnlineSubsystemSteamworks_WriteOnlineStats_Params params;
	params.SessionName = SessionName;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// (Native, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats");

	UOnlineSubsystemSteamworks_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete");

	UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer");

	UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// (Native, HasOptionalParms, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank");

	UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params params;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends");

	UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats");

	UOnlineSubsystemSteamworks_ReadOnlineStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class USpeechRecognition*      SpeechRecogObj                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject");

	UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SpeechRecogObj = SpeechRecogObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            VocabularyId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary");

	UOnlineSubsystemSteamworks_SelectVocabulary_Params params;
	params.LocalUserNum = LocalUserNum;
	params.VocabularyId = VocabularyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate");

	UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete");

	UOnlineSubsystemSteamworks_OnRecognitionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// (Native, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSpeechRecognizedWord> words                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* words)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults");

	UOnlineSubsystemSteamworks_GetRecognitionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (words != nullptr)
		*words = params.words;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition");

	UOnlineSubsystemSteamworks_StopSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition");

	UOnlineSubsystemSteamworks_StartSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice");

	UOnlineSubsystemSteamworks_StopNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice");

	UOnlineSubsystemSteamworks_StartNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegates
// (Defined, Public)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegates");

	UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerStoppedTalkingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerStoppedTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerStoppedTalkingDelegate");

	UOnlineSubsystemSteamworks_ClearPlayerStoppedTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerStartedTalkingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerStartedTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerStartedTalkingDelegate");

	UOnlineSubsystemSteamworks_ClearPlayerStartedTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerStoppedTalkingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerStoppedTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerStoppedTalkingDelegate");

	UOnlineSubsystemSteamworks_AddPlayerStoppedTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerStartedTalkingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerStartedTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerStartedTalkingDelegate");

	UOnlineSubsystemSteamworks_AddPlayerStartedTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerStopTalking
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)

void UOnlineSubsystemSteamworks::OnPlayerStopTalking(const struct FUniqueNetId& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerStopTalking");

	UOnlineSubsystemSteamworks_OnPlayerStopTalking_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerBeginTalking
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)

void UOnlineSubsystemSteamworks::OnPlayerBeginTalking(const struct FUniqueNetId& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerBeginTalking");

	UOnlineSubsystemSteamworks_OnPlayerBeginTalking_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker");

	UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker");

	UOnlineSubsystemSteamworks_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            Priority                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority");

	UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent");

	UOnlineSubsystemSteamworks_IsHeadsetPresent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking");

	UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking");

	UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker");

	UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker");

	UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker");

	UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker");

	UOnlineSubsystemSteamworks_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList");

	UOnlineSubsystemSteamworks_GetFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");

	UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList");

	UOnlineSubsystemSteamworks_ReadFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");

	UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage");

	UOnlineSubsystemSteamworks_WritePlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage");

	UOnlineSubsystemSteamworks_GetPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete");

	UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params params;
	params.NetId = NetId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// (Native, Public)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId");

	UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params params;
	params.NetId = NetId;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");

	UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage");

	UOnlineSubsystemSteamworks_ReadPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete");

	UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings");

	UOnlineSubsystemSteamworks_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings");

	UOnlineSubsystemSteamworks_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete");

	UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings");

	UOnlineSubsystemSteamworks_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate");

	UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate");

	UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate");

	UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate");

	UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate");

	UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate");

	UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ELoginStatus>      NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");

	UOnlineSubsystemSteamworks_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate");

	UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted");

	UOnlineSubsystemSteamworks_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// (Native, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendsQuery>   Query                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends");

	UOnlineSubsystemSteamworks_AreAnyFriends_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend");

	UOnlineSubsystemSteamworks_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemSteamworks::CanShowPresenceInformation(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation");

	UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemSteamworks::CanViewPlayerProfiles(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles");

	UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemSteamworks::CanPurchaseContent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent");

	UOnlineSubsystemSteamworks_CanPurchaseContent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemSteamworks::CanDownloadUserContent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent");

	UOnlineSubsystemSteamworks_CanDownloadUserContent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemSteamworks::CanCommunicate(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate");

	UOnlineSubsystemSteamworks_CanCommunicate_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemSteamworks::CanPlayOnline(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline");

	UOnlineSubsystemSteamworks_CanPlayOnline_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname");

	UOnlineSubsystemSteamworks_GetPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");

	UOnlineSubsystemSteamworks_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsLocalLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin");

	UOnlineSubsystemSteamworks_IsLocalLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin");

	UOnlineSubsystemSteamworks_IsGuestLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<ELoginStatus>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoginStatus> UOnlineSubsystemSteamworks::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus");

	UOnlineSubsystemSteamworks_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate");

	UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate");

	UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted");

	UOnlineSubsystemSteamworks_OnLogoutCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Logout(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout");

	UOnlineSubsystemSteamworks_Logout_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginFailedDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate");

	UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginFailedDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate");

	UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode                      (Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed");

	UOnlineSubsystemSteamworks_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin");

	UOnlineSubsystemSteamworks_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 LoginName                      (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           bWantsLocalOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login");

	UOnlineSubsystemSteamworks_Login_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginName = LoginName;
	params.Password = Password;
	params.bWantsLocalOnly = bWantsLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bShowOnlineOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(bool bShowOnlineOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI");

	UOnlineSubsystemSteamworks_ShowLoginUI_Params params;
	params.bShowOnlineOnly = bShowOnlineOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateDiscordRichPresence
// (Native, Public)

void UOnlineSubsystemSteamworks::UpdateDiscordRichPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateDiscordRichPresence");

	UOnlineSubsystemSteamworks_UpdateDiscordRichPresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");

	UOnlineSubsystemSteamworks_OnFriendsChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");

	UOnlineSubsystemSteamworks_OnMutingChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled");

	UOnlineSubsystemSteamworks_OnLoginCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange");

	UOnlineSubsystemSteamworks_OnLoginChange_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// (Native, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init");

	UOnlineSubsystemSteamworks_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
