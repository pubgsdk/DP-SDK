// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_BeginFlee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_BeginFlee.BTT_BeginFlee_C.SortFleeArray
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (CPF_Parm, CPF_OutParm)

void UBTT_BeginFlee_C::SortFleeArray(TArray<class AActor*>* Actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_BeginFlee.BTT_BeginFlee_C.SortFleeArray"));

	struct
	{
		TArray<class AActor*>          Actors;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BTT_BeginFlee.BTT_BeginFlee_C.Check If Seen
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Seen                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_BeginFlee_C::Check_If_Seen(bool* Seen, class AActor** Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_BeginFlee.BTT_BeginFlee_C.Check If Seen"));

	struct
	{
		bool                           Seen;
		class AActor*                  Actor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Seen != nullptr)
		*Seen = params.Seen;
	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BTT_BeginFlee.BTT_BeginFlee_C.EQS Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_BeginFlee_C::EQS_Done(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_BeginFlee.BTT_BeginFlee_C.EQS Done"));

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


// Function BTT_BeginFlee.BTT_BeginFlee_C.ReceiveAbortAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_BeginFlee_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_BeginFlee.BTT_BeginFlee_C.ReceiveAbortAI"));

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


// Function BTT_BeginFlee.BTT_BeginFlee_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_BeginFlee_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_BeginFlee.BTT_BeginFlee_C.ReceiveExecute"));

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


// Function BTT_BeginFlee.BTT_BeginFlee_C.ExecuteUbergraph_BTT_BeginFlee
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_BeginFlee_C::ExecuteUbergraph_BTT_BeginFlee(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_BeginFlee.BTT_BeginFlee_C.ExecuteUbergraph_BTT_BeginFlee"));

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
