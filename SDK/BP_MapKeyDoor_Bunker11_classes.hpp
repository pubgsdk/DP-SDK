#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MapKeyDoor_Bunker11_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MapKeyDoor_Bunker11.BP_MapKeyDoor_Bunker11_C
// 0x0000 (0x0370 - 0x0370)
class ABP_MapKeyDoor_Bunker11_C : public ABP_MapKeyDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MapKeyDoor_Bunker11.BP_MapKeyDoor_Bunker11_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
