#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterMeleeWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C
// 0x00BC (0x06FC - 0x0640)
class ABP_MasterMeleeWeapon_C : public ABP_MasterWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class UAnimMontage*>                        MeleeAttackAnimations;                                    // 0x0648(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class AActor*>                              HitActors;                                                // 0x0658(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               PrimaryButtonDown;                                        // 0x0668(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	TArray<struct FVector>                             TraceSocketsLastFrameLoc;                                 // 0x0670(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FVector>                             TraceSocketsCurrentFrameLoc;                              // 0x0680(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                SweepTraceTimer;                                          // 0x0690(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MeleeTraceFrequency;                                      // 0x0698(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CanHarvestResources;                                      // 0x069C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x069D(0x0003) MISSED OFFSET
	TMap<class UClass* /*ABP_MasterResource_C*/, struct FS_MinMax> HarvestableResources;                                     // 0x06A0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EDrawDebugTrace>                       MeleeTraceVisibility;                                     // 0x06F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DebugMode;                                                // 0x06F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ResourceHit;                                              // 0x06F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ChainAttack;                                              // 0x06F3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<ETraceTypeQuery>                       MeleeTraceChannel;                                        // 0x06F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BuildPartHit;                                             // 0x06F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x06F6(0x0002) MISSED OFFSET
	float                                              MeleeSwingSpeed;                                          // 0x06F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C"));
		return ptr;
	}


	void AimTrace(bool* Headshot);
	void ResetSwing();
	void SweepTrace();
	void RandomMeleeAttackAnimation(class UAnimMontage** AttackAnimation);
	void OnNotifyEnd_1830005C47917F94146466A299473C2F(const struct FName& NotifyName);
	void OnNotifyBegin_1830005C47917F94146466A299473C2F(const struct FName& NotifyName);
	void OnInterrupted_1830005C47917F94146466A299473C2F(const struct FName& NotifyName);
	void OnBlendOut_1830005C47917F94146466A299473C2F(const struct FName& NotifyName);
	void OnCompleted_1830005C47917F94146466A299473C2F(const struct FName& NotifyName);
	void OnNotifyEnd_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName);
	void OnNotifyBegin_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName);
	void OnInterrupted_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName);
	void OnBlendOut_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName);
	void OnCompleted_F410FBF64DC7B024F21B25AE37B2912E(const struct FName& NotifyName);
	void ServerReplaceInstance(class UBP_MasterResourceComponent_C* Resource, int Instance, class UBP_PlayerInventory_C* PlayerInv);
	void ClientResetSwing();
	void ServerCollectResource(class ABP_MasterResource_C* Resource, class UBP_PlayerInventory_C* PlayerInv);
	void ReduceHeldDurability();
	void SGK_ResetHoldable();
	void SGK_MeleeCollisionToggle(bool TraceOn);
	void SGK_ServerSecondaryAction(bool KeyDown);
	void ServerApplyHitActorDamage(class AActor* Actor, const struct FName& Bone, TArray<struct FS_Damage> Damage);
	void SGK_ServerPrimaryAction(bool KeyDown);
	void MulticastMeleeAttackMontage(int AnimIndex);
	void ExecuteUbergraph_BP_MasterMeleeWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
