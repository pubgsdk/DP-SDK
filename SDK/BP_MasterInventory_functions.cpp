// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterInventory.BP_MasterInventory_C.SGK AllowStartingItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowStartingItems             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK AllowStartingItems"));

	struct
	{
		bool                           AllowStartingItems;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = params.AllowStartingItems;
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK SelfItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              SelfItem                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_SelfItem(struct FS_InvItem* SelfItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK SelfItem"));

	struct
	{
		struct FS_InvItem              SelfItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelfItem != nullptr)
		*SelfItem = params.SelfItem;
}


// Function BP_MasterInventory.BP_MasterInventory_C.ItemDecay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ItemDecay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ItemDecay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.DestroyContainingInventories
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::DestroyContainingInventories()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.DestroyContainingInventories"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.CloseOtherPlayerTabs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::CloseOtherPlayerTabs(class UBP_PlayerInventory_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CloseOtherPlayerTabs"));

	struct
	{
		class UBP_PlayerInventory_C*   Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.StartItemEquipment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::StartItemEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.StartItemEquipment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ReplicateContainingInventories
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Replicate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::ReplicateContainingInventories(bool Replicate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ReplicateContainingInventories"));

	struct
	{
		bool                           Replicate;
	} params = {};

	params.Replicate = Replicate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateInvSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>      InvSlots                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSlot>      UpdatedSlots                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_MasterInventory_C::UpdateInvSlots(const struct FS_InvItem& InvItem, TArray<struct FS_InvSlot>* InvSlots, TArray<struct FS_InvSlot>* UpdatedSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.UpdateInvSlots"));

	struct
	{
		TArray<struct FS_InvSlot>      InvSlots;
		struct FS_InvItem              InvItem;
		TArray<struct FS_InvSlot>      UpdatedSlots;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InvSlots != nullptr)
		*InvSlots = params.InvSlots;
	if (UpdatedSlots != nullptr)
		*UpdatedSlots = params.UpdatedSlots;
}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateAllPlayersRootItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FullUpdate                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::UpdateAllPlayersRootItems(bool FullUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.UpdateAllPlayersRootItems"));

	struct
	{
		bool                           FullUpdate;
	} params = {};

	params.FullUpdate = FullUpdate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SpawnItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::SpawnItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SpawnItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SpawnDestructionBag
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::SpawnDestructionBag()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SpawnDestructionBag"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.AddStartingItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::AddStartingItems(bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AddStartingItems"));

	struct
	{
		bool                           Return;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_MasterInventory.BP_MasterInventory_C.AllItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>      RootSlots                      (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_MasterInventory_C::AllItems(TArray<struct FS_InvSlot>* RootSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AllItems"));

	struct
	{
		TArray<struct FS_InvSlot>      RootSlots;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RootSlots != nullptr)
		*RootSlots = params.RootSlots;
}


// Function BP_MasterInventory.BP_MasterInventory_C.ContainerRestrictionCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Can_Add                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::ContainerRestrictionCheck(const struct FName& ItemId, bool* Can_Add)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ContainerRestrictionCheck"));

	struct
	{
		struct FName                   ItemId;
		bool                           Can_Add;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Can_Add != nullptr)
		*Can_Add = params.Can_Add;
}


// Function BP_MasterInventory.BP_MasterInventory_C.ClearInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ClearInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ClearInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.TotalItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            TotalAmount                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::TotalItemAmount(const struct FS_InvItem& InvItem, int* TotalAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.TotalItemAmount"));

	struct
	{
		struct FS_InvItem              InvItem;
		int                            TotalAmount;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TotalAmount != nullptr)
		*TotalAmount = params.TotalAmount;
}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SpecialSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ItemRemoved                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::RemoveItemAmount(const struct FS_InvSlot& InvSlot, int Amount, bool SpecialSlot, bool* ItemRemoved)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.RemoveItemAmount"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		int                            Amount;
		bool                           SpecialSlot;
		bool                           ItemRemoved;
	} params = {};

	params.InvSlot = InvSlot;
	params.Amount = Amount;
	params.SpecialSlot = SpecialSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemRemoved != nullptr)
		*ItemRemoved = params.ItemRemoved;
}


