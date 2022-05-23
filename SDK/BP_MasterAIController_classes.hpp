#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterAIController.BP_MasterAIController_C
// 0x004D (0x0375 - 0x0328)
class ABP_MasterAIController_C : public ADetourCrowdAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UAIPerceptionComponent*                      AIPerception;                                             // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                      Smart_AI_Component;                                       // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_ReactionTime>                     React_Time_Actors;                                        // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class AActor*>                              Sight_Actors;                                             // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class AActor*>                              Starting_Perceved_Actors;                                 // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	float                                              Starting_Sight_Radius;                                    // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Respawn;                                                  // 0x0374(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterAIController.BP_MasterAIController_C"));
		return ptr;
	}


	void Actor_Attack_Target(class AActor** Attack_Target);
	void AI_Can_Interact_(bool* Can_Interact);
	void AI_Is_Dead_(bool* Dead);
	void Find_Reaction_Time(class AActor* Actor, int* Index);
	void Reaction_Time_Update();
	void Perception_Update_Check(class AActor* Actor, const struct FAIStimulus& AI_Stimulus, bool Test_Sight);
	void AI_Dead();
	void Actor_Aim_Focus(class AActor* Instigator);
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Turret_Destroyed_Effect();
	void Turret_Idle_Start();
	void Turret_Idle_Stop();
	void Turret_Start_Reload();
	void Turret_End_Reload();
	void AI_Alert(class AActor* Alert_Actor);
	void AI_End_Alert();
	void AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour);
	void AI_Camera_Activate(bool Activate);
	void AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker);
	void ReceivePossess(class APawn* PossessedPawn);
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void Starting_Perception();
	void ExecuteUbergraph_BP_MasterAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
