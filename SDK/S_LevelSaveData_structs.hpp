#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_BuildPartSave_classes.hpp"
#include "S_MasterItemSave_classes.hpp"
#include "S_CookingSave_classes.hpp"
#include "S_ItemSpawnerSave_classes.hpp"
#include "S_LockSave_classes.hpp"
#include "S_CraftingSave_classes.hpp"
#include "S_StorageSave_classes.hpp"
#include "S_VendorSave_classes.hpp"
#include "S_EquipmentInvSave_classes.hpp"
#include "S_ResourcesSaves_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_LevelSaveData.S_LevelSaveData
// 0x00B0
struct FS_LevelSaveData
{
	struct FString                                     LevelName_3_3FE921104DBA8FD329B884835573895B;             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_MasterItemSave>                   ItemSaveData_7_6460E1FE4FF0E17AB447C0B300AE4BF8;          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_ItemSpawnerSave>                  ItemSpawnerSaveData_15_AAF651684CAE2CAFD67D328F44570D5C;  // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_BuildPartSave>                    BuildPartData_20_F3C38A474A91C45CB40B8A9DEE29A803;        // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_LockSave>                         LockSaveData_19_0366B27D423557BAA62DE297DB7AC9AF;         // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_StorageSave>                      StorageSaveData_24_FDA24E9744FF3CB47A7F92A5FC4748AB;      // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_CookingSave>                      CookingSaveData_29_5364EA004F05A4E74C342C9F26892359;      // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_CraftingSave>                     CraftingSaveData_33_9BA66DF14AD94C2467DD0AA717B0F06A;     // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_VendorSave>                       VenderSaveData_37_0922F123428B3A6617FFBC9C7923F8E2;       // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_EquipmentInvSave>                 EquipmentSaveData_41_085DF2AE4C1BD5B6049F7588FBF925C5;    // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	TArray<struct FS_ResourcesSaves>                   ResourceData_47_089C9F32407506C54F34049544DCC94E;         // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
