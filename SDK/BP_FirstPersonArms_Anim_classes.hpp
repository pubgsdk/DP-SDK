#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FirstPersonArms_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C
// 0x5544 (0x5804 - 0x02C0)
class UBP_FirstPersonArms_Anim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                           // 0x02F8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                           // 0x0450(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x0478(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                           // 0x04C0(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x0618(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x0770(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x0798(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x0838(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x08F8(0x0190)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x0A88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x0AB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x0AD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x0B00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x0B28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x0B50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x0B78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x0BA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x0BC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0BF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0C18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0C40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0C68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0C90(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57;                          // 0x0CB8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56;                          // 0x0D38(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55;                          // 0x0DB8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_23;                         // 0x0E38(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54;                          // 0x0EE8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53;                          // 0x0F68(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52;                          // 0x0FE8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_22;                         // 0x1068(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_21;                         // 0x1118(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51;                          // 0x11C8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50;                          // 0x1248(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49;                          // 0x12C8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_20;                         // 0x1348(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x13F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                          // 0x1428(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                          // 0x14A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                          // 0x1528(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_19;                         // 0x15A8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                          // 0x1658(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                          // 0x16D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                          // 0x1758(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_18;                         // 0x17D8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_17;                         // 0x1888(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                          // 0x1938(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                          // 0x19B8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                          // 0x1A38(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_16;                         // 0x1AB8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x1B68(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                          // 0x1B98(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                          // 0x1C18(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                          // 0x1C98(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                          // 0x1D18(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                          // 0x1D98(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_15;                         // 0x1E18(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                          // 0x1EC8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                          // 0x1F48(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_14;                         // 0x1FC8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_13;                         // 0x2078(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                          // 0x2128(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                          // 0x21A8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_12;                         // 0x2228(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x22D8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                          // 0x2378(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                          // 0x23F8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                          // 0x2478(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                          // 0x24F8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                          // 0x2578(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_11;                         // 0x25F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x26A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x2728(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_10;                         // 0x27A8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9;                          // 0x2858(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x2908(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x2988(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                          // 0x2A08(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x2AB8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x2AE8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x2B68(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x2BE8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x2C68(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                          // 0x2CE8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x2D98(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x2DC8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x2E48(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x2EC8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x2F48(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                          // 0x2FC8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x3078(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x30A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x3128(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x31A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x3228(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                          // 0x32A8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x3358(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x3388(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x3408(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x3488(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                          // 0x3508(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x35B8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x3638(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x36B8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                          // 0x3738(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x37E8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x3898(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x3918(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x3998(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x3A18(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x3AC8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x3AF8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x3BA8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x3D00(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x3D28(0x0028)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                     // 0x3D50(0x0190)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3;                                // 0x3EE0(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x40C0(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x41C8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x4320(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x4348(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x4368(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x4390(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x44E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x4510(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x4538(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x4640(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x4660(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x4680(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x46A0(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x47A8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x4848(0x0028)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                // 0x4870(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x4A50(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x4B58(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x4B78(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x4B98(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x4CF0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x4D18(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x4D60(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x4DA8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x4DD0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x4E90(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x4EB8(0x00A0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x4F58(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                  // 0x4F60(0x01E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x5140(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x5200(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x5228(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x52C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x52F0(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x5318(0x00C8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x53E0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x5400(0x0020)
	bool                                               IsInAir_;                                                 // 0x5420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsHoldingWeapon;                                          // 0x5421(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsCrouched;                                               // 0x5422(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsAccelerating;                                           // 0x5423(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseAimOffset;                                             // 0x5424(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseRightHandIK;                                           // 0x5425(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseLeftHandIK;                                            // 0x5426(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x5427(0x0001) MISSED OFFSET
	class ACharacter*                                  OwningPawn;                                               // 0x5428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    AimOffset;                                                // 0x5430(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector2D                                   LookAtRotation;                                           // 0x543C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Speed;                                                    // 0x5444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Direction;                                                // 0x5448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimPitch;                                                 // 0x544C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimYaw;                                                   // 0x5450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RootYawOffset;                                            // 0x5454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawLastTick;                                              // 0x5458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Yaw;                                                      // 0x545C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawChangeOverFrame;                                       // 0x5460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurveValue;                                               // 0x5464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurveValueLastFrame;                                      // 0x5468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x546C(0x0004) MISSED OFFSET
	class UAnimMontage*                                EmptyHandsCrouchTurnRight;                                // 0x5470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsCrouchTurnLeft;                                 // 0x5478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsTurnRight;                                      // 0x5480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsTurnLeft;                                       // 0x5488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxTurnInPlaceAngle;                                      // 0x5490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0xC];                                       // 0x5494(0x000C) MISSED OFFSET
	struct FTransform                                  LeftHandIKTransform;                                      // 0x54A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  RightHandIKTransform;                                     // 0x54D0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_AnimationMode>                       CurrentAnimMode;                                          // 0x5500(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x7];                                       // 0x5501(0x0007) MISSED OFFSET
	class UAimOffsetBlendSpace*                        EmptyHandsAimOffset;                                      // 0x5508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpingStart;                                             // 0x5510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpingLoop;                                              // 0x5518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpLand;                                                 // 0x5520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                       PlayerInventory;                                          // 0x5528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_CharacterComponent_C*                    CharacterComponent;                                       // 0x5530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_FirstPersonArmsAnims                     HoldableAnims1;                                           // 0x5538(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                CurrentTurnAnim;                                          // 0x55D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsHoldingItem;                                            // 0x55D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Aimed;                                                    // 0x55D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x2];                                       // 0x55DA(0x0002) MISSED OFFSET
	struct FVector                                     RightHandIKLocationOffsetADS;                             // 0x55DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_AimOffsets                               HoldableAimOffsets;                                       // 0x55E8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     SightOffset;                                              // 0x5600(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InAction;                                                 // 0x560C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x560D(0x0003) MISSED OFFSET
	class UAimOffsetBlendSpace*                        HoldableAimOffset;                                        // 0x5610(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AnimationState>                      AnimationState;                                           // 0x5618(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseRightHandADSOffset;                                    // 0x5619(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x2];                                       // 0x561A(0x0002) MISSED OFFSET
	float                                              Lean;                                                     // 0x561C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTransform                                  SightTransform;                                           // 0x5620(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_AimOffset>                           AimOffsetType;                                            // 0x5650(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x3];                                       // 0x5651(0x0003) MISSED OFFSET
	struct FRotator                                    RightHandSway;                                            // 0x5654(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              WeaponCollision;                                          // 0x5660(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RightHandIkEnabled;                                       // 0x5664(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    ClippingRotation;                                         // 0x5668(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Sprinting;                                                // 0x5674(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x3];                                       // 0x5675(0x0003) MISSED OFFSET
	struct FVector                                     ElbowOffset;                                              // 0x5678(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bLock;                                                    // 0x5684(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               RightHandIK;                                              // 0x5685(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HeadAO;                                                   // 0x5686(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowHandIKs;                                             // 0x5687(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              Spine2AOAlpha;                                            // 0x5688(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Spine3AOAlpha;                                            // 0x568C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HeadAOAlpha;                                              // 0x5690(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseSway;                                                  // 0x5694(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               LeftHandIK;                                               // 0x5695(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x2];                                       // 0x5696(0x0002) MISSED OFFSET
	float                                              Spine1AOAlpha;                                            // 0x5698(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LeftHandIkEnabled;                                        // 0x569C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpecalAO;                                                 // 0x56A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData11[0x4];                                       // 0x56A4(0x0004) MISSED OFFSET
	struct FS_FirstPersonArmsAnims                     HoldableAnims2;                                           // 0x56A8(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                        HoldingItem;                                              // 0x5740(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                        NewHoldable;                                              // 0x5748(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPrimitiveComponent*                         HoldingItemMesh;                                          // 0x5750(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_FirstPersonArmsAnims                     EmptyHandsUpperBody;                                      // 0x5758(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterAttachment_C*                      LastSight;                                                // 0x57F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LeftElbowOffset;                                          // 0x57F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void TurnInPlaceMontage(bool Right, class UAnimMontage** Montage);
	void SelectAnims(TArray<struct FS_FirstPersonArmsAnims>* FirstPersonAnims, bool* AnimsFound, struct FS_FirstPersonArmsAnims* Anims);
	void CalculateAimOffset();
	void UpdateAOWeights();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_5EF7B0E5483436531C611683A4701054();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_6B85F4B6426A1A9C67CAEBAB7B8AB2AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_F707D91F45BFA11C639004BB3126C472();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_66D2D2154FF69728F639AD9D22A64A5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_144E7E53475E6D5845CBAC9FD5C45CA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_E15168274668F42198870884F5B3E234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_98D9E062462F951C1FD6CC80A65D1F4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_0DB43E6A4E078AD0877E6A9DFAF1988C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_1CABD84E4D040B72FEA1A68BBB2E1C4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_8F4F39FA4DA81E6C2CC11F8866BC8E76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_F0B996DE47010D050D66A18EB819CBE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_9FB07C9B406444B13C04D7B27A979A31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A3AF4BC042EFBF256B80CF96C3556DCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A73A8A7A40869C88F24B12951C038882();
	void AnimNotify_DisableHandIK();
	void AnimNotify_EnableHandIK();
	void AnimNotify_EndAnimInAction();
	void AnimNotify_StartAnimInAction();
	void BlueprintInitializeAnimation();
	void SGK_EndChamberMontage();
	void SGK_UpdateAnimationState(TEnumAsByte<E_AnimationState> AnimationState);
	void SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void CheckTurnInPlace();
	void ResetCurveInPlace();
	void ResetFirstCurve();
	void TurnInPlaceAnimPlaying();
	void ExecuteUbergraph_BP_FirstPersonArms_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
