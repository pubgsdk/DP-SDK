// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WoodWindowShutterPair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.CheckLocks
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowOpen                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_WoodWindowShutterPair_C::CheckLocks(bool* AllowOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.CheckLocks"));

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


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_WoodWindowShutterPair_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SGK Interact"));

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


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_WoodWindowShutterPair_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SGK PossibleActions"));

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


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SwingClose__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::SwingClose__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SwingClose__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SwingClose__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::SwingClose__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SwingClose__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SwingOpen__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::SwingOpen__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SwingOpen__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SwingOpen__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::SwingOpen__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.SwingOpen__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.Interact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::Interact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.Interact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.MulticastDoorAnimation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::MulticastDoorAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.MulticastDoorAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.Open"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.MulticastBuildPartPlaced
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_WoodWindowShutterPair_C::MulticastBuildPartPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.MulticastBuildPartPlaced"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.ExecuteUbergraph_BP_WoodWindowShutterPair
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_WoodWindowShutterPair_C::ExecuteUbergraph_BP_WoodWindowShutterPair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodWindowShutterPair.BP_WoodWindowShutterPair_C.ExecuteUbergraph_BP_WoodWindowShutterPair"));

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
