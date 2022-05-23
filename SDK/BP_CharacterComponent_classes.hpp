#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CharacterComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharacterComponent.BP_CharacterComponent_C
// 0x0158 (0x0208 - 0x00B0)
class UBP_CharacterComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TEnumAsByte<E_CameraType>                          Camera_View;                                              // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowCameraToggle;                                        // 0x00B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsLootableOnDeath;                                        // 0x00BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00BB(0x0005) MISSED OFFSET
	class ABP_MasterHoldable_C*                        HoldingItem;                                              // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                CurrentMontage;                                           // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                CurrentReloadMontage;                                     // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DeathAnimaton;                                            // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CharacterDead;                                            // 0x00DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_AnimationState>                      CharacterStance;                                          // 0x00DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InAction;                                                 // 0x00DE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00DF(0x0001) MISSED OFFSET
	float                                              Down;                                                     // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Turn;                                                     // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Lean;                                                     // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_Lean>                                LeanDirection;                                            // 0x00EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ClippingBlock;                                            // 0x00ED(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
	float                                              ClippingCameraAlpha;                                      // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               StartedFalling;                                           // 0x00F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Damage_Velocity_Reached;                                  // 0x00F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
	float                                              Start_Fall_Time;                                          // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              End_Fall_Time;                                            // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Sprinting;                                                // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              Forward;                                                  // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Backward;                                                 // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Right;                                                    // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Left;                                                     // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StandardLerp;                                             // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      LastDummy;                                                // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_ShadowDummy_C*                           ShadowDummyActor;                                         // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              InProximityActors;                                        // 0x0128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class AActor*                                      ProximityActor;                                           // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MovementSpeed;                                            // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class ACharacter*                                  SGKCharacter;                                             // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_EquipmentInventory_C*                    EquipmentInventory;                                       // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETraceTypeQuery>                       ClippingTraceChannel;                                     // 0x0158(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ClippingDebugMode;                                        // 0x0159(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x6];                                       // 0x015A(0x0006) MISSED OFFSET
	class UBP_PlayerInventory_C*                       PlayerInventory;                                          // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    CharacterSprint;                                          // 0x0168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    CharacterFalling;                                         // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    AnimationNotify;                                          // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               EnableCameraShake;                                        // 0x0198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	class UClass* /*UMatineeCameraShake*/              IdleCameraShake;                                          // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*UMatineeCameraShake*/              WalkCameraShake;                                          // 0x01A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*UMatineeCameraShake*/              SprintCameraShake;                                        // 0x01B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartSprintShakeSpeed;                                    // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxWalkSpeed;                                             // 0x01BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTransform                                  FPCameraStart;                                            // 0x01C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTimerHandle                                ProximityTimer;                                           // 0x01F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UAnimSequenceBase*>                   DeathAnimations;                                          // 0x01F8(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CharacterComponent.BP_CharacterComponent_C"));
		return ptr;
	}


	void Weapon_For_VisibilityForOwner(class AActor* Actor, bool Hide);
	void UpdateAnimBPsStances();
	void UpdateOwnerVisibility(bool Hide);
	void HideTagCheck(const struct FString& Tag, class AActor* Ignore, bool* Found);
	void ForwardAxis(float* Forward);
	void BackwardAxis(float* Forward);
	void LeftAxis(float* Forward);
	void RightAxis(float* Forward);
	void RemoveShadowDummy();
	void ShadowDummySetup();
	void EnterCombatMode(bool Override);
	void EnterStandardMode(bool Override);
	void ToggleCombatMode();
	void DestroyDeadCharacter();
	void StartDestroyDeadCharacterTimer(float Time);
	void ClippingChecks();
	void ChangeLeanDirection(TEnumAsByte<E_Lean> LeanDirection, bool Lean);
	void ToggleCamera();
	void CameraMovementShake();
	void EnterThirdpersonCamera();
	void EnterFirstpersonCamera();
	void OnRep_CharacterStance();
	void OnRep_Sprinting();
	void OnRep_HoldingItem();
	void OnNotifyEnd_E21A53A44B1314781951C5BC1C234890(const struct FName& NotifyName);
	void OnNotifyBegin_E21A53A44B1314781951C5BC1C234890(const struct FName& NotifyName);
	void OnInterrupted_E21A53A44B1314781951C5BC1C234890(const struct FName& NotifyName);
	void OnBlendOut_E21A53A44B1314781951C5BC1C234890(const struct FName& NotifyName);
	void OnCompleted_E21A53A44B1314781951C5BC1C234890(const struct FName& NotifyName);
	void OnNotifyEnd_1F26CAB645C987F5E926D9AFD253C5F1(const struct FName& NotifyName);
	void OnNotifyBegin_1F26CAB645C987F5E926D9AFD253C5F1(const struct FName& NotifyName);
	void OnInterrupted_1F26CAB645C987F5E926D9AFD253C5F1(const struct FName& NotifyName);
	void OnBlendOut_1F26CAB645C987F5E926D9AFD253C5F1(const struct FName& NotifyName);
	void OnCompleted_1F26CAB645C987F5E926D9AFD253C5F1(const struct FName& NotifyName);
	void OnNotifyEnd_A635F28646B619AC465AF69C75EE4C5A(const struct FName& NotifyName);
	void OnNotifyBegin_A635F28646B619AC465AF69C75EE4C5A(const struct FName& NotifyName);
	void OnInterrupted_A635F28646B619AC465AF69C75EE4C5A(const struct FName& NotifyName);
	void OnBlendOut_A635F28646B619AC465AF69C75EE4C5A(const struct FName& NotifyName);
	void OnCompleted_A635F28646B619AC465AF69C75EE4C5A(const struct FName& NotifyName);
	void OnNotifyEnd_F79FC23D477B36EA35BE2D85636FA9C5(const struct FName& NotifyName);
	void OnNotifyBegin_F79FC23D477B36EA35BE2D85636FA9C5(const struct FName& NotifyName);
	void OnInterrupted_F79FC23D477B36EA35BE2D85636FA9C5(const struct FName& NotifyName);
	void OnBlendOut_F79FC23D477B36EA35BE2D85636FA9C5(const struct FName& NotifyName);
	void OnCompleted_F79FC23D477B36EA35BE2D85636FA9C5(const struct FName& NotifyName);
	void OnNotifyEnd_EFE74C344CF0C8844136BF8ED1F8C309(const struct FName& NotifyName);
	void OnNotifyBegin_EFE74C344CF0C8844136BF8ED1F8C309(const struct FName& NotifyName);
	void OnInterrupted_EFE74C344CF0C8844136BF8ED1F8C309(const struct FName& NotifyName);
	void OnBlendOut_EFE74C344CF0C8844136BF8ED1F8C309(const struct FName& NotifyName);
	void OnCompleted_EFE74C344CF0C8844136BF8ED1F8C309(const struct FName& NotifyName);
	void OnNotifyEnd_BB99084C468BCDC04E75B0A4E53CA764(const struct FName& NotifyName);
	void OnNotifyBegin_BB99084C468BCDC04E75B0A4E53CA764(const struct FName& NotifyName);
	void OnInterrupted_BB99084C468BCDC04E75B0A4E53CA764(const struct FName& NotifyName);
	void OnBlendOut_BB99084C468BCDC04E75B0A4E53CA764(const struct FName& NotifyName);
	void OnCompleted_BB99084C468BCDC04E75B0A4E53CA764(const struct FName& NotifyName);
	void OnNotifyEnd_6572A72E475C576CB8F3ACA59E9F673C(const struct FName& NotifyName);
	void OnNotifyBegin_6572A72E475C576CB8F3ACA59E9F673C(const struct FName& NotifyName);
	void OnInterrupted_6572A72E475C576CB8F3ACA59E9F673C(const struct FName& NotifyName);
	void OnBlendOut_6572A72E475C576CB8F3ACA59E9F673C(const struct FName& NotifyName);
	void OnCompleted_6572A72E475C576CB8F3ACA59E9F673C(const struct FName& NotifyName);
	void OnNotifyEnd_E59F28A94FFD1E9B798C7BAA1AAE0122(const struct FName& NotifyName);
	void OnNotifyBegin_E59F28A94FFD1E9B798C7BAA1AAE0122(const struct FName& NotifyName);
	void OnInterrupted_E59F28A94FFD1E9B798C7BAA1AAE0122(const struct FName& NotifyName);
	void OnBlendOut_E59F28A94FFD1E9B798C7BAA1AAE0122(const struct FName& NotifyName);
	void OnCompleted_E59F28A94FFD1E9B798C7BAA1AAE0122(const struct FName& NotifyName);
	void MulticastUpdateYaw(float NewParam);
	void ServerUpdateYaw();
	void ServerPlayDeathAnimation();
	void ClientPlayFPMontage(class UAnimMontage* Montage, float AttackSpeed);
	void MulticastEndChamber(class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void MulticastStopMontage(float InBlendOutTime, class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void ServerStopMontage(float InBlendOutTime, class UAnimMontage* Montage);
	void ServerSetMontageSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void MulticastSetMontageSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void MulticastReloadMontage(class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void ServerReloadMontage(class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void MulticastTurnInPlace(class UAnimMontage* Montage);
	void ServerTurnInPlace(class UAnimMontage* Montage);
	void MulticastPlayMontage(class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void ServerPlayMontage(class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void ReceiveTick(float DeltaSeconds);
	void Reset_Fall_Damage();
	void MulticastAttachWeapon(class USceneComponent* Target, class USceneComponent* Parent, const struct FName& Socket);
	void ResetAttachTimer();
	void ClientNewWeapon();
	void ClientNewEquipment();
	void ClientHideFPClothing(bool Hide);
	void ServerSetCameraView(TEnumAsByte<E_CameraType> Camera);
	void ClientRecoil(const struct FS_WeaponRecoil& WeaponRecoil);
	void ForceResetClientFOV();
	void ServerPlaySound(class USoundBase* Sound);
	void MulticastPlaySound(class USoundBase* Sound);
	void ClientStopLean();
	void ServerSetLean(float Lean);
	void MulticastSetLean(float Lean);
	void ClientLean(TEnumAsByte<E_Lean> LeanDirection, bool Lean);
	void ClientRemoveShadowDummy();
	void ClientSetupShadowDummy();
	void ClientStartingCamera();
	void ReceiveBeginPlay();
	void ProximityItemReplicationChecks();
	void ClientEnterStandardMode();
	void ClientEnterCombatMode();
	void ClientToggleCombatMode();
	void ServerToggleCombatMode();
	void MulticastSetInAction(bool InAction);
	void ServerSetInAction(bool InAction);
	void CardboardCheck();
	void GroundFloor();
	void CharacterLanded();
	void MulticastDeadPlayer();
	void ExecuteUbergraph_BP_CharacterComponent(int EntryPoint);
	void CharacterSprint__DelegateSignature(bool Sprinting);
	void AnimationNotify__DelegateSignature(const struct FName& Notify);
	void CharacterFalling__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
