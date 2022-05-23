#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_MasterItemSave_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_ItemSpawnerSave.S_ItemSpawnerSave
// 0x0078
struct FS_ItemSpawnerSave
{
	class ABP_MasterItemSpawner_C*                     ItemSpawner_13_397861C6497928D5F5ACF6BE5F4FD544;          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_MasterItemSave                           Item_5_8DB163AF452230FC685D7D96EB5A9630;                  // 0x0008(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
