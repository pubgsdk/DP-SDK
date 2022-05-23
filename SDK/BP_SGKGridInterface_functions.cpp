// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGridInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK InvItemSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryItemIcon_C*> ItemInvWidgets                 (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKGridInterface_C::SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK InvItemSlots"));

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


// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK ConstructGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   GridInventory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGridInterface_C::SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK ConstructGrid"));

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


// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK CellSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryCell_C*> Cells                          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKGridInterface_C::SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK CellSlots"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
