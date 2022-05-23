// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKController.BP_SGKController_C.SGK AllowStartingItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowStartingItems             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKController_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK AllowStartingItems"));

	struct
	{
		bool                           AllowStartingItems;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = params.AllowStartingItems;
}


// Function BP_SGKController.BP_SGKController_C.SGK SelfItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              SelfItem                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::SGK_SelfItem(struct FS_InvItem* SelfItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK SelfItem"));

	struct
	{
		struct FS_InvItem              SelfItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelfItem != nullptr)
		*SelfItem = params.SelfItem;
}


// Function BP_SGKController.BP_SGKController_C.ToggleInGameMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::ToggleInGameMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ToggleInGameMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ReloadControllerCharacter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::ReloadControllerCharacter(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ReloadControllerCharacter"));

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


// Function BP_SGKController.BP_SGKController_C.AddEquipmentComponent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::AddEquipmentComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.AddEquipmentComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_Push To Talk_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_Push_To_Talk_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.InpActEvt_Push To Talk_K2Node_InputActionEvent_2"));

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


// Function BP_SGKController.BP_SGKController_C.InpActEvt_Push To Talk_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_Push_To_Talk_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.InpActEvt_Push To Talk_K2Node_InputActionEvent_1"));

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


// Function BP_SGKController.BP_SGKController_C.OnFailure_0D0C87DB4CF4558A85D1E1A098E99BAD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::OnFailure_0D0C87DB4CF4558A85D1E1A098E99BAD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.OnFailure_0D0C87DB4CF4558A85D1E1A098E99BAD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.OnSuccess_0D0C87DB4CF4558A85D1E1A098E99BAD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::OnSuccess_0D0C87DB4CF4558A85D1E1A098E99BAD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.OnSuccess_0D0C87DB4CF4558A85D1E1A098E99BAD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.OnFailure_62E4B8A142D952C87756DABCF4FCD5EA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   WrittenAchievementName         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          WrittenProgress                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            WrittenUserTag                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::OnFailure_62E4B8A142D952C87756DABCF4FCD5EA(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.OnFailure_62E4B8A142D952C87756DABCF4FCD5EA"));

	struct
	{
		struct FName                   WrittenAchievementName;
		float                          WrittenProgress;
		int                            WrittenUserTag;
	} params = {};

	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.OnSuccess_62E4B8A142D952C87756DABCF4FCD5EA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   WrittenAchievementName         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          WrittenProgress                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            WrittenUserTag                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::OnSuccess_62E4B8A142D952C87756DABCF4FCD5EA(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.OnSuccess_62E4B8A142D952C87756DABCF4FCD5EA"));

	struct
	{
		struct FName                   WrittenAchievementName;
		float                          WrittenProgress;
		int                            WrittenUserTag;
	} params = {};

	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK ItemMovedInInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::SGK_ItemMovedInInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK ItemMovedInInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK UpdateSpecialSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK UpdateSpecialSlot"));

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


// Function BP_SGKController.BP_SGKController_C.SGK ToggleComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::SGK_ToggleComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK ToggleComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK RemoveAdditionalChecks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK RemoveAdditionalChecks"));

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


// Function BP_SGKController.BP_SGKController_C.SGK ItemSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Sounds>          SoundType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::SGK_ItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK ItemSound"));

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


// Function BP_SGKController.BP_SGKController_C.SGK UpdateAllAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::SGK_UpdateAllAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK UpdateAllAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK DestroyWeaponAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::SGK_DestroyWeaponAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK DestroyWeaponAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK RemoveAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AttachmentType>  Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::SGK_RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK RemoveAttachment"));

	struct
	{
		TEnumAsByte<E_AttachmentType>  Attachment;
	} params = {};

	params.Attachment = Attachment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK ShowAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::SGK_ShowAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK ShowAttachments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK LoadWeaponAttachments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKController_C::SGK_LoadWeaponAttachments(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK LoadWeaponAttachments"));

	struct
	{
		bool                           Visible;
	} params = {};

	params.Visible = Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_SGKController_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK UpdateCharacterYaw
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::SGK_UpdateCharacterYaw(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK UpdateCharacterYaw"));

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


// Function BP_SGKController.BP_SGKController_C.ServerUpdateCharacterYaw
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::ServerUpdateCharacterYaw(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ServerUpdateCharacterYaw"));

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


// Function BP_SGKController.BP_SGKController_C.ClientInitialize
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::ClientInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ClientInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SGKController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.VOIPing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Talking                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_SGKController_C::VOIPing(bool Talking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.VOIPing"));

	struct
	{
		bool                           Talking;
	} params = {};

	params.Talking = Talking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ClientPossess
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::ClientPossess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ClientPossess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ClientEnableInput
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::ClientEnableInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ClientEnableInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ReceivePossess
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ReceivePossess"));

	struct
	{
		class APawn*                   PossessedPawn;
	} params = {};

	params.PossessedPawn = PossessedPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ClientRespawn
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::ClientRespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ClientRespawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ServerRespawn
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::ServerRespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ServerRespawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ClientInGameLoad
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SGKController_C::ClientInGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ClientInGameLoad"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.SGK SpawnOverflowItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.SGK SpawnOverflowItems"));

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


// Function BP_SGKController.BP_SGKController_C.UnlockAchievement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Achievement                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::UnlockAchievement(const struct FName& Achievement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.UnlockAchievement"));

	struct
	{
		struct FName                   Achievement;
	} params = {};

	params.Achievement = Achievement;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKController.BP_SGKController_C.ExecuteUbergraph_BP_SGKController
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SGKController_C::ExecuteUbergraph_BP_SGKController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKController.BP_SGKController_C.ExecuteUbergraph_BP_SGKController"));

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
