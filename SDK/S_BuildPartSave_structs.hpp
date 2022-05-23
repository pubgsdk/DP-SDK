#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_BuildPartSave.S_BuildPartSave
// 0x0064
struct FS_BuildPartSave
{
	struct FTransform                                  Transform_2_C44C8D76466A8141A3AF2484B4E93B18;             // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor)
	class UClass* /*AActor*/                           Class_17_451CFFA24404E03AB8B134941D277D67;                // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Health_5_CFCCA27042C51E6E22FE30996F8E9899;                // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FText>                               Owners_9_0292A033452BD2A569CCA3A9320052F6;                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FText>                               VerifiedPlayers_21_85197071404C7F4F8B6C6FA345133690;      // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                ExtraDataIndex_24_32E7A1404F9CCB83C2CECCA3E2B0CEFF;       // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
