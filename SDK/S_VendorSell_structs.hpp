#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_CraftingCost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_VendorSell.S_VendorSell
// 0x0038
struct FS_VendorSell
{
	struct FS_CraftingCost                             Item_14_070A36824EDC84B7D36215B209442FF9;                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_CraftingCost>                     Price_13_FBBBC2BD486FD812AFE6BA947CE8EDD7;                // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<TEnumAsByte<E_RecipeCategory>>              Category_22_0A240AAE40E6238B65C05F847F80223F;             // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
