// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VendorMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendorMenu.BP_VendorMenu_C.InitializeVenderMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   VenderInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorMenu_C::InitializeVenderMenu(class UBP_MasterInventory_C* VenderInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.InitializeVenderMenu"));

	struct
	{
		class UBP_MasterInventory_C*   VenderInventory;
	} params = {};

	params.VenderInventory = VenderInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorMenu.BP_VendorMenu_C.PopulateBuyList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RecipeCategory>  ListingCategory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorMenu_C::PopulateBuyList(TEnumAsByte<E_RecipeCategory> ListingCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.PopulateBuyList"));

	struct
	{
		TEnumAsByte<E_RecipeCategory>  ListingCategory;
	} params = {};

	params.ListingCategory = ListingCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorMenu.BP_VendorMenu_C.StringToCraftingCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_RecipeCategory>  EnumValue                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorMenu_C::StringToCraftingCategory(const struct FString& SelectedItem, TEnumAsByte<E_RecipeCategory>* EnumValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.StringToCraftingCategory"));

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


// Function BP_VendorMenu.BP_VendorMenu_C.PopulateSellCategorySelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_VendorMenu_C::PopulateSellCategorySelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.PopulateSellCategorySelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorMenu.BP_VendorMenu_C.PopulateBuyCategorySelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_VendorMenu_C::PopulateBuyCategorySelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.PopulateBuyCategorySelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorMenu.BP_VendorMenu_C.PopulateSellList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RecipeCategory>  ListingCategory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorMenu_C::PopulateSellList(TEnumAsByte<E_RecipeCategory> ListingCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.PopulateSellList"));

	struct
	{
		TEnumAsByte<E_RecipeCategory>  ListingCategory;
	} params = {};

	params.ListingCategory = ListingCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorMenu.BP_VendorMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_VendorMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.PreConstruct"));

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


// Function BP_VendorMenu.BP_VendorMenu_C.BndEvt__BuyCategorySelection_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorMenu_C::BndEvt__BuyCategorySelection_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.BndEvt__BuyCategorySelection_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature"));

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


// Function BP_VendorMenu.BP_VendorMenu_C.BndEvt__SellCategorySelection_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorMenu_C::BndEvt__SellCategorySelection_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.BndEvt__SellCategorySelection_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature"));

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


// Function BP_VendorMenu.BP_VendorMenu_C.ExecuteUbergraph_BP_VendorMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorMenu_C::ExecuteUbergraph_BP_VendorMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorMenu.BP_VendorMenu_C.ExecuteUbergraph_BP_VendorMenu"));

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
