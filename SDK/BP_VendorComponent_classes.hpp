#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VendorComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VendorComponent.BP_VendorComponent_C
// 0x0044 (0x02C4 - 0x0280)
class UBP_VendorComponent_C : public UBP_MasterInventory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	float                                              RestockTime;                                              // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseStockLimits;                                           // 0x028C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Restock;                                                  // 0x028D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x028E(0x0002) MISSED OFFSET
	TArray<struct FS_VendorBuy>                        BuyList;                                                  // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_VendorSell>                       SellList;                                                 // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<int>                                        VenderStock;                                              // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              CurrentRestockTime;                                       // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VendorComponent.BP_VendorComponent_C"));
		return ptr;
	}


	void SaveVenderData(class UBP_SGKSaveGame_C* SaveGame);
	void LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete);
	void RestockCheckTimer();
	bool StockLimitCheck(const struct FS_VendorBuy& BuyListing, bool RemoveStock, int Amount, int* FoundAmount);
	void SellVenderItem(const struct FS_VendorSell& SellListing, class UBP_PlayerInventory_C* PlayerInventory, int Amount);
	void BuyVenderItem(const struct FS_VendorBuy& BuyListing, class UBP_PlayerInventory_C* PlayerInventory, int Amount);
	bool BuyCostCheck(const struct FS_VendorBuy& BuyListing, class UBP_PlayerInventory_C* PlayerInventory, bool RemoveItems, int Amount);
	void ReceiveBeginPlay();
	void ServerBuyVenderItem(const struct FS_VendorBuy& VenderBuyListing, class UBP_PlayerInventory_C* PlayerInventory, int Amount);
	void ServerSellVenderItem(const struct FS_VendorSell& VenderSellListing, class UBP_PlayerInventory_C* PlayerInventory, int Amount);
	void SaveComponentData(class UBP_SGKSaveGame_C* SaveGame);
	void ExecuteUbergraph_BP_VendorComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
