// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTS_RangeAttackLocation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Closest Attack Target
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Closest_Attack_Target          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_RangeAttackLocation_C::Closest_Attack_Target(class AActor** Closest_Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Closest Attack Target"));

	struct
	{
		class AActor*                  Closest_Attack_Target;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Closest_Attack_Target != nullptr)
		*Closest_Attack_Target = params.Closest_Attack_Target;
}


// Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Range Attack Frequancy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Use_Anim_Time                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Range_Attack_Frequency         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_RangeAttackLocation_C::Range_Attack_Frequancy(bool* Use_Anim_Time, float* Range_Attack_Frequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Range Attack Frequancy"));

	struct
	{
		bool                           Use_Anim_Time;
		float                          Range_Attack_Frequency;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Use_Anim_Time != nullptr)
		*Use_Anim_Time = params.Use_Anim_Time;
	if (Range_Attack_Frequency != nullptr)
		*Range_Attack_Frequency = params.Range_Attack_Frequency;
}


// Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Get Range Attack Montage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_RangeAttackLocation_C::Get_Range_Attack_Montage(class UAnimMontage** Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Get Range Attack Montage"));

	struct
	{
		class UAnimMontage*            Montage;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Range Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_RangeAttackLocation_C::Range_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Range Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_RangeAttackLocation_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.ReceiveTickAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.LOS Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_RangeAttackLocation_C::LOS_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.LOS Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Search Timer Events
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_RangeAttackLocation_C::Search_Timer_Events()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.Search Timer Events"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.ExecuteUbergraph_BTS_RangeAttackLocation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_RangeAttackLocation_C::ExecuteUbergraph_BTS_RangeAttackLocation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_RangeAttackLocation.BTS_RangeAttackLocation_C.ExecuteUbergraph_BTS_RangeAttackLocation"));

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
