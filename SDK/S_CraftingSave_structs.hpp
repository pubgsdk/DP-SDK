#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_StorageSave_classes.hpp"
#include "S_CraftingQueue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_CraftingSave.S_CraftingSave
// 0x0071
struct FS_CraftingSave
{
	struct FS_StorageSave                              NormalStorageSave_2_EF4DAFF24E393CB8C8D2E192B3B7C2E6;     // 0x0000(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<struct FS_CraftingQueue>                    CraftingQueueSave_7_1FBE2D994D2D2A7B18EE82AF9582D235;     // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               SwitchedOn_11_347F052A4CE8C6D031FB5CAD379F5050;           // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
