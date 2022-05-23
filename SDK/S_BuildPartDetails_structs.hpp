#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "E_BuildType_classes.hpp"
#include "Engine_classes.hpp"
#include "S_CraftingCost_classes.hpp"
#include "E_Hitbox_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_BuildPartDetails.S_BuildPartDetails
// 0x00D1
struct FS_BuildPartDetails
{
	struct FText                                       Name_3_7D79CDB04F46AA8C4B79BD91206C7297;                  // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description_5_CF0948154051EFF5968711AE11E698B1;           // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_BuildType>                           Type_11_4EE18B2442F9B2B20D5F0485F097A7F7;                 // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanTakeDamage_14_BE5F52BD4902DA0CE110CCA7B973FF05;        // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               RequireGrid_30_E1F262404F36ADA5028BADBD969D8355;          // 0x0032(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IgnoreFloorCollision_32_B243F91D423B2B008B4220B70A999FC7; // 0x0033(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanRotate_16_4B239A6B41669D707B55F8819643DADD;            // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShowRotationArrow_34_9EDAA177450511281CEA4DA8EAE30FAA;    // 0x0035(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	float                                              RotateIncrements_19_FE1BD0674DB8103AA8FC27B0DA40B5D9;     // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UClass* /*AActor*/                           BlueprintClass_22_1951355C4FF993F29BAC2F961692DC31;       // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_CraftingCost>                     ItemCost_28_C373B2154051569661AC2EA07F2DD819;             // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_CraftingCost>                     OverrideItemCost_77_961E47DE4243F097ED67238E8332A534;     // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UTexture2D*                                  BuildMenuIcon_37_70CC149546F20A75CD552D8338915F23;        // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowRepair_57_CA324BB04A470CF20B5614A9CFFF0FCD;          // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FS_CraftingCost>                     RepairCost_41_DADCB5AF467FD14FC1EFA0B7D18CF337;           // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FDataTableRowHandle                         UpgradeBuildPart_44_4AAB528748EF706B3A8977A5FF50C463;     // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	bool                                               AllowPickupBuildPart_54_69C2B6064F3E0532A41451A86BACDBB4; // 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	TArray<struct FS_CraftingCost>                     PickupItems_58_6CC027644D41F5913E5320B8715BDF8C;          // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_Hitbox>                              HitboxType_61_14410F4D4B85F56ADA8FC9AF40A40924;           // 0x00B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanAdjustHeight_67_57B6566144B4AD42B3B30BA12EF39995;      // 0x00B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	float                                              HeightAdjustIncrements_66_B360B55F4FF4EE335451CAA34A2F3B2F;// 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinHeightAdjust_70_9356EB604FEEECFB88DC78BF54AAFAF0;      // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxHeightAdjust_71_AF03C1C7462AE34DC41C298F65DA5A81;      // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowNamePanel_79_346D714A4E7A56B2563EB8B1A3CB6D9D;        // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseHitSurfaceRotation_81_6E5E6C5548D0C2207C6B1F939950168B;// 0x00C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	struct FRotator                                    HitSurfaceRotationOffset_84_31438CDD4D23D6F8B5BC15ACCF6244C5;// 0x00C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IgnoreOwnership_86_924D87FD4A6502CE3DED4B9CF0FF0DE8;      // 0x00D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
