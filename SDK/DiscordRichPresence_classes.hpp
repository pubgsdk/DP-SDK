#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DiscordRichPresence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DiscordRichPresence.DiscordInterface
// 0x0000 (0x0028 - 0x0028)
class UDiscordInterface : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DiscordRichPresence.DiscordInterface"));
		return ptr;
	}


	static void TickDiscord();
	static void ShutdownDiscord();
	static void SetActivity(const struct FDiscordActivityInfo& Activity);
	static void RegisterApplicationSteam();
	static void RegisterApplication(const struct FString& Command);
	static bool InitializeDiscord(const struct FString& ClientId);
	static void ClearActivity();
	static void BindOnUserSpectate(const struct FScriptDelegate& OnDiscordUserSpectate);
	static void BindOnUserJoinRequest(const struct FScriptDelegate& OnDiscordUserJoinRequest);
	static void BindOnUserJoin(const struct FScriptDelegate& OnDiscordUserJoin);
	static void BindOnUserInvite(const struct FScriptDelegate& OnDiscordInvite);
	static void BindEvents(const struct FScriptDelegate& OnDiscordUserJoin, const struct FScriptDelegate& OnDiscordUserSpectate, const struct FScriptDelegate& OnDiscordUserJoinRequest, const struct FScriptDelegate& OnDiscordInvite);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
