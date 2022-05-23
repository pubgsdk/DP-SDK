// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TimeOfDay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Is Dead?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_TimeOfDay_C::AI_Is_Dead_(bool* Dead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.AI Is Dead?"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Can Interact?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Can_Interact                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_TimeOfDay_C::AI_Can_Interact_(bool* Can_Interact)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.AI Can Interact?"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.Actor Attack Target
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attack_Target                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Actor Attack Target"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.Update Time
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::Update_Time(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Update Time"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Day Lighting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::Day_Lighting(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Day Lighting"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Night Lighting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::Night_Lighting(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Night Lighting"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Idle Start
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TimeOfDay_C::Turret_Idle_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Idle Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Idle Stop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TimeOfDay_C::Turret_Idle_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Idle Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Start Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TimeOfDay_C::Turret_Start_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Start Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret End Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TimeOfDay_C::Turret_End_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Turret End Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Alert_Actor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Alert(class AActor* Alert_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.AI Alert"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI End Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TimeOfDay_C::AI_End_Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.AI End Alert"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Animation Switch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.AI Animation Switch"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Camera Activate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activate                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_TimeOfDay_C::AI_Camera_Activate(bool Activate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.AI Camera Activate"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Block
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BlockType>       Block_Type                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Block_Attacker                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.AI Block"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.ReceiveTick"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Destroyed Effect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TimeOfDay_C::Turret_Destroyed_Effect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Destroyed Effect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Alert Actor Defenders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Alert Actor Defenders"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.Actor Aim Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Actor Aim Focus"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Dead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TimeOfDay_C::AI_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.AI Dead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.ExecuteUbergraph_BP_TimeOfDay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::ExecuteUbergraph_BP_TimeOfDay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.ExecuteUbergraph_BP_TimeOfDay"));

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


// Function BP_TimeOfDay.BP_TimeOfDay_C.Time Hour__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Hours                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TimeOfDay_C::Time_Hour__DelegateSignature(int Hours)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TimeOfDay.BP_TimeOfDay_C.Time Hour__DelegateSignature"));

	struct
	{
		int                            Hours;
	} params = {};

	params.Hours = Hours;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
