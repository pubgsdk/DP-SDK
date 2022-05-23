#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTT_Search_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_Search.BTT_Search_C
// 0x002C (0x00D4 - 0x00A8)
class UBTT_Search_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_SmartAIComponent_C*                      AI_Component;                                             // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               First_Search_Done;                                        // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	struct FVector                                     Temp_End;                                                 // 0x00BC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Search_Radius_Location;                                   // 0x00C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTT_Search.BTT_Search_C"));
		return ptr;
	}


	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Receive_Move_Completed_Bind(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void Move_Completed(TEnumAsByte<EPathFollowingResult> Result);
	void Finish_Task(bool Success);
	void Unbind_Events();
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_Search(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
