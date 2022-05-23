// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_RangeMoveTo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.FindTargets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Closest_Attack_Target          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RangeMoveTo_C::FindTargets(class AActor** Closest_Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.FindTargets"));

	struct
	{
		class AActor*                  Closest_Attack_Target;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Closest_Attack_Target != nullptr)
		*Closest_Attack_Target = params.Closest_Attack_Target;
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.RangePointCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBTT_RangeMoveTo_C::RangePointCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.RangePointCheck"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.OnMoveFinished_7A65B2F349C6BC3AB244928B96D9CD50
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAIController*           AIController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RangeMoveTo_C::OnMoveFinished_7A65B2F349C6BC3AB244928B96D9CD50(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.OnMoveFinished_7A65B2F349C6BC3AB244928B96D9CD50"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> Result;
		class AAIController*           AIController;
	} params = {};

	params.Result = Result;
	params.AIController = AIController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.OnRequestFailed_7A65B2F349C6BC3AB244928B96D9CD50
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_RangeMoveTo_C::OnRequestFailed_7A65B2F349C6BC3AB244928B96D9CD50()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.OnRequestFailed_7A65B2F349C6BC3AB244928B96D9CD50"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.OnMoveFinished_8269FC034D647349BDAC0EBEBAD2540F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAIController*           AIController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RangeMoveTo_C::OnMoveFinished_8269FC034D647349BDAC0EBEBAD2540F(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.OnMoveFinished_8269FC034D647349BDAC0EBEBAD2540F"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> Result;
		class AAIController*           AIController;
	} params = {};

	params.Result = Result;
	params.AIController = AIController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.OnRequestFailed_8269FC034D647349BDAC0EBEBAD2540F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_RangeMoveTo_C::OnRequestFailed_8269FC034D647349BDAC0EBEBAD2540F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.OnRequestFailed_8269FC034D647349BDAC0EBEBAD2540F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.Run Range Move EQS
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_RangeMoveTo_C::Run_Range_Move_EQS()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.Run Range Move EQS"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.Range Move EQS Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RangeMoveTo_C::Range_Move_EQS_Done(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.Range Move EQS Done"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params = {};

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.Run Cover Move EQS
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_RangeMoveTo_C::Run_Cover_Move_EQS()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.Run Cover Move EQS"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.Cover Move EQS Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RangeMoveTo_C::Cover_Move_EQS_Done(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.Cover Move EQS Done"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params = {};

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RangeMoveTo_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.ReceiveExecuteAI"));

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


// Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.ExecuteUbergraph_BTT_RangeMoveTo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RangeMoveTo_C::ExecuteUbergraph_BTT_RangeMoveTo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RangeMoveTo.BTT_RangeMoveTo_C.ExecuteUbergraph_BTT_RangeMoveTo"));

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
