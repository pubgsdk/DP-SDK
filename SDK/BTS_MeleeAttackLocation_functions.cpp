// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTS_MeleeAttackLocation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Melee Attack Frequancy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Use_Anim_Time                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Range_Attack_Frequency         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_MeleeAttackLocation_C::Melee_Attack_Frequancy(bool* Use_Anim_Time, float* Range_Attack_Frequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Melee Attack Frequancy"));

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


// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Get Lower Melee Montage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_MeleeAttackLocation_C::Get_Lower_Melee_Montage(class UAnimMontage** Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Get Lower Melee Montage"));

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


// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Get Melee Montage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_MeleeAttackLocation_C::Get_Melee_Montage(class UAnimMontage** Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Get Melee Montage"));

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


// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Moving Melee Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_MeleeAttackLocation_C::Moving_Melee_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Moving Melee Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Lower Melee Hit Check
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_MeleeAttackLocation_C::Lower_Melee_Hit_Check()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Lower Melee Hit Check"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Start Moving Melee Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_MeleeAttackLocation_C::Start_Moving_Melee_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Start Moving Melee Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Search Timer Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTS_MeleeAttackLocation_C::Search_Timer_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.Search Timer Event"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_MeleeAttackLocation_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.ReceiveTickAI"));

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


// Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.ExecuteUbergraph_BTS_MeleeAttackLocation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTS_MeleeAttackLocation_C::ExecuteUbergraph_BTS_MeleeAttackLocation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTS_MeleeAttackLocation.BTS_MeleeAttackLocation_C.ExecuteUbergraph_BTS_MeleeAttackLocation"));

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
