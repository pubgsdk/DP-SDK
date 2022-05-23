// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AdminPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AdminPanel.BP_AdminPanel_C.BndEvt__Btn_Update_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_AdminPanel_C::BndEvt__Btn_Update_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdminPanel.BP_AdminPanel_C.BndEvt__Btn_Update_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdminPanel.BP_AdminPanel_C.GetAllPlayers
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AdminPanel_C::GetAllPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdminPanel.BP_AdminPanel_C.GetAllPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdminPanel.BP_AdminPanel_C.AddPlayerToList
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   SteamID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              Avatar                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            PlayerIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AdminPanel_C::AddPlayerToList(const struct FText& DisplayName, const struct FText& SteamID, class UTexture2D* Avatar, int PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdminPanel.BP_AdminPanel_C.AddPlayerToList"));

	struct
	{
		struct FText                   DisplayName;
		struct FText                   SteamID;
		class UTexture2D*              Avatar;
		int                            PlayerIndex;
	} params = {};

	params.DisplayName = DisplayName;
	params.SteamID = SteamID;
	params.Avatar = Avatar;
	params.PlayerIndex = PlayerIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdminPanel.BP_AdminPanel_C.ClearPlayerList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AdminPanel_C::ClearPlayerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdminPanel.BP_AdminPanel_C.ClearPlayerList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdminPanel.BP_AdminPanel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AdminPanel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdminPanel.BP_AdminPanel_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdminPanel.BP_AdminPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_AdminPanel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdminPanel.BP_AdminPanel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdminPanel.BP_AdminPanel_C.ExecuteUbergraph_BP_AdminPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AdminPanel_C::ExecuteUbergraph_BP_AdminPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdminPanel.BP_AdminPanel_C.ExecuteUbergraph_BP_AdminPanel"));

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
