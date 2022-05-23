#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_SpawnSettings.S_SpawnSettings
// 0x006C
struct FS_SpawnSettings
{
	bool                                               SpawnRandomItems_1_7BC24B7B49B1A134516294A1A6EAFE0E;      // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SpawnItemsOnStart_5_51A2E51144C38B3EA63A07B5A445C7A8;     // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SpawnItemsOnTimer_6_A4671C864C8CEEF7ECB3F9A948DF7FA6;     // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AlwaysSpawnItems_8_656737854ADCDB07E33E01BD064A772F;      // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ClearInventoryWhenItemsSpawn_10_70F4A26541CF4D86B681A58948E761F7;// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               RequireEmptyToSpawn_30_77D732C740A14B9C1F06FF8859A7DACD;  // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              SpawnTimerLength_28_DA96DE704502ECE258D0419F30DB4500;     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MinItemAmount_14_9729659B49D1AA39797FC58C782E6F76;        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxItemAmount_15_C33B901A43BEA1E616CA978B8AE15CD0;        // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TSet<TEnumAsByte<E_RecipeCategory>>                SpawnType_20_CEC2C79A4C241E6690F3A696B86F73B6;            // 0x0018(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	int                                                MaxAlwaysSpawnAttempts_25_443DDEE14EF5DF490E0DE9820D9D7808;// 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
