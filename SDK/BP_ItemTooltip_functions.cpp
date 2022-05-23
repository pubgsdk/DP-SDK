// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ItemTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeArmor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTooltip_C::InitializeArmor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeArmor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeConsume
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTooltip_C::InitializeConsume()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeConsume"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeDamage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTooltip_C::InitializeDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeDecay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTooltip_C::InitializeDecay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeDecay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeTooltipDurability
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTooltip_C::InitializeTooltipDurability()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeTooltipDurability"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemTooltip.BP_ItemTooltip_C.PopulateRepairCost
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTooltip_C::PopulateRepairCost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemTooltip.BP_ItemTooltip_C.PopulateRepairCost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemTooltip.BP_ItemTooltip_C.PopulateRepairActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTooltip_C::PopulateRepairActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemTooltip.BP_ItemTooltip_C.PopulateRepairActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeTooltip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_InvItem              InvItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// struct FS_InvSlot              InvSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBP_ItemTooltip_C::InitializeTooltip(const struct FS_InvItem& InvItem, const struct FS_InvSlot& InvSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemTooltip.BP_ItemTooltip_C.InitializeTooltip"));

	struct
	{
		struct FS_InvItem              InvItem;
		struct FS_InvSlot              InvSlot;
	} params = {};

	params.InvItem = InvItem;
	params.InvSlot = InvSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
