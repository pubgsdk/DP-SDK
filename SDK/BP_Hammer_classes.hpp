#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Hammer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Hammer.BP_Hammer_C
// 0x002C (0x0728 - 0x06FC)
class ABP_Hammer_C : public ABP_MasterMeleeWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0700(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0708(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                      BP_MeleeTraceSocket1;                                     // 0x0710(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                      BP_MeleeTraceSocket;                                      // 0x0718(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UUserWidget*                                 OverlayWidget;                                            // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Hammer.BP_Hammer_C"));
		return ptr;
	}


	void ToggleBuildMenu(bool Open);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void SGK_ClientPrimaryAction(bool KeyDown);
	void SGK_ResetHoldable();
	void SGK_ClientSecondaryAction(bool KeyDown);
	void ClientAddOverlayWidget();
	void ClientRemoveOverlayWidget();
	void ReceiveDestroyed();
	void SGK_NewHeld(bool Held);
	void SGK_ServerPrimaryAction(bool KeyDown);
	void ExecuteUbergraph_BP_Hammer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
