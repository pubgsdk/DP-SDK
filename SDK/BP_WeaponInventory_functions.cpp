// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponInventory.BP_WeaponInventory_C.AddAttachmentUsingPlayers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::AddAttachmentUsingPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.AddAttachmentUsingPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.ReplicateContainingInventories
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Replicate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_WeaponInventory_C::ReplicateContainingInventories(bool Replicate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.ReplicateContainingInventories"));

	struct
	{
		bool                           Replicate;
	} params = {};

	params.Replicate = Replicate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.AmmoTypeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_WeaponInventory_C::AmmoTypeCheck(const struct FS_InvItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.AmmoTypeCheck"));

	struct
	{
		struct FS_InvItem              Item;
		bool                           ReturnValue;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.ChamberRoundFromMag
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::ChamberRoundFromMag()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.ChamberRoundFromMag"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.TotalAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UBP_WeaponInventory_C::TotalAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.TotalAmmo"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.TotalMaxAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaxAmmo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponInventory_C::TotalMaxAmmo(int* MaxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.TotalMaxAmmo"));

	struct
	{
		int                            MaxAmmo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MaxAmmo != nullptr)
		*MaxAmmo = params.MaxAmmo;
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.NextRound
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvSlot              Item                           (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

bool UBP_WeaponInventory_C::NextRound(struct FS_InvSlot* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.NextRound"));

	struct
	{
		bool                           ReturnValue;
		struct FS_InvSlot              Item;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.SelectAttachmentItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_AttachmentType>  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_AttachmentSlot       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

struct FS_AttachmentSlot UBP_WeaponInventory_C::SelectAttachmentItem(TEnumAsByte<E_AttachmentType> Attachment, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.SelectAttachmentItem"));

	struct
	{
		TEnumAsByte<E_AttachmentType>  Attachment;
		bool                           IsValid;
		struct FS_AttachmentSlot       ReturnValue;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.UpdateAllAttachments
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_AttachmentSlot> Attachments                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_WeaponInventory_C::UpdateAllAttachments(TArray<struct FS_AttachmentSlot>* Attachments)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.UpdateAllAttachments"));

	struct
	{
		TArray<struct FS_AttachmentSlot> Attachments;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Attachments != nullptr)
		*Attachments = params.Attachments;
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.AddWeaponAttachment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           PlayAnim                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_WeaponInventory_C::AddWeaponAttachment(const struct FS_InvItem& InvItem, bool PlayAnim)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.AddWeaponAttachment"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           PlayAnim;
	} params = {};

	params.InvItem = InvItem;
	params.PlayAnim = PlayAnim;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.UpdateAllClientAttachments
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::UpdateAllClientAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.UpdateAllClientAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.RemoveAttachment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AttachmentType>  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponInventory_C::RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.RemoveAttachment"));

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


// Function BP_WeaponInventory.BP_WeaponInventory_C.LoadSavedAttachments
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_AttachmentSaveSlot> Attachments                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FS_OtherInvSaves> OtherInventorys                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_WeaponInventory_C::LoadSavedAttachments(TArray<struct FS_AttachmentSaveSlot>* Attachments, TArray<struct FS_OtherInvSaves>* OtherInventorys)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.LoadSavedAttachments"));

	struct
	{
		TArray<struct FS_AttachmentSaveSlot> Attachments;
		TArray<struct FS_OtherInvSaves> OtherInventorys;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Attachments != nullptr)
		*Attachments = params.Attachments;
	if (OtherInventorys != nullptr)
		*OtherInventorys = params.OtherInventorys;
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.AddDefaultAttachments
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::AddDefaultAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.AddDefaultAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.CreateAllAttachments
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::CreateAllAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.CreateAllAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.UpdateAttachmentItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AttachmentType>  AttachmentType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvItem              AttachmentItem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponInventory_C::UpdateAttachmentItem(TEnumAsByte<E_AttachmentType> AttachmentType, const struct FS_InvItem& AttachmentItem, class ABP_MasterAttachment_C* Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.UpdateAttachmentItem"));

	struct
	{
		TEnumAsByte<E_AttachmentType>  AttachmentType;
		struct FS_InvItem              AttachmentItem;
		class ABP_MasterAttachment_C*  Attachment;
	} params = {};

	params.AttachmentType = AttachmentType;
	params.AttachmentItem = AttachmentItem;
	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.SGK UpdateAllAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::SGK_UpdateAllAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.SGK UpdateAllAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.MulticastUpdateAttachmentItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AttachmentType>  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class ABP_MasterAttachment_C*  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponInventory_C::MulticastUpdateAttachmentItem(TEnumAsByte<E_AttachmentType> Attachment, const struct FS_InvItem& Item, class ABP_MasterAttachment_C* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.MulticastUpdateAttachmentItem"));

	struct
	{
		TEnumAsByte<E_AttachmentType>  Attachment;
		struct FS_InvItem              Item;
		class ABP_MasterAttachment_C*  Actor;
	} params = {};

	params.Attachment = Attachment;
	params.Item = Item;
	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.ServerAddWeaponAttachment
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              AttachmentItem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           AnimationSocket                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_WeaponInventory_C::ServerAddWeaponAttachment(const struct FS_InvItem& AttachmentItem, bool AnimationSocket)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.ServerAddWeaponAttachment"));

	struct
	{
		struct FS_InvItem              AttachmentItem;
		bool                           AnimationSocket;
	} params = {};

	params.AttachmentItem = AttachmentItem;
	params.AnimationSocket = AnimationSocket;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.SGK LoadWeaponAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_WeaponInventory_C::SGK_LoadWeaponAttachments(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.SGK LoadWeaponAttachments"));

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


// Function BP_WeaponInventory.BP_WeaponInventory_C.UpdateAttachmentUsingPlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::UpdateAttachmentUsingPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.UpdateAttachmentUsingPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.SGK RemoveAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AttachmentType>  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponInventory_C::SGK_RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.SGK RemoveAttachment"));

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


// Function BP_WeaponInventory.BP_WeaponInventory_C.SGK ShowAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::SGK_ShowAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.SGK ShowAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.SGK DestroyWeaponAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::SGK_DestroyWeaponAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.SGK DestroyWeaponAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_WeaponInventory_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponInventory.BP_WeaponInventory_C.ExecuteUbergraph_BP_WeaponInventory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponInventory_C::ExecuteUbergraph_BP_WeaponInventory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponInventory.BP_WeaponInventory_C.ExecuteUbergraph_BP_WeaponInventory"));

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
