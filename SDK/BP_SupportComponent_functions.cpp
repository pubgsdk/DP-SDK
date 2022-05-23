// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SupportComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SupportComponent.BP_SupportComponent_C.SupportCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SupportFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<E_BuildType>       BuildType                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  HitActor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SupportComponent_C::SupportCheck(bool* SupportFound, TEnumAsByte<E_BuildType>* BuildType, class AActor** HitActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SupportComponent.BP_SupportComponent_C.SupportCheck"));

	struct
	{
		bool                           SupportFound;
		TEnumAsByte<E_BuildType>       BuildType;
		class AActor*                  HitActor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SupportFound != nullptr)
		*SupportFound = params.SupportFound;
	if (BuildType != nullptr)
		*BuildType = params.BuildType;
	if (HitActor != nullptr)
		*HitActor = params.HitActor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
