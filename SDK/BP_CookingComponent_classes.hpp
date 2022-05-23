#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CookingComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CookingComponent.BP_CookingComponent_C
// 0x0070 (0x02F0 - 0x0280)
class UBP_CookingComponent_C : public UBP_MasterInventory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TEnumAsByte<E_CookingType>                         CookingType;                                              // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	int                                                NumberOfCookingSlots;                                     // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RequireFuel;                                              // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	int                                                NumberOfFuelSlots;                                        // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>                 FuelItems;                                                // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               SwitchedOn;                                               // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	struct FTimerHandle                                FuelTimer;                                                // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                ConvertTimer;                                             // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DummySlots;                                               // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	TArray<struct FS_CookingSlot>                      CookingSlots;                                             // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       CookingUITitle;                                           // 0x02D8(0x0018) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CookingComponent.BP_CookingComponent_C"));
		return ptr;
	}


	void SaveCookingData(class UBP_SGKSaveGame_C* SaveGame);
	void LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete);
	void LoadCookingData(const struct FS_StorageSave& S_StorageSave);
	void SetSwitchedOn();
	void AddReturnedItems(const struct FS_CookingSlot& CookingSlot);
	bool FreeSlotCheck(const struct FS_CraftingCost& Item, struct FS_InvSlot* InvSlot);
	bool SetNewCookingItem(const struct FS_InvSlot& InvSlot, struct FS_CookingSlot* CookingSlot);
	void SetNewCookingSlotItem(const struct FS_InvSlot& InvSlot, const struct FS_InvItem& Item, bool SpecialSlot);
	void MoveCookingItem(const struct FS_InvSlot& ContentElement, const struct FS_InvSlot& CookingSlot);
	void UpdateCookingTimes();
	void IsCookingSlot(int Index, bool* IsCookingSlot);
	void RestartPlayerCookingSlot(const struct FS_CookingSlot& CookingSlot);
	void ClearCookingItem(const struct FS_InvSlot& InvSlot, struct FS_CookingSlot* CookingSlot);
	void StartPlayerCookingSlot(const struct FS_CookingSlot& CookingSlot);
	void UpdateCookingItems();
	void PauseAllPlayerCookingSlots();
	void ResumeAllPlayerCookingSlots();
	bool GetCookingInvSlots(TArray<struct FS_InvSlot>* CookingSlots);
	bool GetContentsSlots(TArray<struct FS_InvSlot>* ContentsSlots);
	bool GetFuelSlots(TArray<struct FS_InvSlot>* FuelSlots);
	void IsFuelItem(const struct FName& ItemId, bool* IsFuelItem);
	void IsIndexFuelSlot(int Index, bool* IsFuelSlot);
	bool UpdateFuelBurn();
	void BurnFuel();
	void ConstructContainsSlots();
	void ConstructCookingSlots();
	void ServerConvertTimerCheck();
	void ReceiveBeginPlay();
	void ConstructSlots();
	void SaveComponentData(class UBP_SGKSaveGame_C* SaveGame);
	void LoadInventoryData(const struct FS_StorageSave& S_StorageSave);
	void SGK_ItemMovedInInventory();
	void ServerBurnFuel(float Time);
	void TurnOn();
	void ClientResumeAllConvertSlots();
	void ClientPauseAllCookingSlotTimer();
	void ServerPauseBurnFuel();
	void ServerStartFuelBurn();
	void ServerStopBurningFuel();
	void SGK_ToggleComponent();
	void SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot);
	void ExecuteUbergraph_BP_CookingComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
