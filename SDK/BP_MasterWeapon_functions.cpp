// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterWeapon.BP_MasterWeapon_C.AttackStanceCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowAttack                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterWeapon_C::AttackStanceCheck(bool* AllowAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.AttackStanceCheck"));

	struct
	{
		bool                           AllowAttack;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowAttack != nullptr)
		*AllowAttack = params.AllowAttack;
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.DurabilityCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterWeapon_C::DurabilityCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.DurabilityCheck"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.SpawnHitSurfaceParticle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_MasterWeapon_C::SpawnHitSurfaceParticle(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.SpawnHitSurfaceParticle"));

	struct
	{
		struct FHitResult              HitResult;
	} params = {};

	params.HitResult = HitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.SpawnHitSurfaceSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_MasterWeapon_C::SpawnHitSurfaceSound(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.SpawnHitSurfaceSound"));

	struct
	{
		struct FHitResult              HitResult;
	} params = {};

	params.HitResult = HitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.SpawnHitSurfaceDecal
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_MasterWeapon_C::SpawnHitSurfaceDecal(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.SpawnHitSurfaceDecal"));

	struct
	{
		struct FHitResult              HitResult;
	} params = {};

	params.HitResult = HitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.PlayDetachWeaponAnim
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_AttachmentDetails    AttachmentDetails              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterWeapon_C::PlayDetachWeaponAnim(class ABP_MasterAttachment_C* Attachment, const struct FS_AttachmentDetails& AttachmentDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.PlayDetachWeaponAnim"));

	struct
	{
		class ABP_MasterAttachment_C*  Attachment;
		struct FS_AttachmentDetails    AttachmentDetails;
		bool                           ReturnValue;
	} params = {};

	params.Attachment = Attachment;
	params.AttachmentDetails = AttachmentDetails;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.PlayAttachWeaponAnim
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_AttachmentDetails    AttachmentDetails              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterWeapon_C::PlayAttachWeaponAnim(class ABP_MasterAttachment_C* Attachment, const struct FS_AttachmentDetails& AttachmentDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.PlayAttachWeaponAnim"));

	struct
	{
		class ABP_MasterAttachment_C*  Attachment;
		struct FS_AttachmentDetails    AttachmentDetails;
		bool                           ReturnValue;
	} params = {};

	params.Attachment = Attachment;
	params.AttachmentDetails = AttachmentDetails;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.ApplyHitActorDamage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   HitBone                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_Damage>       Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_MasterWeapon_C::ApplyHitActorDamage(class AActor* HitActor, const struct FName& HitBone, TArray<struct FS_Damage>* Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.ApplyHitActorDamage"));

	struct
	{
		class AActor*                  HitActor;
		struct FName                   HitBone;
		TArray<struct FS_Damage>       Damage;
	} params = {};

	params.HitActor = HitActor;
	params.HitBone = HitBone;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.AddNewAttachment
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ABP_MasterAttachment_C*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvItem              AttachmentItem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           PlayAnim                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ABP_MasterAttachment_C*  NewAttachment                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::AddNewAttachment(class UClass* /*ABP_MasterAttachment_C*/ Class, const struct FS_InvItem& AttachmentItem, bool PlayAnim, class ABP_MasterAttachment_C** NewAttachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.AddNewAttachment"));

	struct
	{
		class UClass* /*ABP_MasterAttachment_C*/ Class;
		struct FS_InvItem              AttachmentItem;
		bool                           PlayAnim;
		class ABP_MasterAttachment_C*  NewAttachment;
	} params = {};

	params.Class = Class;
	params.AttachmentItem = AttachmentItem;
	params.PlayAnim = PlayAnim;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewAttachment != nullptr)
		*NewAttachment = params.NewAttachment;
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.ApplyWeaponAttachmentStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::ApplyWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.ApplyWeaponAttachmentStats"));

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


// Function BP_MasterWeapon.BP_MasterWeapon_C.RemoveWeaponAttchmentStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::RemoveWeaponAttchmentStats(class ABP_MasterAttachment_C* Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.RemoveWeaponAttchmentStats"));

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


// Function BP_MasterWeapon.BP_MasterWeapon_C.ApplyAttachmentDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Add                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterWeapon_C::ApplyAttachmentDamage(class ABP_MasterAttachment_C* Attachment, bool Add)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.ApplyAttachmentDamage"));

	struct
	{
		class ABP_MasterAttachment_C*  Attachment;
		bool                           Add;
	} params = {};

	params.Attachment = Attachment;
	params.Add = Add;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.OnNotifyEnd_8390FA13400A16AA738DBD972414B766
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::OnNotifyEnd_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.OnNotifyEnd_8390FA13400A16AA738DBD972414B766"));

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


// Function BP_MasterWeapon.BP_MasterWeapon_C.OnNotifyBegin_8390FA13400A16AA738DBD972414B766
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::OnNotifyBegin_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.OnNotifyBegin_8390FA13400A16AA738DBD972414B766"));

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


// Function BP_MasterWeapon.BP_MasterWeapon_C.OnInterrupted_8390FA13400A16AA738DBD972414B766
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::OnInterrupted_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.OnInterrupted_8390FA13400A16AA738DBD972414B766"));

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


// Function BP_MasterWeapon.BP_MasterWeapon_C.OnBlendOut_8390FA13400A16AA738DBD972414B766
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::OnBlendOut_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.OnBlendOut_8390FA13400A16AA738DBD972414B766"));

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


// Function BP_MasterWeapon.BP_MasterWeapon_C.OnCompleted_8390FA13400A16AA738DBD972414B766
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::OnCompleted_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.OnCompleted_8390FA13400A16AA738DBD972414B766"));

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


// Function BP_MasterWeapon.BP_MasterWeapon_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterWeapon_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.SGK AttachNewAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_AttachmentType>  AttachmentType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::SGK_AttachNewAttachment(class ABP_MasterAttachment_C* Attachment, const struct FS_InvItem& InvItem, TEnumAsByte<E_AttachmentType> AttachmentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.SGK AttachNewAttachment"));

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


// Function BP_MasterWeapon.BP_MasterWeapon_C.SGK ShowNewAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterWeapon_C::SGK_ShowNewAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.SGK ShowNewAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.MulticastPlayWeaponMeshAnimation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*       Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::MulticastPlayWeaponMeshAnimation(class UAnimSequenceBase* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.MulticastPlayWeaponMeshAnimation"));

	struct
	{
		class UAnimSequenceBase*       Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.MulticastPlayMontage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::MulticastPlayMontage(class UAnimMontage* Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.MulticastPlayMontage"));

	struct
	{
		class UAnimMontage*            Montage;
	} params = {};

	params.Montage = Montage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.WeaponNoiseEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterWeapon_C::WeaponNoiseEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.WeaponNoiseEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.MulticastHitSurfaceEffects
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_MasterWeapon_C::MulticastHitSurfaceEffects(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.MulticastHitSurfaceEffects"));

	struct
	{
		struct FHitResult              HitResult;
	} params = {};

	params.HitResult = HitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterWeapon.BP_MasterWeapon_C.ExecuteUbergraph_BP_MasterWeapon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterWeapon_C::ExecuteUbergraph_BP_MasterWeapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterWeapon.BP_MasterWeapon_C.ExecuteUbergraph_BP_MasterWeapon"));

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
