// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Banshee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Banshee.BP_Banshee_C.SGK InteractName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InteractName                   (CPF_Parm, CPF_OutParm)

void ABP_Banshee_C::SGK_InteractName(struct FText* InteractName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Banshee.BP_Banshee_C.SGK InteractName"));

	struct
	{
		struct FText                   InteractName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InteractName != nullptr)
		*InteractName = params.InteractName;
}


// Function BP_Banshee.BP_Banshee_C.DamageOverlappingActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Banshee_C::DamageOverlappingActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Banshee.BP_Banshee_C.DamageOverlappingActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Banshee.BP_Banshee_C.OnRep_Skin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Banshee_C::OnRep_Skin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Banshee.BP_Banshee_C.OnRep_Skin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Banshee.BP_Banshee_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Banshee_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Banshee.BP_Banshee_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Banshee.BP_Banshee_C.StopAudioAfterDeath
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Banshee_C::StopAudioAfterDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Banshee.BP_Banshee_C.StopAudioAfterDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Banshee.BP_Banshee_C.ExecuteUbergraph_BP_Banshee
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Banshee_C::ExecuteUbergraph_BP_Banshee(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Banshee.BP_Banshee_C.ExecuteUbergraph_BP_Banshee"));

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
