// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterBuildPart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK SetCurrentHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewHealthAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_SetCurrentHealth(int NewHealthAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK SetCurrentHealth"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK ShowHealthWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowHealthWidget               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   HealthWidgetName               (CPF_Parm, CPF_OutParm)

void ABP_MasterBuildPart_C::SGK_ShowHealthWidget(bool* ShowHealthWidget, struct FText* HealthWidgetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK ShowHealthWidget"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK MaxHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaxHealth                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_MaxHealth(int* MaxHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK MaxHealth"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK CurrentHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_CurrentHealth(int* Health)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK CurrentHealth"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK GetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_Parm, CPF_OutParm)

void ABP_MasterBuildPart_C::SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK GetVerifiedPlayers"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK UpdateCode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_UpdateCode(const struct FText& Code)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK UpdateCode"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK VerifyPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_VerifyPlayer(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK VerifyPlayer"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK CodeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           CodeAccepted                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK CodeCheck"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Interact"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK AllowInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowInteraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK AllowInteraction"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_MasterBuildPart_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK PossibleActions"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK StartHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_StartHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK StartHighlight"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK EndHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_EndHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK EndHighlight"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK InteractName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InteractName                   (CPF_Parm, CPF_OutParm)

void ABP_MasterBuildPart_C::SGK_InteractName(struct FText* InteractName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK InteractName"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK DropItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Dropped                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Spawned                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SaveLoaded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK DropItem"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK InvItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsItem                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK InvItem"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK EndInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK EndInteraction"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK ItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_ItemAmount(int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK ItemAmount"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Mesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_Mesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Mesh"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BPBuildCollision
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Collision                      (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void ABP_MasterBuildPart_C::SGK_BPBuildCollision(TArray<class UPrimitiveComponent*>* Collision)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BPBuildCollision"));

	struct
	{
		TArray<class UPrimitiveComponent*> Collision;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Collision != nullptr)
		*Collision = params.Collision;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BPGrids
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_GridComponent_C*> Grids                          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void ABP_MasterBuildPart_C::SGK_BPGrids(TArray<class UBP_GridComponent_C*>* Grids)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BPGrids"));

	struct
	{
		TArray<class UBP_GridComponent_C*> Grids;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Grids != nullptr)
		*Grids = params.Grids;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Preview
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Preview                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_Preview(bool Preview)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Preview"));

	struct
	{
		bool                           Preview;
		bool                           ReturnValue;
	} params = {};

	params.Preview = Preview;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK AddMultipleOwners
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           Owners                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_AddMultipleOwners(TArray<struct FText>* Owners)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK AddMultipleOwners"));

	struct
	{
		TArray<struct FText>           Owners;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Owners != nullptr)
		*Owners = params.Owners;

	return params.ReturnValue;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK ClearOwners
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_ClearOwners()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK ClearOwners"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK AddOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::SGK_AddOwner(const struct FText& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK AddOwner"));

	struct
	{
		struct FText                   PlayerName;
		bool                           ReturnValue;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK IsOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsOwner                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_IsOwner(const struct FText& PlayerName, bool* IsOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK IsOwner"));

	struct
	{
		struct FText                   PlayerName;
		bool                           IsOwner;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsOwner != nullptr)
		*IsOwner = params.IsOwner;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BuildPart
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     BuildPart                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_BuildPart(struct FDataTableRowHandle* BuildPart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BuildPart"));

	struct
	{
		struct FDataTableRowHandle     BuildPart;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BuildPart != nullptr)
		*BuildPart = params.BuildPart;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK IsPlaced
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPlaced                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_IsPlaced(bool* IsPlaced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK IsPlaced"));

	struct
	{
		bool                           IsPlaced;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPlaced != nullptr)
		*IsPlaced = params.IsPlaced;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK SupportCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DestroyOnFail                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           DirectSupportOnly              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Supported                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IndirectSupportOnly            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_SupportCheck(bool DestroyOnFail, bool DirectSupportOnly, bool* Supported, bool* IndirectSupportOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK SupportCheck"));

	struct
	{
		bool                           DestroyOnFail;
		bool                           DirectSupportOnly;
		bool                           Supported;
		bool                           IndirectSupportOnly;
	} params = {};

	params.DestroyOnFail = DestroyOnFail;
	params.DirectSupportOnly = DirectSupportOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Supported != nullptr)
		*Supported = params.Supported;
	if (IndirectSupportOnly != nullptr)
		*IndirectSupportOnly = params.IndirectSupportOnly;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK IsPendingDestroy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPendingDestroy               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_IsPendingDestroy(bool* IsPendingDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK IsPendingDestroy"));

	struct
	{
		bool                           IsPendingDestroy;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPendingDestroy != nullptr)
		*IsPendingDestroy = params.IsPendingDestroy;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BuildPartType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BuildType>       Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_BuildPartType(TEnumAsByte<E_BuildType>* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BuildPartType"));

	struct
	{
		TEnumAsByte<E_BuildType>       Type;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.CheckIfSupportingBuildParts
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Supporting                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::CheckIfSupportingBuildParts(bool* Supporting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.CheckIfSupportingBuildParts"));

	struct
	{
		bool                           Supporting;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Supporting != nullptr)
		*Supporting = params.Supporting;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.AdminForcePickup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::AdminForcePickup(class UBP_PlayerInventory_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.AdminForcePickup"));

	struct
	{
		class UBP_PlayerInventory_C*   Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SaveBuildPartData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SaveBuildPartData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SaveBuildPartData"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.LoadExtraData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.LoadExtraData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		int                            Index;
	} params = {};

	params.SaveGame = SaveGame;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SaveExtraData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        LevelSaveData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            ExtraDataIndex                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_LevelSaveData        NewLevelSaveData               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SaveExtraData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		struct FS_LevelSaveData        LevelSaveData;
		int                            ExtraDataIndex;
		struct FS_LevelSaveData        NewLevelSaveData;
	} params = {};

	params.SaveGame = SaveGame;
	params.LevelSaveData = LevelSaveData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = params.ExtraDataIndex;
	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = params.NewLevelSaveData;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.TakeDamage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::TakeDamage(int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.TakeDamage"));

	struct
	{
		int                            Damage;
	} params = {};

	params.Damage = Damage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.IsInNoDamageZone
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::IsInNoDamageZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.IsInNoDamageZone"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SupportCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DirectSupportOnly              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Supported                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SupportCheck(bool DirectSupportOnly, bool* Supported)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SupportCheck"));

	struct
	{
		bool                           DirectSupportOnly;
		bool                           Supported;
	} params = {};

	params.DirectSupportOnly = DirectSupportOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Supported != nullptr)
		*Supported = params.Supported;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.FloorSupportCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DirectSupportOnly              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Supported                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IndirectSupportOnly            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::FloorSupportCheck(bool DirectSupportOnly, bool* Supported, bool* IndirectSupportOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.FloorSupportCheck"));

	struct
	{
		bool                           DirectSupportOnly;
		bool                           Supported;
		bool                           IndirectSupportOnly;
	} params = {};

	params.DirectSupportOnly = DirectSupportOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Supported != nullptr)
		*Supported = params.Supported;
	if (IndirectSupportOnly != nullptr)
		*IndirectSupportOnly = params.IndirectSupportOnly;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.DestroySupportingBuildParts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::DestroySupportingBuildParts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.DestroySupportingBuildParts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.AdjacentFloorSupportCheck
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::AdjacentFloorSupportCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.AdjacentFloorSupportCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.DeleteBuildPart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceDestroy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::DeleteBuildPart(class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent, bool ForceDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.DeleteBuildPart"));

	struct
	{
		class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent;
		bool                           ForceDestroy;
	} params = {};

	params.PlayerBuildingComponent = PlayerBuildingComponent;
	params.ForceDestroy = ForceDestroy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.IsOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_MasterBuildPart_C::IsOwner(const struct FText& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.IsOwner"));

	struct
	{
		struct FText                   PlayerName;
		bool                           ReturnValue;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BleedDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TickDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TickTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BleedLength                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_BleedDamage(int TickDamage, float TickTime, float BleedLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BleedDamage"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK SetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_MasterBuildPart_C::SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK SetVerifiedPlayers"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK TurnedOnEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK TurnedOnEffect"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK PlayerOutProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::SGK_PlayerOutProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK PlayerOutProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK PlayerInProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::SGK_PlayerInProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK PlayerInProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGKSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGKSave"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.LoadBuildPart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::LoadBuildPart(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.LoadBuildPart"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.MulticastDestroyed
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::MulticastDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.MulticastDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK DeleteBuildPart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceDestroy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_DeleteBuildPart(class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent, bool ForceDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK DeleteBuildPart"));

	struct
	{
		class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent;
		bool                           ForceDestroy;
	} params = {};

	params.PlayerBuildingComponent = PlayerBuildingComponent;
	params.ForceDestroy = ForceDestroy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.MulticastBuildPartPlaced
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::MulticastBuildPartPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.MulticastBuildPartPlaced"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BuildPartPlaced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FromSaveGame                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterBuildPart_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BuildPartPlaced"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           FromSaveGame;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.FromSaveGame = FromSaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Upgrade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterBuildPart_C::SGK_Upgrade()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Upgrade"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.ServerBuildingOptions
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::ServerBuildingOptions(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.ServerBuildingOptions"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
	} params = {};

	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BuildingOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_BuildingOptions(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK BuildingOptions"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
	} params = {};

	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.PlaySound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::PlaySound(class USoundBase* Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.PlaySound"));

	struct
	{
		class USoundBase*              Sound;
	} params = {};

	params.Sound = Sound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.MulticastSound
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::MulticastSound(class USoundBase* Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.MulticastSound"));

	struct
	{
		class USoundBase*              Sound;
	} params = {};

	params.Sound = Sound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK LoadExtraData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK LoadExtraData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		int                            Index;
	} params = {};

	params.SaveGame = SaveGame;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.ReceiveAnyDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.ReceiveAnyDamage"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Damage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BaseDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  EventInstigator                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DamageType>      DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::SGK_Damage(int BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.SGK Damage"));

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


// Function BP_MasterBuildPart.BP_MasterBuildPart_C.ExecuteUbergraph_BP_MasterBuildPart
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterBuildPart_C::ExecuteUbergraph_BP_MasterBuildPart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterBuildPart.BP_MasterBuildPart_C.ExecuteUbergraph_BP_MasterBuildPart"));

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
