// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BusResource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BusResource.BP_BusResource_C.OnRep_Color
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BusResource_C::OnRep_Color()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BusResource.BP_BusResource_C.OnRep_Color"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BusResource.BP_BusResource_C.ResourceSetup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BusResource_C::ResourceSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BusResource.BP_BusResource_C.ResourceSetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BusResource.BP_BusResource_C.LoadResourceSaveGame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BusResource_C::LoadResourceSaveGame(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BusResource.BP_BusResource_C.LoadResourceSaveGame"));

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


// Function BP_BusResource.BP_BusResource_C.RespawnResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BusResource_C::RespawnResource()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BusResource.BP_BusResource_C.RespawnResource"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BusResource.BP_BusResource_C.ShowResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BusResource_C::ShowResource()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BusResource.BP_BusResource_C.ShowResource"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BusResource.BP_BusResource_C.HideResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BusResource_C::HideResource()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BusResource.BP_BusResource_C.HideResource"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BusResource.BP_BusResource_C.ChangeMaterial
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BusResource_C::ChangeMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BusResource.BP_BusResource_C.ChangeMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BusResource.BP_BusResource_C.ExecuteUbergraph_BP_BusResource
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BusResource_C::ExecuteUbergraph_BP_BusResource(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BusResource.BP_BusResource_C.ExecuteUbergraph_BP_BusResource"));

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
