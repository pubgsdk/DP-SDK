#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AreaItemSpawner_Firehouse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AreaItemSpawner_Firehouse.BP_AreaItemSpawner_Firehouse_C
// 0x0000 (0x02DC - 0x02DC)
class ABP_AreaItemSpawner_Firehouse_C : public ABP_AreaItemSpawner_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AreaItemSpawner_Firehouse.BP_AreaItemSpawner_Firehouse_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
