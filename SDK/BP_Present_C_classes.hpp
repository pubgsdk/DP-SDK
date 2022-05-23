#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Present_C_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Present_C.BP_Present_C_C
// 0x0018 (0x0300 - 0x02E8)
class ABP_Present_C_C : public ABP_MasterStorageBuildPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_GroundCheckComponent_C*                  BP_GroundCheckComponent;                                  // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               BuildCollision;                                           // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Present_C.BP_Present_C_C"));
		return ptr;
	}


	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void ExecuteUbergraph_BP_Present_C(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
