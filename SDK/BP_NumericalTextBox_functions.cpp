// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_NumericalTextBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NumericalTextBox.BP_NumericalTextBox_C.AxisMapping
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AxisFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FInputAxisKeyMapping    Output                         (CPF_Parm, CPF_OutParm)

void UBP_NumericalTextBox_C::AxisMapping(const struct FName& Name, bool* AxisFound, struct FInputAxisKeyMapping* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_NumericalTextBox.BP_NumericalTextBox_C.AxisMapping"));

	struct
	{
		struct FName                   Name;
		bool                           AxisFound;
		struct FInputAxisKeyMapping    Output;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AxisFound != nullptr)
		*AxisFound = params.AxisFound;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_NumericalTextBox.BP_NumericalTextBox_C.UpdateSensitivity
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_NumericalTextBox_C::UpdateSensitivity(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_NumericalTextBox.BP_NumericalTextBox_C.UpdateSensitivity"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_NumericalTextBox.BP_NumericalTextBox_C.SliderUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_NumericalTextBox_C::SliderUpdated(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_NumericalTextBox.BP_NumericalTextBox_C.SliderUpdated"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_NumericalTextBox.BP_NumericalTextBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_NumericalTextBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_NumericalTextBox.BP_NumericalTextBox_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_NumericalTextBox.BP_NumericalTextBox_C.BndEvt__EditableTextBox_25_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_NumericalTextBox_C::BndEvt__EditableTextBox_25_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_NumericalTextBox.BP_NumericalTextBox_C.BndEvt__EditableTextBox_25_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_NumericalTextBox.BP_NumericalTextBox_C.ExecuteUbergraph_BP_NumericalTextBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_NumericalTextBox_C::ExecuteUbergraph_BP_NumericalTextBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_NumericalTextBox.BP_NumericalTextBox_C.ExecuteUbergraph_BP_NumericalTextBox"));

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
