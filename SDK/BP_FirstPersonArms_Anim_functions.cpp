// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FirstPersonArms_Anim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBP_FirstPersonArms_Anim_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.TurnInPlaceMontage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Right                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonArms_Anim_C::TurnInPlaceMontage(bool Right, class UAnimMontage** Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.TurnInPlaceMontage"));

	struct
	{
		bool                           Right;
		class UAnimMontage*            Montage;
	} params = {};

	params.Right = Right;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.SelectAnims
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_FirstPersonArmsAnims> FirstPersonAnims               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           AnimsFound                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_FirstPersonArmsAnims Anims                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonArms_Anim_C::SelectAnims(TArray<struct FS_FirstPersonArmsAnims>* FirstPersonAnims, bool* AnimsFound, struct FS_FirstPersonArmsAnims* Anims)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.SelectAnims"));

	struct
	{
		TArray<struct FS_FirstPersonArmsAnims> FirstPersonAnims;
		bool                           AnimsFound;
		struct FS_FirstPersonArmsAnims Anims;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FirstPersonAnims != nullptr)
		*FirstPersonAnims = params.FirstPersonAnims;
	if (AnimsFound != nullptr)
		*AnimsFound = params.AnimsFound;
	if (Anims != nullptr)
		*Anims = params.Anims;
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.CalculateAimOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::CalculateAimOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.CalculateAimOffset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.UpdateAOWeights
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::UpdateAOWeights()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.UpdateAOWeights"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_5EF7B0E5483436531C611683A4701054
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_5EF7B0E5483436531C611683A4701054()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_5EF7B0E5483436531C611683A4701054"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_6B85F4B6426A1A9C67CAEBAB7B8AB2AA
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_6B85F4B6426A1A9C67CAEBAB7B8AB2AA()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_6B85F4B6426A1A9C67CAEBAB7B8AB2AA"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_F707D91F45BFA11C639004BB3126C472
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_F707D91F45BFA11C639004BB3126C472()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_F707D91F45BFA11C639004BB3126C472"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_66D2D2154FF69728F639AD9D22A64A5F
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_66D2D2154FF69728F639AD9D22A64A5F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_66D2D2154FF69728F639AD9D22A64A5F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_144E7E53475E6D5845CBAC9FD5C45CA9
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_144E7E53475E6D5845CBAC9FD5C45CA9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_144E7E53475E6D5845CBAC9FD5C45CA9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_E15168274668F42198870884F5B3E234
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_E15168274668F42198870884F5B3E234()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_E15168274668F42198870884F5B3E234"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_98D9E062462F951C1FD6CC80A65D1F4C
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_98D9E062462F951C1FD6CC80A65D1F4C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_98D9E062462F951C1FD6CC80A65D1F4C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_0DB43E6A4E078AD0877E6A9DFAF1988C
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_0DB43E6A4E078AD0877E6A9DFAF1988C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_0DB43E6A4E078AD0877E6A9DFAF1988C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_1CABD84E4D040B72FEA1A68BBB2E1C4C
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_1CABD84E4D040B72FEA1A68BBB2E1C4C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_1CABD84E4D040B72FEA1A68BBB2E1C4C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_8F4F39FA4DA81E6C2CC11F8866BC8E76
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_8F4F39FA4DA81E6C2CC11F8866BC8E76()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_8F4F39FA4DA81E6C2CC11F8866BC8E76"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_F0B996DE47010D050D66A18EB819CBE8
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_F0B996DE47010D050D66A18EB819CBE8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_F0B996DE47010D050D66A18EB819CBE8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_9FB07C9B406444B13C04D7B27A979A31
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_9FB07C9B406444B13C04D7B27A979A31()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_9FB07C9B406444B13C04D7B27A979A31"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A3AF4BC042EFBF256B80CF96C3556DCB
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A3AF4BC042EFBF256B80CF96C3556DCB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A3AF4BC042EFBF256B80CF96C3556DCB"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A73A8A7A40869C88F24B12951C038882
// (FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A73A8A7A40869C88F24B12951C038882()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A73A8A7A40869C88F24B12951C038882"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimNotify_DisableHandIK
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::AnimNotify_DisableHandIK()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimNotify_DisableHandIK"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimNotify_EnableHandIK
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::AnimNotify_EnableHandIK()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimNotify_EnableHandIK"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimNotify_EndAnimInAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::AnimNotify_EndAnimInAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimNotify_EndAnimInAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimNotify_StartAnimInAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::AnimNotify_StartAnimInAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.AnimNotify_StartAnimInAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.SGK EndChamberMontage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::SGK_EndChamberMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.SGK EndChamberMontage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.SGK UpdateAnimationState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AnimationState>  AnimationState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonArms_Anim_C::SGK_UpdateAnimationState(TEnumAsByte<E_AnimationState> AnimationState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.SGK UpdateAnimationState"));

	struct
	{
		TEnumAsByte<E_AnimationState>  AnimationState;
	} params = {};

	params.AnimationState = AnimationState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.SGK UpdateHoldableAnimations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterHoldable_C*    Holdable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonArms_Anim_C::SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.SGK UpdateHoldableAnimations"));

	struct
	{
		class ABP_MasterHoldable_C*    Holdable;
	} params = {};

	params.Holdable = Holdable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonArms_Anim_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.CheckTurnInPlace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::CheckTurnInPlace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.CheckTurnInPlace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.ResetCurveInPlace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::ResetCurveInPlace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.ResetCurveInPlace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.ResetFirstCurve
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::ResetFirstCurve()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.ResetFirstCurve"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.TurnInPlaceAnimPlaying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonArms_Anim_C::TurnInPlaceAnimPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.TurnInPlaceAnimPlaying"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.ExecuteUbergraph_BP_FirstPersonArms_Anim
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonArms_Anim_C::ExecuteUbergraph_BP_FirstPersonArms_Anim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C.ExecuteUbergraph_BP_FirstPersonArms_Anim"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
