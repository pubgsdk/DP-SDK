#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_InvSaveSlot_classes.hpp"
#include "S_EquipmentSlotSave_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "S_WeaponSlotSave_classes.hpp"
#include "S_OtherInvSaves_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_EquipmentSave.S_EquipmentSave
// 0x0070
struct FS_EquipmentSave
{
	TArray<struct FS_InvSaveSlot>                      Inventory_3_D20F35D44AD723C87B0CB0A8139A7C52;             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_EquipmentSlotSave>                EquipmentSlots_7_7E8C4391476DE648F1DD1CB14D8E4596;        // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FTransform                                  WorldTransform_11_3EFEAEE74C0E1F8F261AEAAED118AF64;       // 0x0020(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor)
	TArray<struct FS_OtherInvSaves>                    OtherInventorys_15_02C7D96443E404994290448C883E6183;      // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_WeaponSlotSave>                   WeaponSlots_19_F945C8DE4C611B4E89864CA5B992EFC8;          // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
