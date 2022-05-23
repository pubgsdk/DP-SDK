// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CraftingTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CraftingTooltip.BP_CraftingTooltip_C.InitializeTooltip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingRecipe       Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_CraftingTooltip_C::InitializeTooltip(const struct FS_CraftingRecipe& Recipe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingTooltip.BP_CraftingTooltip_C.InitializeTooltip"));

	struct
	{
		struct FS_CraftingRecipe       Recipe;
	} params = {};

	params.Recipe = Recipe;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
