// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BigBoyMilitary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BigBoyMilitary.BP_BigBoyMilitary_C.OnRep_Skin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BigBoyMilitary_C::OnRep_Skin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BigBoyMilitary.BP_BigBoyMilitary_C.OnRep_Skin"));

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
