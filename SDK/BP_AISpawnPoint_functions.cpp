// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AISpawnPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AISpawnPoint.BP_AISpawnPoint_C.Respawn AI Actor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              AI_Character                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawnPoint_C::Respawn_AI_Actor(class ACharacter* AI_Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.Respawn AI Actor"));

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


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.Respawn Timer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawnPoint_C::Respawn_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.Respawn Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.Spawn AI Actor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawnPoint_C::Spawn_AI_Actor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.Spawn AI Actor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawnPoint_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AISpawnPoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.Start Spawning AI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawnPoint_C::Start_Spawning_AI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.Start Spawning AI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.Reset Proximity Activation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawnPoint_C::Reset_Proximity_Activation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.Reset Proximity Activation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.BndEvt__Proximity Activation Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_AISpawnPoint_C::BndEvt__Proximity_Activation_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.BndEvt__Proximity Activation Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));

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


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.BndEvt__Proximity Deactivation Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawnPoint_C::BndEvt__Proximity_Deactivation_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.BndEvt__Proximity Deactivation Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature"));

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


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.Reset Proximity Deactivation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawnPoint_C::Reset_Proximity_Deactivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.Reset Proximity Deactivation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.Spawn Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AISpawnPoint_C::Spawn_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.Spawn Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.Add AI Respawn Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              AI_Character                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawnPoint_C::Add_AI_Respawn_Timer(class ACharacter* AI_Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.Add AI Respawn Timer"));

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


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.AI Respawn Timer Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              AI_Character                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawnPoint_C::AI_Respawn_Timer_Finished(class ACharacter* AI_Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.AI Respawn Timer Finished"));

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


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.RespawnAI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawnPoint_C::RespawnAI(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.RespawnAI"));

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


// Function BP_AISpawnPoint.BP_AISpawnPoint_C.ExecuteUbergraph_BP_AISpawnPoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AISpawnPoint_C::ExecuteUbergraph_BP_AISpawnPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISpawnPoint.BP_AISpawnPoint_C.ExecuteUbergraph_BP_AISpawnPoint"));

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
