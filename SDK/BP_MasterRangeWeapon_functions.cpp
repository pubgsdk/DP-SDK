// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterRangeWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.UpdateBulletSpawnLocation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::UpdateBulletSpawnLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.UpdateBulletSpawnLocation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.AimedLookAt
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::AimedLookAt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.AimedLookAt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK Aimed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Aimed                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::SGK_Aimed(bool* Aimed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK Aimed"));

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


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK HoldableMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK HoldableMesh"));

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


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ApplyRangeWeaponAttachmentStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ApplyRangeWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ApplyRangeWeaponAttachmentStats"));

	struct
	{
		class ABP_MasterAttachment_C*  Attachment;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveRangeWeaponAttachmentStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::RemoveRangeWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveRangeWeaponAttachmentStats"));

	struct
	{
		class ABP_MasterAttachment_C*  Attachment;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CalculateWeaponSway
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::CalculateWeaponSway()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CalculateWeaponSway"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveMagazineChecks
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              NewMagSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::RemoveMagazineChecks(const struct FS_InvSlot& NewMagSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveMagazineChecks"));

	struct
	{
		struct FS_InvSlot              NewMagSlot;
	} params = {};

	params.NewMagSlot = NewMagSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ChamberAmmoCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AmmoFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::ChamberAmmoCheck(bool* AmmoFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ChamberAmmoCheck"));

	struct
	{
		bool                           AmmoFound;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AmmoFound != nullptr)
		*AmmoFound = params.AmmoFound;
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.IncreaseSpread
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          IncreaseAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::IncreaseSpread(float IncreaseAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.IncreaseSpread"));

	struct
	{
		float                          IncreaseAmount;
	} params = {};

	params.IncreaseAmount = IncreaseAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.UpdateMinSpread
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterState>  CharacterState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::UpdateMinSpread(TEnumAsByte<E_CharacterState> CharacterState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.UpdateMinSpread"));

	struct
	{
		TEnumAsByte<E_CharacterState>  CharacterState;
	} params = {};

	params.CharacterState = CharacterState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.DecreaseSpread
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::DecreaseSpread(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.DecreaseSpread"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.HitscanTraces
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::HitscanTraces()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.HitscanTraces"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ProjectileCalculation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ProjectileCalculation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ProjectileCalculation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimeLine__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ADSCameraTimeLine__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimeLine__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimeLine__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ADSCameraTimeLine__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimeLine__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyEnd_50B07BB945ECC720DEA04E837F2E618D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnNotifyEnd_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyEnd_50B07BB945ECC720DEA04E837F2E618D"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyBegin_50B07BB945ECC720DEA04E837F2E618D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnNotifyBegin_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyBegin_50B07BB945ECC720DEA04E837F2E618D"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnInterrupted_50B07BB945ECC720DEA04E837F2E618D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnInterrupted_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnInterrupted_50B07BB945ECC720DEA04E837F2E618D"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnBlendOut_50B07BB945ECC720DEA04E837F2E618D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnBlendOut_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnBlendOut_50B07BB945ECC720DEA04E837F2E618D"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnCompleted_50B07BB945ECC720DEA04E837F2E618D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnCompleted_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnCompleted_50B07BB945ECC720DEA04E837F2E618D"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyEnd_917101B3417C952AA8CFB6B82351D5EB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnNotifyEnd_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyEnd_917101B3417C952AA8CFB6B82351D5EB"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyBegin_917101B3417C952AA8CFB6B82351D5EB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnNotifyBegin_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyBegin_917101B3417C952AA8CFB6B82351D5EB"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnInterrupted_917101B3417C952AA8CFB6B82351D5EB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnInterrupted_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnInterrupted_917101B3417C952AA8CFB6B82351D5EB"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnBlendOut_917101B3417C952AA8CFB6B82351D5EB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnBlendOut_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnBlendOut_917101B3417C952AA8CFB6B82351D5EB"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnCompleted_917101B3417C952AA8CFB6B82351D5EB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnCompleted_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnCompleted_917101B3417C952AA8CFB6B82351D5EB"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientSetReload
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Reload                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::ClientSetReload(bool Reload)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientSetReload"));

	struct
	{
		bool                           Reload;
	} params = {};

	params.Reload = Reload;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerPartReloadChecks
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ServerPartReloadChecks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerPartReloadChecks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ChamberWeaponAmmo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::SGK_ChamberWeaponAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ChamberWeaponAmmo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerReloadChecks
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ServerReloadChecks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerReloadChecks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientReloadChecks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::SGK_ClientReloadChecks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientReloadChecks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ToggleFireMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::SGK_ToggleFireMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ToggleFireMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerChamberCheckes
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ServerChamberCheckes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerChamberCheckes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::SGK_ClientPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientPrimaryAction"));

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


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ServerPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ServerPrimaryAction"));

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


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerExitAim
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ClientExit                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::ServerExitAim(bool ClientExit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerExitAim"));

	struct
	{
		bool                           ClientExit;
	} params = {};

	params.ClientExit = ClientExit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimelineReverse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ADSCameraTimelineReverse()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimelineReverse"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientExitAim
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ClientExitAim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientExitAim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientSecondaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::SGK_ClientSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientSecondaryAction"));

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


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ServerSecondaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::SGK_ServerSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ServerSecondaryAction"));

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


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ResetHoldable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::SGK_ResetHoldable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ResetHoldable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveWeaponAttchmentStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::RemoveWeaponAttchmentStats(class ABP_MasterAttachment_C* Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveWeaponAttchmentStats"));

	struct
	{
		class ABP_MasterAttachment_C*  Attachment;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ApplyWeaponAttachmentStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ApplyWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ApplyWeaponAttachmentStats"));

	struct
	{
		class ABP_MasterAttachment_C*  Attachment;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerUpdateBulletLocation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ServerUpdateBulletLocation(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerUpdateBulletLocation"));

	struct
	{
		struct FVector                 Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientOwnerFireEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ClientOwnerFireEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientOwnerFireEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastFireEffects
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::MulticastFireEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastFireEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientFireWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ClientFireWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientFireWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastProjectileSpawn
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   AmmoID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::MulticastProjectileSpawn(const struct FVector& Location, const struct FRotator& Rotation, const struct FName& AmmoID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastProjectileSpawn"));

	struct
	{
		struct FVector                 Location;
		struct FRotator                Rotation;
		struct FName                   AmmoID;
	} params = {};

	params.Location = Location;
	params.Rotation = Rotation;
	params.AmmoID = AmmoID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerFireWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ServerFireWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerFireWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CharacterSprinting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Sprinting                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::CharacterSprinting(bool Sprinting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CharacterSprinting"));

	struct
	{
		bool                           Sprinting;
	} params = {};

	params.Sprinting = Sprinting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CharacterFalling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::CharacterFalling()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CharacterFalling"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerUpdateTraceStart
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Relative                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterRangeWeapon_C::ServerUpdateTraceStart(const struct FVector& Location, bool Relative)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerUpdateTraceStart"));

	struct
	{
		struct FVector                 Location;
		bool                           Relative;
	} params = {};

	params.Location = Location;
	params.Relative = Relative;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CalculateHoldableSway
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::CalculateHoldableSway()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CalculateHoldableSway"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastDebugSphere
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::MulticastDebugSphere(const struct FVector& Center)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastDebugSphere"));

	struct
	{
		struct FVector                 Center;
	} params = {};

	params.Center = Center;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastDebugLine
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 LineStart                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 LineEnd                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::MulticastDebugLine(const struct FVector& LineStart, const struct FVector& LineEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastDebugLine"));

	struct
	{
		struct FVector                 LineStart;
		struct FVector                 LineEnd;
	} params = {};

	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientOwnerNoAmmoSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ClientOwnerNoAmmoSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientOwnerNoAmmoSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastNoAmmoSound
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::MulticastNoAmmoSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastNoAmmoSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterRangeWeapon_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ExecuteUbergraph_BP_MasterRangeWeapon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ExecuteUbergraph_BP_MasterRangeWeapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ExecuteUbergraph_BP_MasterRangeWeapon"));

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
