// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ScalerSetting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ScalerSetting.BP_ScalerSetting_C.NextOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ScalerSetting_C::NextOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.NextOption"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.CurrentSettingValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UBP_ScalerSetting_C::CurrentSettingValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.CurrentSettingValue"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.ResetSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ScalerSetting_C::ResetSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.ResetSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.ChangeSettingValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ScalerSetting_C::ChangeSettingValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.ChangeSettingValue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.CurrentSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_Scaler               Output                         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_ScalerSetting_C::CurrentSelection(struct FS_Scaler* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.CurrentSelection"));

	struct
	{
		struct FS_Scaler               Output;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.PreviousOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ScalerSetting_C::PreviousOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.PreviousOption"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ScalerSetting_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ScalerSetting_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ScalerSetting_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.ExecuteUbergraph_BP_ScalerSetting
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ScalerSetting_C::ExecuteUbergraph_BP_ScalerSetting(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.ExecuteUbergraph_BP_ScalerSetting"));

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


// Function BP_ScalerSetting.BP_ScalerSetting_C.ValueChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ScalerSetting_C::ValueChanged__DelegateSignature(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ScalerSetting.BP_ScalerSetting_C.ValueChanged__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
