#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InteractivePlantFiberResourceComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C
// 0x000F (0x06B8 - 0x06A9)
class UBP_InteractivePlantFiberResourceComponent_C : public UBP_MasterResourceComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C"));
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
	void ExecuteUbergraph_BP_InteractivePlantFiberResourceComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
