// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterAICharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK AllowInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowInteraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterAICharacter_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK AllowInteraction"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_MasterAICharacter_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK PossibleActions"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK InteractName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InteractName                   (CPF_Parm, CPF_OutParm)

void ABP_MasterAICharacter_C::SGK_InteractName(struct FText* InteractName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK InteractName"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterAICharacter_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK Interact"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK StartHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterAICharacter_C::SGK_StartHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK StartHighlight"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK EndHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterAICharacter_C::SGK_EndHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK EndHighlight"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK EndInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterAICharacter_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK EndInteraction"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK InvItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsItem                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK InvItem"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK ItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::SGK_ItemAmount(int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK ItemAmount"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK Mesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::SGK_Mesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK Mesh"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK DropItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Dropped                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Spawned                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SaveLoaded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterAICharacter_C::SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK DropItem"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK VerifyPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterAICharacter_C::SGK_VerifyPlayer(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK VerifyPlayer"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK UpdateCode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterAICharacter_C::SGK_UpdateCode(const struct FText& Code)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK UpdateCode"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK GetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_Parm, CPF_OutParm)

void ABP_MasterAICharacter_C::SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK GetVerifiedPlayers"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK CodeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           CodeAccepted                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterAICharacter_C::SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK CodeCheck"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK CurrentHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::SGK_CurrentHealth(int* Health)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK CurrentHealth"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK MaxHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaxHealth                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::SGK_MaxHealth(int* MaxHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK MaxHealth"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK ShowHealthWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowHealthWidget               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   HealthWidgetName               (CPF_Parm, CPF_OutParm)

void ABP_MasterAICharacter_C::SGK_ShowHealthWidget(bool* ShowHealthWidget, struct FText* HealthWidgetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK ShowHealthWidget"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK SetCurrentHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewHealthAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterAICharacter_C::SGK_SetCurrentHealth(int NewHealthAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK SetCurrentHealth"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Actor Attack Target
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attack_Target                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Actor Attack Target"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Can Interact?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Can_Interact                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterAICharacter_C::AI_Can_Interact_(bool* Can_Interact)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Can Interact?"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Is Dead?
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterAICharacter_C::AI_Is_Dead_(bool* Dead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Is Dead?"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Debug Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 inString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::Debug_Text(const struct FString& inString, const struct FLinearColor& TextColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Debug Text"));

	struct
	{
		struct FString                 inString;
		struct FLinearColor            TextColor;
	} params = {};

	params.inString = inString;
	params.TextColor = TextColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Climb Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Climb_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Climb Timeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Climb Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Climb_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Climb Timeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Valt Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Valt_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Valt Timeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Valt Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Valt_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Valt Timeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Smooth Move__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Smooth_Move__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Smooth Move__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Smooth Move__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Smooth_Move__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Smooth Move__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Edge Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Edge_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Edge Timeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Edge Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Edge_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Edge Timeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK SetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_MasterAICharacter_C::SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK SetVerifiedPlayers"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK TurnedOnEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterAICharacter_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK TurnedOnEffect"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK BleedDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TickDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TickTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BleedLength                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::SGK_BleedDamage(int TickDamage, float TickTime, float BleedLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK BleedDamage"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Dead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::AI_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Dead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Alert Actor Defenders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Attacked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Alert Actor Defenders"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret Destroyed Effect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Turret_Destroyed_Effect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret Destroyed Effect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret Idle Start
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Turret_Idle_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret Idle Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret Idle Stop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Turret_Idle_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret Idle Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret Start Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Turret_Start_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret Start Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret End Reload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::Turret_End_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Turret End Reload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI End Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::AI_End_Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI End Alert"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Animation Switch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AIBehaviour>     Behaviour                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Animation Switch"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Camera Activate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activate                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterAICharacter_C::AI_Camera_Activate(bool Activate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Camera Activate"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Block
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BlockType>       Block_Type                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Block_Attacker                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Block"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Actor Aim Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Actor Aim Focus"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.ReceivePossessed"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.OnLanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_MasterAICharacter_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.OnLanded"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Climb Location Movement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Valting                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 End_Climb_Location             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Play_Rate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::Climb_Location_Movement(bool Is_Valting, const struct FVector& End_Climb_Location, float Play_Rate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Climb Location Movement"));

	struct
	{
		bool                           Is_Valting;
		struct FVector                 End_Climb_Location;
		float                          Play_Rate;
	} params = {};

	params.Is_Valting = Is_Valting;
	params.End_Climb_Location = End_Climb_Location;
	params.Play_Rate = Play_Rate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.Smooth Move AI Actor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              End_Location                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Play_Time                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::Smooth_Move_AI_Actor(const struct FTransform& End_Location, float Play_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.Smooth Move AI Actor"));

	struct
	{
		struct FTransform              End_Location;
		float                          Play_Time;
	} params = {};

	params.End_Location = End_Location;
	params.Play_Time = Play_Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Alert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Alert_Actor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::AI_Alert(class AActor* Alert_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.AI Alert"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK Damage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BaseDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  EventInstigator                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DamageType>      DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::SGK_Damage(int BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK Damage"));

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


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.HeadshotSound
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::HeadshotSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.HeadshotSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK PlayerInProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::SGK_PlayerInProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK PlayerInProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK PlayerOutProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterAICharacter_C::SGK_PlayerOutProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.SGK PlayerOutProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAICharacter.BP_MasterAICharacter_C.ExecuteUbergraph_BP_MasterAICharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAICharacter_C::ExecuteUbergraph_BP_MasterAICharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAICharacter.BP_MasterAICharacter_C.ExecuteUbergraph_BP_MasterAICharacter"));

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
