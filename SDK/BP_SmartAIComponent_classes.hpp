#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SmartAIComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmartAIComponent.BP_SmartAIComponent_C
// 0x1924 (0x19D4 - 0x00B0)
class UBP_SmartAIComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	bool                                               Debug_Mode;                                               // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              Debug_Text_Duration;                                      // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              Attackers;                                                // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class ABP_MasterInteractionPoint_C*                Interaction_Point;                                        // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AIBehaviour>                         AI_Current_Behaviour;                                     // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FVector                                     Still_Location;                                           // 0x00DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Still_Direction;                                          // 0x00E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class ABP_MasterAIController_C*                    AI_Controller;                                            // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<float>                                      Attackers_Forget_Time;                                    // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ACharacter*                                  AI_Character;                                             // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterWayPoint_C*                        Way_Point;                                                // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Dead;                                                     // 0x0120(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                Health;                                                   // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Combat_Equip_Weapon;                                      // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Only_Melee_When_No_Ammo;                                  // 0x0129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x6];                                       // 0x012A(0x0006) MISSED OFFSET
	TArray<class UAnimSequenceBase*>                   Death_Animations;                                         // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class ABP_MasterInteractionPoint_C*>        Specified_Interaction_Point;                              // 0x0140(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	bool                                               Use_Interaction_Point_Tags;                               // 0x0150(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	TArray<struct FName>                               Interaction_Point_Tags;                                   // 0x0158(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Interaction_Point_Range;                                  // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Between_IP_Behavior;                                  // 0x016C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_AIBehaviour>                         Between_IP_Behaviour;                                     // 0x016D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x2];                                       // 0x016E(0x0002) MISSED OFFSET
	float                                              Between_IP_Behaviour_Time;                                // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class AActor*                                      AI_Base;                                                  // 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AI_Base_Distance;                                         // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Flee_Low_Health;                                          // 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Flee_When_Found;                                          // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Face_Attacker_When_Hidden;                                // 0x0189(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Should_Hide;                                              // 0x018A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x1];                                       // 0x018B(0x0001) MISSED OFFSET
	float                                              Hide_Time_Length;                                         // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UAnimMontage*>                        Hidden_Montages;                                          // 0x0190(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Forget_Attackers_Time;                                    // 0x01A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Forget_Attackers;                                         // 0x01A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Return_To_Start_Location;                                 // 0x01A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_FleeSetting>                         Flee_Type;                                                // 0x01A6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData09[0x1];                                       // 0x01A7(0x0001) MISSED OFFSET
	struct FTimerHandle                                Temp_Behavior_Timer;                                      // 0x01A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Can_Melee_Attack;                                         // 0x01B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x3];                                       // 0x01B1(0x0003) MISSED OFFSET
	float                                              Basic_Melee_Radius;                                       // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Basic_Melee_Collision;                                    // 0x01B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_OrderOptions>                        Melee_Animation_Order;                                    // 0x01B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData11[0x6];                                       // 0x01BA(0x0006) MISSED OFFSET
	TArray<struct FS_MeleeAnimations>                  Melee_Animations;                                         // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Melee_Distance;                                           // 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Melee_Switch_Distance;                                    // 0x01D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_MeleeAnimations>                  Lower_Melee_Animations;                                   // 0x01D8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<E_HitboxTypeAI>, float>           Melee_Damage;                                             // 0x01E8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Melee_Attack_Frequancy;                                   // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Melee_Anim_Time_Frequency;                            // 0x023C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Can_Melee_Attack_While_Moving;                            // 0x023D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData12[0x2];                                       // 0x023E(0x0002) MISSED OFFSET
	class AActor*                                      Attack_Target;                                            // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Attack_Target_Last_Location;                              // 0x0248(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Search_Direction;                                         // 0x0254(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Combat;                                                   // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	float                                              Wait_Time_Between_Searching;                              // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Search_Area_Size;                                         // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData14[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	class USceneComponent*                             RangeStartPoint;                                          // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Current_Behavior_Index;                                   // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData15[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class AActor*                                      Move_To_Actor;                                            // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Being_Interacted_With;                                    // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Available_To_AI_Interact;                                 // 0x0289(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Can_AI_Interact;                                          // 0x028A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Only_Interact_With_AI_Teams;                              // 0x028B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData16[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	TArray<struct FName>                               AI_Teams;                                                 // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              AI_Interact_Ranage;                                       // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AI_Interact_Time_Deviation;                               // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_AIInteractAnim>                   AI_Interaction_Animations;                                // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_OrderOptions>                        AI_Interaction_Animation_Order;                           // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData17[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              AI_Interact_Time;                                         // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              Melee_Hit_Actors;                                         // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               Temporary_Stop;                                           // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_AIBehaviour>                         End_Behaviour;                                            // 0x02D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData18[0x6];                                       // 0x02D2(0x0006) MISSED OFFSET
	TMap<struct FName, TEnumAsByte<E_StimuliReaction>> Current_Audio_Response;                                   // 0x02D8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FVector                                     Search_Location;                                          // 0x0328(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TArray<class AActor*>                              Flee_From_Actors;                                         // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FTimerHandle                                Forget_Attackers_Timer_Reference;                         // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AIBehaviour>                         Temp_Behaviour;                                           // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Trigger_Cooldown;                                     // 0x0351(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData20[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	TArray<struct FS_TriggerResponse>                  Trigger_Activated_Response;                               // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_TriggerResponse>                  Trigger_Deactivated_Response;                             // 0x0368(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Trigger_Cooldown_Time;                                    // 0x0378(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Proximity_Response;                                   // 0x037C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData21[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	TArray<struct FS_ReactSettings>                    Proximity_Activated_Response;                             // 0x0380(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_ReactSettings>                    Proximity_Deactivated_Response;                           // 0x0390(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Proximity_Responce_Requires_Sight;                        // 0x03A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Use_Reaction_Cooldown;                                    // 0x03A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData22[0x2];                                       // 0x03A2(0x0002) MISSED OFFSET
	float                                              Proximity_Cool_Down_Time;                                 // 0x03A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Proximity_Sphere_Radius;                                  // 0x03A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Current_Trigger_Cooldown_Time;                            // 0x03AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      Focus_Actor;                                              // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Current_Proximity_Cool_Down_Time;                         // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData23[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<struct FS_AttachedHoldables>                Attached_Holdables;                                       // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ABP_AIMasterHoldable_C*                      Holdable_Actor;                                           // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Block_Attack;                                             // 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData24[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	int                                                Current_Emote_Index;                                      // 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_EmoteAnimations                          Current_Emote;                                            // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_EmoteProp_C*                             Emote_Actor;                                              // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Reloading;                                                // 0x03F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData25[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	int                                                Current_Ammo;                                             // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Searching_For_Target;                                     // 0x0400(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	struct FVector                                     Attack_Target_Velocity;                                   // 0x0404(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Emote_Timer;                                              // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*ABP_AIMasterHoldable_C*/           Temp_Holdable_Class;                                      // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               In_Transition;                                            // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              Current_Anim_Transition_Cooldown;                         // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Current_Audio_Transition_Cooldown;                        // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData28[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	class USoundCue*                                   Second_Audio_Transition;                                  // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AIBehaviour>                         Last_Non_Combat_Behaviour;                                // 0x0438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               In_Override_Behaviour;                                    // 0x0439(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_AIBehaviour>                         Base_Behaviour;                                           // 0x043A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData29[0x1];                                       // 0x043B(0x0001) MISSED OFFSET
	float                                              Base_Behaviour_Timer;                                     // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Base_Behaviour;                                       // 0x0440(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData30[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FTimerHandle                                Emote_Done_Timer;                                         // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                Second_Anim_Transition;                                   // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Ragdoll_On_Death;                                         // 0x0458(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AI_Interact_Loop_Order_Anims;                             // 0x0459(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_StartingAIBehaviours>                AI_Interact_Between_Behaviour;                            // 0x045A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData31[0x1];                                       // 0x045B(0x0001) MISSED OFFSET
	float                                              Between_AI_Interact_Time;                                 // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Muzzle_Effect;                                            // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              From_Audio_Length;                                        // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LOS_Break_Search_Time;                                    // 0x046C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    AI_Killed;                                                // 0x0470(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              Dead_Despawned_Time;                                      // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	TArray<struct FS_ReactedActors>                    Reacted_Actors;                                           // 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                Melee_Trace_Timer;                                        // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_AIOptimization                           AI_Manager_Settings;                                      // 0x04A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Allow_Friendly_Fire;                                      // 0x04AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData33[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	float                                              Combat_Search_Time;                                       // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData34[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	TArray<struct FName>                               Friendly_Tags;                                            // 0x04B8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Flee_Time;                                                // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData35[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Still_Override_Animation;                                 // 0x04D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_OrderOptions>                        Still_Override_Order;                                     // 0x04D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData36[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        Still_Override_Anims;                                     // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               Still_Behaviour_Override;                                 // 0x04F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData37[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FS_GeneralSettings                          Still_Reaction_Settings;                                  // 0x04F8(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TSet<TEnumAsByte<E_AIBehaviour>>                   Override_Behaviours;                                      // 0x05A0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UAnimMontage*>                        Priority_Montages;                                        // 0x05F0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Audio_Transition_Cooldown;                                // 0x0600(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Animation_Transition_Cooldown;                            // 0x0604(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_AllAIAnims                               AI_Animations;                                            // 0x0608(0x04C8) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               Use_Sight_Reaction_Time;                                  // 0x0AD0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData38[0x3];                                       // 0x0AD1(0x0003) MISSED OFFSET
	float                                              Reaction_Time;                                            // 0x0AD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Reacted_Actor_Time;                                       // 0x0AD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	bool                                               Can_Crouch;                                               // 0x0ADC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData39[0x3];                                       // 0x0ADD(0x0003) MISSED OFFSET
	TMap<TEnumAsByte<E_AIBehaviour>, float>            Movement_Speeds;                                          // 0x0AE0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FS_GeneralSettings                          Default_Reaction_Settings;                                // 0x0B30(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	float                                              Flee_Distance;                                            // 0x0BD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Flee_Distance_Cut_Off;                                    // 0x0BDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_GeneralSettings                          Flee_Reaction_Settings;                                   // 0x0BE0(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	float                                              Roam_Wait_Time;                                           // 0x0C88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Roam_Wait_Time_Deviation;                                 // 0x0C8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Min_Roam_Distance;                                        // 0x0C90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Max_Roam_Distance;                                        // 0x0C94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Prop_Anims;                                           // 0x0C98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData40[0x3];                                       // 0x0C99(0x0003) MISSED OFFSET
	float                                              Prop_Anim_Freequency;                                     // 0x0C9C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Prop_Anim_Frequency_Deviation;                            // 0x0CA0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_OrderOptions>                        Prop_Anim_Order;                                          // 0x0CA4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData41[0x3];                                       // 0x0CA5(0x0003) MISSED OFFSET
	TArray<struct FS_EmoteAnimations>                  Prop_Anims_Animations;                                    // 0x0CA8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<E_OrderOptions>                        Roam_Wait_Anim_Order;                                     // 0x0CB8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData42[0x7];                                       // 0x0CB9(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        Roam_Wait_Anims;                                          // 0x0CC0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Loop_Roam_Wait_Order_Anims;                               // 0x0CD0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData43[0x7];                                       // 0x0CD1(0x0007) MISSED OFFSET
	struct FS_GeneralSettings                          Roam_Reaction_Settings;                                   // 0x0CD8(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_GeneralSettings                          Search_Reaction_Settings;                                 // 0x0D80(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_GeneralSettings                          AI_Interact_Reaction_Settings;                            // 0x0E28(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_OrderOptions>                        Way_Point_Options;                                        // 0x0ED0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Loop_Way_Points;                                          // 0x0ED1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Reverse_Loop_Way_Point;                                   // 0x0ED2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData44[0x5];                                       // 0x0ED3(0x0005) MISSED OFFSET
	TArray<class ABP_MasterWayPoint_C*>                Way_Points;                                               // 0x0ED8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	struct FS_GeneralSettings                          Way_Point_Reaction_Settings;                              // 0x0EE8(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_GeneralSettings                          Face_Direction_Reaction_Settings;                         // 0x0F90(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_GeneralSettings                          Melee_Reaction_Settings;                                  // 0x1038(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	float                                              Melee_Trace_Lenth;                                        // 0x10E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Max_Magazine_Ammo;                                        // 0x10E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Per_Shot_Ammo_Reduction;                                  // 0x10E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData45[0x4];                                       // 0x10EC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Reload_Montage;                                           // 0x10F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Max_Total_Ammo;                                           // 0x10F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Ammo;                                                 // 0x10FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Can_Reload;                                               // 0x10FD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Start_With_Full_Magazine;                                 // 0x10FE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData46[0x1];                                       // 0x10FF(0x0001) MISSED OFFSET
	float                                              Max_Hit_Deviation__Projectile_;                           // 0x1100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	float                                              Accuracy__Projectile_;                                    // 0x1104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Max_Miss_Deviation__Projectile_;                          // 0x1108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData47[0x4];                                       // 0x110C(0x0004) MISSED OFFSET
	class UClass* /*AActor*/                           Range_Projectile;                                         // 0x1110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Trace_Range;                                              // 0x1118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Trace_Radius;                                             // 0x111C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Spread__Trace_;                                           // 0x1120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Decal_LifeSpan__Trace_;                                   // 0x1124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> Surface_Decal__Trace_;                                    // 0x1128(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Decal_Fade_Distance__Trace_;                              // 0x1178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData48[0x4];                                       // 0x117C(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> Surface_Emitters__Trace_;                                 // 0x1180(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     Surface_Decal_Size__Trace_;                               // 0x11D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData49[0x4];                                       // 0x11DC(0x0004) MISSED OFFSET
	class USoundCue*                                   RangeShootSound;                                          // 0x11E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Can_Range_Attack_While_Moving;                            // 0x11E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Use_Range_Anim_Time_Frequency;                            // 0x11E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData50[0x2];                                       // 0x11EA(0x0002) MISSED OFFSET
	float                                              Range_Attack_Frequency;                                   // 0x11EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Can_Range_Attack;                                         // 0x11F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_OrderOptions>                        Range_Attack_Anim_Order;                                  // 0x11F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData51[0x6];                                       // 0x11F2(0x0006) MISSED OFFSET
	TArray<class UAnimMontage*>                        Range_Attack_Montages;                                    // 0x11F8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<E_HitboxTypeAI>, float>           Range_Damage;                                             // 0x1208(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Range_Attack_Distance;                                    // 0x1258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Projectile_Homing_Acceleration_Magnitude;                 // 0x125C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Homing_Projectile;                                        // 0x1260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Use_Projectile_Actor_Settings;                            // 0x1261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData52[0x6];                                       // 0x1262(0x0006) MISSED OFFSET
	struct FS_GeneralSettings                          Range_Reaction_Settings;                                  // 0x1268(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Range_Attack_Particle_Effect;                             // 0x1310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Range_Attack_Particle_Socket;                             // 0x1318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Cover;                                                // 0x1320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData53[0x7];                                       // 0x1321(0x0007) MISSED OFFSET
	struct FS_GeneralSettings                          Follow_Reaction_Settings;                                 // 0x1328(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class AActor*                                      Follow_Actor;                                             // 0x13D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Max_Follow_Distance;                                      // 0x13D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Copy_Follow_Actor_Direction;                              // 0x13DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Attack_Follow_Attack_Target;                              // 0x13DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Attack_Follow_Attackers;                                  // 0x13DE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData54[0x1];                                       // 0x13DF(0x0001) MISSED OFFSET
	float                                              Follow_Attack_Distance;                                   // 0x13E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_StartingAIBehaviours>                Follow_End_Behaviour;                                     // 0x13E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData55[0x3];                                       // 0x13E5(0x0003) MISSED OFFSET
	struct FS_GeneralSettings                          Interaction_Point_Reaction_Settings;                      // 0x13E8(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	float                                              Flee_Base_Distance;                                       // 0x1490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Require_Sight_Of_Attacker;                                // 0x1494(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData56[0x3];                                       // 0x1495(0x0003) MISSED OFFSET
	float                                              Alert_Defenders_Distances;                                // 0x1498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData57[0x4];                                       // 0x149C(0x0004) MISSED OFFSET
	TArray<struct FName>                               Defend_Tags;                                              // 0x14A0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class AActor*>                              Defend_Actors;                                            // 0x14B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	float                                              Defend_Cooldown_Time;                                     // 0x14C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Standing_Half_Hight;                                      // 0x14C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterWayPoint_C*                        Current_Way_Point;                                        // 0x14C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_AIBehaviour>                         Last_Behaviour;                                           // 0x14D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData58[0x3];                                       // 0x14D1(0x0003) MISSED OFFSET
	struct FVector                                     Climb_End_Location;                                       // 0x14D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Time;                                                     // 0x14E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    Jump_Look_At_Rotation;                                    // 0x14E4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     Jump_End_Location;                                        // 0x14F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     End_Climb_Location;                                       // 0x14FC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Climbing;                                                 // 0x1508(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Forward_Blocked;                                          // 0x1509(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData59[0x2];                                       // 0x150A(0x0002) MISSED OFFSET
	float                                              Current_Climb_Hight;                                      // 0x150C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Valt;                                                     // 0x1510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData60[0x3];                                       // 0x1511(0x0003) MISSED OFFSET
	struct FVector                                     Valt_End_Location;                                        // 0x1514(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Object_Normal;                                            // 0x1520(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData61[0x4];                                       // 0x152C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Climb_Anim;                                               // 0x1530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Current_Alert_Cooldown_Time;                              // 0x1538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData62[0x4];                                       // 0x153C(0x0004) MISSED OFFSET
	TArray<struct FS_ClimbAnims>                       Climb_Animations;                                         // 0x1540(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_ClimbAnims>                       Valt_Animations;                                          // 0x1550(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Max_Drop_Down_Height;                                     // 0x1560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData63[0x4];                                       // 0x1564(0x0004) MISSED OFFSET
	TArray<class AActor*>                              Attack_Targets;                                           // 0x1568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               In_Cover;                                                 // 0x1578(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Can_Climb;                                                // 0x1579(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Use_AI_Routine;                                           // 0x157A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData64[0x5];                                       // 0x157B(0x0005) MISSED OFFSET
	TArray<struct FS_RoutineSettings>                  AI_Routines;                                              // 0x1580(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class AActor*                                      Time_Of_Day;                                              // 0x1590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Routine_Timer;                                            // 0x1598(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_OrderOptions>                        Face_Direction_Anim_Order;                                // 0x15A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Loop_Face_Direction_Anims;                                // 0x15A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData65[0x6];                                       // 0x15A2(0x0006) MISSED OFFSET
	TArray<class UAnimMontage*>                        Face_Direction_Anims;                                     // 0x15A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               Delay_Range_Attack;                                       // 0x15B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData66[0x3];                                       // 0x15B9(0x0003) MISSED OFFSET
	float                                              Range_Delay_Time;                                         // 0x15BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Delay_Done;                                               // 0x15C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Hit_React_Timer;                                          // 0x15C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Use_Combat_Stance;                                        // 0x15C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData67[0x1];                                       // 0x15C3(0x0001) MISSED OFFSET
	float                                              Hit_Reaction_Cooldown;                                    // 0x15C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Combat_Stance_Time;                                       // 0x15C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Dead_Body_Reaction;                                   // 0x15CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_DeadBodyReaction>                    Dead_Body_Responce;                                       // 0x15CD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Dead_Body_Reaction_Temporary;                             // 0x15CE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData68[0x1];                                       // 0x15CF(0x0001) MISSED OFFSET
	float                                              Dead_Body_Temporary_Time;                                 // 0x15D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData69[0x4];                                       // 0x15D4(0x0004) MISSED OFFSET
	TArray<struct FName>                               Dead_Body_Alert_Tags;                                     // 0x15D8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Dead_Body_Alert_Range;                                    // 0x15E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData70[0x4];                                       // 0x15EC(0x0004) MISSED OFFSET
	TArray<struct FName>                               Dead_Body_React_Tags;                                     // 0x15F0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Dead_Body_Alert;                                          // 0x1600(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData71[0x7];                                       // 0x1601(0x0007) MISSED OFFSET
	TArray<class AActor*>                              Dead_Body_Alert_Actors;                                   // 0x1608(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	TArray<class AActor*>                              Seen_Dead_Bodys;                                          // 0x1618(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               Temperary_Response;                                       // 0x1628(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData72[0x3];                                       // 0x1629(0x0003) MISSED OFFSET
	float                                              Temparary_Time;                                           // 0x162C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_DeadBodyReaction>                    Alerted_Response;                                         // 0x1630(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Can_Be_Alerted_AI;                                        // 0x1631(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData73[0x2];                                       // 0x1632(0x0002) MISSED OFFSET
	float                                              Yaw_Aim_Offset;                                           // 0x1634(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Aim_Offset_Enabled;                                       // 0x1638(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData74[0x7];                                       // 0x1639(0x0007) MISSED OFFSET
	struct FS_MeleeAnimations                          Current_Melee_Anim;                                       // 0x1640(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              Alert_Cooldown_Time;                                      // 0x1698(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Strafe;                                               // 0x169C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData75[0x3];                                       // 0x169D(0x0003) MISSED OFFSET
	float                                              Min_Strafe_Distance;                                      // 0x16A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Max_Strafe_Distance;                                      // 0x16A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Allow_Strafe;                                             // 0x16A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData76[0x7];                                       // 0x16A9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              Last_Proximity_Check;                                     // 0x16B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TEnumAsByte<E_StartingAIBehaviours>                Start_Behaviour;                                          // 0x16C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData77[0x7];                                       // 0x16C1(0x0007) MISSED OFFSET
	class UClass* /*ABP_AIMasterHoldable_C*/           Start_Holdable;                                           // 0x16C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*ABP_AIMasterHoldable_C*/           Start_Range_Weapon;                                       // 0x16D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*ABP_AIMasterHoldable_C*/           Start_Melee_Weapon;                                       // 0x16D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Activated;                                                // 0x16E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData78[0x7];                                       // 0x16E1(0x0007) MISSED OFFSET
	struct FTimerHandle                                Combat_Stance_Timer;                                      // 0x16E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Combat_Stance;                                            // 0x16F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Call_Defenders;                                           // 0x16F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AI_Ready;                                                 // 0x16F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData79[0x1];                                       // 0x16F3(0x0001) MISSED OFFSET
	float                                              Climb_Speed;                                              // 0x16F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Can_Block;                                                // 0x16F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData80[0x7];                                       // 0x16F9(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<E_BlockType>, int>                Block_Chances;                                            // 0x1700(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UAnimMontage*>                        Melee_Block_Anims;                                        // 0x1750(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FTimerHandle                                Block_Timer;                                              // 0x1760(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Block_Cooldown;                                           // 0x1768(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData81[0x4];                                       // 0x176C(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        Blocked_Attack_Montages;                                  // 0x1770(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Flee_Alert;                                               // 0x1780(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Can_Be_Flee_Alerted;                                      // 0x1781(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData82[0x6];                                       // 0x1782(0x0006) MISSED OFFSET
	TArray<class AActor*>                              Flee_Alert_Actors;                                        // 0x1788(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	TArray<struct FName>                               Flee_Alert_Tags;                                          // 0x1798(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Flee_Alert_Distance;                                      // 0x17A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Aimed_Still_Override;                                     // 0x17AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData83[0x3];                                       // 0x17AD(0x0003) MISSED OFFSET
	struct FVector                                     Flee_Start_Location;                                      // 0x17B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_LOS_Search_Time;                                      // 0x17BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData84[0x3];                                       // 0x17BD(0x0003) MISSED OFFSET
	float                                              Projectile_Speed;                                         // 0x17C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Melee_Trace_Girth;                                        // 0x17C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Melee_Allow_Rotation;                                     // 0x17C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<ETraceTypeQuery>                       CoverTraceChannel;                                        // 0x17C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETraceTypeQuery>                       AttackTraceChannel;                                       // 0x17CA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData85[0x5];                                       // 0x17CB(0x0005) MISSED OFFSET
	struct FTimerHandle                                Despawn_Timer;                                            // 0x17D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DamageMulti;                                              // 0x17D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InAttack;                                                 // 0x17DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Despawn_AI;                                               // 0x17DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData86[0x2];                                       // 0x17DE(0x0002) MISSED OFFSET
	TMap<TEnumAsByte<E_Radius>, int>                   Acceptable_Radius;                                        // 0x17E0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       DeadAICapsuleCollision;                                   // 0x1830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       DeadAIMeshCollision;                                      // 0x1838(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> Surface_Sound__Trace_;                                    // 0x1840(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> Melee_Emitters;                                           // 0x1890(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> Melee_Surface_Sounds;                                     // 0x18E0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> Melee_Surface_Decal;                                      // 0x1930(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MeleeDetectHeightOffset;                                  // 0x1980(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     MeleeDetectSize;                                          // 0x1984(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Respawn;                                                  // 0x1990(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData87[0x7];                                       // 0x1991(0x0007) MISSED OFFSET
	class USoundCue*                                   DeathSound;                                               // 0x1998(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UAudioComponent*>                     Sounds;                                                   // 0x19A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TEnumAsByte<E_DamageType>                          DamageType;                                               // 0x19B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData88[0x3];                                       // 0x19B1(0x0003) MISSED OFFSET
	int                                                MaxHealth;                                                // 0x19B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MeshCorrection;                                           // 0x19B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData89[0x4];                                       // 0x19BC(0x0004) MISSED OFFSET
	class AActor*                                      SpawnedBy;                                                // 0x19C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowDynamicRespawnCheck;                                 // 0x19C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData90[0x3];                                       // 0x19C9(0x0003) MISSED OFFSET
	struct FName                                       StreamLevelPackageName;                                   // 0x19CC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmartAIComponent.BP_SmartAIComponent_C"));
		return ptr;
	}


	void Actor_Attack_Target(class AActor** Attack_Target);
	void AI_Can_Interact_(bool* Can_Interact);
	void AI_Is_Dead_(bool* Dead);
	void DespawnCheck();
	void StopCurrentAudio();
	void UpdateCapsuleCollision(const struct FName& Name);
	void ChangeDamageMulti(float ChangeAmount);
	void Set_BB_AllowRotate(bool AllowRotate);
	void Set_BB_BlockMove(bool StopNode);
	void Check_Flee_Alert(class AActor* Actor);
	void Check_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker);
	void Check_Attack_Targets(bool* Target_Found, class AActor** Actor);
	void Check_Start_Deactivated();
	void Proximity_Updates();
	void Update_Aim_Offset_Yaw(class AActor* Look_At_Actor);
	void Tag_Check(TArray<struct FName>* Tags_1, TArray<struct FName>* Tags_2, bool* Return_Value, struct FName* Found_Tag);
	void Dead_Body_Reaction(class AActor* Reaction_Actor);
	void Return_Hit_Reaction_Anims(TArray<class UAnimMontage*>* Hit_Reactions);
	void Spawn_Hit_Effects(const struct FHitResult& Hit_Result);
	void Update_Routine(int Hour);
	void Attack_Distance_Check();
	void Up_Climb_Check();
	void Climbing_Checks();
	void Forward_Check(float Forward_Distance, float Down_Distance, const struct FVector& Trace_Towards, struct FHitResult* Hit_Result, bool* Return_Value);
	void Drop_Down_Check();
	void Crouch_Check();
	void Defend_Check(class AActor* Attacked, class AActor* Attacker);
	void Alert_Defenders(class AActor* Attacker);
	void Take_Damage(float Damage, class AActor* Causer);
	void Damage_Reaction(float Damage, class AActor* Actor);
	void Convert_To_Behaviour(TEnumAsByte<E_StartingAIBehaviours> Starting_Behaviour, TEnumAsByte<E_AIBehaviour>* Behaviour);
	void Current_Reaction_Settings(struct FS_GeneralSettings* Reaction_Settings);
	void Aimed_Focus(class AActor* Aimed_Instigator);
	void Basic_Melee_Attack_Collision();
	void Reacted_Actor_Check(class AActor* Actor, bool* Actor_Found);
	void Set_BB_Follow_Actor(class AActor* Follow_Actor);
	bool Is_In_Combat_();
	void Transitions(const struct FS_GeneralSettings& Transition_From, const struct FS_GeneralSettings& Transition_To);
	void Transition_Audio(bool Start_Transition, const struct FS_GeneralSettings& AI_Settings, bool* Use_Transition, class USoundCue** Audio);
	void Transition_Anim(bool Start_Transition, const struct FS_GeneralSettings& AI_Settings, bool* Use_Transition, class UAnimMontage** Anim);
	void Remove_Total_Amount(int Remove_Amount, bool* Removed_All, int* Remaining_Ammo);
	void Add_Current_Ammo(int Add_Amount);
	void Current_Ammo_Check(bool* Has_Ammo, int* Ammo);
	void Total_Ammo_Check(bool* Has_Ammo, int* Ammo);
	void Remove_Current_Ammo(int Remove_Amount);
	void Current_Range_Attack_Distance(float* Attack_Range);
	void Get_Attached_Weapon_Ammo(bool* Ammo_Found, class ABP_AIMasterHoldable_C** Holdable_With_Ammo);
	void Destroy_Emote_Actor();
	void Return_Emote_Montages(TArray<class UAnimMontage*>* Emote_Montages);
	void Stop_Current_Montage(bool Keep_Emote_Montages);
	void Is_Holding_Weapon(bool* Is_Weapon, class ABP_AIMasterHoldable_C** Holdable_Actor);
	void Spawn_Attached_Holdables();
	void Check_Attached_Holdables(class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class, bool* Return_Value, class ABP_AIMasterHoldable_C** Holdable);
	void Holdable_Unequipped();
	void Unequip_Holdable();
	void Holdable_Equip_Socket(class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class, struct FName* Equip_Socket, struct FName* Unequip_Socket, bool* Equip_Montage);
	void Equip_Holdable(class UClass* /*ABP_AIMasterHoldable_C*/ Holdable_Class);
	void Spawn_Holdable(class UClass* /*ABP_AIMasterHoldable_C*/ AI_Weapon, const struct FName& Attach_Socket, bool Is_Visible, class ABP_AIMasterHoldable_C** Holdable_Actor);
	void Set_BB_Focus_Actor(class AActor* Focus_Actor);
	void Proximity_Deactivated(class AActor* Proximity_Actor, bool* Proximity_Deactivated);
	void Reset_Trigger_Cooldown_Timer();
	void Reset_Proximity_Cooldown_Timer();
	void Cooldown_Timer();
	void Proximity_Activated(class AActor* Proximity_Actor, bool* Proximity_Triggered);
	void Trigger_Deactivated(class AActor* Trigger_Actor, class ABP_AITrigger_C* AI_Trigger);
	void Trigger_Activated(class AActor* Trigger_Actor, class ABP_AITrigger_C* AI_Trigger);
	void Set_BB_Dead(bool Dead);
	void Closest_Flee_From_Actor(class AActor** Actor, float* Distance);
	void Sight_Reaction(class AActor* Sight_Actor, const struct FAIStimulus& AI_Stimulus);
	void Stop_Fleeing();
	void Set_Flee_Actor(class AActor* Flee_From_Actor);
	void Audio_Reaction(class AActor* Actor, const struct FAIStimulus& AI_Stimulus);
	void Set_BB_Temporary_Stop(bool Temp_Stop);
	void Cancel_AI_Interact();
	void Set_BB_Being_Interacted_With(bool Interacted_With);
	void AI_Interact_Time_Total(float* Time);
	void Set_BB_Move_To_Actor(class AActor* Actor);
	void Determine_Attack_Type();
	void Reset_Attack_Target(bool* New_Attack_Target, class AActor** Attack_Target);
	void Range_Attack();
	void Is_Low_Health(bool* Low_Health, int* Health);
	void Melee_Collision_Check(class AActor* Hit_Actor, class UPrimitiveComponent* Hit_Component, const struct FName& Bone_Name, const struct FHitResult& Hit);
	void Deactive_Melee_Detect();
	void Active_Melee_Detect();
	void Remove_Attacker(class AActor* Attacker);
	void Set_BB_Attack_Target(class AActor* Attacker);
	void Set_BB_Wait_Time(float FloatValue);
	void Set_BB_Location(const struct FVector& VectorValue);
	void Set_BB_Facing_Location(const struct FVector& VectorValue);
	void Forget_Attackers_Timer();
	void Set_BB_Current_Behaviour(TEnumAsByte<E_AIBehaviour> AI_New_Behaviour, bool Is_Base_Behaviour);
	void End_Flee();
	void Begin_Flee();
	void Last_Attacker(class AActor** Attacker);
	void Random_IP(class ABP_MasterInteractionPoint_C* Last_Interaction_Point, bool* Return_Value, class ABP_MasterInteractionPoint_C** Interaction_Point);
	void Random_Specified_IP(class ABP_MasterInteractionPoint_C* Last_Interaction_Point, bool* Return_Value, class ABP_MasterInteractionPoint_C** Interaction_Point);
	void Set_AI_Dead();
	void Generic_Damage_Reaction(class AActor* Damage_Cause);
	void Debug_Text(const struct FString& inString, const struct FLinearColor& TextColor);
	void OnFail_EC17E16E4EA49390E6C1F7A05964C877(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_EC17E16E4EA49390E6C1F7A05964C877(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnNotifyEnd_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName);
	void OnNotifyBegin_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName);
	void OnInterrupted_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName);
	void OnBlendOut_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName);
	void OnCompleted_2049CB47425917B35D40CBAEB03142CE(const struct FName& NotifyName);
	void Set_Movement_Speed(float Movement_Speed);
	void Multicast_Sound(class USoundCue* Sound);
	void Server_Holdable_Visibility(bool Visible);
	void Server_Starting_Weapon();
	void Server_Unequip_Holdable();
	void Server_Holdable_Unequipped();
	void Server_Block_Attack();
	void Server_Unblock_Attack();
	void Roam_Emotes();
	void Emote();
	void Emote_Done();
	void Server_Reload();
	void Transition_Anim_Timer(const struct FS_GeneralSettings& Transition_From, const struct FS_GeneralSettings& Transition_To);
	void End_Anim_Transition();
	void Clear_Emote();
	void Multicast_Range_Attack_Partical(const struct FHitResult& Hit_Result);
	void Multicast_Play_Transition_to_Audio(float Play_In, class USoundCue* Audio);
	void Transition_To_Audio_Timer();
	void Multicast_Despawn_Body();
	void Server_Despawn_Body();
	void Server_Respawn(TEnumAsByte<E_AIBehaviour> Behaviour);
	void Multicast_Respawn();
	void Deactivate_AI();
	void Activate_AI();
	void Start_Melee_Trace();
	void Melee_Trace_Timer_Events();
	void Actor_Aim_Focus(class AActor* Instigator);
	void Possessed();
	void Server_AI_Setup();
	void AI_Take_Damage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Jump_Down(const struct FVector& End_Location);
	void ReceiveTick(float DeltaSeconds);
	void Jump_Down_Close();
	void Jump_Down_Enter();
	void Climb_Up();
	void Climb_Up_Close();
	void Move_Across();
	void End_Climb();
	void Routine(int Hour);
	void Delayed_Range_Attack();
	void Start_Hit_React_Timer();
	void Hit_React_Timer_Done();
	void AI_Alert(class AActor* Alert_Actor);
	void Multicast_Start_Aim_Offset(class AActor* Target);
	void Multicast_Stop_Aim_Offset();
	void End_Combat();
	void Entered_Combat();
	void Multicast_Stop_Current_Montage(bool Keep_EmoteMontages);
	void Multicast_Homing_Projectile_Spawn(const struct FVector& Spawn_Transform_Location, class AActor* Attack_Target, class UClass* /*AActor*/ Class);
	void Multicast_Projectile_Spawn(const struct FVector& Spawn_Transform_Location, const struct FVector& Velocity, class UClass* /*AActor*/ Class, float Speed);
	void Cancel_Temp_Behaviour();
	void Set_Behavior();
	void Start_Temp_Behaviour(TEnumAsByte<E_AIBehaviour> Temp_Behavior, float Length, TEnumAsByte<E_AIBehaviour> End_Behavior);
	void Multicast_Stop_Montage(class UAnimMontage* Montage);
	void Multicast_AI_Dead();
	void Multicast_Play_Montage(class UAnimMontage* Montage, float Play_Rate, const struct FName& Start_Name);
	void AI_Camera_Activate(bool Activate);
	void AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour);
	void AI_End_Alert();
	void Turret_End_Reload();
	void Turret_Start_Reload();
	void Turret_Idle_Stop();
	void Turret_Idle_Start();
	void Turret_Destroyed_Effect();
	void AI_Dead();
	void Multicast_Set_Collision_Profile(const struct FName& Capsule_Profile, const struct FName& Mesh_Profile);
	void Server_Start_Combat_Stance();
	void End_Combat_Stance();
	void Multicast_Combat_Stance(bool Combat_Stance);
	void Cancel_Melee_Timer();
	void AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker);
	void Start_Block_Timer(float Time);
	void End_Block_Timer();
	void Start_Flee_Timer();
	void Flee_Timer_End();
	void Stop_Despawn_Timer();
	void ReceiveBeginPlay();
	void FrequencyTimer(float Time);
	void StartTimer();
	void Multicast_Melee_Emitter(const struct FHitResult& Hit);
	void StreamLevelUnLoaded();
	void SetupLevelStreamUnload();
	void AI_Trigger_Deactivated_Bind(class AActor* End_Overlap_Actor, class ABP_AITrigger_C* AI_Trigger);
	void AI_Trigger_Activated_Bind(class AActor* Overlap_Actor, class ABP_AITrigger_C* AI_Trigger);
	void ExecuteUbergraph_BP_SmartAIComponent(int EntryPoint);
	void AI_Killed__DelegateSignature(class ACharacter* AI_Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
