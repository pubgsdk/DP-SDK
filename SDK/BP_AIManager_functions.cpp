// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AIManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AIManager.BP_AIManager_C.Return AI Manager Settings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AIOptimization       AI_Settings                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIManager_C::Return_AI_Manager_Settings(struct FS_AIOptimization* AI_Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Return AI Manager Settings"));

	struct
	{
		struct FS_AIOptimization       AI_Settings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AI_Settings != nullptr)
		*AI_Settings = params.AI_Settings;
}


// Function BP_AIManager.BP_AIManager_C.Return AI Manager
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_AIManager_C*         AI_Manager                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIManager_C::Return_AI_Manager(class ABP_AIManager_C** AI_Manager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Return AI Manager"));

	struct
	{
		class ABP_AIManager_C*         AI_Manager;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AI_Manager != nullptr)
		*AI_Manager = params.AI_Manager;
}


// Function BP_AIManager.BP_AIManager_C.Respawn AI At Location
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIManager_C::Respawn_AI_At_Location(const struct FVector& Location, class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Respawn AI At Location"));

	struct
	{
		struct FVector                 Location;
		class APawn*                   Pawn;
	} params = {};

	params.Location = Location;
	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIManager.BP_AIManager_C.Find Respawn Location
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Location_Found                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 OutHit                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIManager_C::Find_Respawn_Location(bool* Location_Found, struct FVector* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Find Respawn Location"));

	struct
	{
		bool                           Location_Found;
		struct FVector                 OutHit;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Location_Found != nullptr)
		*Location_Found = params.Location_Found;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
}


// Function BP_AIManager.BP_AIManager_C.Spawn AI At Location
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AIManager_C::Spawn_AI_At_Location()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Spawn AI At Location"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIManager.BP_AIManager_C.Respawn Timer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AIManager_C::Respawn_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Respawn Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIManager.BP_AIManager_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AIManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIManager.BP_AIManager_C.Add AI Respawn Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              AI_Character                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIManager_C::Add_AI_Respawn_Timer(class ACharacter* AI_Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Add AI Respawn Timer"));

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


// Function BP_AIManager.BP_AIManager_C.AI Respawn Timer Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              AI_Pawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIManager_C::AI_Respawn_Timer_Finished(class ACharacter* AI_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.AI Respawn Timer Finished"));

	struct
	{
		class ACharacter*              AI_Pawn;
	} params = {};

	params.AI_Pawn = AI_Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIManager.BP_AIManager_C.Next Spawn AI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AIManager_C::Next_Spawn_AI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Next Spawn AI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIManager.BP_AIManager_C.RespawnAI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIManager_C::RespawnAI(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.RespawnAI"));

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


// Function BP_AIManager.BP_AIManager_C.Reset Respawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AIManager_C::Reset_Respawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.Reset Respawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AIManager.BP_AIManager_C.ExecuteUbergraph_BP_AIManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AIManager_C::ExecuteUbergraph_BP_AIManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManager.BP_AIManager_C.ExecuteUbergraph_BP_AIManager"));

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
