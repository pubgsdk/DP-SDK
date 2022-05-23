#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MapKeyDoor_Bunker11_Armory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MapKeyDoor_Bunker11_Armory.BP_MapKeyDoor_Bunker11_Armory_C
// 0x0000 (0x0370 - 0x0370)
class ABP_MapKeyDoor_Bunker11_Armory_C : public ABP_MapKeyDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MapKeyDoor_Bunker11_Armory.BP_MapKeyDoor_Bunker11_Armory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
