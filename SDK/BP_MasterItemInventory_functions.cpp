// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterItemInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterItemInventory.BP_MasterItemInventory_C.SGK AllowStartingItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowStartingItems             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MasterItemInventory_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemInventory.BP_MasterItemInventory_C.SGK AllowStartingItems"));

	struct
	{
		bool                           AllowStartingItems;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = params.AllowStartingItems;
}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.SGK SelfItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              SelfItem                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_MasterItemInventory_C::SGK_SelfItem(struct FS_InvItem* SelfItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemInventory.BP_MasterItemInventory_C.SGK SelfItem"));

	struct
	{
		struct FS_InvItem              SelfItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelfItem != nullptr)
		*SelfItem = params.SelfItem;
}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.RetrieveItemContainerDetails
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterItemInventory_C::RetrieveItemContainerDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemInventory.BP_MasterItemInventory_C.RetrieveItemContainerDetails"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MasterItemInventory_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemInventory.BP_MasterItemInventory_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.ExecuteUbergraph_BP_MasterItemInventory
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterItemInventory_C::ExecuteUbergraph_BP_MasterItemInventory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterItemInventory.BP_MasterItemInventory_C.ExecuteUbergraph_BP_MasterItemInventory"));

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
