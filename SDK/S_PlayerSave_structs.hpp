#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_EquipmentSave_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_PlayerSave.S_PlayerSave
// 0x00F8
struct FS_PlayerSave
{
	struct FText                                       Name_7_840382AF42E3FEEB857A569E1725A821;                  // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FS_EquipmentSave                            EquipmentSave_22_5DDA6D314B8E0EFEA5EAC280E49BCDFD;        // 0x0020(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	int                                                Health_10_2151F84548785A37F724A2AE7CDA9B10;               // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Hunger_16_FF58932045F381E520BF3C8FEB9C8D48;               // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Thirst_17_9B044EEA4D744C2F562AB09D11A847C3;               // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ItemCount_25_BE9DEC9740744B667432109C9C3D70CD;            // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C;               // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Location_34_21D0211042F02DCE8E41AA9846246C43;             // 0x00A4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    Rotation_33_5B6A61524883011ECE061EA74F30CF17;             // 0x00B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<struct FName>                               Recipes_38_88EA9C334CE363FE1A4C31BEEA09F22F;              // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       RespawnPoint_42_528828944079C817DC32DE9FC1494A6D;         // 0x00D0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     LastLevel_45_0EBBBE6448586E28022C8591845E511B;            // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
