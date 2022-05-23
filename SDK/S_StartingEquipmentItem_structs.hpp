#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Engine_classes.hpp"
#include "E_EquipmentType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_StartingEquipmentItem.S_StartingEquipmentItem
// 0x0011
struct FS_StartingEquipmentItem
{
	struct FDataTableRowHandle                         Item_2_75DA1F3645FDA366094190A853658F2B;                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	TEnumAsByte<E_EquipmentType>                       EquipmentType_8_9BB6E2444CD3AA340121BA986DA11205;         // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
