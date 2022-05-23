#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "E_HitboxTypeAI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_BoneHitbox.S_BoneHitbox
// 0x0011
struct FS_BoneHitbox
{
	struct FString                                     BoneName_3_801496504BEBACCA9A7059BAF11CB37F;              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_HitboxTypeAI>                        Hitbox_6_354CB69E49893E216378AA88AA6EE5BF;                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
