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

// UserDefinedStruct S_AttachmentDetails.S_AttachmentDetails
// 0x02A0
struct FS_AttachmentDetails
{
	bool                                               IsAttachment_1_A91179EE4BECAB29FB8567BCACB0A40B;          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass* /*ABP_MasterAttachment_C*/           Attachment_5_5E2781EB424C556B72DFCA9355FDCE88;            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  AttachmentIcon_8_94B9953445C57C8C722C6280704A6517;        // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class USkeletalMesh*, class UAnimMontage*>    AttachAnimation_35_A9738B9E48AE87A1404B64B8323722B1;      // 0x0018(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*>    DetachAnimation_38_C714988A42AAAF9BB08F1E9E2FA245CB;      // 0x0068(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*>    SwapDetachAnimation_41_CEE295B54B0573FD44860CA61A6C2B80;  // 0x00B8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               CanOnlyRemoveAddWhenWeaponHeld_32_12E17DD34C3A3D3BE1CC8582E8084884;// 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	TMap<class USkeletalMesh*, class UAnimSequenceBase*> AttachWeaponAnimations_26_12DEDB2948C830197E46D4A15DB968A7;// 0x0110(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimSequenceBase*> DetachWeaponAnimations_28_A7F5C39140551BE54C75EE87F5874F6C;// 0x0160(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*>    FPAttachAnimations_57_90877AF0479B33F85E11819A49064345;   // 0x01B0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*>    FPDetachAnimations_58_B8C316C14399934143040EA8D836A11D;   // 0x0200(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*>    FPSwapDetachAnimations_59_540BC86043189F6A8BDA0E9E9DA0F85B;// 0x0250(0x0050) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
