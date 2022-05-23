// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ThirdPerson_Anim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBP_ThirdPerson_Anim_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimGraph"));

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


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.SelectAnims
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_HoldableAnims> AllAnims                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           AnimsFound                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_HoldableAnims        Anims                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ThirdPerson_Anim_C::SelectAnims(TArray<struct FS_HoldableAnims>* AllAnims, bool* AnimsFound, struct FS_HoldableAnims* Anims)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.SelectAnims"));

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


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.TurnInPlaceMontage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Right                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ThirdPerson_Anim_C::TurnInPlaceMontage(bool Right, class UAnimMontage** Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.TurnInPlaceMontage"));

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


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.CalculateAimOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::CalculateAimOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.CalculateAimOffset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.UpdateAOWeights
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::UpdateAOWeights()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.UpdateAOWeights"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_EEAB781341E266BAF43B1895FCDB05A0
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_EEAB781341E266BAF43B1895FCDB05A0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_EEAB781341E266BAF43B1895FCDB05A0"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2F9D70344354FD076E887DB02A618139
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2F9D70344354FD076E887DB02A618139()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2F9D70344354FD076E887DB02A618139"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_D91CC3BA4325B70779753D9538068129
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_D91CC3BA4325B70779753D9538068129()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_D91CC3BA4325B70779753D9538068129"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_B802DFE04A5BE458F35ECFBD67F634EE
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_B802DFE04A5BE458F35ECFBD67F634EE()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_B802DFE04A5BE458F35ECFBD67F634EE"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_001423B24F49959D06C98E8A172F24F3
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_001423B24F49959D06C98E8A172F24F3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_001423B24F49959D06C98E8A172F24F3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2477814B49D5D999E7EB058C57B0D5A5
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2477814B49D5D999E7EB058C57B0D5A5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2477814B49D5D999E7EB058C57B0D5A5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_52AE4A5045987AAB7C54C9A7806CD9A1
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_52AE4A5045987AAB7C54C9A7806CD9A1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_52AE4A5045987AAB7C54C9A7806CD9A1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_376C5E474E053C7A837DE781AF136F87
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_376C5E474E053C7A837DE781AF136F87()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_376C5E474E053C7A837DE781AF136F87"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_BD11C52640C7F25E8CB94C932914BB9A
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_BD11C52640C7F25E8CB94C932914BB9A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_BD11C52640C7F25E8CB94C932914BB9A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_3AFEE7EC471667CAA0E65C9E7A7EE6D6
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_3AFEE7EC471667CAA0E65C9E7A7EE6D6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_3AFEE7EC471667CAA0E65C9E7A7EE6D6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F13BD9A947E91F687458A8ABA9BAFF3F
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F13BD9A947E91F687458A8ABA9BAFF3F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F13BD9A947E91F687458A8ABA9BAFF3F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_EC95A5844D669DB87529079EA6FC6E01
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_EC95A5844D669DB87529079EA6FC6E01()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_EC95A5844D669DB87529079EA6FC6E01"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_0F534A184E8D9D8F0A1E1BAB164F11D1
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_0F534A184E8D9D8F0A1E1BAB164F11D1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_0F534A184E8D9D8F0A1E1BAB164F11D1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9F74FE8A47350A7D3F5623921093DF60
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9F74FE8A47350A7D3F5623921093DF60()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9F74FE8A47350A7D3F5623921093DF60"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_1CBCAB874C880DB2AFA95088D191F889
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_1CBCAB874C880DB2AFA95088D191F889()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_1CBCAB874C880DB2AFA95088D191F889"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_132040C74FCFD105CC9D5A83BD65F76F
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_132040C74FCFD105CC9D5A83BD65F76F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_132040C74FCFD105CC9D5A83BD65F76F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_357D58B44E36460305944492121A4129
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_357D58B44E36460305944492121A4129()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_357D58B44E36460305944492121A4129"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_78E2EA9349BC85FDEAA5518EF405698F
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_78E2EA9349BC85FDEAA5518EF405698F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_78E2EA9349BC85FDEAA5518EF405698F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_AAAAE79944B6406A217E1191977E00A8
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_AAAAE79944B6406A217E1191977E00A8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_AAAAE79944B6406A217E1191977E00A8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_4B1FB5DE409FB0CF8667879520B6F4ED
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_4B1FB5DE409FB0CF8667879520B6F4ED()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_4B1FB5DE409FB0CF8667879520B6F4ED"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_E3561F3B4AC98181AED3929B7A164002
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_E3561F3B4AC98181AED3929B7A164002()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_E3561F3B4AC98181AED3929B7A164002"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_6D076105434C3FCD78241EB8B687B2EC
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_6D076105434C3FCD78241EB8B687B2EC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_6D076105434C3FCD78241EB8B687B2EC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_178859F4400EFDA8291993888EA36736
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_178859F4400EFDA8291993888EA36736()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_178859F4400EFDA8291993888EA36736"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9466C4BD4FE2C41EBF9ABC85D2A622C4
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9466C4BD4FE2C41EBF9ABC85D2A622C4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9466C4BD4FE2C41EBF9ABC85D2A622C4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F7D46AB84FA462FB6143FEAA83D7DAB0
// (FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F7D46AB84FA462FB6143FEAA83D7DAB0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F7D46AB84FA462FB6143FEAA83D7DAB0"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_SwingSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_SwingSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_SwingSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ItemUseEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_ItemUseEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ItemUseEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ItemUseStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_ItemUseStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ItemUseStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_FootstepR
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_FootstepR()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_FootstepR"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_FootstepL
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_FootstepL()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_FootstepL"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_FootstepCrouched
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_FootstepCrouched()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_FootstepCrouched"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_MagOut_Pistol
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_MagOut_Pistol()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_MagOut_Pistol"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_MagOut_M4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_MagOut_M4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_MagOut_M4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_MagIn_Pistol
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_MagIn_Pistol()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_MagIn_Pistol"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_MagIn_M4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_MagIn_M4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_MagIn_M4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_Footstep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_Footstep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_Footstep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_EndAnimInAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_EndAnimInAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_EndAnimInAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_StartAnimInAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_StartAnimInAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_StartAnimInAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_DisableHandIK
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_DisableHandIK()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_DisableHandIK"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_EnableHandIK
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_EnableHandIK()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_EnableHandIK"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ThrowRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_ThrowRelease()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ThrowRelease"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ThrowChargeEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_ThrowChargeEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ThrowChargeEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_EndMeleeCollision
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_EndMeleeCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_EndMeleeCollision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_StartMeleeCollision
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_StartMeleeCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_StartMeleeCollision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ChamberWeaponAmmo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_ChamberWeaponAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_ChamberWeaponAmmo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_DestroyAttachment
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_DestroyAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_DestroyAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_RemoveAttachment
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_RemoveAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_RemoveAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_AttachWeaponAttachment
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_AttachWeaponAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_AttachWeaponAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_SpawnWeaponAttachment
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_SpawnWeaponAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_SpawnWeaponAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_SpawnHoldable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::AnimNotify_SpawnHoldable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.AnimNotify_SpawnHoldable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.SGK UpdateAnimationState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AnimationState>  AnimationState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ThirdPerson_Anim_C::SGK_UpdateAnimationState(TEnumAsByte<E_AnimationState> AnimationState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.SGK UpdateAnimationState"));

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


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.SGK EndChamberMontage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::SGK_EndChamberMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.SGK EndChamberMontage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.SGK UpdateHoldableAnimations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterHoldable_C*    Holdable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ThirdPerson_Anim_C::SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.SGK UpdateHoldableAnimations"));

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


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ThirdPerson_Anim_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.BlueprintUpdateAnimation"));

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


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.CheckTurnInPlace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::CheckTurnInPlace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.CheckTurnInPlace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.ResetCurveInPlace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::ResetCurveInPlace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.ResetCurveInPlace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.ResetFirstCurve
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::ResetFirstCurve()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.ResetFirstCurve"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.TurnInPlaceAnimPlaying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ThirdPerson_Anim_C::TurnInPlaceAnimPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.TurnInPlaceAnimPlaying"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.ExecuteUbergraph_BP_ThirdPerson_Anim
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ThirdPerson_Anim_C::ExecuteUbergraph_BP_ThirdPerson_Anim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C.ExecuteUbergraph_BP_ThirdPerson_Anim"));

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
