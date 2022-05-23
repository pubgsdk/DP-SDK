// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_AIInteract_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_AIInteract.BTT_AIInteract_C.Convert To Behaviour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_StartingAIBehaviours> S_Behaviour                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_AIInteract_C::Convert_To_Behaviour(TEnumAsByte<E_StartingAIBehaviours> S_Behaviour, TEnumAsByte<E_AIBehaviour>* Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.Convert To Behaviour"));

	struct
	{
		TEnumAsByte<E_StartingAIBehaviours> S_Behaviour;
		TEnumAsByte<E_AIBehaviour>     Behaviour;
	} params = {};

	params.S_Behaviour = S_Behaviour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Behaviour != nullptr)
		*Behaviour = params.Behaviour;
}


// Function BTT_AIInteract.BTT_AIInteract_C.Next Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_AIInteract_C::Next_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.Next Animation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_AIInteract.BTT_AIInteract_C.End AI Interaction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_AIInteract_C::End_AI_Interaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.End AI Interaction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_AIInteract.BTT_AIInteract_C.Check If Still Can Interact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_AIInteract_C::Check_If_Still_Can_Interact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.Check If Still Can Interact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_AIInteract.BTT_AIInteract_C.ReceiveAbortAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_AIInteract_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.ReceiveAbortAI"));

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


// Function BTT_AIInteract.BTT_AIInteract_C.Reset AI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_AIInteract_C::Reset_AI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.Reset AI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_AIInteract.BTT_AIInteract_C.Clear AI Interact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTT_AIInteract_C::Clear_AI_Interact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.Clear AI Interact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_AIInteract.BTT_AIInteract_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_AIInteract_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.ReceiveExecute"));

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


// Function BTT_AIInteract.BTT_AIInteract_C.ExecuteUbergraph_BTT_AIInteract
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_AIInteract_C::ExecuteUbergraph_BTT_AIInteract(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_AIInteract.BTT_AIInteract_C.ExecuteUbergraph_BTT_AIInteract"));

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
