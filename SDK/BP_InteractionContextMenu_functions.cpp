// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InteractionContextMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.DownEntrySelect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InteractionContextMenu_C::DownEntrySelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.DownEntrySelect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.ResetEntrySelect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InteractionContextMenu_C::ResetEntrySelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.ResetEntrySelect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.UpEntrySelect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InteractionContextMenu_C::UpEntrySelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.UpEntrySelect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.InitializeContextMenu
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  LookAtActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UActorComponent*         LookAtComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InteractionContextMenu_C::InitializeContextMenu(class AActor* LookAtActor, class UActorComponent* LookAtComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.InitializeContextMenu"));

	struct
	{
		class AActor*                  LookAtActor;
		class UActorComponent*         LookAtComponent;
	} params = {};

	params.LookAtActor = LookAtActor;
	params.LookAtComponent = LookAtComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.MenuVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UBP_InteractionContextMenu_C::MenuVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.MenuVisibility"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.CloseContextMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InteractionContextMenu_C::CloseContextMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.CloseContextMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InteractionContextMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.PreConstruct"));

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


// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.PopulateMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  LookAtActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InteractionContextMenu_C::PopulateMenu(class AActor* LookAtActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.PopulateMenu"));

	struct
	{
		class AActor*                  LookAtActor;
	} params = {};

	params.LookAtActor = LookAtActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.ExecuteUbergraph_BP_InteractionContextMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InteractionContextMenu_C::ExecuteUbergraph_BP_InteractionContextMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractionContextMenu.BP_InteractionContextMenu_C.ExecuteUbergraph_BP_InteractionContextMenu"));

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
