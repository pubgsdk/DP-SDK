// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GlobalInventoryManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.DestroyItemInventory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   MasterInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::DestroyItemInventory(class UBP_MasterInventory_C* MasterInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.DestroyItemInventory"));

	struct
	{
		class UBP_MasterInventory_C*   MasterInventory;
	} params = {};

	params.MasterInventory = MasterInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.ClearContainerInventories
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GlobalInventoryManager_C::ClearContainerInventories()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.ClearContainerInventories"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AddDefaults                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           AddStartingItems               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Replicated                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              NewItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::CreateNewItem(const struct FName& ItemId, int Amount, bool AddDefaults, bool AddStartingItems, bool Rotated, bool Replicated, struct FS_InvItem* NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewItem"));

	struct
	{
		struct FName                   ItemId;
		int                            Amount;
		bool                           AddDefaults;
		bool                           AddStartingItems;
		bool                           Rotated;
		bool                           Replicated;
		struct FS_InvItem              NewItem;
	} params = {};

	params.ItemId = ItemId;
	params.Amount = Amount;
	params.AddDefaults = AddDefaults;
	params.AddStartingItems = AddStartingItems;
	params.Rotated = Rotated;
	params.Replicated = Replicated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewItem != nullptr)
		*NewItem = params.NewItem;
}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewWeaponInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Replicate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           AllowStartingItems             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_WeaponInventory_C*   WeaponInventory                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::CreateNewWeaponInventory(const struct FS_InvItem& Item, bool Replicate, bool AllowStartingItems, class UBP_WeaponInventory_C** WeaponInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewWeaponInventory"));

	struct
	{
		struct FS_InvItem              Item;
		bool                           Replicate;
		bool                           AllowStartingItems;
		class UBP_WeaponInventory_C*   WeaponInventory;
	} params = {};

	params.Item = Item;
	params.Replicate = Replicate;
	params.AllowStartingItems = AllowStartingItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WeaponInventory != nullptr)
		*WeaponInventory = params.WeaponInventory;
}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Replicate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           AllowStartingItems             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterInventory_C*   Inventory                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::CreateNewInventory(const struct FS_InvItem& Item, bool Replicate, bool AllowStartingItems, class UBP_MasterInventory_C** Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewInventory"));

	struct
	{
		struct FS_InvItem              Item;
		bool                           Replicate;
		bool                           AllowStartingItems;
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Item = Item;
	params.Replicate = Replicate;
	params.AllowStartingItems = AllowStartingItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.InitializeGlobalInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GlobalInventoryManager_C::InitializeGlobalInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.InitializeGlobalInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.LoadSave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::LoadSave(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.LoadSave"));

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


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.ExecuteUbergraph_BP_GlobalInventoryManager
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::ExecuteUbergraph_BP_GlobalInventoryManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.ExecuteUbergraph_BP_GlobalInventoryManager"));

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
