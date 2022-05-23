#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InteractivePlantFiberResource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InteractivePlantFiberResource.BP_InteractivePlantFiberResource_C
// 0x0000 (0x02F8 - 0x02F8)
class ABP_InteractivePlantFiberResource_C : public ABP_MasterInteractableResource_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_InteractivePlantFiberResource.BP_InteractivePlantFiberResource_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
