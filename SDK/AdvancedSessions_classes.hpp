#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AdvancedSessions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AdvancedSessions.AdvancedExternalUILibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.AdvancedExternalUILibrary"));
		return ptr;
	}


	static void ShowWebURLUI(const struct FString& URLToShow, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int OffsetX, int OffsetY, int SizeX, int SizeY, EBlueprintResultSwitch* Result, TArray<struct FString>* AllowedDomains);
	static void ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, EBlueprintResultSwitch* Result);
	static void ShowLeaderBoardUI(const struct FString& LeaderboardName, EBlueprintResultSwitch* Result);
	static void ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result);
	static void ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result);
	static void ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch* Result);
	static void CloseWebURLUI();
};


// Class AdvancedSessions.AdvancedFriendsGameInstance
// 0x0080 (0x0228 - 0x01A8)
class UAdvancedFriendsGameInstance : public UGameInstance
{
public:
	bool                                               bCallFriendInterfaceEventsOnPlayerControllers;            // 0x01A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCallIdentityInterfaceEventsOnPlayerControllers;          // 0x01A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCallVoiceInterfaceEventsOnPlayerControllers;             // 0x01AA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableTalkingStatusDelegate;                             // 0x01AB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x01AC(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.AdvancedFriendsGameInstance"));
		return ptr;
	}


	void OnSessionInviteReceived(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const struct FString& AppID, const struct FBlueprintSessionResult& SessionToJoin);
	void OnSessionInviteAccepted(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
	void OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnPlayerLoginStatusChanged(int PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID);
	void OnPlayerLoginChanged(int PlayerNum);
};


// Class AdvancedSessions.AdvancedFriendsInterface
// 0x0000 (0x0028 - 0x0028)
class UAdvancedFriendsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.AdvancedFriendsInterface"));
		return ptr;
	}


	void OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult);
	void OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult);
	void OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID);
	void OnPlayerLoginChanged(int PlayerNum);
};


// Class AdvancedSessions.AdvancedFriendsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.AdvancedFriendsLibrary"));
		return ptr;
	}


	static void SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, EBlueprintResultSwitch* Result);
	static void SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch* Result);
	static void IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend);
	static void GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList);
	static void GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList);
	static void GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend);
};


// Class AdvancedSessions.AdvancedGameSession
// 0x0050 (0x0288 - 0x0238)
class AAdvancedGameSession : public AGameSession
{
public:
	TMap<struct FUniqueNetIdRepl, struct FText>        BanList;                                                  // 0x0238(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.AdvancedGameSession"));
		return ptr;
	}

};


// Class AdvancedSessions.AdvancedIdentityLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.AdvancedIdentityLibrary"));
		return ptr;
	}


	static void SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, const struct FString& NewAttributeValue, EBlueprintResultSwitch* Result);
	static void GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId);
	static void GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* Username);
	static void GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* DisplayName);
	static void GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AuthAttribute, EBlueprintResultSwitch* Result);
	static void GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AttributeValue, EBlueprintResultSwitch* Result);
	static void GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, struct FString* AccessToken);
	static void GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, EBlueprintResultSwitch* Result);
	static void GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, struct FString* PlayerNickname);
	static void GetPlayerAuthToken(class APlayerController* PlayerController, struct FString* AuthToken, EBlueprintResultSwitch* Result);
	static void GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, EBPLoginStatus* LoginStatus, EBlueprintResultSwitch* Result);
	static void GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, EBlueprintResultSwitch* Result);
};


