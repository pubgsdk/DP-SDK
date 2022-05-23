// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKDamageInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK Damage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BaseDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  EventInstigator                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DamageType>      DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKDamageInterface_C::SGK_Damage(int BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK Damage"));

	struct
	{
		int                            BaseDamage;
		class AActor*                  EventInstigator;
		class AActor*                  DamageCauser;
		TEnumAsByte<E_DamageType>      DamageType;
		TEnumAsByte<E_Hitbox>          HitBox;
	} params = {};

	params.BaseDamage = BaseDamage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;
	params.HitBox = HitBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK SetCurrentHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewHealthAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_SGKDamageInterface_C::SGK_SetCurrentHealth(int NewHealthAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK SetCurrentHealth"));

	struct
	{
		int                            NewHealthAmount;
		bool                           ReturnValue;
	} params = {};

	params.NewHealthAmount = NewHealthAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK ShowHealthWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowHealthWidget               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   HealthWidgetName               (CPF_Parm, CPF_OutParm)

void UBP_SGKDamageInterface_C::SGK_ShowHealthWidget(bool* ShowHealthWidget, struct FText* HealthWidgetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK ShowHealthWidget"));

	struct
	{
		bool                           ShowHealthWidget;
		struct FText                   HealthWidgetName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ShowHealthWidget != nullptr)
		*ShowHealthWidget = params.ShowHealthWidget;
	if (HealthWidgetName != nullptr)
		*HealthWidgetName = params.HealthWidgetName;
}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK MaxHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaxHealth                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKDamageInterface_C::SGK_MaxHealth(int* MaxHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK MaxHealth"));

	struct
	{
		int                            MaxHealth;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MaxHealth != nullptr)
		*MaxHealth = params.MaxHealth;
}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK CurrentHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKDamageInterface_C::SGK_CurrentHealth(int* Health)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK CurrentHealth"));

	struct
	{
		int                            Health;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Health != nullptr)
		*Health = params.Health;
}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK BleedDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TickDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TickTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BleedLength                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKDamageInterface_C::SGK_BleedDamage(int TickDamage, float TickTime, float BleedLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK BleedDamage"));

	struct
	{
		int                            TickDamage;
		float                          TickTime;
		float                          BleedLength;
	} params = {};

	params.TickDamage = TickDamage;
	params.TickTime = TickTime;
	params.BleedLength = BleedLength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
