#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ThirdPerson_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C
// 0x8A18 (0x8CD8 - 0x02C0)
class UBP_ThirdPerson_Anim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                         // 0x02F8(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10;                          // 0x03B8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24;                           // 0x0510(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                              // 0x0538(0x0108)
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
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                     // 0x2BA0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9;                           // 0x2BE8(0x0158)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                    // 0x2D40(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8;                           // 0x2D60(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x2EB8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x2F58(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4;                 // 0x3018(0x0190)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x31A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x31D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x31F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x3220(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x3248(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x3270(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x3298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x32C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x32E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x3310(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x3338(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x3360(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x3388(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x33B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                          // 0x33D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                          // 0x3458(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                          // 0x34D8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_21;                         // 0x3558(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                          // 0x3608(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                          // 0x3688(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                          // 0x3708(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_20;                         // 0x3788(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_19;                         // 0x3838(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                          // 0x38E8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                          // 0x3968(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                          // 0x39E8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_18;                         // 0x3A68(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x3B18(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                          // 0x3B48(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                          // 0x3BC8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                          // 0x3C48(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_17;                         // 0x3CC8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                          // 0x3D78(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                          // 0x3DF8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                          // 0x3E78(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_16;                         // 0x3EF8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_15;                         // 0x3FA8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                          // 0x4058(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                          // 0x40D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                          // 0x4158(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_14;                         // 0x41D8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x4288(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                          // 0x42B8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                          // 0x4338(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                          // 0x43B8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                          // 0x4438(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                          // 0x44B8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_13;                         // 0x4538(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x45E8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x4668(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_12;                         // 0x46E8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_11;                         // 0x4798(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x4848(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x48C8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_10;                         // 0x4948(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x49F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x4A28(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x4AA8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x4B28(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x4BA8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9;                          // 0x4C28(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x4CD8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x4D08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x4D88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x4E08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x4E88(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                          // 0x4F08(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x4FB8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x4FE8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x5068(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x50E8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x5168(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                          // 0x51E8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x5298(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x52C8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x5348(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x53C8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                          // 0x5448(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x54F8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x5578(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x55F8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                          // 0x5678(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                          // 0x5728(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x57D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x5858(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x58D8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                          // 0x5958(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x5A08(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x5A38(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                           // 0x5AE8(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x5C40(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23;                           // 0x5C88(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22;                           // 0x5CB0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21;                           // 0x5CD8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20;                           // 0x5D00(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                              // 0x5D28(0x0108)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                     // 0x5E30(0x0190)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3;                                // 0x5FC0(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                               // 0x61A0(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                           // 0x62A8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19;                           // 0x6400(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x6428(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                    // 0x6448(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x6468(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                           // 0x65C0(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x65E8(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3;                 // 0x6698(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                           // 0x6828(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                 // 0x6850(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x69E0(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x6A80(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                           // 0x6B30(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x6B58(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x6CE8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                           // 0x6E40(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x6E68(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x6E90(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x6FE8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x7010(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x7038(0x0158)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                               // 0x7190(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x7298(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x72B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x73C0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x74C8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x74E8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x7508(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x7530(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x7638(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x76D8(0x0028)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                // 0x7700(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x78E0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x79E8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x7A08(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x7A28(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x7B80(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x7BA8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x7BF0(0x0048)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_2;                           // 0x7C38(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x7CD8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x7D00(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x7DC0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x7DE8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x7E88(0x0028)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                  // 0x7EB0(0x01E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x8090(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x8150(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x8178(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x8218(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x8240(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x82E0(0x0028)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone;                             // 0x8308(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x83A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x84B0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x85B8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x86C0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x86E0(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x8700(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x8748(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x8808(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x8830(0x0028)
	bool                                               IsInAir_;                                                 // 0x8858(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsCrouched;                                               // 0x8859(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsAccelerating;                                           // 0x885A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseAimOffset;                                             // 0x885B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseRightHandIK;                                           // 0x885C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseLeftHandIK;                                            // 0x885D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x885E(0x0002) MISSED OFFSET
	class ACharacter*                                  OwningPawn;                                               // 0x8860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    AimOffset;                                                // 0x8868(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector2D                                   LookAtRotation;                                           // 0x8874(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Speed;                                                    // 0x887C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Direction;                                                // 0x8880(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimPitch;                                                 // 0x8884(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimYaw;                                                   // 0x8888(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RootYawOffset;                                            // 0x888C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawLastTick;                                              // 0x8890(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Yaw;                                                      // 0x8894(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawChangeOverFrame;                                       // 0x8898(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurveValue;                                               // 0x889C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurveValueLastFrame;                                      // 0x88A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x88A4(0x0004) MISSED OFFSET
	class UAnimMontage*                                EmptyHandsTurnRight;                                      // 0x88A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsTurnLeft;                                       // 0x88B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsCrouchTurnRight;                                // 0x88B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                EmptyHandsCrouchTurnLeft;                                 // 0x88C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxTurnInPlaceAngle;                                      // 0x88C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x88CC(0x0004) MISSED OFFSET
	struct FTransform                                  LeftHandIKTransform;                                      // 0x88D0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  RightHandIKTransform;                                     // 0x8900(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  SightTransform;                                           // 0x8930(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               InAction;                                                 // 0x8960(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x8961(0x0003) MISSED OFFSET
	struct FVector                                     RightHandIKLocationOffsetADS;                             // 0x8964(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                CurrentTurnAnim;                                          // 0x8970(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AnimationMode>                       CurrentAnimMode;                                          // 0x8978(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x7];                                       // 0x8979(0x0007) MISSED OFFSET
	class UAimOffsetBlendSpace*                        EmptyHandsAimOffset;                                      // 0x8980(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpingStart;                                             // 0x8988(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpingLoop;                                              // 0x8990(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               JumpLand;                                                 // 0x8998(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                       PlayerInventory;                                          // 0x89A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_CharacterComponent_C*                    CharacterComponent;                                       // 0x89A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     SightOffset;                                              // 0x89B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x89BC(0x0004) MISSED OFFSET
	struct FS_HoldableAnims                            HoldableAnims1;                                           // 0x89C0(0x00D8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_HoldableAnims                            HoldableAnims2;                                           // 0x8A98(0x00D8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AimOffset>                           AimOffsetType;                                            // 0x8B70(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AnimationState>                      AnimationState;                                           // 0x8B71(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x2];                                       // 0x8B72(0x0002) MISSED OFFSET
	struct FRotator                                    RightHandSway;                                            // 0x8B74(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              Lean;                                                     // 0x8B80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              WeaponCollision;                                          // 0x8B84(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseSway;                                                  // 0x8B88(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x3];                                       // 0x8B89(0x0003) MISSED OFFSET
	float                                              RightHandIkEnabled;                                       // 0x8B8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Sprinting;                                                // 0x8B90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x3];                                       // 0x8B91(0x0003) MISSED OFFSET
	struct FRotator                                    ClippingRotation;                                         // 0x8B94(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseRightHandADSOffset;                                    // 0x8BA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x3];                                       // 0x8BA1(0x0003) MISSED OFFSET
	float                                              SpecalAO;                                                 // 0x8BA4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bLock;                                                    // 0x8BA8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HeadAO;                                                   // 0x8BA9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x2];                                       // 0x8BAA(0x0002) MISSED OFFSET
	float                                              LeftHandIkEnabled;                                        // 0x8BAC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Spine2AOAlpha;                                            // 0x8BB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LeftHandIK;                                               // 0x8BB4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowHandIKs;                                             // 0x8BB5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData11[0x2];                                       // 0x8BB6(0x0002) MISSED OFFSET
	float                                              HeadAOAlpha;                                              // 0x8BB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UsingShadowDummy;                                         // 0x8BBC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData12[0x3];                                       // 0x8BBD(0x0003) MISSED OFFSET
	float                                              Spine3AOAlpha;                                            // 0x8BC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Spine1AOAlpha;                                            // 0x8BC4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     RightElbowOffset;                                         // 0x8BC8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RightHandIK;                                              // 0x8BD4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData13[0x3];                                       // 0x8BD5(0x0003) MISSED OFFSET
	struct FS_AimOffsets                               HoldableAimOffsets;                                       // 0x8BD8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                        HoldingItem;                                              // 0x8BF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsHoldingItem;                                            // 0x8BF8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData14[0x7];                                       // 0x8BF9(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         HoldingItemMesh;                                          // 0x8C00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UpperBodyAnims                           EmptyHandsUpperBody;                                      // 0x8C08(0x0078) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_LowerBodyAnims                           EmptyHandsLowerBody;                                      // 0x8C80(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      DummyMesh;                                                // 0x8CC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SprintLeftHand;                                           // 0x8CC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData15[0x3];                                       // 0x8CC9(0x0003) MISSED OFFSET
	struct FVector                                     LeftElbowOffset;                                          // 0x8CCC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void SelectAnims(TArray<struct FS_HoldableAnims>* AllAnims, bool* AnimsFound, struct FS_HoldableAnims* Anims);
	void TurnInPlaceMontage(bool Right, class UAnimMontage** Montage);
	void CalculateAimOffset();
	void UpdateAOWeights();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_EEAB781341E266BAF43B1895FCDB05A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2F9D70344354FD076E887DB02A618139();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_D91CC3BA4325B70779753D9538068129();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_B802DFE04A5BE458F35ECFBD67F634EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_001423B24F49959D06C98E8A172F24F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2477814B49D5D999E7EB058C57B0D5A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_52AE4A5045987AAB7C54C9A7806CD9A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_376C5E474E053C7A837DE781AF136F87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_BD11C52640C7F25E8CB94C932914BB9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_3AFEE7EC471667CAA0E65C9E7A7EE6D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F13BD9A947E91F687458A8ABA9BAFF3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_EC95A5844D669DB87529079EA6FC6E01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_0F534A184E8D9D8F0A1E1BAB164F11D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9F74FE8A47350A7D3F5623921093DF60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_1CBCAB874C880DB2AFA95088D191F889();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_132040C74FCFD105CC9D5A83BD65F76F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_357D58B44E36460305944492121A4129();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_78E2EA9349BC85FDEAA5518EF405698F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_AAAAE79944B6406A217E1191977E00A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_4B1FB5DE409FB0CF8667879520B6F4ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_E3561F3B4AC98181AED3929B7A164002();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_6D076105434C3FCD78241EB8B687B2EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_178859F4400EFDA8291993888EA36736();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9466C4BD4FE2C41EBF9ABC85D2A622C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F7D46AB84FA462FB6143FEAA83D7DAB0();
	void AnimNotify_SwingSound();
	void AnimNotify_ItemUseEnd();
	void AnimNotify_ItemUseStart();
	void AnimNotify_FootstepR();
	void AnimNotify_FootstepL();
	void AnimNotify_FootstepCrouched();
	void AnimNotify_MagOut_Pistol();
	void AnimNotify_MagOut_M4();
	void AnimNotify_MagIn_Pistol();
	void AnimNotify_MagIn_M4();
	void AnimNotify_Footstep();
	void AnimNotify_EndAnimInAction();
	void AnimNotify_StartAnimInAction();
	void AnimNotify_DisableHandIK();
	void AnimNotify_EnableHandIK();
	void AnimNotify_ThrowRelease();
	void AnimNotify_ThrowChargeEnd();
	void AnimNotify_EndMeleeCollision();
	void AnimNotify_StartMeleeCollision();
	void AnimNotify_ChamberWeaponAmmo();
	void AnimNotify_DestroyAttachment();
	void AnimNotify_RemoveAttachment();
	void AnimNotify_AttachWeaponAttachment();
	void AnimNotify_SpawnWeaponAttachment();
	void AnimNotify_SpawnHoldable();
	void SGK_UpdateAnimationState(TEnumAsByte<E_AnimationState> AnimationState);
	void BlueprintInitializeAnimation();
	void SGK_EndChamberMontage();
	void SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void CheckTurnInPlace();
	void ResetCurveInPlace();
	void ResetFirstCurve();
	void TurnInPlaceAnimPlaying();
	void ExecuteUbergraph_BP_ThirdPerson_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
