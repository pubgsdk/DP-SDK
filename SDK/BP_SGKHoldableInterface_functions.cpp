// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKHoldableInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK Aimed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Aimed                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKHoldableInterface_C::SGK_Aimed(bool* Aimed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK Aimed"));

	struct
	{
		bool                           Aimed;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Aimed != nullptr)
		*Aimed = params.Aimed;
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK NewHeld
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Held                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKHoldableInterface_C::SGK_NewHeld(bool Held)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK NewHeld"));

	struct
	{
		bool                           Held;
	} params = {};

	params.Held = Held;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientToggleBuildMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKHoldableInterface_C::SGK_ClientToggleBuildMenu(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientToggleBuildMenu"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKHoldableInterface_C::SGK_HoldableRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK Character
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKHoldableInterface_C::SGK_Character()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK Character"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK MeleeCollisionToggle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TraceOn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKHoldableInterface_C::SGK_MeleeCollisionToggle(bool TraceOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK MeleeCollisionToggle"));

	struct
	{
		bool                           TraceOn;
	} params = {};

	params.TraceOn = TraceOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ResetHoldable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKHoldableInterface_C::SGK_ResetHoldable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ResetHoldable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ToggleFireMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKHoldableInterface_C::SGK_ToggleFireMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ToggleFireMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ChamberWeaponAmmo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKHoldableInterface_C::SGK_ChamberWeaponAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ChamberWeaponAmmo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK AttachNewAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_AttachmentType>  AttachmentType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKHoldableInterface_C::SGK_AttachNewAttachment(class ABP_MasterAttachment_C* Attachment, const struct FS_InvItem& InvItem, TEnumAsByte<E_AttachmentType> AttachmentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK AttachNewAttachment"));

	struct
	{
		class ABP_MasterAttachment_C*  Attachment;
		struct FS_InvItem              InvItem;
		TEnumAsByte<E_AttachmentType>  AttachmentType;
	} params = {};

	params.Attachment = Attachment;
	params.InvItem = InvItem;
	params.AttachmentType = AttachmentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ShowNewAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKHoldableInterface_C::SGK_ShowNewAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ShowNewAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientReloadChecks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKHoldableInterface_C::SGK_ClientReloadChecks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientReloadChecks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientSecondaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKHoldableInterface_C::SGK_ClientSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientSecondaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKHoldableInterface_C::SGK_ClientPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientPrimaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK SpawnAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ABP_MasterAttachment_C*/ Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKHoldableInterface_C::SGK_SpawnAttachment(class UClass* /*ABP_MasterAttachment_C*/ Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK SpawnAttachment"));

	struct
	{
		class UClass* /*ABP_MasterAttachment_C*/ Attachment;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKHoldableInterface_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableMesh"));

	struct
	{
		class UPrimitiveComponent*     Mesh;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableSkeletalMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKHoldableInterface_C::SGK_HoldableSkeletalMesh(class USkeletalMeshComponent** SkelMeshComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableSkeletalMesh"));

	struct
	{
		class USkeletalMeshComponent*  SkelMeshComp;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SkelMeshComp != nullptr)
		*SkelMeshComp = params.SkelMeshComp;
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ServerSecondaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKHoldableInterface_C::SGK_ServerSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ServerSecondaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ServerPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKHoldableInterface_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ServerPrimaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
