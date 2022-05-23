// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SaveSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SaveSystem.BP_SaveSystem_C.GetMetaDataObject
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UBP_SGKSaveGameMetaData_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UBP_SGKSaveGameMetaData_C* ABP_SaveSystem_C::GetMetaDataObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.GetMetaDataObject"));

	struct
	{
		class UBP_SGKSaveGameMetaData_C* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SaveSystem.BP_SaveSystem_C.GetSaveDataObject
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveSlotName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bAlreadyExisting               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

class UBP_SGKSaveGame_C* ABP_SaveSystem_C::GetSaveDataObject(const struct FString& SaveSlotName, bool* bAlreadyExisting, struct FString* SaveSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.GetSaveDataObject"));

	struct
	{
		struct FString                 SaveSlotName;
		class UBP_SGKSaveGame_C*       ReturnValue;
		bool                           bAlreadyExisting;
		struct FString                 SaveSlot;
	} params = {};

	params.SaveSlotName = SaveSlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bAlreadyExisting != nullptr)
		*bAlreadyExisting = params.bAlreadyExisting;
	if (SaveSlot != nullptr)
		*SaveSlot = params.SaveSlot;

	return params.ReturnValue;
}


// Function BP_SaveSystem.BP_SaveSystem_C.SaveGame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveSlotName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::SaveGame(const struct FString& SaveSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.SaveGame"));

	struct
	{
		struct FString                 SaveSlotName;
	} params = {};

	params.SaveSlotName = SaveSlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.ItemSpawnSaveData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterItemSpawner_C* ItemSpawner                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SaveFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_MasterItemSave       ItemSave                       (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::ItemSpawnSaveData(class ABP_MasterItemSpawner_C* ItemSpawner, class UBP_SGKSaveGame_C* SaveGame, bool* SaveFound, struct FS_MasterItemSave* ItemSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.ItemSpawnSaveData"));

	struct
	{
		class ABP_MasterItemSpawner_C* ItemSpawner;
		class UBP_SGKSaveGame_C*       SaveGame;
		bool                           SaveFound;
		struct FS_MasterItemSave       ItemSave;
	} params = {};

	params.ItemSpawner = ItemSpawner;
	params.SaveGame = SaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveFound != nullptr)
		*SaveFound = params.SaveFound;
	if (ItemSave != nullptr)
		*ItemSave = params.ItemSave;
}


