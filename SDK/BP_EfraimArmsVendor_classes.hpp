#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EfraimArmsVendor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EfraimArmsVendor.BP_EfraimArmsVendor_C
// 0x0000 (0x0318 - 0x0318)
class ABP_EfraimArmsVendor_C : public ABP_MasterVendorBuildPart_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EfraimArmsVendor.BP_EfraimArmsVendor_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
