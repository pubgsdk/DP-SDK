// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FirstPersonBody_Anim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBP_FirstPersonBody_Anim_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.AnimGraph"));

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


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.TurnInPlaceMontage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Right                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonBody_Anim_C::TurnInPlaceMontage(bool Right, class UAnimMontage** Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.TurnInPlaceMontage"));

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


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.SelectAnims
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_HoldableAnims> AllAnims                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           AnimsFound                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_HoldableAnims        Anims                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonBody_Anim_C::SelectAnims(TArray<struct FS_HoldableAnims>* AllAnims, bool* AnimsFound, struct FS_HoldableAnims* Anims)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.SelectAnims"));

	struct
	{
		TArray<struct FS_HoldableAnims> AllAnims;
		bool                           AnimsFound;
		struct FS_HoldableAnims        Anims;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllAnims != nullptr)
		*AllAnims = params.AllAnims;
	if (AnimsFound != nullptr)
		*AnimsFound = params.AnimsFound;
	if (Anims != nullptr)
		*Anims = params.Anims;
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.CalculateAimOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::CalculateAimOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.CalculateAimOffset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.UpdateAOWeights
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::UpdateAOWeights()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.UpdateAOWeights"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_ModifyBone_B5CFCD0D4255D9486D64C39D4F255C67
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_ModifyBone_B5CFCD0D4255D9486D64C39D4F255C67()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_ModifyBone_B5CFCD0D4255D9486D64C39D4F255C67"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_ModifyBone_972AF9574F9CCAF588990BB52EAA955B
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_ModifyBone_972AF9574F9CCAF588990BB52EAA955B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_ModifyBone_972AF9574F9CCAF588990BB52EAA955B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_203D8CA54EEF5F6BDD3BBA8789E4C994
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_203D8CA54EEF5F6BDD3BBA8789E4C994()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_203D8CA54EEF5F6BDD3BBA8789E4C994"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3B0DD019446B0C4ADAF69C8E91C4DDC7
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3B0DD019446B0C4ADAF69C8E91C4DDC7()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3B0DD019446B0C4ADAF69C8E91C4DDC7"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_940260584FC7E6A7BE789AA3E517D0FD
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_940260584FC7E6A7BE789AA3E517D0FD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_940260584FC7E6A7BE789AA3E517D0FD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_AA9487BD4F62456E8271D2A9BDFEE9AF
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_AA9487BD4F62456E8271D2A9BDFEE9AF()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_AA9487BD4F62456E8271D2A9BDFEE9AF"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_DBFC19684962B18D8B8DDCB7BA19DE7C
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_DBFC19684962B18D8B8DDCB7BA19DE7C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_DBFC19684962B18D8B8DDCB7BA19DE7C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_12C40FE74634FE40067EA6AE5B915961
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_12C40FE74634FE40067EA6AE5B915961()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_12C40FE74634FE40067EA6AE5B915961"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_12D8FB2D4A8F663FB65B44B3A97DE03D
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_12D8FB2D4A8F663FB65B44B3A97DE03D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_12D8FB2D4A8F663FB65B44B3A97DE03D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3C9FABE7419EFE221B27B6A788D571C4
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3C9FABE7419EFE221B27B6A788D571C4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3C9FABE7419EFE221B27B6A788D571C4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_FFA2017A41078752C7D27995FC2CF195
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_FFA2017A41078752C7D27995FC2CF195()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_FFA2017A41078752C7D27995FC2CF195"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_DFB777CE41E6BB07BA6F79B647059485
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_DFB777CE41E6BB07BA6F79B647059485()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_DFB777CE41E6BB07BA6F79B647059485"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3512BE1E499CFE4C1CEE77A4E88751F9
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3512BE1E499CFE4C1CEE77A4E88751F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_3512BE1E499CFE4C1CEE77A4E88751F9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_4E7A229C4F3A202FD83E92A6E518BC52
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_4E7A229C4F3A202FD83E92A6E518BC52()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_4E7A229C4F3A202FD83E92A6E518BC52"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_6A0BA93D45E4B9187616F69FBB3E3596
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_6A0BA93D45E4B9187616F69FBB3E3596()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_6A0BA93D45E4B9187616F69FBB3E3596"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_432762C945B332D720DB74B4F22C3112
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_432762C945B332D720DB74B4F22C3112()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_432762C945B332D720DB74B4F22C3112"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_B3B555044637E4A65C491E8E3B4C0CBD
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_B3B555044637E4A65C491E8E3B4C0CBD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_B3B555044637E4A65C491E8E3B4C0CBD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_B051582E4EFDCA59F4CFA79C4B149A08
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_B051582E4EFDCA59F4CFA79C4B149A08()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_B051582E4EFDCA59F4CFA79C4B149A08"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_94424F14484F79A315A0598D3A40B058
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_94424F14484F79A315A0598D3A40B058()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_94424F14484F79A315A0598D3A40B058"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_AA94C15B4806F324A8538180076D2CCC
// (FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_AA94C15B4806F324A8538180076D2CCC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonBody_Anim_AnimGraphNode_TransitionResult_AA94C15B4806F324A8538180076D2CCC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.AnimNotify_EndAnimInAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::AnimNotify_EndAnimInAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.AnimNotify_EndAnimInAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.AnimNotify_StartAnimInAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::AnimNotify_StartAnimInAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.AnimNotify_StartAnimInAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.SGK EndChamberMontage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::SGK_EndChamberMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.SGK EndChamberMontage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.SGK UpdateAnimationState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AnimationState>  AnimationState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonBody_Anim_C::SGK_UpdateAnimationState(TEnumAsByte<E_AnimationState> AnimationState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.SGK UpdateAnimationState"));

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


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.SGK UpdateHoldableAnimations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterHoldable_C*    Holdable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonBody_Anim_C::SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.SGK UpdateHoldableAnimations"));

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


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonBody_Anim_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.BlueprintUpdateAnimation"));

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


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.CheckTurnInPlace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::CheckTurnInPlace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.CheckTurnInPlace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.ResetCurveInPlace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::ResetCurveInPlace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.ResetCurveInPlace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.ResetFirstCurve
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::ResetFirstCurve()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.ResetFirstCurve"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.TurnInPlaceAnimPlaying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FirstPersonBody_Anim_C::TurnInPlaceAnimPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.TurnInPlaceAnimPlaying"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.ExecuteUbergraph_BP_FirstPersonBody_Anim
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FirstPersonBody_Anim_C::ExecuteUbergraph_BP_FirstPersonBody_Anim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FirstPersonBody_Anim.BP_FirstPersonBody_Anim_C.ExecuteUbergraph_BP_FirstPersonBody_Anim"));

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
