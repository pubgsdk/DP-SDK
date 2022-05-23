// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MultiplayerMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.BindOnClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetToggleType> WidgetToggleType               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MultiplayerMenu_C::BindOnClicked(TEnumAsByte<E_WidgetToggleType> WidgetToggleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.BindOnClicked"));

	struct
	{
		TEnumAsByte<E_WidgetToggleType> WidgetToggleType;
	} params = {};

	params.WidgetToggleType = WidgetToggleType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MultiplayerMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MultiplayerMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.PreConstruct"));

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


// Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.ExecuteUbergraph_BP_MultiplayerMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MultiplayerMenu_C::ExecuteUbergraph_BP_MultiplayerMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.ExecuteUbergraph_BP_MultiplayerMenu"));

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
