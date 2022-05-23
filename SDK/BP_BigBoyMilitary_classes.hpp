#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BigBoyMilitary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BigBoyMilitary.BP_BigBoyMilitary_C
// 0x000B (0x05E8 - 0x05DD)
class ABP_BigBoyMilitary_C : public ABP_MasterAICharacter_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	class USkeletalMesh*                               Skin;                                                     // 0x05E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BigBoyMilitary.BP_BigBoyMilitary_C"));
		return ptr;
	}


	void OnRep_Skin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
