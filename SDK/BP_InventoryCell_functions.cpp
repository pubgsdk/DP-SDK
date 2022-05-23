// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InventoryCell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InventoryCell.BP_InventoryCell_C.CellDebugText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::CellDebugText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.CellDebugText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.Deactivate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.Deactivate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.ItemDragOver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragOperation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryCell_C::ItemDragOver(class UDragDropOperation* DragOperation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.ItemDragOver"));

	struct
	{
		class UDragDropOperation*      DragOperation;
	} params = {};

	params.DragOperation = DragOperation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.FuelItemChecks
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Allow                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InventoryCell_C::FuelItemChecks(const struct FName& ID, bool* Allow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.FuelItemChecks"));

	struct
	{
		struct FName                   ID;
		bool                           Allow;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function BP_InventoryCell.BP_InventoryCell_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_InventoryCell_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.OnDrop"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
		bool                           ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_InventoryCell.BP_InventoryCell_C.HideOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::HideOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.HideOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.DragOverLayCheck
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MoveIcon_C*          Move_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryCell_C::DragOverLayCheck(class UBP_MoveIcon_C* Move_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.DragOverLayCheck"));

	struct
	{
		class UBP_MoveIcon_C*          Move_Widget;
	} params = {};

	params.Move_Widget = Move_Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.UpdateOverLay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MoveIcon_C*          Move_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryCell_C::UpdateOverLay(class UBP_MoveIcon_C* Move_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.UpdateOverLay"));

	struct
	{
		class UBP_MoveIcon_C*          Move_Widget;
	} params = {};

	params.Move_Widget = Move_Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.ShowCheckCellsOverlay
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>      Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_InventoryCell_C::ShowCheckCellsOverlay(TArray<struct FS_InvSlot>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.ShowCheckCellsOverlay"));

	struct
	{
		TArray<struct FS_InvSlot>      Array;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_InventoryCell.BP_InventoryCell_C.HideCheckCellsOverlay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::HideCheckCellsOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.HideCheckCellsOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.ShowGreenOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::ShowGreenOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.ShowGreenOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.ShowRedOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::ShowRedOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.ShowRedOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryCell_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.OnDragLeave"));

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params = {};

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.OnDragCancelled
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryCell_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.OnDragCancelled"));

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params = {};

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryCell_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.OnDragEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.ParentGridCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::ParentGridCreated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.ParentGridCreated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryCell.BP_InventoryCell_C.ExecuteUbergraph_BP_InventoryCell
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryCell_C::ExecuteUbergraph_BP_InventoryCell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.ExecuteUbergraph_BP_InventoryCell"));

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


// Function BP_InventoryCell.BP_InventoryCell_C.CreateDone__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCell_C::CreateDone__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryCell.BP_InventoryCell_C.CreateDone__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
