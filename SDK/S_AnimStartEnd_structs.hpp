#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_AnimStartEnd.S_AnimStartEnd
// 0x0020
struct FS_AnimStartEnd
{
	TArray<class UAnimMontage*>                        StartMontage_5_409764B94200090D6CE6D2A17BF156ED;          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UAnimMontage*>                        EndMontage_6_E6B747C142413F4D1CCC32946732410C;            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
