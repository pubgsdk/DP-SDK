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

// UserDefinedStruct S_ReactSettings.S_ReactSettings
// 0x0041
struct FS_ReactSettings
{
	TArray<struct FName>                               ReactTags_3_0B1EB31340205B1B774807A2583CC984;             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_StimuliReaction>                     BehaviourResponse_7_39DE9D5C4EE333FAEDB4D88DEF230D9D;     // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsResponseTemporary_15_F309DD014070D1A5AF5EB0829E0C66C8;  // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              TemporaryTime_13_36D1E215449F5B7C7273F08E43A1C251;        // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CancelOverrideBehaviour_17_29C1086A470F9A4B442B5D83A0727F04;// 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        Animations_21_084E2E78404169BBDDC195966E7815D4;           // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class USoundCue*>                           Audio_24_146DA9FE474D0ECA6B72F4B597EFBCA7;                // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IgnoreReactCooldown_28_C412BA8447018B48C8623F9EFD398DFF;  // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
