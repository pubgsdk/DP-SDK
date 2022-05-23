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

// UserDefinedStruct S_NotificationDetails.S_NotificationDetails
// 0x0038
struct FS_NotificationDetails
{
	struct FText                                       Message_2_7839810D4B82BA098B267494175BD032;               // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                TextColor_6_3EB6E95D4D2888E776728988C692E288;             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  IconImage_9_C893B8004328C4127BAC1FAE079F633C;             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  Sound_12_B62C83D9436FA8503F14548A13E43A5A;                // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
