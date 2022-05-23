// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GridManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GridManager.BP_GridManager_C.GetAllGrids
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class ABP_MasterGrid_C*> AllGrids                       (CPF_Parm, CPF_OutParm)

void ABP_GridManager_C::GetAllGrids(TArray<class ABP_MasterGrid_C*>* AllGrids)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridManager.BP_GridManager_C.GetAllGrids"));

	struct
	{
		TArray<class ABP_MasterGrid_C*> AllGrids;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllGrids != nullptr)
		*AllGrids = params.AllGrids;
}


// Function BP_GridManager.BP_GridManager_C.DeleteGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBoxComponent*           Grid                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GridManager_C::DeleteGrid(class UBoxComponent* Grid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridManager.BP_GridManager_C.DeleteGrid"));

	struct
	{
		class UBoxComponent*           Grid;
	} params = {};

	params.Grid = Grid;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GridManager.BP_GridManager_C.SelectGridActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BuildType>       GridType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_MasterGrid_C*        Grid                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GridManager_C::SelectGridActor(TEnumAsByte<E_BuildType> GridType, class ABP_MasterGrid_C** Grid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridManager.BP_GridManager_C.SelectGridActor"));

	struct
	{
		TEnumAsByte<E_BuildType>       GridType;
		class ABP_MasterGrid_C*        Grid;
	} params = {};

	params.GridType = GridType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Grid != nullptr)
		*Grid = params.Grid;
}


// Function BP_GridManager.BP_GridManager_C.CreateGridActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GridManager_C::CreateGridActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridManager.BP_GridManager_C.CreateGridActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GridManager.BP_GridManager_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GridManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridManager.BP_GridManager_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GridManager.BP_GridManager_C.ExecuteUbergraph_BP_GridManager
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GridManager_C::ExecuteUbergraph_BP_GridManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GridManager.BP_GridManager_C.ExecuteUbergraph_BP_GridManager"));

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
