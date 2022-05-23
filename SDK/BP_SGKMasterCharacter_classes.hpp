#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKMasterCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKMasterCharacter.BP_SGKMasterCharacter_C
// 0x01C8 (0x0688 - 0x04C0)
class ABP_SGKMasterCharacter_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UAudioComponent*                             Audio;                                                    // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Ears;                                                     // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_PlayerAIActivator_C*                     BP_PlayerAIActivator;                                     // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             ThirdPersonElbowLeft;                                     // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             ThirdPersonAimPoint;                                      // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             FirstPersonAimPoint;                                      // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             FirstPersonAO;                                            // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             ThirdPersonElbow;                                         // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             ThirdPersonAO;                                            // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraComponent*                            FirstPersonCamera;                                        // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FirstPersonArms;                                          // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FirstPersonBody;                                          // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             ThrowPoint;                                               // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             ADSSocket;                                                // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpringArmComponent*                         CameraBoom;                                               // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_CharacterComponent_C*                    BP_CharacterComponent;                                    // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraComponent*                            ThirdPersonCamera;                                        // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RecoilTimeline_NewTrack_0_42B41C004DAFC3EA2041689B2AB6EC14;// 0x0550(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    RecoilTimeline__Direction_42B41C004DAFC3EA2041689B2AB6EC14;// 0x0554(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RecoilTimeline;                                           // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RightFPLean_NewTrack_0_1301AAF44DD70E89CC4FE4B5B47F7572;  // 0x0560(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    RightFPLean__Direction_1301AAF44DD70E89CC4FE4B5B47F7572;  // 0x0564(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RightFPLean;                                              // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LeftFPLean_NewTrack_0_A7777D4245BA1EF9FD97948D6E3CC9EC;   // 0x0570(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    LeftFPLean__Direction_A7777D4245BA1EF9FD97948D6E3CC9EC;   // 0x0574(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LeftFPLean;                                               // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RightTPLean_NewTrack_0_20DAE1674F7C6F9A4509918C31DD44B6;  // 0x0580(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    RightTPLean__Direction_20DAE1674F7C6F9A4509918C31DD44B6;  // 0x0584(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RightTPLean;                                              // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LeftTPLean_Lean_46ADA51147FB18380A49B8B723CD1CDB;         // 0x0590(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    LeftTPLean__Direction_46ADA51147FB18380A49B8B723CD1CDB;   // 0x0594(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LeftTPLean;                                               // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   LookAtRotation;                                           // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   LastLookAtRotation;                                       // 0x05A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentCameraLean;                                        // 0x05B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CameraArmStart;                                           // 0x05B4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTransform                                  FPCameraStartTrnsform;                                    // 0x05C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              CameraOffset;                                             // 0x05F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShouldLean;                                               // 0x05F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05F5(0x0003) MISSED OFFSET
	float                                              LeanAlpha;                                                // 0x05F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TargetCameraLean;                                         // 0x05FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                       PlayerInventory;                                          // 0x0600(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_PlayerBuildingComponent_C*               BuildingComponent;                                        // 0x0608(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMesh*                               Skin;                                                     // 0x0610(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RecoilVertical;                                           // 0x0618(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RecoilHorizontal;                                         // 0x061C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InvertY;                                                  // 0x0620(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	struct FText                                       CharacterName;                                            // 0x0628(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	bool                                               VOIPEnabled;                                              // 0x0640(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	class UBP_EquipmentInventory_C*                    DeadInventory;                                            // 0x0648(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              Out_Actors;                                               // 0x0650(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               AreYouLegendary;                                          // 0x0660(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               FreeLooking;                                              // 0x0661(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0662(0x0006) MISSED OFFSET
	TArray<class USkeletalMesh*>                       SkinOptions;                                              // 0x0668(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FString>                             X;                                                        // 0x0678(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKMasterCharacter.BP_SGKMasterCharacter_C"));
		return ptr;
	}


	void AI_Is_Dead_(bool* Dead);
	void AI_Can_Interact_(bool* Can_Interact);
	void Actor_Attack_Target(class AActor** Attack_Target);
	bool SGK_SetCurrentHealth(int NewHealthAmount);
	void SGK_ShowHealthWidget(bool* ShowHealthWidget, struct FText* HealthWidgetName);
	void SGK_MaxHealth(int* MaxHealth);
	void SGK_CurrentHealth(int* Health);
	void SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	bool SGK_UpdateCode(const struct FText& Code);
	bool SGK_VerifyPlayer(const struct FText& Text);
	void SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	void SGK_ItemAmount(int* Amount);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	bool SGK_StartHighlight();
	bool SGK_EndHighlight();
	void SGK_InteractName(struct FText* InteractName);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_LeanValues(float* Lean_Alpha, float* TargetCamera);
	void SGK_LookAtRotation(struct FVector2D* LookAtRotation);
	void SGK_CharacterSockets(TEnumAsByte<E_Sockets> Sockets, class USceneComponent** Component);
	void SGK_GetMesh(TEnumAsByte<E_BodyMesh> MeshType, class UPrimitiveComponent** Mesh);
	void SGK_CharacterCamera(TEnumAsByte<E_CameraType> CameraType, class UCameraComponent** CurrentCamera, class USpringArmComponent** CurrentSpringArm);
	void OnRep_CharacterName();
	void OnRep_Skin();
	void UserConstructionScript();
	void RightFPLean__FinishedFunc();
	void RightFPLean__UpdateFunc();
	void LeftFPLean__FinishedFunc();
	void LeftFPLean__UpdateFunc();
	void RightTPLean__FinishedFunc();
	void RightTPLean__UpdateFunc();
	void LeftTPLean__FinishedFunc();
	void LeftTPLean__UpdateFunc();
	void RecoilTimeline__FinishedFunc();
	void RecoilTimeline__UpdateFunc();
	void InpActEvt_Toggle_Camera_View__Disabled__K2Node_InputActionEvent_42(const struct FKey& Key);
	void InpActEvt_Freelook__Disabled__K2Node_InputActionEvent_41(const struct FKey& Key);
	void InpActEvt_Freelook__Disabled__K2Node_InputActionEvent_40(const struct FKey& Key);
	void InpActEvt_Temporary___Change_Clothes_K2Node_InputActionEvent_39(const struct FKey& Key);
	void InpActEvt_Temporary___Dance_K2Node_InputActionEvent_38(const struct FKey& Key);
	void InpActEvt_M_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Invert_Mouse_Y_K2Node_InputActionEvent_37(const struct FKey& Key);
	void InpActEvt_Cancel_Action_K2Node_InputActionEvent_36(const struct FKey& Key);
	void InpActEvt_Aim_K2Node_InputActionEvent_35(const struct FKey& Key);
	void InpActEvt_Aim_K2Node_InputActionEvent_34(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_33(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_Toggle_Inventory_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_Quick_Slot_9_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_Quick_Slot_8_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_Quick_Slot_7_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_Quick_Slot_6_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_Quick_Slot_5_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_Quick_Slot_4_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_Down_Context_Menu_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_Up_Context_Menu_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_Lower_Build_Part_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_Raise_Build_Part_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Quick_Slot_3_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Rotate_Build_Part_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Reload_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Toggle_Combat_Mode_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Lean_Right_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Lean_Right_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Lean_Left_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Lean_Left_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Toggle_Fire_Mode_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Quick_Slot_2_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Quick_Slot_1_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Temporary___Death_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_M_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Shift_K_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Alt_L_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Shift_L_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Shift_RightBracket_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_1(const struct FKey& Key);
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
	void SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_PlayerInProximity();
	void SGK_PlayerOutProximity();
	void ServerSetFPCam(const struct FVector& Loc);
	void ServerSetArmLocation(const struct FVector& Loc);
	void SGK_LeanRight(bool Lean, float CameraLean, float ThirdPersonCameraOffset);
	void SGK_LeanLeft(bool Lean, float CameraLean, float ThirdPersonCameraOffset);
	void FP_Left_Stop();
	void FP_Right_Stop();
	void FP_Right(bool Lean, float CameraLean, float ThirdPersonCameraOffset);
	void FP_Left(bool Lean, float CameraLean, float ThirdPersonCameraOffset);
	void StopLeftLean();
	void StopRightLean();
	void SGK_BleedDamage(int TickDamage, float TickTime, float BleedLength);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ServerKillPlayer();
	void SGK_Damage(int BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox);
	void ReceiveTick(float DeltaSeconds);
	void ServerSkinChange(class USkeletalMesh* Skin);
	void AmbientSoundAntenna();
	void SkinChange();
	void ServerUpdateNewCharacterYaw();
	void ServerSetLookAtRotation(const struct FVector2D& LookAtRotation);
	void LookAtTimer();
	void ClientPossessed();
	void ReceivePossessed(class AController* NewController);
	void ReceiveBeginPlay();
	void OnLanded(const struct FHitResult& Hit);
	void ReceiveDestroyed();
	void MulticastUnhideComponents(TArray<class UPrimitiveComponent*> Components);
	void SGK_HideComponents(TArray<class UPrimitiveComponent*> Components);
	void EnableSoftInput();
	void InpAxisEvt_Right_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_Left_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_Backwards_K2Node_InputAxisEvent_5(float AxisValue);
	void Down_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void ServerKill();
	void ClientRecoil(const struct FS_WeaponRecoil& Recoil);
	void IAMLEGENDGHOST(const struct FString& PlayerName);
	void IAMLEGENDMC(class ABP_SGKMasterCharacter_C* Legend);
	void IAMLEGEND(const struct FString& PlayerName, class ABP_SGKMasterCharacter_C* Player);
	void AddBanServer(const struct FString& Banner);
	void AdminKillPlayer(class APlayerState* PlayerStateToCheck, class ABP_SGKMasterCharacter_C* PKPlayer);
	void AdminKillBuildPart(class ABP_MasterBuildPart_C* BuildPartDead, class APlayerState* PlayerStateToCheck);
	void ExecuteUbergraph_BP_SGKMasterCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
