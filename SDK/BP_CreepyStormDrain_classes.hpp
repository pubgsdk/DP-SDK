#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CreepyStormDrain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CreepyStormDrain.BP_CreepyStormDrain_C
// 0x0038 (0x0320 - 0x02E8)
class ABP_CreepyStormDrain_C : public ABP_MasterStorageBuildPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FText                                       Name;                                                     // 0x02F0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     ItemText;                                                 // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               Cooldown;                                                 // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	float                                              CooldownTimer;                                            // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CreepyStormDrain.BP_CreepyStormDrain_C"));
		return ptr;
	}


	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_InteractName(struct FText* InteractName);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void CooldownComp_ete();
	void ReceiveBeginPlay();
	void SGK_TurnedOnEffect(bool TurnedOn);
	void ExecuteUbergraph_BP_CreepyStormDrain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
