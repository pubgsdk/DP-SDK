// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ItemMenuButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ItemMenuButton.BP_ItemMenuButton_C.ActionSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemMenuButton_C::ActionSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemMenuButton.BP_ItemMenuButton_C.ActionSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.InitializeButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InventoryAction      Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_ItemOptionsMenu_C*   RightMouseMenu                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ItemMenuButton_C::InitializeButton(const struct FS_InventoryAction& Action, const struct FS_InvSlot& InvSlot, class UBP_ItemOptionsMenu_C* RightMouseMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemMenuButton.BP_ItemMenuButton_C.InitializeButton"));

	struct
	{
		struct FS_InventoryAction      Action;
		struct FS_InvSlot              InvSlot;
		class UBP_ItemOptionsMenu_C*   RightMouseMenu;
	} params = {};

	params.Action = Action;
	params.InvSlot = InvSlot;
	params.RightMouseMenu = RightMouseMenu;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ItemMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemMenuButton.BP_ItemMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ItemMenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemMenuButton.BP_ItemMenuButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.ExecuteUbergraph_BP_ItemMenuButton
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ItemMenuButton_C::ExecuteUbergraph_BP_ItemMenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemMenuButton.BP_ItemMenuButton_C.ExecuteUbergraph_BP_ItemMenuButton"));

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
