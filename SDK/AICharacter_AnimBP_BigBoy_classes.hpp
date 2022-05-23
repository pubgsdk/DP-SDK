#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICharacter_AnimBP_BigBoy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C
// 0x3B78 (0x3E38 - 0x02C0)
class UAICharacter_AnimBP_BigBoy_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x03C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x03E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x0410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x0438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x0460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x04B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x04D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0500(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0528(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x0550(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29;                         // 0x05D0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x0670(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x06F0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_28;                         // 0x0770(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_27;                         // 0x0810(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x08B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x0930(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_26;                         // 0x09B0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x0A50(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x0A80(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25;                         // 0x0B00(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x0BA0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x0C20(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_24;                         // 0x0CA0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23;                         // 0x0D40(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x0DE0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x0E60(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_22;                         // 0x0EE0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x0F80(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_10;                        // 0x0FB0(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_21;                         // 0x1098(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                         // 0x1138(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20;                         // 0x1220(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                         // 0x12C0(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19;                         // 0x13A8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                         // 0x1448(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                         // 0x1530(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_18;                         // 0x1618(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x16B8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17;                         // 0x16E8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x1788(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x1808(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x1888(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16;                         // 0x1908(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15;                         // 0x19A8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x1A48(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x1AC8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14;                         // 0x1B48(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x1BE8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x1C18(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13;                         // 0x1C98(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x1D38(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x1DB8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                         // 0x1E38(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                         // 0x1ED8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1F78(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1FF8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                         // 0x2078(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x2118(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x2148(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x21E8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x2268(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x22E8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x2368(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x2408(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x24A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x2528(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x25A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x2648(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x2678(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x2760(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x2800(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x28E8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x2988(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x2A70(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x2B10(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x2BF8(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x2CE0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x2D80(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x2DB0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                     // 0x2E60(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x2EA8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x2EF0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x3048(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x3070(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x3130(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x3288(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x33E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x3408(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x3430(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x3458(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x3480(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x34C8(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x3588(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x36E0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x3728(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x37E8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x3940(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x3968(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x3990(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x39B8(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x3B48(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x3BE8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x3C10(0x0048)
	float                                              Speed;                                                    // 0x3C58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Direction;                                                // 0x3C5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Is_Crouching;                                             // 0x3C60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Falling;                                               // 0x3C61(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x3C62(0x0006) MISSED OFFSET
	class ABP_MasterAICharacter_C*                     AI_Character;                                             // 0x3C68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                      AI_Component;                                             // 0x3C70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AIBehaviour>                         _1_Behaviour;                                             // 0x3C78(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Combat_Stance;                                            // 0x3C79(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Holdable;                                                 // 0x3C7A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Anims_1;                                                  // 0x3C7B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_MovementSpeed>                       Current_Behaviour;                                        // 0x3C7C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x3C7D(0x0003) MISSED OFFSET
	struct FS_AIAnims                                  Smart_AI_Anims_1;                                         // 0x3C80(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FS_AIAnims                                  Smart_AI_Anims_2;                                         // 0x3CD0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AIBehaviour>                         _2_Behaviour;                                             // 0x3D20(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x3D21(0x0007) MISSED OFFSET
	class ABP_AIMasterHoldable_C*                      Holdable_Actor;                                           // 0x3D28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_AIAnims                                  Holdable_Anims_2;                                         // 0x3D30(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FS_AIAnims                                  Holdable_Anims_1;                                         // 0x3D80(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               Moving;                                                   // 0x3DD0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Jump_Land_End;                                            // 0x3DD1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Jump_Start_End;                                           // 0x3DD2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Use_Aim_Offset;                                           // 0x3DD3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              Aim_Yaw;                                                  // 0x3DD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_AIAnims                                  Combat_Stance_Anims;                                      // 0x3DD8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               Allow_Combat_Stance;                                      // 0x3E28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x3E29(0x0007) MISSED OFFSET
	class UAimOffsetBlendSpace1D*                      Aim_Offset;                                               // 0x3E30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C"));
		return ptr;
	}


	void AI_Is_Dead_(bool* Dead);
	void AI_Can_Interact_(bool* Can_Interact);
	void Actor_Attack_Target(class AActor** Attack_Target);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Return_Combat_Stance_Anims(bool* Use_Combat_Stance, struct FS_AIAnims* AI_Animation);
	void Return_Behaviour_Anims(const struct FS_AllAIAnims& All_Anims, TEnumAsByte<E_AIBehaviour> Behaviour, struct FS_AIAnims* Anims);
	void Return_Current_Behaviour(TEnumAsByte<E_AIBehaviour>* New_Behaviour);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_F98DC74B4F88444243330CBE3CB8E5F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_7DF1EB0D433B5D7DB712FA94173BDC1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_0575CE1F4C3337DD4398C6AFCB3DC4A4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_IdleStart();
	void AnimNotify_JogStart();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_6ED703AE407C0A4337D82E9DD2F8AE41();
	void AnimNotify_ActiveMeleeDetect();
	void AnimNotify_DeactiveMeleeDetect();
	void BlueprintInitializeAnimation();
	void AnimNotify_Equip();
	void AnimNotify_Unequip();
	void AnimNotify_Block_Attack();
	void AnimNotify_Unblock_Attack();
	void AnimNotify_AI_Reload();
	void Reinitialize_Animation();
	void AnimNotify_Begin_Jump_End();
	void AnimNotify_Jump_End();
	void AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour);
	void AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker);
	void AI_Camera_Activate(bool Activate);
	void AI_End_Alert();
	void AI_Alert(class AActor* Alert_Actor);
	void Turret_End_Reload();
	void Turret_Start_Reload();
	void Turret_Idle_Stop();
	void Turret_Idle_Start();
	void Turret_Destroyed_Effect();
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Actor_Aim_Focus(class AActor* Instigator);
	void AI_Dead();
	void AnimNotify_FootstepZ();
	void AnimNotify_ZombieAttack();
	void AnimNotify_ZombieIdle();
	void ExecuteUbergraph_AICharacter_AnimBP_BigBoy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
