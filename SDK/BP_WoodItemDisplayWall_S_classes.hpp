#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WoodItemDisplayWall_S_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C
// 0x0030 (0x0318 - 0x02E8)
class ABP_WoodItemDisplayWall_S_C : public ABP_MasterStorageBuildPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        Slot1;                                                    // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*                  BP_GroundCheckComponent;                                  // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               BuildCollision;                                           // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         MeshSlots;                                                // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C"));
		return ptr;
	}


	void UpdateDisplaySlots(bool Reset);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void ReceiveBeginPlay();
	void SGK_TurnedOnEffect(bool TurnedOn);
	void ExecuteUbergraph_BP_WoodItemDisplayWall_S(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
