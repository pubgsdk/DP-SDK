#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterInventory.BP_MasterInventory_C
// 0x01D0 (0x0280 - 0x00B0)
class UBP_MasterInventory_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class UBP_PlayerInventory_C*>               UsingPlayers;                                             // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	float                                              CurrentWeight;                                            // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ItemCount;                                                // 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_CraftingQueue>                    CraftingQueue;                                            // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FName                                       NewCraftingRecipe;                                        // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CraftingAmount;                                           // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ListingFound;                                             // 0x00EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	struct FS_CraftingQueue                            FoundCraftingListing;                                     // 0x00F0(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Crafting;                                                 // 0x0104(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FS_CraftingQueue                            FinishCraftingListing;                                    // 0x0108(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       NewRecipe;                                                // 0x011C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       CurrentCraftingRecipe;                                    // 0x0124(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FTimerHandle                                CraftingTimer;                                            // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BlockCrafting;                                            // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	class UBP_SGKSaveGame_C*                           UMISaveGame;                                              // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_SaveSystem_C*                            SaveSystem;                                               // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SaveLoaded;                                               // 0x0150(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasRandomItemsSpawned;                                    // 0x0151(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0152(0x0006) MISSED OFFSET
	TArray<struct FS_InvSlot>                          Inventory;                                                // 0x0158(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UBP_MasterInventory_C*                       ParentInventory;                                          // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    UpdateWeightUI;                                           // 0x0170(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FS_ContainerDetails                         InventoryDetails;                                         // 0x0180(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class UBP_MasterInventory_C*                       EquippedInventory;                                        // 0x01F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_CraftingDetails                          CraftingDetails;                                          // 0x01F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01F9(0x0003) MISSED OFFSET
	float                                              CraftingRequiredActorCheckSize;                           // 0x01FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DebugCraftingActorCheckSize;                              // 0x0200(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	struct FS_SpawnSettings                            RandomItemSpawning;                                       // 0x0208(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseDestructionBag;                                        // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShouldSpawnBag;                                           // 0x0279(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x2];                                       // 0x027A(0x0002) MISSED OFFSET
	float                                              DecayMultiplier;                                          // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterInventory.BP_MasterInventory_C"));
		return ptr;
	}


	void SGK_AllowStartingItems(bool* AllowStartingItems);
	void SGK_SelfItem(struct FS_InvItem* SelfItem);
	void ItemDecay();
	void DestroyContainingInventories();
	void CloseOtherPlayerTabs(class UBP_PlayerInventory_C* Player);
	void StartItemEquipment();
	void ReplicateContainingInventories(bool Replicate);
	void UpdateInvSlots(const struct FS_InvItem& InvItem, TArray<struct FS_InvSlot>* InvSlots, TArray<struct FS_InvSlot>* UpdatedSlots);
	void UpdateAllPlayersRootItems(bool FullUpdate);
	void SpawnItems();
	void SpawnDestructionBag();
	void AddStartingItems(bool* Return);
	void AllItems(TArray<struct FS_InvSlot>* RootSlots);
	void ContainerRestrictionCheck(const struct FName& ItemId, bool* Can_Add);
	void ClearInventory();
	void TotalItemAmount(const struct FS_InvItem& InvItem, int* TotalAmount);
	void RemoveItemAmount(const struct FS_InvSlot& InvSlot, int Amount, bool SpecialSlot, bool* ItemRemoved);
	void SetNewSlotItem(const struct FS_InvSlot& RootSlot, const struct FS_InvItem& NewItem, bool SpecialSlot);
	void ClearInventoryItems();
	void LoadSavedInventory(TArray<struct FS_InvSaveSlot>* LoadedInventory, TArray<struct FS_OtherInvSaves>* OtherInv);
	void SaveComponentData(class UBP_SGKSaveGame_C* SaveGame);
	void LoadInventoryData(const struct FS_StorageSave& S_StorageSave);
	void LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete);
	void InGameLoadComponentData(class UBP_SGKSaveGame_C* Save);
	void DecreaseItemDurability(const struct FS_InvSlot& InvSlot, float DecreaseAmount);
	void DecreaseWeaponDurability(const struct FS_WeaponSlot& WeaponSlot, float DecreaseAmount);
	bool FindCraftingListing(const struct FName& Recipe, struct FS_CraftingQueue* CraftingListing);
	bool RequiredActorCraftingCheck(const struct FName& Recipe);
	void UpdateCraftingTimes();
	void CancelCraftingRecipe(const struct FS_CraftingQueue& CraftingListing);
	void CraftingError();
	void CraftItem(const struct FName& Recipe, int Amount);
	void CreateNewCraftingListing(const struct FName& Recipe, int Amount, struct FS_CraftingQueue* Output);
	void UpdateCraftingListing(const struct FS_CraftingQueue& CraftingListing, int AdditionalAmount, struct FS_CraftingQueue* Output);
	void CheckRecipeCost(const struct FName& Recipe, int Amount, bool RemoveItems, bool* CanCraft);
	void SetItemAmount(const struct FS_InvSlot& InvSlot, int SetAmount, bool ChangeCount, bool Special);
	void RemoveItem(const struct FS_InvSlot& InvSlot, bool RemoveWeight, bool RemoveInvAmount, bool SpecialSlot);
	void SearchForItem(const struct FDataTableRowHandle& Item, int Amount, bool RemoveItems, bool* ItemFound, struct FS_InvSlot* InvSlot);
	void OnRep_ItemCount();
	void ItemLimitCheck(int ItemCount, bool* AllowAdd, int* AddCount, int* Remaining);
	void RemainingItemCount(int* RemainingItemLimit);
	void ChangeItemCount(int Amount, bool Add);
	void AddWeight(float Weight, bool AddToParent, class UBP_MasterInventory_C* Stop_Inventory);
	void ParentWeightCheck(float AdditionalWeight, class UBP_MasterInventory_C* ParentIgnore, bool* CanAdd, int* CurrentCount);
	bool AttemptToAddWeight(const struct FS_InvItem& Item, int Amount, bool UseAllWeight, bool CheckOnly);
	void RemoveItemWeight(const struct FS_InvItem& Item, int Amount, bool RemoveAll, bool RemoveParentWeight, class UBP_MasterInventory_C* MasterInventory);
	void AddItemWeight(const struct FS_InvItem& Item, int Amount, bool AddAll, bool AddToParent, class UBP_MasterInventory_C* Stop_Inventory);
	void OnRep_CurrentWeight();
	void AddWeightCheck(float ItemWeight, bool CheckParent, class UBP_MasterInventory_C* ParentIgnore, bool* CanAdd, int* ItemCount);
	void RemainingFreeWeight(float* RemainingFreeWeight);
	void WeightCheck(const struct FS_InvItem& Item, int Amount, bool UseAllWeight, bool CheckParent, class UBP_MasterInventory_C* IgnoreParent, bool* ExceedsMaxWeight);
	void RemoveWeight(float Weight, bool RemoveParentWeight, class UBP_MasterInventory_C* StopInventory);
	void ClearParentInventory();
	void IsItemInParentInv(const struct FS_InvSlot& StartInvSlot, const struct FS_InvSlot& EndInvSlot, bool* IsInInv);
	void UpdateParentInventory(class UBP_MasterInventory_C* Inventory);
	void AttemptToAddItemAmount(const struct FS_InvSlot& InvSlot, int AddAmount, bool* Remainder, int* RemainderAmount);
	void UpdateSlotOnUsingPlayers(const struct FS_InvSlot& InvSlot, int Height, int Width, bool Was_Rotated);
	void ClearUsingPlayers();
	void ReplaceUsingPlayers(TArray<class UBP_PlayerInventory_C*>* Players);
	void RemoveUsingPlayer(class UBP_PlayerInventory_C* Player_Inv);
	void AddUsingPlayer(class UBP_PlayerInventory_C* Player_Inv);
	void FindFreeStackSpace(const struct FS_InvItem& InvItem, class UBP_MasterInventory_C* StopInv, bool* Reaminder, struct FS_InvItem* ReaminderInvItem);
	void AddItem(const struct FS_InvItem& Item, bool StackSearch, bool ShowNotifications, bool* RemainingItem, struct FS_InvItem* RemainingInvItem, struct FS_InvSlotID* NewItemSlot);
	void ConstructSlots();
	void ConstructItemSpawnList(TArray<struct FS_SpawnerList>* SpawnList);
	void FindEmptySlots(bool AllowRotation, const struct FName& ItemId, bool WeightCheck, int WeightCheckAmount, bool* SpaceFound, bool* Rotated, TArray<struct FS_InvSlot>* FoundSlots);
	void EmptyInventory(bool DestroyItems, class UBP_MasterInventory_C* NewItemInventory);
	void SpawnItemAtLocation(const struct FTransform& Transform, const struct FS_InvItem& InvItem);
	void SGK_LoadWeaponAttachments(bool Visible);
	void SGK_ShowAttachments();
	void SGK_RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment);
	void SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem);
	void SGK_ItemMovedInInventory();
	void SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot);
	void SGK_ToggleComponent();
	void SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot);
	void SGK_ItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType);
	void SGK_UpdateAllAttachments();
	void SGK_DestroyWeaponAttachments();
	void SGK_UpdateCharacterYaw(class APawn* Pawn);
	void ServerCancelCraftingListing(const struct FS_CraftingQueue& CancelQueue);
	void ServerUpdateClientCraftingListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory);
	void ServerStartClientListingTimer(const struct FName& CraftingRecipe, class UBP_MasterInventory_C* CraftingInventory);
	void ServerAddClientCraftingListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory);
	void FinishedCraftingTimer(const struct FName& Recipe, int Amount);
	void ResetCraftingTimer();
	void CheckCraftingRequirements(const struct FName& Recipe, int Amount);
	void ServerCreateNewListingCheck(const struct FName& RecipeName, int Amount);
	void ReceiveBeginPlay();
	void OwnerDestroyed(class AActor* DestroyedActor);
	void ServerSpawnDestructionBag();
	void CreateNotificationInChild(const struct FS_NotificationDetails& NotificationDetails);
	void SGKSave(class UBP_SGKSaveGame_C* Save);
	void InitializeComponentSaveSystem();
	void LoadComponent(class UBP_SGKSaveGame_C* SaveGame);
	void CheckItemSpawn();
	void ServerUpdateRootItems();
	void MulticastSetDetails(const struct FS_ContainerDetails& Details);
	void ServerUpdateItemSlots(class UBP_PlayerInventory_C* PlayerInventory);
	void AddPanelToUsingPlayers();
	void MulticastForceItemCount(int ItemCount);
	void ClientUpdateInventory(TArray<struct FS_InvSlot> Inventory);
	void ServerForceRootItemUpdate();
	void ServerEmptyInventory(class UBP_MasterInventory_C* StartInventory);
	void ServerAddItem(const struct FS_InvItem& Item);
	void ExecuteUbergraph_BP_MasterInventory(int EntryPoint);
	void UpdateWeightUI__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
