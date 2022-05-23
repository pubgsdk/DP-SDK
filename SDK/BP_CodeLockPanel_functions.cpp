// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CodeLockPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CodeLockPanel.BP_CodeLockPanel_C.EnterText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_CodeLockPanel_C::EnterText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.EnterText"));

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


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.UpdateSetCode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SetCode                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Lock                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CodeLockPanel_C::UpdateSetCode(bool SetCode, class AActor* Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.UpdateSetCode"));

	struct
	{
		bool                           SetCode;
		class AActor*                  Lock;
	} params = {};

	params.SetCode = SetCode;
	params.Lock = Lock;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.UpdateCodeMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_CodeLockPanel_C::UpdateCodeMessage(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.UpdateCodeMessage"));

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


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__Button_81_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__Button_81_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__Button_81_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__Clear_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__Clear_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__Clear_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__9_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__9_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__9_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__7_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__7_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__7_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__6_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__6_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__6_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__5_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__5_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__5_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_CodeLockPanel_C::BndEvt__0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.ExecuteUbergraph_BP_CodeLockPanel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CodeLockPanel_C::ExecuteUbergraph_BP_CodeLockPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLockPanel.BP_CodeLockPanel_C.ExecuteUbergraph_BP_CodeLockPanel"));

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
