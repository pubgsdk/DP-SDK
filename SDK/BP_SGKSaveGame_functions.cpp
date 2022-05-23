// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKSaveGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindCookingSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_CookingSave          Array_Element                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindCookingSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_CookingSave* Array_Element)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindCookingSaveData"));

	struct
	{
		struct FTransform              Transform;
		struct FString                 LevelName;
		bool                           SaveFound;
		struct FS_CookingSave          Array_Element;
	} params = {};

	params.Transform = Transform;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindItemSpawnerSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterItemSpawner_C* ItemSpawner                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_ItemSpawnerSave> ItemSpawnerSaves               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_MasterItemSave       Item                           (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

bool UBP_SGKSaveGame_C::FindItemSpawnerSaveData(class ABP_MasterItemSpawner_C* ItemSpawner, TArray<struct FS_ItemSpawnerSave>* ItemSpawnerSaves, struct FS_MasterItemSave* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindItemSpawnerSaveData"));

	struct
	{
		class ABP_MasterItemSpawner_C* ItemSpawner;
		TArray<struct FS_ItemSpawnerSave> ItemSpawnerSaves;
		bool                           ReturnValue;
		struct FS_MasterItemSave       Item;
	} params = {};

	params.ItemSpawner = ItemSpawner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemSpawnerSaves != nullptr)
		*ItemSpawnerSaves = params.ItemSpawnerSaves;
	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindPlayerSave
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_PlayerSave           PlayerSave                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

bool UBP_SGKSaveGame_C::FindPlayerSave(const struct FText& PlayerName, struct FS_PlayerSave* PlayerSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindPlayerSave"));

	struct
	{
		struct FText                   PlayerName;
		bool                           ReturnValue;
		struct FS_PlayerSave           PlayerSave;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PlayerSave != nullptr)
		*PlayerSave = params.PlayerSave;

	return params.ReturnValue;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindSpecificResourceSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ResourceLocation               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           ResourceRemoved                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            ResourceAmount                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindSpecificResourceSaveData(const struct FVector& ResourceLocation, const struct FString& LevelName, bool* ResourceRemoved, int* ResourceAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindSpecificResourceSaveData"));

	struct
	{
		struct FVector                 ResourceLocation;
		struct FString                 LevelName;
		bool                           ResourceRemoved;
		int                            ResourceAmount;
	} params = {};

	params.ResourceLocation = ResourceLocation;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ResourceRemoved != nullptr)
		*ResourceRemoved = params.ResourceRemoved;
	if (ResourceAmount != nullptr)
		*ResourceAmount = params.ResourceAmount;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindEquipmentSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_EquipmentInvSave     Array_Element                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindEquipmentSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_EquipmentInvSave* Array_Element)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindEquipmentSaveData"));

	struct
	{
		struct FTransform              Transform;
		struct FString                 LevelName;
		bool                           SaveFound;
		struct FS_EquipmentInvSave     Array_Element;
	} params = {};

	params.Transform = Transform;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindVenderSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_VendorSave           Array_Element                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindVenderSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_VendorSave* Array_Element)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindVenderSaveData"));

	struct
	{
		struct FTransform              Transform;
		struct FString                 LevelName;
		bool                           SaveFound;
		struct FS_VendorSave           Array_Element;
	} params = {};

	params.Transform = Transform;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindResourceSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_ResourcesSaves> RemovedResources               (CPF_Parm, CPF_OutParm)

