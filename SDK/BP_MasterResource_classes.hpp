#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterResource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterResource.BP_MasterResource_C
// 0x0092 (0x02B2 - 0x0220)
class ABP_MasterResource_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        ResourceMesh;                                             // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FallOverEffectTimeline_FallAlpha_81B251874129A4E58BF80D8AABB24E75;// 0x0230(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    FallOverEffectTimeline__Direction_81B251874129A4E58BF80D8AABB24E75;// 0x0234(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FallOverEffectTimeline;                                   // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_ResourceItems>                    Items;                                                    // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                MinResourceCount;                                         // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxResourceCount;                                         // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    EndRotation;                                              // 0x0258(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    StartRotation;                                            // 0x0264(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTimerHandle                                HideResourceTimer;                                        // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Depleted;                                                 // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	struct FTimerHandle                                RespawnTimer;                                             // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CurrentResourceCount;                                     // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ResourceDepletedEffect>              ResourceDepletedEffect;                                   // 0x028C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	class UBP_PlayerInventory_C*                       LastHitPlayerInventory;                                   // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HideResourceMeshTime;                                     // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class USoundBase*                                  ResourceDepletedSound;                                    // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DoesResourceRespawn;                                      // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	float                                              RespawnTime;                                              // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DebugMode;                                                // 0x02B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               InEffect;                                                 // 0x02B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterResource.BP_MasterResource_C"));
		return ptr;
	}


	void ResourceSetup();
	void LoadResourceSaveGame(class UBP_SGKSaveGame_C* SaveGame);
	void RemoveInstance(const struct FTransform& InTransform, class UStaticMesh* StaticMesh);
	bool GetInstanceAtTransform(const struct FTransform& InTransform, class UStaticMesh* StaticMesh, class UBP_MasterResourceComponent_C** ResourceInstance, int* InstanceIndex);
	void StartRespawnTimer();
	void RespawnResource();
	void CollectResource(int CollectAmount, class UBP_PlayerInventory_C* PlayerInventory, bool* ResourceDepleted);
	void StartHideResourceTimer();
	void ShowResource();
	void HideResource();
	void FallOverEffectTimeline__FinishedFunc();
	void FallOverEffectTimeline__UpdateFunc();
	void MulticastResetRotation(const struct FRotator& Rotation);
	void MulticastPlayDepletedSound();
	void FallOverEffect(const struct FVector& CharacterLocation);
	void RunResourceDepleted();
	void Load(class UBP_SGKSaveGame_C* SaveGame);
	void MulticastSetCollision(bool EnableCollision);
	void SGKSave(class UBP_SGKSaveGame_C* Save);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterResource(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
