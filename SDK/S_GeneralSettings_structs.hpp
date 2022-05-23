#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_ReactSettings_classes.hpp"
#include "S_AnimStartEnd_classes.hpp"
#include "S_AudioStartEnd_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_GeneralSettings.S_GeneralSettings
// 0x00A8
struct FS_GeneralSettings
{
	bool                                               UseGeneralSettings_1_34451C7C4409593AED51F3B3E745EC23;    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseAudioReaction_8_10D65367410D004C11F2298C0904D830;      // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FS_ReactSettings>                    AudioReactions_9_9F68933146B06EA6F5D62EB5E5822ACC;        // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseSightReactions_13_7B8E557842E4006DA471D6B8FD8DD197;    // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FS_ReactSettings>                    SightReactions_17_FC023EA447F72317482A669D75BF2D42;       // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseDamageReactions_43_651510D34745B3E71DFBA898CC66E10E;   // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FS_ReactSettings>                    DamageReactions_47_0171D092410A910D027CCF8E4DBF0ADD;      // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseAimedFocusReactions_21_3FB701744BFF4A199FA8E0BC1B56F96F;// 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AimedFocusRequiresSight_24_304EB221463960ADCDB9B283F7EA2C17;// 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<struct FS_ReactSettings>                    AimedFocusReactions_28_B5A136154388B5E2D151B884544FCA8D;  // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               StopMovementInTransitions_39_8824967345143DE490031A998B1ADF76;// 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FS_AnimStartEnd                             AnimationBehaviourTransitions_34_940A69AD4E3A01C4C46A72AF087872AD;// 0x0068(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_AudioStartEnd                            AudioBehaviourTransitions_40_FE92B55C4D0108CEB4801D9BA35D4E08;// 0x0088(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
