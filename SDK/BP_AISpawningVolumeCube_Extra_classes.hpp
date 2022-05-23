#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AISpawningVolumeCube_Extra_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AISpawningVolumeCube_Extra.BP_AISpawningVolumeCube_Extra_C
// 0x0010 (0x0340 - 0x0330)
class ABP_AISpawningVolumeCube_Extra_C : public ABP_AISpawningVolumeCube_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               Secondary_Activation;                                     // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AISpawningVolumeCube_Extra.BP_AISpawningVolumeCube_Extra_C"));
		return ptr;
	}


	void BndEvt__Secondary_Activation_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Reset_Prox();
	void ExecuteUbergraph_BP_AISpawningVolumeCube_Extra(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
