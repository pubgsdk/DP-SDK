// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InventoryItemIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.LoadGameSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryItemIcon_C::LoadGameSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.LoadGameSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnMouseDoubleClick
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_InventoryItemIcon_C::OnMouseDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnMouseDoubleClick"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryItemIcon_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnDragDetected"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_InventoryItemIcon_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.GetInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FS_InvSlot>      Inventory                      (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_InventoryItemIcon_C::GetInventory(TArray<struct FS_InvSlot>* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.GetInventory"));

	struct
	{
		TArray<struct FS_InvSlot>      Inventory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.Deactive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryItemIcon_C::Deactive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.Deactive"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateCurrentItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryItemIcon_C::UpdateCurrentItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateCurrentItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateNameText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Item_Valid                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_InventoryItemIcon_C::UpdateNameText(bool Item_Valid, const struct FS_InvItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateNameText"));

	struct
	{
		bool                           Item_Valid;
		struct FS_InvItem              Item;
	} params = {};

	params.Item_Valid = Item_Valid;
	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.IsItemValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsItemValid                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InventoryItemIcon_C::IsItemValid(bool* IsItemValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.IsItemValid"));

	struct
	{
		bool                           IsItemValid;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsItemValid != nullptr)
		*IsItemValid = params.IsItemValid;
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.GetCurrentItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_InventoryItemIcon_C::GetCurrentItem(struct FS_InvItem* InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.GetCurrentItem"));

	struct
	{
		struct FS_InvItem              InvItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InvItem != nullptr)
		*InvItem = params.InvItem;
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ItemValid                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_InventoryItemIcon_C::UpdateCount(bool ItemValid, const struct FS_InvItem& InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateCount"));

	struct
	{
		bool                           ItemValid;
		struct FS_InvItem              InvItem;
	} params = {};

	params.ItemValid = ItemValid;
	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.SetIconSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InventoryItemIcon_C::SetIconSize(int Height, int Width, bool Rotated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.SetIconSize"));

	struct
	{
		int                            Height;
		int                            Width;
		bool                           Rotated;
	} params = {};

	params.Height = Height;
	params.Width = Width;
	params.Rotated = Rotated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ItemValid                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InventoryItemIcon_C::UpdateIcon(bool ItemValid, const struct FS_InvItem& InvItem, bool Rotated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateIcon"));

	struct
	{
		bool                           ItemValid;
		struct FS_InvItem              InvItem;
		bool                           Rotated;
	} params = {};

	params.ItemValid = ItemValid;
	params.InvItem = InvItem;
	params.Rotated = Rotated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_InventoryItemIcon_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_InventoryItemIcon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryItemIcon_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.OnDragEnter"));

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


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_InventoryItemIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryItemIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.StopAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryItemIcon_C::StopAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.StopAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.StartAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryItemIcon_C::StartAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.StartAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateItemCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryItemIcon_C::UpdateItemCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.UpdateItemCount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.ExecuteUbergraph_BP_InventoryItemIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryItemIcon_C::ExecuteUbergraph_BP_InventoryItemIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.ExecuteUbergraph_BP_InventoryItemIcon"));

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


// Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.CreateDone__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryItemIcon_C::CreateDone__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryItemIcon.BP_InventoryItemIcon_C.CreateDone__DelegateSignature"));

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
