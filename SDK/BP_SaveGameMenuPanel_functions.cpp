// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SaveGameMenuPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.DeleteExistingSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SaveGameMenuPanel_C::DeleteExistingSave(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.DeleteExistingSave"));

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


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.InitializeSavePanel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SaveGameMenuPanel_C::InitializeSavePanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.InitializeSavePanel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.SaveIsComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SaveGameMenuPanel_C::SaveIsComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.SaveIsComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.OverwriteCancelled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SaveGameMenuPanel_C::OverwriteCancelled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.OverwriteCancelled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.OverwriteSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SaveGameMenuPanel_C::OverwriteSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.OverwriteSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.CancelSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SaveGameMenuPanel_C::CancelSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.CancelSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.DeleteSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SaveGameMenuPanel_C::DeleteSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.DeleteSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.BndEvt__Button_284_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_SaveGameMenuPanel_C::BndEvt__Button_284_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.BndEvt__Button_284_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.BndEvt__Button_372_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_SaveGameMenuPanel_C::BndEvt__Button_372_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.BndEvt__Button_372_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.ExecuteUbergraph_BP_SaveGameMenuPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SaveGameMenuPanel_C::ExecuteUbergraph_BP_SaveGameMenuPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveGameMenuPanel.BP_SaveGameMenuPanel_C.ExecuteUbergraph_BP_SaveGameMenuPanel"));

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
