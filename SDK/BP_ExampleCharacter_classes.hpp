#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ExampleCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ExampleCharacter.BP_ExampleCharacter_C
// 0x0120 (0x05E0 - 0x04C0)
class ABP_ExampleCharacter_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBP_PlayerAIActivator_C*                     BP_PlayerAIActivator;                                     // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            Gun_Muzzal_Socket;                                        // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Gun;                                                      // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraComponent*                            PlayerCamera;                                             // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpringArmComponent*                         CameraBoom;                                               // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BaseLookUpRate;                                           // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Dead;                                                     // 0x04F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UBP_HUD_C*                                   HUD;                                                      // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_ExampleCharacter_C*                      Respawned_Character;                                      // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Aimed;                                                    // 0x0508(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class AActor*                                      Last_Attack_Target;                                       // 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BaseTurnRate;                                             // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Health;                                                   // 0x051C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Debug_Mode;                                               // 0x0520(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	float                                              Debug_Text_Duration;                                      // 0x0524(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Max_Health;                                               // 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> Surface_Emitter;                                          // 0x0530(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> Surface_Decal;                                            // 0x0580(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     Decal_Size;                                               // 0x05D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Decal_Life_Span;                                          // 0x05DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ExampleCharacter.BP_ExampleCharacter_C"));
		return ptr;
	}


	void Actor_Attack_Target(class AActor** Attack_Target);
	void AI_Is_Dead_(bool* Dead);
	void AI_Can_Interact_(bool* Can_Interact);
	void Set_Aimed_Focus();
	void Kill_Character();
	void Debug_Text(const struct FString& inString, const struct FLinearColor& TextColor);
	void Damage_Taken(float Damage);
	void InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void Turret_Idle_Start();
	void Turret_Idle_Stop();
	void Turret_Start_Reload();
	void Turret_End_Reload();
	void AI_Alert(class AActor* Alert_Actor);
	void AI_End_Alert();
	void AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour);
	void AI_Camera_Activate(bool Activate);
	void AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244(float AxisValue);
	void Turret_Destroyed_Effect();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_257(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_269(float AxisValue);
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Actor_Aim_Focus(class AActor* Instigator);
	void AI_Dead();
	void ReceiveBeginPlay();
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue);
	void Server_Left_Mouse_Button(const struct FVector& Start, const struct FVector& End);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void Client_Open_Respawn_Screen();
	void Client_Respawn_Player();
	void Server_Respawn_Player();
	void Multicast_Player_Death();
	void Multicast_Sound(class USoundBase* Sound, const struct FVector& Sound_Location);
	void Multicast_Range_Effect(const struct FHitResult& Hit);
	void Multicast_Aimed(bool Aimed);
	void Server_Aimed(bool Aimed);
	void ExecuteUbergraph_BP_ExampleCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
