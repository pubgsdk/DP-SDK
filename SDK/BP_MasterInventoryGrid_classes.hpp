#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterInventoryGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_MasterInventoryGrid.BP_MasterInventoryGrid_C
// 0x0038 (0x0298 - 0x0260)
class UBP_MasterInventoryGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class UBP_InventoryItemIcon_C*>             InvItemIcons;                                             // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UBP_InventoryCell_C*>                 InvCells;                                                 // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UBP_MasterInventory_C*                       GridInventory;                                            // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                       PlayerInventory;                                          // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_MasterInventoryGrid.BP_MasterInventoryGrid_C"));
		return ptr;
	}


	void SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets);
	void SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells);
	void ConstructInvGrid();
	void GetInvColumnsCount(int* Columns);
	void GetCellCount(int* InventoryCells);
	void ConstructInventoryItemIconArray(TArray<class UBP_InventoryItemIcon_C*>* Array);
	void ConstructInventoryCellArray(TArray<class UBP_InventoryCell_C*>* Array);
	void ClearInvGrid();
	void SetCustomSlots();
	void SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory);
	void Construct();
	void ExecuteUbergraph_BP_MasterInventoryGrid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
