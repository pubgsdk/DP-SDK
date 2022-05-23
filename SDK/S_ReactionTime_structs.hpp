#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_ReactionTime.S_ReactionTime
// 0x0048
struct FS_ReactionTime
{
	class AActor*                                      Actor_2_11ADF8D548CCE2020F91528DA94F6B4F;                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Time_5_27E075ED4F811C7693D34984A41DE882;                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus_8_1BF51C6A4B71F7B6EA5817A54AF1A8A0;              // 0x000C(0x003C) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
