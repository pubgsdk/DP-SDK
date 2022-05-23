#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_InvSaveSlot_classes.hpp"
#include "S_AttachmentSaveSlot_classes.hpp"
#include "E_FireModes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_OtherInvSaves.S_OtherInvSaves
// 0x003C
struct FS_OtherInvSaves
{
	int                                                Index_2_39CD1C0F4603CE11EC153998A75A6566;                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FS_InvSaveSlot>                      Inventory_7_7766F73341404F28636081A6E71E7F86;             // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD;               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ItemCount_13_4CB843EB4E38213CFD68E28014510145;            // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_AttachmentSaveSlot>               Attachments_17_A4B1897143F77BD866FAA8A2AF5089A2;          // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_FireModes>                           FireMode_20_1ED6FB204E2276C97E75ED8B4FA7A0E5;             // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FName                                       Code_23_2B966F9D4FD30EDD9E6372850B92129A;                 // 0x0034(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
