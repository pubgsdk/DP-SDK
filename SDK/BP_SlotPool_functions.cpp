// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SlotPool_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SlotPool.BP_SlotPool_C.AddToItemIconPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SlotPool_C::AddToItemIconPool(int Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.AddToItemIconPool"));

	struct
	{
		int                            Size;
	} params = {};

	params.Size = Size;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SlotPool.BP_SlotPool_C.ReturnMultipleItemIconsToPool
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryItemIcon_C*> Cells                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_SlotPool_C::ReturnMultipleItemIconsToPool(TArray<class UBP_InventoryItemIcon_C*>* Cells)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.ReturnMultipleItemIconsToPool"));

	struct
	{
		TArray<class UBP_InventoryItemIcon_C*> Cells;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Cells != nullptr)
		*Cells = params.Cells;
}


// Function BP_SlotPool.BP_SlotPool_C.ReturnItemIconToPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_InventoryItemIcon_C* ItemIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SlotPool_C::ReturnItemIconToPool(class UBP_InventoryItemIcon_C* ItemIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.ReturnItemIconToPool"));

	struct
	{
		class UBP_InventoryItemIcon_C* ItemIcon;
	} params = {};

	params.ItemIcon = ItemIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SlotPool.BP_SlotPool_C.GetItemIconFromPool
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_InventoryItemIcon_C* ItemIcon                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SlotPool_C::GetItemIconFromPool(class UBP_InventoryItemIcon_C** ItemIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.GetItemIconFromPool"));

	struct
	{
		class UBP_InventoryItemIcon_C* ItemIcon;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemIcon != nullptr)
		*ItemIcon = params.ItemIcon;
}


// Function BP_SlotPool.BP_SlotPool_C.GetCellFromPool
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_InventoryCell_C*     Cell                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SlotPool_C::GetCellFromPool(class UBP_InventoryCell_C** Cell)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.GetCellFromPool"));

	struct
	{
		class UBP_InventoryCell_C*     Cell;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Cell != nullptr)
		*Cell = params.Cell;
}


// Function BP_SlotPool.BP_SlotPool_C.AddToCellPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SlotPool_C::AddToCellPool(int Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.AddToCellPool"));

	struct
	{
		int                            Size;
	} params = {};

	params.Size = Size;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SlotPool.BP_SlotPool_C.ReturnMultipleCellsToPool
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryCell_C*> Cells                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_SlotPool_C::ReturnMultipleCellsToPool(TArray<class UBP_InventoryCell_C*>* Cells)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.ReturnMultipleCellsToPool"));

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


// Function BP_SlotPool.BP_SlotPool_C.ReturnCellToPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_InventoryCell_C*     Cell                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SlotPool_C::ReturnCellToPool(class UBP_InventoryCell_C* Cell)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.ReturnCellToPool"));

	struct
	{
		class UBP_InventoryCell_C*     Cell;
	} params = {};

	params.Cell = Cell;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SlotPool.BP_SlotPool_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_SlotPool_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SlotPool.BP_SlotPool_C.ExecuteUbergraph_BP_SlotPool
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SlotPool_C::ExecuteUbergraph_BP_SlotPool(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SlotPool.BP_SlotPool_C.ExecuteUbergraph_BP_SlotPool"));

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
