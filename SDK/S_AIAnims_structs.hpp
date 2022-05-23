#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_AIAnims.S_AIAnims
// 0x0050
struct FS_AIAnims
{
	class UAnimSequence*                               Idle_4_EA3E7D4244AB8FA5963735B0D5D69AF6;                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpStart_16_AE893432486D2ED788471FB2C54E6B79;            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpLoop_21_18BEF41047F436A360C7D1B4874C6109;             // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpLand_22_319E49DE45C8C322B38694B438D97EEC;             // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBlendSpace*                                 Walk_14_981011D4405BB62F66BF95A0AAE47E8E;                 // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               CrouchIdle_15_2ADE9A334F6281E9C50EF7B154874B7F;           // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBlendSpace*                                 CrouchWalk_13_4109F814435031B9E1CDECA2532B386A;           // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UAnimMontage*>                        HitReactions_26_E599475B4CC13B9C83D2CEB912BCF776;         // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UAimOffsetBlendSpace1D*                      AimOffset_29_FA4C30274EBFB2470C9AB3B4BE70E85B;            // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
