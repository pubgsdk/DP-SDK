// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AIManagerInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_AIManager_C*         AI_Manager                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AIManagerInterface_C::Return_AI_Manager(class ABP_AIManager_C** AI_Manager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager"));

	struct
	{
		class ABP_AIManager_C*         AI_Manager;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AI_Manager != nullptr)
		*AI_Manager = params.AI_Manager;
}


// Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager Settings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AIOptimization       AI_Settings                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AIManagerInterface_C::Return_AI_Manager_Settings(struct FS_AIOptimization* AI_Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager Settings"));

	struct
	{
		struct FS_AIOptimization       AI_Settings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AI_Settings != nullptr)
		*AI_Settings = params.AI_Settings;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
