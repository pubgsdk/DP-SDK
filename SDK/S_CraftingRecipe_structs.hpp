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

// UserDefinedStruct S_CraftingRecipe.S_CraftingRecipe
// 0x0120
struct FS_CraftingRecipe
{
	struct FText                                       RecipeName_20_C66C5D3646F1470291D4CA8A5CBE8FC0;           // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       RecipeDescription_30_DBD66BB34360497AA619659F9979733D;    // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_CraftingCost>                     ItemCost_21_27A61614462A4CE9010DEEBFACCDD122;             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_CraftingCost>                     CraftedItems_22_E469062542D1554151AC9391C992A01E;         // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_CraftingCost>                     RequiredTools_42_6F5B137B4D3B811F2474C09FB794ABFE;        // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              TimeSeconds_8_E99A53A849E6FCCEA89B0597F5CB2E8B;           // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TSet<TEnumAsByte<E_CraftingType>>                  RecipeType_12_54E6CD6E4161429421EBAFB6E192E328;           // 0x0068(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TSet<TEnumAsByte<E_RecipeCategory>>                RecipeCategory_27_68163FBE43F2AAABB83ECFAD466E3BDE;       // 0x00B8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UClass* /*AActor*/>                   RequiredActors_38_258EED594BF8A925C52BC0ABE396D080;       // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UTexture2D*                                  RecipeIcon_26_B76A82F445123F7435003FB1B33EE666;           // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
