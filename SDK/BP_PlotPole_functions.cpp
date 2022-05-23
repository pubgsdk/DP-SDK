// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PlotPole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlotPole.BP_PlotPole_C.Damage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlotPole_C::Damage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.Damage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.AreaFunctionTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlotPole_C::AreaFunctionTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.AreaFunctionTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.ClearAllOwners
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   Player_Inventory               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PlotPole_C::ClearAllOwners(class UBP_PlayerInventory_C* Player_Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.ClearAllOwners"));

	struct
	{
		class UBP_PlayerInventory_C*   Player_Inventory;
	} params = {};

	params.Player_Inventory = Player_Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.AddOwnerInRange
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlotPole_C::AddOwnerInRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.AddOwnerInRange"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.ReplaceBuildPartOwners
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlotPole_C::ReplaceBuildPartOwners()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.ReplaceBuildPartOwners"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.UpdateBuildPartsOwners
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Clear                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_PlayerInventory_C*   Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PlotPole_C::UpdateBuildPartsOwners(bool Clear, class UBP_PlayerInventory_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.UpdateBuildPartsOwners"));

	struct
	{
		bool                           Clear;
		class UBP_PlayerInventory_C*   Player;
	} params = {};

	params.Clear = Clear;
	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_PlotPole_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.SGK PossibleActions"));

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


// Function BP_PlotPole.BP_PlotPole_C.SGK AllowInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowInteraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_PlotPole_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.SGK AllowInteraction"));

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


// Function BP_PlotPole.BP_PlotPole_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_PlotPole_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.SGK Interact"));

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


// Function BP_PlotPole.BP_PlotPole_C.ToggleRangeDisplay
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlotPole_C::ToggleRangeDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.ToggleRangeDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlotPole_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.killmeffs
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlotPole_C::killmeffs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.killmeffs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.SetDeco
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterBuildPart_C*   BuildPart                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PlotPole_C::SetDeco(class ABP_MasterBuildPart_C* BuildPart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.SetDeco"));

	struct
	{
		class ABP_MasterBuildPart_C*   BuildPart;
	} params = {};

	params.BuildPart = BuildPart;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.UpdateOwnerships
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlotPole_C::UpdateOwnerships()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.UpdateOwnerships"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.SGK BuildPartPlaced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FromSaveGame                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_PlotPole_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.SGK BuildPartPlaced"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           FromSaveGame;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.FromSaveGame = FromSaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlotPole.BP_PlotPole_C.ExecuteUbergraph_BP_PlotPole
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PlotPole_C::ExecuteUbergraph_BP_PlotPole(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlotPole.BP_PlotPole_C.ExecuteUbergraph_BP_PlotPole"));

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
