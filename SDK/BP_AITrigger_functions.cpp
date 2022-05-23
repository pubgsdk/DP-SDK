// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AITrigger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AITrigger.BP_AITrigger_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AITrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AITrigger.BP_AITrigger_C.ReceiveActorBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AITrigger.BP_AITrigger_C.ReceiveActorEndOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AITrigger_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AITrigger.BP_AITrigger_C.ReceiveActorEndOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AITrigger.BP_AITrigger_C.ExecuteUbergraph_BP_AITrigger
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AITrigger_C::ExecuteUbergraph_BP_AITrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AITrigger.BP_AITrigger_C.ExecuteUbergraph_BP_AITrigger"));

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


// Function BP_AITrigger.BP_AITrigger_C.Trigger Deactivated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  End_Overlap_Actor              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_AITrigger_C*         AI_Trigger                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AITrigger_C::Trigger_Deactivated__DelegateSignature(class AActor* End_Overlap_Actor, class ABP_AITrigger_C* AI_Trigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AITrigger.BP_AITrigger_C.Trigger Deactivated__DelegateSignature"));

	struct
	{
		class AActor*                  End_Overlap_Actor;
		class ABP_AITrigger_C*         AI_Trigger;
	} params = {};

	params.End_Overlap_Actor = End_Overlap_Actor;
	params.AI_Trigger = AI_Trigger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AITrigger.BP_AITrigger_C.Trigger Activated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Overlap_Actor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_AITrigger_C*         AI_Trigger                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AITrigger_C::Trigger_Activated__DelegateSignature(class AActor* Overlap_Actor, class ABP_AITrigger_C* AI_Trigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AITrigger.BP_AITrigger_C.Trigger Activated__DelegateSignature"));

	struct
	{
		class AActor*                  Overlap_Actor;
		class ABP_AITrigger_C*         AI_Trigger;
	} params = {};

	params.Overlap_Actor = Overlap_Actor;
	params.AI_Trigger = AI_Trigger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
