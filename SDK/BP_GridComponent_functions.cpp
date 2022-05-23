// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GridComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GridComponent.BP_GridComponent_C.SelectGridSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_GridComponent_C::SelectGridSize(struct FVector* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridComponent.BP_GridComponent_C.SelectGridSize"));

	struct
	{
		struct FVector                 Value;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_GridComponent.BP_GridComponent_C.AttachedActorCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ActorFound                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_GridComponent_C::AttachedActorCheck(bool* ActorFound, class AActor** FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridComponent.BP_GridComponent_C.AttachedActorCheck"));

	struct
	{
		bool                           ActorFound;
		class AActor*                  FoundActor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActorFound != nullptr)
		*ActorFound = params.ActorFound;
	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
}


// Function BP_GridComponent.BP_GridComponent_C.SpawnGrid
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_GridComponent_C::SpawnGrid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridComponent.BP_GridComponent_C.SpawnGrid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GridComponent.BP_GridComponent_C.ExecuteUbergraph_BP_GridComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_GridComponent_C::ExecuteUbergraph_BP_GridComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridComponent.BP_GridComponent_C.ExecuteUbergraph_BP_GridComponent"));

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
