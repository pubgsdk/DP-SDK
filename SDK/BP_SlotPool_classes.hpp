#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SlotPool_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_SlotPool.BP_SlotPool_C
// 0x0048 (0x02A8 - 0x0260)
class UBP_SlotPool_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UInvalidationBox*                            InvalidationBox_12;                                       // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                PoolSize;                                                 // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CreateChunkDivider;                                       // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimeBetweenSlotCreationChunks;                            // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	TArray<class UBP_InventoryCell_C*>                 CellPool;                                                 // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UBP_InventoryItemIcon_C*>             ItemIconPool;                                             // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FVector2D                                   IconSize;                                                 // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_SlotPool.BP_SlotPool_C"));
		return ptr;
	}


	void AddToItemIconPool(int Size);
	void ReturnMultipleItemIconsToPool(TArray<class UBP_InventoryItemIcon_C*>* Cells);
	void ReturnItemIconToPool(class UBP_InventoryItemIcon_C* ItemIcon);
	void GetItemIconFromPool(class UBP_InventoryItemIcon_C** ItemIcon);
	void GetCellFromPool(class UBP_InventoryCell_C** Cell);
	void AddToCellPool(int Size);
	void ReturnMultipleCellsToPool(TArray<class UBP_InventoryCell_C*>* Cells);
	void ReturnCellToPool(class UBP_InventoryCell_C* Cell);
	void Construct();
	void ExecuteUbergraph_BP_SlotPool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
