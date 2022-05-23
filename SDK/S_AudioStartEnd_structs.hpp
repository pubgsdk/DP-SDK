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

// UserDefinedStruct S_AudioStartEnd.S_AudioStartEnd
// 0x0020
struct FS_AudioStartEnd
{
	TArray<class USoundCue*>                           StartAudio_9_226531F349FA7AE898037885B968C012;            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class USoundCue*>                           EndAudio_10_7F3B984C4AD7BA4C6485AAA877218983;             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
