// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BuildMenuCostPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.UpdateText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingCost         Cost                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_BuildMenuCostPanel_C::UpdateText(const struct FS_CraftingCost& Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.UpdateText"));

	struct
	{
		struct FS_CraftingCost         Cost;
	} params = {};

	params.Cost = Cost;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.InitializeCostPanel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingCost         Cost                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_BuildMenuCostPanel_C::InitializeCostPanel(const struct FS_CraftingCost& Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.InitializeCostPanel"));

	struct
	{
		struct FS_CraftingCost         Cost;
	} params = {};

	params.Cost = Cost;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.ExecuteUbergraph_BP_BuildMenuCostPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_BuildMenuCostPanel_C::ExecuteUbergraph_BP_BuildMenuCostPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.ExecuteUbergraph_BP_BuildMenuCostPanel"));

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
