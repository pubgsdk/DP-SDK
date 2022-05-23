// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VendorListingTooltips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendorListingTooltips.BP_VendorListingTooltips_C.InitializeSellTooltip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorSell           VenderSellListing              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_VendorListingTooltips_C::InitializeSellTooltip(const struct FS_VendorSell& VenderSellListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListingTooltips.BP_VendorListingTooltips_C.InitializeSellTooltip"));

	struct
	{
		struct FS_VendorSell           VenderSellListing;
	} params = {};

	params.VenderSellListing = VenderSellListing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorListingTooltips.BP_VendorListingTooltips_C.InitializeBuyTooltip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorBuy            VenderListing                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_VendorListingTooltips_C::InitializeBuyTooltip(const struct FS_VendorBuy& VenderListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorListingTooltips.BP_VendorListingTooltips_C.InitializeBuyTooltip"));

	struct
	{
		struct FS_VendorBuy            VenderListing;
	} params = {};

	params.VenderListing = VenderListing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
