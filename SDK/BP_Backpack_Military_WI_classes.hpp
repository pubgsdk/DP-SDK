#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Backpack_Military_WI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Backpack_Military_WI.BP_Backpack_Military_WI_C
// 0x0000 (0x02C1 - 0x02C1)
class ABP_Backpack_Military_WI_C : public ABP_StaticMasterItem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Backpack_Military_WI.BP_Backpack_Military_WI_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
