// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterThrowableProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterThrowableProjectile.BP_MasterThrowableProjectile_C.InitializeThownProjectile
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterThrowableProjectile_C::InitializeThownProjectile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowableProjectile.BP_MasterThrowableProjectile_C.InitializeThownProjectile"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
