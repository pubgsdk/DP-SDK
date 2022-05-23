#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKInteractionInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKInteractionInterface.BP_SGKInteractionInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKInteractionInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKInteractionInterface.BP_SGKInteractionInterface_C"));
		return ptr;
	}


	void SGK_PlayerInProximity();
	void SGK_PlayerOutProximity();
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted);
	void SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	bool SGK_UpdateCode(const struct FText& Code);
	bool SGK_VerifyPlayer(const struct FText& Text);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	void SGK_ItemAmount(int* Amount);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	bool SGK_EndHighlight();
	bool SGK_StartHighlight();
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void SGK_InteractName(struct FText* InteractName);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_AllowInteraction(bool* AllowInteraction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
