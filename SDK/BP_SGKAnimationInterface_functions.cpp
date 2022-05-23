// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKAnimationInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK UpdateHoldableAnimations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterHoldable_C*    Holdable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKAnimationInterface_C::SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK UpdateHoldableAnimations"));

	struct
	{
		class ABP_MasterHoldable_C*    Holdable;
	} params = {};

	params.Holdable = Holdable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK EndChamberMontage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKAnimationInterface_C::SGK_EndChamberMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK EndChamberMontage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK UpdateAnimationState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AnimationState>  AnimationState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKAnimationInterface_C::SGK_UpdateAnimationState(TEnumAsByte<E_AnimationState> AnimationState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK UpdateAnimationState"));

	struct
	{
		TEnumAsByte<E_AnimationState>  AnimationState;
	} params = {};

	params.AnimationState = AnimationState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
