#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DumpsterFull_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DumpsterFull.BP_DumpsterFull_C
// 0x0020 (0x0308 - 0x02E8)
class ABP_DumpsterFull_C : public ABP_MasterStorageBuildPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FText                                       Name;                                                     // 0x02F0(0x0018) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DumpsterFull.BP_DumpsterFull_C"));
		return ptr;
	}


	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_InteractName(struct FText* InteractName);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void ReceiveBeginPlay();
	void SGK_TurnedOnEffect(bool TurnedOn);
	void ExecuteUbergraph_BP_DumpsterFull(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
