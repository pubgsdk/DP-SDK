// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PlayerInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerInventory.BP_PlayerInventory_C.SpawnSetDownItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FVector                 SetLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                SetRotation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::SpawnSetDownItem(const struct FS_InvItem& InvItem, const struct FVector& SetLocation, const struct FRotator& SetRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SpawnSetDownItem"));

	struct
	{
		struct FS_InvItem              InvItem;
		struct FVector                 SetLocation;
		struct FRotator                SetRotation;
	} params = {};

	params.InvItem = InvItem;
	params.SetLocation = SetLocation;
	params.SetRotation = SetRotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.TraceFromCameraMath
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_CameraType>      CameraView                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Start                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::TraceFromCameraMath(TEnumAsByte<E_CameraType> CameraView, float Distance, struct FVector* Start, struct FVector* End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.TraceFromCameraMath"));

	struct
	{
		TEnumAsByte<E_CameraType>      CameraView;
		float                          Distance;
		struct FVector                 Start;
		struct FVector                 End;
	} params = {};

	params.CameraView = CameraView;
	params.Distance = Distance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SetDownItemFromSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_SpecialSlotType> SpecialType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                SetRotation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 SetLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SetDownItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split, const struct FRotator& SetRotation, const struct FVector& SetLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SetDownItemFromSlot"));

	struct
	{
		struct FS_InvSlotID            SlotID;
		TEnumAsByte<E_SpecialSlotType> SpecialType;
		bool                           Split;
		struct FRotator                SetRotation;
		struct FVector                 SetLocation;
	} params = {};

	params.SlotID = SlotID;
	params.SpecialType = SpecialType;
	params.Split = Split;
	params.SetRotation = SetRotation;
	params.SetLocation = SetLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InteractTrace_ServerSide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WorldActions>    ActionType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InteractTarget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::InteractTrace_ServerSide(TEnumAsByte<E_WorldActions> ActionType, const struct FHitResult& InteractTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InteractTrace_ServerSide"));

	struct
	{
		TEnumAsByte<E_WorldActions>    ActionType;
		struct FHitResult              InteractTarget;
	} params = {};

	params.ActionType = ActionType;
	params.InteractTarget = InteractTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InteractTrace_ClientSide
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    ActionType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::InteractTrace_ClientSide(const struct FVector& Start, const struct FVector& End, TEnumAsByte<E_WorldActions> ActionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InteractTrace_ClientSide"));

	struct
	{
		struct FVector                 Start;
		struct FVector                 End;
		TEnumAsByte<E_WorldActions>    ActionType;
	} params = {};

	params.Start = Start;
	params.End = End;
	params.ActionType = ActionType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdatePlayerLocation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::UpdatePlayerLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdatePlayerLocation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ReturnStateValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_CharacterState>  CharacterState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_StatReduction> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ReturnStateValue(TEnumAsByte<E_CharacterState> CharacterState, TArray<struct FS_StatReduction>* Array, float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ReturnStateValue"));

	struct
	{
		TEnumAsByte<E_CharacterState>  CharacterState;
		TArray<struct FS_StatReduction> Array;
		float                          Value;
	} params = {};

	params.CharacterState = CharacterState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.CanInteract
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::CanInteract()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.CanInteract"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.InAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           InAction                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::InAction(bool* InAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InAction"));

	struct
	{
		bool                           InAction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InAction != nullptr)
		*InAction = params.InAction;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyEquipmentItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentType>   EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::DestroyEquipmentItem(TEnumAsByte<E_EquipmentType> EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyEquipmentItem"));

	struct
	{
		TEnumAsByte<E_EquipmentType>   EquipmentSlot;
	} params = {};

	params.EquipmentSlot = EquipmentSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.CheckRecipeCost
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Recipe                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           CanCraft                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::CheckRecipeCost(const struct FName& Recipe, int Amount, bool RemoveItems, bool* CanCraft)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.CheckRecipeCost"));

	struct
	{
		struct FName                   Recipe;
		int                            Amount;
		bool                           RemoveItems;
		bool                           CanCraft;
	} params = {};

	params.Recipe = Recipe;
	params.Amount = Amount;
	params.RemoveItems = RemoveItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanCraft != nullptr)
		*CanCraft = params.CanCraft;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateMaxMovementSpeed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterState>  CharacterState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateMaxMovementSpeed(TEnumAsByte<E_CharacterState> CharacterState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateMaxMovementSpeed"));

	struct
	{
		TEnumAsByte<E_CharacterState>  CharacterState;
	} params = {};

	params.CharacterState = CharacterState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AddAllEquipmentQuickSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::AddAllEquipmentQuickSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AddAllEquipmentQuickSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ResetStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ResetStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ResetStats"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClearBleed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClearBleed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClearBleed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.BleedDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::BleedDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.BleedDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.StartBleedDamage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TickDamage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TickTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BleedLength                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::StartBleedDamage(int TickDamage, float TickTime, float BleedLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.StartBleedDamage"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.LoadComponentData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           LoadComplete                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.LoadComponentData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		bool                           LoadComplete;
	} params = {};

	params.SaveGame = SaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LoadComplete != nullptr)
		*LoadComplete = params.LoadComplete;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.FindMontage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<class USkeletalMesh*, class UAnimMontage*> TargetMap                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           AnimFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::FindMontage(TMap<class USkeletalMesh*, class UAnimMontage*> TargetMap, bool* AnimFound, class UAnimMontage** Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.FindMontage"));

	struct
	{
		TMap<class USkeletalMesh*, class UAnimMontage*> TargetMap;
		bool                           AnimFound;
		class UAnimMontage*            Montage;
	} params = {};

	params.TargetMap = TargetMap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimFound != nullptr)
		*AnimFound = params.AnimFound;
	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenCodeLockUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SetCode                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Lock                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::OpenCodeLockUI(bool SetCode, class AActor* Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OpenCodeLockUI"));

	struct
	{
		bool                           SetCode;
		class AActor*                  Lock;
	} params = {};

	params.SetCode = SetCode;
	params.Lock = Lock;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.CloseCodeLockUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::CloseCodeLockUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.CloseCodeLockUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.QuickSlotKeyBind
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FKey                    SlotKey                        (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::QuickSlotKeyBind(int QuickSlotIndex, struct FKey* SlotKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.QuickSlotKeyBind"));

	struct
	{
		int                            QuickSlotIndex;
		struct FKey                    SlotKey;
	} params = {};

	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SlotKey != nullptr)
		*SlotKey = params.SlotKey;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SelectedContextEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_WorldActions>    ActionType                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SelectedContextEntry(TEnumAsByte<E_WorldActions>* ActionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SelectedContextEntry"));

	struct
	{
		TEnumAsByte<E_WorldActions>    ActionType;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActionType != nullptr)
		*ActionType = params.ActionType;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ContextMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_InteractionContextMenu_C* ContextMenu                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ContextMenu(class UBP_InteractionContextMenu_C** ContextMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ContextMenu"));

	struct
	{
		class UBP_InteractionContextMenu_C* ContextMenu;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ContextMenu != nullptr)
		*ContextMenu = params.ContextMenu;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ToggleInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ToggleInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ToggleInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ToggleCodeLockUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ToggleCodeLockUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ToggleCodeLockUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.IsInNoDamageZone
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::IsInNoDamageZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.IsInNoDamageZone"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToPickupHold
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ItemHeld                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ItemAdded                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::AttemptToPickupHold(const struct FS_InvItem& InvItem, bool* ItemHeld, bool* ItemAdded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToPickupHold"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           ItemHeld;
		bool                           ItemAdded;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemHeld != nullptr)
		*ItemHeld = params.ItemHeld;
	if (ItemAdded != nullptr)
		*ItemAdded = params.ItemAdded;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.LearnAllItemRecipes
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           RecipeLearnt                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::LearnAllItemRecipes(const struct FS_InvItem& InvItem, bool* RecipeLearnt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.LearnAllItemRecipes"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           RecipeLearnt;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RecipeLearnt != nullptr)
		*RecipeLearnt = params.RecipeLearnt;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AllRepairActorCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_RepairActors> RepairActors                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::AllRepairActorCheck(TArray<struct FS_RepairActors>* RepairActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AllRepairActorCheck"));

	struct
	{
		TArray<struct FS_RepairActors> RepairActors;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RepairActors != nullptr)
		*RepairActors = params.RepairActors;

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.RepairActorCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AActor*/       RepairActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::RepairActorCheck(class UClass* /*AActor*/ RepairActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.RepairActorCheck"));

	struct
	{
		class UClass* /*AActor*/       RepairActor;
		bool                           ReturnValue;
	} params = {};

	params.RepairActor = RepairActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.LeanCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::LeanCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.LeanCheck"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.LearnNewRecipe
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     RecipeDataHandle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::LearnNewRecipe(const struct FDataTableRowHandle& RecipeDataHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.LearnNewRecipe"));

	struct
	{
		struct FDataTableRowHandle     RecipeDataHandle;
		bool                           ReturnValue;
	} params = {};

	params.RecipeDataHandle = RecipeDataHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.KnownRecipeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     RecipeDataHandle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::KnownRecipeCheck(const struct FDataTableRowHandle& RecipeDataHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.KnownRecipeCheck"));

	struct
	{
		struct FDataTableRowHandle     RecipeDataHandle;
		bool                           ReturnValue;
	} params = {};

	params.RecipeDataHandle = RecipeDataHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyCharacterBody
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::DestroyCharacterBody()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyCharacterBody"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InGameLoadPlayerInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::InGameLoadPlayerInventory(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InGameLoadPlayerInventory"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.LoadPlayerInventory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           LoadLocation                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::LoadPlayerInventory(bool LoadLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.LoadPlayerInventory"));

	struct
	{
		bool                           LoadLocation;
	} params = {};

	params.LoadLocation = LoadLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyDeadCharacterBody
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::DestroyDeadCharacterBody()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyDeadCharacterBody"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.FindSpawnPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Random                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              SpawnLocation                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::FindSpawnPoint(bool Random, struct FTransform* SpawnLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.FindSpawnPoint"));

	struct
	{
		bool                           Random;
		struct FTransform              SpawnLocation;
	} params = {};

	params.Random = Random;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.TakeDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DamageType>      DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::TakeDamage(int Damage, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.TakeDamage"));

	struct
	{
		int                            Damage;
		TEnumAsByte<E_DamageType>      DamageType;
		TEnumAsByte<E_Hitbox>          HitBox;
	} params = {};

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitBox = HitBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHeldItemDurability
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DecreaseAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::DecreaseHeldItemDurability(float DecreaseAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHeldItemDurability"));

	struct
	{
		float                          DecreaseAmount;
	} params = {};

	params.DecreaseAmount = DecreaseAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.HoldingItemCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::HoldingItemCheck(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.HoldingItemCheck"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		bool                           ReturnValue;
	} params = {};

	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToHoldItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ItemHeld                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::AttemptToHoldItem(const struct FS_InvSlot& InvSlot, bool* ItemHeld)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToHoldItem"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		bool                           ItemHeld;
	} params = {};

	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemHeld != nullptr)
		*ItemHeld = params.ItemHeld;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UnHoldItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::UnHoldItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UnHoldItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenVenderMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::OpenVenderMenu(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OpenVenderMenu"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenExtCookingMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::OpenExtCookingMenu(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OpenExtCookingMenu"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenExtCraftingMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::OpenExtCraftingMenu(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OpenExtCraftingMenu"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SearchPlayerInventoryForMultiItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvSlot              InvSlots                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SearchPlayerInventoryForMultiItems(int Amount, bool RemoveItem, TArray<struct FName>* Item, bool* ItemFound, struct FS_InvSlot* InvSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SearchPlayerInventoryForMultiItems"));

	struct
	{
		TArray<struct FName>           Item;
		int                            Amount;
		bool                           RemoveItem;
		bool                           ItemFound;
		struct FS_InvSlot              InvSlots;
	} params = {};

	params.Amount = Amount;
	params.RemoveItem = RemoveItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Item != nullptr)
		*Item = params.Item;
	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (InvSlots != nullptr)
		*InvSlots = params.InvSlots;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SearchPlayerInventoryForItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ItemsFound                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvSlot              InvSlots                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSlot>      AllInvSlots                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::SearchPlayerInventoryForItem(const struct FName& Item, int Amount, bool RemoveItem, bool* ItemsFound, struct FS_InvSlot* InvSlots, TArray<struct FS_InvSlot>* AllInvSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SearchPlayerInventoryForItem"));

	struct
	{
		struct FName                   Item;
		int                            Amount;
		bool                           RemoveItem;
		bool                           ItemsFound;
		struct FS_InvSlot              InvSlots;
		TArray<struct FS_InvSlot>      AllInvSlots;
	} params = {};

	params.Item = Item;
	params.Amount = Amount;
	params.RemoveItem = RemoveItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemsFound != nullptr)
		*ItemsFound = params.ItemsFound;
	if (InvSlots != nullptr)
		*InvSlots = params.InvSlots;
	if (AllInvSlots != nullptr)
		*AllInvSlots = params.AllInvSlots;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SearchForWeaponMag
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ABP_MasterWeapon_C*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MagFound                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvSlot              ItemSlot                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SearchForWeaponMag(class UClass* /*ABP_MasterWeapon_C*/ Weapon, bool* MagFound, struct FS_InvSlot* ItemSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SearchForWeaponMag"));

	struct
	{
		class UClass* /*ABP_MasterWeapon_C*/ Weapon;
		bool                           MagFound;
		struct FS_InvSlot              ItemSlot;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MagFound != nullptr)
		*MagFound = params.MagFound;
	if (ItemSlot != nullptr)
		*ItemSlot = params.ItemSlot;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UseWeaponFromSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         WeaponSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_InventoryActions> Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UseWeaponFromSlot(const struct FS_WeaponSlotID& WeaponSlotID, TEnumAsByte<E_InventoryActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UseWeaponFromSlot"));

	struct
	{
		struct FS_WeaponSlotID         WeaponSlotID;
		TEnumAsByte<E_InventoryActions> Action;
	} params = {};

	params.WeaponSlotID = WeaponSlotID;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.HoldingWeaponCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlot           WeaponSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::HoldingWeaponCheck(const struct FS_WeaponSlot& WeaponSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.HoldingWeaponCheck"));

	struct
	{
		struct FS_WeaponSlot           WeaponSlot;
		bool                           ReturnValue;
	} params = {};

	params.WeaponSlot = WeaponSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.FindCompatiableWeaponSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              WeaponItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<E_WeaponSlots>     Slot                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_PlayerInventory_C::FindCompatiableWeaponSlot(const struct FS_InvItem& WeaponItem, TEnumAsByte<E_WeaponSlots>* Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.FindCompatiableWeaponSlot"));

	struct
	{
		struct FS_InvItem              WeaponItem;
		bool                           ReturnValue;
		TEnumAsByte<E_WeaponSlots>     Slot;
	} params = {};

	params.WeaponItem = WeaponItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Slot != nullptr)
		*Slot = params.Slot;

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AddAmmoToRangeWeapon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              WeaponSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              StartSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShowNotification               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::AddAmmoToRangeWeapon(const struct FS_InvSlot& WeaponSlot, const struct FS_InvSlot& StartSlot, bool Split, bool ShowNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AddAmmoToRangeWeapon"));

	struct
	{
		struct FS_InvSlot              WeaponSlot;
		struct FS_InvSlot              StartSlot;
		bool                           Split;
		bool                           ShowNotification;
	} params = {};

	params.WeaponSlot = WeaponSlot;
	params.StartSlot = StartSlot;
	params.Split = Split;
	params.ShowNotification = ShowNotification;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SwapAttachments
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AttachmentSlotID     AttachmentID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_WeaponInventory_C*   WeaponInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CheckOnly                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::SwapAttachments(const struct FS_AttachmentSlotID& AttachmentID, class UBP_WeaponInventory_C* WeaponInventory, bool CheckOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SwapAttachments"));

	struct
	{
		struct FS_AttachmentSlotID     AttachmentID;
		class UBP_WeaponInventory_C*   WeaponInventory;
		bool                           CheckOnly;
		bool                           ReturnValue;
	} params = {};

	params.AttachmentID = AttachmentID;
	params.WeaponInventory = WeaponInventory;
	params.CheckOnly = CheckOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.MoveAttachmentAddToContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AttachmentSlotID     Attachment_ID                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              EndSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ChecksOnly                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::MoveAttachmentAddToContainer(const struct FS_AttachmentSlotID& Attachment_ID, const struct FS_InvSlot& EndSlot, bool ChecksOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.MoveAttachmentAddToContainer"));

	struct
	{
		struct FS_AttachmentSlotID     Attachment_ID;
		struct FS_InvSlot              EndSlot;
		bool                           ChecksOnly;
		bool                           ReturnValue;
	} params = {};

	params.Attachment_ID = Attachment_ID;
	params.EndSlot = EndSlot;
	params.ChecksOnly = ChecksOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ApplyAttachment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            AttachmentItemID               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_WeaponInventory_C*   WeaponInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SpawnAttachment                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShowNotifications              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ApplyAttachment(const struct FS_InvSlotID& AttachmentItemID, class UBP_WeaponInventory_C* WeaponInventory, bool SpawnAttachment, bool ShowNotifications)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ApplyAttachment"));

	struct
	{
		struct FS_InvSlotID            AttachmentItemID;
		class UBP_WeaponInventory_C*   WeaponInventory;
		bool                           SpawnAttachment;
		bool                           ShowNotifications;
	} params = {};

	params.AttachmentItemID = AttachmentItemID;
	params.WeaponInventory = WeaponInventory;
	params.SpawnAttachment = SpawnAttachment;
	params.ShowNotifications = ShowNotifications;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AddAttachmentFromSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            Attachment_Item_ID             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_WeaponInventory_C*   WeaponInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowNotifications              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_PlayerInventory_C::AddAttachmentFromSlot(const struct FS_InvSlotID& Attachment_Item_ID, class UBP_WeaponInventory_C* WeaponInventory, bool ShowNotifications)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AddAttachmentFromSlot"));

	struct
	{
		struct FS_InvSlotID            Attachment_Item_ID;
		class UBP_WeaponInventory_C*   WeaponInventory;
		bool                           ShowNotifications;
		bool                           ReturnValue;
	} params = {};

	params.Attachment_Item_ID = Attachment_Item_ID;
	params.WeaponInventory = WeaponInventory;
	params.ShowNotifications = ShowNotifications;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.FindAttachmentSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::FindAttachmentSlot(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.FindAttachmentSlot"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveAttachment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AttachmentSlotID     AttachmentID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlotID            InvSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           DropItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SkipChecks                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Swap                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShowNotifications              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::RemoveAttachment(const struct FS_AttachmentSlotID& AttachmentID, const struct FS_InvSlotID& InvSlotID, bool DropItem, bool Rotated, bool SkipChecks, bool Swap, bool ShowNotifications)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveAttachment"));

	struct
	{
		struct FS_AttachmentSlotID     AttachmentID;
		struct FS_InvSlotID            InvSlotID;
		bool                           DropItem;
		bool                           Rotated;
		bool                           SkipChecks;
		bool                           Swap;
		bool                           ShowNotifications;
	} params = {};

	params.AttachmentID = AttachmentID;
	params.InvSlotID = InvSlotID;
	params.DropItem = DropItem;
	params.Rotated = Rotated;
	params.SkipChecks = SkipChecks;
	params.Swap = Swap;
	params.ShowNotifications = ShowNotifications;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenInvMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::OpenInvMenu(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OpenInvMenu"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.MoveAddToContainer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              StartSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              EndSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShowNotification               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::MoveAddToContainer(const struct FS_InvSlot& StartSlot, const struct FS_InvSlot& EndSlot, bool Split, bool ShowNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.MoveAddToContainer"));

	struct
	{
		struct FS_InvSlot              StartSlot;
		struct FS_InvSlot              EndSlot;
		bool                           Split;
		bool                           ShowNotification;
	} params = {};

	params.StartSlot = StartSlot;
	params.EndSlot = EndSlot;
	params.Split = Split;
	params.ShowNotification = ShowNotification;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.IsInPlayerInv
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   InventoryComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsInPlayerInv                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::IsInPlayerInv(class UBP_MasterInventory_C* InventoryComponent, bool* IsInPlayerInv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.IsInPlayerInv"));

	struct
	{
		class UBP_MasterInventory_C*   InventoryComponent;
		bool                           IsInPlayerInv;
	} params = {};

	params.InventoryComponent = InventoryComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsInPlayerInv != nullptr)
		*IsInPlayerInv = params.IsInPlayerInv;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClearContainerQuickSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   InvComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClearContainerQuickSlots(class UBP_MasterInventory_C* InvComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClearContainerQuickSlots"));

	struct
	{
		class UBP_MasterInventory_C*   InvComponent;
	} params = {};

	params.InvComponent = InvComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.CombineSlotStacks
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              StartSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              EndSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           SplitStack                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<E_SpecialSlotType> SpecialType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowNotifications              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::CombineSlotStacks(const struct FS_InvSlot& StartSlot, const struct FS_InvSlot& EndSlot, bool SplitStack, TEnumAsByte<E_SpecialSlotType> SpecialType, bool ShowNotifications)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.CombineSlotStacks"));

	struct
	{
		struct FS_InvSlot              StartSlot;
		struct FS_InvSlot              EndSlot;
		bool                           SplitStack;
		TEnumAsByte<E_SpecialSlotType> SpecialType;
		bool                           ShowNotifications;
	} params = {};

	params.StartSlot = StartSlot;
	params.EndSlot = EndSlot;
	params.SplitStack = SplitStack;
	params.SpecialType = SpecialType;
	params.ShowNotifications = ShowNotifications;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.QuickMove
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ItemIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::QuickMove(class UBP_MasterInventory_C* Inventory, int ItemIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.QuickMove"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		int                            ItemIndex;
	} params = {};

	params.Inventory = Inventory;
	params.ItemIndex = ItemIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SplitStack
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            InvSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SplitStack(const struct FS_InvSlotID& InvSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SplitStack"));

	struct
	{
		struct FS_InvSlotID            InvSlotID;
	} params = {};

	params.InvSlotID = InvSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ParentInventoryCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   AddInventory                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   ContainerInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AllowAdd                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ParentInventoryCheck(class UBP_MasterInventory_C* AddInventory, class UBP_MasterInventory_C* ContainerInventory, bool* AllowAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ParentInventoryCheck"));

	struct
	{
		class UBP_MasterInventory_C*   AddInventory;
		class UBP_MasterInventory_C*   ContainerInventory;
		bool                           AllowAdd;
	} params = {};

	params.AddInventory = AddInventory;
	params.ContainerInventory = ContainerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowAdd != nullptr)
		*AllowAdd = params.AllowAdd;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InitializePlayerInventory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::InitializePlayerInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InitializePlayerInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.RepairItemInSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            InvSlotID                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::RepairItemInSlot(const struct FS_InvSlotID& InvSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.RepairItemInSlot"));

	struct
	{
		struct FS_InvSlotID            InvSlotID;
	} params = {};

	params.InvSlotID = InvSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayerInventoryTotalItemAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            TotalAmount                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::PlayerInventoryTotalItemAmount(const struct FS_InvItem& InvItem, int* TotalAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.PlayerInventoryTotalItemAmount"));

	struct
	{
		struct FS_InvItem              InvItem;
		int                            TotalAmount;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TotalAmount != nullptr)
		*TotalAmount = params.TotalAmount;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToAddItemToSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              Inv_Item_ID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::AttemptToAddItemToSlot(const struct FS_InvSlot& Inv_Item_ID, const struct FDataTableRowHandle& Item, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToAddItemToSlot"));

	struct
	{
		struct FS_InvSlot              Inv_Item_ID;
		struct FDataTableRowHandle     Item;
		int                            Amount;
	} params = {};

	params.Inv_Item_ID = Inv_Item_ID;
	params.Item = Item;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.RepairItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              RepairedInvItem                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

bool UBP_PlayerInventory_C::RepairItem(const struct FS_InvItem& InvItem, struct FS_InvItem* RepairedInvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.RepairItem"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           ReturnValue;
		struct FS_InvItem              RepairedInvItem;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RepairedInvItem != nullptr)
		*RepairedInvItem = params.RepairedInvItem;

	return params.ReturnValue;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateItemUseAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Change_Amount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemEmpty                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              ItemOut                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateItemUseAmount(int Change_Amount, struct FS_InvItem* Item, bool* ItemEmpty, struct FS_InvItem* ItemOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateItemUseAmount"));

	struct
	{
		struct FS_InvItem              Item;
		int                            Change_Amount;
		bool                           ItemEmpty;
		struct FS_InvItem              ItemOut;
	} params = {};

	params.Change_Amount = Change_Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Item != nullptr)
		*Item = params.Item;
	if (ItemEmpty != nullptr)
		*ItemEmpty = params.ItemEmpty;
	if (ItemOut != nullptr)
		*ItemOut = params.ItemOut;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UseItemFromSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            InvSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_InventoryActions> Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UseItemFromSlot(const struct FS_InvSlotID& InvSlotID, TEnumAsByte<E_InventoryActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UseItemFromSlot"));

	struct
	{
		struct FS_InvSlotID            InvSlotID;
		TEnumAsByte<E_InventoryActions> Action;
	} params = {};

	params.InvSlotID = InvSlotID;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ConsumeItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Consumed                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ConsumeItem(const struct FS_InvItem& Item, bool* Consumed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ConsumeItem"));

	struct
	{
		struct FS_InvItem              Item;
		bool                           Consumed;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Consumed != nullptr)
		*Consumed = params.Consumed;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ItemActionCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_InventoryActions> Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AllowUse                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ItemActionCheck(const struct FS_InvItem& Item, TEnumAsByte<E_InventoryActions> Action, bool* AllowUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ItemActionCheck"));

	struct
	{
		struct FS_InvItem              Item;
		TEnumAsByte<E_InventoryActions> Action;
		bool                           AllowUse;
	} params = {};

	params.Item = Item;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowUse != nullptr)
		*AllowUse = params.AllowUse;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UseInventoryAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_InventoryActions> Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UseInventoryAction(const struct FS_InvSlot& InvSlot, TEnumAsByte<E_InventoryActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UseInventoryAction"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		TEnumAsByte<E_InventoryActions> Action;
	} params = {};

	params.InvSlot = InvSlot;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.QuickSlotUseSelect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::QuickSlotUseSelect(int QuickSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.QuickSlotUseSelect"));

	struct
	{
		int                            QuickSlotIndex;
	} params = {};

	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UnequipWeapon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            EndInvSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlotID         WeaponSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           DropItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Destroy                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::UnequipWeapon(const struct FS_InvSlotID& EndInvSlotID, const struct FS_WeaponSlotID& WeaponSlotID, bool DropItem, bool Rotated, bool Destroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UnequipWeapon"));

	struct
	{
		struct FS_InvSlotID            EndInvSlotID;
		struct FS_WeaponSlotID         WeaponSlotID;
		bool                           DropItem;
		bool                           Rotated;
		bool                           Destroy;
	} params = {};

	params.EndInvSlotID = EndInvSlotID;
	params.WeaponSlotID = WeaponSlotID;
	params.DropItem = DropItem;
	params.Rotated = Rotated;
	params.Destroy = Destroy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SwapWeaponSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         StartWeaponSlotID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlotID         EndWeaponSlotID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SwapWeaponSlots(const struct FS_WeaponSlotID& StartWeaponSlotID, const struct FS_WeaponSlotID& EndWeaponSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SwapWeaponSlots"));

	struct
	{
		struct FS_WeaponSlotID         StartWeaponSlotID;
		struct FS_WeaponSlotID         EndWeaponSlotID;
	} params = {};

	params.StartWeaponSlotID = StartWeaponSlotID;
	params.EndWeaponSlotID = EndWeaponSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateWeaponQuickSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         Weapon_Slot_ID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateWeaponQuickSlot(const struct FS_WeaponSlotID& Weapon_Slot_ID, int QuickSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateWeaponQuickSlot"));

	struct
	{
		struct FS_WeaponSlotID         Weapon_Slot_ID;
		int                            QuickSlotIndex;
	} params = {};

	params.Weapon_Slot_ID = Weapon_Slot_ID;
	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateWeaponSlotWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlot           WeaponSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateWeaponSlotWidget(const struct FS_WeaponSlot& WeaponSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateWeaponSlotWidget"));

	struct
	{
		struct FS_WeaponSlot           WeaponSlot;
	} params = {};

	params.WeaponSlot = WeaponSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.EquipWeaponFromSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            Slot_ID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlotID         Weapon_Slot_ID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::EquipWeaponFromSlot(const struct FS_InvSlotID& Slot_ID, const struct FS_WeaponSlotID& Weapon_Slot_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.EquipWeaponFromSlot"));

	struct
	{
		struct FS_InvSlotID            Slot_ID;
		struct FS_WeaponSlotID         Weapon_Slot_ID;
	} params = {};

	params.Slot_ID = Slot_ID;
	params.Weapon_Slot_ID = Weapon_Slot_ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToEquipWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ShowNotification               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           WeaponEquipped                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<E_WeaponSlots>     ItemWeaponSlot                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::AttemptToEquipWeapon(const struct FS_InvItem& InvItem, bool ShowNotification, bool* WeaponEquipped, TEnumAsByte<E_WeaponSlots>* ItemWeaponSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToEquipWeapon"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           ShowNotification;
		bool                           WeaponEquipped;
		TEnumAsByte<E_WeaponSlots>     ItemWeaponSlot;
	} params = {};

	params.InvItem = InvItem;
	params.ShowNotification = ShowNotification;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WeaponEquipped != nullptr)
		*WeaponEquipped = params.WeaponEquipped;
	if (ItemWeaponSlot != nullptr)
		*ItemWeaponSlot = params.ItemWeaponSlot;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateQuickSlotWeapon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         WeaponSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            QuickSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateQuickSlotWeapon(const struct FS_WeaponSlotID& WeaponSlotID, int QuickSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateQuickSlotWeapon"));

	struct
	{
		struct FS_WeaponSlotID         WeaponSlotID;
		int                            QuickSlot;
	} params = {};

	params.WeaponSlotID = WeaponSlotID;
	params.QuickSlot = QuickSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::OpenInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OpenInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.CloseInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::CloseInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.CloseInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AddQuickSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              EquipmentItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::AddQuickSlots(const struct FS_InvItem& EquipmentItem, class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AddQuickSlots"));

	struct
	{
		struct FS_InvItem              EquipmentItem;
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.EquipmentItem = EquipmentItem;
	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.StateTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::StateTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.StateTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ChangeState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterState>  NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ChangeState(TEnumAsByte<E_CharacterState> NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ChangeState"));

	struct
	{
		TEnumAsByte<E_CharacterState>  NewState;
	} params = {};

	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.HungerState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::HungerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.HungerState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ThirstState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ThirstState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ThirstState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.StarvationState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::StarvationState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.StarvationState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DehydrationState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::DehydrationState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DehydrationState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SprintCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::SprintCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SprintCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHunger
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::DecreaseHunger(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHunger"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.HealthRegeneration
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::HealthRegeneration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.HealthRegeneration"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.RechargeStaminaState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::RechargeStaminaState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.RechargeStaminaState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseHunger
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::IncreaseHunger(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseHunger"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseThirst
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::IncreaseThirst(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseThirst"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseThirst
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::DecreaseThirst(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseThirst"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::IncreaseHealth(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseHealth"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           PlayTakeDamageSound            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::DecreaseHealth(int Amount, bool PlayTakeDamageSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHealth"));

	struct
	{
		int                            Amount;
		bool                           PlayTakeDamageSound;
	} params = {};

	params.Amount = Amount;
	params.PlayTakeDamageSound = PlayTakeDamageSound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseStamina
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::DecreaseStamina(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseStamina"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UseStaminaState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::UseStaminaState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UseStaminaState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseStamina
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::IncreaseStamina(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseStamina"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.StaminaStateCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_CharacterState>  State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Min_Stamina                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanUseState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::StaminaStateCheck(TEnumAsByte<E_CharacterState> State, float Min_Stamina, bool* CanUseState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.StaminaStateCheck"));

	struct
	{
		TEnumAsByte<E_CharacterState>  State;
		float                          Min_Stamina;
		bool                           CanUseState;
	} params = {};

	params.State = State;
	params.Min_Stamina = Min_Stamina;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanUseState != nullptr)
		*CanUseState = params.CanUseState;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentCharacterState
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::OnRep_CurrentCharacterState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentCharacterState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentThirst
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::OnRep_CurrentThirst()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentThirst"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentHunger
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::OnRep_CurrentHunger()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentHunger"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentStamina
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::OnRep_CurrentStamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentStamina"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentHealth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::OnRep_CurrentHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentHealth"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.FindQuickSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_QuickSlot_C*         OutputSlot                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::FindQuickSlot(int QuickSlotIndex, class UBP_QuickSlot_C** OutputSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.FindQuickSlot"));

	struct
	{
		int                            QuickSlotIndex;
		class UBP_QuickSlot_C*         OutputSlot;
	} params = {};

	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutputSlot != nullptr)
		*OutputSlot = params.OutputSlot;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveQuickSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              EquipmentItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::RemoveQuickSlots(const struct FS_InvItem& EquipmentItem, class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveQuickSlots"));

	struct
	{
		struct FS_InvItem              EquipmentItem;
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.EquipmentItem = EquipmentItem;
	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ToggleBuildPartNameUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ToggleBuildPartNameUI(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ToggleBuildPartNameUI"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateQuickSlotItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            InvSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            QuickSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateQuickSlotItem(const struct FS_InvSlotID& InvSlotID, int QuickSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateQuickSlotItem"));

	struct
	{
		struct FS_InvSlotID            InvSlotID;
		int                            QuickSlot;
	} params = {};

	params.InvSlotID = InvSlotID;
	params.QuickSlot = QuickSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToAddItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           StackSearch                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShowNotifications              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           RemainingItem                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              RemainingInvItem               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlotID            NewItemSlot                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::AttemptToAddItem(const struct FS_InvItem& InvItem, bool StackSearch, bool ShowNotifications, bool* RemainingItem, struct FS_InvItem* RemainingInvItem, struct FS_InvSlotID* NewItemSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToAddItem"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           StackSearch;
		bool                           ShowNotifications;
		bool                           RemainingItem;
		struct FS_InvItem              RemainingInvItem;
		struct FS_InvSlotID            NewItemSlot;
	} params = {};

	params.InvItem = InvItem;
	params.StackSearch = StackSearch;
	params.ShowNotifications = ShowNotifications;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RemainingItem != nullptr)
		*RemainingItem = params.RemainingItem;
	if (RemainingInvItem != nullptr)
		*RemainingInvItem = params.RemainingInvItem;
	if (NewItemSlot != nullptr)
		*NewItemSlot = params.NewItemSlot;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.IsInventoryEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   ItemInv                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_EquipmentInventory_C* EquipmentInv                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsEquipped                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::IsInventoryEquipped(class UBP_MasterInventory_C* ItemInv, class UBP_EquipmentInventory_C* EquipmentInv, bool* IsEquipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.IsInventoryEquipped"));

	struct
	{
		class UBP_MasterInventory_C*   ItemInv;
		class UBP_EquipmentInventory_C* EquipmentInv;
		bool                           IsEquipped;
	} params = {};

	params.ItemInv = ItemInv;
	params.EquipmentInv = EquipmentInv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateItemQuickSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            Slot_ID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateItemQuickSlot(const struct FS_InvSlotID& Slot_ID, int QuickSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateItemQuickSlot"));

	struct
	{
		struct FS_InvSlotID            Slot_ID;
		int                            QuickSlotIndex;
	} params = {};

	params.Slot_ID = Slot_ID;
	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenEquipmentMenu
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C* EquipmentInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::OpenEquipmentMenu(class UBP_EquipmentInventory_C* EquipmentInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.OpenEquipmentMenu"));

	struct
	{
		class UBP_EquipmentInventory_C* EquipmentInventory;
	} params = {};

	params.EquipmentInventory = EquipmentInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AddItemToContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              ContainerSlot                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           RemainingItem                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::AddItemToContainer(const struct FS_InvItem& Item, const struct FS_InvSlot& ContainerSlot, bool* RemainingItem, struct FS_InvItem* InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AddItemToContainer"));

	struct
	{
		struct FS_InvItem              Item;
		struct FS_InvSlot              ContainerSlot;
		bool                           RemainingItem;
		struct FS_InvItem              InvItem;
	} params = {};

	params.Item = Item;
	params.ContainerSlot = ContainerSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RemainingItem != nullptr)
		*RemainingItem = params.RemainingItem;
	if (InvItem != nullptr)
		*InvItem = params.InvItem;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToEquipItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ItemEquipped                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::AttemptToEquipItem(const struct FS_InvItem& InvItem, bool* ItemEquipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToEquipItem"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           ItemEquipped;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemEquipped != nullptr)
		*ItemEquipped = params.ItemEquipped;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SwapEquipmentSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_EquipmentSlotID      StartEquipmentSlotID           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlotID      EndEquipmentSlotID             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SwapEquipmentSlots(const struct FS_EquipmentSlotID& StartEquipmentSlotID, const struct FS_EquipmentSlotID& EndEquipmentSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SwapEquipmentSlots"));

	struct
	{
		struct FS_EquipmentSlotID      StartEquipmentSlotID;
		struct FS_EquipmentSlotID      EndEquipmentSlotID;
	} params = {};

	params.StartEquipmentSlotID = StartEquipmentSlotID;
	params.EndEquipmentSlotID = EndEquipmentSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SpawnDroppedItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SpawnDroppedItem(const struct FS_InvItem& InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SpawnDroppedItem"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.EquipItemFromSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlotID      EquipmentSlotID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::EquipItemFromSlot(const struct FS_InvSlotID& SlotID, const struct FS_EquipmentSlotID& EquipmentSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.EquipItemFromSlot"));

	struct
	{
		struct FS_InvSlotID            SlotID;
		struct FS_EquipmentSlotID      EquipmentSlotID;
	} params = {};

	params.SlotID = SlotID;
	params.EquipmentSlotID = EquipmentSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UnequipItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            EndSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlotID      EquipmentSlotID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           DropItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           DestroyItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::UnequipItem(const struct FS_InvSlotID& EndSlotID, const struct FS_EquipmentSlotID& EquipmentSlotID, bool DropItem, bool Rotated, bool DestroyItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UnequipItem"));

	struct
	{
		struct FS_InvSlotID            EndSlotID;
		struct FS_EquipmentSlotID      EquipmentSlotID;
		bool                           DropItem;
		bool                           Rotated;
		bool                           DestroyItem;
	} params = {};

	params.EndSlotID = EndSlotID;
	params.EquipmentSlotID = EquipmentSlotID;
	params.DropItem = DropItem;
	params.Rotated = Rotated;
	params.DestroyItem = DestroyItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateEquipmentSlotWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_EquipmentSlot        EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateEquipmentSlotWidget(const struct FS_EquipmentSlot& EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateEquipmentSlotWidget"));

	struct
	{
		struct FS_EquipmentSlot        EquipmentSlot;
	} params = {};

	params.EquipmentSlot = EquipmentSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.DropItemFromSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_SpecialSlotType> SpecialType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::DropItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.DropItemFromSlot"));

	struct
	{
		struct FS_InvSlotID            SlotID;
		TEnumAsByte<E_SpecialSlotType> SpecialType;
		bool                           Split;
	} params = {};

	params.SlotID = SlotID;
	params.SpecialType = SpecialType;
	params.Split = Split;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveItemFromSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           SpecialSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::RemoveItemFromSlot(const struct FS_InvSlot& InvSlot, bool SpecialSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveItemFromSlot"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		bool                           SpecialSlot;
	} params = {};

	params.InvSlot = InvSlot;
	params.SpecialSlot = SpecialSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.LookAtTrace
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::LookAtTrace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.LookAtTrace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InteractionMath
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_CameraType>      CameraView                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Start                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::InteractionMath(TEnumAsByte<E_CameraType> CameraView, struct FVector* Start, struct FVector* End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InteractionMath"));

	struct
	{
		TEnumAsByte<E_CameraType>      CameraView;
		struct FVector                 Start;
		struct FVector                 End;
	} params = {};

	params.CameraView = CameraView;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.EndInteraction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::EndInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.EndInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.HitActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class AActor*                  HitActor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::HitActor(const struct FHitResult& Hit, class AActor** HitActor, class UPrimitiveComponent** HitComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.HitActor"));

	struct
	{
		struct FHitResult              Hit;
		class AActor*                  HitActor;
		class UPrimitiveComponent*     HitComponent;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HitActor != nullptr)
		*HitActor = params.HitActor;
	if (HitComponent != nullptr)
		*HitComponent = params.HitComponent;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InteractTrace
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    ActionType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::InteractTrace(const struct FVector& Start, const struct FVector& End, TEnumAsByte<E_WorldActions> ActionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InteractTrace"));

	struct
	{
		struct FVector                 Start;
		struct FVector                 End;
		TEnumAsByte<E_WorldActions>    ActionType;
	} params = {};

	params.Start = Start;
	params.End = End;
	params.ActionType = ActionType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SetInvSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlots                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      UpdatedSlots                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::SetInvSlots(const struct FS_InvSlot& InvSlots, int Height, int Width, bool Rotated, TArray<struct FS_InvSlot>* UpdatedSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SetInvSlots"));

	struct
	{
		struct FS_InvSlot              InvSlots;
		int                            Height;
		int                            Width;
		bool                           Rotated;
		TArray<struct FS_InvSlot>      UpdatedSlots;
	} params = {};

	params.InvSlots = InvSlots;
	params.Height = Height;
	params.Width = Width;
	params.Rotated = Rotated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UpdatedSlots != nullptr)
		*UpdatedSlots = params.UpdatedSlots;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.MoveItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            StartSlotID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlotID            EndSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<E_SpecialSlotType> SpecialType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowNotifications              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ItemMoved                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::MoveItem(const struct FS_InvSlotID& StartSlotID, const struct FS_InvSlotID& EndSlotID, bool Rotated, bool Split, TEnumAsByte<E_SpecialSlotType> SpecialType, bool ShowNotifications, bool* ItemMoved)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.MoveItem"));

	struct
	{
		struct FS_InvSlotID            StartSlotID;
		struct FS_InvSlotID            EndSlotID;
		bool                           Rotated;
		bool                           Split;
		TEnumAsByte<E_SpecialSlotType> SpecialType;
		bool                           ShowNotifications;
		bool                           ItemMoved;
	} params = {};

	params.StartSlotID = StartSlotID;
	params.EndSlotID = EndSlotID;
	params.Rotated = Rotated;
	params.Split = Split;
	params.SpecialType = SpecialType;
	params.ShowNotifications = ShowNotifications;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemMoved != nullptr)
		*ItemMoved = params.ItemMoved;
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.StaminaNom
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Stamina                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::StaminaNom(float Stamina)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.StaminaNom"));

	struct
	{
		float                          Stamina;
	} params = {};

	params.Stamina = Stamina;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateRespawnPointName
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_PlayerInventory_C::ServerUpdateRespawnPointName(const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateRespawnPointName"));

	struct
	{
		struct FText                   Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPlayerInventoryRepawned
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientPlayerInventoryRepawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPlayerInventoryRepawned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerPlayerInventoryRespawned
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerPlayerInventoryRespawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerPlayerInventoryRespawned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRemoveInventory
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientRemoveInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRemoveInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerResetRespawn
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerResetRespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerResetRespawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRespawnPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Random                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerRespawnPlayer(bool Random)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRespawnPlayer"));

	struct
	{
		bool                           Random;
	} params = {};

	params.Random = Random;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRespawnPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Random                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientRespawnPlayer(bool Random)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRespawnPlayer"));

	struct
	{
		bool                           Random;
	} params = {};

	params.Random = Random;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientShowRespawnScreen
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientShowRespawnScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientShowRespawnScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerKillPlayerCharacter
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerKillPlayerCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerKillPlayerCharacter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSprintKey
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Down                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerSprintKey(bool Down)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSprintKey"));

	struct
	{
		bool                           Down;
	} params = {};

	params.Down = Down;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterState>  CharacterState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateState(TEnumAsByte<E_CharacterState> CharacterState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateState"));

	struct
	{
		TEnumAsByte<E_CharacterState>  CharacterState;
	} params = {};

	params.CharacterState = CharacterState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateState
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterState>  CharacterState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerUpdateState(TEnumAsByte<E_CharacterState> CharacterState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateState"));

	struct
	{
		TEnumAsByte<E_CharacterState>  CharacterState;
	} params = {};

	params.CharacterState = CharacterState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.MovementInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::MovementInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.MovementInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRemoveWeaponAttachment
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AttachmentSlotID     AttachmentID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlotID            EndSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           DropItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerRemoveWeaponAttachment(const struct FS_AttachmentSlotID& AttachmentID, const struct FS_InvSlotID& EndSlotID, bool DropItem, bool Rotated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRemoveWeaponAttachment"));

	struct
	{
		struct FS_AttachmentSlotID     AttachmentID;
		struct FS_InvSlotID            EndSlotID;
		bool                           DropItem;
		bool                           Rotated;
	} params = {};

	params.AttachmentID = AttachmentID;
	params.EndSlotID = EndSlotID;
	params.DropItem = DropItem;
	params.Rotated = Rotated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapAttachmentItems
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AttachmentSlotID     AttachmentID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_WeaponInventory_C*   WeaponInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerSwapAttachmentItems(const struct FS_AttachmentSlotID& AttachmentID, class UBP_WeaponInventory_C* WeaponInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapAttachmentItems"));

	struct
	{
		struct FS_AttachmentSlotID     AttachmentID;
		class UBP_WeaponInventory_C*   WeaponInventory;
	} params = {};

	params.AttachmentID = AttachmentID;
	params.WeaponInventory = WeaponInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerAddAttachmentFromSlot
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            AttachmentItemID               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_WeaponInventory_C*   WeaponInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerAddAttachmentFromSlot(const struct FS_InvSlotID& AttachmentItemID, class UBP_WeaponInventory_C* WeaponInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerAddAttachmentFromSlot"));

	struct
	{
		struct FS_InvSlotID            AttachmentItemID;
		class UBP_WeaponInventory_C*   WeaponInventory;
	} params = {};

	params.AttachmentItemID = AttachmentItemID;
	params.WeaponInventory = WeaponInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateAttachmentItems
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_AttachmentSlot> Attachments                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UBP_WeaponInventory_C*   WeaponInventory                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateAttachmentItems(TArray<struct FS_AttachmentSlot> Attachments, class UBP_WeaponInventory_C* WeaponInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateAttachmentItems"));

	struct
	{
		TArray<struct FS_AttachmentSlot> Attachments;
		class UBP_WeaponInventory_C*   WeaponInventory;
	} params = {};

	params.Attachments = Attachments;
	params.WeaponInventory = WeaponInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerDestroyAttachment
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerDestroyAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerDestroyAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRemoveAttachment
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerRemoveAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRemoveAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AttachNewAttachment
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::AttachNewAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AttachNewAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ShowNewAttachment
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ShowNewAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ShowNewAttachment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateAttachment
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateAttachment(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateAttachment"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetDownItemFromSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_SpecialSlotType> SpecialType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientSetDownItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetDownItemFromSlot"));

	struct
	{
		struct FS_InvSlotID            SlotID;
		TEnumAsByte<E_SpecialSlotType> SpecialType;
		bool                           Split;
	} params = {};

	params.SlotID = SlotID;
	params.SpecialType = SpecialType;
	params.Split = Split;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetDownItemFromSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_SpecialSlotType> SpecialType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 SetLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                SetRotation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerSetDownItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split, const struct FVector& SetLocation, const struct FRotator& SetRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetDownItemFromSlot"));

	struct
	{
		struct FS_InvSlotID            SlotID;
		TEnumAsByte<E_SpecialSlotType> SpecialType;
		bool                           Split;
		struct FVector                 SetLocation;
		struct FRotator                SetRotation;
	} params = {};

	params.SlotID = SlotID;
	params.SpecialType = SpecialType;
	params.Split = Split;
	params.SetLocation = SetLocation;
	params.SetRotation = SetRotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetIgnoreActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerSetIgnoreActor(class AActor* Actor, float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetIgnoreActor"));

	struct
	{
		class AActor*                  Actor;
		float                          Time;
	} params = {};

	params.Actor = Actor;
	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetIgnoreActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  IgnoreInteractActor            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientSetIgnoreActor(class AActor* IgnoreInteractActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetIgnoreActor"));

	struct
	{
		class AActor*                  IgnoreInteractActor;
	} params = {};

	params.IgnoreInteractActor = IgnoreInteractActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRepairItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            InvSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerRepairItem(const struct FS_InvSlotID& InvSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRepairItem"));

	struct
	{
		struct FS_InvSlotID            InvSlotID;
	} params = {};

	params.InvSlotID = InvSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerAddAllQuickSlots
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerAddAllQuickSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerAddAllQuickSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEmptyTargetInventory
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   StartInventory                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   TargetInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerEmptyTargetInventory(class UBP_MasterInventory_C* StartInventory, class UBP_MasterInventory_C* TargetInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEmptyTargetInventory"));

	struct
	{
		class UBP_MasterInventory_C*   StartInventory;
		class UBP_MasterInventory_C*   TargetInventory;
	} params = {};

	params.StartInventory = StartInventory;
	params.TargetInventory = TargetInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRemoveQuickSlots
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RemoveAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientRemoveQuickSlots(int RemoveAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRemoveQuickSlots"));

	struct
	{
		int                            RemoveAmount;
	} params = {};

	params.RemoveAmount = RemoveAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientAddQuickSlots
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AddAmount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientAddQuickSlots(int AddAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientAddQuickSlots"));

	struct
	{
		int                            AddAmount;
	} params = {};

	params.AddAmount = AddAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetInventoryOpen
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InventoryOpen                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerSetInventoryOpen(bool InventoryOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetInventoryOpen"));

	struct
	{
		bool                           InventoryOpen;
	} params = {};

	params.InventoryOpen = InventoryOpen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSplitStack
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            InvSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerSplitStack(const struct FS_InvSlotID& InvSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSplitStack"));

	struct
	{
		struct FS_InvSlotID            InvSlotID;
	} params = {};

	params.InvSlotID = InvSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateDetails
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_ContainerDetails     InventoryDetails               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::UpdateDetails(const struct FS_ContainerDetails& InventoryDetails, class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateDetails"));

	struct
	{
		struct FS_ContainerDetails     InventoryDetails;
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.InventoryDetails = InventoryDetails;
	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetInventoryOpen
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InventoryOpen                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientSetInventoryOpen(bool InventoryOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetInventoryOpen"));

	struct
	{
		bool                           InventoryOpen;
	} params = {};

	params.InventoryOpen = InventoryOpen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateQuickSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            InvSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateQuickSlot(const struct FS_InvSlotID& InvSlotID, int QuickSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateQuickSlot"));

	struct
	{
		struct FS_InvSlotID            InvSlotID;
		int                            QuickSlotIndex;
	} params = {};

	params.InvSlotID = InvSlotID;
	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerQuickMoveItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ItemIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerQuickMoveItem(class UBP_MasterInventory_C* Inventory, int ItemIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerQuickMoveItem"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		int                            ItemIndex;
	} params = {};

	params.Inventory = Inventory;
	params.ItemIndex = ItemIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateWeaponQuickSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         Weapon_Slot_ID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerUpdateWeaponQuickSlot(const struct FS_WeaponSlotID& Weapon_Slot_ID, int QuickSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateWeaponQuickSlot"));

	struct
	{
		struct FS_WeaponSlotID         Weapon_Slot_ID;
		int                            QuickSlotIndex;
	} params = {};

	params.Weapon_Slot_ID = Weapon_Slot_ID;
	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateItemQuickSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            Slot_ID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerUpdateItemQuickSlot(const struct FS_InvSlotID& Slot_ID, int QuickSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateItemQuickSlot"));

	struct
	{
		struct FS_InvSlotID            Slot_ID;
		int                            QuickSlotIndex;
	} params = {};

	params.Slot_ID = Slot_ID;
	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUnequipWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            EndInvSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlotID         WeaponSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           DropItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Destroy                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerUnequipWeapon(const struct FS_InvSlotID& EndInvSlotID, const struct FS_WeaponSlotID& WeaponSlotID, bool DropItem, bool Rotated, bool Destroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUnequipWeapon"));

	struct
	{
		struct FS_InvSlotID            EndInvSlotID;
		struct FS_WeaponSlotID         WeaponSlotID;
		bool                           DropItem;
		bool                           Rotated;
		bool                           Destroy;
	} params = {};

	params.EndInvSlotID = EndInvSlotID;
	params.WeaponSlotID = WeaponSlotID;
	params.DropItem = DropItem;
	params.Rotated = Rotated;
	params.Destroy = Destroy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapWeaponItems
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         StartWeaponSlotID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlotID         EndWeaponSlotID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerSwapWeaponItems(const struct FS_WeaponSlotID& StartWeaponSlotID, const struct FS_WeaponSlotID& EndWeaponSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapWeaponItems"));

	struct
	{
		struct FS_WeaponSlotID         StartWeaponSlotID;
		struct FS_WeaponSlotID         EndWeaponSlotID;
	} params = {};

	params.StartWeaponSlotID = StartWeaponSlotID;
	params.EndWeaponSlotID = EndWeaponSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEquipWeaponFromSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            Slot_ID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlotID         Weapon_Slot_ID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerEquipWeaponFromSlot(const struct FS_InvSlotID& Slot_ID, const struct FS_WeaponSlotID& Weapon_Slot_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEquipWeaponFromSlot"));

	struct
	{
		struct FS_InvSlotID            Slot_ID;
		struct FS_WeaponSlotID         Weapon_Slot_ID;
	} params = {};

	params.Slot_ID = Slot_ID;
	params.Weapon_Slot_ID = Weapon_Slot_ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapEquipmentItems
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_EquipmentSlotID      StartEquipmentSlotID           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlotID      EndEquipmentSlotID             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerSwapEquipmentItems(const struct FS_EquipmentSlotID& StartEquipmentSlotID, const struct FS_EquipmentSlotID& EndEquipmentSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapEquipmentItems"));

	struct
	{
		struct FS_EquipmentSlotID      StartEquipmentSlotID;
		struct FS_EquipmentSlotID      EndEquipmentSlotID;
	} params = {};

	params.StartEquipmentSlotID = StartEquipmentSlotID;
	params.EndEquipmentSlotID = EndEquipmentSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUnequipItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            EndInvSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlotID      EquipmentSlotID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           DropItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           DestroyItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerUnequipItem(const struct FS_InvSlotID& EndInvSlotID, const struct FS_EquipmentSlotID& EquipmentSlotID, bool DropItem, bool Rotated, bool DestroyItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUnequipItem"));

	struct
	{
		struct FS_InvSlotID            EndInvSlotID;
		struct FS_EquipmentSlotID      EquipmentSlotID;
		bool                           DropItem;
		bool                           Rotated;
		bool                           DestroyItem;
	} params = {};

	params.EndInvSlotID = EndInvSlotID;
	params.EquipmentSlotID = EquipmentSlotID;
	params.DropItem = DropItem;
	params.Rotated = Rotated;
	params.DestroyItem = DestroyItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateEquipmentSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_EquipmentSlot        EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateEquipmentSlot(const struct FS_EquipmentSlot& EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateEquipmentSlot"));

	struct
	{
		struct FS_EquipmentSlot        EquipmentSlot;
	} params = {};

	params.EquipmentSlot = EquipmentSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEquipItemFromSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlotID      EquipmentSlotID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerEquipItemFromSlot(const struct FS_InvSlotID& SlotID, const struct FS_EquipmentSlotID& EquipmentSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEquipItemFromSlot"));

	struct
	{
		struct FS_InvSlotID            SlotID;
		struct FS_EquipmentSlotID      EquipmentSlotID;
	} params = {};

	params.SlotID = SlotID;
	params.EquipmentSlotID = EquipmentSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerDropItemFromSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_SpecialSlotType> SpecialType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerDropItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerDropItemFromSlot"));

	struct
	{
		struct FS_InvSlotID            SlotID;
		TEnumAsByte<E_SpecialSlotType> SpecialType;
		bool                           Split;
	} params = {};

	params.SlotID = SlotID;
	params.SpecialType = SpecialType;
	params.Split = Split;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerMoveItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            StartSlotID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlotID            EndSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Split                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<E_SpecialSlotType> SpecialType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerMoveItem(const struct FS_InvSlotID& StartSlotID, const struct FS_InvSlotID& EndSlotID, bool Rotated, bool Split, TEnumAsByte<E_SpecialSlotType> SpecialType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerMoveItem"));

	struct
	{
		struct FS_InvSlotID            StartSlotID;
		struct FS_InvSlotID            EndSlotID;
		bool                           Rotated;
		bool                           Split;
		TEnumAsByte<E_SpecialSlotType> SpecialType;
	} params = {};

	params.StartSlotID = StartSlotID;
	params.EndSlotID = EndSlotID;
	params.Rotated = Rotated;
	params.Split = Split;
	params.SpecialType = SpecialType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenLockpad
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SetCode                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Lock                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerOpenLockpad(bool SetCode, class AActor* Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenLockpad"));

	struct
	{
		bool                           SetCode;
		class AActor*                  Lock;
	} params = {};

	params.SetCode = SetCode;
	params.Lock = Lock;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetCode
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerSetCode(const struct FText& Code, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetCode"));

	struct
	{
		struct FText                   Code;
		class AActor*                  Actor;
	} params = {};

	params.Code = Code;
	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCloseLockpad
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientCloseLockpad()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCloseLockpad"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCodeResult
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Accepted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientCodeResult(bool Accepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCodeResult"));

	struct
	{
		bool                           Accepted;
	} params = {};

	params.Accepted = Accepted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerCheckCode
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerCheckCode(const struct FText& Code, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerCheckCode"));

	struct
	{
		struct FText                   Code;
		class AActor*                  Actor;
	} params = {};

	params.Code = Code;
	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InGameLoadComponentData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::InGameLoadComponentData(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InGameLoadComponentData"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.SaveComponentData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SaveComponentData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SaveComponentData"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerFinishInGameLoad
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerFinishInGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerFinishInGameLoad"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerLoadGame
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerLoadGame(const struct FString& SlotName, const struct FString& Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerLoadGame"));

	struct
	{
		struct FString                 SlotName;
		struct FString                 Level;
	} params = {};

	params.SlotName = SlotName;
	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSaveGame
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerSaveGame(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSaveGame"));

	struct
	{
		struct FString                 SlotName;
	} params = {};

	params.SlotName = SlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.test
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::test(class UBP_MasterInventory_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.test"));

	struct
	{
		class UBP_MasterInventory_C*   NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSellVenderItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorSell           VenderSellItem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerSellVenderItem(const struct FS_VendorSell& VenderSellItem, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSellVenderItem"));

	struct
	{
		struct FS_VendorSell           VenderSellItem;
		int                            Amount;
	} params = {};

	params.VenderSellItem = VenderSellItem;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerBuyVenderItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorBuy            VenderBuyListing               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerBuyVenderItem(const struct FS_VendorBuy& VenderBuyListing, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerBuyVenderItem"));

	struct
	{
		struct FS_VendorBuy            VenderBuyListing;
		int                            Amount;
	} params = {};

	params.VenderBuyListing = VenderBuyListing;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerCreateNewCraftingListing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   CraftingRecipeRow              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerCreateNewCraftingListing(class UBP_MasterInventory_C* CraftingInventory, const struct FName& CraftingRecipeRow, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerCreateNewCraftingListing"));

	struct
	{
		class UBP_MasterInventory_C*   CraftingInventory;
		struct FName                   CraftingRecipeRow;
		int                            Amount;
	} params = {};

	params.CraftingInventory = CraftingInventory;
	params.CraftingRecipeRow = CraftingRecipeRow;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.CancelCraftingQueue
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        CancelQueue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::CancelCraftingQueue(const struct FS_CraftingQueue& CancelQueue, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.CancelCraftingQueue"));

	struct
	{
		struct FS_CraftingQueue        CancelQueue;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.CancelQueue = CancelQueue;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtEquipmentInv
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C* EquipmentInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerOpenExtEquipmentInv(class UBP_EquipmentInventory_C* EquipmentInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtEquipmentInv"));

	struct
	{
		class UBP_EquipmentInventory_C* EquipmentInventory;
	} params = {};

	params.EquipmentInventory = EquipmentInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenContainerWindow
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ToggleInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerOpenContainerWindow(class UBP_MasterInventory_C* Inventory, bool ToggleInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenContainerWindow"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		bool                           ToggleInventory;
	} params = {};

	params.Inventory = Inventory;
	params.ToggleInventory = ToggleInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenContainerInv
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ToggleInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      Inventory_Slots                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::ClientOpenContainerInv(class UBP_MasterInventory_C* Inventory, bool ToggleInventory, TArray<struct FS_InvSlot> Inventory_Slots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenContainerInv"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		bool                           ToggleInventory;
		TArray<struct FS_InvSlot>      Inventory_Slots;
	} params = {};

	params.Inventory = Inventory;
	params.ToggleInventory = ToggleInventory;
	params.Inventory_Slots = Inventory_Slots;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.CreateNotificationInChild
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_NotificationDetails  NotificationDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::CreateNotificationInChild(const struct FS_NotificationDetails& NotificationDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.CreateNotificationInChild"));

	struct
	{
		struct FS_NotificationDetails  NotificationDetails;
	} params = {};

	params.NotificationDetails = NotificationDetails;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCreateNotification
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_NotificationDetails  NotificationDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientCreateNotification(const struct FS_NotificationDetails& NotificationDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCreateNotification"));

	struct
	{
		struct FS_NotificationDetails  NotificationDetails;
	} params = {};

	params.NotificationDetails = NotificationDetails;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRefreshGrids
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientRefreshGrids()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRefreshGrids"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCloseInventory
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientCloseInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCloseInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateWeaponSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlot           Weapon_Slot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateWeaponSlot(const struct FS_WeaponSlot& Weapon_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateWeaponSlot"));

	struct
	{
		struct FS_WeaponSlot           Weapon_Slot;
	} params = {};

	params.Weapon_Slot = Weapon_Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCloseContainerWindow
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientCloseContainerWindow(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCloseContainerWindow"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRemoveInvPanel
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientRemoveInvPanel(class UBP_MasterInventory_C* Inventory, bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRemoveInvPanel"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		bool                           Condition;
	} params = {};

	params.Inventory = Inventory;
	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.AddNewInvPanel
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Internal                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::AddNewInvPanel(class UBP_MasterInventory_C* Inventory, bool Internal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.AddNewInvPanel"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		bool                           Internal;
	} params = {};

	params.Inventory = Inventory;
	params.Internal = Internal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerLoadEquipmentPanels
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerLoadEquipmentPanels()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerLoadEquipmentPanels"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateStatUI
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientUpdateStatUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateStatUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenLockpad
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SetCode                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Lock                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientOpenLockpad(bool SetCode, class AActor* Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenLockpad"));

	struct
	{
		bool                           SetCode;
		class AActor*                  Lock;
	} params = {};

	params.SetCode = SetCode;
	params.Lock = Lock;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenItemContainerWindow
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggle_Inventory               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerOpenItemContainerWindow(class UBP_MasterInventory_C* Inventory, int Index, bool Toggle_Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenItemContainerWindow"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		int                            Index;
		bool                           Toggle_Inventory;
	} params = {};

	params.Inventory = Inventory;
	params.Index = Index;
	params.Toggle_Inventory = Toggle_Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenItemWeaponWindow
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ToggleInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerOpenItemWeaponWindow(class UBP_MasterInventory_C* Inventory, int Index, bool ToggleInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenItemWeaponWindow"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		int                            Index;
		bool                           ToggleInventory;
	} params = {};

	params.Inventory = Inventory;
	params.Index = Index;
	params.ToggleInventory = ToggleInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRefreshCraftingList
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Recipes                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_PlayerInventory_C::ClientRefreshCraftingList(TArray<struct FDataTableRowHandle> Recipes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRefreshCraftingList"));

	struct
	{
		TArray<struct FDataTableRowHandle> Recipes;
	} params = {};

	params.Recipes = Recipes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSelfInventoryPanel
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientSelfInventoryPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSelfInventoryPanel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenVenderMenu
// (FUNC_Net, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   VenderComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSlot>      Inventory                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::ClientOpenVenderMenu(class UBP_MasterInventory_C* VenderComponent, TArray<struct FS_InvSlot> Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenVenderMenu"));

	struct
	{
		class UBP_MasterInventory_C*   VenderComponent;
		TArray<struct FS_InvSlot>      Inventory;
	} params = {};

	params.VenderComponent = VenderComponent;
	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenVenderMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   VenderInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerOpenVenderMenu(class UBP_MasterInventory_C* VenderInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenVenderMenu"));

	struct
	{
		class UBP_MasterInventory_C*   VenderInventory;
	} params = {};

	params.VenderInventory = VenderInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientResumeCraftingListing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientResumeCraftingListing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientResumeCraftingListing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPauseCraftingListing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientPauseCraftingListing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPauseCraftingListing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRestartConvertSlotTimer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientRestartConvertSlotTimer(const struct FS_CookingSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRestartConvertSlotTimer"));

	struct
	{
		struct FS_CookingSlot          CookingSlot;
	} params = {};

	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientStartCookingSlotTimer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientStartCookingSlotTimer(const struct FS_CookingSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientStartCookingSlotTimer"));

	struct
	{
		struct FS_CookingSlot          CookingSlot;
	} params = {};

	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPauseAllCookingSlotTimers
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientPauseAllCookingSlotTimers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPauseAllCookingSlotTimers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientResumeCookingSlotTimer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CookingSlot          CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientResumeCookingSlotTimer(const struct FS_CookingSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientResumeCookingSlotTimer"));

	struct
	{
		struct FS_CookingSlot          CookingSlot;
	} params = {};

	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateCookingSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              CookingSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateCookingSlot(const struct FS_InvSlot& CookingSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateCookingSlot"));

	struct
	{
		struct FS_InvSlot              CookingSlot;
	} params = {};

	params.CookingSlot = CookingSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtCookingMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   CookingInventory               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSlot>      Inventory                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FS_CookingSlot>  CookingSlots                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_PlayerInventory_C::ClientOpenExtCookingMenu(class UBP_MasterInventory_C* CookingInventory, TArray<struct FS_InvSlot> Inventory, TArray<struct FS_CookingSlot> CookingSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtCookingMenu"));

	struct
	{
		class UBP_MasterInventory_C*   CookingInventory;
		TArray<struct FS_InvSlot>      Inventory;
		TArray<struct FS_CookingSlot>  CookingSlots;
	} params = {};

	params.CookingInventory = CookingInventory;
	params.Inventory = Inventory;
	params.CookingSlots = CookingSlots;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtCookingMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   CookingInventory               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerOpenExtCookingMenu(class UBP_MasterInventory_C* CookingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtCookingMenu"));

	struct
	{
		class UBP_MasterInventory_C*   CookingInventory;
	} params = {};

	params.CookingInventory = CookingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtCraftingMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   MasterInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSlot>      Inventory                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FS_CraftingQueue> CraftingQueue                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           CraftingBlocked                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientOpenExtCraftingMenu(class UBP_MasterInventory_C* MasterInventory, TArray<struct FS_InvSlot> Inventory, TArray<struct FS_CraftingQueue> CraftingQueue, bool CraftingBlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtCraftingMenu"));

	struct
	{
		class UBP_MasterInventory_C*   MasterInventory;
		TArray<struct FS_InvSlot>      Inventory;
		TArray<struct FS_CraftingQueue> CraftingQueue;
		bool                           CraftingBlocked;
	} params = {};

	params.MasterInventory = MasterInventory;
	params.Inventory = Inventory;
	params.CraftingQueue = CraftingQueue;
	params.CraftingBlocked = CraftingBlocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtCraftingMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerOpenExtCraftingMenu(class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtCraftingMenu"));

	struct
	{
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateCraftingListing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        ListingQueue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateCraftingListing(const struct FS_CraftingQueue& ListingQueue, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        ListingQueue;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.ListingQueue = ListingQueue;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientStartCraftingListingTimer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CraftingRecipe                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientStartCraftingListingTimer(const struct FName& CraftingRecipe, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientStartCraftingListingTimer"));

	struct
	{
		struct FName                   CraftingRecipe;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.CraftingRecipe = CraftingRecipe;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientAddCraftingListing
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        NewQueueListing                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientAddCraftingListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientAddCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        NewQueueListing;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.NewQueueListing = NewQueueListing;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenWeaponWindow
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_WeaponInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ToggleInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientOpenWeaponWindow(class UBP_WeaponInventory_C* Inventory, bool ToggleInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenWeaponWindow"));

	struct
	{
		class UBP_WeaponInventory_C*   Inventory;
		bool                           ToggleInventory;
	} params = {};

	params.Inventory = Inventory;
	params.ToggleInventory = ToggleInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenWeaponWindow
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ToggleInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerOpenWeaponWindow(class UBP_MasterInventory_C* Inventory, bool ToggleInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenWeaponWindow"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		bool                           ToggleInventory;
	} params = {};

	params.Inventory = Inventory;
	params.ToggleInventory = ToggleInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtInv
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inv                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerOpenExtInv(class UBP_MasterInventory_C* Inv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtInv"));

	struct
	{
		class UBP_MasterInventory_C*   Inv;
	} params = {};

	params.Inv = Inv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtInv
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   MasterInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSlot>      Inventory                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::ClientOpenExtInv(class UBP_MasterInventory_C* MasterInventory, TArray<struct FS_InvSlot> Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtInv"));

	struct
	{
		class UBP_MasterInventory_C*   MasterInventory;
		TArray<struct FS_InvSlot>      Inventory;
	} params = {};

	params.MasterInventory = MasterInventory;
	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientQuickSlotHighlight
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Highlight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientQuickSlotHighlight(int QuickSlotIndex, bool Highlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientQuickSlotHighlight"));

	struct
	{
		int                            QuickSlotIndex;
		bool                           Highlight;
	} params = {};

	params.QuickSlotIndex = QuickSlotIndex;
	params.Highlight = Highlight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientClearQuickSlotItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientClearQuickSlotItem(int QuickSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientClearQuickSlotItem"));

	struct
	{
		int                            QuickSlotIndex;
	} params = {};

	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtEquipmentInv
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C* EquipmentInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSlot>      Inventory                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::ClientOpenExtEquipmentInv(class UBP_EquipmentInventory_C* EquipmentInventory, TArray<struct FS_InvSlot> Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtEquipmentInv"));

	struct
	{
		class UBP_EquipmentInventory_C* EquipmentInventory;
		TArray<struct FS_InvSlot>      Inventory;
	} params = {};

	params.EquipmentInventory = EquipmentInventory;
	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientReloadChecks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientReloadChecks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientReloadChecks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerToggleMeleeCollision
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TraceOn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerToggleMeleeCollision(bool TraceOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerToggleMeleeCollision"));

	struct
	{
		bool                           TraceOn;
	} params = {};

	params.TraceOn = TraceOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEndChamber
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimMontage*            FPMontage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerEndChamber(class UAnimMontage* Montage, class UAnimMontage* FPMontage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEndChamber"));

	struct
	{
		class UAnimMontage*            Montage;
		class UAnimMontage*            FPMontage;
	} params = {};

	params.Montage = Montage;
	params.FPMontage = FPMontage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerToggleFireMode
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerToggleFireMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerToggleFireMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerChamberWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerChamberWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerChamberWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateClientWeaponSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WeaponSlots>     WeaponSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerUpdateClientWeaponSlot(TEnumAsByte<E_WeaponSlots> WeaponSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateClientWeaponSlot"));

	struct
	{
		TEnumAsByte<E_WeaponSlots>     WeaponSlot;
	} params = {};

	params.WeaponSlot = WeaponSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateWeaponQuickSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         WeaponSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            QuickSlotID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateWeaponQuickSlot(const struct FS_WeaponSlotID& WeaponSlotID, int QuickSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateWeaponQuickSlot"));

	struct
	{
		struct FS_WeaponSlotID         WeaponSlotID;
		int                            QuickSlotID;
	} params = {};

	params.WeaponSlotID = WeaponSlotID;
	params.QuickSlotID = QuickSlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientClearInventory
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientClearInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientClearInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUIFinishedCreating
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerUIFinishedCreating(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUIFinishedCreating"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRemoveUsingPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerRemoveUsingPlayer(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRemoveUsingPlayer"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetExtInvDetails
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_ContainerDetails     Details                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientSetExtInvDetails(const struct FS_ContainerDetails& Details, class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetExtInvDetails"));

	struct
	{
		struct FS_ContainerDetails     Details;
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Details = Details;
	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateSlotsWithItems
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>      Slots                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateSlotsWithItems(TArray<struct FS_InvSlot> Slots, class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateSlotsWithItems"));

	struct
	{
		TArray<struct FS_InvSlot>      Slots;
		class UBP_MasterInventory_C*   Inventory;
	} params = {};

	params.Slots = Slots;
	params.Inventory = Inventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateClientEquipmentSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentType>   EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerUpdateClientEquipmentSlot(TEnumAsByte<E_EquipmentType> EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateClientEquipmentSlot"));

	struct
	{
		TEnumAsByte<E_EquipmentType>   EquipmentSlot;
	} params = {};

	params.EquipmentSlot = EquipmentSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetPlayerName
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_PlayerInventory_C::ClientSetPlayerName(const struct FText& PlayerName, const struct FText& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetPlayerName"));

	struct
	{
		struct FText                   PlayerName;
		struct FText                   DisplayName;
	} params = {};

	params.PlayerName = PlayerName;
	params.DisplayName = DisplayName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetCookingInventorySlot
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>      NewParam                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::ClientSetCookingInventorySlot(TArray<struct FS_InvSlot> NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetCookingInventorySlot"));

	struct
	{
		TArray<struct FS_InvSlot>      NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateItemSlots
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>      Slots                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// struct FS_ContainerDetails     NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   NewParam2                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUpdateItemSlots(TArray<struct FS_InvSlot> Slots, const struct FS_ContainerDetails& NewParam, class UBP_MasterInventory_C* NewParam2)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateItemSlots"));

	struct
	{
		TArray<struct FS_InvSlot>      Slots;
		struct FS_ContainerDetails     NewParam;
		class UBP_MasterInventory_C*   NewParam2;
	} params = {};

	params.Slots = Slots;
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateInvSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              RootInvSlot                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            HeightSlots                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            WidthSlots                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientUpdateInvSlot(const struct FS_InvSlot& RootInvSlot, int HeightSlots, int WidthSlots, bool Rotated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateInvSlot"));

	struct
	{
		struct FS_InvSlot              RootInvSlot;
		int                            HeightSlots;
		int                            WidthSlots;
		bool                           Rotated;
	} params = {};

	params.RootInvSlot = RootInvSlot;
	params.HeightSlots = HeightSlots;
	params.WidthSlots = WidthSlots;
	params.Rotated = Rotated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InteractServerCheck
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WorldActions>    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InteractTarget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UBP_PlayerInventory_C::InteractServerCheck(TEnumAsByte<E_WorldActions> Action, const struct FHitResult& InteractTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InteractServerCheck"));

	struct
	{
		TEnumAsByte<E_WorldActions>    Action;
		struct FHitResult              InteractTarget;
	} params = {};

	params.Action = Action;
	params.InteractTarget = InteractTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSecondaryAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSecondaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPrimaryAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPrimaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSecondaryAction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerSecondaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSecondaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerPrimaryAction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerPrimaryAction(bool KeyDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerPrimaryAction"));

	struct
	{
		bool                           KeyDown;
	} params = {};

	params.KeyDown = KeyDown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUseWeaponAction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlotID         WeaponSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_InventoryActions> Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerUseWeaponAction(const struct FS_WeaponSlotID& WeaponSlotID, TEnumAsByte<E_InventoryActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUseWeaponAction"));

	struct
	{
		struct FS_WeaponSlotID         WeaponSlotID;
		TEnumAsByte<E_InventoryActions> Action;
	} params = {};

	params.WeaponSlotID = WeaponSlotID;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUseItemAction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            InvSlotID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_InventoryActions> Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerUseItemAction(const struct FS_InvSlotID& InvSlotID, TEnumAsByte<E_InventoryActions> Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUseItemAction"));

	struct
	{
		struct FS_InvSlotID            InvSlotID;
		TEnumAsByte<E_InventoryActions> Action;
	} params = {};

	params.InvSlotID = InvSlotID;
	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUseQuickSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ClientUseQuickSlot(int QuickSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUseQuickSlot"));

	struct
	{
		int                            QuickSlotIndex;
	} params = {};

	params.QuickSlotIndex = QuickSlotIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerToggleComponentInteractedActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerToggleComponentInteractedActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerToggleComponentInteractedActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEndInteraction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerEndInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEndInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerInteract
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 TraceStart                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 TraceEnd                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_WorldActions>    ActionType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerInteract(const struct FVector& TraceStart, const struct FVector& TraceEnd, TEnumAsByte<E_WorldActions> ActionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerInteract"));

	struct
	{
		struct FVector                 TraceStart;
		struct FVector                 TraceEnd;
		TEnumAsByte<E_WorldActions>    ActionType;
	} params = {};

	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.ActionType = ActionType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientInteract()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientInteract"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientResetHoldable
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ClientResetHoldable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientResetHoldable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SGK RemoveAdditionalChecks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SGK RemoveAdditionalChecks"));

	struct
	{
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerFinishHoldingNewItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ServerFinishHoldingNewItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerFinishHoldingNewItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPlaceNamedBuildPart
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_PlayerInventory_C::ClientPlaceNamedBuildPart(const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPlaceNamedBuildPart"));

	struct
	{
		struct FText                   Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetBuildMode
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BuildMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ServerSetBuildMode(bool BuildMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetBuildMode"));

	struct
	{
		bool                           BuildMode;
	} params = {};

	params.BuildMode = BuildMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.SGK ItemSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Sounds>          SoundType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::SGK_ItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.SGK ItemSound"));

	struct
	{
		struct FName                   ItemId;
		TEnumAsByte<E_Sounds>          SoundType;
	} params = {};

	params.ItemId = ItemId;
	params.SoundType = SoundType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayItemSound
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Sounds>          SoundType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::PlayItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.PlayItemSound"));

	struct
	{
		struct FName                   ItemId;
		TEnumAsByte<E_Sounds>          SoundType;
	} params = {};

	params.ItemId = ItemId;
	params.SoundType = SoundType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEndMontage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimMontage*            FPMontage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerEndMontage(class UAnimMontage* Montage, class UAnimMontage* FPMontage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEndMontage"));

	struct
	{
		class UAnimMontage*            Montage;
		class UAnimMontage*            FPMontage;
	} params = {};

	params.Montage = Montage;
	params.FPMontage = FPMontage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetControlRotation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::ClientSetControlRotation(class AController* Controller, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetControlRotation"));

	struct
	{
		class AController*             Controller;
		struct FRotator                Rotation;
	} params = {};

	params.Controller = Controller;
	params.Rotation = Rotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerPlayMontage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimMontage*            FPMontage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ServerPlayMontage(class UAnimMontage* Montage, class UAnimMontage* FPMontage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ServerPlayMontage"));

	struct
	{
		class UAnimMontage*            Montage;
		class UAnimMontage*            FPMontage;
	} params = {};

	params.Montage = Montage;
	params.FPMontage = FPMontage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ConsumeItemTicker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ConsumeItemTicker(const struct FS_InvItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ConsumeItemTicker"));

	struct
	{
		struct FS_InvItem              Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.ExecuteUbergraph_BP_PlayerInventory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerInventory_C::ExecuteUbergraph_BP_PlayerInventory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.ExecuteUbergraph_BP_PlayerInventory"));

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


// Function BP_PlayerInventory.BP_PlayerInventory_C.RotateMoveWidget__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerInventory_C::RotateMoveWidget__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.RotateMoveWidget__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerInventory.BP_PlayerInventory_C.InventoryToggled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerInventory_C::InventoryToggled__DelegateSignature(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerInventory.BP_PlayerInventory_C.InventoryToggled__DelegateSignature"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
