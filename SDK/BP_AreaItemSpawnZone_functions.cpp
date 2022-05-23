// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AreaItemSpawnZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AreaItemSpawnZone.BP_AreaItemSpawnZone_C.TrySpawnItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AreaItemSpawnZone_C::TrySpawnItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AreaItemSpawnZone.BP_AreaItemSpawnZone_C.TrySpawnItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AreaItemSpawnZone.BP_AreaItemSpawnZone_C.UpdateSpawnTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AreaItemSpawnZone_C::UpdateSpawnTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AreaItemSpawnZone.BP_AreaItemSpawnZone_C.UpdateSpawnTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AreaItemSpawnZone.BP_AreaItemSpawnZone_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AreaItemSpawnZone_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AreaItemSpawnZone.BP_AreaItemSpawnZone_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AreaItemSpawnZone.BP_AreaItemSpawnZone_C.ExecuteUbergraph_BP_AreaItemSpawnZone
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AreaItemSpawnZone_C::ExecuteUbergraph_BP_AreaItemSpawnZone(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AreaItemSpawnZone.BP_AreaItemSpawnZone_C.ExecuteUbergraph_BP_AreaItemSpawnZone"));

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
