#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterClothingAttchment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterClothingAttchment.BP_MasterClothingAttchment_C
// 0x01D0 (0x03F0 - 0x0220)
class ABP_MasterClothingAttchment_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FS_InvItem                                  EquipmentItem;                                            // 0x0230(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FS_EquipmentDetails                         EquipmentDetails;                                         // 0x0260(0x0170) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class AActor*                                      AttachActor;                                              // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACharacter*                                  OwningCharacter;                                          // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>                 FirstPersonMeshes;                                        // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterClothingAttchment.BP_MasterClothingAttchment_C"));
		return ptr;
	}


	void AddFirstPersonSkeletalMeshes();
	void FirstPersonVisibility(bool Hide);
	void AddFirstPersonStaticMeshes();
	void FirstPersonMode();
	void HideComponents();
	void InitializeClothing();
	void AddThirdPersonSkeletalMeshes();
	void ThirdPersonMode();
	void AddThirdPersonStaticMeshes();
	void ClientThirdPersonMeshes();
	void OwnerDestroyed(class AActor* DestroyedActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterClothingAttchment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
