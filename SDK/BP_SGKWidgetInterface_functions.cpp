// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKWidgetInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKWidgetInterface.BP_SGKWidgetInterface_C.SGK MenuReference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Menu                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_SGKWidgetInterface_C::SGK_MenuReference(class UWidget* Menu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKWidgetInterface.BP_SGKWidgetInterface_C.SGK MenuReference"));

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


// Function BP_SGKWidgetInterface.BP_SGKWidgetInterface_C.SGK ConnectingScreen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_AttemptingToConnect_C* ServerConnecting               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKWidgetInterface_C::SGK_ConnectingScreen(class UBP_AttemptingToConnect_C** ServerConnecting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKWidgetInterface.BP_SGKWidgetInterface_C.SGK ConnectingScreen"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
