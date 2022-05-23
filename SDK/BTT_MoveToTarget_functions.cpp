// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_MoveToTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_MoveToTarget.BTT_MoveToTarget_C.OnFail_84A68DC84799129FA9D3CB8CDD9DCF81
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_MoveToTarget_C::OnFail_84A68DC84799129FA9D3CB8CDD9DCF81(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_MoveToTarget.BTT_MoveToTarget_C.OnFail_84A68DC84799129FA9D3CB8CDD9DCF81"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params = {};

	params.MovementResult = MovementResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_MoveToTarget.BTT_MoveToTarget_C.OnSuccess_84A68DC84799129FA9D3CB8CDD9DCF81
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_MoveToTarget_C::OnSuccess_84A68DC84799129FA9D3CB8CDD9DCF81(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_MoveToTarget.BTT_MoveToTarget_C.OnSuccess_84A68DC84799129FA9D3CB8CDD9DCF81"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params = {};

	params.MovementResult = MovementResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_MoveToTarget.BTT_MoveToTarget_C.OnFail_6494FF294D8ADC9BA008B09A5FC47558
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_MoveToTarget_C::OnFail_6494FF294D8ADC9BA008B09A5FC47558(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_MoveToTarget.BTT_MoveToTarget_C.OnFail_6494FF294D8ADC9BA008B09A5FC47558"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params = {};

	params.MovementResult = MovementResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_MoveToTarget.BTT_MoveToTarget_C.OnSuccess_6494FF294D8ADC9BA008B09A5FC47558
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_MoveToTarget_C::OnSuccess_6494FF294D8ADC9BA008B09A5FC47558(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_MoveToTarget.BTT_MoveToTarget_C.OnSuccess_6494FF294D8ADC9BA008B09A5FC47558"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params = {};

	params.MovementResult = MovementResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_MoveToTarget.BTT_MoveToTarget_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_MoveToTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_MoveToTarget.BTT_MoveToTarget_C.ReceiveExecuteAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_MoveToTarget.BTT_MoveToTarget_C.Move
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_MoveToTarget_C::Move()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_MoveToTarget.BTT_MoveToTarget_C.Move"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_MoveToTarget.BTT_MoveToTarget_C.MoveToCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_MoveToTarget_C::MoveToCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_MoveToTarget.BTT_MoveToTarget_C.MoveToCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_MoveToTarget.BTT_MoveToTarget_C.ExecuteUbergraph_BTT_MoveToTarget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_MoveToTarget_C::ExecuteUbergraph_BTT_MoveToTarget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_MoveToTarget.BTT_MoveToTarget_C.ExecuteUbergraph_BTT_MoveToTarget"));

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
