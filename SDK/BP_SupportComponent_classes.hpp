#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SupportComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SupportComponent.BP_SupportComponent_C
// 0x0059 (0x0259 - 0x0200)
class UBP_SupportComponent_C : public USceneComponent
{
public:
	TSet<TEnumAsByte<E_BuildType>>                     SupportingBuildParts;                                     // 0x0200(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              SupportAmount;                                            // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CheckRadius;                                              // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IndirectSupport;                                          // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SupportComponent.BP_SupportComponent_C"));
		return ptr;
	}


	void SupportCheck(bool* SupportFound, TEnumAsByte<E_BuildType>* BuildType, class AActor** HitActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
