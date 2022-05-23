// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AdminConnectedPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdminConnectedPlayer.AdminConnectedPlayer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAdminConnectedPlayer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdminConnectedPlayer.AdminConnectedPlayer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdminConnectedPlayer.AdminConnectedPlayer_C.BndEvt__Kick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdminConnectedPlayer_C::BndEvt__Kick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdminConnectedPlayer.AdminConnectedPlayer_C.BndEvt__Kick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdminConnectedPlayer.AdminConnectedPlayer_C.KickThisPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SteamIDToKick                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UAdminConnectedPlayer_C::KickThisPlayer(const struct FText& SteamIDToKick)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdminConnectedPlayer.AdminConnectedPlayer_C.KickThisPlayer"));

	struct
	{
		struct FText                   SteamIDToKick;
	} params = {};

	params.SteamIDToKick = SteamIDToKick;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdminConnectedPlayer.AdminConnectedPlayer_C.BanThisPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SteamIDToKick                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UAdminConnectedPlayer_C::BanThisPlayer(const struct FText& SteamIDToKick)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdminConnectedPlayer.AdminConnectedPlayer_C.BanThisPlayer"));

	struct
	{
		struct FText                   SteamIDToKick;
	} params = {};

	params.SteamIDToKick = SteamIDToKick;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdminConnectedPlayer.AdminConnectedPlayer_C.BndEvt__Ban_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdminConnectedPlayer_C::BndEvt__Ban_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdminConnectedPlayer.AdminConnectedPlayer_C.BndEvt__Ban_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AdminConnectedPlayer.AdminConnectedPlayer_C.ExecuteUbergraph_AdminConnectedPlayer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAdminConnectedPlayer_C::ExecuteUbergraph_AdminConnectedPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AdminConnectedPlayer.AdminConnectedPlayer_C.ExecuteUbergraph_AdminConnectedPlayer"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
