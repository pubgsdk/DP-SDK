// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PlayerAIActivator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.Update Proximity Deactivation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerAIActivator_C::Update_Proximity_Deactivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.Update Proximity Deactivation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.Update Proximity Activation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerAIActivator_C::Update_Proximity_Activation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.Update Proximity Activation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.Server Start Activator Timer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerAIActivator_C::Server_Start_Activator_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.Server Start Activator Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_PlayerAIActivator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.ExecuteUbergraph_BP_PlayerAIActivator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerAIActivator_C::ExecuteUbergraph_BP_PlayerAIActivator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerAIActivator.BP_PlayerAIActivator_C.ExecuteUbergraph_BP_PlayerAIActivator"));

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
