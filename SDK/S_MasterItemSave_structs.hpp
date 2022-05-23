#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"
#include "S_AttachmentSaveSlot_classes.hpp"
#include "S_ItemSave_classes.hpp"
#include "S_OtherInvSaves_classes.hpp"
#include "S_InvSaveSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_MasterItemSave.S_MasterItemSave
// 0x0070
struct FS_MasterItemSave
{
	struct FVector                                     Location_4_D81F62E44793ADA21665B6948C0FF42C;              // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    Rotation_7_EBD0EA774DAD6C797716C0B18D312EB4;              // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FS_ItemSave                                 Item_30_2B57FA3A4E144E0D30E393AA15434CC5;                 // 0x0018(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FS_OtherInvSaves>                    OtherInventories_16_320E2CD848EBA6C2D475A1AF036C36D4;     // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_AttachmentSaveSlot>               Attachments_19_F8BDB6F84CFD3E76472713845D52784C;          // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_InvSaveSlot>                      Inventory_22_F2C8F82C481B70B0B95EECBDBDD6548D;            // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144;               // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ItemCount_29_7FA33BB54CF30BE0DE4DE08C8ACBF08D;            // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
