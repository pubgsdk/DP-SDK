// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FishingRod_WI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FishingRod_WI.BP_FishingRod_WI_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_FishingRod_WI_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishingRod_WI.BP_FishingRod_WI_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FishingRod_WI.BP_FishingRod_WI_C.ExecuteUbergraph_BP_FishingRod_WI
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_FishingRod_WI_C::ExecuteUbergraph_BP_FishingRod_WI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishingRod_WI.BP_FishingRod_WI_C.ExecuteUbergraph_BP_FishingRod_WI"));

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
