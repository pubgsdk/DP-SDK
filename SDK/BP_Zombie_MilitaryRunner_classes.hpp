#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Zombie_MilitaryRunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Zombie_MilitaryRunner.BP_Zombie_MilitaryRunner_C
// 0x000C (0x0630 - 0x0624)
class ABP_Zombie_MilitaryRunner_C : public ABP_Zombie_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0628(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Zombie_MilitaryRunner.BP_Zombie_MilitaryRunner_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Zombie_MilitaryRunner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
