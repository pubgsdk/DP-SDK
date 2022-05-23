// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BuildMenuOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.UpdateRotateOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BuildMenuOverlay_C::UpdateRotateOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.UpdateRotateOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.LowerOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BuildMenuOverlay_C::LowerOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.LowerOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.UpdateKeyOverlays
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BuildMenuOverlay_C::UpdateKeyOverlays()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.UpdateKeyOverlays"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_BuildMenuOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.ExecuteUbergraph_BP_BuildMenuOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_BuildMenuOverlay_C::ExecuteUbergraph_BP_BuildMenuOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.ExecuteUbergraph_BP_BuildMenuOverlay"));

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
