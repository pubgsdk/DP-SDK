#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_DecayDetails.S_DecayDetails
// 0x0028
struct FS_DecayDetails
{
	bool                                               UseItemDecay_1_12FBBE5940F95B2CAFEB29B32812EBC0;          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                DecayTimeMinutes_9_4A49A8CE42FC7C78BF0718847F3F858C;      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DestroyOnDecay_5_6D147CB247BC631892F003AE614B8A5C;        // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         ReplacementItem_8_29EAE32547957C641D561A99857A2984;       // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	bool                                               WorldDecay_11_A82D8AB0486220BCF0595793F9D27005;           // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                WorldDecayTimeMinutes_16_649E59BD431EE8CE3D3F62AFCD9DF3FF;// 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
