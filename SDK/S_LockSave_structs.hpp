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

// UserDefinedStruct S_LockSave.S_LockSave
// 0x003C
struct FS_LockSave
{
	TArray<struct FText>                               Verified_3_B1D84F4A4D704ABC2EF5A7BB11A1EA3A;              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Locked_7_711F2E914D61F31CCF0F7CB916F5CFB8;                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       Code_10_682C395F404A042EE6E492BF3DFCBEAC;                 // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     OwnerLocation_16_CB98FB2F442D120068CF5282559F1729;        // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
