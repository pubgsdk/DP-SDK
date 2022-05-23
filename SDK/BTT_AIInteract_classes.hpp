#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_AIInteract_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_AIInteract.BTT_AIInteract_C
// 0x0048 (0x00F0 - 0x00A8)
class UBTT_AIInteract_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_SmartAIComponent_C*                      AI_Component;                                             // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                      Move_To_Actor_AI_Component;                               // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Time;                                                     // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FTimerHandle                                Check_Timer;                                              // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Current_Anim_Index;                                       // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FS_AIInteractAnim                           Current_Anims;                                            // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Finish_Timer;                                             // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTT_AIInteract.BTT_AIInteract_C"));
		return ptr;
	}


	void Convert_To_Behaviour(TEnumAsByte<E_StartingAIBehaviours> S_Behaviour, TEnumAsByte<E_AIBehaviour>* Behaviour);
	void Next_Animation();
	void End_AI_Interaction();
	void Check_If_Still_Can_Interact();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Reset_AI();
	void Clear_AI_Interact();
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_AIInteract(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
