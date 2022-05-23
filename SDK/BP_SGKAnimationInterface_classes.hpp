#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKAnimationInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKAnimationInterface.BP_SGKAnimationInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKAnimationInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKAnimationInterface.BP_SGKAnimationInterface_C"));
		return ptr;
	}


	void SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable);
	void SGK_EndChamberMontage();
	void SGK_UpdateAnimationState(TEnumAsByte<E_AnimationState> AnimationState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
