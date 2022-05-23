// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InteractivePlantFiberResourceComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK GetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_Parm, CPF_OutParm)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK GetVerifiedPlayers"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK UpdateCode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_InteractivePlantFiberResourceComponent_C::SGK_UpdateCode(const struct FText& Code)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK UpdateCode"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK VerifyPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_InteractivePlantFiberResourceComponent_C::SGK_VerifyPlayer(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK VerifyPlayer"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK CodeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           CodeAccepted                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK CodeCheck"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK Mesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_Mesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK Mesh"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_InteractivePlantFiberResourceComponent_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK Interact"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK AllowInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowInteraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK AllowInteraction"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK PossibleActions"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK StartHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_InteractivePlantFiberResourceComponent_C::SGK_StartHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK StartHighlight"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK EndHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_InteractivePlantFiberResourceComponent_C::SGK_EndHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK EndHighlight"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK InteractName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InteractName                   (CPF_Parm, CPF_OutParm)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_InteractName(struct FText* InteractName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK InteractName"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK DropItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Dropped                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Spawned                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SaveLoaded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_InteractivePlantFiberResourceComponent_C::SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK DropItem"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK InvItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsItem                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK InvItem"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK EndInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_InteractivePlantFiberResourceComponent_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK EndInteraction"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK ItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_ItemAmount(int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK ItemAmount"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK SetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK SetVerifiedPlayers"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK TurnedOnEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK TurnedOnEffect"));

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


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK PlayerOutProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_PlayerOutProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK PlayerOutProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK PlayerInProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InteractivePlantFiberResourceComponent_C::SGK_PlayerInProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.SGK PlayerInProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.ExecuteUbergraph_BP_InteractivePlantFiberResourceComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InteractivePlantFiberResourceComponent_C::ExecuteUbergraph_BP_InteractivePlantFiberResourceComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractivePlantFiberResourceComponent.BP_InteractivePlantFiberResourceComponent_C.ExecuteUbergraph_BP_InteractivePlantFiberResourceComponent"));

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