// Function BP_MasterInventory.BP_MasterInventory_C.SetNewSlotItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              RootSlot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvItem              NewItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           SpecialSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::SetNewSlotItem(const struct FS_InvSlot& RootSlot, const struct FS_InvItem& NewItem, bool SpecialSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SetNewSlotItem"));

	struct
	{
		struct FS_InvSlot              RootSlot;
		struct FS_InvItem              NewItem;
		bool                           SpecialSlot;
	} params = {};

	params.RootSlot = RootSlot;
	params.NewItem = NewItem;
	params.SpecialSlot = SpecialSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ClearInventoryItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ClearInventoryItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ClearInventoryItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.LoadSavedInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSaveSlot>  LoadedInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FS_OtherInvSaves> OtherInv                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_MasterInventory_C::LoadSavedInventory(TArray<struct FS_InvSaveSlot>* LoadedInventory, TArray<struct FS_OtherInvSaves>* OtherInv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.LoadSavedInventory"));

	struct
	{
		TArray<struct FS_InvSaveSlot>  LoadedInventory;
		TArray<struct FS_OtherInvSaves> OtherInv;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LoadedInventory != nullptr)
		*LoadedInventory = params.LoadedInventory;
	if (OtherInv != nullptr)
		*OtherInv = params.OtherInv;
}


// Function BP_MasterInventory.BP_MasterInventory_C.SaveComponentData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SaveComponentData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SaveComponentData"));

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


// Function BP_MasterInventory.BP_MasterInventory_C.LoadInventoryData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_StorageSave          S_StorageSave                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::LoadInventoryData(const struct FS_StorageSave& S_StorageSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.LoadInventoryData"));

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


// Function BP_MasterInventory.BP_MasterInventory_C.LoadComponentData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           LoadComplete                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.LoadComponentData"));

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


// Function BP_MasterInventory.BP_MasterInventory_C.InGameLoadComponentData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::InGameLoadComponentData(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.InGameLoadComponentData"));

	struct
	{
		class UBP_SGKSaveGame_C*       Save;
	} params = {};

	params.Save = Save;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.DecreaseItemDurability
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// float                          DecreaseAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::DecreaseItemDurability(const struct FS_InvSlot& InvSlot, float DecreaseAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.DecreaseItemDurability"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		float                          DecreaseAmount;
	} params = {};

	params.InvSlot = InvSlot;
	params.DecreaseAmount = DecreaseAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.DecreaseWeaponDurability
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlot           WeaponSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// float                          DecreaseAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::DecreaseWeaponDurability(const struct FS_WeaponSlot& WeaponSlot, float DecreaseAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.DecreaseWeaponDurability"));

	struct
	{
		struct FS_WeaponSlot           WeaponSlot;
		float                          DecreaseAmount;
	} params = {};

	params.WeaponSlot = WeaponSlot;
	params.DecreaseAmount = DecreaseAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.FindCraftingListing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_CraftingQueue        CraftingListing                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_MasterInventory_C::FindCraftingListing(const struct FName& Recipe, struct FS_CraftingQueue* CraftingListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.FindCraftingListing"));

	struct
	{
		struct FName                   Recipe;
		bool                           ReturnValue;
		struct FS_CraftingQueue        CraftingListing;
	} params = {};

	params.Recipe = Recipe;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CraftingListing != nullptr)
		*CraftingListing = params.CraftingListing;

	return params.ReturnValue;
}


