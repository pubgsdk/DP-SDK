// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VendorListing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendorListing.BP_VendorListing_C.ToggleTooltip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OpenTooltip                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_VendorListing_C::ToggleTooltip(bool OpenTooltip)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.ToggleTooltip"));

	struct
	{
		bool                           OpenTooltip;
	} params = {};

	params.OpenTooltip = OpenTooltip;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListing.BP_VendorListing_C.InitializeVenderBuyListing
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorBuy            VenderListing                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_VendorListing_C::InitializeVenderBuyListing(const struct FS_VendorBuy& VenderListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.InitializeVenderBuyListing"));

	struct
	{
		struct FS_VendorBuy            VenderListing;
	} params = {};

	params.VenderListing = VenderListing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListing.BP_VendorListing_C.InitializeVenderSellListing
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorSell           VenderSellListing              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_VendorListing_C::InitializeVenderSellListing(const struct FS_VendorSell& VenderSellListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.InitializeVenderSellListing"));

	struct
	{
		struct FS_VendorSell           VenderSellListing;
	} params = {};

	params.VenderSellListing = VenderSellListing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListing.BP_VendorListing_C.BndEvt__VenderAmountText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_VendorListing_C::BndEvt__VenderAmountText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.BndEvt__VenderAmountText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature"));

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


// Function BP_VendorListing.BP_VendorListing_C.BndEvt__EditableText_287_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorListing_C::BndEvt__EditableText_287_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.BndEvt__EditableText_287_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params = {};

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListing.BP_VendorListing_C.BndEvt__VenderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_VendorListing_C::BndEvt__VenderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.BndEvt__VenderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListing.BP_VendorListing_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_VendorListing_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListing.BP_VendorListing_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_VendorListing_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListing.BP_VendorListing_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_VendorListing_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListing.BP_VendorListing_C.ExecuteUbergraph_BP_VendorListing
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorListing_C::ExecuteUbergraph_BP_VendorListing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListing.BP_VendorListing_C.ExecuteUbergraph_BP_VendorListing"));

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
