// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Gramophone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Gramophone.BP_Gramophone_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_Gramophone_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Gramophone.BP_Gramophone_C.SGK PossibleActions"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           ActionsFound;
		TArray<struct FS_WorldAction>  PossibleActions;
	} params = {};

	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActionsFound != nullptr)
		*ActionsFound = params.ActionsFound;
	if (PossibleActions != nullptr)
		*PossibleActions = params.PossibleActions;
}


// Function BP_Gramophone.BP_Gramophone_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_Gramophone_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Gramophone.BP_Gramophone_C.SGK Interact"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		TEnumAsByte<E_WorldActions>    Action;
		bool                           ReturnValue;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_Gramophone.BP_Gramophone_C.PlayMusic
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              Song                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Gramophone_C::PlayMusic(class USoundBase* Song)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Gramophone.BP_Gramophone_C.PlayMusic"));

	struct
	{
		class USoundBase*              Song;
	} params = {};

	params.Song = Song;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Gramophone.BP_Gramophone_C.StopMusic
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Gramophone_C::StopMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Gramophone.BP_Gramophone_C.StopMusic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Gramophone.BP_Gramophone_C.ExecuteUbergraph_BP_Gramophone
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Gramophone_C::ExecuteUbergraph_BP_Gramophone(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Gramophone.BP_Gramophone_C.ExecuteUbergraph_BP_Gramophone"));

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
