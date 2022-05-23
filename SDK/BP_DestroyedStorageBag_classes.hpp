#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DestroyedStorageBag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DestroyedStorageBag.BP_DestroyedStorageBag_C
// 0x0048 (0x0268 - 0x0220)
class ABP_DestroyedStorageBag_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBP_MasterInventory_C*                       BP_MasterInventory;                                       // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       InteractName;                                             // 0x0238(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       OpenInventoryText;                                        // 0x0250(0x0018) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DestroyedStorageBag.BP_DestroyedStorageBag_C"));
		return ptr;
	}


	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_InteractName(struct FText* InteractName);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	bool SGK_StartHighlight();
	bool SGK_EndHighlight();
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	void SGK_ItemAmount(int* Amount);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	void SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted);
	bool SGK_VerifyPlayer(const struct FText& Text);
	bool SGK_UpdateCode(const struct FText& Code);
	void SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_PlayerInProximity();
	void SGK_PlayerOutProximity();
	void KillMeGod();
	void ExecuteUbergraph_BP_DestroyedStorageBag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
