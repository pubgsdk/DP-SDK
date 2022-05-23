// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InventoryPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InventoryPanel.BP_InventoryPanel_C.UpdateWeight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryPanel_C::UpdateWeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryPanel.BP_InventoryPanel_C.UpdateWeight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryPanel.BP_InventoryPanel_C.InitializeGridPanel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCanvasPanelSlot*        EquipmentList                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryPanel_C::InitializeGridPanel(class UBP_MasterInventory_C* Inventory, class UCanvasPanelSlot* EquipmentList, float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryPanel.BP_InventoryPanel_C.InitializeGridPanel"));

	struct
	{
		class UBP_MasterInventory_C*   Inventory;
		class UCanvasPanelSlot*        EquipmentList;
		float                          Scale;
	} params = {};

	params.Inventory = Inventory;
	params.EquipmentList = EquipmentList;
	params.Scale = Scale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryPanel.BP_InventoryPanel_C.BndEvt__HideViewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_InventoryPanel_C::BndEvt__HideViewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryPanel.BP_InventoryPanel_C.BndEvt__HideViewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryPanel.BP_InventoryPanel_C.UpdateWeightEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryPanel_C::UpdateWeightEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryPanel.BP_InventoryPanel_C.UpdateWeightEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryPanel.BP_InventoryPanel_C.ExecuteUbergraph_BP_InventoryPanel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryPanel_C::ExecuteUbergraph_BP_InventoryPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryPanel.BP_InventoryPanel_C.ExecuteUbergraph_BP_InventoryPanel"));

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
