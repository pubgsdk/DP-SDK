#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_SocketAttachments_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_EquipmentMeshes.S_EquipmentMeshes
// 0x0020
struct FS_EquipmentMeshes
{
	TArray<class USkeletalMesh*>                       SkeletalMeshes_6_026A5B7B4DF0F70BE8B4418F0C1FC90A;        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_SocketAttachments>                StaticMeshes_7_410922E64B39E06876B30A9603426495;          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
