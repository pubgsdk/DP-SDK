// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AdvancedSessions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URLToShow                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         AllowedDomains                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           bEmbedded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bShowBackground                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bShowCloseButton               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OffsetX                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OffsetY                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SizeX                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SizeY                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowWebURLUI(const struct FString& URLToShow, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int OffsetX, int OffsetY, int SizeX, int SizeY, EBlueprintResultSwitch* Result, TArray<struct FString>* AllowedDomains)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI"));

	struct
	{
		struct FString                 URLToShow;
		EBlueprintResultSwitch         Result;
		TArray<struct FString>         AllowedDomains;
		bool                           bEmbedded;
		bool                           bShowBackground;
		bool                           bShowCloseButton;
		int                            OffsetX;
		int                            OffsetY;
		int                            SizeX;
		int                            SizeY;
	} params = {};

	params.URLToShow = URLToShow;
	params.bEmbedded = bEmbedded;
	params.bShowBackground = bShowBackground;
	params.bShowCloseButton = bShowCloseButton;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
	if (AllowedDomains != nullptr)
		*AllowedDomains = params.AllowedDomains;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          PlayerViewingProfile           (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerToViewProfileOf          (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI"));

	struct
	{
		struct FBPUniqueNetId          PlayerViewingProfile;
		struct FBPUniqueNetId          PlayerToViewProfileOf;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.PlayerViewingProfile = PlayerViewingProfile;
	params.PlayerToViewProfileOf = PlayerToViewProfileOf;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 LeaderboardName                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowLeaderBoardUI(const struct FString& LeaderboardName, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI"));

	struct
	{
		struct FString                 LeaderboardName;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.LeaderboardName = LeaderboardName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI"));

	struct
	{
		class APlayerController*       PlayerController;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI"));

	struct
	{
		class APlayerController*       PlayerController;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          PlayerRequestingAccountUpgradeUI (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI"));

	struct
	{
		struct FBPUniqueNetId          PlayerRequestingAccountUpgradeUI;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.PlayerRequestingAccountUpgradeUI = PlayerRequestingAccountUpgradeUI;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAdvancedExternalUILibrary::CloseWebURLUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// int                            LocalPlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PersonInviting                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FString                 AppID                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SessionToJoin                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const struct FString& AppID, const struct FBlueprintSessionResult& SessionToJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived"));

	struct
	{
		int                            LocalPlayerNum;
		struct FBPUniqueNetId          PersonInviting;
		struct FString                 AppID;
		struct FBlueprintSessionResult SessionToJoin;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInviting = PersonInviting;
	params.AppID = AppID;
	params.SessionToJoin = SessionToJoin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// int                            LocalPlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PersonInvited                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SessionToJoin                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted"));

	struct
	{
		int                            LocalPlayerNum;
		struct FBPUniqueNetId          PersonInvited;
		struct FBlueprintSessionResult SessionToJoin;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInvited = PersonInvited;
	params.SessionToJoin = SessionToJoin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          PlayerId                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           bIsTalking                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged"));

	struct
	{
		struct FBPUniqueNetId          PlayerId;
		bool                           bIsTalking;
	} params = {};

	params.PlayerId = PlayerId;
	params.bIsTalking = bIsTalking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerNum                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBPLoginStatus                 PreviousStatus                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBPLoginStatus                 NewStatus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          NewPlayerUniqueNetID           (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged"));

	struct
	{
		int                            PlayerNum;
		EBPLoginStatus                 PreviousStatus;
		EBPLoginStatus                 NewStatus;
		struct FBPUniqueNetId          NewPlayerUniqueNetID;
	} params = {};

	params.PlayerNum = PlayerNum;
	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;
	params.NewPlayerUniqueNetID = NewPlayerUniqueNetID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerNum                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int PlayerNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged"));

	struct
	{
		int                            PlayerNum;
	} params = {};

	params.PlayerNum = PlayerNum;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          PersonInviting                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsInterface::OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived"));

	struct
	{
		struct FBPUniqueNetId          PersonInviting;
		struct FBlueprintSessionResult SearchResult;
	} params = {};

	params.PersonInviting = PersonInviting;
	params.SearchResult = SearchResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          PersonInvited                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsInterface::OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted"));

	struct
	{
		struct FBPUniqueNetId          PersonInvited;
		struct FBlueprintSessionResult SearchResult;
	} params = {};

	params.PersonInvited = PersonInvited;
	params.SearchResult = SearchResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          PlayerId                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           bIsTalking                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsInterface::OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged"));

	struct
	{
		struct FBPUniqueNetId          PlayerId;
		bool                           bIsTalking;
	} params = {};

	params.PlayerId = PlayerId;
	params.bIsTalking = bIsTalking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EBPLoginStatus                 PreviousStatus                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBPLoginStatus                 NewStatus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerUniqueNetID              (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsInterface::OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged"));

	struct
	{
		EBPLoginStatus                 PreviousStatus;
		EBPLoginStatus                 NewStatus;
		struct FBPUniqueNetId          PlayerUniqueNetID;
	} params = {};

	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;
	params.PlayerUniqueNetID = PlayerUniqueNetID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerNum                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsInterface::OnPlayerLoginChanged(int PlayerNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged"));

	struct
	{
		int                            PlayerNum;
	} params = {};

	params.PlayerNum = PlayerNum;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FBPUniqueNetId>  Friends                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends"));

	struct
	{
		class APlayerController*       PlayerController;
		TArray<struct FBPUniqueNetId>  Friends;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.PlayerController = PlayerController;
	params.Friends = Friends;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FBPUniqueNetId          FriendUniqueNetId;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           IsFriend                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FBPUniqueNetId          UniqueNetId;
		bool                           IsFriend;
	} params = {};

	params.PlayerController = PlayerController;
	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsFriend != nullptr)
		*IsFriend = params.IsFriend;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FBPOnlineRecentPlayer> PlayersList                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		TArray<struct FBPOnlineRecentPlayer> PlayersList;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PlayersList != nullptr)
		*PlayersList = params.PlayersList;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FBPFriendInfo>   FriendsList                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList"));

	struct
	{
		class APlayerController*       PlayerController;
		TArray<struct FBPFriendInfo>   FriendsList;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FriendsList != nullptr)
		*FriendsList = params.FriendsList;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FBPFriendInfo           Friend                         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FBPUniqueNetId          FriendUniqueNetId;
		struct FBPFriendInfo           Friend;
	} params = {};

	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Friend != nullptr)
		*Friend = params.Friend;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewAttributeValue              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, const struct FString& NewAttributeValue, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute"));

	struct
	{
		struct FBPUserOnlineAccount    AccountInfo;
		struct FString                 AttributeName;
		struct FString                 NewAttributeValue;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;
	params.NewAttributeValue = NewAttributeValue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID"));

	struct
	{
		struct FBPUserOnlineAccount    AccountInfo;
		struct FBPUniqueNetId          UniqueNetId;
	} params = {};

	params.AccountInfo = AccountInfo;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 Username                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* Username)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName"));

	struct
	{
		struct FBPUserOnlineAccount    AccountInfo;
		struct FString                 Username;
	} params = {};

	params.AccountInfo = AccountInfo;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Username != nullptr)
		*Username = params.Username;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName"));

	struct
	{
		struct FBPUserOnlineAccount    AccountInfo;
		struct FString                 DisplayName;
	} params = {};

	params.AccountInfo = AccountInfo;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AuthAttribute                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AuthAttribute, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute"));

	struct
	{
		struct FBPUserOnlineAccount    AccountInfo;
		struct FString                 AttributeName;
		struct FString                 AuthAttribute;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AuthAttribute != nullptr)
		*AuthAttribute = params.AuthAttribute;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AttributeValue                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AttributeValue, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute"));

	struct
	{
		struct FBPUserOnlineAccount    AccountInfo;
		struct FString                 AttributeName;
		struct FString                 AttributeValue;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AttributeValue != nullptr)
		*AttributeValue = params.AttributeValue;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, struct FString* AccessToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken"));

	struct
	{
		struct FBPUserOnlineAccount    AccountInfo;
		struct FString                 AccessToken;
	} params = {};

	params.AccountInfo = AccountInfo;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AccessToken != nullptr)
		*AccessToken = params.AccessToken;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FBPUserOnlineAccount    AccountInfo                    (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		struct FBPUserOnlineAccount    AccountInfo;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AccountInfo != nullptr)
		*AccountInfo = params.AccountInfo;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 PlayerNickname                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, struct FString* PlayerNickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		struct FString                 PlayerNickname;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PlayerNickname != nullptr)
		*PlayerNickname = params.PlayerNickname;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AuthToken                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetPlayerAuthToken(class APlayerController* PlayerController, struct FString* AuthToken, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FString                 AuthToken;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AuthToken != nullptr)
		*AuthToken = params.AuthToken;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EBPLoginStatus                 LoginStatus                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, EBPLoginStatus* LoginStatus, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		EBPLoginStatus                 LoginStatus;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LoginStatus != nullptr)
		*LoginStatus = params.LoginStatus;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FBPUserOnlineAccount> AccountInfos                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts"));

	struct
	{
		TArray<struct FBPUserOnlineAccount> AccountInfos;
		EBlueprintResultSwitch         Result;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AccountInfos != nullptr)
		*AccountInfos = params.AccountInfos;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 String                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, struct FString* String)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		struct FString                 String;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (String != nullptr)
		*String = params.String;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::SetPlayerName(class APlayerController* PlayerController, const struct FString& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FString                 PlayerName;
	} params = {};

	params.PlayerController = PlayerController;
	params.PlayerName = PlayerName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSessionPropertyKeyPair SessionSearchProperty          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// EOnlineComparisonOpRedux       ComparisonOp                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSessionsSearchSetting  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FSessionsSearchSetting UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty"));

	struct
	{
		struct FSessionPropertyKeyPair SessionSearchProperty;
		EOnlineComparisonOpRedux       ComparisonOp;
		struct FSessionsSearchSetting  ReturnValue;
	} params = {};

	params.SessionSearchProperty = SessionSearchProperty;
	params.ComparisonOp = ComparisonOp;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(const struct FName& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString"));

	struct
	{
		struct FName                   Key;
		struct FString                 Value;
		struct FSessionPropertyKeyPair ReturnValue;
	} params = {};

	params.Key = Key;
	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(const struct FName& Key, int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt"));

	struct
	{
		struct FName                   Key;
		int                            Value;
		struct FSessionPropertyKeyPair ReturnValue;
	} params = {};

	params.Key = Key;
	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(const struct FName& Key, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat"));

	struct
	{
		struct FName                   Key;
		float                          Value;
		struct FSessionPropertyKeyPair ReturnValue;
	} params = {};

	params.Key = Key;
	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(const struct FName& Key, unsigned char Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte"));

	struct
	{
		struct FName                   Key;
		unsigned char                  Value;
		struct FSessionPropertyKeyPair ReturnValue;
	} params = {};

	params.Key = Key;
	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(const struct FName& Key, bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool"));

	struct
	{
		struct FName                   Key;
		bool                           Value;
		struct FSessionPropertyKeyPair ReturnValue;
	} params = {};

	params.Key = Key;
	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerToKick                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   KickReason                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, const struct FText& KickReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerToKick;
		struct FText                   KickReason;
		bool                           ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerToKick = PlayerToKick;
	params.KickReason = KickReason;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::IsValidSession(const struct FBlueprintSessionResult& SessionResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession"));

	struct
	{
		struct FBlueprintSessionResult SessionResult;
		bool                           ReturnValue;
	} params = {};

	params.SessionResult = SessionResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerToCheck                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bIsInSession                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::IsPlayerInSession(class UObject* WorldContextObject, const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FBPUniqueNetId          PlayerToCheck;
		bool                           bIsInSession;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerToCheck = PlayerToCheck;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bIsInSession != nullptr)
		*bIsInSession = params.bIsInSession;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   SubSystemName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::HasOnlineSubsystem(const struct FName& SubSystemName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem"));

	struct
	{
		struct FName                   SubSystemName;
		bool                           ReturnValue;
	} params = {};

	params.SubSystemName = SubSystemName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState"));

	struct
	{
		class APlayerState*            PlayerState;
		struct FBPUniqueNetId          UniqueNetId;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FBPUniqueNetId          UniqueNetId;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            UniqueBuildId                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int* UniqueBuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID"));

	struct
	{
		struct FBlueprintSessionResult SessionResult;
		int                            UniqueBuildId;
	} params = {};

	params.SessionResult = SessionResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBPOnlineSessionState          SessionState                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState* SessionState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState"));

	struct
	{
		class UObject*                 WorldContextObject;
		EBPOnlineSessionState          SessionState;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SessionState != nullptr)
		*SessionState = params.SessionState;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumConnections                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumPrivateConnections          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsLAN                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsDedicated                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowJoinInProgress           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsAnticheatEnabled            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            BuildUniqueID                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionSettings(class UObject* WorldContextObject, int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            NumConnections;
		int                            NumPrivateConnections;
		bool                           bIsLAN;
		bool                           bIsDedicated;
		bool                           bAllowInvites;
		bool                           bAllowJoinInProgress;
		bool                           bIsAnticheatEnabled;
		int                            BuildUniqueID;
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		EBlueprintResultSwitch         Result;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NumConnections != nullptr)
		*NumConnections = params.NumConnections;
	if (NumPrivateConnections != nullptr)
		*NumPrivateConnections = params.NumPrivateConnections;
	if (bIsLAN != nullptr)
		*bIsLAN = params.bIsLAN;
	if (bIsDedicated != nullptr)
		*bIsDedicated = params.bIsDedicated;
	if (bAllowInvites != nullptr)
		*bAllowInvites = params.bAllowInvites;
	if (bAllowJoinInProgress != nullptr)
		*bAllowJoinInProgress = params.bAllowJoinInProgress;
	if (bIsAnticheatEnabled != nullptr)
		*bIsAnticheatEnabled = params.bIsAnticheatEnabled;
	if (BuildUniqueID != nullptr)
		*BuildUniqueID = params.BuildUniqueID;
	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESessionSettingSearchResult    SearchResult                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SettingValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, struct FString* SettingValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString"));

	struct
	{
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		struct FName                   SettingName;
		ESessionSettingSearchResult    SearchResult;
		struct FString                 SettingValue;
	} params = {};

	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSessionPropertyKeyPair SessionProperty                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UAdvancedSessionsLibrary::GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey"));

	struct
	{
		struct FSessionPropertyKeyPair SessionProperty;
		struct FName                   ReturnValue;
	} params = {};

	params.SessionProperty = SessionProperty;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESessionSettingSearchResult    SearchResult                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SettingValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, int* SettingValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt"));

	struct
	{
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		struct FName                   SettingName;
		ESessionSettingSearchResult    SearchResult;
		int                            SettingValue;
	} params = {};

	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESessionSettingSearchResult    SearchResult                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          SettingValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat"));

	struct
	{
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		struct FName                   SettingName;
		ESessionSettingSearchResult    SearchResult;
		float                          SettingValue;
	} params = {};

	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESessionSettingSearchResult    SearchResult                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  SettingValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte"));

	struct
	{
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		struct FName                   SettingName;
		ESessionSettingSearchResult    SearchResult;
		unsigned char                  SettingValue;
	} params = {};

	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESessionSettingSearchResult    SearchResult                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           SettingValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool"));

	struct
	{
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		struct FName                   SettingName;
		ESessionSettingSearchResult    SearchResult;
		bool                           SettingValue;
	} params = {};

	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionID_AsString(const struct FBlueprintSessionResult& SessionResult, struct FString* SessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString"));

	struct
	{
		struct FBlueprintSessionResult SessionResult;
		struct FString                 SessionId;
	} params = {};

	params.SessionResult = SessionResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SessionId != nullptr)
		*SessionId = params.SessionId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetPlayerName(class APlayerController* PlayerController, struct FString* PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FString                 PlayerName;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumNetPlayers                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int* NumNetPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            NumNetPlayers;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NumNetPlayers != nullptr)
		*NumNetPlayers = params.NumNetPlayers;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NetPlayerIndex                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetNetPlayerIndex(class APlayerController* PlayerController, int* NetPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex"));

	struct
	{
		class APlayerController*       PlayerController;
		int                            NetPlayerIndex;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NetPlayerIndex != nullptr)
		*NetPlayerIndex = params.NetPlayerIndex;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings"));

	struct
	{
		struct FBlueprintSessionResult SessionResult;
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
	} params = {};

	params.SessionResult = SessionResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            UniqueBuildId                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(int* UniqueBuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID"));

	struct
	{
		int                            UniqueBuildId;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetCurrentSessionID_AsString(class UObject* WorldContextObject, struct FString* SessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 SessionId;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SessionId != nullptr)
		*SessionId = params.SessionId;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OutIndex                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, EBlueprintResultSwitch* Result, int* OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName"));

	struct
	{
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		struct FName                   SettingName;
		EBlueprintResultSwitch         Result;
		int                            OutIndex;
	} params = {};

	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   SettingsName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair OutProperty                    (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName"));

	struct
	{
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		struct FName                   SettingsName;
		EBlueprintResultSwitch         Result;
		struct FSessionPropertyKeyPair OutProperty;
	} params = {};

	params.ExtraSettings = ExtraSettings;
	params.SettingsName = SettingsName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
	if (OutProperty != nullptr)
		*OutProperty = params.OutProperty;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID"));

	struct
	{
		struct FBPUniqueNetId          A;
		struct FBPUniqueNetId          B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerToBan                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   BanReason                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, const struct FText& BanReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerToBan;
		struct FText                   BanReason;
		bool                           ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerToBan = PlayerToBan;
	params.BanReason = BanReason;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> SettingsArray                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> NewOrChangedSettings           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ModifiedSettingsArray          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings"));

	struct
	{
		TArray<struct FSessionPropertyKeyPair> SettingsArray;
		TArray<struct FSessionPropertyKeyPair> NewOrChangedSettings;
		TArray<struct FSessionPropertyKeyPair> ModifiedSettingsArray;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SettingsArray != nullptr)
		*SettingsArray = params.SettingsArray;
	if (NewOrChangedSettings != nullptr)
		*NewOrChangedSettings = params.NewOrChangedSettings;
	if (ModifiedSettingsArray != nullptr)
		*ModifiedSettingsArray = params.ModifiedSettingsArray;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  LocalPlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::UnRegisterLocalTalker(unsigned char LocalPlayerNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker"));

	struct
	{
		unsigned char                  LocalPlayerNum;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAdvancedVoiceLibrary::UnRegisterAllLocalTalkers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bIsSystemWide                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::UnMuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker"));

	struct
	{
		unsigned char                  LocalUserNum;
		struct FBPUniqueNetId          UniqueNetId;
		bool                           bIsSystemWide;
		bool                           ReturnValue;
	} params = {};

	params.LocalUserNum = LocalUserNum;
	params.UniqueNetId = UniqueNetId;
	params.bIsSystemWide = bIsSystemWide;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  LocalPlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::StopNetworkedVoice(unsigned char LocalPlayerNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice"));

	struct
	{
		unsigned char                  LocalPlayerNum;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  LocalPlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::StartNetworkedVoice(unsigned char LocalPlayerNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice"));

	struct
	{
		unsigned char                  LocalPlayerNum;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAdvancedVoiceLibrary::RemoveAllRemoteTalkers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  LocalPlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::RegisterLocalTalker(unsigned char LocalPlayerNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker"));

	struct
	{
		unsigned char                  LocalPlayerNum;
		bool                           ReturnValue;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAdvancedVoiceLibrary::RegisterAllLocalTalkers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bIsSystemWide                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::MuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker"));

	struct
	{
		unsigned char                  LocalUserNum;
		struct FBPUniqueNetId          UniqueNetId;
		bool                           bIsSystemWide;
		bool                           ReturnValue;
	} params = {};

	params.LocalUserNum = LocalUserNum;
	params.UniqueNetId = UniqueNetId;
	params.bIsSystemWide = bIsSystemWide;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// unsigned char                  LocalUserNumChecking           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::IsPlayerMuted(unsigned char LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted"));

	struct
	{
		unsigned char                  LocalUserNumChecking;
		struct FBPUniqueNetId          UniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.LocalUserNumChecking = LocalUserNumChecking;
	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// unsigned char                  LocalPlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::IsLocalPlayerTalking(unsigned char LocalPlayerNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking"));

	struct
	{
		unsigned char                  LocalPlayerNum;
		bool                           ReturnValue;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bHasHeadset                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  LocalPlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::IsHeadsetPresent(unsigned char LocalPlayerNum, bool* bHasHeadset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent"));

	struct
	{
		bool                           bHasHeadset;
		unsigned char                  LocalPlayerNum;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bHasHeadset != nullptr)
		*bHasHeadset = params.bHasHeadset;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            NumLocalTalkers                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::GetNumLocalTalkers(int* NumLocalTalkers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers"));

	struct
	{
		int                            NumLocalTalkers;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NumLocalTalkers != nullptr)
		*NumLocalTalkers = params.NumLocalTalkers;
}


// Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCancelFindSessionsCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCancelFindSessionsCallbackProxy* UCancelFindSessionsCallbackProxy::CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UCancelFindSessionsCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PublicConnections              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PrivateConnections             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsDedicatedServer             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUsePresence                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowJoinViaPresence          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowJoinViaPresenceFriendsOnly (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAntiCheatProtected            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUsesStats                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bShouldAdvertise               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCreateSessionCallbackProxyAdvanced* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		class APlayerController*       PlayerController;
		int                            PublicConnections;
		int                            PrivateConnections;
		bool                           bUseLAN;
		bool                           bAllowInvites;
		bool                           bIsDedicatedServer;
		bool                           bUsePresence;
		bool                           bAllowJoinViaPresence;
		bool                           bAllowJoinViaPresenceFriendsOnly;
		bool                           bAntiCheatProtected;
		bool                           bUsesStats;
		bool                           bShouldAdvertise;
		class UCreateSessionCallbackProxyAdvanced* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bIsDedicatedServer = bIsDedicatedServer;
	params.bUsePresence = bUsePresence;
	params.bAllowJoinViaPresence = bAllowJoinViaPresence;
	params.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
	params.bAntiCheatProtected = bAntiCheatProtected;
	params.bUsesStats = bUsesStats;
	params.bShouldAdvertise = bShouldAdvertise;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.EndSessionCallbackProxy.EndSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UEndSessionCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UEndSessionCallbackProxy* UEndSessionCallbackProxy::EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.EndSessionCallbackProxy.EndSession"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UEndSessionCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UFindFriendSessionCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UFindFriendSessionCallbackProxy* UFindFriendSessionCallbackProxy::FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FBPUniqueNetId          FriendUniqueNetId;
		class UFindFriendSessionCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MaxResults                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBPServerPresenceSearchType    ServerTypeToSearch             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSessionsSearchSetting> Filters                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bEmptyServersOnly              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bNonEmptyServersOnly           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSecureServersOnly             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MinSlotsAvailable              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFindSessionsCallbackProxyAdvanced* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int MinSlotsAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            MaxResults;
		bool                           bUseLAN;
		EBPServerPresenceSearchType    ServerTypeToSearch;
		TArray<struct FSessionsSearchSetting> Filters;
		bool                           bEmptyServersOnly;
		bool                           bNonEmptyServersOnly;
		bool                           bSecureServersOnly;
		int                            MinSlotsAvailable;
		class UFindSessionsCallbackProxyAdvanced* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.ServerTypeToSearch = ServerTypeToSearch;
	params.Filters = Filters;
	params.bEmptyServersOnly = bEmptyServersOnly;
	params.bNonEmptyServersOnly = bNonEmptyServersOnly;
	params.bSecureServersOnly = bSecureServersOnly;
	params.MinSlotsAvailable = MinSlotsAvailable;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FBlueprintSessionResult> SessionResults                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSessionsSearchSetting> Filters                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FBlueprintSessionResult> FilteredResults                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UFindSessionsCallbackProxyAdvanced::FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults"));

	struct
	{
		TArray<struct FBlueprintSessionResult> SessionResults;
		TArray<struct FSessionsSearchSetting> Filters;
		TArray<struct FBlueprintSessionResult> FilteredResults;
	} params = {};

	params.SessionResults = SessionResults;
	params.Filters = Filters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FilteredResults != nullptr)
		*FilteredResults = params.FilteredResults;
}


// Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGetFriendsCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGetFriendsCallbackProxy* UGetFriendsCallbackProxy::GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UGetFriendsCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UGetRecentPlayersCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGetRecentPlayersCallbackProxy* UGetRecentPlayersCallbackProxy::GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FBPUniqueNetId          UniqueNetId;
		class UGetRecentPlayersCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBPUserPrivileges              PrivilegeToCheck               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerUniqueNetID              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UGetUserPrivilegeCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGetUserPrivilegeCallbackProxy* UGetUserPrivilegeCallbackProxy::GetUserPrivilege(class UObject* WorldContextObject, EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege"));

	struct
	{
		class UObject*                 WorldContextObject;
		EBPUserPrivileges              PrivilegeToCheck;
		struct FBPUniqueNetId          PlayerUniqueNetID;
		class UGetUserPrivilegeCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PrivilegeToCheck = PrivilegeToCheck;
	params.PlayerUniqueNetID = PlayerUniqueNetID;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 UserID                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 UserToken                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ULoginUserCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULoginUserCallbackProxy* ULoginUserCallbackProxy::LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& UserID, const struct FString& UserToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.LoginUserCallbackProxy.LoginUser"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FString                 UserID;
		struct FString                 UserToken;
		class ULoginUserCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.UserID = UserID;
	params.UserToken = UserToken;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ULogoutUserCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULogoutUserCallbackProxy* ULogoutUserCallbackProxy::LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class ULogoutUserCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetIDInvited             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class USendFriendInviteCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USendFriendInviteCallbackProxy* USendFriendInviteCallbackProxy::SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FBPUniqueNetId          UniqueNetIDInvited;
		class USendFriendInviteCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.UniqueNetIDInvited = UniqueNetIDInvited;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            PublicConnections              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PrivateConnections             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowJoinInProgress           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bRefreshOnlineData             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsDedicatedServer             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUpdateSessionCallbackProxyAdvanced* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<struct FSessionPropertyKeyPair> ExtraSettings;
		int                            PublicConnections;
		int                            PrivateConnections;
		bool                           bUseLAN;
		bool                           bAllowInvites;
		bool                           bAllowJoinInProgress;
		bool                           bRefreshOnlineData;
		bool                           bIsDedicatedServer;
		class UUpdateSessionCallbackProxyAdvanced* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bAllowJoinInProgress = bAllowJoinInProgress;
	params.bRefreshOnlineData = bRefreshOnlineData;
	params.bIsDedicatedServer = bIsDedicatedServer;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
