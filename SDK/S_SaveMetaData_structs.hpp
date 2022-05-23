#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_SaveMetaData.S_SaveMetaData
// 0x0028
struct FS_SaveMetaData
{
	struct FString                                     SaveGameSlotNames_11_1DFEE4724B155BE36118BF8EF06A7E92;    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	struct FDateTime                                   Time_7_7831D10E42BDAF3C120B149A7B48CA6A;                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     LevelName_10_BB1821254622AE683472199F41A526F0;            // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