// Class AdvancedSessions.AdvancedSessionsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.AdvancedSessionsLibrary"));
		return ptr;
	}


	static void UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, struct FString* String);
	static void SetPlayerName(class APlayerController* PlayerController, const struct FString& PlayerName);
	static struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(const struct FName& Key, const struct FString& Value);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(const struct FName& Key, int Value);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(const struct FName& Key, float Value);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(const struct FName& Key, unsigned char Value);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(const struct FName& Key, bool Value);
	static bool KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, const struct FText& KickReason);
	static bool IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId);
	static bool IsValidSession(const struct FBlueprintSessionResult& SessionResult);
	static void IsPlayerInSession(class UObject* WorldContextObject, const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession);
	static bool HasOnlineSubsystem(const struct FName& SubSystemName);
	static void GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId);
	static void GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId);
	static void GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int* UniqueBuildId);
	static void GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState* SessionState);
	static void GetSessionSettings(class UObject* WorldContextObject, int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result);
	static void GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, struct FString* SettingValue);
	static struct FName GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty);
	static void GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, int* SettingValue);
	static void GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue);
	static void GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue);
	static void GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue);
	static void GetSessionID_AsString(const struct FBlueprintSessionResult& SessionResult, struct FString* SessionId);
	static void GetPlayerName(class APlayerController* PlayerController, struct FString* PlayerName);
	static void GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int* NumNetPlayers);
	static void GetNetPlayerIndex(class APlayerController* PlayerController, int* NetPlayerIndex);
	static void GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings);
	static void GetCurrentUniqueBuildID(int* UniqueBuildId);
	static void GetCurrentSessionID_AsString(class UObject* WorldContextObject, struct FString* SessionId);
	static void FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, EBlueprintResultSwitch* Result, int* OutIndex);
	static void FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty);
	static bool EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B);
	static bool BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, const struct FText& BanReason);
	static void AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray);
};


// Class AdvancedSessions.AdvancedVoiceLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.AdvancedVoiceLibrary"));
		return ptr;
	}


	static bool UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
	static void UnRegisterLocalTalker(unsigned char LocalPlayerNum);
	static void UnRegisterAllLocalTalkers();
	static bool UnMuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	static void StopNetworkedVoice(unsigned char LocalPlayerNum);
	static void StartNetworkedVoice(unsigned char LocalPlayerNum);
	static void RemoveAllRemoteTalkers();
	static bool RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
	static bool RegisterLocalTalker(unsigned char LocalPlayerNum);
	static void RegisterAllLocalTalkers();
	static bool MuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	static bool IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId);
	static bool IsPlayerMuted(unsigned char LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId);
	static bool IsLocalPlayerTalking(unsigned char LocalPlayerNum);
	static void IsHeadsetPresent(unsigned char LocalPlayerNum, bool* bHasHeadset);
	static void GetNumLocalTalkers(int* NumLocalTalkers);
};


// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.CancelFindSessionsCallbackProxy"));
		return ptr;
	}


	static class UCancelFindSessionsCallbackProxy* CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// 0x0088 (0x00B8 - 0x0030)
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.CreateSessionCallbackProxyAdvanced"));
		return ptr;
	}


	static class UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);
};


// Class AdvancedSessions.EndSessionCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.EndSessionCallbackProxy"));
		return ptr;
	}


	static class UEndSessionCallbackProxy* EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class AdvancedSessions.FindFriendSessionCallbackProxy
// 0x0068 (0x0098 - 0x0030)
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.FindFriendSessionCallbackProxy"));
		return ptr;
	}


	static class UFindFriendSessionCallbackProxy* FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId);
};


// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// 0x00A0 (0x00D0 - 0x0030)
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0050(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.FindSessionsCallbackProxyAdvanced"));
		return ptr;
	}


	static class UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int MinSlotsAvailable);
	static void FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults);
};


// Class AdvancedSessions.GetFriendsCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.GetFriendsCallbackProxy"));
		return ptr;
	}


	static class UGetFriendsCallbackProxy* GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// 0x0060 (0x0090 - 0x0030)
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.GetRecentPlayersCallbackProxy"));
		return ptr;
	}


	static class UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId);
};


// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// 0x0050 (0x0080 - 0x0030)
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.GetUserPrivilegeCallbackProxy"));
		return ptr;
	}


	static class UGetUserPrivilegeCallbackProxy* GetUserPrivilege(class UObject* WorldContextObject, EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID);
};


// Class AdvancedSessions.LoginUserCallbackProxy
// 0x0068 (0x0098 - 0x0030)
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.LoginUserCallbackProxy"));
		return ptr;
	}


	static class ULoginUserCallbackProxy* LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& UserID, const struct FString& UserToken);
};


// Class AdvancedSessions.LogoutUserCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.LogoutUserCallbackProxy"));
		return ptr;
	}


	static class ULogoutUserCallbackProxy* LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class AdvancedSessions.SendFriendInviteCallbackProxy
// 0x0060 (0x0090 - 0x0030)
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.SendFriendInviteCallbackProxy"));
		return ptr;
	}


	static class USendFriendInviteCallbackProxy* SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited);
};


// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// 0x0068 (0x0098 - 0x0030)
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced"));
		return ptr;
	}


	static class UUpdateSessionCallbackProxyAdvanced* UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
