// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKInventoryInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateCharacterYaw
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKInventoryInterface_C::SGK_UpdateCharacterYaw(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateCharacterYaw"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK DestroyWeaponAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKInventoryInterface_C::SGK_DestroyWeaponAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK DestroyWeaponAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK AllowStartingItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowStartingItems             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKInventoryInterface_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK AllowStartingItems"));

	struct
	{
		bool                           AllowStartingItems;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = params.AllowStartingItems;
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SelfItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              SelfItem                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKInventoryInterface_C::SGK_SelfItem(struct FS_InvItem* SelfItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SelfItem"));

	struct
	{
		struct FS_InvItem              SelfItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelfItem != nullptr)
		*SelfItem = params.SelfItem;
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateAllAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKInventoryInterface_C::SGK_UpdateAllAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateAllAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Sounds>          SoundType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKInventoryInterface_C::SGK_ItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemSound"));

	struct
	{
		struct FName                   ItemId;
		TEnumAsByte<E_Sounds>          SoundType;
	} params = {};

	params.ItemId = ItemId;
	params.SoundType = SoundType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAdditionalChecks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKInventoryInterface_C::SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAdditionalChecks"));

	struct
	{
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ToggleComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKInventoryInterface_C::SGK_ToggleComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ToggleComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateSpecialSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKInventoryInterface_C::SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateSpecialSlot"));

	struct
	{
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemMovedInInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKInventoryInterface_C::SGK_ItemMovedInInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemMovedInInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SpawnOverflowItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKInventoryInterface_C::SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SpawnOverflowItems"));

	struct
	{
		struct FS_InvItem              InvItem;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AttachmentType>  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKInventoryInterface_C::SGK_RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAttachment"));

	struct
	{
		TEnumAsByte<E_AttachmentType>  Attachment;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ShowAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKInventoryInterface_C::SGK_ShowAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ShowAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK LoadWeaponAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKInventoryInterface_C::SGK_LoadWeaponAttachments(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK LoadWeaponAttachments"));

	struct
	{
		bool                           Visible;
	} params = {};

	params.Visible = Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
