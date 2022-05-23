#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AIManagerInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIManagerInterface.BP_AIManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AIManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AIManagerInterface.BP_AIManagerInterface_C"));
		return ptr;
	}


	void Return_AI_Manager(class ABP_AIManager_C** AI_Manager);
	void Return_AI_Manager_Settings(struct FS_AIOptimization* AI_Settings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
