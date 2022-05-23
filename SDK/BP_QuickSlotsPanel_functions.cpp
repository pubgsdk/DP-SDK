// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_QuickSlotsPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.AddQuickSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AddAmount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_QuickSlotsPanel_C::AddQuickSlots(int AddAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.AddQuickSlots"));

	struct
	{
		int                            AddAmount;
	} params = {};

	params.AddAmount = AddAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.RemoveQuickSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Remove_Amount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_QuickSlotsPanel_C::RemoveQuickSlots(int Remove_Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.RemoveQuickSlots"));

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


// Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.ConstructQuickSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_QuickSlotsPanel_C::ConstructQuickSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.ConstructQuickSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_QuickSlotsPanel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_QuickSlotsPanel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.PreConstruct"));

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


// Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.ExecuteUbergraph_BP_QuickSlotsPanel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_QuickSlotsPanel_C::ExecuteUbergraph_BP_QuickSlotsPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_QuickSlotsPanel.BP_QuickSlotsPanel_C.ExecuteUbergraph_BP_QuickSlotsPanel"));

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
