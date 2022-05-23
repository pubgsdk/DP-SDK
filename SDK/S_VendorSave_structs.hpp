#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_StorageSave_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_VendorSave.S_VendorSave
// 0x0078
struct FS_VendorSave
{
	struct FS_StorageSave                              NormalStorageData_10_B4D0E4144E8441D90DA9BF800C6CE535;    // 0x0000(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	float                                              CurrentRestockTime_7_E0221E3246F85F7AD9EB15A37A6C21F3;    // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        VenderStock_3_AC51E78742E001885012F099400EBC53;           // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
