#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_LowerBodyAnims_classes.hpp"
#include "S_UpperBodyAnims_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_HoldableAnims.S_HoldableAnims
// 0x00D8
struct FS_HoldableAnims
{
	class USkeletalMesh*                               CharacterMesh_45_AFE324E2460F50573BC49D87EEC5D7EC;        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UpperBodyAnims                           UpperBodyAnimations_38_2FA59514424DF364985CFC98C50B9E82;  // 0x0008(0x0078) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_LowerBodyAnims                           LowerBodyAnimations_41_5ED2AF43415BB8DD985AE6A991BC38CC;  // 0x0080(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           JumpStart_18_CC1B01B04B028AC9E53179803A25ABE4;            // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           JumpLoop_20_36B075E34E5DB1DFBB30B0964163E391;             // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           JumpEnd_21_65672551419D4509345775912B3A87C9;              // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
