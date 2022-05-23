// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SkeletalMasterItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK GetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_Parm, CPF_OutParm)

void ABP_SkeletalMasterItem_C::SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK GetVerifiedPlayers"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK UpdateCode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SkeletalMasterItem_C::SGK_UpdateCode(const struct FText& Code)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK UpdateCode"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK VerifyPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SkeletalMasterItem_C::SGK_VerifyPlayer(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK VerifyPlayer"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK CodeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           CodeAccepted                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SkeletalMasterItem_C::SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK CodeCheck"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK Mesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::SGK_Mesh(class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK Mesh"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK ItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::SGK_ItemAmount(int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK ItemAmount"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK EndInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SkeletalMasterItem_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK EndInteraction"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK InvItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsItem                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK InvItem"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK DropItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Dropped                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Spawned                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SaveLoaded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SkeletalMasterItem_C::SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK DropItem"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK InteractName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InteractName                   (CPF_Parm, CPF_OutParm)

void ABP_SkeletalMasterItem_C::SGK_InteractName(struct FText* InteractName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK InteractName"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK EndHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SkeletalMasterItem_C::SGK_EndHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK EndHighlight"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK StartHighlight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SkeletalMasterItem_C::SGK_StartHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK StartHighlight"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK PossibleActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ActionsFound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_WorldAction>  PossibleActions                (CPF_Parm, CPF_OutParm)

void ABP_SkeletalMasterItem_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK PossibleActions"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK AllowInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowInteraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SkeletalMasterItem_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK AllowInteraction"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK Interact
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SkeletalMasterItem_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK Interact"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ActionCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_WorldAction>  ItemActions                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<E_WorldActions>    ActionType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_SkeletalMasterItem_C::ActionCheck(TEnumAsByte<E_WorldActions> ActionType, TArray<struct FS_WorldAction>* ItemActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ActionCheck"));

	struct
	{
		TArray<struct FS_WorldAction>  ItemActions;
		TEnumAsByte<E_WorldActions>    ActionType;
		bool                           ReturnValue;
	} params = {};

	params.ActionType = ActionType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemActions != nullptr)
		*ItemActions = params.ItemActions;

	return params.ReturnValue;
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ItemDecay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::ItemDecay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ItemDecay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SpawnAttachments
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::SpawnAttachments(const struct FS_InvItem& InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SpawnAttachments"));

	struct
	{
		struct FS_InvItem              InvItem;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ItemOffsets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::ItemOffsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ItemOffsets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.InteractActions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::InteractActions(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.InteractActions"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		TEnumAsByte<E_WorldActions>    Action;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Interact
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::Interact(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Interact"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Hold
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::Hold(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Hold"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Learn
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::Learn(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Learn"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Consume
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::Consume(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Consume"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.EquipWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::EquipWeapon(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.EquipWeapon"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Open
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::Open(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Open"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.EquipClothing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::EquipClothing(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.EquipClothing"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Pickup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::Pickup(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Pickup"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK SetVerifiedPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           VerifiedPlayers                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_SkeletalMasterItem_C::SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK SetVerifiedPlayers"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK TurnedOnEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SkeletalMasterItem_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK TurnedOnEffect"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.DropDestroyTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::DropDestroyTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.DropDestroyTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK PlayerInProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::SGK_PlayerInProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK PlayerInProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK PlayerOutProximity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::SGK_PlayerOutProximity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGK PlayerOutProximity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGKSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SGKSave"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SaveNotValid
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::SaveNotValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.SaveNotValid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.LoadItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::LoadItem(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.LoadItem"));

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


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.CreateNewItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::CreateNewItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.CreateNewItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_SkeletalMasterItem_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ExecuteUbergraph_BP_SkeletalMasterItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SkeletalMasterItem_C::ExecuteUbergraph_BP_SkeletalMasterItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletalMasterItem.BP_SkeletalMasterItem_C.ExecuteUbergraph_BP_SkeletalMasterItem"));

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
