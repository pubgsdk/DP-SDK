#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_UpperAnimSet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_UpperBodyAnims.S_UpperBodyAnims
// 0x0078
struct FS_UpperBodyAnims
{
	struct FS_UpperAnimSet                             StandardAnimations_32_EB3012994C9E88DC1827BBB67D131408;   // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UpperAnimSet                             AimedAnimations_34_C1C946724755AB4CA19F91A1ADC283BD;      // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UpperAnimSet                             CombatAnimations_36_3C454C74411A6ED0D3ACA59ECB797B76;     // 0x0050(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
