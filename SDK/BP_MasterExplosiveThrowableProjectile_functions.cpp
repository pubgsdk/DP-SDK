// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterExplosiveThrowableProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.Explode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterExplosiveThrowableProjectile_C::Explode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.Explode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.MulticastExplodeEffect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         Particle                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USoundBase*              Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterExplosiveThrowableProjectile_C::MulticastExplodeEffect(class UParticleSystem* Particle, class USoundBase* Sound, const struct FVector& Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.MulticastExplodeEffect"));

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


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterExplosiveThrowableProjectile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterExplosiveThrowableProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.InitializeThownProjectile
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterExplosiveThrowableProjectile_C::InitializeThownProjectile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.InitializeThownProjectile"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterExplosiveThrowableProjectile_C::ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile"));

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
