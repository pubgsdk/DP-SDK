#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FirstPersonBody_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C
// 0x76B8 (0x7978 - 0x02C0)
class UBP_FirstPersonBody_Anim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x02F8(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8;                           // 0x03B8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x0510(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                               // 0x0538(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x0640(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x0668(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x0690(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x06B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x06E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x0708(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x0730(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x0758(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x0780(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x07A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x07D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x07F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x0820(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x0848(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12;                        // 0x0870(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11;                        // 0x0958(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_10;                        // 0x0A40(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_36;                         // 0x0B28(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_35;                         // 0x0BD8(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                         // 0x0C88(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                         // 0x0D70(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                         // 0x0E58(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_34;                         // 0x0F40(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x0FF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72;                          // 0x1020(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71;                          // 0x10A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70;                          // 0x1120(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_33;                         // 0x11A0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_32;                         // 0x1250(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69;                          // 0x1300(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68;                          // 0x1380(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67;                          // 0x1400(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_31;                         // 0x1480(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x1530(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                         // 0x1560(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x1648(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x1730(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_30;                         // 0x1818(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_29;                         // 0x18C8(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x1978(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x1A60(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x1B48(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_28;                         // 0x1C30(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0x1CE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66;                          // 0x1D10(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65;                          // 0x1D90(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64;                          // 0x1E10(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63;                          // 0x1E90(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_27;                         // 0x1F10(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x1FC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62;                          // 0x1FF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61;                          // 0x2070(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60;                          // 0x20F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59;                          // 0x2170(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_26;                         // 0x21F0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x22A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58;                          // 0x22D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57;                          // 0x2350(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56;                          // 0x23D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55;                          // 0x2450(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_25;                         // 0x24D0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x2580(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54;                          // 0x25B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53;                          // 0x2630(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52;                          // 0x26B0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_24;                         // 0x2730(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_23;                         // 0x27E0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51;                          // 0x2890(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50;                          // 0x2910(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49;                          // 0x2990(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_22;                         // 0x2A10(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x2AC0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x2AF0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x2BA0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                           // 0x2BE8(0x0158)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x2D40(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                           // 0x2D60(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x2EB8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x2EE0(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4;                 // 0x2FA0(0x0190)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x3130(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x3158(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x3180(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x31A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x31D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x31F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x3220(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x3248(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x3270(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x3298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x32C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x32E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x3310(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x3338(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                          // 0x3360(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                          // 0x33E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                          // 0x3460(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_21;                         // 0x34E0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                          // 0x3590(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                          // 0x3610(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                          // 0x3690(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_20;                         // 0x3710(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_19;                         // 0x37C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                          // 0x3870(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                          // 0x38F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                          // 0x3970(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_18;                         // 0x39F0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x3AA0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                          // 0x3AD0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                          // 0x3B50(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                          // 0x3BD0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_17;                         // 0x3C50(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                          // 0x3D00(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                          // 0x3D80(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                          // 0x3E00(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_16;                         // 0x3E80(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_15;                         // 0x3F30(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                          // 0x3FE0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                          // 0x4060(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                          // 0x40E0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_14;                         // 0x4160(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x4210(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                          // 0x4240(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                          // 0x42C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                          // 0x4340(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                          // 0x43C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                          // 0x4440(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_13;                         // 0x44C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x4570(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x45F0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_12;                         // 0x4670(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_11;                         // 0x4720(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x47D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x4850(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_10;                         // 0x48D0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x4980(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x49B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x4A30(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x4AB0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x4B30(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9;                          // 0x4BB0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x4C60(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x4C90(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x4D10(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x4D90(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x4E10(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                          // 0x4E90(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x4F40(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x4F70(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x4FF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x5070(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x50F0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                          // 0x5170(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x5220(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x5250(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x52D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x5350(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                          // 0x53D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x5480(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x5500(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x5580(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                          // 0x5600(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                          // 0x56B0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x5760(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x57E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x5860(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                          // 0x58E0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x5990(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x59C0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x5A70(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x5BC8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x5C10(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x5C30(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x5C58(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x5C80(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x5CA8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                               // 0x5CD0(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x5DD8(0x0158)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x5F30(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x5F50(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x60A8(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x60D0(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3;                 // 0x6180(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x6310(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                 // 0x6338(0x0190)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x64C8(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x6578(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x65A0(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x6730(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x6888(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x68B0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x68D8(0x0158)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x6A30(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x6A50(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x6B58(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x6C60(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x6C80(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x6CA0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x6DA8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x6EB0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x6FB8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x6FD8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x6FF8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x7020(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x7068(0x0048)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_2;                           // 0x70B0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x7150(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x71F0(0x0028)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone;                             // 0x7218(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x72B8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x72E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x73E8(0x0108)
	bool                                               IsInAir_;                                                 // 0x74F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsHoldingWeapon;                                          // 0x74F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsCrouched;                                               // 0x74F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsAccelerating;                                           // 0x74F3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseAimOffset;                                             // 0x74F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseRightHandIK;                                           // 0x74F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseLeftHandIK;                                            // 0x74F6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x74F7(0x0001) MISSED OFFSET
	class ACharacter*                                  OwningPawn;                                               // 0x74F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    AimOffset;                                                // 0x7500(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector2D                                   LookAtRotation;                                           // 0x750C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Speed;                                                    // 0x7514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Direction;                                                // 0x7518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimPitch;                                                 // 0x751C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimYaw;                                                   // 0x7520(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RootYawOffset;                                            // 0x7524(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawLastTick;                                              // 0x7528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Yaw;                                                      // 0x752C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawChangeOverFrame;                                       // 0x7530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurveValue;                                               // 0x7534(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurveValueLastFrame;                                      // 0x7538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x753C(0x0004) MISSED OFFSET
	class UAnimMontage*                                EmptyHandsCrouchTurnRight;                                // 0x7540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsCrouchTurnLeft;                                 // 0x7548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsTurnRight;                                      // 0x7550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsTurnLeft;                                       // 0x7558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxTurnInPlaceAngle;                                      // 0x7560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0xC];                                       // 0x7564(0x000C) MISSED OFFSET
	struct FTransform                                  LeftHandIKTransform;                                      // 0x7570(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  RightHandIKTransform;                                     // 0x75A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_AnimationMode>                       CurrentAnimMode;                                          // 0x75D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x7];                                       // 0x75D1(0x0007) MISSED OFFSET
	class UAimOffsetBlendSpace*                        EmptyHandsAimOffset;                                      // 0x75D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpingStart;                                             // 0x75E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpingLoop;                                              // 0x75E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpLand;                                                 // 0x75F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                       PlayerInventory;                                          // 0x75F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_CharacterComponent_C*                    CharacterComponent;                                       // 0x7600(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     SightOffset;                                              // 0x7608(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x7614(0x0004) MISSED OFFSET
	class UAimOffsetBlendSpace*                        HoldableAimOffset;                                        // 0x7618(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                CurrentTurnAnim;                                          // 0x7620(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Aimed;                                                    // 0x7628(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseRightHandADSOffset;                                    // 0x7629(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x2];                                       // 0x762A(0x0002) MISSED OFFSET
	struct FVector                                     RightHandIKLocationOffsetADS;                             // 0x762C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AnimationState>                      AnimationState;                                           // 0x7638(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InAction;                                                 // 0x7639(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseSway;                                                  // 0x763A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x5];                                       // 0x763B(0x0005) MISSED OFFSET
	struct FS_AimOffsets                               HoldableAimOffsets;                                       // 0x7640(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AimOffset>                           AimOffsetType;                                            // 0x7658(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x7];                                       // 0x7659(0x0007) MISSED OFFSET
	struct FS_HoldableAnims                            HoldableAnims1;                                           // 0x7660(0x00D8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Lean;                                                     // 0x7738(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x4];                                       // 0x773C(0x0004) MISSED OFFSET
	struct FTransform                                  SightTransform;                                           // 0x7740(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    RightHandSway;                                            // 0x7770(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              SpecalAO;                                                 // 0x777C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              WeaponCollision;                                          // 0x7780(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LeftHandIkEnabled;                                        // 0x7784(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowHandIKs;                                             // 0x7788(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Sprinting;                                                // 0x7789(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               RightHandIK;                                              // 0x778A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x1];                                       // 0x778B(0x0001) MISSED OFFSET
	float                                              Spine2AOAlpha;                                            // 0x778C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HeadAO;                                                   // 0x7790(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x3];                                       // 0x7791(0x0003) MISSED OFFSET
	float                                              RightHandIkEnabled;                                       // 0x7794(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LeftHandIK;                                               // 0x7798(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData11[0x3];                                       // 0x7799(0x0003) MISSED OFFSET
	float                                              Spine1AOAlpha;                                            // 0x779C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     ElbowOffset;                                              // 0x77A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Spine3AOAlpha;                                            // 0x77AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HeadAOAlpha;                                              // 0x77B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    ClippingRotation;                                         // 0x77B4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bLock;                                                    // 0x77C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData12[0x7];                                       // 0x77C1(0x0007) MISSED OFFSET
	struct FS_HoldableAnims                            HoldableAnims2;                                           // 0x77C8(0x00D8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                        HoldingItem;                                              // 0x78A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                        NewHoldable;                                              // 0x78A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsHoldingItem;                                            // 0x78B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData13[0x7];                                       // 0x78B1(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         HoldingItemMesh;                                          // 0x78B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_LowerBodyAnims                           EmptyHandsLowerBody;                                      // 0x78C0(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UpperBodyAnims                           EmptyHandsUpperBody;                                      // 0x7900(0x0078) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void TurnInPlaceMontage(bool Right, class UAnimMontage** Montage);
	void SelectAnims(TArray<struct FS_HoldableAnims>* AllAnims, bool* AnimsFound, struct FS_HoldableAnims* Anims);
	void CalculateAimOffset();
	void UpdateAOWeights();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_ModifyBone_B5CFCD0D4255D9486D64C39D4F255C67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_ModifyBone_972AF9574F9CCAF588990BB52EAA955B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_203D8CA54EEF5F6BDD3BBA8789E4C994();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3B0DD019446B0C4ADAF69C8E91C4DDC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_940260584FC7E6A7BE789AA3E517D0FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_AA9487BD4F62456E8271D2A9BDFEE9AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_DBFC19684962B18D8B8DDCB7BA19DE7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_12C40FE74634FE40067EA6AE5B915961();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_12D8FB2D4A8F663FB65B44B3A97DE03D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3C9FABE7419EFE221B27B6A788D571C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_FFA2017A41078752C7D27995FC2CF195();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_DFB777CE41E6BB07BA6F79B647059485();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3512BE1E499CFE4C1CEE77A4E88751F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_4E7A229C4F3A202FD83E92A6E518BC52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_6A0BA93D45E4B9187616F69FBB3E3596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_432762C945B332D720DB74B4F22C3112();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_B3B555044637E4A65C491E8E3B4C0CBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_B051582E4EFDCA59F4CFA79C4B149A08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_94424F14484F79A315A0598D3A40B058();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_AA94C15B4806F324A8538180076D2CCC();
	void AnimNotify_EndAnimInAction();
	void AnimNotify_StartAnimInAction();
	void SGK_EndChamberMontage();
	void SGK_UpdateAnimationState(TEnumAsByte<E_AnimationState> AnimationState);
	void BlueprintInitializeAnimation();
	void SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void CheckTurnInPlace();
	void ResetCurveInPlace();
	void ResetFirstCurve();
	void TurnInPlaceAnimPlaying();
	void ExecuteUbergraph_BP_FirstPersonBody_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
