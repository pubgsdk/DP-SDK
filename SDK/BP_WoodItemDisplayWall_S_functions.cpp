// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WoodItemDisplayWall_S_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.UpdateDisplaySlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Reset                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_WoodItemDisplayWall_S_C::UpdateDisplaySlots(bool Reset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.UpdateDisplaySlots"));

	struct
	{
		bool                           Reset;
	} params = {};

	params.Reset = Reset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.SGK EndInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_WoodItemDisplayWall_S_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.SGK EndInteraction"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           ReturnValue;
	} params = {};

	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_WoodItemDisplayWall_S_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.SGK TurnedOnEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_WoodItemDisplayWall_S_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.SGK TurnedOnEffect"));

	struct
	{
		bool                           TurnedOn;
	} params = {};

	params.TurnedOn = TurnedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.ExecuteUbergraph_BP_WoodItemDisplayWall_S
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_WoodItemDisplayWall_S_C::ExecuteUbergraph_BP_WoodItemDisplayWall_S(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WoodItemDisplayWall_S.BP_WoodItemDisplayWall_S_C.ExecuteUbergraph_BP_WoodItemDisplayWall_S"));

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
