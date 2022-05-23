// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGameModeInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetResourceManager
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_ResourceManager_C*   ResourceManager                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameModeInterface_C::SGK_GetResourceManager(class ABP_ResourceManager_C** ResourceManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetResourceManager"));

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


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetSaveGame
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_SaveSystem_C*        SaveGame                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameModeInterface_C::SGK_GetSaveGame(class ABP_SaveSystem_C** SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetSaveGame"));

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


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK SetSaveSystem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_SaveSystem_C*        SaveSystem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameModeInterface_C::SGK_SetSaveSystem(class ABP_SaveSystem_C* SaveSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK SetSaveSystem"));

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


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK SaveGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameModeInterface_C::SGK_SaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK SaveGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetGlobalInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_GlobalInventoryManager_C* GlobalInventory                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameModeInterface_C::SGK_GetGlobalInventory(class ABP_GlobalInventoryManager_C** GlobalInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetGlobalInventory"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
