#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKHoldableInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKHoldableInterface.BP_SGKHoldableInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKHoldableInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKHoldableInterface.BP_SGKHoldableInterface_C"));
		return ptr;
	}


	void SGK_Aimed(bool* Aimed);
	void SGK_NewHeld(bool Held);
	void SGK_ClientToggleBuildMenu(bool Open);
	void SGK_HoldableRemoved();
	void SGK_Character();
	void SGK_MeleeCollisionToggle(bool TraceOn);
	void SGK_ResetHoldable();
	void SGK_ToggleFireMode();
	void SGK_ChamberWeaponAmmo();
	void SGK_AttachNewAttachment(class ABP_MasterAttachment_C* Attachment, const struct FS_InvItem& InvItem, TEnumAsByte<E_AttachmentType> AttachmentType);
	void SGK_ShowNewAttachment();
	void SGK_ClientReloadChecks();
	void SGK_ClientSecondaryAction(bool KeyDown);
	void SGK_ClientPrimaryAction(bool KeyDown);
	void SGK_SpawnAttachment(class UClass* /*ABP_MasterAttachment_C*/ Attachment);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void SGK_HoldableSkeletalMesh(class USkeletalMeshComponent** SkelMeshComp);
	void SGK_ServerSecondaryAction(bool KeyDown);
	void SGK_ServerPrimaryAction(bool KeyDown);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
