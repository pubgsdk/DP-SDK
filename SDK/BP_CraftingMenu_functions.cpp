// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CraftingMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CraftingMenu.BP_CraftingMenu_C.AddCraftingQueueListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        NewQueueListing                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingMenu_C::AddCraftingQueueListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.AddCraftingQueueListing"));

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


// Function BP_CraftingMenu.BP_CraftingMenu_C.StartListingTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CraftingRecipe                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingMenu_C::StartListingTimer(const struct FName& CraftingRecipe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.StartListingTimer"));

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


// Function BP_CraftingMenu.BP_CraftingMenu_C.UpdateCraftingListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        QueueListing                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingMenu_C::UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.UpdateCraftingListing"));

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


// Function BP_CraftingMenu.BP_CraftingMenu_C.StringToEnum
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_RecipeCategory>  EnumValue                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingMenu_C::StringToEnum(const struct FString& SelectedItem, TEnumAsByte<E_RecipeCategory>* EnumValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.StringToEnum"));

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


// Function BP_CraftingMenu.BP_CraftingMenu_C.PopulateCraftingList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RecipeCategory>  RecipeCategory                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingMenu_C::PopulateCraftingList(TEnumAsByte<E_RecipeCategory> RecipeCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.PopulateCraftingList"));

	struct
	{
		TEnumAsByte<E_RecipeCategory>  RecipeCategory;
	} params = {};

	params.RecipeCategory = RecipeCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingMenu.BP_CraftingMenu_C.PopulateOptionMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingMenu_C::PopulateOptionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.PopulateOptionMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingMenu.BP_CraftingMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CraftingMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.PreConstruct"));

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


// Function BP_CraftingMenu.BP_CraftingMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_CraftingMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingMenu.BP_CraftingMenu_C.BndEvt__ComboBoxString_205_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingMenu_C::BndEvt__ComboBoxString_205_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.BndEvt__ComboBoxString_205_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature"));

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


// Function BP_CraftingMenu.BP_CraftingMenu_C.ExecuteUbergraph_BP_CraftingMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingMenu_C::ExecuteUbergraph_BP_CraftingMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingMenu.BP_CraftingMenu_C.ExecuteUbergraph_BP_CraftingMenu"));

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
