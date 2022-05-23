#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_EquipmentSave_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_EquipmentInvSave.S_EquipmentInvSave
// 0x0078
struct FS_EquipmentInvSave
{
	struct FS_EquipmentSave                            EquipmentSave_23_F945C8DE4C611B4E89864CA5B992EFC8;        // 0x0000(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	float                                              Weight_29_E700207B48B6F5A4F54D2983B570F96D;               // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ItemCount_28_D8ACBA494E0CCA69482005B514AF2A92;            // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
