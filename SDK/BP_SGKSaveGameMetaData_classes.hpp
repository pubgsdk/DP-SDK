#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKSaveGameMetaData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKSaveGameMetaData.BP_SGKSaveGameMetaData_C
// 0x0010 (0x0038 - 0x0028)
class UBP_SGKSaveGameMetaData_C : public USaveGame
{
public:
	TArray<struct FS_SaveMetaData>                     SaveGameMetaData;                                         // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKSaveGameMetaData.BP_SGKSaveGameMetaData_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
