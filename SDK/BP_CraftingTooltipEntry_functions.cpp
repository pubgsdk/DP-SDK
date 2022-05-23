// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CraftingTooltipEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C.EntryCost
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FS_CraftingCost> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)
// int                            Amount                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingTooltipEntry_C::EntryCost(int Index, TArray<struct FS_CraftingCost>* Array, struct FText* Name, int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C.EntryCost"));

	struct
	{
		TArray<struct FS_CraftingCost> Array;
		int                            Index;
		struct FText                   Name;
		int                            Amount;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
	if (Name != nullptr)
		*Name = params.Name;
	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C.InitializeEntry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingRecipe       Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// int                            EntryIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsItemCost                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsTools                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CraftingTooltipEntry_C::InitializeEntry(const struct FS_CraftingRecipe& Recipe, int EntryIndex, bool IsItemCost, bool IsTools)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C.InitializeEntry"));

	struct
	{
		struct FS_CraftingRecipe       Recipe;
		int                            EntryIndex;
		bool                           IsItemCost;
		bool                           IsTools;
	} params = {};

	params.Recipe = Recipe;
	params.EntryIndex = EntryIndex;
	params.IsItemCost = IsItemCost;
	params.IsTools = IsTools;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
