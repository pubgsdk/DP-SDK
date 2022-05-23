#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_RepairActors_classes.hpp"
#include "S_CraftingCost_classes.hpp"
#include "S_DecayDetails_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_DurabilityDetails.S_DurabilityDetails
// 0x0058
struct FS_DurabilityDetails
{
	bool                                               UseDurability_1_13FF8AEC41F8FB8A7E973CA195D0CDF8;         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxDurability_4_2937EBF8401931EACB7C5C932B3CB4FC;         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DestroyItemAt0Durability_8_0941EB874C13F33FB68492B0414CEB9F;// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanRepair_10_E3D078744EB73580CAD78DB9D29BF92B;            // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FS_RepairActors>                     RepairActors_22_250F45ED4AB0016FAB159CB1D840F657;         // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_CraftingCost>                     RepairCost_17_81F6B265407AA8BFAA7DC8B135B2B54C;           // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FS_DecayDetails                             DecayDetails_28_E55B8B1D423F7D487FFACDAB43C68F74;         // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
