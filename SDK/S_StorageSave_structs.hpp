#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"
#include "S_InvSaveSlot_classes.hpp"
#include "S_OtherInvSaves_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_StorageSave.S_StorageSave
// 0x005C
struct FS_StorageSave
{
	struct FTransform                                  Transform_2_F6E57D90457287E8CA61C7B0A4F0FC8D;             // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor)
	int                                                ItemCount_8_A7235E3648E8A13D8EACAE98FDA7439A;             // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Weight_20_58948A1040967D2B29D8A4A240AA4C79;               // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_InvSaveSlot>                      inventory_21_2A4A93F346C9C45611D2AABF0F17C7C7;            // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_OtherInvSaves>                    OtherInventories_16_763679614801C8070E0103A5EA38323C;     // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	int                                                Index_25_1FDE054841C095061B30BCB4D5448AF6;                // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