// Function BP_SaveSystem.BP_SaveSystem_C.DeleteMetaData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::DeleteMetaData(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.DeleteMetaData"));

	struct
	{
		struct FString                 SlotName;
	} params = {};

	params.SlotName = SlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.SaveMetaData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveSlotName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::SaveMetaData(const struct FString& SaveSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.SaveMetaData"));

	struct
	{
		struct FString                 SaveSlotName;
	} params = {};

	params.SaveSlotName = SaveSlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.DebugText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DebugText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TextColour                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::DebugText(const struct FString& DebugText, const struct FLinearColor& TextColour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.DebugText"));

	struct
	{
		struct FString                 DebugText;
		struct FLinearColor            TextColour;
	} params = {};

	params.DebugText = DebugText;
	params.TextColour = TextColour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.LoadSave
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InGameLoad                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 SaveSlotName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::LoadSave(bool InGameLoad, const struct FString& SaveSlotName, const struct FString& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.LoadSave"));

	struct
	{
		bool                           InGameLoad;
		struct FString                 SaveSlotName;
		struct FString                 LevelName;
	} params = {};

	params.InGameLoad = InGameLoad;
	params.SaveSlotName = SaveSlotName;
	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.FindPlayerLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              Transform                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SaveSystem_C::FindPlayerLocation(const struct FText& PlayerName, struct FTransform* Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.FindPlayerLocation"));

	struct
	{
		struct FText                   PlayerName;
		bool                           ReturnValue;
		struct FTransform              Transform;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Transform != nullptr)
		*Transform = params.Transform;

	return params.ReturnValue;
}


// Function BP_SaveSystem.BP_SaveSystem_C.LoadBuildParts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SaveSystem_C::LoadBuildParts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.LoadBuildParts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.LoadSavedItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SaveSystem_C::LoadSavedItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.LoadSavedItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.Completed_2E0E08C140CD9EA9A688ED8EE2D8D76F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SaveSystem_C::Completed_2E0E08C140CD9EA9A688ED8EE2D8D76F(class USaveGame* SaveGame, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.Completed_2E0E08C140CD9EA9A688ED8EE2D8D76F"));

	struct
	{
		class USaveGame*               SaveGame;
		bool                           bSuccess;
	} params = {};

	params.SaveGame = SaveGame;
	params.bSuccess = bSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.Completed_8B8C45894D108124671519ADDFDB1EB5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SaveSystem_C::Completed_8B8C45894D108124671519ADDFDB1EB5(class USaveGame* SaveGame, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.Completed_8B8C45894D108124671519ADDFDB1EB5"));

	struct
	{
		class USaveGame*               SaveGame;
		bool                           bSuccess;
	} params = {};

	params.SaveGame = SaveGame;
	params.bSuccess = bSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.Completed_E4E68CAB46C23F15046FDB8C35460535
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SaveSystem_C::Completed_E4E68CAB46C23F15046FDB8C35460535(class USaveGame* SaveGame, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.Completed_E4E68CAB46C23F15046FDB8C35460535"));

	struct
	{
		class USaveGame*               SaveGame;
		bool                           bSuccess;
	} params = {};

	params.SaveGame = SaveGame;
	params.bSuccess = bSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.CallSaveEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveSlot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::CallSaveEvents(const struct FString& SaveSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.CallSaveEvents"));

	struct
	{
		struct FString                 SaveSlot;
	} params = {};

	params.SaveSlot = SaveSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.ServerSaveGame
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveSlotName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::ServerSaveGame(const struct FString& SaveSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.ServerSaveGame"));

	struct
	{
		struct FString                 SaveSlotName;
	} params = {};

	params.SaveSlotName = SaveSlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.StartAutoSaveTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SaveSystem_C::StartAutoSaveTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.StartAutoSaveTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.AutoSaveGame
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SaveSystem_C::AutoSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.AutoSaveGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.SaveDataToSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class USaveGame*               SaveGameObject                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::SaveDataToSlot(const struct FString& SlotName, class USaveGame* SaveGameObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.SaveDataToSlot"));

	struct
	{
		struct FString                 SlotName;
		class USaveGame*               SaveGameObject;
	} params = {};

	params.SlotName = SlotName;
	params.SaveGameObject = SaveGameObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.UpdatePlayerSave
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::UpdatePlayerSave(const struct FString& SaveName, class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.UpdatePlayerSave"));

	struct
	{
		struct FString                 SaveName;
		class UBP_PlayerInventory_C*   PlayerInventory;
	} params = {};

	params.SaveName = SaveName;
	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.DeleteSettingsSave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SaveSystem_C::DeleteSettingsSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.DeleteSettingsSave"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.DeletePlayerSave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerSave                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::DeletePlayerSave(const struct FText& PlayerSave, const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.DeletePlayerSave"));

	struct
	{
		struct FText                   PlayerSave;
		struct FString                 SlotName;
	} params = {};

	params.PlayerSave = PlayerSave;
	params.SlotName = SlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.DeleteSave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SaveSystem_C::DeleteSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.DeleteSave"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SaveSystem_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.InitializeSaveSystem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SaveSystem_C::InitializeSaveSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.InitializeSaveSystem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SaveSystem.BP_SaveSystem_C.ExecuteUbergraph_BP_SaveSystem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::ExecuteUbergraph_BP_SaveSystem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.ExecuteUbergraph_BP_SaveSystem"));

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


// Function BP_SaveSystem.BP_SaveSystem_C.LoadData__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::LoadData__DelegateSignature(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.LoadData__DelegateSignature"));

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


// Function BP_SaveSystem.BP_SaveSystem_C.SaveData__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SaveSystem_C::SaveData__DelegateSignature(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SaveSystem.BP_SaveSystem_C.SaveData__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
