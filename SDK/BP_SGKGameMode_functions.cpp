// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKGameMode.BP_SGKGameMode_C.Return AI Manager Settings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AIOptimization       AI_Settings                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKGameMode_C::Return_AI_Manager_Settings(struct FS_AIOptimization* AI_Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.Return AI Manager Settings"));

	struct
	{
		struct FS_AIOptimization       AI_Settings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AI_Settings != nullptr)
		*AI_Settings = params.AI_Settings;
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.Return AI Manager
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_AIManager_C*         AI_Manager                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKGameMode_C::Return_AI_Manager(class ABP_AIManager_C** AI_Manager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.Return AI Manager"));

	struct
	{
		class ABP_AIManager_C*         AI_Manager;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AI_Manager != nullptr)
		*AI_Manager = params.AI_Manager;
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetResourceManager
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_ResourceManager_C*   ResourceManager                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_GetResourceManager(class ABP_ResourceManager_C** ResourceManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetResourceManager"));

	struct
	{
		class ABP_ResourceManager_C*   ResourceManager;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ResourceManager != nullptr)
		*ResourceManager = params.ResourceManager;
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetSaveGame
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_SaveSystem_C*        SaveGame                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_GetSaveGame(class ABP_SaveSystem_C** SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetSaveGame"));

	struct
	{
		class ABP_SaveSystem_C*        SaveGame;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveGame != nullptr)
		*SaveGame = params.SaveGame;
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetGlobalInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_GlobalInventoryManager_C* GlobalInventory                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_GetGlobalInventory(class ABP_GlobalInventoryManager_C** GlobalInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetGlobalInventory"));

	struct
	{
		class ABP_GlobalInventoryManager_C* GlobalInventory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GlobalInventory != nullptr)
		*GlobalInventory = params.GlobalInventory;
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.HostChecking
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::HostChecking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.HostChecking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.Garbo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::Garbo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.Garbo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.UpdatePlayerCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::UpdatePlayerCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.UpdatePlayerCount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SpawnDefaultPawnAtTransform
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewPlayer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              SpawnTransform                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class APawn* ABP_SGKGameMode_C::SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.SpawnDefaultPawnAtTransform"));

	struct
	{
		class AController*             NewPlayer;
		struct FTransform              SpawnTransform;
		class APawn*                   ReturnValue;
	} params = {};

	params.NewPlayer = NewPlayer;
	params.SpawnTransform = SpawnTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.OnFailure_61AEF0854FDF14E393E7BEA7596A6A67
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::OnFailure_61AEF0854FDF14E393E7BEA7596A6A67()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.OnFailure_61AEF0854FDF14E393E7BEA7596A6A67"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.OnSuccess_61AEF0854FDF14E393E7BEA7596A6A67
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::OnSuccess_61AEF0854FDF14E393E7BEA7596A6A67()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.OnSuccess_61AEF0854FDF14E393E7BEA7596A6A67"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.OnFailure_3D80F6714E696C274E08E99924A3B3EC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::OnFailure_3D80F6714E696C274E08E99924A3B3EC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.OnFailure_3D80F6714E696C274E08E99924A3B3EC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.OnSuccess_3D80F6714E696C274E08E99924A3B3EC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::OnSuccess_3D80F6714E696C274E08E99924A3B3EC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.OnSuccess_3D80F6714E696C274E08E99924A3B3EC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK SaveGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::SGK_SaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.SGK SaveGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.K2_PostLogin
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKGameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.K2_PostLogin"));

	struct
	{
		class APlayerController*       NewPlayer;
	} params = {};

	params.NewPlayer = NewPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.AdvertiseCoop
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::AdvertiseCoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.AdvertiseCoop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.StartDedi
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::StartDedi()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.StartDedi"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK SetSaveSystem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_SaveSystem_C*        SaveSystem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_SetSaveSystem(class ABP_SaveSystem_C* SaveSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.SGK SetSaveSystem"));

	struct
	{
		class ABP_SaveSystem_C*        SaveSystem;
	} params = {};

	params.SaveSystem = SaveSystem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.ExecuteUbergraph_BP_SGKGameMode
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKGameMode_C::ExecuteUbergraph_BP_SGKGameMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.ExecuteUbergraph_BP_SGKGameMode"));

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


// Function BP_SGKGameMode.BP_SGKGameMode_C.CreateInventory__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKGameMode_C::CreateInventory__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameMode.BP_SGKGameMode_C.CreateInventory__DelegateSignature"));

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
