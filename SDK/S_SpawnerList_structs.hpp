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

// UserDefinedStruct S_SpawnerList.S_SpawnerList
// 0x0070
struct FS_SpawnerList
{
	struct FDataTableRowHandle                         Item_2_9755B88A40573D1DF345B39A2BA7A1FD;                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	int                                                MinAmount_7_E0C00EEF445AC811C4357F8DB6EAFBB5;             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxAmount_8_496453F845B74B53B963B6B85EB28EC4;             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpawnChance_11_DE4087044B1140F840E6088D5F5606D7;          // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TSet<TEnumAsByte<E_RecipeCategory>>                SpawnerType_15_0974DE3C474B7D993D162EA4DACAF4F9;          // 0x0020(0x0050) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
