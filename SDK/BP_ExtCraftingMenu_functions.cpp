// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ExtCraftingMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.SGK InvItemSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryItemIcon_C*> ItemInvWidgets                 (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_ExtCraftingMenu_C::SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.SGK InvItemSlots"));

	struct
	{
		TArray<class UBP_InventoryItemIcon_C*> ItemInvWidgets;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemInvWidgets != nullptr)
		*ItemInvWidgets = params.ItemInvWidgets;
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.SGK CellSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryCell_C*> Cells                          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_ExtCraftingMenu_C::SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.SGK CellSlots"));

	struct
	{
		TArray<class UBP_InventoryCell_C*> Cells;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Cells != nullptr)
		*Cells = params.Cells;
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.UpdateWeightText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::UpdateWeightText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.UpdateWeightText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.StartListingTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CraftingRecipe                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::StartListingTimer(const struct FName& CraftingRecipe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.StartListingTimer"));

	struct
	{
		struct FName                   CraftingRecipe;
	} params = {};

	params.CraftingRecipe = CraftingRecipe;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.GetOnButtonText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBP_ExtCraftingMenu_C::GetOnButtonText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.GetOnButtonText"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.PopulateCraftingList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RecipeCategory>  RecipeCrafting                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::PopulateCraftingList(TEnumAsByte<E_RecipeCategory> RecipeCrafting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.PopulateCraftingList"));

	struct
	{
		TEnumAsByte<E_RecipeCategory>  RecipeCrafting;
	} params = {};

	params.RecipeCrafting = RecipeCrafting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.PauseCraftingQueue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::PauseCraftingQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.PauseCraftingQueue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.ResumeCraftingQueue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::ResumeCraftingQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.ResumeCraftingQueue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.InitizlizeCraftingSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::InitizlizeCraftingSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.InitizlizeCraftingSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.AddCraftingQueueListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        NewQueueListing                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::AddCraftingQueueListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.AddCraftingQueueListing"));

	struct
	{
		struct FS_CraftingQueue        NewQueueListing;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.NewQueueListing = NewQueueListing;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.UpdateCraftingListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        QueueListing                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.UpdateCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        QueueListing;
	} params = {};

	params.QueueListing = QueueListing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.StringToEnum
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_RecipeCategory>  EnumValue                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::StringToEnum(const struct FString& SelectedItem, TEnumAsByte<E_RecipeCategory>* EnumValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.StringToEnum"));

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<E_RecipeCategory>  EnumValue;
	} params = {};

	params.SelectedItem = SelectedItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EnumValue != nullptr)
		*EnumValue = params.EnumValue;
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.PopulateOptionMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::PopulateOptionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.PopulateOptionMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.CreateNewInventoryPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::CreateNewInventoryPanel(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.CreateNewInventoryPanel"));

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


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.CreateFuelInvSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::CreateFuelInvSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.CreateFuelInvSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.CreateStorageInvSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::CreateStorageInvSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.CreateStorageInvSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.ClearInventoryPanels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::ClearInventoryPanels()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.ClearInventoryPanels"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.SGK ConstructGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   GridInventory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.SGK ConstructGrid"));

	struct
	{
		class UBP_MasterInventory_C*   GridInventory;
	} params = {};

	params.GridInventory = GridInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.UpdateFuelTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FuelTimer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::UpdateFuelTime(int FuelTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.UpdateFuelTime"));

	struct
	{
		int                            FuelTimer;
	} params = {};

	params.FuelTimer = FuelTimer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_ExtCraftingMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.InitializeExtCraftingMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::InitializeExtCraftingMenu(class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.InitializeExtCraftingMenu"));

	struct
	{
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ExtCraftingMenu_C::BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.BndEvt__ComboBoxString_205_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::BndEvt__ComboBoxString_205_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.BndEvt__ComboBoxString_205_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature"));

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<ESelectInfo>       SelectionType;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.ExecuteUbergraph_BP_ExtCraftingMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCraftingMenu_C::ExecuteUbergraph_BP_ExtCraftingMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCraftingMenu.BP_ExtCraftingMenu_C.ExecuteUbergraph_BP_ExtCraftingMenu"));

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
