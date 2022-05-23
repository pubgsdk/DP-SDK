// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterExplosiveThrowable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterExplosiveThrowable.BP_MasterExplosiveThrowable_C.InitializeThrowProjectile
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterExplosiveThrowable_C::InitializeThrowProjectile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterExplosiveThrowable.BP_MasterExplosiveThrowable_C.InitializeThrowProjectile"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterExplosiveThrowable.BP_MasterExplosiveThrowable_C.ExecuteUbergraph_BP_MasterExplosiveThrowable
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterExplosiveThrowable_C::ExecuteUbergraph_BP_MasterExplosiveThrowable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterExplosiveThrowable.BP_MasterExplosiveThrowable_C.ExecuteUbergraph_BP_MasterExplosiveThrowable"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
