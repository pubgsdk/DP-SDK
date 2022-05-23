// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_QuickSlotKey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_QuickSlotKey.BP_QuickSlotKey_C.SetNumber
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    SlotNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_QuickSlotKey_C::SetNumber(const struct FKey& SlotNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotKey.BP_QuickSlotKey_C.SetNumber"));

	struct
	{
		struct FKey                    SlotNumber;
	} params = {};

	params.SlotNumber = SlotNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_QuickSlotKey.BP_QuickSlotKey_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_QuickSlotKey_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotKey.BP_QuickSlotKey_C.PreConstruct"));

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


// Function BP_QuickSlotKey.BP_QuickSlotKey_C.ExecuteUbergraph_BP_QuickSlotKey
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_QuickSlotKey_C::ExecuteUbergraph_BP_QuickSlotKey(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotKey.BP_QuickSlotKey_C.ExecuteUbergraph_BP_QuickSlotKey"));

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