// Function BP_MasterInventory.BP_MasterInventory_C.RequiredActorCraftingCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_MasterInventory_C::RequiredActorCraftingCheck(const struct FName& Recipe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.RequiredActorCraftingCheck"));

	struct
	{
		struct FName                   Recipe;
		bool                           ReturnValue;
	} params = {};

	params.Recipe = Recipe;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateCraftingTimes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::UpdateCraftingTimes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.UpdateCraftingTimes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.CancelCraftingRecipe
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        CraftingListing                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::CancelCraftingRecipe(const struct FS_CraftingQueue& CraftingListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CancelCraftingRecipe"));

	struct
	{
		struct FS_CraftingQueue        CraftingListing;
	} params = {};

	params.CraftingListing = CraftingListing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.CraftingError
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::CraftingError()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CraftingError"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.CraftItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::CraftItem(const struct FName& Recipe, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CraftItem"));

	struct
	{
		struct FName                   Recipe;
		int                            Amount;
	} params = {};

	params.Recipe = Recipe;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.CreateNewCraftingListing
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_CraftingQueue        Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::CreateNewCraftingListing(const struct FName& Recipe, int Amount, struct FS_CraftingQueue* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CreateNewCraftingListing"));

	struct
	{
		struct FName                   Recipe;
		int                            Amount;
		struct FS_CraftingQueue        Output;
	} params = {};

	params.Recipe = Recipe;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateCraftingListing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        CraftingListing                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            AdditionalAmount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_CraftingQueue        Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateCraftingListing(const struct FS_CraftingQueue& CraftingListing, int AdditionalAmount, struct FS_CraftingQueue* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.UpdateCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        CraftingListing;
		int                            AdditionalAmount;
		struct FS_CraftingQueue        Output;
	} params = {};

	params.CraftingListing = CraftingListing;
	params.AdditionalAmount = AdditionalAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_MasterInventory.BP_MasterInventory_C.CheckRecipeCost
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           CanCraft                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::CheckRecipeCost(const struct FName& Recipe, int Amount, bool RemoveItems, bool* CanCraft)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CheckRecipeCost"));

	struct
	{
		struct FName                   Recipe;
		int                            Amount;
		bool                           RemoveItems;
		bool                           CanCraft;
	} params = {};

	params.Recipe = Recipe;
	params.Amount = Amount;
	params.RemoveItems = RemoveItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanCraft != nullptr)
		*CanCraft = params.CanCraft;
}


// Function BP_MasterInventory.BP_MasterInventory_C.SetItemAmount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            SetAmount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ChangeCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Special                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::SetItemAmount(const struct FS_InvSlot& InvSlot, int SetAmount, bool ChangeCount, bool Special)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SetItemAmount"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		int                            SetAmount;
		bool                           ChangeCount;
		bool                           Special;
	} params = {};

	params.InvSlot = InvSlot;
	params.SetAmount = SetAmount;
	params.ChangeCount = ChangeCount;
	params.Special = Special;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           RemoveWeight                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           RemoveInvAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SpecialSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::RemoveItem(const struct FS_InvSlot& InvSlot, bool RemoveWeight, bool RemoveInvAmount, bool SpecialSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.RemoveItem"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		bool                           RemoveWeight;
		bool                           RemoveInvAmount;
		bool                           SpecialSlot;
	} params = {};

	params.InvSlot = InvSlot;
	params.RemoveWeight = RemoveWeight;
	params.RemoveInvAmount = RemoveInvAmount;
	params.SpecialSlot = SpecialSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SearchForItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvSlot              InvSlot                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SearchForItem(const struct FDataTableRowHandle& Item, int Amount, bool RemoveItems, bool* ItemFound, struct FS_InvSlot* InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SearchForItem"));

	struct
	{
		struct FDataTableRowHandle     Item;
		int                            Amount;
		bool                           RemoveItems;
		bool                           ItemFound;
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.Item = Item;
	params.Amount = Amount;
	params.RemoveItems = RemoveItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (InvSlot != nullptr)
		*InvSlot = params.InvSlot;
}


// Function BP_MasterInventory.BP_MasterInventory_C.OnRep_ItemCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::OnRep_ItemCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.OnRep_ItemCount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ItemLimitCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ItemCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AllowAdd                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            AddCount                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Remaining                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ItemLimitCheck(int ItemCount, bool* AllowAdd, int* AddCount, int* Remaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ItemLimitCheck"));

	struct
	{
		int                            ItemCount;
		bool                           AllowAdd;
		int                            AddCount;
		int                            Remaining;
	} params = {};

	params.ItemCount = ItemCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowAdd != nullptr)
		*AllowAdd = params.AllowAdd;
	if (AddCount != nullptr)
		*AddCount = params.AddCount;
	if (Remaining != nullptr)
		*Remaining = params.Remaining;
}


