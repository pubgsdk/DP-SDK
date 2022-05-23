// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DiscordRichPresence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DiscordRichPresence.DiscordInterface.TickDiscord
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UDiscordInterface::TickDiscord()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.TickDiscord"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.ShutdownDiscord
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UDiscordInterface::ShutdownDiscord()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.ShutdownDiscord"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.SetActivity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDiscordActivityInfo    Activity                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UDiscordInterface::SetActivity(const struct FDiscordActivityInfo& Activity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.SetActivity"));

	struct
	{
		struct FDiscordActivityInfo    Activity;
	} params = {};

	params.Activity = Activity;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UDiscordInterface::RegisterApplicationSteam()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.RegisterApplication
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDiscordInterface::RegisterApplication(const struct FString& Command)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.RegisterApplication"));

	struct
	{
		struct FString                 Command;
	} params = {};

	params.Command = Command;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.InitializeDiscord
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ClientId                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDiscordInterface::InitializeDiscord(const struct FString& ClientId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.InitializeDiscord"));

	struct
	{
		struct FString                 ClientId;
		bool                           ReturnValue;
	} params = {};

	params.ClientId = ClientId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DiscordRichPresence.DiscordInterface.ClearActivity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UDiscordInterface::ClearActivity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.ClearActivity"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnDiscordUserSpectate          (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UDiscordInterface::BindOnUserSpectate(const struct FScriptDelegate& OnDiscordUserSpectate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate"));

	struct
	{
		struct FScriptDelegate         OnDiscordUserSpectate;
	} params = {};

	params.OnDiscordUserSpectate = OnDiscordUserSpectate;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnDiscordUserJoinRequest       (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UDiscordInterface::BindOnUserJoinRequest(const struct FScriptDelegate& OnDiscordUserJoinRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest"));

	struct
	{
		struct FScriptDelegate         OnDiscordUserJoinRequest;
	} params = {};

	params.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.BindOnUserJoin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnDiscordUserJoin              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UDiscordInterface::BindOnUserJoin(const struct FScriptDelegate& OnDiscordUserJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.BindOnUserJoin"));

	struct
	{
		struct FScriptDelegate         OnDiscordUserJoin;
	} params = {};

	params.OnDiscordUserJoin = OnDiscordUserJoin;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.BindOnUserInvite
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnDiscordInvite                (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UDiscordInterface::BindOnUserInvite(const struct FScriptDelegate& OnDiscordInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.BindOnUserInvite"));

	struct
	{
		struct FScriptDelegate         OnDiscordInvite;
	} params = {};

	params.OnDiscordInvite = OnDiscordInvite;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DiscordRichPresence.DiscordInterface.BindEvents
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnDiscordUserJoin              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnDiscordUserSpectate          (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnDiscordUserJoinRequest       (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnDiscordInvite                (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UDiscordInterface::BindEvents(const struct FScriptDelegate& OnDiscordUserJoin, const struct FScriptDelegate& OnDiscordUserSpectate, const struct FScriptDelegate& OnDiscordUserJoinRequest, const struct FScriptDelegate& OnDiscordInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DiscordRichPresence.DiscordInterface.BindEvents"));

	struct
	{
		struct FScriptDelegate         OnDiscordUserJoin;
		struct FScriptDelegate         OnDiscordUserSpectate;
		struct FScriptDelegate         OnDiscordUserJoinRequest;
		struct FScriptDelegate         OnDiscordInvite;
	} params = {};

	params.OnDiscordUserJoin = OnDiscordUserJoin;
	params.OnDiscordUserSpectate = OnDiscordUserSpectate;
	params.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;
	params.OnDiscordInvite = OnDiscordInvite;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
