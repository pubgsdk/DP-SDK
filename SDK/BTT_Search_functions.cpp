// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_Search_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_Search.BTT_Search_C.ReceiveAbortAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_Search_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Search.BTT_Search_C.ReceiveAbortAI"));

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


// Function BTT_Search.BTT_Search_C.Receive Move Completed Bind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAIRequestID            RequestID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_Search_C::Receive_Move_Completed_Bind(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Search.BTT_Search_C.Receive Move Completed Bind"));

	struct
	{
		struct FAIRequestID            RequestID;
		TEnumAsByte<EPathFollowingResult> Result;
	} params = {};

	params.RequestID = RequestID;
	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Search.BTT_Search_C.Move Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_Search_C::Move_Completed(TEnumAsByte<EPathFollowingResult> Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Search.BTT_Search_C.Move Completed"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Search.BTT_Search_C.Finish Task
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBTT_Search_C::Finish_Task(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Search.BTT_Search_C.Finish Task"));

	struct
	{
		bool                           Success;
	} params = {};

	params.Success = Success;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Search.BTT_Search_C.Unbind Events
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_Search_C::Unbind_Events()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Search.BTT_Search_C.Unbind Events"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Search.BTT_Search_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_Search_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Search.BTT_Search_C.ReceiveExecute"));

	struct
	{
		class AActor*                  OwnerActor;
	} params = {};

	params.OwnerActor = OwnerActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Search.BTT_Search_C.ExecuteUbergraph_BTT_Search
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_Search_C::ExecuteUbergraph_BTT_Search(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Search.BTT_Search_C.ExecuteUbergraph_BTT_Search"));

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
