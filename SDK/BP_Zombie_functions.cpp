// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Zombie_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Zombie.BP_Zombie_C.OnRep_SkinVariation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Zombie_C::OnRep_SkinVariation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Zombie.BP_Zombie_C.OnRep_SkinVariation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Zombie.BP_Zombie_C.OnRep_Skin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Zombie_C::OnRep_Skin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Zombie.BP_Zombie_C.OnRep_Skin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Zombie.BP_Zombie_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Zombie_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Zombie.BP_Zombie_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Zombie.BP_Zombie_C.RandomZombieSkin
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Zombie_C::RandomZombieSkin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Zombie.BP_Zombie_C.RandomZombieSkin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Zombie.BP_Zombie_C.ExecuteUbergraph_BP_Zombie
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Zombie_C::ExecuteUbergraph_BP_Zombie(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Zombie.BP_Zombie_C.ExecuteUbergraph_BP_Zombie"));

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
