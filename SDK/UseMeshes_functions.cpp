// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UseMeshes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UseMeshes.UseMeshes_C.DestroyActor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AnimationLenght                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SimulatePhysics                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AUseMeshes_C::DestroyActor(float AnimationLenght, bool SimulatePhysics)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UseMeshes.UseMeshes_C.DestroyActor"));

	struct
	{
		float                          AnimationLenght;
		bool                           SimulatePhysics;
	} params = {};

	params.AnimationLenght = AnimationLenght;
	params.SimulatePhysics = SimulatePhysics;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UseMeshes.UseMeshes_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AUseMeshes_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UseMeshes.UseMeshes_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UseMeshes.UseMeshes_C.ExecuteUbergraph_UseMeshes
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AUseMeshes_C::ExecuteUbergraph_UseMeshes(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UseMeshes.UseMeshes_C.ExecuteUbergraph_UseMeshes"));

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
