#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QC_AttackTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass QC_AttackTarget.QC_AttackTarget_C
// 0x0000 (0x0030 - 0x0030)
class UQC_AttackTarget_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass QC_AttackTarget.QC_AttackTarget_C"));
		return ptr;
	}


	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
