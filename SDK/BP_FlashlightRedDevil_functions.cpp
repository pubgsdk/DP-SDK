// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FlashlightRedDevil_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FlashlightRedDevil.BP_FlashlightRedDevil_C.SGK HoldableMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_FlashlightRedDevil_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlashlightRedDevil.BP_FlashlightRedDevil_C.SGK HoldableMesh"));

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


// Function BP_FlashlightRedDevil.BP_FlashlightRedDevil_C.SGK ServerPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_FlashlightRedDevil_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlashlightRedDevil.BP_FlashlightRedDevil_C.SGK ServerPrimaryAction"));

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


// Function BP_FlashlightRedDevil.BP_FlashlightRedDevil_C.ExecuteUbergraph_BP_FlashlightRedDevil
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_FlashlightRedDevil_C::ExecuteUbergraph_BP_FlashlightRedDevil(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlashlightRedDevil.BP_FlashlightRedDevil_C.ExecuteUbergraph_BP_FlashlightRedDevil"));

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
