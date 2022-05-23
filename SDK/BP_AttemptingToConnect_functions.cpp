// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AttemptingToConnect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AttemptingToConnect_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.PreConstruct"));

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


// Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.UpdateAreYouSureMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AttemptingToConnect_C::UpdateAreYouSureMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.UpdateAreYouSureMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.ExecuteUbergraph_BP_AttemptingToConnect
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AttemptingToConnect_C::ExecuteUbergraph_BP_AttemptingToConnect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.ExecuteUbergraph_BP_AttemptingToConnect"));

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


// Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.NoSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AttemptingToConnect_C::NoSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.NoSelected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.YesSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AttemptingToConnect_C::YesSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttemptingToConnect.BP_AttemptingToConnect_C.YesSelected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