// Function BP_MasterInventory.BP_MasterInventory_C.RemainingItemCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            RemainingItemLimit             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::RemainingItemCount(int* RemainingItemLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.RemainingItemCount"));

	struct
	{
		int                            RemainingItemLimit;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RemainingItemLimit != nullptr)
		*RemainingItemLimit = params.RemainingItemLimit;
}


// Function BP_MasterInventory.BP_MasterInventory_C.ChangeItemCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Add                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::ChangeItemCount(int Amount, bool Add)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ChangeItemCount"));

	struct
	{
		int                            Amount;
		bool                           Add;
	} params = {};

	params.Amount = Amount;
	params.Add = Add;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.AddWeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Weight                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AddToParent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterInventory_C*   Stop_Inventory                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::AddWeight(float Weight, bool AddToParent, class UBP_MasterInventory_C* Stop_Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AddWeight"));

	struct
	{
		float                          Weight;
		bool                           AddToParent;
		class UBP_MasterInventory_C*   Stop_Inventory;
	} params = {};

	params.Weight = Weight;
	params.AddToParent = AddToParent;
	params.Stop_Inventory = Stop_Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ParentWeightCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AdditionalWeight               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   ParentIgnore                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanAdd                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            CurrentCount                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ParentWeightCheck(float AdditionalWeight, class UBP_MasterInventory_C* ParentIgnore, bool* CanAdd, int* CurrentCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ParentWeightCheck"));

	struct
	{
		float                          AdditionalWeight;
		class UBP_MasterInventory_C*   ParentIgnore;
		bool                           CanAdd;
		int                            CurrentCount;
	} params = {};

	params.AdditionalWeight = AdditionalWeight;
	params.ParentIgnore = ParentIgnore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanAdd != nullptr)
		*CanAdd = params.CanAdd;
	if (CurrentCount != nullptr)
		*CurrentCount = params.CurrentCount;
}


