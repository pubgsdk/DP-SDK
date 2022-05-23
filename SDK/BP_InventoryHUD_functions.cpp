// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InventoryHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InventoryHUD.BP_InventoryHUD_C.RemoveHUD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryHUD_C::RemoveHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.RemoveHUD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.Get_Crosshair_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UBP_InventoryHUD_C::Get_Crosshair_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.Get_Crosshair_Visibility_1"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.LoadGameSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryHUD_C::LoadGameSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.LoadGameSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.RemoveRadialMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryHUD_C::RemoveRadialMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.RemoveRadialMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.CreateRadialMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UBP_MasterRadialMenu_C*/ Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::CreateRadialMenu(class UClass* /*UBP_MasterRadialMenu_C*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.CreateRadialMenu"));

	struct
	{
		class UClass* /*UBP_MasterRadialMenu_C*/ Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.ToggleDebugWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryHUD_C::ToggleDebugWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.ToggleDebugWindow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.StartCraftingListingTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CraftingRecipe                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::StartCraftingListingTimer(const struct FName& CraftingRecipe, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.StartCraftingListingTimer"));

	struct
	{
		struct FName                   CraftingRecipe;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.CraftingRecipe = CraftingRecipe;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.UpdateCraftingListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        QueueListing                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.UpdateCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        QueueListing;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.QueueListing = QueueListing;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.CreateCraftingListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        CraftingQueue                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::CreateCraftingListing(const struct FS_CraftingQueue& CraftingQueue, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.CreateCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        CraftingQueue;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.CraftingQueue = CraftingQueue;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.CloseInventoryScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryHUD_C::CloseInventoryScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.CloseInventoryScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UBP_InventoryHUD_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.GetVisibility_1"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.CreateContainerWindow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::CreateContainerWindow(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.CreateContainerWindow"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.CloseContainerWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::CloseContainerWindow(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.CloseContainerWindow"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.CreateAttachmentWindow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_WeaponInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::CreateAttachmentWindow(class UBP_WeaponInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.CreateAttachmentWindow"));

	struct
	{
		class UBP_WeaponInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.FindGridIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UBP_InventoryItemIcon_C*> IconWidget                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_InventoryHUD_C::FindGridIcon(class UBP_MasterInventory_C* Inventory, int Index, TArray<class UBP_InventoryItemIcon_C*>* IconWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.FindGridIcon"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		int                            Index;
		TArray<class UBP_InventoryItemIcon_C*> IconWidget;
	} params = {};

	params.Inventory = Inventory;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IconWidget != nullptr)
		*IconWidget = params.IconWidget;
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.RefreshAllItemIcons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryHUD_C::RefreshAllItemIcons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.RefreshAllItemIcons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.UpdateGameSettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C* Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::UpdateGameSettings(class UBP_SGKSettingsSaveData_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.UpdateGameSettings"));

	struct
	{
		class UBP_SGKSettingsSaveData_C* Save;
	} params = {};

	params.Save = Save;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_InventoryHUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryHUD.BP_InventoryHUD_C.ExecuteUbergraph_BP_InventoryHUD
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryHUD_C::ExecuteUbergraph_BP_InventoryHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryHUD.BP_InventoryHUD_C.ExecuteUbergraph_BP_InventoryHUD"));

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
