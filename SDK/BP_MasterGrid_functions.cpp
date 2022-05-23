// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterGrid.BP_MasterGrid_C.AddBuildPartReference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         GridComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int ABP_MasterGrid_C::AddBuildPartReference(class UActorComponent* GridComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterGrid.BP_MasterGrid_C.AddBuildPartReference"));

	struct
	{
		class UActorComponent*         GridComponent;
		int                            ReturnValue;
	} params = {};

	params.GridComponent = GridComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterGrid.BP_MasterGrid_C.CreateGrid
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_GridComponent_C*     GridComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBoxComponent*           Grid                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterGrid_C::CreateGrid(class UBP_GridComponent_C* GridComponent, class UBoxComponent** Grid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterGrid.BP_MasterGrid_C.CreateGrid"));

	struct
	{
		class UBP_GridComponent_C*     GridComponent;
		class UBoxComponent*           Grid;
	} params = {};

	params.GridComponent = GridComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Grid != nullptr)
		*Grid = params.Grid;
}


// Function BP_MasterGrid.BP_MasterGrid_C.DeleteGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBoxComponent*           Grid                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterGrid_C::DeleteGrid(class UBoxComponent* Grid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterGrid.BP_MasterGrid_C.DeleteGrid"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
