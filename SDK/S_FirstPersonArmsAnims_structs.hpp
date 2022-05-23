#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_UpperAnimSet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_FirstPersonArmsAnims.S_FirstPersonArmsAnims
// 0x0098
struct FS_FirstPersonArmsAnims
{
	class USkeletalMesh*                               ArmsMesh_24_A5982BA2499AEAC115CD129273FF5155;             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UpperAnimSet                             StandardAnimations_33_68A9B2FB4DE99DF97500CC8A4AF8DF89;   // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UpperAnimSet                             AimedAnimations_35_1C417DEE4972450256765B93FBF94F87;      // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UpperAnimSet                             CombatAnimations_37_3C9C73E54E1918D4F301A9BA81115B84;     // 0x0058(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           JumpStart_42_E2453D9544FE39085D2E139DC7393103;            // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           JumpLoop_43_A6D975A947FD5006C8BFA5AEBA070256;             // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           JumpEnd_44_D838122A4A4D7B186D3356B60791132B;              // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
