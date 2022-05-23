#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKSaveInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKSaveInterface.BP_SGKSaveInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKSaveInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKSaveInterface.BP_SGKSaveInterface_C"));
		return ptr;
	}


	void SGKSave(class UBP_SGKSaveGame_C* Save);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
