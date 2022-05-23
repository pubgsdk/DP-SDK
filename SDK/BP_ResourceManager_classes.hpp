#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ResourceManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResourceManager.BP_ResourceManager_C
// 0x0028 (0x0248 - 0x0220)
class ABP_ResourceManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<EDrawDebugTrace>                       GetInstanceTraceVisibility;                               // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	TArray<struct FVector>                             RemovedInstances;                                         // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ResourceManager.BP_ResourceManager_C"));
		return ptr;
	}


	void LoadResourceSaves(class UBP_SGKSaveGame_C* SaveGame);
	void ReplaceInstance(class UFoliageInstancedStaticMeshComponent* FoliageInstance, int InstanceIndex, bool Interacted, class UBP_PlayerInventory_C* PlayerInventory);
	bool GetInstanceAtTransform(const struct FTransform& Transform, class UStaticMesh* StaticMesh, class UBP_MasterResourceComponent_C** ResourceInstance, int* InstanceIndex);
	void RemoveInstance(const struct FTransform& Transform, class UStaticMesh* StaticMesh);
	void LoadResources(class UBP_SGKSaveGame_C* SaveGame);
	void ReceiveBeginPlay();
	void MulticastLoadSave(TArray<struct FVector> Resource);
	void MulticastRemoveInstance(const struct FTransform& InstanceTransform, class UStaticMesh* StaticMesh, bool ResourceDepleted);
	void ExecuteUbergraph_BP_ResourceManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
