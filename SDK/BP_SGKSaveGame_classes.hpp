#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKSaveGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKSaveGame.BP_SGKSaveGame_C
// 0x0040 (0x0068 - 0x0028)
class UBP_SGKSaveGame_C : public USaveGame
{
public:
	TArray<struct FS_PlayerSave>                       PlayerSaves;                                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_LevelSaveData>                    LevelSaveData;                                            // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_MasterItemSave>                   TempItemSaveData;                                         // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FMulticastScriptDelegate                    SaveInventory;                                            // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKSaveGame.BP_SGKSaveGame_C"));
		return ptr;
	}


	void FindCookingSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_CookingSave* Array_Element);
	bool FindItemSpawnerSaveData(class ABP_MasterItemSpawner_C* ItemSpawner, TArray<struct FS_ItemSpawnerSave>* ItemSpawnerSaves, struct FS_MasterItemSave* Item);
	bool FindPlayerSave(const struct FText& PlayerName, struct FS_PlayerSave* PlayerSave);
	void FindSpecificResourceSaveData(const struct FVector& ResourceLocation, const struct FString& LevelName, bool* ResourceRemoved, int* ResourceAmount);
	void FindEquipmentSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_EquipmentInvSave* Array_Element);
	void FindVenderSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_VendorSave* Array_Element);
	void FindResourceSaveData(const struct FString& LevelName, bool* SaveFound, TArray<struct FS_ResourcesSaves>* RemovedResources);
	void FindCraftingSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_CraftingSave* Array_Element);
	void SelectLevelSaveData(const struct FString& LevelName, bool* SaveFound, struct FS_LevelSaveData* LevelSaveData);
	void DeletePlayerSave(const struct FText& PlayerName);
	void ClearLevelSaveData(const struct FString& LevelName);
	void SavePlayerInventory(class UBP_PlayerInventory_C* PlayerInventory, const struct FString& Level);
	void GatherInventoryData(TArray<struct FS_InvSlot>* Inventory, TArray<struct FS_InvSave>* Otherinventories, TArray<struct FS_InvSaveSlot>* InventorySaveData, TArray<struct FS_InvSave>* NewOtherInventories);
	void SaveResourceInstanceData(const struct FVector& RemovedInstances, int Amount, const struct FString& LevelName);
	void GatherAttachmentData(class UBP_WeaponInventory_C* WeaponInventory, TArray<struct FS_InvSave>* OtherInventorySaves, TArray<struct FS_InvSave>* OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>* AttachmentSaveSlotsL1);
	void SetLevelData(const struct FS_LevelSaveData& SaveData);
	void PrepareCookingSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData);
	void PrepareCraftingSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData);
	void PrepareEquipmentSaveData(class UBP_EquipmentInventory_C* EquipmentInventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData);
	void PrepareVenderSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData);
	void PrepareStorageSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData);
	void FindStorageSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_StorageSave* Array_Element);
	void SaveItem(const struct FTransform& Transform, const struct FS_InvItem& Item, const struct FString& LevelName);
	void SaveItemSpawners(class ABP_MasterItemSpawner_C* ItemSpawner, const struct FString& LevelName);
	void SaveWeaponSlots(class UBP_EquipmentInventory_C* EquipmentInventory, TArray<struct FS_InvSave>* OtherInventorySaves, TArray<struct FS_WeaponSlotSave>* WeaponSaveSlots, TArray<struct FS_InvSave>* NewOtherInventories);
	void SaveEquipmentSlots(class UBP_EquipmentInventory_C* EquipmentInventory, TArray<struct FS_InvSave>* OtherInventorySaves, TArray<struct FS_EquipmentSlotSave>* EquipmentSaveSlots, TArray<struct FS_InvSave>* NewOtherInventories);
	void SaveInventory__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
