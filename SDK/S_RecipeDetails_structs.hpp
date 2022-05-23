#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_RecipeDetails.S_RecipeDetails
// 0x0011
struct FS_RecipeDetails
{
	TArray<struct FDataTableRowHandle>                 LearnedRecipes_4_1331C3D54B72FBD4DF23078F46F693B5;        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               DestroyItemWhenLearnt_6_691566574CFE133DD707E5A0169D1780; // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
