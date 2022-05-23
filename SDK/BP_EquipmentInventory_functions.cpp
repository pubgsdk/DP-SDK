// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EquipmentInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipmentInventoryReplication
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Replicate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventory_C::EquipmentInventoryReplication(bool Replicate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipmentInventoryReplication"));

	struct
	{
		bool                           Replicate;
	} params = {};

	params.Replicate = Replicate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.HasItemEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_EquipmentSlot        EquipmentSlot                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

bool UBP_EquipmentInventory_C::HasItemEquipped(const struct FName& ItemId, struct FS_EquipmentSlot* EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.HasItemEquipped"));

	struct
	{
		struct FName                   ItemId;
		bool                           ReturnValue;
		struct FS_EquipmentSlot        EquipmentSlot;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EquipmentSlot != nullptr)
		*EquipmentSlot = params.EquipmentSlot;

	return params.ReturnValue;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ItemDecay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::ItemDecay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.ItemDecay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.StartItemEquipment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::StartItemEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.StartItemEquipment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllWeaponActors
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (CPF_Parm, CPF_OutParm)

void UBP_EquipmentInventory_C::AllWeaponActors(TArray<class AActor*>* Actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllWeaponActors"));

	struct
	{
		TArray<class AActor*>          Actors;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Inv_Item                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlotID         Weapon_Slot_ID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           ClearQuickSlot                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Force                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventory_C::EquipWeapon(const struct FS_InvItem& Inv_Item, const struct FS_WeaponSlotID& Weapon_Slot_ID, bool ClearQuickSlot, bool Force, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipWeapon"));

	struct
	{
		struct FS_InvItem              Inv_Item;
		struct FS_WeaponSlotID         Weapon_Slot_ID;
		bool                           ClearQuickSlot;
		bool                           Force;
		bool                           Return_Value;
	} params = {};

	params.Inv_Item = Inv_Item;
	params.Weapon_Slot_ID = Weapon_Slot_ID;
	params.ClearQuickSlot = ClearQuickSlot;
	params.Force = Force;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SelectedWeaponSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_WeaponSlots>     Weapon_Slot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlot           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

struct FS_WeaponSlot UBP_EquipmentInventory_C::SelectedWeaponSlot(TEnumAsByte<E_WeaponSlots> Weapon_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.SelectedWeaponSlot"));

	struct
	{
		TEnumAsByte<E_WeaponSlots>     Weapon_Slot;
		struct FS_WeaponSlot           ReturnValue;
	} params = {};

	params.Weapon_Slot = Weapon_Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.UpdateWeaponSlotItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_WeaponSlotID         Weapon_Slot_ID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class ABP_MasterHoldable_C*    Holdable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            QuickSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::UpdateWeaponSlotItem(const struct FS_InvItem& InvItem, const struct FS_WeaponSlotID& Weapon_Slot_ID, class ABP_MasterHoldable_C* Holdable, int QuickSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.UpdateWeaponSlotItem"));

	struct
	{
		struct FS_InvItem              InvItem;
		struct FS_WeaponSlotID         Weapon_Slot_ID;
		class ABP_MasterHoldable_C*    Holdable;
		int                            QuickSlot;
	} params = {};

	params.InvItem = InvItem;
	params.Weapon_Slot_ID = Weapon_Slot_ID;
	params.Holdable = Holdable;
	params.QuickSlot = QuickSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SpawnEquipmentDestructionBag
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::SpawnEquipmentDestructionBag()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.SpawnEquipmentDestructionBag"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.DestroyAttachedActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::DestroyAttachedActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.DestroyAttachedActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadComponentData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           LoadComplete                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventory_C::LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadComponentData"));

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


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadEquipmentData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_EquipmentInvSave     StorageSave                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::LoadEquipmentData(const struct FS_EquipmentInvSave& StorageSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadEquipmentData"));

	struct
	{
		struct FS_EquipmentInvSave     StorageSave;
	} params = {};

	params.StorageSave = StorageSave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SaveEquipmentData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::SaveEquipmentData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.SaveEquipmentData"));

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


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_SecondaryWeaponSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_SecondaryWeaponSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_SecondaryWeaponSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_PrimaryEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_PrimaryEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_PrimaryEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SelectEquipmentSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_EquipmentType>   EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlot        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

struct FS_EquipmentSlot UBP_EquipmentInventory_C::SelectEquipmentSlot(TEnumAsByte<E_EquipmentType> EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.SelectEquipmentSlot"));

	struct
	{
		TEnumAsByte<E_EquipmentType>   EquipmentSlot;
		struct FS_EquipmentSlot        ReturnValue;
	} params = {};

	params.EquipmentSlot = EquipmentSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.HideComponentCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Tag                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_EquipmentType>   Ignore                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Found                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventory_C::HideComponentCheck(const struct FString& Tag, TEnumAsByte<E_EquipmentType> Ignore, bool* Found)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.HideComponentCheck"));

	struct
	{
		struct FString                 Tag;
		TEnumAsByte<E_EquipmentType>   Ignore;
		bool                           Found;
	} params = {};

	params.Tag = Tag;
	params.Ignore = Ignore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Found != nullptr)
		*Found = params.Found;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.HideEquipmentComponents
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hide                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvItem              InvItem                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_EquipmentType>   IgnoreSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::HideEquipmentComponents(bool Hide, const struct FS_InvItem& InvItem, TEnumAsByte<E_EquipmentType> IgnoreSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.HideEquipmentComponents"));

	struct
	{
		bool                           Hide;
		struct FS_InvItem              InvItem;
		TEnumAsByte<E_EquipmentType>   IgnoreSlot;
	} params = {};

	params.Hide = Hide;
	params.InvItem = InvItem;
	params.IgnoreSlot = IgnoreSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SearchEquipmentForEmptySlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowRotation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_EquipmentType>   IgnoreEquipment                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           WeightCheck                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            WeightCheckAmount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SpaceFound                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Rotation                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      FoundSlots                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_EquipmentInventory_C::SearchEquipmentForEmptySlots(bool AllowRotation, const struct FName& ItemId, TEnumAsByte<E_EquipmentType> IgnoreEquipment, bool WeightCheck, int WeightCheckAmount, bool* SpaceFound, bool* Rotation, TArray<struct FS_InvSlot>* FoundSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.SearchEquipmentForEmptySlots"));

	struct
	{
		bool                           AllowRotation;
		struct FName                   ItemId;
		TEnumAsByte<E_EquipmentType>   IgnoreEquipment;
		bool                           WeightCheck;
		int                            WeightCheckAmount;
		bool                           SpaceFound;
		bool                           Rotation;
		TArray<struct FS_InvSlot>      FoundSlots;
	} params = {};

	params.AllowRotation = AllowRotation;
	params.ItemId = ItemId;
	params.IgnoreEquipment = IgnoreEquipment;
	params.WeightCheck = WeightCheck;
	params.WeightCheckAmount = WeightCheckAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpaceFound != nullptr)
		*SpaceFound = params.SpaceFound;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (FoundSlots != nullptr)
		*FoundSlots = params.FoundSlots;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ArmourDamageReduction
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DamageType>      DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            FinalDamage                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::ArmourDamageReduction(int Damage, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox, int* FinalDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.ArmourDamageReduction"));

	struct
	{
		int                            Damage;
		TEnumAsByte<E_DamageType>      DamageType;
		TEnumAsByte<E_Hitbox>          HitBox;
		int                            FinalDamage;
	} params = {};

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitBox = HitBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FinalDamage != nullptr)
		*FinalDamage = params.FinalDamage;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.DamageEquipment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DamageType>      DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::DamageEquipment(int Damage, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.DamageEquipment"));

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


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.InitializeEquipmentInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwningCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::InitializeEquipmentInventory(class AActor* OwningCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.InitializeEquipmentInventory"));

	struct
	{
		class AActor*                  OwningCharacter;
	} params = {};

	params.OwningCharacter = OwningCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.DestroyEquipmentItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentType>   EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::DestroyEquipmentItem(TEnumAsByte<E_EquipmentType> EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.DestroyEquipmentItem"));

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


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.DecreaseEquipmentDurability
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DecreaseAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_EquipmentType>   EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::DecreaseEquipmentDurability(float DecreaseAmount, TEnumAsByte<E_EquipmentType> EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.DecreaseEquipmentDurability"));

	struct
	{
		float                          DecreaseAmount;
		TEnumAsByte<E_EquipmentType>   EquipmentSlot;
	} params = {};

	params.DecreaseAmount = DecreaseAmount;
	params.EquipmentSlot = EquipmentSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.UpdateEquipmentSlotItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlotID      EquipmentSlotID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class ABP_MasterClothingAttchment_C* EquipmentActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::UpdateEquipmentSlotItem(const struct FS_InvItem& InvItem, const struct FS_EquipmentSlotID& EquipmentSlotID, class ABP_MasterClothingAttchment_C* EquipmentActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.UpdateEquipmentSlotItem"));

	struct
	{
		struct FS_InvItem              InvItem;
		struct FS_EquipmentSlotID      EquipmentSlotID;
		class ABP_MasterClothingAttchment_C* EquipmentActor;
	} params = {};

	params.InvItem = InvItem;
	params.EquipmentSlotID = EquipmentSlotID;
	params.EquipmentActor = EquipmentActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_EquipmentSlotID      EquipmentSlotID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Force                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SaveLoaded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ItemEquipped                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventory_C::EquipItem(const struct FS_InvItem& InvItem, const struct FS_EquipmentSlotID& EquipmentSlotID, bool Force, bool SaveLoaded, bool* ItemEquipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipItem"));

	struct
	{
		struct FS_InvItem              InvItem;
		struct FS_EquipmentSlotID      EquipmentSlotID;
		bool                           Force;
		bool                           SaveLoaded;
		bool                           ItemEquipped;
	} params = {};

	params.InvItem = InvItem;
	params.EquipmentSlotID = EquipmentSlotID;
	params.Force = Force;
	params.SaveLoaded = SaveLoaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemEquipped != nullptr)
		*ItemEquipped = params.ItemEquipped;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.CheckEquipmentSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_EquipmentType>   EquipmentType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SlotFull                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventory_C::CheckEquipmentSlot(TEnumAsByte<E_EquipmentType> EquipmentType, bool* SlotFull)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.CheckEquipmentSlot"));

	struct
	{
		TEnumAsByte<E_EquipmentType>   EquipmentType;
		bool                           SlotFull;
	} params = {};

	params.EquipmentType = EquipmentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SlotFull != nullptr)
		*SlotFull = params.SlotFull;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllEquipmentItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentType>   IgnoreSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvItem>      Items                          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_EquipmentInventory_C::AllEquipmentItems(TEnumAsByte<E_EquipmentType> IgnoreSlot, TArray<struct FS_InvItem>* Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllEquipmentItems"));

	struct
	{
		TEnumAsByte<E_EquipmentType>   IgnoreSlot;
		TArray<struct FS_InvItem>      Items;
	} params = {};

	params.IgnoreSlot = IgnoreSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Items != nullptr)
		*Items = params.Items;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.RemoveUserToEquipmentItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RemoveAll                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_PlayerInventory_C*   Player_Inv                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::RemoveUserToEquipmentItems(bool RemoveAll, class UBP_PlayerInventory_C* Player_Inv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.RemoveUserToEquipmentItems"));

	struct
	{
		bool                           RemoveAll;
		class UBP_PlayerInventory_C*   Player_Inv;
	} params = {};

	params.RemoveAll = RemoveAll;
	params.Player_Inv = Player_Inv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.CheckIfCanEquip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           CanEquip                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<E_EquipmentType>   FreeSlot                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::CheckIfCanEquip(const struct FS_InvItem& InvItem, bool* CanEquip, TEnumAsByte<E_EquipmentType>* FreeSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.CheckIfCanEquip"));

	struct
	{
		struct FS_InvItem              InvItem;
		bool                           CanEquip;
		TEnumAsByte<E_EquipmentType>   FreeSlot;
	} params = {};

	params.InvItem = InvItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanEquip != nullptr)
		*CanEquip = params.CanEquip;
	if (FreeSlot != nullptr)
		*FreeSlot = params.FreeSlot;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.AddUserToEquipmentItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   Player_Inv                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::AddUserToEquipmentItems(class UBP_PlayerInventory_C* Player_Inv)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.AddUserToEquipmentItems"));

	struct
	{
		class UBP_PlayerInventory_C*   Player_Inv;
	} params = {};

	params.Player_Inv = Player_Inv;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllEquipmentActors
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentType>   IgnoreSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class ABP_MasterClothingAttchment_C*> Actors                         (CPF_Parm, CPF_OutParm)

void UBP_EquipmentInventory_C::AllEquipmentActors(TEnumAsByte<E_EquipmentType> IgnoreSlot, TArray<class ABP_MasterClothingAttchment_C*>* Actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllEquipmentActors"));

	struct
	{
		TEnumAsByte<E_EquipmentType>   IgnoreSlot;
		TArray<class ABP_MasterClothingAttchment_C*> Actors;
	} params = {};

	params.IgnoreSlot = IgnoreSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_ShoesEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_ShoesEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_ShoesEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_PantsEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_PantsEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_PantsEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_EyewearEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_EyewearEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_EyewearEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_BackpackEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_BackpackEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_BackpackEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_ShirtEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_ShirtEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_ShirtEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_TacticalRigEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_TacticalRigEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_TacticalRigEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_GlovesEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_GlovesEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_GlovesEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_HelmetEquipmentSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::OnRep_HelmetEquipmentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_HelmetEquipmentSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadInventoryData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_StorageSave          S_StorageSave                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::LoadInventoryData(const struct FS_StorageSave& S_StorageSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadInventoryData"));

	struct
	{
		struct FS_StorageSave          S_StorageSave;
	} params = {};

	params.S_StorageSave = S_StorageSave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SaveComponentData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::SaveComponentData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.SaveComponentData"));

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


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerRemoveUserToEquipmentItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveAll                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventory_C::ServerRemoveUserToEquipmentItems(class UBP_PlayerInventory_C* PlayerInventory, bool RemoveAll)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerRemoveUserToEquipmentItems"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           RemoveAll;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.RemoveAll = RemoveAll;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerAddUserToEquipmentItems
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::ServerAddUserToEquipmentItems(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerAddUserToEquipmentItems"));

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


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerUpdateWeaponSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_WeaponSlot           Weapon_Slot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::ServerUpdateWeaponSlot(const struct FS_WeaponSlot& Weapon_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerUpdateWeaponSlot"));

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


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerUpdateEquipmentSlot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_EquipmentSlot        EquipmentSlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::ServerUpdateEquipmentSlot(const struct FS_EquipmentSlot& EquipmentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerUpdateEquipmentSlot"));

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


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SpawnDestructionBag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventory_C::SpawnDestructionBag()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.SpawnDestructionBag"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ExecuteUbergraph_BP_EquipmentInventory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventory_C::ExecuteUbergraph_BP_EquipmentInventory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventory.BP_EquipmentInventory_C.ExecuteUbergraph_BP_EquipmentInventory"));

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
