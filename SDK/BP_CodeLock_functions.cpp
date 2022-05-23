// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CodeLock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CodeLock.BP_CodeLock_C.LockEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Locked                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_CodeLock_C::LockEffects(bool Locked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLock.BP_CodeLock_C.LockEffects"));

	struct
	{
		bool                           Locked;
	} params = {};

	params.Locked = Locked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLock.BP_CodeLock_C.LocationAttacher
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CodeLock_C::LocationAttacher()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLock.BP_CodeLock_C.LocationAttacher"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLock.BP_CodeLock_C.LoadExtraData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CodeLock_C::LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLock.BP_CodeLock_C.LoadExtraData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		int                            Index;
	} params = {};

	params.SaveGame = SaveGame;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CodeLock.BP_CodeLock_C.ExecuteUbergraph_BP_CodeLock
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CodeLock_C::ExecuteUbergraph_BP_CodeLock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CodeLock.BP_CodeLock_C.ExecuteUbergraph_BP_CodeLock"));

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
