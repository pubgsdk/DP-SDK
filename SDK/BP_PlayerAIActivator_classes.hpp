#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PlayerAIActivator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerAIActivator.BP_PlayerAIActivator_C
// 0x0030 (0x00E0 - 0x00B0)
class UBP_PlayerAIActivator_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	float                                              AI_Deactivation_Proximity;                                // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AI_Activation_Proximity;                                  // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              Last_Proximity_Activation;                                // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class AActor*>                              Last_Proximity_Deactivation;                              // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerAIActivator.BP_PlayerAIActivator_C"));
		return ptr;
	}


	void Update_Proximity_Deactivation();
	void Update_Proximity_Activation();
	void Server_Start_Activator_Timer();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PlayerAIActivator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
