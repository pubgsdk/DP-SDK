// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterInventoryGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.SGK InvItemSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryItemIcon_C*> ItemInvWidgets                 (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_MasterInventoryGrid_C::SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.SGK InvItemSlots"));

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


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.SGK CellSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryCell_C*> Cells                          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_MasterInventoryGrid_C::SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.SGK CellSlots"));

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


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ConstructInvGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventoryGrid_C::ConstructInvGrid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ConstructInvGrid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.GetInvColumnsCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Columns                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventoryGrid_C::GetInvColumnsCount(int* Columns)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.GetInvColumnsCount"));

	struct
	{
		int                            Columns;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Columns != nullptr)
		*Columns = params.Columns;
}


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.GetCellCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InventoryCells                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventoryGrid_C::GetCellCount(int* InventoryCells)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.GetCellCount"));

	struct
	{
		int                            InventoryCells;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InventoryCells != nullptr)
		*InventoryCells = params.InventoryCells;
}


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ConstructInventoryItemIconArray
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryItemIcon_C*> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_MasterInventoryGrid_C::ConstructInventoryItemIconArray(TArray<class UBP_InventoryItemIcon_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ConstructInventoryItemIconArray"));

	struct
	{
		TArray<class UBP_InventoryItemIcon_C*> Array;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ConstructInventoryCellArray
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryCell_C*> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_MasterInventoryGrid_C::ConstructInventoryCellArray(TArray<class UBP_InventoryCell_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ConstructInventoryCellArray"));

	struct
	{
		TArray<class UBP_InventoryCell_C*> Array;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ClearInvGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventoryGrid_C::ClearInvGrid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ClearInvGrid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.SetCustomSlots
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventoryGrid_C::SetCustomSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.SetCustomSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.SGK ConstructGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   GridInventory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventoryGrid_C::SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.SGK ConstructGrid"));

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


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MasterInventoryGrid_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ExecuteUbergraph_BP_MasterInventoryGrid
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventoryGrid_C::ExecuteUbergraph_BP_MasterInventoryGrid(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventoryGrid.BP_MasterInventoryGrid_C.ExecuteUbergraph_BP_MasterInventoryGrid"));

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
