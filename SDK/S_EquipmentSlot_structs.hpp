#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_InvItem_classes.hpp"
#include "E_EquipmentType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_EquipmentSlot.S_EquipmentSlot
// 0x0048
struct FS_EquipmentSlot
{
	TEnumAsByte<E_EquipmentType>                       EquipmentType_18_4F6B348C414CD1C1C532D2B5C23843E3;        // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FS_InvItem                                  Item_9_08D0FEA54FF8147DD55DE08559E54FAB;                  // 0x0008(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class UBP_EquipmentInventory_C*                    Inventory_13_8B869DAC43BA92FF9032ACA9E848229C;            // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterClothingAttchment_C*               EquipmentActor_24_5C35165749C2436EB7D534B4D9A1A2F1;       // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
