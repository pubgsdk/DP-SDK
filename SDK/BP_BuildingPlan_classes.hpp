#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BuildingPlan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuildingPlan.BP_BuildingPlan_C
// 0x0018 (0x0450 - 0x0438)
class ABP_BuildingPlan_C : public ABP_MasterHoldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_BuildMenuOverlay_C*                      OverlayWidget;                                            // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BuildingPlan.BP_BuildingPlan_C"));
		return ptr;
	}


	void ToggleBuildMenu(bool Open);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void SGK_ServerSecondaryAction(bool KeyDown);
	void SGK_ClientSecondaryAction(bool KeyDown);
	void SGK_ClientPrimaryAction(bool KeyDown);
	void SGK_NewHeld(bool Held);
	void SGK_ResetHoldable();
	void ClientRemoveOverlayWidget();
	void ClientAddOverlayWidget();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_BuildingPlan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
