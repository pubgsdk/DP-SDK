#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ShadowDummy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShadowDummy.BP_ShadowDummy_C
// 0x0008 (0x0228 - 0x0220)
class ABP_ShadowDummy_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0220(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShadowDummy.BP_ShadowDummy_C"));
		return ptr;
	}


	void SpawnMeshes(class AActor* Target);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
