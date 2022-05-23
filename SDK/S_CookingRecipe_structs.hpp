#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_CraftingCost_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_CookingRecipe.S_CookingRecipe
// 0x0078
struct FS_CookingRecipe
{
	struct FDataTableRowHandle                         StartingItem_4_3D162DE74BCEEDB231B953B9BDE94D2F;          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	int                                                StartItemingAmount_10_D5EAE3104B8DFEEE9F778D9BF96B7FFD;   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CookingTime_19_7E86F408455596762BB5F0A0A8BA418C;          // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_CraftingCost>                     ReturnItems_18_85F00B674C1EB84455639380084002F0;          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TSet<TEnumAsByte<E_CookingType>>                   CookingType_23_EDC994D84D5A7BF1235DE3A60854943C;          // 0x0028(0x0050) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
