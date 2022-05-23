// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AIMasterHoldable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Update Melee Hit
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AIMasterHoldable_C::Update_Melee_Hit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Update Melee Hit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Add Current Ammo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Add_Amount                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::Add_Current_Ammo(int Add_Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Add Current Ammo"));

	struct
	{
		int                            Add_Amount;
	} params = {};

	params.Add_Amount = Add_Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Remove Total Ammo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Remove_Ammo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Removed_All                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Remaining_Ammo                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::Remove_Total_Ammo(int Remove_Ammo, bool* Removed_All, int* Remaining_Ammo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Remove Total Ammo"));

	struct
	{
		int                            Remove_Ammo;
		bool                           Removed_All;
		int                            Remaining_Ammo;
	} params = {};

	params.Remove_Ammo = Remove_Ammo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Removed_All != nullptr)
		*Removed_All = params.Removed_All;
	if (Remaining_Ammo != nullptr)
		*Remaining_Ammo = params.Remaining_Ammo;
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Total Ammo Check
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Has_Ammo                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::Total_Ammo_Check(bool* Has_Ammo, int* Ammo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Total Ammo Check"));

	struct
	{
		bool                           Has_Ammo;
		int                            Ammo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Has_Ammo != nullptr)
		*Has_Ammo = params.Has_Ammo;
	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Remove Current Ammo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Remove_Amount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::Remove_Current_Ammo(int Remove_Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Remove Current Ammo"));

	struct
	{
		int                            Remove_Amount;
	} params = {};

	params.Remove_Amount = Remove_Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Current Ammo Check
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Has_Ammo                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::Current_Ammo_Check(bool* Has_Ammo, int* Ammo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Current Ammo Check"));

	struct
	{
		bool                           Has_Ammo;
		int                            Ammo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Has_Ammo != nullptr)
		*Has_Ammo = params.Has_Ammo;
	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Melee Hit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Hit_Actor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Hit_Component                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Bone_Name                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_AIMasterHoldable_C::Melee_Hit(class AActor* Hit_Actor, class UPrimitiveComponent* Hit_Component, const struct FName& Bone_Name, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Melee Hit"));

	struct
	{
		class AActor*                  Hit_Actor;
		class UPrimitiveComponent*     Hit_Component;
		struct FName                   Bone_Name;
		struct FHitResult              Hit;
	} params = {};

	params.Hit_Actor = Hit_Actor;
	params.Hit_Component = Hit_Component;
	params.Bone_Name = Bone_Name;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnNotifyEnd_4840180348DE7FAC42113FADB8E440A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::OnNotifyEnd_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnNotifyEnd_4840180348DE7FAC42113FADB8E440A3"));

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


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnNotifyBegin_4840180348DE7FAC42113FADB8E440A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::OnNotifyBegin_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnNotifyBegin_4840180348DE7FAC42113FADB8E440A3"));

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


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnInterrupted_4840180348DE7FAC42113FADB8E440A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::OnInterrupted_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnInterrupted_4840180348DE7FAC42113FADB8E440A3"));

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


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnBlendOut_4840180348DE7FAC42113FADB8E440A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::OnBlendOut_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnBlendOut_4840180348DE7FAC42113FADB8E440A3"));

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


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnCompleted_4840180348DE7FAC42113FADB8E440A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::OnCompleted_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.OnCompleted_4840180348DE7FAC42113FADB8E440A3"));

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


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AIMasterHoldable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Multicast Play Skeletal Mesh Montage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::Multicast_Play_Skeletal_Mesh_Montage(class UAnimMontage* Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Multicast Play Skeletal Mesh Montage"));

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


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server Play Shoot Montage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AIMasterHoldable_C::Server_Play_Shoot_Montage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server Play Shoot Montage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server Range Attack Muzzle Effect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_AIMasterHoldable_C::Server_Range_Attack_Muzzle_Effect(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server Range Attack Muzzle Effect"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Multicast Range Attack Effects
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_AIMasterHoldable_C::Multicast_Range_Attack_Effects(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Multicast Range Attack Effects"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server Play Skeletal Mesh Montage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::Server_Play_Skeletal_Mesh_Montage(class UAnimMontage* Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server Play Skeletal Mesh Montage"));

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


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server End Melee Attack
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AIMasterHoldable_C::Server_End_Melee_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server End Melee Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server Melee Attack
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AIMasterHoldable_C::Server_Melee_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Server Melee Attack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Multicast Melee Emitter
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_AIMasterHoldable_C::Multicast_Melee_Emitter(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.Multicast Melee Emitter"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.ExecuteUbergraph_BP_AIMasterHoldable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIMasterHoldable_C::ExecuteUbergraph_BP_AIMasterHoldable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIMasterHoldable.BP_AIMasterHoldable_C.ExecuteUbergraph_BP_AIMasterHoldable"));

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
