// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EquipmentInventoryList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.CreateNewInventoryPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FirstPanel                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventoryList_C::CreateNewInventoryPanel(class UBP_MasterInventory_C* Inventory, bool FirstPanel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.CreateNewInventoryPanel"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		bool                           FirstPanel;
	} params = {};

	params.Inventory = Inventory;
	params.FirstPanel = FirstPanel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.RemoveInventoryPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventoryList_C::RemoveInventoryPanel(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.RemoveInventoryPanel"));

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


// Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.ClearInventoryPanels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_EquipmentInventoryList_C::ClearInventoryPanels()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.ClearInventoryPanels"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_EquipmentInventoryList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_EquipmentInventoryList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.ExecuteUbergraph_BP_EquipmentInventoryList
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EquipmentInventoryList_C::ExecuteUbergraph_BP_EquipmentInventoryList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EquipmentInventoryList.BP_EquipmentInventoryList_C.ExecuteUbergraph_BP_EquipmentInventoryList"));

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
