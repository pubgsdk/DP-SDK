// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_FindRoamLocation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_FindRoamLocation.BTT_FindRoamLocation_C.Roam Location
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_FindRoamLocation_C::Roam_Location(struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindRoamLocation.BTT_FindRoamLocation_C.Roam Location"));

	struct
	{
		struct FVector                 Location;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BTT_FindRoamLocation.BTT_FindRoamLocation_C.Base Roam Location
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_FindRoamLocation_C::Base_Roam_Location(struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindRoamLocation.BTT_FindRoamLocation_C.Base Roam Location"));

	struct
	{
		struct FVector                 Location;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BTT_FindRoamLocation.BTT_FindRoamLocation_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_FindRoamLocation_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindRoamLocation.BTT_FindRoamLocation_C.ReceiveExecute"));

	struct
	{
		class AActor*                  OwnerActor;
	} params = {};

	params.OwnerActor = OwnerActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTT_FindRoamLocation.BTT_FindRoamLocation_C.ExecuteUbergraph_BTT_FindRoamLocation
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTT_FindRoamLocation_C::ExecuteUbergraph_BTT_FindRoamLocation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindRoamLocation.BTT_FindRoamLocation_C.ExecuteUbergraph_BTT_FindRoamLocation"));

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
