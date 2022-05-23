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

// UserDefinedStruct S_AIOptimization.S_AIOptimization
// 0x000C
struct FS_AIOptimization
{
	bool                                               UsePlayerProximityActivaton_1_53A430BB4DA8ECAE0857429BB13660B6;// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HideDeactivatedAI_3_09F387A648F18C83D23FFC83FFA6F085;     // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PauseDeactivatedAI_7_1FE19F94434C71FA3C0909BDEE043FEC;    // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AIStartDeactivated_5_9C76B688429228A3BD66E0AA6A4D2E06;    // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              PlayerActivationSphereSize_12_7923F85440AEB438ADFE3EB3D8FB1659;// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PlayerDeactivationSphereSize_13_3DEF9F874964AF9AE081368049FD64BB;// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
