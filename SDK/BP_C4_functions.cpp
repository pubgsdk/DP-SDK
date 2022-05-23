// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_C4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_C4.BP_C4_C.Explode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_C4_C::Explode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_C4.BP_C4_C.Explode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_C4.BP_C4_C.SGK BuildPartPlaced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FromSaveGame                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_C4_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_C4.BP_C4_C.SGK BuildPartPlaced"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           FromSaveGame;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.FromSaveGame = FromSaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_C4.BP_C4_C.MulticastExplodeEffect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         Particle                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USoundBase*              Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_C4_C::MulticastExplodeEffect(class UParticleSystem* Particle, class USoundBase* Sound, const struct FVector& Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_C4.BP_C4_C.MulticastExplodeEffect"));

	struct
	{
		class UParticleSystem*         Particle;
		class USoundBase*              Sound;
		struct FVector                 Scale;
	} params = {};

	params.Particle = Particle;
	params.Sound = Sound;
	params.Scale = Scale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_C4.BP_C4_C.MulticastCountDownSound
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_C4_C::MulticastCountDownSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_C4.BP_C4_C.MulticastCountDownSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_C4.BP_C4_C.ExecuteUbergraph_BP_C4
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_C4_C::ExecuteUbergraph_BP_C4(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_C4.BP_C4_C.ExecuteUbergraph_BP_C4"));

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
