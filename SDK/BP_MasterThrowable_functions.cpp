// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterThrowable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK HoldableMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterThrowable_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.SGK HoldableMesh"));

	struct
	{
		class UPrimitiveComponent*     Mesh;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.InitializeThrowProjectile
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterThrowable_C::InitializeThrowProjectile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.InitializeThrowProjectile"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ThrowBlockCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowThrow                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterThrowable_C::ThrowBlockCheck(bool* AllowThrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.ThrowBlockCheck"));

	struct
	{
		bool                           AllowThrow;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowThrow != nullptr)
		*AllowThrow = params.AllowThrow;
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK NewHeld
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Held                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterThrowable_C::SGK_NewHeld(bool Held)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.SGK NewHeld"));

	struct
	{
		bool                           Held;
	} params = {};

	params.Held = Held;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK ServerSecondaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterThrowable_C::SGK_ServerSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.SGK ServerSecondaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK ServerPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterThrowable_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.SGK ServerPrimaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterThrowable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.AnimNotify
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Notify                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterThrowable_C::AnimNotify(const struct FName& Notify)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.AnimNotify"));

	struct
	{
		struct FName                   Notify;
	} params = {};

	params.Notify = Notify;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ExecuteUbergraph_BP_MasterThrowable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterThrowable_C::ExecuteUbergraph_BP_MasterThrowable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterThrowable.BP_MasterThrowable_C.ExecuteUbergraph_BP_MasterThrowable"));

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
