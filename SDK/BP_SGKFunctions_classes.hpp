#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKFunctions.BP_SGKFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKFunctions.BP_SGKFunctions_C"));
		return ptr;
	}


	static void SGK_AutoSelectChannelQuery(const struct FString& CollisionName, class UObject* __WorldContext, TEnumAsByte<ETraceTypeQuery>* Collision);
	static void SGK_AutoSelectChannel(const struct FString& CollisionName, class UObject* __WorldContext, TEnumAsByte<ECollisionChannel>* Collision);
	static void SGK_AutoSelectObjectType(const struct FString& CollisionName, class UObject* __WorldContext, TEnumAsByte<EObjectTypeQuery>* Type);
	static void SGK_GridClasses(TEnumAsByte<E_BuildType> BuildType, class UObject* __WorldContext, class UClass* /*ABP_MasterGrid_C*/* Grid);
	static struct FVector SGK_VectorTransform(const struct FTransform& InTransform, float Forward, float Right, float Up, class UObject* __WorldContext);
	static void SGK_ItemRepairCost(const struct FS_CraftingCost& RepairItems, float Durability, float Max_Durability, class UObject* __WorldContext, int* ItemCount);
	static int SGK_BuildPartRepairCost(class AActor* Actor, class UObject* __WorldContext);
	static void SGK_IsHitbox(const struct FName& BoneName, class UObject* __WorldContext, TEnumAsByte<E_Hitbox>* HitBox);
	static void SGK_HitboxDamage(TEnumAsByte<E_Hitbox> HitBox, class UObject* __WorldContext, TArray<struct FS_Damage>* HitboxDamage, int* Damage);
	static void SGK_AttachmentCompatibilityCheck(const struct FS_InvItem& WeaponItem, const struct FS_InvItem& AttachmentItem, class UObject* __WorldContext, bool* AllowAttachment);
	static void SGK_RootSpaceCheck(const struct FS_InvSlot& RootInvSlot, int Height, int Width, const struct FS_InvSlotID& IgnoreItem, bool Rotated, class UObject* __WorldContext, bool* SlotsBlocked, TArray<struct FS_InvSlot>* FoundSlots);
	static void SGK_ItemDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ItemDetails* ItemDetails);
	static void SGK_ItemAmmoDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_AmmoDetails* ItemAmmoDetails);
	static void SGK_ItemContainerDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ContainerDetails* ItemContainerDetails);
	static void SGK_InventoryGridDetails(const struct FDataTableRowHandle& RowHandle, class UObject* __WorldContext, bool* FoundGrid, struct FS_CustomGridLayoutData* InventoryGridData);
	static void SGK_BuildPartDetails(const struct FName& BuildPartID, class UObject* __WorldContext, bool* BuildPartFound, struct FS_BuildPartDetails* BuildPartDetails);
	static void SGK_ItemBuildPartDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_BuildPartDetails* Build_Part_Details);
	static void SGK_ItemRecipeDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_RecipeDetails* ItemRecipeDetails);
	static void SGK_ItemConsumableDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ConsumableDetails* ItemDetails);
	static void SGK_SlotItemDetails(class UBP_MasterInventory_C* Inventory, int Index, class UObject* __WorldContext, bool* ItemFound, struct FS_ItemDetails* ItemDetails);
	static void SGK_ItemHoldableDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_HoldableDetails* ItemHoldableDetails);
	static void SGK_DurabilityDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_DurabilityDetails* DurabilityDetails);
	static void SGK_ItemEquipmentDetails(const struct FS_InvItem& S_InvItem, class UObject* __WorldContext, bool* IsEquipmentItem, struct FS_EquipmentDetails* EquipmentDetails);
	static void SGK_ItemUIDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_UIDetails* ItemUIDetails);
	static void SGK_AttachmentDetails(const struct FS_InvItem& Item, class UObject* __WorldContext, bool* Is_Attachment, struct FS_AttachmentDetails* Attachment_Details);
	static bool SGK_RecipeDetails(const struct FName& RecipeRowName, class UObject* __WorldContext, struct FS_CraftingRecipe* CraftingRecipe);
	static void SGK_InvSlotItem(const struct FS_InvSlot& Inv_Slot, class UObject* __WorldContext, struct FS_InvItem* InvItem);
	static bool SGK_ItemCookingRecipe(const struct FS_InvItem& Item, TEnumAsByte<E_CookingType> CookingType, class UObject* __WorldContext, struct FS_CookingRecipe* CookingRecipe);
	static bool SGK_GetItemWeaponClass(const struct FS_InvItem& Item, class UObject* __WorldContext, class UClass* /*ABP_MasterWeapon_C*/* RangeWeapon);
	static bool SGK_GetItemRangeClass(const struct FS_InvItem& Item, class UObject* __WorldContext, class UClass* /*ABP_MasterRangeWeapon_C*/* RangeWeapon);
	static void SGK_ItemWeight(const struct FS_InvItem& Item, class UObject* __WorldContext, float* TotalWeight);
	static void SGK_IsSlotsSameItem(const struct FS_InvSlot& SlotOne, const struct FS_InvSlot& SlotTwo, class UObject* __WorldContext, bool* IsSameItem);
	static void SGK_ItemSize(const struct FS_InvItem& InvItem, class UObject* __WorldContext, int* Height, int* Width);
	static void SGK_GetRootSlot(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, struct FS_InvSlot* RootInvSlot);
	static void SGK_AllowStacking(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* AllowStacking);
	static void SGK_IsRootSlot(const struct FS_InvSlot& Inv_Slot, class UObject* __WorldContext, bool* IsRootSlot, int* RootIndex);
	static void SGK_SlotFinder(const struct FS_InvSlot& RootInvSlot, int Height, int Width, bool Rotated, class UObject* __WorldContext, TArray<struct FS_InvSlot>* FoundSlots);
	static void SGK_InvSlotFromSlotID(const struct FS_InvSlotID& SlotID, class UObject* __WorldContext, struct FS_InvSlot* InvSlot);
	static void SGK_InvSlotOccupied(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* Occupied);
	static void SGK_GetInvSlot(class UBP_MasterInventory_C* MasterInventory, int Index, class UObject* __WorldContext, bool* SlotFound, struct FS_InvSlot* InvSlot);
	static void SGK_InvSlotAmount(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* ItemValid, int* Amount);
	static void SGK_IsMaxAmount(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* MaxCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