// Function BP_MasterInventory.BP_MasterInventory_C.AttemptToAddWeight
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UseAllWeight                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           CheckOnly                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_MasterInventory_C::AttemptToAddWeight(const struct FS_InvItem& Item, int Amount, bool UseAllWeight, bool CheckOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AttemptToAddWeight"));

	struct
	{
		struct FS_InvItem              Item;
		int                            Amount;
		bool                           UseAllWeight;
		bool                           CheckOnly;
		bool                           ReturnValue;
	} params = {};

	params.Item = Item;
	params.Amount = Amount;
	params.UseAllWeight = UseAllWeight;
	params.CheckOnly = CheckOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveItemWeight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveAll                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           RemoveParentWeight             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterInventory_C*   MasterInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::RemoveItemWeight(const struct FS_InvItem& Item, int Amount, bool RemoveAll, bool RemoveParentWeight, class UBP_MasterInventory_C* MasterInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.RemoveItemWeight"));

	struct
	{
		struct FS_InvItem              Item;
		int                            Amount;
		bool                           RemoveAll;
		bool                           RemoveParentWeight;
		class UBP_MasterInventory_C*   MasterInventory;
	} params = {};

	params.Item = Item;
	params.Amount = Amount;
	params.RemoveAll = RemoveAll;
	params.RemoveParentWeight = RemoveParentWeight;
	params.MasterInventory = MasterInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.AddItemWeight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AddAll                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           AddToParent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterInventory_C*   Stop_Inventory                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::AddItemWeight(const struct FS_InvItem& Item, int Amount, bool AddAll, bool AddToParent, class UBP_MasterInventory_C* Stop_Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AddItemWeight"));

	struct
	{
		struct FS_InvItem              Item;
		int                            Amount;
		bool                           AddAll;
		bool                           AddToParent;
		class UBP_MasterInventory_C*   Stop_Inventory;
	} params = {};

	params.Item = Item;
	params.Amount = Amount;
	params.AddAll = AddAll;
	params.AddToParent = AddToParent;
	params.Stop_Inventory = Stop_Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.OnRep_CurrentWeight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::OnRep_CurrentWeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.OnRep_CurrentWeight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.AddWeightCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ItemWeight                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CheckParent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterInventory_C*   ParentIgnore                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanAdd                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            ItemCount                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::AddWeightCheck(float ItemWeight, bool CheckParent, class UBP_MasterInventory_C* ParentIgnore, bool* CanAdd, int* ItemCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AddWeightCheck"));

	struct
	{
		float                          ItemWeight;
		bool                           CheckParent;
		class UBP_MasterInventory_C*   ParentIgnore;
		bool                           CanAdd;
		int                            ItemCount;
	} params = {};

	params.ItemWeight = ItemWeight;
	params.CheckParent = CheckParent;
	params.ParentIgnore = ParentIgnore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanAdd != nullptr)
		*CanAdd = params.CanAdd;
	if (ItemCount != nullptr)
		*ItemCount = params.ItemCount;
}


// Function BP_MasterInventory.BP_MasterInventory_C.RemainingFreeWeight
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          RemainingFreeWeight            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::RemainingFreeWeight(float* RemainingFreeWeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.RemainingFreeWeight"));

	struct
	{
		float                          RemainingFreeWeight;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RemainingFreeWeight != nullptr)
		*RemainingFreeWeight = params.RemainingFreeWeight;
}


// Function BP_MasterInventory.BP_MasterInventory_C.WeightCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UseAllWeight                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           CheckParent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterInventory_C*   IgnoreParent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ExceedsMaxWeight               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::WeightCheck(const struct FS_InvItem& Item, int Amount, bool UseAllWeight, bool CheckParent, class UBP_MasterInventory_C* IgnoreParent, bool* ExceedsMaxWeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.WeightCheck"));

	struct
	{
		struct FS_InvItem              Item;
		int                            Amount;
		bool                           UseAllWeight;
		bool                           CheckParent;
		class UBP_MasterInventory_C*   IgnoreParent;
		bool                           ExceedsMaxWeight;
	} params = {};

	params.Item = Item;
	params.Amount = Amount;
	params.UseAllWeight = UseAllWeight;
	params.CheckParent = CheckParent;
	params.IgnoreParent = IgnoreParent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ExceedsMaxWeight != nullptr)
		*ExceedsMaxWeight = params.ExceedsMaxWeight;
}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveWeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Weight                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveParentWeight             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterInventory_C*   StopInventory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::RemoveWeight(float Weight, bool RemoveParentWeight, class UBP_MasterInventory_C* StopInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.RemoveWeight"));

	struct
	{
		float                          Weight;
		bool                           RemoveParentWeight;
		class UBP_MasterInventory_C*   StopInventory;
	} params = {};

	params.Weight = Weight;
	params.RemoveParentWeight = RemoveParentWeight;
	params.StopInventory = StopInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ClearParentInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ClearParentInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ClearParentInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.IsItemInParentInv
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              StartInvSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              EndInvSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           IsInInv                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::IsItemInParentInv(const struct FS_InvSlot& StartInvSlot, const struct FS_InvSlot& EndInvSlot, bool* IsInInv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.IsItemInParentInv"));

	struct
	{
		struct FS_InvSlot              StartInvSlot;
		struct FS_InvSlot              EndInvSlot;
		bool                           IsInInv;
	} params = {};

	params.StartInvSlot = StartInvSlot;
	params.EndInvSlot = EndInvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsInInv != nullptr)
		*IsInInv = params.IsInInv;
}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateParentInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateParentInventory(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.UpdateParentInventory"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.AttemptToAddItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            AddAmount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Remainder                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            RemainderAmount                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::AttemptToAddItemAmount(const struct FS_InvSlot& InvSlot, int AddAmount, bool* Remainder, int* RemainderAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AttemptToAddItemAmount"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		int                            AddAmount;
		bool                           Remainder;
		int                            RemainderAmount;
	} params = {};

	params.InvSlot = InvSlot;
	params.AddAmount = AddAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Remainder != nullptr)
		*Remainder = params.Remainder;
	if (RemainderAmount != nullptr)
		*RemainderAmount = params.RemainderAmount;
}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateSlotOnUsingPlayers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Was_Rotated                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::UpdateSlotOnUsingPlayers(const struct FS_InvSlot& InvSlot, int Height, int Width, bool Was_Rotated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.UpdateSlotOnUsingPlayers"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		int                            Height;
		int                            Width;
		bool                           Was_Rotated;
	} params = {};

	params.InvSlot = InvSlot;
	params.Height = Height;
	params.Width = Width;
	params.Was_Rotated = Was_Rotated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ClearUsingPlayers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ClearUsingPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ClearUsingPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ReplaceUsingPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_PlayerInventory_C*> Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_MasterInventory_C::ReplaceUsingPlayers(TArray<class UBP_PlayerInventory_C*>* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ReplaceUsingPlayers"));

	struct
	{
		TArray<class UBP_PlayerInventory_C*> Players;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Players != nullptr)
		*Players = params.Players;
}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveUsingPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   Player_Inv                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::RemoveUsingPlayer(class UBP_PlayerInventory_C* Player_Inv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.RemoveUsingPlayer"));

	struct
	{
		class UBP_PlayerInventory_C*   Player_Inv;
	} params = {};

	params.Player_Inv = Player_Inv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.AddUsingPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   Player_Inv                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::AddUsingPlayer(class UBP_PlayerInventory_C* Player_Inv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AddUsingPlayer"));

	struct
	{
		class UBP_PlayerInventory_C*   Player_Inv;
	} params = {};

	params.Player_Inv = Player_Inv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.FindFreeStackSpace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   StopInv                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Reaminder                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              ReaminderInvItem               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::FindFreeStackSpace(const struct FS_InvItem& InvItem, class UBP_MasterInventory_C* StopInv, bool* Reaminder, struct FS_InvItem* ReaminderInvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.FindFreeStackSpace"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UBP_MasterInventory_C*   StopInv;
		bool                           Reaminder;
		struct FS_InvItem              ReaminderInvItem;
	} params = {};

	params.InvItem = InvItem;
	params.StopInv = StopInv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Reaminder != nullptr)
		*Reaminder = params.Reaminder;
	if (ReaminderInvItem != nullptr)
		*ReaminderInvItem = params.ReaminderInvItem;
}


