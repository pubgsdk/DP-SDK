// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_AtWayPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_AtWayPoint.BTT_AtWayPoint_C.Next Montage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_AtWayPoint_C::Next_Montage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AtWayPoint.BTT_AtWayPoint_C.Next Montage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_AtWayPoint.BTT_AtWayPoint_C.ReceiveAbort
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_AtWayPoint_C::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AtWayPoint.BTT_AtWayPoint_C.ReceiveAbort"));

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


// Function BTT_AtWayPoint.BTT_AtWayPoint_C.End Way Point Wait
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_AtWayPoint_C::End_Way_Point_Wait()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AtWayPoint.BTT_AtWayPoint_C.End Way Point Wait"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_AtWayPoint.BTT_AtWayPoint_C.Get Next Montage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_AtWayPoint_C::Get_Next_Montage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AtWayPoint.BTT_AtWayPoint_C.Get Next Montage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_AtWayPoint.BTT_AtWayPoint_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_AtWayPoint_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AtWayPoint.BTT_AtWayPoint_C.ReceiveExecute"));

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


// Function BTT_AtWayPoint.BTT_AtWayPoint_C.ExecuteUbergraph_BTT_AtWayPoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_AtWayPoint_C::ExecuteUbergraph_BTT_AtWayPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AtWayPoint.BTT_AtWayPoint_C.ExecuteUbergraph_BTT_AtWayPoint"));

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
