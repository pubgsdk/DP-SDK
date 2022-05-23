// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CraftingQueue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CraftingQueue.BP_CraftingQueue_C.AddCraftingQueueListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        NewQueueListing                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_MasterInventory_C*   CraftingInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingQueue_C::AddCraftingQueueListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.AddCraftingQueueListing"));

	struct
	{
		struct FS_CraftingQueue        NewQueueListing;
		class UBP_MasterInventory_C*   CraftingInventory;
	} params = {};

	params.NewQueueListing = NewQueueListing;
	params.CraftingInventory = CraftingInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingQueue.BP_CraftingQueue_C.ClearListings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingQueue_C::ClearListings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.ClearListings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingQueue.BP_CraftingQueue_C.PauseCraftingListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingQueue_C::PauseCraftingListing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.PauseCraftingListing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingQueue.BP_CraftingQueue_C.ResumeCraftingListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CraftingQueue_C::ResumeCraftingListing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.ResumeCraftingListing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingQueue.BP_CraftingQueue_C.UpdateCraftingListing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue        QueueListing                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingQueue_C::UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.UpdateCraftingListing"));

	struct
	{
		struct FS_CraftingQueue        QueueListing;
	} params = {};

	params.QueueListing = QueueListing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingQueue.BP_CraftingQueue_C.StartListingTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CraftingRecipe                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingQueue_C::StartListingTimer(const struct FName& CraftingRecipe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.StartListingTimer"));

	struct
	{
		struct FName                   CraftingRecipe;
	} params = {};

	params.CraftingRecipe = CraftingRecipe;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingQueue.BP_CraftingQueue_C.FindCraftingListing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CraftingRecipe                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_CraftingQueueListing_C* QueueListing                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_CraftingQueue_C::FindCraftingListing(const struct FName& CraftingRecipe, class UBP_CraftingQueueListing_C** QueueListing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.FindCraftingListing"));

	struct
	{
		struct FName                   CraftingRecipe;
		bool                           ReturnValue;
		class UBP_CraftingQueueListing_C* QueueListing;
	} params = {};

	params.CraftingRecipe = CraftingRecipe;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (QueueListing != nullptr)
		*QueueListing = params.QueueListing;

	return params.ReturnValue;
}


// Function BP_CraftingQueue.BP_CraftingQueue_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CraftingQueue_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.PreConstruct"));

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


// Function BP_CraftingQueue.BP_CraftingQueue_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_CraftingQueue_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CraftingQueue.BP_CraftingQueue_C.ExecuteUbergraph_BP_CraftingQueue
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CraftingQueue_C::ExecuteUbergraph_BP_CraftingQueue(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CraftingQueue.BP_CraftingQueue_C.ExecuteUbergraph_BP_CraftingQueue"));

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
