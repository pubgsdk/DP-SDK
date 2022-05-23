#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_AudioStartEnd_classes.hpp"
#include "S_AnimStartEnd_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_GenericAISettings.S_GenericAISettings
// 0x0171
struct FS_GenericAISettings
{
	bool                                               UseGeneralSettings_32_6A0BCE09431CD1D11E78E6B7C16B7861;   // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseAudioReactionSettings_17_AC9F7411404780F54A4C5D8F8F7A4F4A;// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TMap<struct FName, TEnumAsByte<E_StimuliReaction>> AudioReaction_12_3A45C6DE4FCB3C3E9A196FA39426A915;        // 0x0008(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseSightReactionSettings_19_7CB58FA34CEB32F7352022BF60269826;// 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TMap<struct FName, TEnumAsByte<E_StimuliReaction>> SightReactions_24_04A41A7F4A066FADE635A0BEA073C012;       // 0x0060(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseAimedReactions_50_E12984A945CE40555DD85A9A05D847B7;    // 0x00B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AimedFocusRequiresSight_52_608D2CC84EABA7877936CAB49A9D09AD;// 0x00B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	TMap<struct FName, TEnumAsByte<E_StimuliReaction>> AimedFocusReactionSettings_46_FA275B1E47294E4C747585BCD87A9C4C;// 0x00B8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IsReactionTemp_26_8CE38C3E4866076BAD956FBF67B86739;       // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              TempTime_29_FECC46BD4E7279E3D4166588792D5303;             // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class USoundCue*>                           AudioReactions_41_C11CB89343680758598383ACBFDB9E50;       // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UAnimMontage*>                        AnimReactions_40_229C1FB5485B00B5C0AC14B99350FB43;        // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FS_AudioStartEnd                            AudioTransitions_2_B02F53AC4C75B0AD693D4D8C4FC0617B;      // 0x0130(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_AnimStartEnd                             AnimationTransitions_5_AB0389CE4DE5DA576CF8848BBE8ADA44;  // 0x0150(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               StopMovementInTransition_15_48F51DFB4FB0AE61BCCF44B7F8FCD836;// 0x0170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
