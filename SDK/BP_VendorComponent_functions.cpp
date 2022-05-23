// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VendorComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendorComponent.BP_VendorComponent_C.SaveVenderData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorComponent_C::SaveVenderData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.SaveVenderData"));

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


// Function BP_VendorComponent.BP_VendorComponent_C.LoadComponentData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           LoadComplete                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_VendorComponent_C::LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.LoadComponentData"));

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


// Function BP_VendorComponent.BP_VendorComponent_C.RestockCheckTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_VendorComponent_C::RestockCheckTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.RestockCheckTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorComponent.BP_VendorComponent_C.StockLimitCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorBuy            BuyListing                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           RemoveStock                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            FoundAmount                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_VendorComponent_C::StockLimitCheck(const struct FS_VendorBuy& BuyListing, bool RemoveStock, int Amount, int* FoundAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.StockLimitCheck"));

	struct
	{
		struct FS_VendorBuy            BuyListing;
		bool                           RemoveStock;
		int                            Amount;
		bool                           ReturnValue;
		int                            FoundAmount;
	} params = {};

	params.BuyListing = BuyListing;
	params.RemoveStock = RemoveStock;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundAmount != nullptr)
		*FoundAmount = params.FoundAmount;

	return params.ReturnValue;
}


// Function BP_VendorComponent.BP_VendorComponent_C.SellVenderItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorSell           SellListing                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorComponent_C::SellVenderItem(const struct FS_VendorSell& SellListing, class UBP_PlayerInventory_C* PlayerInventory, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.SellVenderItem"));

	struct
	{
		struct FS_VendorSell           SellListing;
		class UBP_PlayerInventory_C*   PlayerInventory;
		int                            Amount;
	} params = {};

	params.SellListing = SellListing;
	params.PlayerInventory = PlayerInventory;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorComponent.BP_VendorComponent_C.BuyVenderItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorBuy            BuyListing                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorComponent_C::BuyVenderItem(const struct FS_VendorBuy& BuyListing, class UBP_PlayerInventory_C* PlayerInventory, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.BuyVenderItem"));

	struct
	{
		struct FS_VendorBuy            BuyListing;
		class UBP_PlayerInventory_C*   PlayerInventory;
		int                            Amount;
	} params = {};

	params.BuyListing = BuyListing;
	params.PlayerInventory = PlayerInventory;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorComponent.BP_VendorComponent_C.BuyCostCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorBuy            BuyListing                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RemoveItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_VendorComponent_C::BuyCostCheck(const struct FS_VendorBuy& BuyListing, class UBP_PlayerInventory_C* PlayerInventory, bool RemoveItems, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.BuyCostCheck"));

	struct
	{
		struct FS_VendorBuy            BuyListing;
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           RemoveItems;
		int                            Amount;
		bool                           ReturnValue;
	} params = {};

	params.BuyListing = BuyListing;
	params.PlayerInventory = PlayerInventory;
	params.RemoveItems = RemoveItems;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_VendorComponent.BP_VendorComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_VendorComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorComponent.BP_VendorComponent_C.ServerBuyVenderItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorBuy            VenderBuyListing               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorComponent_C::ServerBuyVenderItem(const struct FS_VendorBuy& VenderBuyListing, class UBP_PlayerInventory_C* PlayerInventory, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.ServerBuyVenderItem"));

	struct
	{
		struct FS_VendorBuy            VenderBuyListing;
		class UBP_PlayerInventory_C*   PlayerInventory;
		int                            Amount;
	} params = {};

	params.VenderBuyListing = VenderBuyListing;
	params.PlayerInventory = PlayerInventory;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorComponent.BP_VendorComponent_C.ServerSellVenderItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_VendorSell           VenderSellListing              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorComponent_C::ServerSellVenderItem(const struct FS_VendorSell& VenderSellListing, class UBP_PlayerInventory_C* PlayerInventory, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.ServerSellVenderItem"));

	struct
	{
		struct FS_VendorSell           VenderSellListing;
		class UBP_PlayerInventory_C*   PlayerInventory;
		int                            Amount;
	} params = {};

	params.VenderSellListing = VenderSellListing;
	params.PlayerInventory = PlayerInventory;
	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VendorComponent.BP_VendorComponent_C.SaveComponentData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorComponent_C::SaveComponentData(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.SaveComponentData"));

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


// Function BP_VendorComponent.BP_VendorComponent_C.ExecuteUbergraph_BP_VendorComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VendorComponent_C::ExecuteUbergraph_BP_VendorComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VendorComponent.BP_VendorComponent_C.ExecuteUbergraph_BP_VendorComponent"));

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
