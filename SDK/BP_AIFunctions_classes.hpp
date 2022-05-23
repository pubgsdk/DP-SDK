#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AIFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIFunctions.BP_AIFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AIFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AIFunctions.BP_AIFunctions_C"));
		return ptr;
	}


	static void Same_Team_(class UBP_SmartAIComponent_C* AI_1, class UBP_SmartAIComponent_C* AI_2, class UObject* __WorldContext, bool* Match);
	static void Is_Hitbox_(const struct FName& Bone_Name, class UObject* __WorldContext, TEnumAsByte<E_HitboxTypeAI>* HitBox);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
