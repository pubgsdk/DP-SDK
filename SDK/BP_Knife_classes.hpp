#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Knife_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Knife.BP_Knife_C
// 0x001C (0x0718 - 0x06FC)
class ABP_Knife_C : public ABP_MasterMeleeWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	class UBP_MeleeTraceSocket_C*                      MeleeTraceSocket_02;                                      // 0x0700(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                      MeleeTraceSocket_01;                                      // 0x0708(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0710(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Knife.BP_Knife_C"));
		return ptr;
	}


	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
