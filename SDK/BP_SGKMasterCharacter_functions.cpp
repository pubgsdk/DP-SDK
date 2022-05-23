// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKMasterCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Is Dead?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKMasterCharacter_C::AI_Is_Dead_(bool* Dead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Is Dead?"));

	struct
	{
		bool                           Dead;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Dead != nullptr)
		*Dead = params.Dead;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Can Interact?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Can_Interact                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKMasterCharacter_C::AI_Can_Interact_(bool* Can_Interact)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Can Interact?"));

	struct
	{
		bool                           Can_Interact;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Can_Interact != nullptr)
		*Can_Interact = params.Can_Interact;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Actor Attack Target
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attack_Target                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Actor Attack Target"));

	struct
	{
		class AActor*                  Attack_Target;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Attack_Target != nullptr)
		*Attack_Target = params.Attack_Target;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK SetCurrentHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewHealthAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SGKMasterCharacter_C::SGK_SetCurrentHealth(int NewHealthAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK SetCurrentHealth"));

	struct
	{
		int                            NewHealthAmount;
		bool                           ReturnValue;
	} params = {};

	params.NewHealthAmount = NewHealthAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK ShowHealthWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowHealthWidget               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   HealthWidgetName               (CPF_Parm, CPF_OutParm)

void ABP_SGKMasterCharacter_C::SGK_ShowHealthWidget(bool* ShowHealthWidget, struct FText* HealthWidgetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK ShowHealthWidget"));

	struct
	{
		bool                           ShowHealthWidget;
		struct FText                   HealthWidgetName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ShowHealthWidget != nullptr)
		*ShowHealthWidget = params.ShowHealthWidget;
	if (HealthWidgetName != nullptr)
		*HealthWidgetName = params.HealthWidgetName;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK MaxHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaxHealth                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_MaxHealth(int* MaxHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK MaxHealth"));

	struct
	{
		int                            MaxHealth;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MaxHealth != nullptr)
		*MaxHealth = params.MaxHealth;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CurrentHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_CurrentHealth(int* Health)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CurrentHealth"));

	struct
	{
		int                            Health;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Health != nullptr)
		*Health = params.Health;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK GetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_Parm, CPF_OutParm)

void ABP_SGKMasterCharacter_C::SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK GetVerifiedPlayers"));

	struct
	{
		TArray<struct FText>           VerifiedPlayers;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (VerifiedPlayers != nullptr)
		*VerifiedPlayers = params.VerifiedPlayers;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK UpdateCode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SGKMasterCharacter_C::SGK_UpdateCode(const struct FText& Code)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK UpdateCode"));

	struct
	{
		struct FText                   Code;
		bool                           ReturnValue;
	} params = {};

	params.Code = Code;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK VerifyPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SGKMasterCharacter_C::SGK_VerifyPlayer(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK VerifyPlayer"));

	struct
	{
		struct FText                   Text;
		bool                           ReturnValue;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CodeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           CodeAccepted                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKMasterCharacter_C::SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CodeCheck"));

	struct
	{
		struct FText                   Code;
		bool                           CodeAccepted;
	} params = {};

	params.Code = Code;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CodeAccepted != nullptr)
		*CodeAccepted = params.CodeAccepted;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Mesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_Mesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Mesh"));

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


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK ItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_ItemAmount(int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK ItemAmount"));

	struct
	{
		int                            Amount;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SGKMasterCharacter_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Interact"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		TEnumAsByte<E_WorldActions>    Action;
		bool                           ReturnValue;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK AllowInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowInteraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKMasterCharacter_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK AllowInteraction"));

	struct
	{
		bool                           AllowInteraction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowInteraction != nullptr)
		*AllowInteraction = params.AllowInteraction;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_SGKMasterCharacter_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK PossibleActions"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           ActionsFound;
		TArray<struct FS_WorldAction>  PossibleActions;
	} params = {};

	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActionsFound != nullptr)
		*ActionsFound = params.ActionsFound;
	if (PossibleActions != nullptr)
		*PossibleActions = params.PossibleActions;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK StartHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SGKMasterCharacter_C::SGK_StartHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK StartHighlight"));

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


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK EndHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SGKMasterCharacter_C::SGK_EndHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK EndHighlight"));

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


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK InteractName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InteractName                   (CPF_Parm, CPF_OutParm)

void ABP_SGKMasterCharacter_C::SGK_InteractName(struct FText* InteractName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK InteractName"));

	struct
	{
		struct FText                   InteractName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InteractName != nullptr)
		*InteractName = params.InteractName;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK DropItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Dropped                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Spawned                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SaveLoaded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SGKMasterCharacter_C::SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK DropItem"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           Dropped;
		bool                           Spawned;
		bool                           SaveLoaded;
		bool                           ReturnValue;
	} params = {};

	params.InvItem = InvItem;
	params.Dropped = Dropped;
	params.Spawned = Spawned;
	params.SaveLoaded = SaveLoaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK InvItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsItem                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK InvItem"));

	struct
	{
		bool                           IsItem;
		struct FS_InvItem              InvItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsItem != nullptr)
		*IsItem = params.IsItem;
	if (InvItem != nullptr)
		*InvItem = params.InvItem;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK EndInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SGKMasterCharacter_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK EndInteraction"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           ReturnValue;
	} params = {};

	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanValues
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Lean_Alpha                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TargetCamera                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_LeanValues(float* Lean_Alpha, float* TargetCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanValues"));

	struct
	{
		float                          Lean_Alpha;
		float                          TargetCamera;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Lean_Alpha != nullptr)
		*Lean_Alpha = params.Lean_Alpha;
	if (TargetCamera != nullptr)
		*TargetCamera = params.TargetCamera;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LookAtRotation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               LookAtRotation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_LookAtRotation(struct FVector2D* LookAtRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LookAtRotation"));

	struct
	{
		struct FVector2D               LookAtRotation;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LookAtRotation != nullptr)
		*LookAtRotation = params.LookAtRotation;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CharacterSockets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sockets>         Sockets                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         Component                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_CharacterSockets(TEnumAsByte<E_Sockets> Sockets, class USceneComponent** Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CharacterSockets"));

	struct
	{
		TEnumAsByte<E_Sockets>         Sockets;
		class USceneComponent*         Component;
	} params = {};

	params.Sockets = Sockets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK GetMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BodyMesh>        MeshType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_GetMesh(TEnumAsByte<E_BodyMesh> MeshType, class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK GetMesh"));

	struct
	{
		TEnumAsByte<E_BodyMesh>        MeshType;
		class UPrimitiveComponent*     Mesh;
	} params = {};

	params.MeshType = MeshType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CharacterCamera
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CameraType>      CameraType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCameraComponent*        CurrentCamera                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USpringArmComponent*     CurrentSpringArm               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_CharacterCamera(TEnumAsByte<E_CameraType> CameraType, class UCameraComponent** CurrentCamera, class USpringArmComponent** CurrentSpringArm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CharacterCamera"));

	struct
	{
		TEnumAsByte<E_CameraType>      CameraType;
		class UCameraComponent*        CurrentCamera;
		class USpringArmComponent*     CurrentSpringArm;
	} params = {};

	params.CameraType = CameraType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrentCamera != nullptr)
		*CurrentCamera = params.CurrentCamera;
	if (CurrentSpringArm != nullptr)
		*CurrentSpringArm = params.CurrentSpringArm;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnRep_CharacterName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::OnRep_CharacterName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnRep_CharacterName"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnRep_Skin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::OnRep_Skin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnRep_Skin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RightFPLean__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::RightFPLean__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RightFPLean__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RightFPLean__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::RightFPLean__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RightFPLean__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LeftFPLean__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::LeftFPLean__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LeftFPLean__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LeftFPLean__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::LeftFPLean__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LeftFPLean__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RightTPLean__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::RightTPLean__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RightTPLean__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RightTPLean__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::RightTPLean__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RightTPLean__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LeftTPLean__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::LeftTPLean__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LeftTPLean__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LeftTPLean__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::LeftTPLean__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LeftTPLean__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RecoilTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::RecoilTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RecoilTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RecoilTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::RecoilTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.RecoilTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Camera View (Disabled)_K2Node_InputActionEvent_42
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Toggle_Camera_View__Disabled__K2Node_InputActionEvent_42(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Camera View (Disabled)_K2Node_InputActionEvent_42"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Freelook (Disabled)_K2Node_InputActionEvent_41
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Freelook__Disabled__K2Node_InputActionEvent_41(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Freelook (Disabled)_K2Node_InputActionEvent_41"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Freelook (Disabled)_K2Node_InputActionEvent_40
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Freelook__Disabled__K2Node_InputActionEvent_40(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Freelook (Disabled)_K2Node_InputActionEvent_40"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Temporary - Change Clothes_K2Node_InputActionEvent_39
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Temporary___Change_Clothes_K2Node_InputActionEvent_39(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Temporary - Change Clothes_K2Node_InputActionEvent_39"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Temporary - Dance_K2Node_InputActionEvent_38
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Temporary___Dance_K2Node_InputActionEvent_38(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Temporary - Dance_K2Node_InputActionEvent_38"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_M_K2Node_InputKeyEvent_10
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_M_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_M_K2Node_InputKeyEvent_10"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_9
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Escape_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_9"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Invert Mouse Y_K2Node_InputActionEvent_37
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Invert_Mouse_Y_K2Node_InputActionEvent_37(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Invert Mouse Y_K2Node_InputActionEvent_37"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Cancel Action_K2Node_InputActionEvent_36
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Cancel_Action_K2Node_InputActionEvent_36(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Cancel Action_K2Node_InputActionEvent_36"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Aim_K2Node_InputActionEvent_35
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Aim_K2Node_InputActionEvent_35(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Aim_K2Node_InputActionEvent_35"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Aim_K2Node_InputActionEvent_34
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Aim_K2Node_InputActionEvent_34(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Aim_K2Node_InputActionEvent_34"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Fire_K2Node_InputActionEvent_33
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Fire_K2Node_InputActionEvent_33(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Fire_K2Node_InputActionEvent_33"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Fire_K2Node_InputActionEvent_32
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Fire_K2Node_InputActionEvent_32(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Fire_K2Node_InputActionEvent_32"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Inventory_K2Node_InputActionEvent_31
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Toggle_Inventory_K2Node_InputActionEvent_31(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Inventory_K2Node_InputActionEvent_31"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_30
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Sprint_K2Node_InputActionEvent_30(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_30"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_29
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Sprint_K2Node_InputActionEvent_29(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_29"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_28
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_28"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_27
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_27"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_26
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_26"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 9_K2Node_InputActionEvent_25
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_9_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 9_K2Node_InputActionEvent_25"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 8_K2Node_InputActionEvent_24
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_8_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 8_K2Node_InputActionEvent_24"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 7_K2Node_InputActionEvent_23
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_7_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 7_K2Node_InputActionEvent_23"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 6_K2Node_InputActionEvent_22
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_6_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 6_K2Node_InputActionEvent_22"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 5_K2Node_InputActionEvent_21
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_5_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 5_K2Node_InputActionEvent_21"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 4_K2Node_InputActionEvent_20
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_4_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 4_K2Node_InputActionEvent_20"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Down Context Menu_K2Node_InputActionEvent_19
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Down_Context_Menu_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Down Context Menu_K2Node_InputActionEvent_19"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Up Context Menu_K2Node_InputActionEvent_18
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Up_Context_Menu_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Up Context Menu_K2Node_InputActionEvent_18"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lower Build Part_K2Node_InputActionEvent_17
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Lower_Build_Part_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lower Build Part_K2Node_InputActionEvent_17"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Raise Build Part_K2Node_InputActionEvent_16
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Raise_Build_Part_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Raise Build Part_K2Node_InputActionEvent_16"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 3_K2Node_InputActionEvent_15
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_3_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 3_K2Node_InputActionEvent_15"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Rotate Build Part_K2Node_InputActionEvent_14
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Rotate_Build_Part_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Rotate Build Part_K2Node_InputActionEvent_14"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Reload_K2Node_InputActionEvent_13
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Reload_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Reload_K2Node_InputActionEvent_13"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Combat Mode_K2Node_InputActionEvent_12
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Toggle_Combat_Mode_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Combat Mode_K2Node_InputActionEvent_12"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lean Right_K2Node_InputActionEvent_11
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Lean_Right_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lean Right_K2Node_InputActionEvent_11"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lean Right_K2Node_InputActionEvent_10
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Lean_Right_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lean Right_K2Node_InputActionEvent_10"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lean Left_K2Node_InputActionEvent_9
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Lean_Left_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lean Left_K2Node_InputActionEvent_9"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lean Left_K2Node_InputActionEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Lean_Left_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Lean Left_K2Node_InputActionEvent_8"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Fire Mode_K2Node_InputActionEvent_7
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Toggle_Fire_Mode_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Fire Mode_K2Node_InputActionEvent_7"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 2_K2Node_InputActionEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_2_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 2_K2Node_InputActionEvent_6"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 1_K2Node_InputActionEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Quick_Slot_1_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Quick Slot 1_K2Node_InputActionEvent_5"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_4"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Temporary - Death_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Temporary___Death_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Temporary - Death_K2Node_InputActionEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Ctrl+Shift_M_K2Node_InputKeyEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Ctrl_Shift_M_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Ctrl+Shift_M_K2Node_InputKeyEvent_8"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Shift_K_K2Node_InputKeyEvent_7
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Shift_K_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Shift_K_K2Node_InputKeyEvent_7"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Alt_L_K2Node_InputKeyEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Alt_L_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Alt_L_K2Node_InputKeyEvent_6"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Shift_L_K2Node_InputKeyEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Shift_L_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Shift_L_K2Node_InputKeyEvent_5"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_K_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_4"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_L_K2Node_InputKeyEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_L_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_L_K2Node_InputKeyEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Shift_RightBracket_K2Node_InputKeyEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_Shift_RightBracket_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Shift_RightBracket_K2Node_InputKeyEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpActEvt_RightBracket_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Dead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::AI_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Dead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Actor Aim Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Actor Aim Focus"));

	struct
	{
		class AActor*                  Instigator;
	} params = {};

	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Alert Actor Defenders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Alert Actor Defenders"));

	struct
	{
		class AActor*                  Attacked;
		class AActor*                  Attacker;
	} params = {};

	params.Attacked = Attacked;
	params.Attacker = Attacker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret Destroyed Effect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::Turret_Destroyed_Effect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret Destroyed Effect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret Idle Start
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::Turret_Idle_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret Idle Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret Idle Stop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::Turret_Idle_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret Idle Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret Start Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::Turret_Start_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret Start Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret End Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::Turret_End_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Turret End Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Alert_Actor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::AI_Alert(class AActor* Alert_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Alert"));

	struct
	{
		class AActor*                  Alert_Actor;
	} params = {};

	params.Alert_Actor = Alert_Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI End Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::AI_End_Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI End Alert"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Animation Switch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Animation Switch"));

	struct
	{
		TEnumAsByte<E_AIBehaviour>     Behaviour;
	} params = {};

	params.Behaviour = Behaviour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Camera Activate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activate                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKMasterCharacter_C::AI_Camera_Activate(bool Activate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Camera Activate"));

	struct
	{
		bool                           Activate;
	} params = {};

	params.Activate = Activate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Block
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BlockType>       Block_Type                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Block_Attacker                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AI Block"));

	struct
	{
		TEnumAsByte<E_BlockType>       Block_Type;
		class AActor*                  Block_Attacker;
	} params = {};

	params.Block_Type = Block_Type;
	params.Block_Attacker = Block_Attacker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK SetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_SGKMasterCharacter_C::SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK SetVerifiedPlayers"));

	struct
	{
		TArray<struct FText>           VerifiedPlayers;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (VerifiedPlayers != nullptr)
		*VerifiedPlayers = params.VerifiedPlayers;
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK TurnedOnEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKMasterCharacter_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK TurnedOnEffect"));

	struct
	{
		bool                           TurnedOn;
	} params = {};

	params.TurnedOn = TurnedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK PlayerInProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::SGK_PlayerInProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK PlayerInProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK PlayerOutProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::SGK_PlayerOutProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK PlayerOutProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetFPCam
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ServerSetFPCam(const struct FVector& Loc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetFPCam"));

	struct
	{
		struct FVector                 Loc;
	} params = {};

	params.Loc = Loc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetArmLocation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ServerSetArmLocation(const struct FVector& Loc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetArmLocation"));

	struct
	{
		struct FVector                 Loc;
	} params = {};

	params.Loc = Loc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Lean                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          CameraLean                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ThirdPersonCameraOffset        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_LeanRight(bool Lean, float CameraLean, float ThirdPersonCameraOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanRight"));

	struct
	{
		bool                           Lean;
		float                          CameraLean;
		float                          ThirdPersonCameraOffset;
	} params = {};

	params.Lean = Lean;
	params.CameraLean = CameraLean;
	params.ThirdPersonCameraOffset = ThirdPersonCameraOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Lean                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          CameraLean                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ThirdPersonCameraOffset        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_LeanLeft(bool Lean, float CameraLean, float ThirdPersonCameraOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanLeft"));

	struct
	{
		bool                           Lean;
		float                          CameraLean;
		float                          ThirdPersonCameraOffset;
	} params = {};

	params.Lean = Lean;
	params.CameraLean = CameraLean;
	params.ThirdPersonCameraOffset = ThirdPersonCameraOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Left Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::FP_Left_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Left Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Right Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::FP_Right_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Right Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Right
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Lean                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          CameraLean                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ThirdPersonCameraOffset        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::FP_Right(bool Lean, float CameraLean, float ThirdPersonCameraOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Right"));

	struct
	{
		bool                           Lean;
		float                          CameraLean;
		float                          ThirdPersonCameraOffset;
	} params = {};

	params.Lean = Lean;
	params.CameraLean = CameraLean;
	params.ThirdPersonCameraOffset = ThirdPersonCameraOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Left
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Lean                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          CameraLean                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ThirdPersonCameraOffset        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::FP_Left(bool Lean, float CameraLean, float ThirdPersonCameraOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Left"));

	struct
	{
		bool                           Lean;
		float                          CameraLean;
		float                          ThirdPersonCameraOffset;
	} params = {};

	params.Lean = Lean;
	params.CameraLean = CameraLean;
	params.ThirdPersonCameraOffset = ThirdPersonCameraOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.StopLeftLean
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::StopLeftLean()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.StopLeftLean"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.StopRightLean
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::StopRightLean()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.StopRightLean"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK BleedDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TickDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TickTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BleedLength                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_BleedDamage(int TickDamage, float TickTime, float BleedLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK BleedDamage"));

	struct
	{
		int                            TickDamage;
		float                          TickTime;
		float                          BleedLength;
	} params = {};

	params.TickDamage = TickDamage;
	params.TickTime = TickTime;
	params.BleedLength = BleedLength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveAnyDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveAnyDamage"));

	struct
	{
		float                          Damage;
		class UDamageType*             DamageType;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
	} params = {};

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerKillPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::ServerKillPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerKillPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Damage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BaseDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  EventInstigator                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DamageType>      DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::SGK_Damage(int BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Damage"));

	struct
	{
		int                            BaseDamage;
		class AActor*                  EventInstigator;
		class AActor*                  DamageCauser;
		TEnumAsByte<E_DamageType>      DamageType;
		TEnumAsByte<E_Hitbox>          HitBox;
	} params = {};

	params.BaseDamage = BaseDamage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;
	params.HitBox = HitBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveTick"));

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


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSkinChange
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMesh*           Skin                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ServerSkinChange(class USkeletalMesh* Skin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSkinChange"));

	struct
	{
		class USkeletalMesh*           Skin;
	} params = {};

	params.Skin = Skin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AmbientSoundAntenna
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::AmbientSoundAntenna()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AmbientSoundAntenna"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SkinChange
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::SkinChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SkinChange"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerUpdateNewCharacterYaw
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::ServerUpdateNewCharacterYaw()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerUpdateNewCharacterYaw"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetLookAtRotation
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               LookAtRotation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ServerSetLookAtRotation(const struct FVector2D& LookAtRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetLookAtRotation"));

	struct
	{
		struct FVector2D               LookAtRotation;
	} params = {};

	params.LookAtRotation = LookAtRotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LookAtTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::LookAtTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LookAtTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ClientPossessed
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::ClientPossessed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ClientPossessed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceivePossessed"));

	struct
	{
		class AController*             NewController;
	} params = {};

	params.NewController = NewController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnLanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_SGKMasterCharacter_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnLanded"));

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


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MulticastUnhideComponents
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Components                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_SGKMasterCharacter_C::MulticastUnhideComponents(TArray<class UPrimitiveComponent*> Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MulticastUnhideComponents"));

	struct
	{
		TArray<class UPrimitiveComponent*> Components;
	} params = {};

	params.Components = Components;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK HideComponents
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Components                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_SGKMasterCharacter_C::SGK_HideComponents(TArray<class UPrimitiveComponent*> Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK HideComponents"));

	struct
	{
		TArray<class UPrimitiveComponent*> Components;
	} params = {};

	params.Components = Components;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.EnableSoftInput
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::EnableSoftInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.EnableSoftInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Right_K2Node_InputAxisEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpAxisEvt_Right_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Right_K2Node_InputAxisEvent_2"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpAxisEvt_Forward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_1"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Left_K2Node_InputAxisEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpAxisEvt_Left_K2Node_InputAxisEvent_6(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Left_K2Node_InputAxisEvent_6"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Backwards_K2Node_InputAxisEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpAxisEvt_Backwards_K2Node_InputAxisEvent_5(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Backwards_K2Node_InputAxisEvent_5"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Down_K2Node_InputAxisEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::Down_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Down_K2Node_InputAxisEvent_1"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerKill
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKMasterCharacter_C::ServerKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerKill"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ClientRecoil
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponRecoil         Recoil                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ClientRecoil(const struct FS_WeaponRecoil& Recoil)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ClientRecoil"));

	struct
	{
		struct FS_WeaponRecoil         Recoil;
	} params = {};

	params.Recoil = Recoil;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.IAMLEGENDGHOST
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::IAMLEGENDGHOST(const struct FString& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.IAMLEGENDGHOST"));

	struct
	{
		struct FString                 PlayerName;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.IAMLEGENDMC
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_SGKMasterCharacter_C* Legend                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::IAMLEGENDMC(class ABP_SGKMasterCharacter_C* Legend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.IAMLEGENDMC"));

	struct
	{
		class ABP_SGKMasterCharacter_C* Legend;
	} params = {};

	params.Legend = Legend;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.IAMLEGEND
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::IAMLEGEND(const struct FString& PlayerName, class ABP_SGKMasterCharacter_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.IAMLEGEND"));

	struct
	{
		struct FString                 PlayerName;
		class ABP_SGKMasterCharacter_C* Player;
	} params = {};

	params.PlayerName = PlayerName;
	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AddBanServer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Banner                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::AddBanServer(const struct FString& Banner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AddBanServer"));

	struct
	{
		struct FString                 Banner;
	} params = {};

	params.Banner = Banner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AdminKillPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerStateToCheck             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C* PKPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::AdminKillPlayer(class APlayerState* PlayerStateToCheck, class ABP_SGKMasterCharacter_C* PKPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AdminKillPlayer"));

	struct
	{
		class APlayerState*            PlayerStateToCheck;
		class ABP_SGKMasterCharacter_C* PKPlayer;
	} params = {};

	params.PlayerStateToCheck = PlayerStateToCheck;
	params.PKPlayer = PKPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AdminKillBuildPart
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MasterBuildPart_C*   BuildPartDead                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            PlayerStateToCheck             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::AdminKillBuildPart(class ABP_MasterBuildPart_C* BuildPartDead, class APlayerState* PlayerStateToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.AdminKillBuildPart"));

	struct
	{
		class ABP_MasterBuildPart_C*   BuildPartDead;
		class APlayerState*            PlayerStateToCheck;
	} params = {};

	params.BuildPartDead = BuildPartDead;
	params.PlayerStateToCheck = PlayerStateToCheck;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ExecuteUbergraph_BP_SGKMasterCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKMasterCharacter_C::ExecuteUbergraph_BP_SGKMasterCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ExecuteUbergraph_BP_SGKMasterCharacter"));

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
