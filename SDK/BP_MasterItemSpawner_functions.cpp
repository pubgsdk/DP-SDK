// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterItemSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.LoadItemSpawnerSave
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterItemSpawner_C::LoadItemSpawnerSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.LoadItemSpawnerSave"));

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


// Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.ConstructItemSpawnList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterItemSpawner_C::ConstructItemSpawnList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.ConstructItemSpawnList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.SpawnNewItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterItemSpawner_C::SpawnNewItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.SpawnNewItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterItemSpawner_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.SGKSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterItemSpawner_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.SGKSave"));

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


// Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.LoadItemSpawner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterItemSpawner_C::LoadItemSpawner(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.LoadItemSpawner"));

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


// Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterItemSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.ExecuteUbergraph_BP_MasterItemSpawner
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterItemSpawner_C::ExecuteUbergraph_BP_MasterItemSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemSpawner.BP_MasterItemSpawner_C.ExecuteUbergraph_BP_MasterItemSpawner"));

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
