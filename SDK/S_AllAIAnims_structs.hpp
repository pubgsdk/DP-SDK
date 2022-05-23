#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_AIAnims_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_AllAIAnims.S_AllAIAnims
// 0x04C8
struct FS_AllAIAnims
{
	struct FS_AIAnims                                  DefaultAnims_2_AAFC74F647141E0EA990F8AD4A07A06F;          // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseFleeAnims_6_6401D3DA450796B4F43324B5076BF174;          // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  FleeAnims_9_6A24C9DD4AF334FD56577BA89ACDE054;             // 0x0058(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseSearchAnims_12_9A0183844E7C9748EA853985A60949DC;       // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  SearchAnims_15_5D912126412EC82FA79EF4AD3F4CE841;          // 0x00B0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseWayPointAnims_31_B4ADC2484EF25294E2A33EBDD0903F3E;     // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  WayPointAnims_17_87547E0D4E2C118EC39AF2887A7D8963;        // 0x0108(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseAIInteractionAnims_33_4BA3D3E0437D313E41FE6CA148A97B84;// 0x0158(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  AIInteractionAnims_20_CA355FCB472CDF0ABEED2DA0315D160B;   // 0x0160(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseRangeAttackAnims_35_49533321481D729F0BD6BFADA5787C88;  // 0x01B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  RangeAttackAnims_22_43FF593241EF9D0B52213188CE23B3DA;     // 0x01B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseMeleeAttackAnims_37_003AC93944BF7DD771924290DF9C0B41;  // 0x0208(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  MeleeAttackAnims_24_FD64A46A47779E99D31250B948CB5612;     // 0x0210(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseInteractionPointAnims_47_B14F41E442A10F2C5D2B92869B895192;// 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  InteractionPointAnims_26_904CB1F5433EE34BDC6D9298928E707E;// 0x0268(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseRoamAnims_41_08F47BC14976969D2E194187CFB024DF;         // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  RoamAnims_28_304CC7D648660764DC71BDB5759561C9;            // 0x02C0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseStillAnims_43_8C1E19EE461B4883EB1EAB9473E0B602;        // 0x0310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  StillAnims_46_24B2969F4D92B001C93A24B8F632F84E;           // 0x0318(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseFollowAnims_49_9BAE982E40DC3CE59C9A849B11909212;       // 0x0368(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  FollowAnims_52_35FB9CFA4C8770B888CEE391BAE27954;          // 0x0370(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseFaceDirection_54_874051E24A9BD49A702A60B73B463416;     // 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  FaceDirection_57_B02835C74FDCDF62A63BA6B3B1D0B486;        // 0x03C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseMeleeCombatStance_68_AE60AF89442226F11C91E69315950FB5; // 0x0418(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  MeleeCombatStanceAnims_66_66A42F7D4EA1CCDDAB3265B97A9F2068;// 0x0420(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               UseRangeCombatStance_65_69B854734B5D61556E89E1A7E29FFDEC; // 0x0470(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FS_AIAnims                                  RangeCombatStanceAnims_67_2CBEA0624EA23F3DCD1F8581006F9807;// 0x0478(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
