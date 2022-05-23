#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_LowerAnimSet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_LowerBodyAnims.S_LowerBodyAnims
// 0x0040
struct FS_LowerBodyAnims
{
	struct FS_LowerAnimSet                             StandardAnimations_49_817371E84967865E70FC06A1E5782114;   // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_LowerAnimSet                             CombatAimedAnimations_50_BA0B4ED54443E96F5D35849C67B486E2;// 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
