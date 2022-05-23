// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterAttachment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterAttachment.BP_MasterAttachment_C.SelectADSCameraTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              Value                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterAttachment_C::SelectADSCameraTransform(class USkeletalMesh* SkeletalMesh, struct FTransform* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAttachment.BP_MasterAttachment_C.SelectADSCameraTransform"));

	struct
	{
		class USkeletalMesh*           SkeletalMesh;
		struct FTransform              Value;
	} params = {};

	params.SkeletalMesh = SkeletalMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_MasterAttachment.BP_MasterAttachment_C.Load
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAttachment_C::Load(class UBP_SGKSaveGame_C* SaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAttachment.BP_MasterAttachment_C.Load"));

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


// Function BP_MasterAttachment.BP_MasterAttachment_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterAttachment_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAttachment.BP_MasterAttachment_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterAttachment.BP_MasterAttachment_C.ExecuteUbergraph_BP_MasterAttachment
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterAttachment_C::ExecuteUbergraph_BP_MasterAttachment(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterAttachment.BP_MasterAttachment_C.ExecuteUbergraph_BP_MasterAttachment"));

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
