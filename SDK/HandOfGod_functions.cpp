// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HandOfGod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HandOfGod.HandOfGod_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AHandOfGod_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HandOfGod.HandOfGod_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HandOfGod.HandOfGod_C.RemoveBannedPlayers
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AHandOfGod_C::RemoveBannedPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HandOfGod.HandOfGod_C.RemoveBannedPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HandOfGod.HandOfGod_C.AddBan
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 BannedID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AHandOfGod_C::AddBan(const struct FString& BannedID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HandOfGod.HandOfGod_C.AddBan"));

	struct
	{
		struct FString                 BannedID;
	} params = {};

	params.BannedID = BannedID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HandOfGod.HandOfGod_C.UpdateVeriEnforce
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AHandOfGod_C::UpdateVeriEnforce()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HandOfGod.HandOfGod_C.UpdateVeriEnforce"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HandOfGod.HandOfGod_C.ExecuteUbergraph_HandOfGod
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AHandOfGod_C::ExecuteUbergraph_HandOfGod(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HandOfGod.HandOfGod_C.ExecuteUbergraph_HandOfGod"));

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
