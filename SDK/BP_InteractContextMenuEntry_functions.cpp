// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InteractContextMenuEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.EntrySelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InteractContextMenuEntry_C::EntrySelected(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.EntrySelected"));

	struct
	{
		bool                           Selected;
	} params = {};

	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.UpdateText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InteractContextMenuEntry_C::UpdateText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.UpdateText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.InitializeEntry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WorldAction          Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InteractContextMenuEntry_C::InitializeEntry(const struct FS_WorldAction& Action, class AActor* Actor, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.InitializeEntry"));

	struct
	{
		struct FS_WorldAction          Action;
		class AActor*                  Actor;
		int                            Index;
	} params = {};

	params.Action = Action;
	params.Actor = Actor;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InteractContextMenuEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.PreConstruct"));

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


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.ExecuteUbergraph_BP_InteractContextMenuEntry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InteractContextMenuEntry_C::ExecuteUbergraph_BP_InteractContextMenuEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.ExecuteUbergraph_BP_InteractContextMenuEntry"));

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
