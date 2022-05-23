#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ExampleCharacter_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C
// 0x0CB4 (0x0F74 - 0x02C0)
class UExampleCharacter_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x03C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x03E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x04B0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x04D8(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x05C0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x0660(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x0748(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x0778(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0818(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0898(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x0918(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0948(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x09C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0A68(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0AE8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0B18(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0B98(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x0BC8(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0CB0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x0D50(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0E38(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0E68(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0F18(0x0048)
	class ABP_ExampleCharacter_C*                      Example_Character;                                        // 0x0F60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Speed;                                                    // 0x0F68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Direction;                                                // 0x0F6C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Enable_Jump;                                              // 0x0F70(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Crouching;                                                // 0x0F71(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Falling;                                               // 0x0F72(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Aimed;                                                    // 0x0F73(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_B1A9C04345196FC7641F8A88F5EBECF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_FFFCF0144598EDEE64EE439BD7BDAFDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ExampleCharacter_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
