// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterMeleeWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.AimTrace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Headshot                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterMeleeWeapon_C::AimTrace(bool* Headshot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.AimTrace"));

	struct
	{
		bool                           Headshot;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Headshot != nullptr)
		*Headshot = params.Headshot;
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ResetSwing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterMeleeWeapon_C::ResetSwing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ResetSwing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SweepTrace
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterMeleeWeapon_C::SweepTrace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SweepTrace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.RandomMeleeAttackAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            AttackAnimation                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::RandomMeleeAttackAnimation(class UAnimMontage** AttackAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.RandomMeleeAttackAnimation"));

	struct
	{
		class UAnimMontage*            AttackAnimation;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AttackAnimation != nullptr)
		*AttackAnimation = params.AttackAnimation;
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnNotifyEnd_1830005C47917F94146466A299473C2F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnNotifyEnd_1830005C47917F94146466A299473C2F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnNotifyEnd_1830005C47917F94146466A299473C2F"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnNotifyBegin_1830005C47917F94146466A299473C2F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnNotifyBegin_1830005C47917F94146466A299473C2F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnNotifyBegin_1830005C47917F94146466A299473C2F"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnInterrupted_1830005C47917F94146466A299473C2F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnInterrupted_1830005C47917F94146466A299473C2F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnInterrupted_1830005C47917F94146466A299473C2F"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnBlendOut_1830005C47917F94146466A299473C2F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnBlendOut_1830005C47917F94146466A299473C2F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnBlendOut_1830005C47917F94146466A299473C2F"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnCompleted_1830005C47917F94146466A299473C2F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnCompleted_1830005C47917F94146466A299473C2F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnCompleted_1830005C47917F94146466A299473C2F"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnNotifyEnd_F410FBF64DC7B024F21B25AE37B2912E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnNotifyEnd_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnNotifyEnd_F410FBF64DC7B024F21B25AE37B2912E"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnNotifyBegin_F410FBF64DC7B024F21B25AE37B2912E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnNotifyBegin_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnNotifyBegin_F410FBF64DC7B024F21B25AE37B2912E"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnInterrupted_F410FBF64DC7B024F21B25AE37B2912E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnInterrupted_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnInterrupted_F410FBF64DC7B024F21B25AE37B2912E"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnBlendOut_F410FBF64DC7B024F21B25AE37B2912E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnBlendOut_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnBlendOut_F410FBF64DC7B024F21B25AE37B2912E"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnCompleted_F410FBF64DC7B024F21B25AE37B2912E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::OnCompleted_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.OnCompleted_F410FBF64DC7B024F21B25AE37B2912E"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ServerReplaceInstance
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterResourceComponent_C* Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Instance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInv                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::ServerReplaceInstance(class UBP_MasterResourceComponent_C* Resource, int Instance, class UBP_PlayerInventory_C* PlayerInv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ServerReplaceInstance"));

	struct
	{
		class UBP_MasterResourceComponent_C* Resource;
		int                            Instance;
		class UBP_PlayerInventory_C*   PlayerInv;
	} params = {};

	params.Resource = Resource;
	params.Instance = Instance;
	params.PlayerInv = PlayerInv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ClientResetSwing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterMeleeWeapon_C::ClientResetSwing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ClientResetSwing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ServerCollectResource
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterResource_C*    Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInv                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::ServerCollectResource(class ABP_MasterResource_C* Resource, class UBP_PlayerInventory_C* PlayerInv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ServerCollectResource"));

	struct
	{
		class ABP_MasterResource_C*    Resource;
		class UBP_PlayerInventory_C*   PlayerInv;
	} params = {};

	params.Resource = Resource;
	params.PlayerInv = PlayerInv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ReduceHeldDurability
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterMeleeWeapon_C::ReduceHeldDurability()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ReduceHeldDurability"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SGK ResetHoldable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterMeleeWeapon_C::SGK_ResetHoldable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SGK ResetHoldable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SGK MeleeCollisionToggle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TraceOn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterMeleeWeapon_C::SGK_MeleeCollisionToggle(bool TraceOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SGK MeleeCollisionToggle"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SGK ServerSecondaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterMeleeWeapon_C::SGK_ServerSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SGK ServerSecondaryAction"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ServerApplyHitActorDamage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Bone                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_Damage>       Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_MasterMeleeWeapon_C::ServerApplyHitActorDamage(class AActor* Actor, const struct FName& Bone, TArray<struct FS_Damage> Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ServerApplyHitActorDamage"));

	struct
	{
		class AActor*                  Actor;
		struct FName                   Bone;
		TArray<struct FS_Damage>       Damage;
	} params = {};

	params.Actor = Actor;
	params.Bone = Bone;
	params.Damage = Damage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SGK ServerPrimaryAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterMeleeWeapon_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.SGK ServerPrimaryAction"));

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


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.MulticastMeleeAttackMontage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AnimIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::MulticastMeleeAttackMontage(int AnimIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.MulticastMeleeAttackMontage"));

	struct
	{
		int                            AnimIndex;
	} params = {};

	params.AnimIndex = AnimIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ExecuteUbergraph_BP_MasterMeleeWeapon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterMeleeWeapon_C::ExecuteUbergraph_BP_MasterMeleeWeapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C.ExecuteUbergraph_BP_MasterMeleeWeapon"));

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
