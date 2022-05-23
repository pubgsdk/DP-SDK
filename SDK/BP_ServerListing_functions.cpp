// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ServerListing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ServerListing.BP_ServerListing_C.ReturnServerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBP_ServerListing_C::ReturnServerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerListing.BP_ServerListing_C.ReturnServerName"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ServerListing.BP_ServerListing_C.ReturnPlayerCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBP_ServerListing_C::ReturnPlayerCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerListing.BP_ServerListing_C.ReturnPlayerCount"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ServerListing.BP_ServerListing_C.OnFailure_8A7FBCAD4B7220EC91F827838611B041
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ServerListing_C::OnFailure_8A7FBCAD4B7220EC91F827838611B041()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerListing.BP_ServerListing_C.OnFailure_8A7FBCAD4B7220EC91F827838611B041"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerListing.BP_ServerListing_C.OnSuccess_8A7FBCAD4B7220EC91F827838611B041
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ServerListing_C::OnSuccess_8A7FBCAD4B7220EC91F827838611B041()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerListing.BP_ServerListing_C.OnSuccess_8A7FBCAD4B7220EC91F827838611B041"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerListing.BP_ServerListing_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ServerListing_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerListing.BP_ServerListing_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerListing.BP_ServerListing_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ServerListing_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerListing.BP_ServerListing_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerListing.BP_ServerListing_C.ExecuteUbergraph_BP_ServerListing
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ServerListing_C::ExecuteUbergraph_BP_ServerListing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerListing.BP_ServerListing_C.ExecuteUbergraph_BP_ServerListing"));

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
