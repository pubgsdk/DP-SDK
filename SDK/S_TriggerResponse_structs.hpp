#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "E_StimuliReaction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_TriggerResponse.S_TriggerResponse
// 0x0051
struct FS_TriggerResponse
{
	TArray<class ABP_AITrigger_C*>                     AITrigger_24_49DC991B4C17A8A3352D6BB4ABE6BE28;            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	TArray<struct FName>                               ResponseTags_4_92A8027C49F240C6F7B4B78B97DF0993;          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_StimuliReaction>                     BehaviourResponse_9_296E761B4F70003F9210C7B59E7621AA;     // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsResponseTemporary_42_E911759241E1887FA751C7BB242A8FB0;  // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              TemporaryTime_43_0CFFE63F4ED4315FF998F7AE8A4DD443;        // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CancelOverrideBehaviour_30_468531DB4F6419E97193D3AD594363E1;// 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        Animations_38_2636D7774222DE75D311BDB7517DA641;           // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class USoundCue*>                           Audio_41_35B9C49B456A90804F446E9F18B12287;                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IgnoreTriggerCooldown_32_A25B264A4DEE60CDBB6DB0B2E5824A03;// 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
