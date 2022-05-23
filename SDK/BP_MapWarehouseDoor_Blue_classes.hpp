#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MapWarehouseDoor_Blue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MapWarehouseDoor_Blue.BP_MapWarehouseDoor_Blue_C
// 0x0000 (0x0368 - 0x0368)
class ABP_MapWarehouseDoor_Blue_C : public ABP_MapWarehouseDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MapWarehouseDoor_Blue.BP_MapWarehouseDoor_Blue_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
