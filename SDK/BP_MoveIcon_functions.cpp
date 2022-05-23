// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MoveIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveQuickSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            ItemSlotID                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MoveIcon_C::InitilalizeMoveQuickSlot(const struct FS_InvSlotID& ItemSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveQuickSlot"));

	struct
	{
		struct FS_InvSlotID            ItemSlotID;
	} params = {};

	params.ItemSlotID = ItemSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.SetMoveIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_ItemDetails          ItemDetails                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MoveIcon_C::SetMoveIcon(const struct FS_ItemDetails& ItemDetails, bool Rotated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.SetMoveIcon"));

	struct
	{
		struct FS_ItemDetails          ItemDetails;
		bool                           Rotated;
	} params = {};

	params.ItemDetails = ItemDetails;
	params.Rotated = Rotated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.InitializeMoveAttachmentItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AttachmentSlotID     AttachmentID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MoveIcon_C::InitializeMoveAttachmentItem(const struct FS_AttachmentSlotID& AttachmentID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.InitializeMoveAttachmentItem"));

	struct
	{
		struct FS_AttachmentSlotID     AttachmentID;
	} params = {};

	params.AttachmentID = AttachmentID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveWeaponItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         WeaponSlotID                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MoveIcon_C::InitilalizeMoveWeaponItem(const struct FS_WeaponSlotID& WeaponSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveWeaponItem"));

	struct
	{
		struct FS_WeaponSlotID         WeaponSlotID;
	} params = {};

	params.WeaponSlotID = WeaponSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.InitializeMoveItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            ItemSlotID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MoveIcon_C::InitializeMoveItem(const struct FS_InvSlotID& ItemSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.InitializeMoveItem"));

	struct
	{
		struct FS_InvSlotID            ItemSlotID;
	} params = {};

	params.ItemSlotID = ItemSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveEquipmentItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_EquipmentSlotID      EquipmentSlotID                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MoveIcon_C::InitilalizeMoveEquipmentItem(const struct FS_EquipmentSlotID& EquipmentSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveEquipmentItem"));

	struct
	{
		struct FS_EquipmentSlotID      EquipmentSlotID;
	} params = {};

	params.EquipmentSlotID = EquipmentSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MoveIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MoveIcon_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.RotateWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MoveIcon_C::RotateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.RotateWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MoveIcon.BP_MoveIcon_C.ExecuteUbergraph_BP_MoveIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MoveIcon_C::ExecuteUbergraph_BP_MoveIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MoveIcon.BP_MoveIcon_C.ExecuteUbergraph_BP_MoveIcon"));

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
