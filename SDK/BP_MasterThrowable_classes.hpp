#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterThrowable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterThrowable.BP_MasterThrowable_C
// 0x0039 (0x0471 - 0x0438)
class ABP_MasterThrowable_C : public ABP_MasterHoldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               Thrown;                                                   // 0x0448(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Charged;                                                  // 0x0449(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x044A(0x0006) MISSED OFFSET
	class ABP_MasterThrowableProjectile_C*             ThrownProjectile;                                         // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PrimaryKeyDown;                                           // 0x0458(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	class UAnimMontage*                                ThrowMontage;                                             // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*AActor*/                           ThrowProjectile;                                          // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DebugMode;                                                // 0x0470(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterThrowable.BP_MasterThrowable_C"));
		return ptr;
	}


	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void InitializeThrowProjectile();
	void ThrowBlockCheck(bool* AllowThrow);
	void SGK_NewHeld(bool Held);
	void SGK_ServerSecondaryAction(bool KeyDown);
	void SGK_ServerPrimaryAction(bool KeyDown);
	void ReceiveBeginPlay();
	void AnimNotify(const struct FName& Notify);
	void ExecuteUbergraph_BP_MasterThrowable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
