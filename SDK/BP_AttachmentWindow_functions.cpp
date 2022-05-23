// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AttachmentWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AttachmentWindow.BP_AttachmentWindow_C.UpdateAllSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AttachmentWindow_C::UpdateAllSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.UpdateAllSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.HideUnneedSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AttachmentWindow_C::HideUnneedSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.HideUnneedSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.SelectAttachmentSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_AttachmentType>  AttachmentType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_AttachmentSlot_C*    AttachmentSlot                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AttachmentWindow_C::SelectAttachmentSlot(TEnumAsByte<E_AttachmentType> AttachmentType, class UBP_AttachmentSlot_C** AttachmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.SelectAttachmentSlot"));

	struct
	{
		TEnumAsByte<E_AttachmentType>  AttachmentType;
		class UBP_AttachmentSlot_C*    AttachmentSlot;
	} params = {};

	params.AttachmentType = AttachmentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AttachmentSlot != nullptr)
		*AttachmentSlot = params.AttachmentSlot;
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.SetUpWindow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_WeaponInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_InventoryHUD_C*      HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AttachmentWindow_C::SetUpWindow(class UBP_WeaponInventory_C* Inventory, class UBP_InventoryHUD_C* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.SetUpWindow"));

	struct
	{
		class UBP_WeaponInventory_C*   Inventory;
		class UBP_InventoryHUD_C*      HUD;
	} params = {};

	params.Inventory = Inventory;
	params.HUD = HUD;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnHeaderMouseButtonDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_AttachmentWindow_C::OnHeaderMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnHeaderMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_AttachmentWindow_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnMouseMove"));

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


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_AttachmentWindow_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnMouseButtonUp"));

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


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.InitializeWindow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_WeaponInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_InventoryHUD_C*      HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AttachmentWindow_C::InitializeWindow(class UBP_WeaponInventory_C* Inventory, class UBP_InventoryHUD_C* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.InitializeWindow"));

	struct
	{
		class UBP_WeaponInventory_C*   Inventory;
		class UBP_InventoryHUD_C*      HUD;
	} params = {};

	params.Inventory = Inventory;
	params.HUD = HUD;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_AttachmentWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_AttachmentWindow_C::BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.ExecuteUbergraph_BP_AttachmentWindow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AttachmentWindow_C::ExecuteUbergraph_BP_AttachmentWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AttachmentWindow.BP_AttachmentWindow_C.ExecuteUbergraph_BP_AttachmentWindow"));

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
