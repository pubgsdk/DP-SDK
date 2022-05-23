#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_MoveToTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_MoveToTarget.BTT_MoveToTarget_C
// 0x0058 (0x0100 - 0x00A8)
class UBTT_MoveToTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FBlackboardKeySelector                      Blackboard;                                               // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_Radius>                              Acceptance_Radius;                                        // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class APawn*                                       AI;                                                       // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                      SmartAI;                                                  // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DefaultRadius;                                            // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class AActor*                                      LastMoveToActor;                                          // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTT_MoveToTarget.BTT_MoveToTarget_C"));
		return ptr;
	}


	void OnFail_84A68DC84799129FA9D3CB8CDD9DCF81(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_84A68DC84799129FA9D3CB8CDD9DCF81(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnFail_6494FF294D8ADC9BA008B09A5FC47558(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_6494FF294D8ADC9BA008B09A5FC47558(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Move();
	void MoveToCheck();
	void ExecuteUbergraph_BTT_MoveToTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
