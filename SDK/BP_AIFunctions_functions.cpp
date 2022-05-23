// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AIFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AIFunctions.BP_AIFunctions_C.Same Team?
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SmartAIComponent_C*  AI_1                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBP_SmartAIComponent_C*  AI_2                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Match                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AIFunctions_C::Same_Team_(class UBP_SmartAIComponent_C* AI_1, class UBP_SmartAIComponent_C* AI_2, class UObject* __WorldContext, bool* Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIFunctions.BP_AIFunctions_C.Same Team?"));

	struct
	{
		class UBP_SmartAIComponent_C*  AI_1;
		class UBP_SmartAIComponent_C*  AI_2;
		class UObject*                 __WorldContext;
		bool                           Match;
	} params = {};

	params.AI_1 = AI_1;
	params.AI_2 = AI_2;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Match != nullptr)
		*Match = params.Match;
}


// Function BP_AIFunctions.BP_AIFunctions_C.Is Hitbox?
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Bone_Name                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_HitboxTypeAI>    HitBox                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AIFunctions_C::Is_Hitbox_(const struct FName& Bone_Name, class UObject* __WorldContext, TEnumAsByte<E_HitboxTypeAI>* HitBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AIFunctions.BP_AIFunctions_C.Is Hitbox?"));

	struct
	{
		struct FName                   Bone_Name;
		class UObject*                 __WorldContext;
		TEnumAsByte<E_HitboxTypeAI>    HitBox;
	} params = {};

	params.Bone_Name = Bone_Name;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (HitBox != nullptr)
		*HitBox = params.HitBox;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
