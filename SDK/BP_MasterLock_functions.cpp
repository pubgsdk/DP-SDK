// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterLock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterLock.BP_MasterLock_C.SaveExtraData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            ExtraDataIndex                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        NewLevelSaveData               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_MasterLock_C::SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SaveExtraData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		struct FS_LevelSaveData        LevelSaveData;
		int                            ExtraDataIndex;
		struct FS_LevelSaveData        NewLevelSaveData;
	} params = {};

	params.SaveGame = SaveGame;
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


// Function BP_MasterLock.BP_MasterLock_C.SGK AddMultipleOwners
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           Owners                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterLock_C::SGK_AddMultipleOwners(TArray<struct FText>* Owners)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK AddMultipleOwners"));

	struct
	{
		TArray<struct FText>           Owners;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Owners != nullptr)
		*Owners = params.Owners;

	return params.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK AddOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterLock_C::SGK_AddOwner(const struct FText& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK AddOwner"));

	struct
	{
		struct FText                   PlayerName;
		bool                           ReturnValue;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK UpdateCode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterLock_C::SGK_UpdateCode(const struct FText& Code)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK UpdateCode"));

	struct
	{
		struct FText                   Code;
		bool                           ReturnValue;
	} params = {};

	params.Code = Code;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK CodeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           CodeAccepted                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterLock_C::SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK CodeCheck"));

	struct
	{
		struct FText                   Code;
		bool                           CodeAccepted;
	} params = {};

	params.Code = Code;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CodeAccepted != nullptr)
		*CodeAccepted = params.CodeAccepted;
}


// Function BP_MasterLock.BP_MasterLock_C.OnRep_Locked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterLock_C::OnRep_Locked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.OnRep_Locked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterLock.BP_MasterLock_C.SaveLockData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        NewLevelSaveData               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

int ABP_MasterLock_C::SaveLockData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, struct FS_LevelSaveData* NewLevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SaveLockData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		struct FS_LevelSaveData        LevelSaveData;
		int                            ReturnValue;
		struct FS_LevelSaveData        NewLevelSaveData;
	} params = {};

	params.SaveGame = SaveGame;
	params.LevelSaveData = LevelSaveData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = params.NewLevelSaveData;

	return params.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.LoadLockData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OwnerLocation                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterLock_C::LoadLockData(class UBP_SGKSaveGame_C* SaveGame, int Index, struct FVector* OwnerLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.LoadLockData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		int                            Index;
		struct FVector                 OwnerLocation;
	} params = {};

	params.SaveGame = SaveGame;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OwnerLocation != nullptr)
		*OwnerLocation = params.OwnerLocation;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK VerifyPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterLock_C::SGK_VerifyPlayer(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK VerifyPlayer"));

	struct
	{
		struct FText                   Text;
		bool                           ReturnValue;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.IsVerifiedPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsVerified                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterLock_C::IsVerifiedPlayer(const struct FText& PlayerName, bool* IsVerified)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.IsVerifiedPlayer"));

	struct
	{
		struct FText                   PlayerName;
		bool                           IsVerified;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsVerified != nullptr)
		*IsVerified = params.IsVerified;
}


// Function BP_MasterLock.BP_MasterLock_C.CanOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           AllowOpen                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterLock_C::CanOpen(const struct FText& Name, bool* AllowOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.CanOpen"));

	struct
	{
		struct FText                   Name;
		bool                           AllowOpen;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowOpen != nullptr)
		*AllowOpen = params.AllowOpen;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_MasterLock_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK PossibleActions"));

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


// Function BP_MasterLock.BP_MasterLock_C.SGK AllowInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowInteraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterLock_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK AllowInteraction"));

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


// Function BP_MasterLock.BP_MasterLock_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterLock_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK Interact"));

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


// Function BP_MasterLock.BP_MasterLock_C.LoadExtraData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterLock_C::LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.LoadExtraData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		int                            Index;
	} params = {};

	params.SaveGame = SaveGame;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterLock.BP_MasterLock_C.LockEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Locked                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterLock_C::LockEffects(bool Locked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.LockEffects"));

	struct
	{
		bool                           Locked;
	} params = {};

	params.Locked = Locked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterLock.BP_MasterLock_C.SGK BuildPartPlaced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FromSaveGame                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterLock_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.SGK BuildPartPlaced"));

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


// Function BP_MasterLock.BP_MasterLock_C.ExecuteUbergraph_BP_MasterLock
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterLock_C::ExecuteUbergraph_BP_MasterLock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterLock.BP_MasterLock_C.ExecuteUbergraph_BP_MasterLock"));

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
