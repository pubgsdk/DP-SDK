#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterThrowableProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterThrowableProjectile.BP_MasterThrowableProjectile_C
// 0x0010 (0x0230 - 0x0220)
class ABP_MasterThrowableProjectile_C : public AActor
{
public:
	class USphereComponent*                            ProjectileCollision;                                      // 0x0220(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        ProjectileMesh;                                           // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterThrowableProjectile.BP_MasterThrowableProjectile_C"));
		return ptr;
	}


	void InitializeThownProjectile();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
