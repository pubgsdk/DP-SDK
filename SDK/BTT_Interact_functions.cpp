// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_Interact_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_Interact.BTT_Interact_C.Next Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_Interact_C::Next_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Interact.BTT_Interact_C.Next Animation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Interact.BTT_Interact_C.End Animation Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_Interact_C::End_Animation_Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Interact.BTT_Interact_C.End Animation Done"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Interact.BTT_Interact_C.Start Animation End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_Interact_C::Start_Animation_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Interact.BTT_Interact_C.Start Animation End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Interact.BTT_Interact_C.ReceiveAbort
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_Interact_C::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Interact.BTT_Interact_C.ReceiveAbort"));

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


// Function BTT_Interact.BTT_Interact_C.End Interact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_Interact_C::End_Interact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Interact.BTT_Interact_C.End Interact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_Interact.BTT_Interact_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_Interact_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Interact.BTT_Interact_C.ReceiveExecute"));

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


// Function BTT_Interact.BTT_Interact_C.ExecuteUbergraph_BTT_Interact
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_Interact_C::ExecuteUbergraph_BTT_Interact(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_Interact.BTT_Interact_C.ExecuteUbergraph_BTT_Interact"));

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
