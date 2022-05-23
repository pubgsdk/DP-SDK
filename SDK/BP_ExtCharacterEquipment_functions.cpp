// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ExtCharacterEquipment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.CreateNewInventoryPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCharacterEquipment_C::CreateNewInventoryPanel(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.CreateNewInventoryPanel"));

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


// Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.RemoveInventoryPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*   Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCharacterEquipment_C::RemoveInventoryPanel(class UBP_MasterInventory_C* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.RemoveInventoryPanel"));

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


// Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_ExtCharacterEquipment_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.PreConstruct"));

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


// Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ExtCharacterEquipment_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.ExecuteUbergraph_BP_ExtCharacterEquipment
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ExtCharacterEquipment_C::ExecuteUbergraph_BP_ExtCharacterEquipment(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ExtCharacterEquipment.BP_ExtCharacterEquipment_C.ExecuteUbergraph_BP_ExtCharacterEquipment"));

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
