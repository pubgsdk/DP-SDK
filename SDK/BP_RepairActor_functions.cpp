// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RepairActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RepairActor.BP_RepairActor_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Actor_Name                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_RepairActor_C::Initialize(const struct FText& Actor_Name, bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RepairActor.BP_RepairActor_C.Initialize"));

	struct
	{
		struct FText                   Actor_Name;
		bool                           Enabled;
	} params = {};

	params.Actor_Name = Actor_Name;
	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
