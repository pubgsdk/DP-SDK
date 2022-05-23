#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_ManualIndexs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_CustomGridLayoutData.S_CustomGridLayoutData
// 0x0020
struct FS_CustomGridLayoutData
{
	class UClass* /*UBP_MasterInventoryGrid_C*/        GridWidget_2_AD12CCCC4C58AF6C537B42AA51D07D8D;            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CellCount_6_408D8A7F4CE1879FB2E7B0924E35ABA3;             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Columns_16_3F0958BB445D03AFCE395C86BD5B716E;              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_ManualIndexs>                     ManuelSlotIndexes_15_18FEE1D64AF9EF21E4CC2AAD7A579F0D;    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
