// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_OptionsMenuSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_OptionsMenuSlot_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnMouseButtonDoubleClick"));

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleWeaponOptionsMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_WeaponSlot           WeaponSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_OptionsMenuSlot_C::ToggleWeaponOptionsMenu(bool Open, const struct FS_WeaponSlot& WeaponSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleWeaponOptionsMenu"));

	struct
	{
		bool                           Open;
		struct FS_WeaponSlot           WeaponSlot;
	} params = {};

	params.Open = Open;
	params.WeaponSlot = WeaponSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentWeaponOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UBP_OptionsMenuSlot_C::OnGetMenuContentWeaponOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentWeaponOptions"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentItemOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UBP_OptionsMenuSlot_C::OnGetMenuContentItemOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentItemOptions"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleAttachmentOptionsMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AttachmentSlot       AttachmentSlot                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_OptionsMenuSlot_C::ToggleAttachmentOptionsMenu(const struct FS_AttachmentSlot& AttachmentSlot, bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleAttachmentOptionsMenu"));

	struct
	{
		struct FS_AttachmentSlot       AttachmentSlot;
		bool                           Open;
	} params = {};

	params.AttachmentSlot = AttachmentSlot;
	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleGearOptionsMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_EquipmentSlot        EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_OptionsMenuSlot_C::ToggleGearOptionsMenu(bool Open, const struct FS_EquipmentSlot& EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleGearOptionsMenu"));

	struct
	{
		bool                           Open;
		struct FS_EquipmentSlot        EquipmentSlot;
	} params = {};

	params.Open = Open;
	params.EquipmentSlot = EquipmentSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleCraftingOptionMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   CraftingRecipe                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_OptionsMenuSlot_C::ToggleCraftingOptionMenu(bool Open, const struct FName& CraftingRecipe, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleCraftingOptionMenu"));

	struct
	{
		bool                           Open;
		struct FName                   CraftingRecipe;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.Open = Open;
	params.CraftingRecipe = CraftingRecipe;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleOptionsMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvSlot              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_OptionsMenuSlot_C::ToggleOptionsMenu(bool Open, const struct FS_InvSlot& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ToggleOptionsMenu"));

	struct
	{
		bool                           Open;
		struct FS_InvSlot              Item;
	} params = {};

	params.Open = Open;
	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentAttachmentOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UBP_OptionsMenuSlot_C::OnGetMenuContentAttachmentOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentAttachmentOptions"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentGearOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UBP_OptionsMenuSlot_C::OnGetMenuContentGearOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentGearOptions"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentCraftingOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UBP_OptionsMenuSlot_C::OnGetMenuContentCraftingOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnGetMenuContentCraftingOptions"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_OptionsMenuSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.OnMouseButtonDown"));

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


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.InventoryToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_OptionsMenuSlot_C::InventoryToggled(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.InventoryToggled"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_OptionsMenuSlot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ExecuteUbergraph_BP_OptionsMenuSlot
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_OptionsMenuSlot_C::ExecuteUbergraph_BP_OptionsMenuSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OptionsMenuSlot.BP_OptionsMenuSlot_C.ExecuteUbergraph_BP_OptionsMenuSlot"));

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
