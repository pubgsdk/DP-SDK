#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ContainerDoorOther_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ContainerDoorOther.BP_ContainerDoorOther_C
// 0x0050 (0x0328 - 0x02D8)
class ABP_ContainerDoorOther_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Swing_Closed_Rotation_C6B8437A4280A526BEDFC4B48AE3876E;   // 0x02E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Swing_Closed__Direction_C6B8437A4280A526BEDFC4B48AE3876E; // 0x02E4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Swing_Closed;                                             // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Swing_Open_Rotation_0E93BC9D4240F456CD8019908ED26C25;     // 0x02F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Swing_Open__Direction_0E93BC9D4240F456CD8019908ED26C25;   // 0x02F4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Swing_Open;                                               // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               Door_Open;                                                // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	class UBP_PlayerInventory_C*                       InteractedPlayerInventory;                                // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  OpenDoorSound;                                            // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  CloseDoorSound;                                           // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             PlayingSound;                                             // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ContainerDoorOther.BP_ContainerDoorOther_C"));
		return ptr;
	}


	void CheckLocks(bool* AllowOpen);
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_InteractName(struct FText* InteractName);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void Swing_Closed__FinishedFunc();
	void Swing_Closed__UpdateFunc();
	void Swing_Open__FinishedFunc();
	void Swing_Open__UpdateFunc();
	void ReceiveBeginPlay();
	void SGKSave(class UBP_SGKSaveGame_C* Save);
	void Interact();
	void MulticastDoorAnimation();
	void Open();
	void MulticastBuildPartPlaced();
	void ExecuteUbergraph_BP_ContainerDoorOther(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
