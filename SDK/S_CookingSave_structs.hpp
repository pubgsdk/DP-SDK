#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_StorageSave_classes.hpp"
#include "S_CookingSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_CookingSave.S_CookingSave
// 0x0078
struct FS_CookingSave
{
	struct FS_StorageSave                              NormalStorageData_2_33E97B3748C726E0BBFF9A94BC0723D5;     // 0x0000(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<struct FS_CookingSlot>                      CookingSlotsData_8_65D8C0804FC47BB37B52B6B9F56E71B3;      // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               SwitchedOn_9_58A9839048DD741C3490228E118095DA;            // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                DummySlots_13_BE704C65405FEC78E451769C81EA9CAF;           // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
