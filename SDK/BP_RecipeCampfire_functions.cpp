// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RecipeCampfire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RecipeCampfire.BP_RecipeCampfire_C.MulticastTurnedOnEffect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_RecipeCampfire_C::MulticastTurnedOnEffect(bool TurnedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RecipeCampfire.BP_RecipeCampfire_C.MulticastTurnedOnEffect"));

	struct
	{
		bool                           TurnedOn;
	} params = {};

	params.TurnedOn = TurnedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RecipeCampfire.BP_RecipeCampfire_C.SGK TurnedOnEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_RecipeCampfire_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RecipeCampfire.BP_RecipeCampfire_C.SGK TurnedOnEffect"));

	struct
	{
		bool                           TurnedOn;
	} params = {};

	params.TurnedOn = TurnedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RecipeCampfire.BP_RecipeCampfire_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_RecipeCampfire_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RecipeCampfire.BP_RecipeCampfire_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RecipeCampfire.BP_RecipeCampfire_C.ExecuteUbergraph_BP_RecipeCampfire
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_RecipeCampfire_C::ExecuteUbergraph_BP_RecipeCampfire(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RecipeCampfire.BP_RecipeCampfire_C.ExecuteUbergraph_BP_RecipeCampfire"));

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
