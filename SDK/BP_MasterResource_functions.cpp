// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterResource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterResource.BP_MasterResource_C.ResourceSetup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterResource_C::ResourceSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.ResourceSetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.LoadResourceSaveGame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterResource_C::LoadResourceSaveGame(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.LoadResourceSaveGame"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
	} params = {};

	params.SaveGame = SaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.RemoveInstance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              InTransform                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UStaticMesh*             StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterResource_C::RemoveInstance(const struct FTransform& InTransform, class UStaticMesh* StaticMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.RemoveInstance"));

	struct
	{
		struct FTransform              InTransform;
		class UStaticMesh*             StaticMesh;
	} params = {};

	params.InTransform = InTransform;
	params.StaticMesh = StaticMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.GetInstanceAtTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              InTransform                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UStaticMesh*             StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_MasterResourceComponent_C* ResourceInstance               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InstanceIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool ABP_MasterResource_C::GetInstanceAtTransform(const struct FTransform& InTransform, class UStaticMesh* StaticMesh, class UBP_MasterResourceComponent_C** ResourceInstance, int* InstanceIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.GetInstanceAtTransform"));

	struct
	{
		struct FTransform              InTransform;
		class UStaticMesh*             StaticMesh;
		bool                           ReturnValue;
		class UBP_MasterResourceComponent_C* ResourceInstance;
		int                            InstanceIndex;
	} params = {};

	params.InTransform = InTransform;
	params.StaticMesh = StaticMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ResourceInstance != nullptr)
		*ResourceInstance = params.ResourceInstance;
	if (InstanceIndex != nullptr)
		*InstanceIndex = params.InstanceIndex;

	return params.ReturnValue;
}


// Function BP_MasterResource.BP_MasterResource_C.StartRespawnTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterResource_C::StartRespawnTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.StartRespawnTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.RespawnResource
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterResource_C::RespawnResource()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.RespawnResource"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.CollectResource
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CollectAmount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ResourceDepleted               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterResource_C::CollectResource(int CollectAmount, class UBP_PlayerInventory_C* PlayerInventory, bool* ResourceDepleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.CollectResource"));

	struct
	{
		int                            CollectAmount;
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           ResourceDepleted;
	} params = {};

	params.CollectAmount = CollectAmount;
	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ResourceDepleted != nullptr)
		*ResourceDepleted = params.ResourceDepleted;
}


// Function BP_MasterResource.BP_MasterResource_C.StartHideResourceTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterResource_C::StartHideResourceTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.StartHideResourceTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.ShowResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterResource_C::ShowResource()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.ShowResource"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.HideResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterResource_C::HideResource()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.HideResource"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.FallOverEffectTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MasterResource_C::FallOverEffectTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.FallOverEffectTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.FallOverEffectTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MasterResource_C::FallOverEffectTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.FallOverEffectTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.MulticastResetRotation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterResource_C::MulticastResetRotation(const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.MulticastResetRotation"));

	struct
	{
		struct FRotator                Rotation;
	} params = {};

	params.Rotation = Rotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.MulticastPlayDepletedSound
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterResource_C::MulticastPlayDepletedSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.MulticastPlayDepletedSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.FallOverEffect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 CharacterLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterResource_C::FallOverEffect(const struct FVector& CharacterLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.FallOverEffect"));

	struct
	{
		struct FVector                 CharacterLocation;
	} params = {};

	params.CharacterLocation = CharacterLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.RunResourceDepleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterResource_C::RunResourceDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.RunResourceDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.Load
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterResource_C::Load(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.Load"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
	} params = {};

	params.SaveGame = SaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.MulticastSetCollision
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           EnableCollision                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterResource_C::MulticastSetCollision(bool EnableCollision)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.MulticastSetCollision"));

	struct
	{
		bool                           EnableCollision;
	} params = {};

	params.EnableCollision = EnableCollision;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.SGKSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterResource_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.SGKSave"));

	struct
	{
		class UBP_SGKSaveGame_C*       Save;
	} params = {};

	params.Save = Save;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterResource_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterResource.BP_MasterResource_C.ExecuteUbergraph_BP_MasterResource
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterResource_C::ExecuteUbergraph_BP_MasterResource(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterResource.BP_MasterResource_C.ExecuteUbergraph_BP_MasterResource"));

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
