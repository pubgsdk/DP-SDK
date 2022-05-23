#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EquipmentInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EquipmentInventory.BP_EquipmentInventory_C
// 0x0378 (0x05F8 - 0x0280)
class UBP_EquipmentInventory_C : public UBP_MasterInventory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class AActor*                                      AttachActor;                                              // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACharacter*                                  OwningCharacter;                                          // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_EquipmentSlot                            TacticalRigEquipmentSlot;                                 // 0x0298(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_EquipmentSlot                            GlovesEquipmentSlot;                                      // 0x02E0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_EquipmentSlot                            ShirtEquipmentSlot;                                       // 0x0328(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_EquipmentSlot                            BackpackEquipmentSlot;                                    // 0x0370(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_EquipmentSlot                            PantsEquipmentSlot;                                       // 0x03B8(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_EquipmentSlot                            EyewearEquipmentSlot;                                     // 0x0400(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_EquipmentSlot                            ShoesEquipmentSlot;                                       // 0x0448(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_EquipmentSlot                            HelmetEquipmentSlot;                                      // 0x0490(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_WeaponSlot                               SecondaryWeaponSlot;                                      // 0x04D8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_WeaponSlot                               PrimaryWeaponSlot;                                        // 0x0528(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<struct FS_StartingWeaponItem>               StartingWeapons;                                          // 0x0578(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseTotalArmour;                                           // 0x0588(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<E_Hitbox>, TEnumAsByte<E_EquipmentType>> EquipmentDamageMapping;                                   // 0x0590(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               CanDamageEffectEquipment;                                 // 0x05E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET
	TArray<struct FS_StartingEquipmentItem>            StartingEquipment;                                        // 0x05E8(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EquipmentInventory.BP_EquipmentInventory_C"));
		return ptr;
	}


	void EquipmentInventoryReplication(bool Replicate);
	bool HasItemEquipped(const struct FName& ItemId, struct FS_EquipmentSlot* EquipmentSlot);
	void ItemDecay();
	void StartItemEquipment();
	void AllWeaponActors(TArray<class AActor*>* Actors);
	void EquipWeapon(const struct FS_InvItem& Inv_Item, const struct FS_WeaponSlotID& Weapon_Slot_ID, bool ClearQuickSlot, bool Force, bool* Return_Value);
	struct FS_WeaponSlot SelectedWeaponSlot(TEnumAsByte<E_WeaponSlots> Weapon_Slot);
	void UpdateWeaponSlotItem(const struct FS_InvItem& InvItem, const struct FS_WeaponSlotID& Weapon_Slot_ID, class ABP_MasterHoldable_C* Holdable, int QuickSlot);
	void SpawnEquipmentDestructionBag();
	void DestroyAttachedActors();
	void LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete);
	void LoadEquipmentData(const struct FS_EquipmentInvSave& StorageSave);
	void SaveEquipmentData(class UBP_SGKSaveGame_C* SaveGame);
	void OnRep_SecondaryWeaponSlot();
	void OnRep_PrimaryEquipmentSlot();
	struct FS_EquipmentSlot SelectEquipmentSlot(TEnumAsByte<E_EquipmentType> EquipmentSlot);
	void HideComponentCheck(const struct FString& Tag, TEnumAsByte<E_EquipmentType> Ignore, bool* Found);
	void HideEquipmentComponents(bool Hide, const struct FS_InvItem& InvItem, TEnumAsByte<E_EquipmentType> IgnoreSlot);
	void SearchEquipmentForEmptySlots(bool AllowRotation, const struct FName& ItemId, TEnumAsByte<E_EquipmentType> IgnoreEquipment, bool WeightCheck, int WeightCheckAmount, bool* SpaceFound, bool* Rotation, TArray<struct FS_InvSlot>* FoundSlots);
	void ArmourDamageReduction(int Damage, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox, int* FinalDamage);
	void DamageEquipment(int Damage, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox);
	void InitializeEquipmentInventory(class AActor* OwningCharacter);
	void DestroyEquipmentItem(TEnumAsByte<E_EquipmentType> EquipmentSlot);
	void DecreaseEquipmentDurability(float DecreaseAmount, TEnumAsByte<E_EquipmentType> EquipmentSlot);
	void UpdateEquipmentSlotItem(const struct FS_InvItem& InvItem, const struct FS_EquipmentSlotID& EquipmentSlotID, class ABP_MasterClothingAttchment_C* EquipmentActor);
	void EquipItem(const struct FS_InvItem& InvItem, const struct FS_EquipmentSlotID& EquipmentSlotID, bool Force, bool SaveLoaded, bool* ItemEquipped);
	void CheckEquipmentSlot(TEnumAsByte<E_EquipmentType> EquipmentType, bool* SlotFull);
	void AllEquipmentItems(TEnumAsByte<E_EquipmentType> IgnoreSlot, TArray<struct FS_InvItem>* Items);
	void RemoveUserToEquipmentItems(bool RemoveAll, class UBP_PlayerInventory_C* Player_Inv);
	void CheckIfCanEquip(const struct FS_InvItem& InvItem, bool* CanEquip, TEnumAsByte<E_EquipmentType>* FreeSlot);
	void AddUserToEquipmentItems(class UBP_PlayerInventory_C* Player_Inv);
	void AllEquipmentActors(TEnumAsByte<E_EquipmentType> IgnoreSlot, TArray<class ABP_MasterClothingAttchment_C*>* Actors);
	void OnRep_ShoesEquipmentSlot();
	void OnRep_PantsEquipmentSlot();
	void OnRep_EyewearEquipmentSlot();
	void OnRep_BackpackEquipmentSlot();
	void OnRep_ShirtEquipmentSlot();
	void OnRep_TacticalRigEquipmentSlot();
	void OnRep_GlovesEquipmentSlot();
	void OnRep_HelmetEquipmentSlot();
	void ReceiveBeginPlay();
	void LoadInventoryData(const struct FS_StorageSave& S_StorageSave);
	void SaveComponentData(class UBP_SGKSaveGame_C* SaveGame);
	void ServerRemoveUserToEquipmentItems(class UBP_PlayerInventory_C* PlayerInventory, bool RemoveAll);
	void ServerAddUserToEquipmentItems(class UBP_PlayerInventory_C* PlayerInventory);
	void ServerUpdateWeaponSlot(const struct FS_WeaponSlot& Weapon_Slot);
	void ServerUpdateEquipmentSlot(const struct FS_EquipmentSlot& EquipmentSlot);
	void SpawnDestructionBag();
	void ExecuteUbergraph_BP_EquipmentInventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
