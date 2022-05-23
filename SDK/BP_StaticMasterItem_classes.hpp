#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StaticMasterItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StaticMasterItem.BP_StaticMasterItem_C
// 0x00A1 (0x02C1 - 0x0220)
class ABP_StaticMasterItem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         Item;                                                     // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	int                                                ItemAmount;                                               // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RefreshItem;                                              // 0x0244(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	struct FS_InvItem                                  InvItem;                                                  // 0x0248(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               Spawned;                                                  // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               Dropped;                                                  // 0x0279(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               SaveGameLoaded;                                           // 0x027A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x5];                                       // 0x027B(0x0005) MISSED OFFSET
	struct FS_InvItem                                  TempItem;                                                 // 0x0280(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class ABP_SaveSystem_C*                            SaveGame;                                                 // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseDroppedItemDestroyTimer;                               // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              DropDestroyTime;                                          // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DontKillMeOnLoad;                                         // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StaticMasterItem.BP_StaticMasterItem_C"));
		return ptr;
	}


	void SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	bool SGK_UpdateCode(const struct FText& Code);
	bool SGK_VerifyPlayer(const struct FText& Text);
	void SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	void SGK_ItemAmount(int* Amount);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_InteractName(struct FText* InteractName);
	bool SGK_EndHighlight();
	bool SGK_StartHighlight();
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	bool ActionCheck(TEnumAsByte<E_WorldActions> ActionType, TArray<struct FS_WorldAction>* ItemActions);
	void ItemDecay();
	void ItemOffsets();
	void InteractActions(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void Hold(class UBP_PlayerInventory_C* PlayerInventory);
	void Learn(class UBP_PlayerInventory_C* PlayerInventory);
	void Consume(class UBP_PlayerInventory_C* PlayerInventory);
	void Open(class UBP_PlayerInventory_C* PlayerInventory);
	void EquipWeapon(class UBP_PlayerInventory_C* PlayerInventory);
	void EquipClothing(class UBP_PlayerInventory_C* PlayerInventory);
	void Pickup(class UBP_PlayerInventory_C* PlayerInventory);
	void Interact(class UBP_PlayerInventory_C* PlayerInventory);
	void UserConstructionScript();
	void SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void DropDestroyTimer();
	void Reset();
	void SGK_PlayerOutProximity();
	void SGK_PlayerInProximity();
	void SGKSave(class UBP_SGKSaveGame_C* Save);
	void SaveNotValid();
	void LoadItem(class UBP_SGKSaveGame_C* SaveGame);
	void CreateNewItem();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_StaticMasterItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
