#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterInteractableResource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterInteractableResource.BP_MasterInteractableResource_C
// 0x0046 (0x02F8 - 0x02B2)
class ABP_MasterInteractableResource_C : public ABP_MasterResource_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x02B2(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FText                                       ActionText;                                               // 0x02C0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       InteractName;                                             // 0x02D8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class UAnimMontage*                                InteractAnimation;                                        // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterInteractableResource.BP_MasterInteractableResource_C"));
		return ptr;
	}


	void SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	bool SGK_UpdateCode(const struct FText& Code);
	bool SGK_VerifyPlayer(const struct FText& Text);
	void SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	bool SGK_StartHighlight();
	bool SGK_EndHighlight();
	void SGK_InteractName(struct FText* InteractName);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_ItemAmount(int* Amount);
	void SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_PlayerOutProximity();
	void SGK_PlayerInProximity();
	void ExecuteUbergraph_BP_MasterInteractableResource(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
