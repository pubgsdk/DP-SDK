#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKInventoryInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKInventoryInterface.BP_SGKInventoryInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKInventoryInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKInventoryInterface.BP_SGKInventoryInterface_C"));
		return ptr;
	}


	void SGK_UpdateCharacterYaw(class APawn* Pawn);
	void SGK_DestroyWeaponAttachments();
	void SGK_AllowStartingItems(bool* AllowStartingItems);
	void SGK_SelfItem(struct FS_InvItem* SelfItem);
	void SGK_UpdateAllAttachments();
	void SGK_ItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType);
	void SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot);
	void SGK_ToggleComponent();
	void SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot);
	void SGK_ItemMovedInInventory();
	void SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem);
	void SGK_RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment);
	void SGK_ShowAttachments();
	void SGK_LoadWeaponAttachments(bool Visible);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
