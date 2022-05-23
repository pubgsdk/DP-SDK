#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GlobalInventoryManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GlobalInventoryManager.BP_GlobalInventoryManager_C
// 0x0020 (0x0240 - 0x0220)
class ABP_GlobalInventoryManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TArray<class UBP_MasterInventory_C*>               ContainerInventories;                                     // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GlobalInventoryManager.BP_GlobalInventoryManager_C"));
		return ptr;
	}


	void DestroyItemInventory(class UBP_MasterInventory_C* MasterInventory);
	void ClearContainerInventories();
	void CreateNewItem(const struct FName& ItemId, int Amount, bool AddDefaults, bool AddStartingItems, bool Rotated, bool Replicated, struct FS_InvItem* NewItem);
	void CreateNewWeaponInventory(const struct FS_InvItem& Item, bool Replicate, bool AllowStartingItems, class UBP_WeaponInventory_C** WeaponInventory);
	void CreateNewInventory(const struct FS_InvItem& Item, bool Replicate, bool AllowStartingItems, class UBP_MasterInventory_C** Inventory);
	void InitializeGlobalInventory();
	void LoadSave(class UBP_SGKSaveGame_C* SaveGame);
	void ExecuteUbergraph_BP_GlobalInventoryManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
