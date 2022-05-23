// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Keybind_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Keybind.BP_Keybind_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_Keybind_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.OnMouseWheel"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_Keybind.BP_Keybind_C.InitializeKeybind
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BindName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsAxis                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Keybind_C::InitializeKeybind(const struct FName& BindName, bool IsAxis)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.InitializeKeybind"));

	struct
	{
		struct FName                   BindName;
		bool                           IsAxis;
	} params = {};

	params.BindName = BindName;
	params.IsAxis = IsAxis;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.FindAxisBind
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionBindName                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BindIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           BindFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FInputAxisKeyMapping    ActionBind                     (CPF_Parm, CPF_OutParm)

void UBP_Keybind_C::FindAxisBind(const struct FName& ActionBindName, int BindIndex, bool* BindFound, struct FInputAxisKeyMapping* ActionBind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.FindAxisBind"));

	struct
	{
		struct FName                   ActionBindName;
		int                            BindIndex;
		bool                           BindFound;
		struct FInputAxisKeyMapping    ActionBind;
	} params = {};

	params.ActionBindName = ActionBindName;
	params.BindIndex = BindIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BindFound != nullptr)
		*BindFound = params.BindFound;
	if (ActionBind != nullptr)
		*ActionBind = params.ActionBind;
}


// Function BP_Keybind.BP_Keybind_C.FindActionBind
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionBindName                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BindIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           BindFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FInputActionKeyMapping  ActionBind                     (CPF_Parm, CPF_OutParm)

void UBP_Keybind_C::FindActionBind(const struct FName& ActionBindName, int BindIndex, bool* BindFound, struct FInputActionKeyMapping* ActionBind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.FindActionBind"));

	struct
	{
		struct FName                   ActionBindName;
		int                            BindIndex;
		bool                           BindFound;
		struct FInputActionKeyMapping  ActionBind;
	} params = {};

	params.ActionBindName = ActionBindName;
	params.BindIndex = BindIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BindFound != nullptr)
		*BindFound = params.BindFound;
	if (ActionBind != nullptr)
		*ActionBind = params.ActionBind;
}


// Function BP_Keybind.BP_Keybind_C.RebindAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// int                            RebindIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Keybind_C::RebindAction(const struct FInputChord& Key, int RebindIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.RebindAction"));

	struct
	{
		struct FInputChord             Key;
		int                            RebindIndex;
	} params = {};

	params.Key = Key;
	params.RebindIndex = RebindIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.RebindAxis
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// int                            RebindIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Keybind_C::RebindAxis(const struct FInputChord& Key, int RebindIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.RebindAxis"));

	struct
	{
		struct FInputChord             Key;
		int                            RebindIndex;
	} params = {};

	params.Key = Key;
	params.RebindIndex = RebindIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_Keybind_C::BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_Keybind_C::BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.KeySelect1Scroll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Up                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Keybind_C::KeySelect1Scroll(bool Up)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.KeySelect1Scroll"));

	struct
	{
		bool                           Up;
	} params = {};

	params.Up = Up;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.KeySelect2Scroll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Up                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Keybind_C::KeySelect2Scroll(bool Up)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.KeySelect2Scroll"));

	struct
	{
		bool                           Up;
	} params = {};

	params.Up = Up;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_Keybind_C::BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature"));

	struct
	{
		struct FInputChord             SelectedKey;
	} params = {};

	params.SelectedKey = SelectedKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_Keybind_C::BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature"));

	struct
	{
		struct FInputChord             SelectedKey;
	} params = {};

	params.SelectedKey = SelectedKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Keybind.BP_Keybind_C.ExecuteUbergraph_BP_Keybind
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Keybind_C::ExecuteUbergraph_BP_Keybind(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Keybind.BP_Keybind_C.ExecuteUbergraph_BP_Keybind"));

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
