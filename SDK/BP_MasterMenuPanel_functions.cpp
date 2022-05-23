// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterMenuPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SGK ConnectingScreen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_AttemptingToConnect_C* ServerConnecting               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterMenuPanel_C::SGK_ConnectingScreen(class UBP_AttemptingToConnect_C** ServerConnecting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SGK ConnectingScreen"));

	struct
	{
		class UBP_AttemptingToConnect_C* ServerConnecting;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ServerConnecting != nullptr)
		*ServerConnecting = params.ServerConnecting;
}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SGK MenuReference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Menu                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_MasterMenuPanel_C::SGK_MenuReference(class UWidget* Menu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SGK MenuReference"));

	struct
	{
		class UWidget*                 Menu;
		bool                           ReturnValue;
	} params = {};

	params.Menu = Menu;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OpenWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HideSelf                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           HideSecondary                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterMenuPanel_C::OpenWidget(class UUserWidget* Widget, bool HideSelf, bool HideSecondary)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OpenWidget"));

	struct
	{
		class UUserWidget*             Widget;
		bool                           HideSelf;
		bool                           HideSecondary;
	} params = {};

	params.Widget = Widget;
	params.HideSelf = HideSelf;
	params.HideSecondary = HideSecondary;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SelectWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetToggleType> WidgetToggle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterMenuPanel_C::SelectWidget(TEnumAsByte<E_WidgetToggleType> WidgetToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SelectWidget"));

	struct
	{
		TEnumAsByte<E_WidgetToggleType> WidgetToggle;
	} params = {};

	params.WidgetToggle = WidgetToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OnFailure_8BE72C1C48A45480AD48308DE9AB0B52
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterMenuPanel_C::OnFailure_8BE72C1C48A45480AD48308DE9AB0B52()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OnFailure_8BE72C1C48A45480AD48308DE9AB0B52"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OnSuccess_8BE72C1C48A45480AD48308DE9AB0B52
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterMenuPanel_C::OnSuccess_8BE72C1C48A45480AD48308DE9AB0B52()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OnSuccess_8BE72C1C48A45480AD48308DE9AB0B52"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.Destroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterMenuPanel_C::Destroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.Destroy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.ExecuteUbergraph_BP_MasterMenuPanel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterMenuPanel_C::ExecuteUbergraph_BP_MasterMenuPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.ExecuteUbergraph_BP_MasterMenuPanel"));

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
