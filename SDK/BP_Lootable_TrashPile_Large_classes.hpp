#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Lootable_TrashPile_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lootable_TrashPile_Large.BP_Lootable_TrashPile_Large_C
// 0x0000 (0x0308 - 0x0308)
class ABP_Lootable_TrashPile_Large_C : public ABP_Lootable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Lootable_TrashPile_Large.BP_Lootable_TrashPile_Large_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
