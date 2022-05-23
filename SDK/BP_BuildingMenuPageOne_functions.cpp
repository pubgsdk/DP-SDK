// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BuildingMenuPageOne_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.SetCentreInformation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BuildingMenuPageOne_C::SetCentreInformation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.SetCentreInformation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.PopulateCostInformation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BuildingMenuPageOne_C::PopulateCostInformation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.PopulateCostInformation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.GetMouseOver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BuildingMenuPageOne_C::GetMouseOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.GetMouseOver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.ExecuteUbergraph_BP_BuildingMenuPageOne
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_BuildingMenuPageOne_C::ExecuteUbergraph_BP_BuildingMenuPageOne(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.ExecuteUbergraph_BP_BuildingMenuPageOne"));

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