// Function BP_MasterInventory.BP_MasterInventory_C.AddItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           StackSearch                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShowNotifications              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           RemainingItem                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              RemainingInvItem               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlotID            NewItemSlot                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::AddItem(const struct FS_InvItem& Item, bool StackSearch, bool ShowNotifications, bool* RemainingItem, struct FS_InvItem* RemainingInvItem, struct FS_InvSlotID* NewItemSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AddItem"));

	struct
	{
		struct FS_InvItem              Item;
		bool                           StackSearch;
		bool                           ShowNotifications;
		bool                           RemainingItem;
		struct FS_InvItem              RemainingInvItem;
		struct FS_InvSlotID            NewItemSlot;
	} params = {};

	params.Item = Item;
	params.StackSearch = StackSearch;
	params.ShowNotifications = ShowNotifications;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RemainingItem != nullptr)
		*RemainingItem = params.RemainingItem;
	if (RemainingInvItem != nullptr)
		*RemainingInvItem = params.RemainingInvItem;
	if (NewItemSlot != nullptr)
		*NewItemSlot = params.NewItemSlot;
}


// Function BP_MasterInventory.BP_MasterInventory_C.ConstructSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ConstructSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ConstructSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ConstructItemSpawnList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_SpawnerList>  SpawnList                      (CPF_Parm, CPF_OutParm)

void UBP_MasterInventory_C::ConstructItemSpawnList(TArray<struct FS_SpawnerList>* SpawnList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ConstructItemSpawnList"));

	struct
	{
		TArray<struct FS_SpawnerList>  SpawnList;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnList != nullptr)
		*SpawnList = params.SpawnList;
}


