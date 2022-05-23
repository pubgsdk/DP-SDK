// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HostNewGameServer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HostNewGameServer.BP_HostNewGameServer_C.FindExistingSave
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_HostNewGameServer_C::FindExistingSave(const struct FString& SlotName, bool* SaveFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.FindExistingSave"));

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


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.DeleteExistingSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_HostNewGameServer_C::DeleteExistingSave(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.DeleteExistingSave"));

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


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.OnFailure_9C54F2E54105D7EFE8B336A4D13BD371
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostNewGameServer_C::OnFailure_9C54F2E54105D7EFE8B336A4D13BD371()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.OnFailure_9C54F2E54105D7EFE8B336A4D13BD371"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.OnSuccess_9C54F2E54105D7EFE8B336A4D13BD371
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostNewGameServer_C::OnSuccess_9C54F2E54105D7EFE8B336A4D13BD371()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.OnSuccess_9C54F2E54105D7EFE8B336A4D13BD371"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.OnFailure_E7A5D904424575FC81B93D92C5708C2C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostNewGameServer_C::OnFailure_E7A5D904424575FC81B93D92C5708C2C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.OnFailure_E7A5D904424575FC81B93D92C5708C2C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.OnSuccess_E7A5D904424575FC81B93D92C5708C2C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostNewGameServer_C::OnSuccess_E7A5D904424575FC81B93D92C5708C2C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.OnSuccess_E7A5D904424575FC81B93D92C5708C2C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.YesSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostNewGameServer_C::YesSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.YesSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.NoSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_HostNewGameServer_C::NoSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.NoSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.BndEvt__CreateServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_HostNewGameServer_C::BndEvt__CreateServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.BndEvt__CreateServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_HostNewGameServer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.PreConstruct"));

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


// Function BP_HostNewGameServer.BP_HostNewGameServer_C.ExecuteUbergraph_BP_HostNewGameServer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_HostNewGameServer_C::ExecuteUbergraph_BP_HostNewGameServer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HostNewGameServer.BP_HostNewGameServer_C.ExecuteUbergraph_BP_HostNewGameServer"));

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
