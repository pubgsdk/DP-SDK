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

// UserDefinedStruct S_MeleeAnimations.S_MeleeAnimations
// 0x0058
struct FS_MeleeAnimations
{
	class UAnimMontage*                                Montage_2_6204BE474CA7CBC82E6ED5A51EC549A7;               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSet<struct FName>                                 EnabledMeleeDetection_8_A37624FB43FDE70FBC42C4AAF4D6445D; // 0x0008(0x0050) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
