#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CraftingComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CraftingComponent.BP_CraftingComponent_C
// 0x0035 (0x02B5 - 0x0280)
class UBP_CraftingComponent_C : public UBP_MasterInventory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	int                                                NumberOfFuelSlots;                                        // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AutoSwitchOn;                                             // 0x028C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               RequireFuel;                                              // 0x028D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x028E(0x0002) MISSED OFFSET
	TArray<struct FDataTableRowHandle>                 FuelItems;                                                // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FTimerHandle                                FuelTimer;                                                // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                ConvertTimer;                                             // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DummySlots;                                               // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SwitchedOn;                                               // 0x02B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CraftingComponent.BP_CraftingComponent_C"));
		return ptr;
	}


	void IsFuelItem(const struct FName& ItemId, bool* IsFuelItem);
	bool UpdateFuelBurn();
	void BurnFuel();
	bool GetFuelSlots(TArray<struct FS_InvSlot>* FuelSlots);
	void IsIndexFuelSlot(int Index, bool* IsFuelSlot);
	void SaveCraftingData(class UBP_SGKSaveGame_C* SaveGame);
	void LoadCraftingData(const struct FS_StorageSave& StorageSave);
	void LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete);
	void ConstructContainsSlots();
	bool GetContentsSlots(TArray<struct FS_InvSlot>* ContentsSlots);
	void ReceiveBeginPlay();
	void ConstructSlots();
	void SaveComponentData(class UBP_SGKSaveGame_C* SaveGame);
	void LoadInventoryData(const struct FS_StorageSave& S_StorageSave);
	void SGK_ItemMovedInInventory();
	void ServerBurnFuel(float Time);
	void ServerTurnOn();
	void ServerPauseBurnFuel();
	void ServerStartFuelBurn();
	void ServerStopBurningFuel();
	void SGK_ToggleComponent();
	void ServerPauseCraftingListing();
	void ServerResumeCraftingListing();
	void ExecuteUbergraph_BP_CraftingComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
