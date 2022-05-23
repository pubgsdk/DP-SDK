// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTS_FaceDirectionAnimations_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTS_FaceDirectionAnimations.BTS_FaceDirectionAnimations_C.Next Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_FaceDirectionAnimations_C::Next_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_FaceDirectionAnimations.BTS_FaceDirectionAnimations_C.Next Animation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_FaceDirectionAnimations.BTS_FaceDirectionAnimations_C.Animation Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_FaceDirectionAnimations_C::Animation_Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_FaceDirectionAnimations.BTS_FaceDirectionAnimations_C.Animation Done"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_FaceDirectionAnimations.BTS_FaceDirectionAnimations_C.ReceiveActivationAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_FaceDirectionAnimations_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_FaceDirectionAnimations.BTS_FaceDirectionAnimations_C.ReceiveActivationAI"));

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


// Function BTS_FaceDirectionAnimations.BTS_FaceDirectionAnimations_C.ExecuteUbergraph_BTS_FaceDirectionAnimations
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_FaceDirectionAnimations_C::ExecuteUbergraph_BTS_FaceDirectionAnimations(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_FaceDirectionAnimations.BTS_FaceDirectionAnimations_C.ExecuteUbergraph_BTS_FaceDirectionAnimations"));

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
