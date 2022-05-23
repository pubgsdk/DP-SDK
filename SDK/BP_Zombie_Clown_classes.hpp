#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Zombie_Clown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Zombie_Clown.BP_Zombie_Clown_C
// 0x0000 (0x0624 - 0x0624)
class ABP_Zombie_Clown_C : public ABP_Zombie_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Zombie_Clown.BP_Zombie_Clown_C"));
		return ptr;
	}


	void SGK_InteractName(struct FText* InteractName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
