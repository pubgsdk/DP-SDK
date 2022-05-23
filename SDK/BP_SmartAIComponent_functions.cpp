// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SmartAIComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Actor Attack Target
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attack_Target                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Actor Attack Target"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Can Interact?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Can_Interact                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::AI_Can_Interact_(bool* Can_Interact)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Can Interact?"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Is Dead?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::AI_Is_Dead_(bool* Dead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Is Dead?"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.DespawnCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::DespawnCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.DespawnCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.StopCurrentAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::StopCurrentAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.StopCurrentAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.UpdateCapsuleCollision
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::UpdateCapsuleCollision(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.UpdateCapsuleCollision"));

	struct
	{
		struct FName                   Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.ChangeDamageMulti
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ChangeAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::ChangeDamageMulti(float ChangeAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.ChangeDamageMulti"));

	struct
	{
		float                          ChangeAmount;
	} params = {};

	params.ChangeAmount = ChangeAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB AllowRotate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowRotate                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Set_BB_AllowRotate(bool AllowRotate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB AllowRotate"));

	struct
	{
		bool                           AllowRotate;
	} params = {};

	params.AllowRotate = AllowRotate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB BlockMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StopNode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Set_BB_BlockMove(bool StopNode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB BlockMove"));

	struct
	{
		bool                           StopNode;
	} params = {};

	params.StopNode = StopNode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Flee Alert
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Check_Flee_Alert(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Flee Alert"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Block
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BlockType>       Block_Type                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Block_Attacker                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Check_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Block"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Attack Targets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Target_Found                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Check_Attack_Targets(bool* Target_Found, class AActor** Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Attack Targets"));

	struct
	{
		bool                           Target_Found;
		class AActor*                  Actor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Target_Found != nullptr)
		*Target_Found = params.Target_Found;
	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Start Deactivated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Check_Start_Deactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Start Deactivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Proximity Updates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Proximity_Updates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Proximity Updates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Update Aim Offset Yaw
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Look_At_Actor                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Update_Aim_Offset_Yaw(class AActor* Look_At_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Update Aim Offset Yaw"));

	struct
	{
		class AActor*                  Look_At_Actor;
	} params = {};

	params.Look_At_Actor = Look_At_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Tag Check
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Tags_1                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FName>           Tags_2                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   Found_Tag                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Tag_Check(TArray<struct FName>* Tags_1, TArray<struct FName>* Tags_2, bool* Return_Value, struct FName* Found_Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Tag Check"));

	struct
	{
		TArray<struct FName>           Tags_1;
		TArray<struct FName>           Tags_2;
		bool                           Return_Value;
		struct FName                   Found_Tag;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Tags_1 != nullptr)
		*Tags_1 = params.Tags_1;
	if (Tags_2 != nullptr)
		*Tags_2 = params.Tags_2;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Found_Tag != nullptr)
		*Found_Tag = params.Found_Tag;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Dead Body Reaction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Reaction_Actor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Dead_Body_Reaction(class AActor* Reaction_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Dead Body Reaction"));

	struct
	{
		class AActor*                  Reaction_Actor;
	} params = {};

	params.Reaction_Actor = Reaction_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Return Hit Reaction Anims
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UAnimMontage*>    Hit_Reactions                  (CPF_Parm, CPF_OutParm)

void UBP_SmartAIComponent_C::Return_Hit_Reaction_Anims(TArray<class UAnimMontage*>* Hit_Reactions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Return Hit Reaction Anims"));

	struct
	{
		TArray<class UAnimMontage*>    Hit_Reactions;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Hit_Reactions != nullptr)
		*Hit_Reactions = params.Hit_Reactions;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Spawn Hit Effects
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UBP_SmartAIComponent_C::Spawn_Hit_Effects(const struct FHitResult& Hit_Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Spawn Hit Effects"));

	struct
	{
		struct FHitResult              Hit_Result;
	} params = {};

	params.Hit_Result = Hit_Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Update Routine
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Hour                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Update_Routine(int Hour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Update Routine"));

	struct
	{
		int                            Hour;
	} params = {};

	params.Hour = Hour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Attack Distance Check
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Attack_Distance_Check()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Attack Distance Check"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Up Climb Check
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Up_Climb_Check()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Up Climb Check"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Climbing Checks
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Climbing_Checks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Climbing Checks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Forward Check
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Forward_Distance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Down_Distance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Trace_Towards                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit_Result                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Forward_Check(float Forward_Distance, float Down_Distance, const struct FVector& Trace_Towards, struct FHitResult* Hit_Result, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Forward Check"));

	struct
	{
		float                          Forward_Distance;
		float                          Down_Distance;
		struct FVector                 Trace_Towards;
		struct FHitResult              Hit_Result;
		bool                           Return_Value;
	} params = {};

	params.Forward_Distance = Forward_Distance;
	params.Down_Distance = Down_Distance;
	params.Trace_Towards = Trace_Towards;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Hit_Result != nullptr)
		*Hit_Result = params.Hit_Result;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Drop Down Check
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Drop_Down_Check()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Drop Down Check"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Crouch Check
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Crouch_Check()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Crouch Check"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Defend Check
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Defend_Check(class AActor* Attacked, class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Defend Check"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Alert Defenders
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Alert_Defenders(class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Alert Defenders"));

	struct
	{
		class AActor*                  Attacker;
	} params = {};

	params.Attacker = Attacker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Take Damage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Causer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Take_Damage(float Damage, class AActor* Causer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Take Damage"));

	struct
	{
		float                          Damage;
		class AActor*                  Causer;
	} params = {};

	params.Damage = Damage;
	params.Causer = Causer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Damage Reaction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Damage_Reaction(float Damage, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Damage Reaction"));

	struct
	{
		float                          Damage;
		class AActor*                  Actor;
	} params = {};

	params.Damage = Damage;
	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Convert To Behaviour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_StartingAIBehaviours> Starting_Behaviour             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Convert_To_Behaviour(TEnumAsByte<E_StartingAIBehaviours> Starting_Behaviour, TEnumAsByte<E_AIBehaviour>* Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Convert To Behaviour"));

	struct
	{
		TEnumAsByte<E_StartingAIBehaviours> Starting_Behaviour;
		TEnumAsByte<E_AIBehaviour>     Behaviour;
	} params = {};

	params.Starting_Behaviour = Starting_Behaviour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Behaviour != nullptr)
		*Behaviour = params.Behaviour;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Current Reaction Settings
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_GeneralSettings      Reaction_Settings              (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Current_Reaction_Settings(struct FS_GeneralSettings* Reaction_Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Current Reaction Settings"));

	struct
	{
		struct FS_GeneralSettings      Reaction_Settings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Reaction_Settings != nullptr)
		*Reaction_Settings = params.Reaction_Settings;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Aimed Focus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Aimed_Instigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Aimed_Focus(class AActor* Aimed_Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Aimed Focus"));

	struct
	{
		class AActor*                  Aimed_Instigator;
	} params = {};

	params.Aimed_Instigator = Aimed_Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Basic Melee Attack Collision
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Basic_Melee_Attack_Collision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Basic Melee Attack Collision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Reacted Actor Check
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Actor_Found                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Reacted_Actor_Check(class AActor* Actor, bool* Actor_Found)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Reacted Actor Check"));

	struct
	{
		class AActor*                  Actor;
		bool                           Actor_Found;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actor_Found != nullptr)
		*Actor_Found = params.Actor_Found;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Follow Actor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Follow_Actor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_BB_Follow_Actor(class AActor* Follow_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Follow Actor"));

	struct
	{
		class AActor*                  Follow_Actor;
	} params = {};

	params.Follow_Actor = Follow_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Is In Combat?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_SmartAIComponent_C::Is_In_Combat_()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Is In Combat?"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transitions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_GeneralSettings      Transition_From                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_GeneralSettings      Transition_To                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Transitions(const struct FS_GeneralSettings& Transition_From, const struct FS_GeneralSettings& Transition_To)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transitions"));

	struct
	{
		struct FS_GeneralSettings      Transition_From;
		struct FS_GeneralSettings      Transition_To;
	} params = {};

	params.Transition_From = Transition_From;
	params.Transition_To = Transition_To;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transition Audio
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Start_Transition               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_GeneralSettings      AI_Settings                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Use_Transition                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class USoundCue*               Audio                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Transition_Audio(bool Start_Transition, const struct FS_GeneralSettings& AI_Settings, bool* Use_Transition, class USoundCue** Audio)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transition Audio"));

	struct
	{
		bool                           Start_Transition;
		struct FS_GeneralSettings      AI_Settings;
		bool                           Use_Transition;
		class USoundCue*               Audio;
	} params = {};

	params.Start_Transition = Start_Transition;
	params.AI_Settings = AI_Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Use_Transition != nullptr)
		*Use_Transition = params.Use_Transition;
	if (Audio != nullptr)
		*Audio = params.Audio;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transition Anim
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Start_Transition               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_GeneralSettings      AI_Settings                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Use_Transition                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            Anim                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Transition_Anim(bool Start_Transition, const struct FS_GeneralSettings& AI_Settings, bool* Use_Transition, class UAnimMontage** Anim)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transition Anim"));

	struct
	{
		bool                           Start_Transition;
		struct FS_GeneralSettings      AI_Settings;
		bool                           Use_Transition;
		class UAnimMontage*            Anim;
	} params = {};

	params.Start_Transition = Start_Transition;
	params.AI_Settings = AI_Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Use_Transition != nullptr)
		*Use_Transition = params.Use_Transition;
	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Remove Total Amount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Remove_Amount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Removed_All                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Remaining_Ammo                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Remove_Total_Amount(int Remove_Amount, bool* Removed_All, int* Remaining_Ammo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Remove Total Amount"));

	struct
	{
		int                            Remove_Amount;
		bool                           Removed_All;
		int                            Remaining_Ammo;
	} params = {};

	params.Remove_Amount = Remove_Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Removed_All != nullptr)
		*Removed_All = params.Removed_All;
	if (Remaining_Ammo != nullptr)
		*Remaining_Ammo = params.Remaining_Ammo;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Add Current Ammo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Add_Amount                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Add_Current_Ammo(int Add_Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Add Current Ammo"));

	struct
	{
		int                            Add_Amount;
	} params = {};

	params.Add_Amount = Add_Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Current Ammo Check
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Has_Ammo                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Current_Ammo_Check(bool* Has_Ammo, int* Ammo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Current Ammo Check"));

	struct
	{
		bool                           Has_Ammo;
		int                            Ammo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Has_Ammo != nullptr)
		*Has_Ammo = params.Has_Ammo;
	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Total Ammo Check
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Has_Ammo                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Total_Ammo_Check(bool* Has_Ammo, int* Ammo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Total Ammo Check"));

	struct
	{
		bool                           Has_Ammo;
		int                            Ammo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Has_Ammo != nullptr)
		*Has_Ammo = params.Has_Ammo;
	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Remove Current Ammo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Remove_Amount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Remove_Current_Ammo(int Remove_Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Remove Current Ammo"));

	struct
	{
		int                            Remove_Amount;
	} params = {};

	params.Remove_Amount = Remove_Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Current Range Attack Distance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Attack_Range                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Current_Range_Attack_Distance(float* Attack_Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Current Range Attack Distance"));

	struct
	{
		float                          Attack_Range;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Attack_Range != nullptr)
		*Attack_Range = params.Attack_Range;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Get Attached Weapon Ammo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Ammo_Found                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ABP_AIMasterHoldable_C*  Holdable_With_Ammo             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Get_Attached_Weapon_Ammo(bool* Ammo_Found, class ABP_AIMasterHoldable_C** Holdable_With_Ammo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Get Attached Weapon Ammo"));

	struct
	{
		bool                           Ammo_Found;
		class ABP_AIMasterHoldable_C*  Holdable_With_Ammo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Ammo_Found != nullptr)
		*Ammo_Found = params.Ammo_Found;
	if (Holdable_With_Ammo != nullptr)
		*Holdable_With_Ammo = params.Holdable_With_Ammo;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Destroy Emote Actor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Destroy_Emote_Actor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Destroy Emote Actor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Return Emote Montages
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UAnimMontage*>    Emote_Montages                 (CPF_Parm, CPF_OutParm)

void UBP_SmartAIComponent_C::Return_Emote_Montages(TArray<class UAnimMontage*>* Emote_Montages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Return Emote Montages"));

	struct
	{
		TArray<class UAnimMontage*>    Emote_Montages;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Emote_Montages != nullptr)
		*Emote_Montages = params.Emote_Montages;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Stop Current Montage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Keep_Emote_Montages            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Stop_Current_Montage(bool Keep_Emote_Montages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Stop Current Montage"));

	struct
	{
		bool                           Keep_Emote_Montages;
	} params = {};

	params.Keep_Emote_Montages = Keep_Emote_Montages;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Is Holding Weapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Weapon                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ABP_AIMasterHoldable_C*  Holdable_Actor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Is_Holding_Weapon(bool* Is_Weapon, class ABP_AIMasterHoldable_C** Holdable_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Is Holding Weapon"));

	struct
	{
		bool                           Is_Weapon;
		class ABP_AIMasterHoldable_C*  Holdable_Actor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Is_Weapon != nullptr)
		*Is_Weapon = params.Is_Weapon;
	if (Holdable_Actor != nullptr)
		*Holdable_Actor = params.Holdable_Actor;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Spawn Attached Holdables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Spawn_Attached_Holdables()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Spawn Attached Holdables"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Attached Holdables
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ABP_AIMasterHoldable_C*  Holdable                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Check_Attached_Holdables(class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class, bool* Return_Value, class ABP_AIMasterHoldable_C** Holdable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Check Attached Holdables"));

	struct
	{
		class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class;
		bool                           Return_Value;
		class ABP_AIMasterHoldable_C*  Holdable;
	} params = {};

	params.Holdable_Class = Holdable_Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Holdable != nullptr)
		*Holdable = params.Holdable;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Holdable Unequipped
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Holdable_Unequipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Holdable Unequipped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Unequip Holdable
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Unequip_Holdable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Unequip Holdable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Holdable Equip Socket
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Equip_Socket                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Unequip_Socket                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Equip_Montage                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Holdable_Equip_Socket(class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class, struct FName* Equip_Socket, struct FName* Unequip_Socket, bool* Equip_Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Holdable Equip Socket"));

	struct
	{
		class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class;
		struct FName                   Equip_Socket;
		struct FName                   Unequip_Socket;
		bool                           Equip_Montage;
	} params = {};

	params.Holdable_Class = Holdable_Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Equip_Socket != nullptr)
		*Equip_Socket = params.Equip_Socket;
	if (Unequip_Socket != nullptr)
		*Unequip_Socket = params.Unequip_Socket;
	if (Equip_Montage != nullptr)
		*Equip_Montage = params.Equip_Montage;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Equip Holdable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Equip_Holdable(class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Equip Holdable"));

	struct
	{
		class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class;
	} params = {};

	params.Holdable_Class = Holdable_Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Spawn Holdable
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ABP_AIMasterHoldable_C*/ AI_Weapon                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Attach_Socket                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Is_Visible                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ABP_AIMasterHoldable_C*  Holdable_Actor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Spawn_Holdable(class UClass* /*ABP_AIMasterHoldable_C*/ AI_Weapon, const struct FName& Attach_Socket, bool Is_Visible, class ABP_AIMasterHoldable_C** Holdable_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Spawn Holdable"));

	struct
	{
		class UClass* /*ABP_AIMasterHoldable_C*/ AI_Weapon;
		struct FName                   Attach_Socket;
		bool                           Is_Visible;
		class ABP_AIMasterHoldable_C*  Holdable_Actor;
	} params = {};

	params.AI_Weapon = AI_Weapon;
	params.Attach_Socket = Attach_Socket;
	params.Is_Visible = Is_Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Holdable_Actor != nullptr)
		*Holdable_Actor = params.Holdable_Actor;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Focus Actor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Focus_Actor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_BB_Focus_Actor(class AActor* Focus_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Focus Actor"));

	struct
	{
		class AActor*                  Focus_Actor;
	} params = {};

	params.Focus_Actor = Focus_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Proximity Deactivated
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Proximity_Actor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Proximity_Deactivated          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Proximity_Deactivated(class AActor* Proximity_Actor, bool* Proximity_Deactivated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Proximity Deactivated"));

	struct
	{
		class AActor*                  Proximity_Actor;
		bool                           Proximity_Deactivated;
	} params = {};

	params.Proximity_Actor = Proximity_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Proximity_Deactivated != nullptr)
		*Proximity_Deactivated = params.Proximity_Deactivated;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Reset Trigger Cooldown Timer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Reset_Trigger_Cooldown_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Reset Trigger Cooldown Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Reset Proximity Cooldown Timer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Reset_Proximity_Cooldown_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Reset Proximity Cooldown Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Cooldown Timer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Cooldown_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Cooldown Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Proximity Activated
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Proximity_Actor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Proximity_Triggered            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Proximity_Activated(class AActor* Proximity_Actor, bool* Proximity_Triggered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Proximity Activated"));

	struct
	{
		class AActor*                  Proximity_Actor;
		bool                           Proximity_Triggered;
	} params = {};

	params.Proximity_Actor = Proximity_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Proximity_Triggered != nullptr)
		*Proximity_Triggered = params.Proximity_Triggered;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Trigger Deactivated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Trigger_Actor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_AITrigger_C*         AI_Trigger                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Trigger_Deactivated(class AActor* Trigger_Actor, class ABP_AITrigger_C* AI_Trigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Trigger Deactivated"));

	struct
	{
		class AActor*                  Trigger_Actor;
		class ABP_AITrigger_C*         AI_Trigger;
	} params = {};

	params.Trigger_Actor = Trigger_Actor;
	params.AI_Trigger = AI_Trigger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Trigger Activated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Trigger_Actor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_AITrigger_C*         AI_Trigger                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Trigger_Activated(class AActor* Trigger_Actor, class ABP_AITrigger_C* AI_Trigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Trigger Activated"));

	struct
	{
		class AActor*                  Trigger_Actor;
		class ABP_AITrigger_C*         AI_Trigger;
	} params = {};

	params.Trigger_Actor = Trigger_Actor;
	params.AI_Trigger = AI_Trigger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Dead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Dead                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Set_BB_Dead(bool Dead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Dead"));

	struct
	{
		bool                           Dead;
	} params = {};

	params.Dead = Dead;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Closest Flee From Actor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Closest_Flee_From_Actor(class AActor** Actor, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Closest Flee From Actor"));

	struct
	{
		class AActor*                  Actor;
		float                          Distance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Sight Reaction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Sight_Actor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAIStimulus             AI_Stimulus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Sight_Reaction(class AActor* Sight_Actor, const struct FAIStimulus& AI_Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Sight Reaction"));

	struct
	{
		class AActor*                  Sight_Actor;
		struct FAIStimulus             AI_Stimulus;
	} params = {};

	params.Sight_Actor = Sight_Actor;
	params.AI_Stimulus = AI_Stimulus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Stop Fleeing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Stop_Fleeing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Stop Fleeing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set Flee Actor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Flee_From_Actor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_Flee_Actor(class AActor* Flee_From_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set Flee Actor"));

	struct
	{
		class AActor*                  Flee_From_Actor;
	} params = {};

	params.Flee_From_Actor = Flee_From_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Audio Reaction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAIStimulus             AI_Stimulus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Audio_Reaction(class AActor* Actor, const struct FAIStimulus& AI_Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Audio Reaction"));

	struct
	{
		class AActor*                  Actor;
		struct FAIStimulus             AI_Stimulus;
	} params = {};

	params.Actor = Actor;
	params.AI_Stimulus = AI_Stimulus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Temporary Stop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Temp_Stop                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Set_BB_Temporary_Stop(bool Temp_Stop)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Temporary Stop"));

	struct
	{
		bool                           Temp_Stop;
	} params = {};

	params.Temp_Stop = Temp_Stop;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Cancel AI Interact
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Cancel_AI_Interact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Cancel AI Interact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Being Interacted With
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Interacted_With                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Set_BB_Being_Interacted_With(bool Interacted_With)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Being Interacted With"));

	struct
	{
		bool                           Interacted_With;
	} params = {};

	params.Interacted_With = Interacted_With;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Interact Time Total
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::AI_Interact_Time_Total(float* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Interact Time Total"));

	struct
	{
		float                          Time;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Move To Actor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_BB_Move_To_Actor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Move To Actor"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Determine Attack Type
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Determine_Attack_Type()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Determine Attack Type"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Reset Attack Target
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           New_Attack_Target              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Attack_Target                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Reset_Attack_Target(bool* New_Attack_Target, class AActor** Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Reset Attack Target"));

	struct
	{
		bool                           New_Attack_Target;
		class AActor*                  Attack_Target;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (New_Attack_Target != nullptr)
		*New_Attack_Target = params.New_Attack_Target;
	if (Attack_Target != nullptr)
		*Attack_Target = params.Attack_Target;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Range Attack
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Range_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Range Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Is Low Health
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Low_Health                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Is_Low_Health(bool* Low_Health, int* Health)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Is Low Health"));

	struct
	{
		bool                           Low_Health;
		int                            Health;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Low_Health != nullptr)
		*Low_Health = params.Low_Health;
	if (Health != nullptr)
		*Health = params.Health;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Melee Collision Check
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Hit_Actor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Hit_Component                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Bone_Name                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UBP_SmartAIComponent_C::Melee_Collision_Check(class AActor* Hit_Actor, class UPrimitiveComponent* Hit_Component, const struct FName& Bone_Name, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Melee Collision Check"));

	struct
	{
		class AActor*                  Hit_Actor;
		class UPrimitiveComponent*     Hit_Component;
		struct FName                   Bone_Name;
		struct FHitResult              Hit;
	} params = {};

	params.Hit_Actor = Hit_Actor;
	params.Hit_Component = Hit_Component;
	params.Bone_Name = Bone_Name;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Deactive Melee Detect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Deactive_Melee_Detect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Deactive Melee Detect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Active Melee Detect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Active_Melee_Detect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Active Melee Detect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Remove Attacker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Remove_Attacker(class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Remove Attacker"));

	struct
	{
		class AActor*                  Attacker;
	} params = {};

	params.Attacker = Attacker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Attack Target
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_BB_Attack_Target(class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Attack Target"));

	struct
	{
		class AActor*                  Attacker;
	} params = {};

	params.Attacker = Attacker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Wait Time
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FloatValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_BB_Wait_Time(float FloatValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Wait Time"));

	struct
	{
		float                          FloatValue;
	} params = {};

	params.FloatValue = FloatValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Location
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 VectorValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_BB_Location(const struct FVector& VectorValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Location"));

	struct
	{
		struct FVector                 VectorValue;
	} params = {};

	params.VectorValue = VectorValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Facing Location
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 VectorValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_BB_Facing_Location(const struct FVector& VectorValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Facing Location"));

	struct
	{
		struct FVector                 VectorValue;
	} params = {};

	params.VectorValue = VectorValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Forget Attackers Timer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Forget_Attackers_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Forget Attackers Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Current Behaviour
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     AI_New_Behaviour               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Is_Base_Behaviour              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Set_BB_Current_Behaviour(TEnumAsByte<E_AIBehaviour> AI_New_Behaviour, bool Is_Base_Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set BB Current Behaviour"));

	struct
	{
		TEnumAsByte<E_AIBehaviour>     AI_New_Behaviour;
		bool                           Is_Base_Behaviour;
	} params = {};

	params.AI_New_Behaviour = AI_New_Behaviour;
	params.Is_Base_Behaviour = Is_Base_Behaviour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Flee
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::End_Flee()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Flee"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Begin Flee
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Begin_Flee()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Begin Flee"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Last Attacker
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Attacker                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Last_Attacker(class AActor** Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Last Attacker"));

	struct
	{
		class AActor*                  Attacker;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Attacker != nullptr)
		*Attacker = params.Attacker;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Random IP
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterInteractionPoint_C* Last_Interaction_Point         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ABP_MasterInteractionPoint_C* Interaction_Point              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Random_IP(class ABP_MasterInteractionPoint_C* Last_Interaction_Point, bool* Return_Value, class ABP_MasterInteractionPoint_C** Interaction_Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Random IP"));

	struct
	{
		class ABP_MasterInteractionPoint_C* Last_Interaction_Point;
		bool                           Return_Value;
		class ABP_MasterInteractionPoint_C* Interaction_Point;
	} params = {};

	params.Last_Interaction_Point = Last_Interaction_Point;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Interaction_Point != nullptr)
		*Interaction_Point = params.Interaction_Point;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Random Specified IP
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterInteractionPoint_C* Last_Interaction_Point         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ABP_MasterInteractionPoint_C* Interaction_Point              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Random_Specified_IP(class ABP_MasterInteractionPoint_C* Last_Interaction_Point, bool* Return_Value, class ABP_MasterInteractionPoint_C** Interaction_Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Random Specified IP"));

	struct
	{
		class ABP_MasterInteractionPoint_C* Last_Interaction_Point;
		bool                           Return_Value;
		class ABP_MasterInteractionPoint_C* Interaction_Point;
	} params = {};

	params.Last_Interaction_Point = Last_Interaction_Point;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Interaction_Point != nullptr)
		*Interaction_Point = params.Interaction_Point;
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set AI Dead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Set_AI_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set AI Dead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Generic Damage Reaction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Damage_Cause                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Generic_Damage_Reaction(class AActor* Damage_Cause)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Generic Damage Reaction"));

	struct
	{
		class AActor*                  Damage_Cause;
	} params = {};

	params.Damage_Cause = Damage_Cause;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Debug Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 inString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Debug_Text(const struct FString& inString, const struct FLinearColor& TextColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Debug Text"));

	struct
	{
		struct FString                 inString;
		struct FLinearColor            TextColor;
	} params = {};

	params.inString = inString;
	params.TextColor = TextColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnFail_EC17E16E4EA49390E6C1F7A05964C877
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::OnFail_EC17E16E4EA49390E6C1F7A05964C877(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnFail_EC17E16E4EA49390E6C1F7A05964C877"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params = {};

	params.MovementResult = MovementResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnSuccess_EC17E16E4EA49390E6C1F7A05964C877
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::OnSuccess_EC17E16E4EA49390E6C1F7A05964C877(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnSuccess_EC17E16E4EA49390E6C1F7A05964C877"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params = {};

	params.MovementResult = MovementResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnNotifyEnd_2049CB47425917B35D40CBAEB03142CE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::OnNotifyEnd_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnNotifyEnd_2049CB47425917B35D40CBAEB03142CE"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnNotifyBegin_2049CB47425917B35D40CBAEB03142CE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::OnNotifyBegin_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnNotifyBegin_2049CB47425917B35D40CBAEB03142CE"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnInterrupted_2049CB47425917B35D40CBAEB03142CE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::OnInterrupted_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnInterrupted_2049CB47425917B35D40CBAEB03142CE"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnBlendOut_2049CB47425917B35D40CBAEB03142CE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::OnBlendOut_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnBlendOut_2049CB47425917B35D40CBAEB03142CE"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnCompleted_2049CB47425917B35D40CBAEB03142CE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::OnCompleted_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.OnCompleted_2049CB47425917B35D40CBAEB03142CE"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set Movement Speed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Movement_Speed                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Set_Movement_Speed(float Movement_Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set Movement Speed"));

	struct
	{
		float                          Movement_Speed;
	} params = {};

	params.Movement_Speed = Movement_Speed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Sound
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundCue*               Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Multicast_Sound(class USoundCue* Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Sound"));

	struct
	{
		class USoundCue*               Sound;
	} params = {};

	params.Sound = Sound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Holdable Visibility
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Server_Holdable_Visibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Holdable Visibility"));

	struct
	{
		bool                           Visible;
	} params = {};

	params.Visible = Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Starting Weapon
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_Starting_Weapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Starting Weapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Unequip Holdable
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_Unequip_Holdable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Unequip Holdable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Holdable Unequipped
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_Holdable_Unequipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Holdable Unequipped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Block Attack
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_Block_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Block Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Unblock Attack
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_Unblock_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Unblock Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Roam Emotes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Roam_Emotes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Roam Emotes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Emote
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Emote()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Emote"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Emote Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Emote_Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Emote Done"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Reload
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transition Anim Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_GeneralSettings      Transition_From                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_GeneralSettings      Transition_To                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Transition_Anim_Timer(const struct FS_GeneralSettings& Transition_From, const struct FS_GeneralSettings& Transition_To)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transition Anim Timer"));

	struct
	{
		struct FS_GeneralSettings      Transition_From;
		struct FS_GeneralSettings      Transition_To;
	} params = {};

	params.Transition_From = Transition_From;
	params.Transition_To = Transition_To;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Anim Transition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::End_Anim_Transition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Anim Transition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Clear Emote
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Clear_Emote()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Clear Emote"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Range Attack Partical
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UBP_SmartAIComponent_C::Multicast_Range_Attack_Partical(const struct FHitResult& Hit_Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Range Attack Partical"));

	struct
	{
		struct FHitResult              Hit_Result;
	} params = {};

	params.Hit_Result = Hit_Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Play Transition to Audio
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Play_In                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USoundCue*               Audio                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Multicast_Play_Transition_to_Audio(float Play_In, class USoundCue* Audio)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Play Transition to Audio"));

	struct
	{
		float                          Play_In;
		class USoundCue*               Audio;
	} params = {};

	params.Play_In = Play_In;
	params.Audio = Audio;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transition To Audio Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Transition_To_Audio_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Transition To Audio Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Despawn Body
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Multicast_Despawn_Body()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Despawn Body"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Despawn Body
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_Despawn_Body()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Despawn Body"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Respawn
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Server_Respawn(TEnumAsByte<E_AIBehaviour> Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Respawn"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Respawn
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Multicast_Respawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Respawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Deactivate AI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Deactivate_AI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Deactivate AI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Activate AI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Activate_AI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Activate AI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Melee Trace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Start_Melee_Trace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Melee Trace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Melee Trace Timer Events
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Melee_Trace_Timer_Events()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Melee Trace Timer Events"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Actor Aim Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Actor Aim Focus"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Possessed
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Possessed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Possessed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server AI Setup
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_AI_Setup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server AI Setup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Take Damage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::AI_Take_Damage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Take Damage"));

	struct
	{
		class AActor*                  DamagedActor;
		float                          Damage;
		class UDamageType*             DamageType;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
	} params = {};

	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Alert Actor Defenders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Alert Actor Defenders"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Jump Down
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 End_Location                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Jump_Down(const struct FVector& End_Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Jump Down"));

	struct
	{
		struct FVector                 End_Location;
	} params = {};

	params.End_Location = End_Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Jump Down Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Jump_Down_Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Jump Down Close"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Jump Down Enter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Jump_Down_Enter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Jump Down Enter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Climb Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Climb_Up()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Climb Up"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Climb Up Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Climb_Up_Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Climb Up Close"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Move Across
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Move_Across()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Move Across"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Climb
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::End_Climb()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Climb"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Routine
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Hour                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Routine(int Hour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Routine"));

	struct
	{
		int                            Hour;
	} params = {};

	params.Hour = Hour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Delayed Range Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Delayed_Range_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Delayed Range Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Hit React Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Start_Hit_React_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Hit React Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Hit React Timer Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Hit_React_Timer_Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Hit React Timer Done"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Alert_Actor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::AI_Alert(class AActor* Alert_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Alert"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Start Aim Offset
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Multicast_Start_Aim_Offset(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Start Aim Offset"));

	struct
	{
		class AActor*                  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Stop Aim Offset
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Multicast_Stop_Aim_Offset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Stop Aim Offset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Combat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::End_Combat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Combat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Entered Combat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Entered_Combat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Entered Combat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Stop Current Montage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Keep_EmoteMontages             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Multicast_Stop_Current_Montage(bool Keep_EmoteMontages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Stop Current Montage"));

	struct
	{
		bool                           Keep_EmoteMontages;
	} params = {};

	params.Keep_EmoteMontages = Keep_EmoteMontages;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Homing Projectile Spawn
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Spawn_Transform_Location       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Attack_Target                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AActor*/       Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Multicast_Homing_Projectile_Spawn(const struct FVector& Spawn_Transform_Location, class AActor* Attack_Target, class UClass* /*AActor*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Homing Projectile Spawn"));

	struct
	{
		struct FVector                 Spawn_Transform_Location;
		class AActor*                  Attack_Target;
		class UClass* /*AActor*/       Class;
	} params = {};

	params.Spawn_Transform_Location = Spawn_Transform_Location;
	params.Attack_Target = Attack_Target;
	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Projectile Spawn
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Spawn_Transform_Location       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Velocity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AActor*/       Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Speed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Multicast_Projectile_Spawn(const struct FVector& Spawn_Transform_Location, const struct FVector& Velocity, class UClass* /*AActor*/ Class, float Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Projectile Spawn"));

	struct
	{
		struct FVector                 Spawn_Transform_Location;
		struct FVector                 Velocity;
		class UClass* /*AActor*/       Class;
		float                          Speed;
	} params = {};

	params.Spawn_Transform_Location = Spawn_Transform_Location;
	params.Velocity = Velocity;
	params.Class = Class;
	params.Speed = Speed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Cancel Temp Behaviour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Cancel_Temp_Behaviour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Cancel Temp Behaviour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set Behavior
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Set_Behavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Set Behavior"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Temp Behaviour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     Temp_Behavior                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Length                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_AIBehaviour>     End_Behavior                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Start_Temp_Behaviour(TEnumAsByte<E_AIBehaviour> Temp_Behavior, float Length, TEnumAsByte<E_AIBehaviour> End_Behavior)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Temp Behaviour"));

	struct
	{
		TEnumAsByte<E_AIBehaviour>     Temp_Behavior;
		float                          Length;
		TEnumAsByte<E_AIBehaviour>     End_Behavior;
	} params = {};

	params.Temp_Behavior = Temp_Behavior;
	params.Length = Length;
	params.End_Behavior = End_Behavior;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Stop Montage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Multicast_Stop_Montage(class UAnimMontage* Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Stop Montage"));

	struct
	{
		class UAnimMontage*            Montage;
	} params = {};

	params.Montage = Montage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast AI Dead
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Multicast_AI_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast AI Dead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Play Montage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Play_Rate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Start_Name                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Multicast_Play_Montage(class UAnimMontage* Montage, float Play_Rate, const struct FName& Start_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Play Montage"));

	struct
	{
		class UAnimMontage*            Montage;
		float                          Play_Rate;
		struct FName                   Start_Name;
	} params = {};

	params.Montage = Montage;
	params.Play_Rate = Play_Rate;
	params.Start_Name = Start_Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Camera Activate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activate                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::AI_Camera_Activate(bool Activate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Camera Activate"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Animation Switch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Animation Switch"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI End Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::AI_End_Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI End Alert"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret End Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Turret_End_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret End Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret Start Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Turret_Start_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret Start Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret Idle Stop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Turret_Idle_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret Idle Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret Idle Start
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Turret_Idle_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret Idle Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret Destroyed Effect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Turret_Destroyed_Effect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Turret Destroyed Effect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Dead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::AI_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Dead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Set Collision Profile
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Capsule_Profile                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Mesh_Profile                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Multicast_Set_Collision_Profile(const struct FName& Capsule_Profile, const struct FName& Mesh_Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Set Collision Profile"));

	struct
	{
		struct FName                   Capsule_Profile;
		struct FName                   Mesh_Profile;
	} params = {};

	params.Capsule_Profile = Capsule_Profile;
	params.Mesh_Profile = Mesh_Profile;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Start Combat Stance
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Server_Start_Combat_Stance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Server Start Combat Stance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Combat Stance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::End_Combat_Stance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Combat Stance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Combat Stance
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Combat_Stance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SmartAIComponent_C::Multicast_Combat_Stance(bool Combat_Stance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Combat Stance"));

	struct
	{
		bool                           Combat_Stance;
	} params = {};

	params.Combat_Stance = Combat_Stance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Cancel Melee Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Cancel_Melee_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Cancel Melee Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Block
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BlockType>       Block_Type                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Block_Attacker                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Block"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Block Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::Start_Block_Timer(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Block Timer"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Block Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::End_Block_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.End Block Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Flee Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Start_Flee_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Start Flee Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Flee Timer End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Flee_Timer_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Flee Timer End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Stop Despawn Timer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::Stop_Despawn_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Stop Despawn Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.FrequencyTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::FrequencyTimer(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.FrequencyTimer"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::StartTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.StartTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Melee Emitter
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UBP_SmartAIComponent_C::Multicast_Melee_Emitter(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.Multicast Melee Emitter"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.StreamLevelUnLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::StreamLevelUnLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.StreamLevelUnLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.SetupLevelStreamUnload
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SmartAIComponent_C::SetupLevelStreamUnload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.SetupLevelStreamUnload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Trigger Deactivated Bind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  End_Overlap_Actor              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_AITrigger_C*         AI_Trigger                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::AI_Trigger_Deactivated_Bind(class AActor* End_Overlap_Actor, class ABP_AITrigger_C* AI_Trigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Trigger Deactivated Bind"));

	struct
	{
		class AActor*                  End_Overlap_Actor;
		class ABP_AITrigger_C*         AI_Trigger;
	} params = {};

	params.End_Overlap_Actor = End_Overlap_Actor;
	params.AI_Trigger = AI_Trigger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Trigger Activated Bind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Overlap_Actor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_AITrigger_C*         AI_Trigger                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::AI_Trigger_Activated_Bind(class AActor* Overlap_Actor, class ABP_AITrigger_C* AI_Trigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Trigger Activated Bind"));

	struct
	{
		class AActor*                  Overlap_Actor;
		class ABP_AITrigger_C*         AI_Trigger;
	} params = {};

	params.Overlap_Actor = Overlap_Actor;
	params.AI_Trigger = AI_Trigger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.ExecuteUbergraph_BP_SmartAIComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::ExecuteUbergraph_BP_SmartAIComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.ExecuteUbergraph_BP_SmartAIComponent"));

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


// Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Killed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              AI_Character                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SmartAIComponent_C::AI_Killed__DelegateSignature(class ACharacter* AI_Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmartAIComponent.BP_SmartAIComponent_C.AI Killed__DelegateSignature"));

	struct
	{
		class ACharacter*              AI_Character;
	} params = {};

	params.AI_Character = AI_Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
