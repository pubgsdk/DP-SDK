// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CookingComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CookingComponent.BP_CookingComponent_C.SaveCookingData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::SaveCookingData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.SaveCookingData"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.LoadComponentData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           LoadComplete                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CookingComponent_C::LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.LoadComponentData"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.LoadCookingData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_StorageSave          S_StorageSave                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::LoadCookingData(const struct FS_StorageSave& S_StorageSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.LoadCookingData"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.SetSwitchedOn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::SetSwitchedOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.SetSwitchedOn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.AddReturnedItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::AddReturnedItems(const struct FS_CookingSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.AddReturnedItems"));

	struct
	{
		struct FS_CookingSlot          CookingSlot;
	} params = {};

	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.FreeSlotCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingCost         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvSlot              InvSlot                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

bool UBP_CookingComponent_C::FreeSlotCheck(const struct FS_CraftingCost& Item, struct FS_InvSlot* InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.FreeSlotCheck"));

	struct
	{
		struct FS_CraftingCost         Item;
		bool                           ReturnValue;
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InvSlot != nullptr)
		*InvSlot = params.InvSlot;

	return params.ReturnValue;
}


// Function BP_CookingComponent.BP_CookingComponent_C.SetNewCookingItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_CookingSlot          CookingSlot                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_CookingComponent_C::SetNewCookingItem(const struct FS_InvSlot& InvSlot, struct FS_CookingSlot* CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.SetNewCookingItem"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		bool                           ReturnValue;
		struct FS_CookingSlot          CookingSlot;
	} params = {};

	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CookingSlot != nullptr)
		*CookingSlot = params.CookingSlot;

	return params.ReturnValue;
}


// Function BP_CookingComponent.BP_CookingComponent_C.SetNewCookingSlotItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           SpecialSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CookingComponent_C::SetNewCookingSlotItem(const struct FS_InvSlot& InvSlot, const struct FS_InvItem& Item, bool SpecialSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.SetNewCookingSlotItem"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		struct FS_InvItem              Item;
		bool                           SpecialSlot;
	} params = {};

	params.InvSlot = InvSlot;
	params.Item = Item;
	params.SpecialSlot = SpecialSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.MoveCookingItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              ContentElement                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::MoveCookingItem(const struct FS_InvSlot& ContentElement, const struct FS_InvSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.MoveCookingItem"));

	struct
	{
		struct FS_InvSlot              ContentElement;
		struct FS_InvSlot              CookingSlot;
	} params = {};

	params.ContentElement = ContentElement;
	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.UpdateCookingTimes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::UpdateCookingTimes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.UpdateCookingTimes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.IsCookingSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsCookingSlot                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CookingComponent_C::IsCookingSlot(int Index, bool* IsCookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.IsCookingSlot"));

	struct
	{
		int                            Index;
		bool                           IsCookingSlot;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsCookingSlot != nullptr)
		*IsCookingSlot = params.IsCookingSlot;
}


// Function BP_CookingComponent.BP_CookingComponent_C.RestartPlayerCookingSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::RestartPlayerCookingSlot(const struct FS_CookingSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.RestartPlayerCookingSlot"));

	struct
	{
		struct FS_CookingSlot          CookingSlot;
	} params = {};

	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ClearCookingItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_CookingSlot          CookingSlot                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::ClearCookingItem(const struct FS_InvSlot& InvSlot, struct FS_CookingSlot* CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ClearCookingItem"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		struct FS_CookingSlot          CookingSlot;
	} params = {};

	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CookingSlot != nullptr)
		*CookingSlot = params.CookingSlot;
}


// Function BP_CookingComponent.BP_CookingComponent_C.StartPlayerCookingSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::StartPlayerCookingSlot(const struct FS_CookingSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.StartPlayerCookingSlot"));

	struct
	{
		struct FS_CookingSlot          CookingSlot;
	} params = {};

	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.UpdateCookingItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::UpdateCookingItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.UpdateCookingItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.PauseAllPlayerCookingSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::PauseAllPlayerCookingSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.PauseAllPlayerCookingSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ResumeAllPlayerCookingSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ResumeAllPlayerCookingSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ResumeAllPlayerCookingSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.GetCookingInvSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      CookingSlots                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

bool UBP_CookingComponent_C::GetCookingInvSlots(TArray<struct FS_InvSlot>* CookingSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.GetCookingInvSlots"));

	struct
	{
		bool                           ReturnValue;
		TArray<struct FS_InvSlot>      CookingSlots;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CookingSlots != nullptr)
		*CookingSlots = params.CookingSlots;

	return params.ReturnValue;
}


// Function BP_CookingComponent.BP_CookingComponent_C.GetContentsSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      ContentsSlots                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

bool UBP_CookingComponent_C::GetContentsSlots(TArray<struct FS_InvSlot>* ContentsSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.GetContentsSlots"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.GetFuelSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      FuelSlots                      (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

bool UBP_CookingComponent_C::GetFuelSlots(TArray<struct FS_InvSlot>* FuelSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.GetFuelSlots"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.IsFuelItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsFuelItem                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CookingComponent_C::IsFuelItem(const struct FName& ItemId, bool* IsFuelItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.IsFuelItem"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.IsIndexFuelSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsFuelSlot                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CookingComponent_C::IsIndexFuelSlot(int Index, bool* IsFuelSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.IsIndexFuelSlot"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.UpdateFuelBurn
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_CookingComponent_C::UpdateFuelBurn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.UpdateFuelBurn"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.BurnFuel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::BurnFuel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.BurnFuel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ConstructContainsSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ConstructContainsSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ConstructContainsSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ConstructCookingSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ConstructCookingSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ConstructCookingSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ServerConvertTimerCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ServerConvertTimerCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ServerConvertTimerCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ConstructSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ConstructSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ConstructSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.SaveComponentData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::SaveComponentData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.SaveComponentData"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.LoadInventoryData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_StorageSave          S_StorageSave                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::LoadInventoryData(const struct FS_StorageSave& S_StorageSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.LoadInventoryData"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.SGK ItemMovedInInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::SGK_ItemMovedInInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.SGK ItemMovedInInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ServerBurnFuel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::ServerBurnFuel(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ServerBurnFuel"));

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


// Function BP_CookingComponent.BP_CookingComponent_C.TurnOn
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::TurnOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.TurnOn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ClientResumeAllConvertSlots
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ClientResumeAllConvertSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ClientResumeAllConvertSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ClientPauseAllCookingSlotTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ClientPauseAllCookingSlotTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ClientPauseAllCookingSlotTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ServerPauseBurnFuel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ServerPauseBurnFuel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ServerPauseBurnFuel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ServerStartFuelBurn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ServerStartFuelBurn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ServerStartFuelBurn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ServerStopBurningFuel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::ServerStopBurningFuel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ServerStopBurningFuel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.SGK ToggleComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CookingComponent_C::SGK_ToggleComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.SGK ToggleComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.SGK UpdateSpecialSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.SGK UpdateSpecialSlot"));

	struct
	{
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CookingComponent.BP_CookingComponent_C.ExecuteUbergraph_BP_CookingComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CookingComponent_C::ExecuteUbergraph_BP_CookingComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CookingComponent.BP_CookingComponent_C.ExecuteUbergraph_BP_CookingComponent"));

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
