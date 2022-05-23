// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CraftingComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CraftingComponent.BP_CraftingComponent_C.IsFuelItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsFuelItem                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CraftingComponent_C::IsFuelItem(const struct FName& ItemId, bool* IsFuelItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.IsFuelItem"));

	struct
	{
		struct FName                   ItemId;
		bool                           IsFuelItem;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsFuelItem != nullptr)
		*IsFuelItem = params.IsFuelItem;
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.UpdateFuelBurn
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_CraftingComponent_C::UpdateFuelBurn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.UpdateFuelBurn"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.BurnFuel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::BurnFuel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.BurnFuel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.GetFuelSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      FuelSlots                      (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

bool UBP_CraftingComponent_C::GetFuelSlots(TArray<struct FS_InvSlot>* FuelSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.GetFuelSlots"));

	struct
	{
		bool                           ReturnValue;
		TArray<struct FS_InvSlot>      FuelSlots;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FuelSlots != nullptr)
		*FuelSlots = params.FuelSlots;

	return params.ReturnValue;
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.IsIndexFuelSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsFuelSlot                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CraftingComponent_C::IsIndexFuelSlot(int Index, bool* IsFuelSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.IsIndexFuelSlot"));

	struct
	{
		int                            Index;
		bool                           IsFuelSlot;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsFuelSlot != nullptr)
		*IsFuelSlot = params.IsFuelSlot;
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.SaveCraftingData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingComponent_C::SaveCraftingData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.SaveCraftingData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
	} params = {};

	params.SaveGame = SaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.LoadCraftingData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_StorageSave          StorageSave                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_CraftingComponent_C::LoadCraftingData(const struct FS_StorageSave& StorageSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.LoadCraftingData"));

	struct
	{
		struct FS_StorageSave          StorageSave;
	} params = {};

	params.StorageSave = StorageSave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.LoadComponentData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           LoadComplete                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CraftingComponent_C::LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.LoadComponentData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		bool                           LoadComplete;
	} params = {};

	params.SaveGame = SaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LoadComplete != nullptr)
		*LoadComplete = params.LoadComplete;
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ConstructContainsSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ConstructContainsSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ConstructContainsSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.GetContentsSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      ContentsSlots                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

bool UBP_CraftingComponent_C::GetContentsSlots(TArray<struct FS_InvSlot>* ContentsSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.GetContentsSlots"));

	struct
	{
		bool                           ReturnValue;
		TArray<struct FS_InvSlot>      ContentsSlots;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ContentsSlots != nullptr)
		*ContentsSlots = params.ContentsSlots;

	return params.ReturnValue;
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ConstructSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ConstructSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ConstructSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.SaveComponentData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingComponent_C::SaveComponentData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.SaveComponentData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
	} params = {};

	params.SaveGame = SaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.LoadInventoryData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_StorageSave          S_StorageSave                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_CraftingComponent_C::LoadInventoryData(const struct FS_StorageSave& S_StorageSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.LoadInventoryData"));

	struct
	{
		struct FS_StorageSave          S_StorageSave;
	} params = {};

	params.S_StorageSave = S_StorageSave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.SGK ItemMovedInInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::SGK_ItemMovedInInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.SGK ItemMovedInInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ServerBurnFuel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingComponent_C::ServerBurnFuel(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ServerBurnFuel"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ServerTurnOn
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ServerTurnOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ServerTurnOn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ServerPauseBurnFuel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ServerPauseBurnFuel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ServerPauseBurnFuel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ServerStartFuelBurn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ServerStartFuelBurn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ServerStartFuelBurn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ServerStopBurningFuel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ServerStopBurningFuel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ServerStopBurningFuel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.SGK ToggleComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::SGK_ToggleComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.SGK ToggleComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ServerPauseCraftingListing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ServerPauseCraftingListing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ServerPauseCraftingListing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ServerResumeCraftingListing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingComponent_C::ServerResumeCraftingListing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ServerResumeCraftingListing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ExecuteUbergraph_BP_CraftingComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingComponent_C::ExecuteUbergraph_BP_CraftingComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingComponent.BP_CraftingComponent_C.ExecuteUbergraph_BP_CraftingComponent"));

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
