// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GroundCheckComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GroundCheckComponent.BP_GroundCheckComponent_C.SurfaceRestrictionsCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       Surface                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_GroundCheckComponent_C::SurfaceRestrictionsCheck(class UPhysicalMaterial* Surface)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundCheckComponent.BP_GroundCheckComponent_C.SurfaceRestrictionsCheck"));

	struct
	{
		class UPhysicalMaterial*       Surface;
		bool                           ReturnValue;
	} params = {};

	params.Surface = Surface;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_GroundCheckComponent.BP_GroundCheckComponent_C.GroundTrace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_GroundCheckComponent_C::GroundTrace(class AActor* Actor, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundCheckComponent.BP_GroundCheckComponent_C.GroundTrace"));

	struct
	{
		class AActor*                  Actor;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
