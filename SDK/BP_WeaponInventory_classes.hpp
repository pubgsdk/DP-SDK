#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponInventory.BP_WeaponInventory_C
// 0x025F (0x04F0 - 0x0291)
class UBP_WeaponInventory_C : public UBP_MasterItemInventory_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FS_AttachmentSlot                           MagazineItem;                                             // 0x02A0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_AttachmentSlot                           SightItem;                                                // 0x02E8(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_AttachmentSlot                           UnderbarrelItem;                                          // 0x0330(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_AttachmentSlot                           StockItem;                                                // 0x0378(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_AttachmentSlot                           MuzzleItem;                                               // 0x03C0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_AttachmentSlot                           HandguardItem;                                            // 0x0408(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_AttachmentSlot                           TriggerItem;                                              // 0x0450(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_AttachmentSlot                           FrontGripItem;                                            // 0x0498(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_FireModes>                           WeaponFireMode;                                           // 0x04E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	class ABP_MasterWeapon_C*                          Weapon;                                                   // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WeaponInventory.BP_WeaponInventory_C"));
		return ptr;
	}


	void AddAttachmentUsingPlayers();
	void ReplicateContainingInventories(bool Replicate);
	bool AmmoTypeCheck(const struct FS_InvItem& Item);
	void ChamberRoundFromMag();
	int TotalAmmo();
	void TotalMaxAmmo(int* MaxAmmo);
	bool NextRound(struct FS_InvSlot* Item);
	struct FS_AttachmentSlot SelectAttachmentItem(TEnumAsByte<E_AttachmentType> Attachment, bool* IsValid);
	void UpdateAllAttachments(TArray<struct FS_AttachmentSlot>* Attachments);
	void AddWeaponAttachment(const struct FS_InvItem& InvItem, bool PlayAnim);
	void UpdateAllClientAttachments();
	void RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment);
	void LoadSavedAttachments(TArray<struct FS_AttachmentSaveSlot>* Attachments, TArray<struct FS_OtherInvSaves>* OtherInventorys);
	void AddDefaultAttachments();
	void CreateAllAttachments();
	void UpdateAttachmentItem(TEnumAsByte<E_AttachmentType> AttachmentType, const struct FS_InvItem& AttachmentItem, class ABP_MasterAttachment_C* Attachment);
	void SGK_UpdateAllAttachments();
	void MulticastUpdateAttachmentItem(TEnumAsByte<E_AttachmentType> Attachment, const struct FS_InvItem& Item, class ABP_MasterAttachment_C* Actor);
	void ServerAddWeaponAttachment(const struct FS_InvItem& AttachmentItem, bool AnimationSocket);
	void SGK_LoadWeaponAttachments(bool Visible);
	void UpdateAttachmentUsingPlayers();
	void SGK_RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment);
	void SGK_ShowAttachments();
	void SGK_DestroyWeaponAttachments();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponInventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
