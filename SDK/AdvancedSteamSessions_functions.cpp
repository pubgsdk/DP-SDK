// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AdvancedSteamSessions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           bRequireNameOnly               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		bool                           bRequireNameOnly;
		bool                           ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;
	params.bRequireNameOnly = bRequireNameOnly;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// ESteamUserOverlayType          DialogType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, ESteamUserOverlayType DialogType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		ESteamUserOverlayType          DialogType;
		bool                           ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;
	params.DialogType = DialogType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAdvancedSteamFriendsLibrary::GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		struct FString                 ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FBPSteamGroupInfo> SteamGroups                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UAdvancedSteamFriendsLibrary::GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups"));

	struct
	{
		TArray<struct FBPSteamGroupInfo> SteamGroups;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SteamGroups != nullptr)
		*SteamGroups = params.SteamGroups;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// EBlueprintResultSwitch         Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            AppID                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, EBlueprintResultSwitch* Result, int* AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		EBlueprintResultSwitch         Result;
		int                            AppID;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
	if (AppID != nullptr)
		*AppID = params.AppID;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// EBlueprintAsyncResultSwitch    Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESteamAvatarSize               AvatarSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, ESteamAvatarSize AvatarSize, EBlueprintAsyncResultSwitch* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		EBlueprintAsyncResultSwitch    Result;
		ESteamAvatarSize               AvatarSize;
		class UTexture2D*              ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;
	params.AvatarSize = AvatarSize;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::GetLocalSteamIDFromSteam()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam"));

	struct
	{
		struct FBPUniqueNetId          ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel"));

	struct
	{
		struct FBPUniqueNetId          UniqueNetId;
		int                            ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SteamID64                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(const struct FString& SteamID64)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString"));

	struct
	{
		struct FString                 SteamID64;
		struct FBPUniqueNetId          ReturnValue;
	} params = {};

	params.SteamID64 = SteamID64;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            NumberOfItems                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FBPSteamWorkshopID> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FBPSteamWorkshopID> UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(int* NumberOfItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems"));

	struct
	{
		int                            NumberOfItems;
		TArray<struct FBPSteamWorkshopID> ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NumberOfItems != nullptr)
		*NumberOfItems = params.NumberOfItems;

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            NumberOfItems                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(int* NumberOfItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems"));

	struct
	{
		int                            NumberOfItems;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NumberOfItems != nullptr)
		*NumberOfItems = params.NumberOfItems;
}


// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          GroupUniqueNetID               (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class USteamRequestGroupOfficersCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FBPUniqueNetId          GroupUniqueNetID;
		class USteamRequestGroupOfficersCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.GroupUniqueNetID = GroupUniqueNetID;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBPSteamWorkshopID      WorkShopID                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class USteamWSRequestUGCDetailsCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FBPSteamWorkshopID      WorkShopID;
		class USteamWSRequestUGCDetailsCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.WorkShopID = WorkShopID;

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
