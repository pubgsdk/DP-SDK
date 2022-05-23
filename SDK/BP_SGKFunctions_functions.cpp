// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AutoSelectChannelQuery
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CollisionName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ETraceTypeQuery>   Collision                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_AutoSelectChannelQuery(const struct FString& CollisionName, class UObject* __WorldContext, TEnumAsByte<ETraceTypeQuery>* Collision)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AutoSelectChannelQuery"));

	struct
	{
		struct FString                 CollisionName;
		class UObject*                 __WorldContext;
		TEnumAsByte<ETraceTypeQuery>   Collision;
	} params = {};

	params.CollisionName = CollisionName;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Collision != nullptr)
		*Collision = params.Collision;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AutoSelectChannel
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CollisionName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECollisionChannel> Collision                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_AutoSelectChannel(const struct FString& CollisionName, class UObject* __WorldContext, TEnumAsByte<ECollisionChannel>* Collision)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AutoSelectChannel"));

	struct
	{
		struct FString                 CollisionName;
		class UObject*                 __WorldContext;
		TEnumAsByte<ECollisionChannel> Collision;
	} params = {};

	params.CollisionName = CollisionName;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Collision != nullptr)
		*Collision = params.Collision;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AutoSelectObjectType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CollisionName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EObjectTypeQuery>  Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_AutoSelectObjectType(const struct FString& CollisionName, class UObject* __WorldContext, TEnumAsByte<EObjectTypeQuery>* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AutoSelectObjectType"));

	struct
	{
		struct FString                 CollisionName;
		class UObject*                 __WorldContext;
		TEnumAsByte<EObjectTypeQuery>  Type;
	} params = {};

	params.CollisionName = CollisionName;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GridClasses
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_BuildType>       BuildType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*ABP_MasterGrid_C*/ Grid                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_GridClasses(TEnumAsByte<E_BuildType> BuildType, class UObject* __WorldContext, class UClass* /*ABP_MasterGrid_C*/* Grid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GridClasses"));

	struct
	{
		TEnumAsByte<E_BuildType>       BuildType;
		class UObject*                 __WorldContext;
		class UClass* /*ABP_MasterGrid_C*/ Grid;
	} params = {};

	params.BuildType = BuildType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Grid != nullptr)
		*Grid = params.Grid;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK VectorTransform
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              InTransform                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Forward                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Right                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Up                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UBP_SGKFunctions_C::SGK_VectorTransform(const struct FTransform& InTransform, float Forward, float Right, float Up, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK VectorTransform"));

	struct
	{
		struct FTransform              InTransform;
		float                          Forward;
		float                          Right;
		float                          Up;
		class UObject*                 __WorldContext;
		struct FVector                 ReturnValue;
	} params = {};

	params.InTransform = InTransform;
	params.Forward = Forward;
	params.Right = Right;
	params.Up = Up;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemRepairCost
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingCost         RepairItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Durability                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Max_Durability                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ItemCount                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemRepairCost(const struct FS_CraftingCost& RepairItems, float Durability, float Max_Durability, class UObject* __WorldContext, int* ItemCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemRepairCost"));

	struct
	{
		struct FS_CraftingCost         RepairItems;
		float                          Durability;
		float                          Max_Durability;
		class UObject*                 __WorldContext;
		int                            ItemCount;
	} params = {};

	params.RepairItems = RepairItems;
	params.Durability = Durability;
	params.Max_Durability = Max_Durability;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemCount != nullptr)
		*ItemCount = params.ItemCount;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK BuildPartRepairCost
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UBP_SGKFunctions_C::SGK_BuildPartRepairCost(class AActor* Actor, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK BuildPartRepairCost"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		int                            ReturnValue;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsHitbox
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_IsHitbox(const struct FName& BoneName, class UObject* __WorldContext, TEnumAsByte<E_Hitbox>* HitBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsHitbox"));

	struct
	{
		struct FName                   BoneName;
		class UObject*                 __WorldContext;
		TEnumAsByte<E_Hitbox>          HitBox;
	} params = {};

	params.BoneName = BoneName;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (HitBox != nullptr)
		*HitBox = params.HitBox;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK HitboxDamage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_Damage>       HitboxDamage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<E_Hitbox>          HitBox                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Damage                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_HitboxDamage(TEnumAsByte<E_Hitbox> HitBox, class UObject* __WorldContext, TArray<struct FS_Damage>* HitboxDamage, int* Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK HitboxDamage"));

	struct
	{
		TArray<struct FS_Damage>       HitboxDamage;
		TEnumAsByte<E_Hitbox>          HitBox;
		class UObject*                 __WorldContext;
		int                            Damage;
	} params = {};

	params.HitBox = HitBox;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (HitboxDamage != nullptr)
		*HitboxDamage = params.HitboxDamage;
	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AttachmentCompatibilityCheck
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              WeaponItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvItem              AttachmentItem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AllowAttachment                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKFunctions_C::SGK_AttachmentCompatibilityCheck(const struct FS_InvItem& WeaponItem, const struct FS_InvItem& AttachmentItem, class UObject* __WorldContext, bool* AllowAttachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AttachmentCompatibilityCheck"));

	struct
	{
		struct FS_InvItem              WeaponItem;
		struct FS_InvItem              AttachmentItem;
		class UObject*                 __WorldContext;
		bool                           AllowAttachment;
	} params = {};

	params.WeaponItem = WeaponItem;
	params.AttachmentItem = AttachmentItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AllowAttachment != nullptr)
		*AllowAttachment = params.AllowAttachment;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK RootSpaceCheck
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              RootInvSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvSlotID            IgnoreItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SlotsBlocked                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FS_InvSlot>      FoundSlots                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKFunctions_C::SGK_RootSpaceCheck(const struct FS_InvSlot& RootInvSlot, int Height, int Width, const struct FS_InvSlotID& IgnoreItem, bool Rotated, class UObject* __WorldContext, bool* SlotsBlocked, TArray<struct FS_InvSlot>* FoundSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK RootSpaceCheck"));

	struct
	{
		struct FS_InvSlot              RootInvSlot;
		int                            Height;
		int                            Width;
		struct FS_InvSlotID            IgnoreItem;
		bool                           Rotated;
		class UObject*                 __WorldContext;
		bool                           SlotsBlocked;
		TArray<struct FS_InvSlot>      FoundSlots;
	} params = {};

	params.RootInvSlot = RootInvSlot;
	params.Height = Height;
	params.Width = Width;
	params.IgnoreItem = IgnoreItem;
	params.Rotated = Rotated;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SlotsBlocked != nullptr)
		*SlotsBlocked = params.SlotsBlocked;
	if (FoundSlots != nullptr)
		*FoundSlots = params.FoundSlots;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_ItemDetails          ItemDetails                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ItemDetails* ItemDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_ItemDetails          ItemDetails;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemAmmoDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_AmmoDetails          ItemAmmoDetails                (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemAmmoDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_AmmoDetails* ItemAmmoDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemAmmoDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_AmmoDetails          ItemAmmoDetails;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (ItemAmmoDetails != nullptr)
		*ItemAmmoDetails = params.ItemAmmoDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemContainerDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_ContainerDetails     ItemContainerDetails           (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemContainerDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ContainerDetails* ItemContainerDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemContainerDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_ContainerDetails     ItemContainerDetails;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (ItemContainerDetails != nullptr)
		*ItemContainerDetails = params.ItemContainerDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InventoryGridDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     RowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FoundGrid                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_CustomGridLayoutData InventoryGridData              (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InventoryGridDetails(const struct FDataTableRowHandle& RowHandle, class UObject* __WorldContext, bool* FoundGrid, struct FS_CustomGridLayoutData* InventoryGridData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InventoryGridDetails"));

	struct
	{
		struct FDataTableRowHandle     RowHandle;
		class UObject*                 __WorldContext;
		bool                           FoundGrid;
		struct FS_CustomGridLayoutData InventoryGridData;
	} params = {};

	params.RowHandle = RowHandle;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FoundGrid != nullptr)
		*FoundGrid = params.FoundGrid;
	if (InventoryGridData != nullptr)
		*InventoryGridData = params.InventoryGridData;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK BuildPartDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   BuildPartID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           BuildPartFound                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_BuildPartDetails     BuildPartDetails               (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_BuildPartDetails(const struct FName& BuildPartID, class UObject* __WorldContext, bool* BuildPartFound, struct FS_BuildPartDetails* BuildPartDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK BuildPartDetails"));

	struct
	{
		struct FName                   BuildPartID;
		class UObject*                 __WorldContext;
		bool                           BuildPartFound;
		struct FS_BuildPartDetails     BuildPartDetails;
	} params = {};

	params.BuildPartID = BuildPartID;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (BuildPartFound != nullptr)
		*BuildPartFound = params.BuildPartFound;
	if (BuildPartDetails != nullptr)
		*BuildPartDetails = params.BuildPartDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemBuildPartDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_BuildPartDetails     Build_Part_Details             (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemBuildPartDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_BuildPartDetails* Build_Part_Details)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemBuildPartDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_BuildPartDetails     Build_Part_Details;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (Build_Part_Details != nullptr)
		*Build_Part_Details = params.Build_Part_Details;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemRecipeDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_RecipeDetails        ItemRecipeDetails              (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemRecipeDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_RecipeDetails* ItemRecipeDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemRecipeDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_RecipeDetails        ItemRecipeDetails;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (ItemRecipeDetails != nullptr)
		*ItemRecipeDetails = params.ItemRecipeDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemConsumableDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_ConsumableDetails    ItemDetails                    (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemConsumableDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ConsumableDetails* ItemDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemConsumableDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_ConsumableDetails    ItemDetails;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK SlotItemDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_ItemDetails          ItemDetails                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_SlotItemDetails(class UBP_MasterInventory_C* Inventory, int Index, class UObject* __WorldContext, bool* ItemFound, struct FS_ItemDetails* ItemDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK SlotItemDetails"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		int                            Index;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_ItemDetails          ItemDetails;
	} params = {};

	params.Inventory = Inventory;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemHoldableDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_HoldableDetails      ItemHoldableDetails            (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemHoldableDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_HoldableDetails* ItemHoldableDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemHoldableDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_HoldableDetails      ItemHoldableDetails;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (ItemHoldableDetails != nullptr)
		*ItemHoldableDetails = params.ItemHoldableDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK DurabilityDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_DurabilityDetails    DurabilityDetails              (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_DurabilityDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_DurabilityDetails* DurabilityDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK DurabilityDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_DurabilityDetails    DurabilityDetails;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (DurabilityDetails != nullptr)
		*DurabilityDetails = params.DurabilityDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemEquipmentDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              S_InvItem                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsEquipmentItem                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_EquipmentDetails     EquipmentDetails               (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemEquipmentDetails(const struct FS_InvItem& S_InvItem, class UObject* __WorldContext, bool* IsEquipmentItem, struct FS_EquipmentDetails* EquipmentDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemEquipmentDetails"));

	struct
	{
		struct FS_InvItem              S_InvItem;
		class UObject*                 __WorldContext;
		bool                           IsEquipmentItem;
		struct FS_EquipmentDetails     EquipmentDetails;
	} params = {};

	params.S_InvItem = S_InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsEquipmentItem != nullptr)
		*IsEquipmentItem = params.IsEquipmentItem;
	if (EquipmentDetails != nullptr)
		*EquipmentDetails = params.EquipmentDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemUIDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_UIDetails            ItemUIDetails                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemUIDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_UIDetails* ItemUIDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemUIDetails"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		bool                           ItemFound;
		struct FS_UIDetails            ItemUIDetails;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
	if (ItemUIDetails != nullptr)
		*ItemUIDetails = params.ItemUIDetails;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AttachmentDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Is_Attachment                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_AttachmentDetails    Attachment_Details             (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_AttachmentDetails(const struct FS_InvItem& Item, class UObject* __WorldContext, bool* Is_Attachment, struct FS_AttachmentDetails* Attachment_Details)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AttachmentDetails"));

	struct
	{
		struct FS_InvItem              Item;
		class UObject*                 __WorldContext;
		bool                           Is_Attachment;
		struct FS_AttachmentDetails    Attachment_Details;
	} params = {};

	params.Item = Item;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Is_Attachment != nullptr)
		*Is_Attachment = params.Is_Attachment;
	if (Attachment_Details != nullptr)
		*Attachment_Details = params.Attachment_Details;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK RecipeDetails
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RecipeRowName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_CraftingRecipe       CraftingRecipe                 (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

bool UBP_SGKFunctions_C::SGK_RecipeDetails(const struct FName& RecipeRowName, class UObject* __WorldContext, struct FS_CraftingRecipe* CraftingRecipe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK RecipeDetails"));

	struct
	{
		struct FName                   RecipeRowName;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
		struct FS_CraftingRecipe       CraftingRecipe;
	} params = {};

	params.RecipeRowName = RecipeRowName;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (CraftingRecipe != nullptr)
		*CraftingRecipe = params.CraftingRecipe;

	return params.ReturnValue;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotItem
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvSlot              Inv_Slot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvItem              InvItem                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InvSlotItem(const struct FS_InvSlot& Inv_Slot, class UObject* __WorldContext, struct FS_InvItem* InvItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotItem"));

	struct
	{
		struct FS_InvSlot              Inv_Slot;
		class UObject*                 __WorldContext;
		struct FS_InvItem              InvItem;
	} params = {};

	params.Inv_Slot = Inv_Slot;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (InvItem != nullptr)
		*InvItem = params.InvItem;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemCookingRecipe
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_CookingType>     CookingType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_CookingRecipe        CookingRecipe                  (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

bool UBP_SGKFunctions_C::SGK_ItemCookingRecipe(const struct FS_InvItem& Item, TEnumAsByte<E_CookingType> CookingType, class UObject* __WorldContext, struct FS_CookingRecipe* CookingRecipe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemCookingRecipe"));

	struct
	{
		struct FS_InvItem              Item;
		TEnumAsByte<E_CookingType>     CookingType;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
		struct FS_CookingRecipe        CookingRecipe;
	} params = {};

	params.Item = Item;
	params.CookingType = CookingType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (CookingRecipe != nullptr)
		*CookingRecipe = params.CookingRecipe;

	return params.ReturnValue;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetItemWeaponClass
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*ABP_MasterWeapon_C*/ RangeWeapon                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_SGKFunctions_C::SGK_GetItemWeaponClass(const struct FS_InvItem& Item, class UObject* __WorldContext, class UClass* /*ABP_MasterWeapon_C*/* RangeWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetItemWeaponClass"));

	struct
	{
		struct FS_InvItem              Item;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
		class UClass* /*ABP_MasterWeapon_C*/ RangeWeapon;
	} params = {};

	params.Item = Item;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (RangeWeapon != nullptr)
		*RangeWeapon = params.RangeWeapon;

	return params.ReturnValue;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetItemRangeClass
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*ABP_MasterRangeWeapon_C*/ RangeWeapon                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_SGKFunctions_C::SGK_GetItemRangeClass(const struct FS_InvItem& Item, class UObject* __WorldContext, class UClass* /*ABP_MasterRangeWeapon_C*/* RangeWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetItemRangeClass"));

	struct
	{
		struct FS_InvItem              Item;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
		class UClass* /*ABP_MasterRangeWeapon_C*/ RangeWeapon;
	} params = {};

	params.Item = Item;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (RangeWeapon != nullptr)
		*RangeWeapon = params.RangeWeapon;

	return params.ReturnValue;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemWeight
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TotalWeight                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemWeight(const struct FS_InvItem& Item, class UObject* __WorldContext, float* TotalWeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemWeight"));

	struct
	{
		struct FS_InvItem              Item;
		class UObject*                 __WorldContext;
		float                          TotalWeight;
	} params = {};

	params.Item = Item;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (TotalWeight != nullptr)
		*TotalWeight = params.TotalWeight;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsSlotsSameItem
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              SlotOne                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              SlotTwo                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsSameItem                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKFunctions_C::SGK_IsSlotsSameItem(const struct FS_InvSlot& SlotOne, const struct FS_InvSlot& SlotTwo, class UObject* __WorldContext, bool* IsSameItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsSlotsSameItem"));

	struct
	{
		struct FS_InvSlot              SlotOne;
		struct FS_InvSlot              SlotTwo;
		class UObject*                 __WorldContext;
		bool                           IsSameItem;
	} params = {};

	params.SlotOne = SlotOne;
	params.SlotTwo = SlotTwo;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsSameItem != nullptr)
		*IsSameItem = params.IsSameItem;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemSize
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Width                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemSize(const struct FS_InvItem& InvItem, class UObject* __WorldContext, int* Height, int* Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemSize"));

	struct
	{
		struct FS_InvItem              InvItem;
		class UObject*                 __WorldContext;
		int                            Height;
		int                            Width;
	} params = {};

	params.InvItem = InvItem;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Height != nullptr)
		*Height = params.Height;
	if (Width != nullptr)
		*Width = params.Width;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetRootSlot
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              RootInvSlot                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_GetRootSlot(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, struct FS_InvSlot* RootInvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetRootSlot"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		class UObject*                 __WorldContext;
		struct FS_InvSlot              RootInvSlot;
	} params = {};

	params.InvSlot = InvSlot;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (RootInvSlot != nullptr)
		*RootInvSlot = params.RootInvSlot;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AllowStacking
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AllowStacking                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKFunctions_C::SGK_AllowStacking(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* AllowStacking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AllowStacking"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		class UObject*                 __WorldContext;
		bool                           AllowStacking;
	} params = {};

	params.InvSlot = InvSlot;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AllowStacking != nullptr)
		*AllowStacking = params.AllowStacking;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsRootSlot
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvSlot              Inv_Slot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsRootSlot                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            RootIndex                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_IsRootSlot(const struct FS_InvSlot& Inv_Slot, class UObject* __WorldContext, bool* IsRootSlot, int* RootIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsRootSlot"));

	struct
	{
		struct FS_InvSlot              Inv_Slot;
		class UObject*                 __WorldContext;
		bool                           IsRootSlot;
		int                            RootIndex;
	} params = {};

	params.Inv_Slot = Inv_Slot;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsRootSlot != nullptr)
		*IsRootSlot = params.IsRootSlot;
	if (RootIndex != nullptr)
		*RootIndex = params.RootIndex;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK SlotFinder
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlot              RootInvSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Rotated                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FS_InvSlot>      FoundSlots                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKFunctions_C::SGK_SlotFinder(const struct FS_InvSlot& RootInvSlot, int Height, int Width, bool Rotated, class UObject* __WorldContext, TArray<struct FS_InvSlot>* FoundSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK SlotFinder"));

	struct
	{
		struct FS_InvSlot              RootInvSlot;
		int                            Height;
		int                            Width;
		bool                           Rotated;
		class UObject*                 __WorldContext;
		TArray<struct FS_InvSlot>      FoundSlots;
	} params = {};

	params.RootInvSlot = RootInvSlot;
	params.Height = Height;
	params.Width = Width;
	params.Rotated = Rotated;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FoundSlots != nullptr)
		*FoundSlots = params.FoundSlots;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotFromSlotID
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvSlotID            SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              InvSlot                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InvSlotFromSlotID(const struct FS_InvSlotID& SlotID, class UObject* __WorldContext, struct FS_InvSlot* InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotFromSlotID"));

	struct
	{
		struct FS_InvSlotID            SlotID;
		class UObject*                 __WorldContext;
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.SlotID = SlotID;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (InvSlot != nullptr)
		*InvSlot = params.InvSlot;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotOccupied
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Occupied                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKFunctions_C::SGK_InvSlotOccupied(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* Occupied)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotOccupied"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		class UObject*                 __WorldContext;
		bool                           Occupied;
	} params = {};

	params.InvSlot = InvSlot;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Occupied != nullptr)
		*Occupied = params.Occupied;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetInvSlot
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UBP_MasterInventory_C*   MasterInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SlotFound                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FS_InvSlot              InvSlot                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_GetInvSlot(class UBP_MasterInventory_C* MasterInventory, int Index, class UObject* __WorldContext, bool* SlotFound, struct FS_InvSlot* InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetInvSlot"));

	struct
	{
		class UBP_MasterInventory_C*   MasterInventory;
		int                            Index;
		class UObject*                 __WorldContext;
		bool                           SlotFound;
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.MasterInventory = MasterInventory;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SlotFound != nullptr)
		*SlotFound = params.SlotFound;
	if (InvSlot != nullptr)
		*InvSlot = params.InvSlot;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotAmount
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ItemValid                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Amount                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InvSlotAmount(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* ItemValid, int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotAmount"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		class UObject*                 __WorldContext;
		bool                           ItemValid;
		int                            Amount;
	} params = {};

	params.InvSlot = InvSlot;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ItemValid != nullptr)
		*ItemValid = params.ItemValid;
	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsMaxAmount
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MaxCount                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKFunctions_C::SGK_IsMaxAmount(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* MaxCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsMaxAmount"));

	struct
	{
		struct FS_InvSlot              InvSlot;
		class UObject*                 __WorldContext;
		bool                           MaxCount;
	} params = {};

	params.InvSlot = InvSlot;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MaxCount != nullptr)
		*MaxCount = params.MaxCount;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
