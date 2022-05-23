// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ResourceManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ResourceManager.BP_ResourceManager_C.LoadResourceSaves
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ResourceManager_C::LoadResourceSaves(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.LoadResourceSaves"));

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


// Function BP_ResourceManager.BP_ResourceManager_C.ReplaceInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFoliageInstancedStaticMeshComponent* FoliageInstance                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InstanceIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Interacted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ResourceManager_C::ReplaceInstance(class UFoliageInstancedStaticMeshComponent* FoliageInstance, int InstanceIndex, bool Interacted, class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.ReplaceInstance"));

	struct
	{
		class UFoliageInstancedStaticMeshComponent* FoliageInstance;
		int                            InstanceIndex;
		bool                           Interacted;
		class UBP_PlayerInventory_C*   PlayerInventory;
	} params = {};

	params.FoliageInstance = FoliageInstance;
	params.InstanceIndex = InstanceIndex;
	params.Interacted = Interacted;
	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResourceManager.BP_ResourceManager_C.GetInstanceAtTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UStaticMesh*             StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterResourceComponent_C* ResourceInstance               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InstanceIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool ABP_ResourceManager_C::GetInstanceAtTransform(const struct FTransform& Transform, class UStaticMesh* StaticMesh, class UBP_MasterResourceComponent_C** ResourceInstance, int* InstanceIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.GetInstanceAtTransform"));

	struct
	{
		struct FTransform              Transform;
		class UStaticMesh*             StaticMesh;
		bool                           ReturnValue;
		class UBP_MasterResourceComponent_C* ResourceInstance;
		int                            InstanceIndex;
	} params = {};

	params.Transform = Transform;
	params.StaticMesh = StaticMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ResourceInstance != nullptr)
		*ResourceInstance = params.ResourceInstance;
	if (InstanceIndex != nullptr)
		*InstanceIndex = params.InstanceIndex;

	return params.ReturnValue;
}


// Function BP_ResourceManager.BP_ResourceManager_C.RemoveInstance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UStaticMesh*             StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ResourceManager_C::RemoveInstance(const struct FTransform& Transform, class UStaticMesh* StaticMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.RemoveInstance"));

	struct
	{
		struct FTransform              Transform;
		class UStaticMesh*             StaticMesh;
	} params = {};

	params.Transform = Transform;
	params.StaticMesh = StaticMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResourceManager.BP_ResourceManager_C.LoadResources
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ResourceManager_C::LoadResources(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.LoadResources"));

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


// Function BP_ResourceManager.BP_ResourceManager_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ResourceManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResourceManager.BP_ResourceManager_C.MulticastLoadSave
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Resource                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_ResourceManager_C::MulticastLoadSave(TArray<struct FVector> Resource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.MulticastLoadSave"));

	struct
	{
		TArray<struct FVector>         Resource;
	} params = {};

	params.Resource = Resource;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResourceManager.BP_ResourceManager_C.MulticastRemoveInstance
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              InstanceTransform              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UStaticMesh*             StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ResourceDepleted               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ResourceManager_C::MulticastRemoveInstance(const struct FTransform& InstanceTransform, class UStaticMesh* StaticMesh, bool ResourceDepleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.MulticastRemoveInstance"));

	struct
	{
		struct FTransform              InstanceTransform;
		class UStaticMesh*             StaticMesh;
		bool                           ResourceDepleted;
	} params = {};

	params.InstanceTransform = InstanceTransform;
	params.StaticMesh = StaticMesh;
	params.ResourceDepleted = ResourceDepleted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ResourceManager.BP_ResourceManager_C.ExecuteUbergraph_BP_ResourceManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ResourceManager_C::ExecuteUbergraph_BP_ResourceManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResourceManager.BP_ResourceManager_C.ExecuteUbergraph_BP_ResourceManager"));

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
