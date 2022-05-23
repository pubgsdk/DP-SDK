// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CircleStat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CircleStat.BP_CircleStat_C.UpdateInteger
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            StatMax                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CircleStat_C::UpdateInteger(int Stat, int StatMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CircleStat.BP_CircleStat_C.UpdateInteger"));

	struct
	{
		int                            Stat;
		int                            StatMax;
	} params = {};

	params.Stat = Stat;
	params.StatMax = StatMax;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CircleStat.BP_CircleStat_C.UpdateFloat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          StatMax                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CircleStat_C::UpdateFloat(float Stat, float StatMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CircleStat.BP_CircleStat_C.UpdateFloat"));

	struct
	{
		float                          Stat;
		float                          StatMax;
	} params = {};

	params.Stat = Stat;
	params.StatMax = StatMax;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CircleStat.BP_CircleStat_C.UpdateIconSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CircleStat_C::UpdateIconSize(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CircleStat.BP_CircleStat_C.UpdateIconSize"));

	struct
	{
		struct FVector2D               Size;
	} params = {};

	params.Size = Size;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CircleStat.BP_CircleStat_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CircleStat_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CircleStat.BP_CircleStat_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CircleStat.BP_CircleStat_C.ExecuteUbergraph_BP_CircleStat
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CircleStat_C::ExecuteUbergraph_BP_CircleStat(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CircleStat.BP_CircleStat_C.ExecuteUbergraph_BP_CircleStat"));

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
