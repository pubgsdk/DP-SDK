#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterStorageBuildPart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C
// 0x0010 (0x02E8 - 0x02D8)
class ABP_MasterStorageBuildPart_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_MasterInventory_C*                       BP_MasterInventory;                                       // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C"));
		return ptr;
	}


	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_InteractName(struct FText* InteractName);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData);
	void SGK_PlayerInProximity();
	void SGK_PlayerOutProximity();
	void SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index);
	void ExecuteUbergraph_BP_MasterStorageBuildPart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
