// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ExampleCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Actor Attack Target
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attack_Target                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Actor Attack Target"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Is Dead?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ExampleCharacter_C::AI_Is_Dead_(bool* Dead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Is Dead?"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Can Interact?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Can_Interact                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ExampleCharacter_C::AI_Can_Interact_(bool* Can_Interact)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Can Interact?"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Set Aimed Focus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Set_Aimed_Focus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Set Aimed Focus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Kill Character
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Kill_Character()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Kill Character"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Debug Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 inString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::Debug_Text(const struct FString& inString, const struct FLinearColor& TextColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Debug Text"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Damage Taken
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::Damage_Taken(float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Damage Taken"));

	struct
	{
		float                          Damage;
	} params = {};

	params.Damage = Damage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_C_K2Node_InputKeyEvent_7
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpActEvt_C_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_C_K2Node_InputKeyEvent_7"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpActEvt_K_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_5"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_H_K2Node_InputKeyEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_H_K2Node_InputKeyEvent_4"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_H_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpActEvt_H_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpActEvt_H_K2Node_InputKeyEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret Idle Start
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Turret_Idle_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret Idle Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret Idle Stop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Turret_Idle_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret Idle Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret Start Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Turret_Start_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret Start Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret End Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Turret_End_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret End Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Alert_Actor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::AI_Alert(class AActor* Alert_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Alert"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI End Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::AI_End_Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI End Alert"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Animation Switch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Animation Switch"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Camera Activate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activate                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ExampleCharacter_C::AI_Camera_Activate(bool Activate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Camera Activate"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Block
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BlockType>       Block_Type                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Block_Attacker                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Block"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret Destroyed Effect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Turret_Destroyed_Effect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Turret Destroyed Effect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_257
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_257(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_257"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_269
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_269(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_269"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Alert Actor Defenders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Alert Actor Defenders"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Actor Aim Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Actor Aim Focus"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Dead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::AI_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.AI Dead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Server Left Mouse Button
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::Server_Left_Mouse_Button(const struct FVector& Start, const struct FVector& End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Server Left Mouse Button"));

	struct
	{
		struct FVector                 Start;
		struct FVector                 End;
	} params = {};

	params.Start = Start;
	params.End = End;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.ReceiveAnyDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.ReceiveAnyDamage"));

	struct
	{
		float                          Damage;
		class UDamageType*             DamageType;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
	} params = {};

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Client Open Respawn Screen
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Client_Open_Respawn_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Client Open Respawn Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Client Respawn Player
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Client_Respawn_Player()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Client Respawn Player"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Server Respawn Player
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Server_Respawn_Player()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Server Respawn Player"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Multicast Player Death
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ExampleCharacter_C::Multicast_Player_Death()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Multicast Player Death"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Multicast Sound
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Sound_Location                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::Multicast_Sound(class USoundBase* Sound, const struct FVector& Sound_Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Multicast Sound"));

	struct
	{
		class USoundBase*              Sound;
		struct FVector                 Sound_Location;
	} params = {};

	params.Sound = Sound;
	params.Sound_Location = Sound_Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Multicast Range Effect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_ExampleCharacter_C::Multicast_Range_Effect(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Multicast Range Effect"));

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


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Multicast Aimed
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Aimed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ExampleCharacter_C::Multicast_Aimed(bool Aimed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Multicast Aimed"));

	struct
	{
		bool                           Aimed;
	} params = {};

	params.Aimed = Aimed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.Server Aimed
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Aimed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ExampleCharacter_C::Server_Aimed(bool Aimed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.Server Aimed"));

	struct
	{
		bool                           Aimed;
	} params = {};

	params.Aimed = Aimed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExampleCharacter.BP_ExampleCharacter_C.ExecuteUbergraph_BP_ExampleCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ExampleCharacter_C::ExecuteUbergraph_BP_ExampleCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExampleCharacter.BP_ExampleCharacter_C.ExecuteUbergraph_BP_ExampleCharacter"));

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
