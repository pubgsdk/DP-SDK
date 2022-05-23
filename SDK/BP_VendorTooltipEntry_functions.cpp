// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VendorTooltipEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendorTooltipEntry.BP_VendorTooltipEntry_C.InitializeEntry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorTooltipEntry_C::InitializeEntry(const struct FText& ItemName, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorTooltipEntry.BP_VendorTooltipEntry_C.InitializeEntry"));

	struct
	{
		struct FText                   ItemName;
		int                            Amount;
	} params = {};

	params.ItemName = ItemName;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
