#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_Damage_classes.hpp"
#include "E_DamageType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_AmmoDetails.S_AmmoDetails
// 0x001D
struct FS_AmmoDetails
{
	class UClass* /*ABP_MasterProjectile_C*/           Projectile_9_2D41DE964ED6ACF270EE109CE1959A07;            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_Damage>                           Damage_7_135A920D4A4E281633D127BBE3B22A57;                // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ProjectileSpeed_16_ABC0477D473A55F85A01F6B32E98B97E;      // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_DamageType>                          DamageType_15_88DDD99C45C551E3C7E600B2EE8928AF;           // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
