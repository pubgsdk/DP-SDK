#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AdvancedSteamSessions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary"));
		return ptr;
	}


	static bool RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly);
	static bool OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, ESteamUserOverlayType DialogType);
	static struct FString GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId);
	static void GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups);
	static void GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, EBlueprintResultSwitch* Result, int* AppID);
	static class UTexture2D* GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, ESteamAvatarSize AvatarSize, EBlueprintAsyncResultSwitch* Result);
	static struct FBPUniqueNetId GetLocalSteamIDFromSteam();
	static int GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId);
	static struct FBPUniqueNetId CreateSteamIDFromString(const struct FString& SteamID64);
};


// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary"));
		return ptr;
	}


	static TArray<struct FBPSteamWorkshopID> GetSubscribedWorkshopItems(int* NumberOfItems);
	static void GetNumSubscribedWorkshopItems(int* NumberOfItems);
};


// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// 0x0070 (0x00A0 - 0x0030)
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy"));
		return ptr;
	}


	static class USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID);
};


// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// 0x0058 (0x0088 - 0x0030)
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy"));
		return ptr;
	}


	static class USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
