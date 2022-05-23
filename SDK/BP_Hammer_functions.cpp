// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Hammer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Hammer.BP_Hammer_C.ToggleBuildMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Hammer_C::ToggleBuildMenu(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.ToggleBuildMenu"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hammer.BP_Hammer_C.SGK HoldableMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Hammer_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.SGK HoldableMesh"));

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


// Function BP_Hammer.BP_Hammer_C.SGK ClientPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Hammer_C::SGK_ClientPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.SGK ClientPrimaryAction"));

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


// Function BP_Hammer.BP_Hammer_C.SGK ResetHoldable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hammer_C::SGK_ResetHoldable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.SGK ResetHoldable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hammer.BP_Hammer_C.SGK ClientSecondaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Hammer_C::SGK_ClientSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.SGK ClientSecondaryAction"));

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


// Function BP_Hammer.BP_Hammer_C.ClientAddOverlayWidget
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hammer_C::ClientAddOverlayWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.ClientAddOverlayWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hammer.BP_Hammer_C.ClientRemoveOverlayWidget
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hammer_C::ClientRemoveOverlayWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.ClientRemoveOverlayWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hammer.BP_Hammer_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hammer_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hammer.BP_Hammer_C.SGK NewHeld
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Held                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Hammer_C::SGK_NewHeld(bool Held)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.SGK NewHeld"));

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


// Function BP_Hammer.BP_Hammer_C.SGK ServerPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Hammer_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.SGK ServerPrimaryAction"));

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


// Function BP_Hammer.BP_Hammer_C.ExecuteUbergraph_BP_Hammer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Hammer_C::ExecuteUbergraph_BP_Hammer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hammer.BP_Hammer_C.ExecuteUbergraph_BP_Hammer"));

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
