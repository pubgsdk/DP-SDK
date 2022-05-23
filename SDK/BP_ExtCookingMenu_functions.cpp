// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ExtCookingMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK InvItemSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryItemIcon_C*> ItemInvWidgets                 (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_ExtCookingMenu_C::SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK InvItemSlots"));

	struct
	{
		TArray<class UBP_InventoryItemIcon_C*> ItemInvWidgets;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemInvWidgets != nullptr)
		*ItemInvWidgets = params.ItemInvWidgets;
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK CellSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryCell_C*> Cells                          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_ExtCookingMenu_C::SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK CellSlots"));

	struct
	{
		TArray<class UBP_InventoryCell_C*> Cells;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Cells != nullptr)
		*Cells = params.Cells;
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.UpdateWeight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::UpdateWeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.UpdateWeight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.UpdateCookingSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::UpdateCookingSlot(const struct FS_InvSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.UpdateCookingSlot"));

	struct
	{
		struct FS_InvSlot              CookingSlot;
	} params = {};

	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PauseCookingSlotTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          ConvertSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::PauseCookingSlotTimer(const struct FS_CookingSlot& ConvertSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PauseCookingSlotTimer"));

	struct
	{
		struct FS_CookingSlot          ConvertSlot;
	} params = {};

	params.ConvertSlot = ConvertSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ResumeCookingSlotTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          ConvertSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ResumeCookingSlotTimer(const struct FS_CookingSlot& ConvertSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ResumeCookingSlotTimer"));

	struct
	{
		struct FS_CookingSlot          ConvertSlot;
	} params = {};

	params.ConvertSlot = ConvertSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.RestartCookingSlotTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          ConvertSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::RestartCookingSlotTimer(const struct FS_CookingSlot& ConvertSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.RestartCookingSlotTimer"));

	struct
	{
		struct FS_CookingSlot          ConvertSlot;
	} params = {};

	params.ConvertSlot = ConvertSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PauseAllCookingSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::PauseAllCookingSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PauseAllCookingSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ResumeAllCookingSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::ResumeAllCookingSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ResumeAllCookingSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.StartCookingSlotTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          ConvertSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::StartCookingSlotTimer(const struct FS_CookingSlot& ConvertSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.StartCookingSlotTimer"));

	struct
	{
		struct FS_CookingSlot          ConvertSlot;
	} params = {};

	params.ConvertSlot = ConvertSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.FindCookingSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          ConvertSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_CookingSlot_C*       CookingSlot                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_ExtCookingMenu_C::FindCookingSlot(const struct FS_CookingSlot& ConvertSlot, class UBP_CookingSlot_C** CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.FindCookingSlot"));

	struct
	{
		struct FS_CookingSlot          ConvertSlot;
		bool                           ReturnValue;
		class UBP_CookingSlot_C*       CookingSlot;
	} params = {};

	params.ConvertSlot = ConvertSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CookingSlot != nullptr)
		*CookingSlot = params.CookingSlot;

	return params.ReturnValue;
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ClearCurrentSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::ClearCurrentSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ClearCurrentSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.Get_OnButtonText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBP_ExtCookingMenu_C::Get_OnButtonText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.Get_OnButtonText_Text_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.InitizlizeCookingInvGrids
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::InitizlizeCookingInvGrids()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.InitizlizeCookingInvGrids"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructCookingSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::ConstructCookingSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructCookingSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructFuelInvSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::ConstructFuelInvSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructFuelInvSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructStorageInvSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::ConstructStorageInvSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructStorageInvSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK ConstructGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   GridInventory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK ConstructGrid"));

	struct
	{
		class UBP_MasterInventory_C*   GridInventory;
	} params = {};

	params.GridInventory = GridInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_ExtCookingMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PreConstruct"));

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


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.InitializeExtCookingMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::InitializeExtCookingMenu(class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.InitializeExtCookingMenu"));

	struct
	{
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ExtCookingMenu_C::BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ExecuteUbergraph_BP_ExtCookingMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ExecuteUbergraph_BP_ExtCookingMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ExecuteUbergraph_BP_ExtCookingMenu"));

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