void UBP_SGKSaveGame_C::FindResourceSaveData(const struct FString& LevelName, bool* SaveFound, TArray<struct FS_ResourcesSaves>* RemovedResources)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindResourceSaveData"));

	struct
	{
		struct FString                 LevelName;
		bool                           SaveFound;
		TArray<struct FS_ResourcesSaves> RemovedResources;
	} params = {};

	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
	if (RemovedResources != nullptr)
		*RemovedResources = params.RemovedResources;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindCraftingSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_CraftingSave         Array_Element                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindCraftingSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_CraftingSave* Array_Element)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindCraftingSaveData"));

	struct
	{
		struct FTransform              Transform;
		struct FString                 LevelName;
		bool                           SaveFound;
		struct FS_CraftingSave         Array_Element;
	} params = {};

	params.Transform = Transform;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SelectLevelSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SelectLevelSaveData(const struct FString& LevelName, bool* SaveFound, struct FS_LevelSaveData* LevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SelectLevelSaveData"));

	struct
	{
		struct FString                 LevelName;
		bool                           SaveFound;
		struct FS_LevelSaveData        LevelSaveData;
	} params = {};

	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
	if (LevelSaveData != nullptr)
		*LevelSaveData = params.LevelSaveData;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.DeletePlayerSave
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_SGKSaveGame_C::DeletePlayerSave(const struct FText& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.DeletePlayerSave"));

	struct
	{
		struct FText                   PlayerName;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.ClearLevelSaveData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::ClearLevelSaveData(const struct FString& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.ClearLevelSaveData"));

	struct
	{
		struct FString                 LevelName;
	} params = {};

	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SavePlayerInventory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SavePlayerInventory(class UBP_PlayerInventory_C* PlayerInventory, const struct FString& Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SavePlayerInventory"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		struct FString                 Level;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.GatherInventoryData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>      Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FS_InvSave>      Otherinventories               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FS_InvSaveSlot>  InventorySaveData              (CPF_Parm, CPF_OutParm)
// TArray<struct FS_InvSave>      NewOtherInventories            (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKSaveGame_C::GatherInventoryData(TArray<struct FS_InvSlot>* Inventory, TArray<struct FS_InvSave>* Otherinventories, TArray<struct FS_InvSaveSlot>* InventorySaveData, TArray<struct FS_InvSave>* NewOtherInventories)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.GatherInventoryData"));

	struct
	{
		TArray<struct FS_InvSlot>      Inventory;
		TArray<struct FS_InvSave>      Otherinventories;
		TArray<struct FS_InvSaveSlot>  InventorySaveData;
		TArray<struct FS_InvSave>      NewOtherInventories;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
	if (Otherinventories != nullptr)
		*Otherinventories = params.Otherinventories;
	if (InventorySaveData != nullptr)
		*InventorySaveData = params.InventorySaveData;
	if (NewOtherInventories != nullptr)
		*NewOtherInventories = params.NewOtherInventories;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveResourceInstanceData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 RemovedInstances               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SaveResourceInstanceData(const struct FVector& RemovedInstances, int Amount, const struct FString& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveResourceInstanceData"));

	struct
	{
		struct FVector                 RemovedInstances;
		int                            Amount;
		struct FString                 LevelName;
	} params = {};

	params.RemovedInstances = RemovedInstances;
	params.Amount = Amount;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.GatherAttachmentData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_WeaponInventory_C*   WeaponInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSave>      OtherInventorySaves            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FS_InvSave>      OtherInventorySavesL1          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot> AttachmentSaveSlotsL1          (CPF_Parm, CPF_OutParm)

void UBP_SGKSaveGame_C::GatherAttachmentData(class UBP_WeaponInventory_C* WeaponInventory, TArray<struct FS_InvSave>* OtherInventorySaves, TArray<struct FS_InvSave>* OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>* AttachmentSaveSlotsL1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.GatherAttachmentData"));

	struct
	{
		class UBP_WeaponInventory_C*   WeaponInventory;
		TArray<struct FS_InvSave>      OtherInventorySaves;
		TArray<struct FS_InvSave>      OtherInventorySavesL1;
		TArray<struct FS_AttachmentSaveSlot> AttachmentSaveSlotsL1;
	} params = {};

	params.WeaponInventory = WeaponInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OtherInventorySaves != nullptr)
		*OtherInventorySaves = params.OtherInventorySaves;
	if (OtherInventorySavesL1 != nullptr)
		*OtherInventorySavesL1 = params.OtherInventorySavesL1;
	if (AttachmentSaveSlotsL1 != nullptr)
		*AttachmentSaveSlotsL1 = params.AttachmentSaveSlotsL1;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SetLevelData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_LevelSaveData        SaveData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SetLevelData(const struct FS_LevelSaveData& SaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SetLevelData"));

	struct
	{
		struct FS_LevelSaveData        SaveData;
	} params = {};

	params.SaveData = SaveData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareCookingSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            ExtraDataIndex                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        NewLevelSaveData               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareCookingSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareCookingSaveData"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		struct FS_LevelSaveData        LevelSaveData;
		int                            ExtraDataIndex;
		struct FS_LevelSaveData        NewLevelSaveData;
	} params = {};

	params.Inventory = Inventory;
	params.LevelSaveData = LevelSaveData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = params.ExtraDataIndex;
	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = params.NewLevelSaveData;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareCraftingSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            ExtraDataIndex                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        NewLevelSaveData               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareCraftingSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareCraftingSaveData"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		struct FS_LevelSaveData        LevelSaveData;
		int                            ExtraDataIndex;
		struct FS_LevelSaveData        NewLevelSaveData;
	} params = {};

	params.Inventory = Inventory;
	params.LevelSaveData = LevelSaveData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = params.ExtraDataIndex;
	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = params.NewLevelSaveData;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareEquipmentSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C* EquipmentInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            ExtraDataIndex                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        NewLevelSaveData               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareEquipmentSaveData(class UBP_EquipmentInventory_C* EquipmentInventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareEquipmentSaveData"));

	struct
	{
		class UBP_EquipmentInventory_C* EquipmentInventory;
		struct FS_LevelSaveData        LevelSaveData;
		int                            ExtraDataIndex;
		struct FS_LevelSaveData        NewLevelSaveData;
	} params = {};

	params.EquipmentInventory = EquipmentInventory;
	params.LevelSaveData = LevelSaveData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = params.ExtraDataIndex;
	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = params.NewLevelSaveData;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareVenderSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            ExtraDataIndex                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        NewLevelSaveData               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareVenderSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareVenderSaveData"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		struct FS_LevelSaveData        LevelSaveData;
		int                            ExtraDataIndex;
		struct FS_LevelSaveData        NewLevelSaveData;
	} params = {};

	params.Inventory = Inventory;
	params.LevelSaveData = LevelSaveData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = params.ExtraDataIndex;
	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = params.NewLevelSaveData;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareStorageSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            ExtraDataIndex                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        NewLevelSaveData               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareStorageSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareStorageSaveData"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		struct FS_LevelSaveData        LevelSaveData;
		int                            ExtraDataIndex;
		struct FS_LevelSaveData        NewLevelSaveData;
	} params = {};

	params.Inventory = Inventory;
	params.LevelSaveData = LevelSaveData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = params.ExtraDataIndex;
	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = params.NewLevelSaveData;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindStorageSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_StorageSave          Array_Element                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindStorageSaveData(const struct FTransform& Transform, const struct FString& LevelName, bool* SaveFound, struct FS_StorageSave* Array_Element)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindStorageSaveData"));

	struct
	{
		struct FTransform              Transform;
		struct FString                 LevelName;
		bool                           SaveFound;
		struct FS_StorageSave          Array_Element;
	} params = {};

	params.Transform = Transform;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SaveItem(const struct FTransform& Transform, const struct FS_InvItem& Item, const struct FString& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveItem"));

	struct
	{
		struct FTransform              Transform;
		struct FS_InvItem              Item;
		struct FString                 LevelName;
	} params = {};

	params.Transform = Transform;
	params.Item = Item;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveItemSpawners
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterItemSpawner_C* ItemSpawner                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SaveItemSpawners(class ABP_MasterItemSpawner_C* ItemSpawner, const struct FString& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveItemSpawners"));

	struct
	{
		class ABP_MasterItemSpawner_C* ItemSpawner;
		struct FString                 LevelName;
	} params = {};

	params.ItemSpawner = ItemSpawner;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveWeaponSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C* EquipmentInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSave>      OtherInventorySaves            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FS_WeaponSlotSave> WeaponSaveSlots                (CPF_Parm, CPF_OutParm)
// TArray<struct FS_InvSave>      NewOtherInventories            (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKSaveGame_C::SaveWeaponSlots(class UBP_EquipmentInventory_C* EquipmentInventory, TArray<struct FS_InvSave>* OtherInventorySaves, TArray<struct FS_WeaponSlotSave>* WeaponSaveSlots, TArray<struct FS_InvSave>* NewOtherInventories)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveWeaponSlots"));

	struct
	{
		class UBP_EquipmentInventory_C* EquipmentInventory;
		TArray<struct FS_InvSave>      OtherInventorySaves;
		TArray<struct FS_WeaponSlotSave> WeaponSaveSlots;
		TArray<struct FS_InvSave>      NewOtherInventories;
	} params = {};

	params.EquipmentInventory = EquipmentInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OtherInventorySaves != nullptr)
		*OtherInventorySaves = params.OtherInventorySaves;
	if (WeaponSaveSlots != nullptr)
		*WeaponSaveSlots = params.WeaponSaveSlots;
	if (NewOtherInventories != nullptr)
		*NewOtherInventories = params.NewOtherInventories;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveEquipmentSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C* EquipmentInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSave>      OtherInventorySaves            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FS_EquipmentSlotSave> EquipmentSaveSlots             (CPF_Parm, CPF_OutParm)
// TArray<struct FS_InvSave>      NewOtherInventories            (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKSaveGame_C::SaveEquipmentSlots(class UBP_EquipmentInventory_C* EquipmentInventory, TArray<struct FS_InvSave>* OtherInventorySaves, TArray<struct FS_EquipmentSlotSave>* EquipmentSaveSlots, TArray<struct FS_InvSave>* NewOtherInventories)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveEquipmentSlots"));

	struct
	{
		class UBP_EquipmentInventory_C* EquipmentInventory;
		TArray<struct FS_InvSave>      OtherInventorySaves;
		TArray<struct FS_EquipmentSlotSave> EquipmentSaveSlots;
		TArray<struct FS_InvSave>      NewOtherInventories;
	} params = {};

	params.EquipmentInventory = EquipmentInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OtherInventorySaves != nullptr)
		*OtherInventorySaves = params.OtherInventorySaves;
	if (EquipmentSaveSlots != nullptr)
		*EquipmentSaveSlots = params.EquipmentSaveSlots;
	if (NewOtherInventories != nullptr)
		*NewOtherInventories = params.NewOtherInventories;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveInventory__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKSaveGame_C::SaveInventory__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveInventory__DelegateSignature"));

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
