// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ResolutionSetting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ResolutionSetting.BP_ResolutionSetting_C.CurrentSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FIntPoint               Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ResolutionSetting_C::CurrentSelection(struct FIntPoint* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.CurrentSelection"));

	struct
	{
		struct FIntPoint               Output;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.PopulateResArray
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ResolutionSetting_C::PopulateResArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.PopulateResArray"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.CurrentSettingValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ResolutionSetting_C::CurrentSettingValue(int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.CurrentSettingValue"));

	struct
	{
		int                            Index;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.ResetSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ResolutionSetting_C::ResetSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.ResetSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.ChangeSettingValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ResolutionSetting_C::ChangeSettingValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.ChangeSettingValue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.NextOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ResolutionSetting_C::NextOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.NextOption"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.PreviousOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ResolutionSetting_C::PreviousOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.PreviousOption"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ResolutionSetting_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ResolutionSetting_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.WindowModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ResolutionSetting_C::WindowModeChanged(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.WindowModeChanged"));

	struct
	{
		int                            Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ResolutionSetting_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResolutionSetting.BP_ResolutionSetting_C.ExecuteUbergraph_BP_ResolutionSetting
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ResolutionSetting_C::ExecuteUbergraph_BP_ResolutionSetting(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResolutionSetting.BP_ResolutionSetting_C.ExecuteUbergraph_BP_ResolutionSetting"));

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
