#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_M4_WI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_M4_WI.BP_M4_WI_C
// 0x000F (0x02D0 - 0x02C1)
class ABP_M4_WI_C : public ABP_StaticMasterItem_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_M4_WI.BP_M4_WI_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_M4_WI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
