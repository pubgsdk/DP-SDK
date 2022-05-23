#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_EquipmentMeshes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_EquipmentDetails.S_EquipmentDetails
// 0x0170
struct FS_EquipmentDetails
{
	TSet<TEnumAsByte<E_EquipmentType>>                 EquipmentSlots_10_CCC18F0A4E6318F24AEB748D9321B834;       // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FS_EquipmentMeshes                          ThirdPersonEquipmentMeshes_53_574EB0D34D02565710AE9B8C2B3F49D3;// 0x0050(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_EquipmentMeshes                          FirstPersonBodyEquipmentMeshes_54_5B6FE8724D4844528229488149EF2142;// 0x0070(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_EquipmentMeshes                          FirstPersonArmsEquipmentMeshes_55_AD17FD464CED29EB1EC5DA9287531E53;// 0x0090(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	int                                                EquipmentQuickSlots_28_BD3FF0BF492929064D5ED09A1E24DD0D;  // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<E_DamageType>, int>               EquipmentArmour_33_2F63729141C3B22C5EEDCCA2D4AA9A13;      // 0x00B8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<E_DamageType>, float>             EquipmentDurabilityReductions_46_5CA7B2894623CAA5BFA4FEA0D6A5E522;// 0x0108(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               HideInFirstPerson_40_40A20CFC40110CB144C75CB6BB371FAF;    // 0x0158(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	TArray<struct FString>                             HideCharacterComponentTags_45_31593B354C0DDD86F10F59826ABF819D;// 0x0160(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
