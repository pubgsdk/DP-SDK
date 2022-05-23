#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Banshee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Banshee.BP_Banshee_C
// 0x0023 (0x0600 - 0x05DD)
class ABP_Banshee_C : public ABP_MasterAICharacter_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                   // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USkeletalMesh*                               Skin;                                                     // 0x05F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Banshee.BP_Banshee_C"));
		return ptr;
	}


	void SGK_InteractName(struct FText* InteractName);
	void DamageOverlappingActors();
	void OnRep_Skin();
	void ReceiveBeginPlay();
	void StopAudioAfterDeath();
	void ExecuteUbergraph_BP_Banshee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
