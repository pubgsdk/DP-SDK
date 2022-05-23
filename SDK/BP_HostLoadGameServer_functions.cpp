// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HostLoadGameServer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.FindExistingSave
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_HostLoadGameServer_C::FindExistingSave(const struct FString& SlotName, bool* SaveFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.FindExistingSave"));

	struct
	{
		struct FString                 SlotName;
		bool                           SaveFound;
	} params = {};

	params.SlotName = SlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
}


// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.DeleteExistingSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_HostLoadGameServer_C::DeleteExistingSave(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.DeleteExistingSave"));

	struct
	{
		struct FString                 SlotName;
	} params = {};

	params.SlotName = SlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.OnFailure_C937DB1E49A7E0F5E76DE0B7533AD4A6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostLoadGameServer_C::OnFailure_C937DB1E49A7E0F5E76DE0B7533AD4A6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.OnFailure_C937DB1E49A7E0F5E76DE0B7533AD4A6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.OnSuccess_C937DB1E49A7E0F5E76DE0B7533AD4A6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostLoadGameServer_C::OnSuccess_C937DB1E49A7E0F5E76DE0B7533AD4A6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.OnSuccess_C937DB1E49A7E0F5E76DE0B7533AD4A6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.OnFailure_0630C1124969EBD3DBB247BE71D48DFB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostLoadGameServer_C::OnFailure_0630C1124969EBD3DBB247BE71D48DFB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.OnFailure_0630C1124969EBD3DBB247BE71D48DFB"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.OnSuccess_0630C1124969EBD3DBB247BE71D48DFB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostLoadGameServer_C::OnSuccess_0630C1124969EBD3DBB247BE71D48DFB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.OnSuccess_0630C1124969EBD3DBB247BE71D48DFB"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_HostLoadGameServer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.PreConstruct"));

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


// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.BndEvt__CreateServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_HostLoadGameServer_C::BndEvt__CreateServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.BndEvt__CreateServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.ExecuteUbergraph_BP_HostLoadGameServer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_HostLoadGameServer_C::ExecuteUbergraph_BP_HostLoadGameServer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostLoadGameServer.BP_HostLoadGameServer_C.ExecuteUbergraph_BP_HostLoadGameServer"));

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
