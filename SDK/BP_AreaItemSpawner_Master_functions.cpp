// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AreaItemSpawner_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AreaItemSpawner_Master.BP_AreaItemSpawner_Master_C.SpawnNewItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AreaItemSpawner_Master_C::SpawnNewItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AreaItemSpawner_Master.BP_AreaItemSpawner_Master_C.SpawnNewItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AreaItemSpawner_Master.BP_AreaItemSpawner_Master_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AreaItemSpawner_Master_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AreaItemSpawner_Master.BP_AreaItemSpawner_Master_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AreaItemSpawner_Master.BP_AreaItemSpawner_Master_C.ExecuteUbergraph_BP_AreaItemSpawner_Master
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AreaItemSpawner_Master_C::ExecuteUbergraph_BP_AreaItemSpawner_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AreaItemSpawner_Master.BP_AreaItemSpawner_Master_C.ExecuteUbergraph_BP_AreaItemSpawner_Master"));

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
