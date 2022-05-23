// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AISpawningVolume_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Reset AI
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class ACharacter*              AI_Character                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawningVolume_C::Reset_AI(const struct FHitResult& Hit_Result, class ACharacter* AI_Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Reset AI"));

	struct
	{
		struct FHitResult              Hit_Result;
		class ACharacter*              AI_Character;
	} params = {};

	params.Hit_Result = Hit_Result;
	params.AI_Character = AI_Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Find Spawn Location
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              Hit_Result                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

bool ABP_AISpawningVolume_C::Find_Spawn_Location(struct FHitResult* Hit_Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Find Spawn Location"));

	struct
	{
		bool                           ReturnValue;
		struct FHitResult              Hit_Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Hit_Result != nullptr)
		*Hit_Result = params.Hit_Result;

	return params.ReturnValue;
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Respawn Timer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawningVolume_C::Respawn_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Respawn Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Spawn Location Trace
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawningVolume_C::Spawn_Location_Trace(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Spawn Location Trace"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawningVolume_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AISpawningVolume_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Add AI Respawn Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              AI_Character                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawningVolume_C::Add_AI_Respawn_Timer(class ACharacter* AI_Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Add AI Respawn Timer"));

	struct
	{
		class ACharacter*              AI_Character;
	} params = {};

	params.AI_Character = AI_Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.AI Respawn Timer Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              AI_Character                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawningVolume_C::AI_Respawn_Timer_Finished(class ACharacter* AI_Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.AI Respawn Timer Finished"));

	struct
	{
		class ACharacter*              AI_Character;
	} params = {};

	params.AI_Character = AI_Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Reset Find Respawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawningVolume_C::Reset_Find_Respawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Reset Find Respawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Reset Proximity Activation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawningVolume_C::Reset_Proximity_Activation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Reset Proximity Activation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.BndEvt__Proximity Activation Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_AISpawningVolume_C::BndEvt__Proximity_Activation_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.BndEvt__Proximity Activation Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.BndEvt__Proximity Deactivation Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawningVolume_C::BndEvt__Proximity_Deactivation_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.BndEvt__Proximity Deactivation Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Reset Proximity Deactivation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawningVolume_C::Reset_Proximity_Deactivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Reset Proximity Deactivation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Restart Spawning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawningVolume_C::Restart_Spawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Restart Spawning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.Stop Spawning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawningVolume_C::Stop_Spawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.Stop Spawning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.RespawnAI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawningVolume_C::RespawnAI(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.RespawnAI"));

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


// Function BP_AISpawningVolume.BP_AISpawningVolume_C.ExecuteUbergraph_BP_AISpawningVolume
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawningVolume_C::ExecuteUbergraph_BP_AISpawningVolume(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawningVolume.BP_AISpawningVolume_C.ExecuteUbergraph_BP_AISpawningVolume"));

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
