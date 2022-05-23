// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICharacter_AnimBP_BigBoy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Is Dead?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAICharacter_AnimBP_BigBoy_C::AI_Is_Dead_(bool* Dead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Is Dead?"));

	struct
	{
		bool                           Dead;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Dead != nullptr)
		*Dead = params.Dead;
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Can Interact?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Can_Interact                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAICharacter_AnimBP_BigBoy_C::AI_Can_Interact_(bool* Can_Interact)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Can Interact?"));

	struct
	{
		bool                           Can_Interact;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Can_Interact != nullptr)
		*Can_Interact = params.Can_Interact;
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Actor Attack Target
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attack_Target                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Actor Attack Target"));

	struct
	{
		class AActor*                  Attack_Target;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Attack_Target != nullptr)
		*Attack_Target = params.Attack_Target;
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UAICharacter_AnimBP_BigBoy_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimGraph"));

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


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Return Combat Stance Anims
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Use_Combat_Stance              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_AIAnims              AI_Animation                   (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::Return_Combat_Stance_Anims(bool* Use_Combat_Stance, struct FS_AIAnims* AI_Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Return Combat Stance Anims"));

	struct
	{
		bool                           Use_Combat_Stance;
		struct FS_AIAnims              AI_Animation;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Use_Combat_Stance != nullptr)
		*Use_Combat_Stance = params.Use_Combat_Stance;
	if (AI_Animation != nullptr)
		*AI_Animation = params.AI_Animation;
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Return Behaviour Anims
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_AllAIAnims           All_Anims                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_AIAnims              Anims                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::Return_Behaviour_Anims(const struct FS_AllAIAnims& All_Anims, TEnumAsByte<E_AIBehaviour> Behaviour, struct FS_AIAnims* Anims)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Return Behaviour Anims"));

	struct
	{
		struct FS_AllAIAnims           All_Anims;
		TEnumAsByte<E_AIBehaviour>     Behaviour;
		struct FS_AIAnims              Anims;
	} params = {};

	params.All_Anims = All_Anims;
	params.Behaviour = Behaviour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Anims != nullptr)
		*Anims = params.Anims;
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Return Current Behaviour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     New_Behaviour                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::Return_Current_Behaviour(TEnumAsByte<E_AIBehaviour>* New_Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Return Current Behaviour"));

	struct
	{
		TEnumAsByte<E_AIBehaviour>     New_Behaviour;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (New_Behaviour != nullptr)
		*New_Behaviour = params.New_Behaviour;
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_F98DC74B4F88444243330CBE3CB8E5F7
// (FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_F98DC74B4F88444243330CBE3CB8E5F7()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_F98DC74B4F88444243330CBE3CB8E5F7"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_7DF1EB0D433B5D7DB712FA94173BDC1D
// (FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_7DF1EB0D433B5D7DB712FA94173BDC1D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_7DF1EB0D433B5D7DB712FA94173BDC1D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_0575CE1F4C3337DD4398C6AFCB3DC4A4
// (FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_0575CE1F4C3337DD4398C6AFCB3DC4A4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_0575CE1F4C3337DD4398C6AFCB3DC4A4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.BlueprintUpdateAnimation"));

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


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_IdleStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_IdleStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_IdleStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_JogStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_JogStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_JogStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_6ED703AE407C0A4337D82E9DD2F8AE41
// (FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_6ED703AE407C0A4337D82E9DD2F8AE41()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_BigBoy_AnimGraphNode_TransitionResult_6ED703AE407C0A4337D82E9DD2F8AE41"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_ActiveMeleeDetect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_ActiveMeleeDetect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_ActiveMeleeDetect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_DeactiveMeleeDetect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_DeactiveMeleeDetect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_DeactiveMeleeDetect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Equip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_Equip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Equip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Unequip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_Unequip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Unequip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Block Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_Block_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Block Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Unblock Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_Unblock_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Unblock Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_AI Reload
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_AI_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_AI Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Reinitialize Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::Reinitialize_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Reinitialize Animation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Begin Jump End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_Begin_Jump_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Begin Jump End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Jump End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_Jump_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_Jump End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Animation Switch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Animation Switch"));

	struct
	{
		TEnumAsByte<E_AIBehaviour>     Behaviour;
	} params = {};

	params.Behaviour = Behaviour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Block
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BlockType>       Block_Type                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Block_Attacker                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Block"));

	struct
	{
		TEnumAsByte<E_BlockType>       Block_Type;
		class AActor*                  Block_Attacker;
	} params = {};

	params.Block_Type = Block_Type;
	params.Block_Attacker = Block_Attacker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Camera Activate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activate                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAICharacter_AnimBP_BigBoy_C::AI_Camera_Activate(bool Activate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Camera Activate"));

	struct
	{
		bool                           Activate;
	} params = {};

	params.Activate = Activate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI End Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AI_End_Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI End Alert"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Alert_Actor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::AI_Alert(class AActor* Alert_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Alert"));

	struct
	{
		class AActor*                  Alert_Actor;
	} params = {};

	params.Alert_Actor = Alert_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret End Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::Turret_End_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret End Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret Start Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::Turret_Start_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret Start Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret Idle Stop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::Turret_Idle_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret Idle Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret Idle Start
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::Turret_Idle_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret Idle Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret Destroyed Effect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::Turret_Destroyed_Effect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Turret Destroyed Effect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Alert Actor Defenders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Alert Actor Defenders"));

	struct
	{
		class AActor*                  Attacked;
		class AActor*                  Attacker;
	} params = {};

	params.Attacked = Attacked;
	params.Attacker = Attacker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Actor Aim Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.Actor Aim Focus"));

	struct
	{
		class AActor*                  Instigator;
	} params = {};

	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Dead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AI_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AI Dead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_FootstepZ
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_FootstepZ()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_FootstepZ"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_ZombieAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_ZombieAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_ZombieAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_ZombieIdle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacter_AnimBP_BigBoy_C::AnimNotify_ZombieIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.AnimNotify_ZombieIdle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.ExecuteUbergraph_AICharacter_AnimBP_BigBoy
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacter_AnimBP_BigBoy_C::ExecuteUbergraph_AICharacter_AnimBP_BigBoy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_AnimBP_BigBoy.AICharacter_AnimBP_BigBoy_C.ExecuteUbergraph_AICharacter_AnimBP_BigBoy"));

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
