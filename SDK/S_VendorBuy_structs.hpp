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

// UserDefinedStruct S_VendorBuy.S_VendorBuy
// 0x0040
struct FS_VendorBuy
{
	struct FS_CraftingCost                             Item_14_070A36824EDC84B7D36215B209442FF9;                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_CraftingCost>                     Price_13_FBBBC2BD486FD812AFE6BA947CE8EDD7;                // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Stock_17_DB81849743F8694701EA61B74F879068;                // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<E_RecipeCategory>>              Category_22_A77239D74061A214755BD5AD5DABC683;             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
