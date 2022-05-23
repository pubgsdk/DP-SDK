// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MetalWindowShutters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.CheckLocks
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowOpen                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MetalWindowShutters_C::CheckLocks(bool* AllowOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.CheckLocks"));

	struct
	{
		bool                           AllowOpen;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowOpen != nullptr)
		*AllowOpen = params.AllowOpen;
}


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK InteractName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InteractName                   (CPF_Parm, CPF_OutParm)

void ABP_MetalWindowShutters_C::SGK_InteractName(struct FText* InteractName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK InteractName"));

	struct
	{
		struct FText                   InteractName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InteractName != nullptr)
		*InteractName = params.InteractName;
}


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_MetalWindowShutters_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK PossibleActions"));

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


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK AllowInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowInteraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MetalWindowShutters_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK AllowInteraction"));

	struct
	{
		bool                           AllowInteraction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowInteraction != nullptr)
		*AllowInteraction = params.AllowInteraction;
}


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MetalWindowShutters_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK Interact"));

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


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MetalWindowShutters_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MetalWindowShutters_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.MulticastWindowAnimation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MetalWindowShutters_C::MulticastWindowAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.MulticastWindowAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.Interact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MetalWindowShutters_C::Interact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.Interact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.ExecuteUbergraph_BP_MetalWindowShutters
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MetalWindowShutters_C::ExecuteUbergraph_BP_MetalWindowShutters(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.ExecuteUbergraph_BP_MetalWindowShutters"));

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
