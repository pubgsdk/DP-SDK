// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_RoamWaitAnim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.Animation Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_RoamWaitAnim_C::Animation_Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.Animation Done"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.End Roam Wait
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_RoamWaitAnim_C::End_Roam_Wait()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.End Roam Wait"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.ReceiveAbort
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RoamWaitAnim_C::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.ReceiveAbort"));

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


// Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.Next Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_RoamWaitAnim_C::Next_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.Next Animation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RoamWaitAnim_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.ReceiveExecute"));

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


// Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.ExecuteUbergraph_BTT_RoamWaitAnim
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_RoamWaitAnim_C::ExecuteUbergraph_BTT_RoamWaitAnim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_RoamWaitAnim.BTT_RoamWaitAnim_C.ExecuteUbergraph_BTT_RoamWaitAnim"));

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