// Function BP_MasterInventory.BP_MasterInventory_C.FindEmptySlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowRotation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           WeightCheck                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            WeightCheckAmount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SpaceFound                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotated                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      FoundSlots                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_MasterInventory_C::FindEmptySlots(bool AllowRotation, const struct FName& ItemId, bool WeightCheck, int WeightCheckAmount, bool* SpaceFound, bool* Rotated, TArray<struct FS_InvSlot>* FoundSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.FindEmptySlots"));

	struct
	{
		bool                           AllowRotation;
		struct FName                   ItemId;
		bool                           WeightCheck;
		int                            WeightCheckAmount;
		bool                           SpaceFound;
		bool                           Rotated;
		TArray<struct FS_InvSlot>      FoundSlots;
	} params = {};

	params.AllowRotation = AllowRotation;
	params.ItemId = ItemId;
	params.WeightCheck = WeightCheck;
	params.WeightCheckAmount = WeightCheckAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpaceFound != nullptr)
		*SpaceFound = params.SpaceFound;
	if (Rotated != nullptr)
		*Rotated = params.Rotated;
	if (FoundSlots != nullptr)
		*FoundSlots = params.FoundSlots;
}


// Function BP_MasterInventory.BP_MasterInventory_C.EmptyInventory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DestroyItems                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterInventory_C*   NewItemInventory               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::EmptyInventory(bool DestroyItems, class UBP_MasterInventory_C* NewItemInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.EmptyInventory"));

	struct
	{
		bool                           DestroyItems;
		class UBP_MasterInventory_C*   NewItemInventory;
	} params = {};

	params.DestroyItems = DestroyItems;
	params.NewItemInventory = NewItemInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SpawnItemAtLocation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SpawnItemAtLocation(const struct FTransform& Transform, const struct FS_InvItem& InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SpawnItemAtLocation"));

	struct
	{
		struct FTransform              Transform;
		struct FS_InvItem              InvItem;
	} params = {};

	params.Transform = Transform;
	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK LoadWeaponAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterInventory_C::SGK_LoadWeaponAttachments(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK LoadWeaponAttachments"));

	struct
	{
		bool                           Visible;
	} params = {};

	params.Visible = Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK ShowAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::SGK_ShowAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK ShowAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK RemoveAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AttachmentType>  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK RemoveAttachment"));

	struct
	{
		TEnumAsByte<E_AttachmentType>  Attachment;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK SpawnOverflowItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK SpawnOverflowItems"));

	struct
	{
		struct FS_InvItem              InvItem;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK ItemMovedInInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::SGK_ItemMovedInInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK ItemMovedInInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateSpecialSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateSpecialSlot"));

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


// Function BP_MasterInventory.BP_MasterInventory_C.SGK ToggleComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::SGK_ToggleComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK ToggleComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK RemoveAdditionalChecks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK RemoveAdditionalChecks"));

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


// Function BP_MasterInventory.BP_MasterInventory_C.SGK ItemSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Sounds>          SoundType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_ItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK ItemSound"));

	struct
	{
		struct FName                   ItemId;
		TEnumAsByte<E_Sounds>          SoundType;
	} params = {};

	params.ItemId = ItemId;
	params.SoundType = SoundType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateAllAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::SGK_UpdateAllAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateAllAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK DestroyWeaponAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::SGK_DestroyWeaponAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK DestroyWeaponAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateCharacterYaw
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_UpdateCharacterYaw(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateCharacterYaw"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerCancelCraftingListing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        CancelQueue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerCancelCraftingListing(const struct FS_CraftingQueue& CancelQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerCancelCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        CancelQueue;
	} params = {};

	params.CancelQueue = CancelQueue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateClientCraftingListing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        NewQueueListing                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerUpdateClientCraftingListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateClientCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        NewQueueListing;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.NewQueueListing = NewQueueListing;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerStartClientListingTimer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CraftingRecipe                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerStartClientListingTimer(const struct FName& CraftingRecipe, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerStartClientListingTimer"));

	struct
	{
		struct FName                   CraftingRecipe;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.CraftingRecipe = CraftingRecipe;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerAddClientCraftingListing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        NewQueueListing                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerAddClientCraftingListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerAddClientCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        NewQueueListing;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.NewQueueListing = NewQueueListing;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.FinishedCraftingTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::FinishedCraftingTimer(const struct FName& Recipe, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.FinishedCraftingTimer"));

	struct
	{
		struct FName                   Recipe;
		int                            Amount;
	} params = {};

	params.Recipe = Recipe;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ResetCraftingTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ResetCraftingTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ResetCraftingTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.CheckCraftingRequirements
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::CheckCraftingRequirements(const struct FName& Recipe, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CheckCraftingRequirements"));

	struct
	{
		struct FName                   Recipe;
		int                            Amount;
	} params = {};

	params.Recipe = Recipe;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerCreateNewListingCheck
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RecipeName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerCreateNewListingCheck(const struct FName& RecipeName, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerCreateNewListingCheck"));

	struct
	{
		struct FName                   RecipeName;
		int                            Amount;
	} params = {};

	params.RecipeName = RecipeName;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.OwnerDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::OwnerDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.OwnerDestroyed"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params = {};

	params.DestroyedActor = DestroyedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerSpawnDestructionBag
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ServerSpawnDestructionBag()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerSpawnDestructionBag"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.CreateNotificationInChild
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_NotificationDetails  NotificationDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::CreateNotificationInChild(const struct FS_NotificationDetails& NotificationDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CreateNotificationInChild"));

	struct
	{
		struct FS_NotificationDetails  NotificationDetails;
	} params = {};

	params.NotificationDetails = NotificationDetails;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGKSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.SGKSave"));

	struct
	{
		class UBP_SGKSaveGame_C*       Save;
	} params = {};

	params.Save = Save;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.InitializeComponentSaveSystem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::InitializeComponentSaveSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.InitializeComponentSaveSystem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.LoadComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::LoadComponent(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.LoadComponent"));

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


// Function BP_MasterInventory.BP_MasterInventory_C.CheckItemSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::CheckItemSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.CheckItemSpawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateRootItems
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ServerUpdateRootItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateRootItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.MulticastSetDetails
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_ContainerDetails     Details                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::MulticastSetDetails(const struct FS_ContainerDetails& Details)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.MulticastSetDetails"));

	struct
	{
		struct FS_ContainerDetails     Details;
	} params = {};

	params.Details = Details;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateItemSlots
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerUpdateItemSlots(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateItemSlots"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
	} params = {};

	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.AddPanelToUsingPlayers
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::AddPanelToUsingPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.AddPanelToUsingPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.MulticastForceItemCount
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ItemCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::MulticastForceItemCount(int ItemCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.MulticastForceItemCount"));

	struct
	{
		int                            ItemCount;
	} params = {};

	params.ItemCount = ItemCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ClientUpdateInventory
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>      Inventory                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_MasterInventory_C::ClientUpdateInventory(TArray<struct FS_InvSlot> Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ClientUpdateInventory"));

	struct
	{
		TArray<struct FS_InvSlot>      Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerForceRootItemUpdate
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::ServerForceRootItemUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerForceRootItemUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerEmptyInventory
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   StartInventory                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerEmptyInventory(class UBP_MasterInventory_C* StartInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerEmptyInventory"));

	struct
	{
		class UBP_MasterInventory_C*   StartInventory;
	} params = {};

	params.StartInventory = StartInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerAddItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerAddItem(const struct FS_InvItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ServerAddItem"));

	struct
	{
		struct FS_InvItem              Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterInventory.BP_MasterInventory_C.ExecuteUbergraph_BP_MasterInventory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterInventory_C::ExecuteUbergraph_BP_MasterInventory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.ExecuteUbergraph_BP_MasterInventory"));

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


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateWeightUI__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterInventory_C::UpdateWeightUI__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterInventory.BP_MasterInventory_C.UpdateWeightUI__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
