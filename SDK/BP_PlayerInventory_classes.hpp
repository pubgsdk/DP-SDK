#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PlayerInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerInventory.BP_PlayerInventory_C
// 0x07E9 (0x0DE1 - 0x05F8)
class UBP_PlayerInventory_C : public UBP_EquipmentInventory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FHitResult                                  ClientInteractHitResult;                                  // 0x0600(0x008C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
	bool                                               DisableCharMovement;                                      // 0x068C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               InventoryOpen;                                            // 0x068D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x068E(0x0002) MISSED OFFSET
	class AActor*                                      InteractedActor;                                          // 0x0690(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CurrentHealth;                                            // 0x0698(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentHunger;                                            // 0x069C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentThirst;                                            // 0x06A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentStamina;                                           // 0x06A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_CharacterState>                      CurrentCharacterState;                                    // 0x06A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsMoving;                                                 // 0x06A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SprintKeyDown;                                            // 0x06AA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x5];                                       // 0x06AB(0x0005) MISSED OFFSET
	struct FTimerHandle                                UseStaminaTimer;                                          // 0x06B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                RechargeStaminaTimer;                                     // 0x06B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BlockInput;                                               // 0x06C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	struct FTimerHandle                                StarvationTimer;                                          // 0x06C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DehydrationTimer;                                         // 0x06D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                        NewHoldingItem;                                           // 0x06D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACharacter*                                  SGKCharacter;                                             // 0x06E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_InvSlot                                  HoldingInvSlot;                                           // 0x06E8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_InvSlot                                  NewHoldingInvSlot;                                        // 0x0738(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_WeaponSlot                               NewHoldingWeaponSlot;                                     // 0x0788(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ItemMoveType>                        CurrentHoldingType;                                       // 0x07D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ItemMoveType>                        NewHoldingType;                                           // 0x07D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InAttack;                                                 // 0x07DA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsSplitKeyDown;                                           // 0x07DB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	struct FS_WeaponSlot                               HoldingWeaponSlot;                                        // 0x07E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               Equipping;                                                // 0x0830(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	struct FS_AttachmentSlot                           RemoveAttachmentSlot;                                     // 0x0838(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               DropRemoveAttachent;                                      // 0x0880(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	struct FS_InvSlotID                                RemoveSlotTarget;                                         // 0x0888(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               RotatedAttachTarget;                                      // 0x0898(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0899(0x0007) MISSED OFFSET
	struct FS_InvSlotID                                NewAttachmentID;                                          // 0x08A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class ABP_MasterAttachment_C*                      NewAttachment;                                            // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AController*                                 DeathController;                                          // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SwapAttachment;                                           // 0x08C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x7];                                       // 0x08C1(0x0007) MISSED OFFSET
	struct FS_InvItem                                  AttachingItem;                                            // 0x08C8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class ACharacter*                                  RespawnedCharacter;                                       // 0x08F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DeadBodyTimer;                                            // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       PlayerName;                                               // 0x0908(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ACharacter*                                  DeadCharacter;                                            // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>                 CraftingRecipes;                                          // 0x0928(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               Respawned;                                                // 0x0938(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0939(0x0007) MISSED OFFSET
	class UClass* /*ACharacter*/                       DeadCharacterClass;                                       // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                SprintCheckTimer;                                         // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FHitResult                                  ServerHitResult;                                          // 0x0950(0x008C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
	bool                                               BuildMode;                                                // 0x09DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Bleeding;                                                 // 0x09DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UIOpen;                                                   // 0x09DE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x1];                                       // 0x09DF(0x0001) MISSED OFFSET
	int                                                Tick_Damage;                                              // 0x09E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               QuickMoveKeyDown;                                         // 0x09E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x3];                                       // 0x09E5(0x0003) MISSED OFFSET
	struct FTimerHandle                                BleedDamageTimer;                                         // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_DeathScreen_C*                           RespawnHUD;                                               // 0x09F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       RespawnPointName;                                         // 0x09F8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	float                                              CameraLean;                                               // 0x0A10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CharacterLean;                                            // 0x0A14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_InventoryHUD_C*                          PlayerHUD;                                                // 0x0A18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraComponent*                            CurrentCamera;                                            // 0x0A20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpringArmComponent*                         CurrentSpringArm;                                         // 0x0A28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              InteractionDistance;                                      // 0x0A30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETraceTypeQuery>                       InteractionTraceChannel;                                  // 0x0A34(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0A35(0x0003) MISSED OFFSET
	int                                                QuickSlots;                                               // 0x0A38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxQuickSlots;                                            // 0x0A3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxHealth;                                                // 0x0A40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                StartingHealth;                                           // 0x0A44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxStamina;                                               // 0x0A48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartingStamina;                                          // 0x0A4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<E_CharacterState>, float>         StaminaReduction;                                         // 0x0A50(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<E_CharacterState>, float>         StaminaReductionTime;                                     // 0x0AA0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<E_CharacterState>, float>         StaminaRecharge;                                          // 0x0AF0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<E_CharacterState>, bool>          StaminaMovementStates;                                    // 0x0B40(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseThirst;                                                // 0x0B90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0B91(0x0007) MISSED OFFSET
	TArray<struct FS_StatReduction>                    ThirstReduction;                                          // 0x0B98(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MaxThirst;                                                // 0x0BA8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartingThirst;                                           // 0x0BAC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ThirstReductionTime;                                      // 0x0BB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DehydrationDamage;                                        // 0x0BB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DehydrationDamageTime;                                    // 0x0BB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseHunger;                                                // 0x0BBC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0BBD(0x0003) MISSED OFFSET
	TArray<struct FS_StatReduction>                    HungerReduction;                                          // 0x0BC0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MaxHunger;                                                // 0x0BD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartingHunger;                                           // 0x0BD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StarvationDamageTime;                                     // 0x0BD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                StarvationDamage;                                         // 0x0BDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HungerReductionTime;                                      // 0x0BE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0BE4(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<E_CharacterState>, float>         MovementSpeeds;                                           // 0x0BE8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FMulticastScriptDelegate                    RotateMoveWidget;                                         // 0x0C38(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    InventoryToggled;                                         // 0x0C48(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FVector2D                                   InventorySlotSize;                                        // 0x0C58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PauseGameWhenInMenu;                                      // 0x0C60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0C61(0x0007) MISSED OFFSET
	class UBP_CharacterComponent_C*                    CharacterComponent;                                       // 0x0C68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowDroppingHeldItem;                                    // 0x0C70(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseNotificationSounds;                                    // 0x0C71(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData16[0x6];                                       // 0x0C72(0x0006) MISSED OFFSET
	class USoundBase*                                  WarningNotifySound;                                       // 0x0C78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                       NewAttachmentWeaponInventory;                             // 0x0C80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_MasterInventory_C*                       ExtCraftingComponent;                                     // 0x0C88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_MasterInventory_C*                       ExtCookingComponent;                                      // 0x0C90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_MasterInventory_C*                       VenderComponent;                                          // 0x0C98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ClearInventoryOnDeath;                                    // 0x0CA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0CA1(0x0007) MISSED OFFSET
	class USoundBase*                                  DeathSound;                                               // 0x0CA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ClearLearnRecipesOnDeath;                                 // 0x0CB0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DeletePlayerSaveOnDeath;                                  // 0x0CB1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData18[0x2];                                       // 0x0CB2(0x0002) MISSED OFFSET
	float                                              DeadBodyDespawnTime;                                      // 0x0CB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EDrawDebugTrace>                       InteractionTraceDebug;                                    // 0x0CB8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0CB9(0x0007) MISSED OFFSET
	class USoundBase*                                  TakeDamageSound;                                          // 0x0CC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseHealthRegeneration;                                    // 0x0CC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0CC9(0x0003) MISSED OFFSET
	int                                                HealthRegenerationTickAmount;                             // 0x0CCC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinHealthRegenerationHunger;                              // 0x0CD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinHealthRegenerationThirst;                              // 0x0CD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RegenerationTickTime;                                     // 0x0CD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseFallDamage;                                            // 0x0CDC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0CDD(0x0003) MISSED OFFSET
	float                                              FallDamage;                                               // 0x0CE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartFallDamageTime;                                      // 0x0CE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FallDamageIncreeseTime;                                   // 0x0CE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FallDamageVelocity;                                       // 0x0CEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ResourceHarvestAmount;                                    // 0x0CF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseLearnableRecipes;                                      // 0x0CF4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0CF5(0x0003) MISSED OFFSET
	TArray<struct FDataTableRowHandle>                 StartingCraftingRecipes;                                  // 0x0CF8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_AnimationState>                      DefaultStance;                                            // 0x0D08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowStanceChange;                                        // 0x0D09(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowLeaningInCombatStance;                               // 0x0D0A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowLeaningInStandardStance;                             // 0x0D0B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              ThirdPersonCameraOffset;                                  // 0x0D0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RepairActorRange;                                         // 0x0D10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0D14(0x0004) MISSED OFFSET
	class UBP_PlayerBuildingComponent_C*               PlayerBuildingComponent;                                  // 0x0D18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_MasterInventory_C*                       ExtInventoryComponent;                                    // 0x0D20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<E_CharacterState>, float>         StaminaRechargeTime;                                      // 0x0D28(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               AllowInteractionWhileInAction;                            // 0x0D78(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0D79(0x0007) MISSED OFFSET
	struct FString                                     InteractChannelName;                                      // 0x0D80(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	bool                                               DebugInteractionTrace;                                    // 0x0D90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0D91(0x0007) MISSED OFFSET
	class AActor*                                      IgnoreInteractActor;                                      // 0x0D98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      AttackedActor;                                            // 0x0DA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BlockInputSoft;                                           // 0x0DA8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0DA9(0x0007) MISSED OFFSET
	struct FText                                       PlayerDisplayName;                                        // 0x0DB0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FVector                                     LastCharLoc;                                              // 0x0DC8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    LastCharRot;                                              // 0x0DD4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SaveFound;                                                // 0x0DE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerInventory.BP_PlayerInventory_C"));
		return ptr;
	}


	void SpawnSetDownItem(const struct FS_InvItem& InvItem, const struct FVector& SetLocation, const struct FRotator& SetRotation);
	void TraceFromCameraMath(TEnumAsByte<E_CameraType> CameraView, float Distance, struct FVector* Start, struct FVector* End);
	void SetDownItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split, const struct FRotator& SetRotation, const struct FVector& SetLocation);
	void InteractTrace_ServerSide(TEnumAsByte<E_WorldActions> ActionType, const struct FHitResult& InteractTarget);
	void InteractTrace_ClientSide(const struct FVector& Start, const struct FVector& End, TEnumAsByte<E_WorldActions> ActionType);
	void UpdatePlayerLocation();
	void ReturnStateValue(TEnumAsByte<E_CharacterState> CharacterState, TArray<struct FS_StatReduction>* Array, float* Value);
	bool CanInteract();
	void InAction(bool* InAction);
	void DestroyEquipmentItem(TEnumAsByte<E_EquipmentType> EquipmentSlot);
	void CheckRecipeCost(const struct FName& Recipe, int Amount, bool RemoveItems, bool* CanCraft);
	void UpdateMaxMovementSpeed(TEnumAsByte<E_CharacterState> CharacterState);
	void AddAllEquipmentQuickSlots();
	void ResetStats();
	void ClearBleed();
	void BleedDamage();
	void StartBleedDamage(int TickDamage, float TickTime, float BleedLength);
	void LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete);
	void FindMontage(TMap<class USkeletalMesh*, class UAnimMontage*> TargetMap, bool* AnimFound, class UAnimMontage** Montage);
	void OpenCodeLockUI(bool SetCode, class AActor* Lock);
	void CloseCodeLockUI();
	void QuickSlotKeyBind(int QuickSlotIndex, struct FKey* SlotKey);
	void SelectedContextEntry(TEnumAsByte<E_WorldActions>* ActionType);
	void ContextMenu(class UBP_InteractionContextMenu_C** ContextMenu);
	void ToggleInventory();
	void ToggleCodeLockUI();
	bool IsInNoDamageZone();
	void AttemptToPickupHold(const struct FS_InvItem& InvItem, bool* ItemHeld, bool* ItemAdded);
	void LearnAllItemRecipes(const struct FS_InvItem& InvItem, bool* RecipeLearnt);
	bool AllRepairActorCheck(TArray<struct FS_RepairActors>* RepairActors);
	bool RepairActorCheck(class UClass* /*AActor*/ RepairActor);
	bool LeanCheck();
	bool LearnNewRecipe(const struct FDataTableRowHandle& RecipeDataHandle);
	bool KnownRecipeCheck(const struct FDataTableRowHandle& RecipeDataHandle);
	void DestroyCharacterBody();
	void InGameLoadPlayerInventory(class UBP_SGKSaveGame_C* Save);
	void LoadPlayerInventory(bool LoadLocation);
	void DestroyDeadCharacterBody();
	void FindSpawnPoint(bool Random, struct FTransform* SpawnLocation);
	void TakeDamage(int Damage, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox);
	void DecreaseHeldItemDurability(float DecreaseAmount);
	bool HoldingItemCheck(const struct FS_InvSlot& InvSlot);
	void AttemptToHoldItem(const struct FS_InvSlot& InvSlot, bool* ItemHeld);
	void UnHoldItem();
	void OpenVenderMenu(class UBP_MasterInventory_C* Inventory);
	void OpenExtCookingMenu(class UBP_MasterInventory_C* Inventory);
	void OpenExtCraftingMenu(class UBP_MasterInventory_C* Inventory);
	void SearchPlayerInventoryForMultiItems(int Amount, bool RemoveItem, TArray<struct FName>* Item, bool* ItemFound, struct FS_InvSlot* InvSlots);
	void SearchPlayerInventoryForItem(const struct FName& Item, int Amount, bool RemoveItem, bool* ItemsFound, struct FS_InvSlot* InvSlots, TArray<struct FS_InvSlot>* AllInvSlots);
	void SearchForWeaponMag(class UClass* /*ABP_MasterWeapon_C*/ Weapon, bool* MagFound, struct FS_InvSlot* ItemSlot);
	void UseWeaponFromSlot(const struct FS_WeaponSlotID& WeaponSlotID, TEnumAsByte<E_InventoryActions> Action);
	bool HoldingWeaponCheck(const struct FS_WeaponSlot& WeaponSlot);
	bool FindCompatiableWeaponSlot(const struct FS_InvItem& WeaponItem, TEnumAsByte<E_WeaponSlots>* Slot);
	void AddAmmoToRangeWeapon(const struct FS_InvSlot& WeaponSlot, const struct FS_InvSlot& StartSlot, bool Split, bool ShowNotification);
	bool SwapAttachments(const struct FS_AttachmentSlotID& AttachmentID, class UBP_WeaponInventory_C* WeaponInventory, bool CheckOnly);
	bool MoveAttachmentAddToContainer(const struct FS_AttachmentSlotID& Attachment_ID, const struct FS_InvSlot& EndSlot, bool ChecksOnly);
	void ApplyAttachment(const struct FS_InvSlotID& AttachmentItemID, class UBP_WeaponInventory_C* WeaponInventory, bool SpawnAttachment, bool ShowNotifications);
	bool AddAttachmentFromSlot(const struct FS_InvSlotID& Attachment_Item_ID, class UBP_WeaponInventory_C* WeaponInventory, bool ShowNotifications);
	void FindAttachmentSlot(class UBP_MasterInventory_C* Inventory);
	void RemoveAttachment(const struct FS_AttachmentSlotID& AttachmentID, const struct FS_InvSlotID& InvSlotID, bool DropItem, bool Rotated, bool SkipChecks, bool Swap, bool ShowNotifications);
	void OpenInvMenu(class UBP_MasterInventory_C* Inventory);
	void MoveAddToContainer(const struct FS_InvSlot& StartSlot, const struct FS_InvSlot& EndSlot, bool Split, bool ShowNotification);
	void IsInPlayerInv(class UBP_MasterInventory_C* InventoryComponent, bool* IsInPlayerInv);
	void ClearContainerQuickSlots(class UBP_MasterInventory_C* InvComponent);
	void CombineSlotStacks(const struct FS_InvSlot& StartSlot, const struct FS_InvSlot& EndSlot, bool SplitStack, TEnumAsByte<E_SpecialSlotType> SpecialType, bool ShowNotifications);
	void QuickMove(class UBP_MasterInventory_C* Inventory, int ItemIndex);
	void SplitStack(const struct FS_InvSlotID& InvSlotID);
	void ParentInventoryCheck(class UBP_MasterInventory_C* AddInventory, class UBP_MasterInventory_C* ContainerInventory, bool* AllowAdd);
	void InitializePlayerInventory();
	void RepairItemInSlot(const struct FS_InvSlotID& InvSlotID);
	void PlayerInventoryTotalItemAmount(const struct FS_InvItem& InvItem, int* TotalAmount);
	void AttemptToAddItemToSlot(const struct FS_InvSlot& Inv_Item_ID, const struct FDataTableRowHandle& Item, int Amount);
	bool RepairItem(const struct FS_InvItem& InvItem, struct FS_InvItem* RepairedInvItem);
	void UpdateItemUseAmount(int Change_Amount, struct FS_InvItem* Item, bool* ItemEmpty, struct FS_InvItem* ItemOut);
	void UseItemFromSlot(const struct FS_InvSlotID& InvSlotID, TEnumAsByte<E_InventoryActions> Action);
	void ConsumeItem(const struct FS_InvItem& Item, bool* Consumed);
	void ItemActionCheck(const struct FS_InvItem& Item, TEnumAsByte<E_InventoryActions> Action, bool* AllowUse);
	void UseInventoryAction(const struct FS_InvSlot& InvSlot, TEnumAsByte<E_InventoryActions> Action);
	void QuickSlotUseSelect(int QuickSlotIndex);
	void UnequipWeapon(const struct FS_InvSlotID& EndInvSlotID, const struct FS_WeaponSlotID& WeaponSlotID, bool DropItem, bool Rotated, bool Destroy);
	void SwapWeaponSlots(const struct FS_WeaponSlotID& StartWeaponSlotID, const struct FS_WeaponSlotID& EndWeaponSlotID);
	void UpdateWeaponQuickSlot(const struct FS_WeaponSlotID& Weapon_Slot_ID, int QuickSlotIndex);
	void UpdateWeaponSlotWidget(const struct FS_WeaponSlot& WeaponSlot);
	void EquipWeaponFromSlot(const struct FS_InvSlotID& Slot_ID, const struct FS_WeaponSlotID& Weapon_Slot_ID);
	void AttemptToEquipWeapon(const struct FS_InvItem& InvItem, bool ShowNotification, bool* WeaponEquipped, TEnumAsByte<E_WeaponSlots>* ItemWeaponSlot);
	void UpdateQuickSlotWeapon(const struct FS_WeaponSlotID& WeaponSlotID, int QuickSlot);
	void OpenInventory();
	void CloseInventory();
	void AddQuickSlots(const struct FS_InvItem& EquipmentItem, class UBP_MasterInventory_C* Inventory);
	void StateTimer();
	void ChangeState(TEnumAsByte<E_CharacterState> NewState);
	void HungerState();
	void ThirstState();
	void StarvationState();
	void DehydrationState();
	void SprintCheck();
	void DecreaseHunger(float Amount);
	void HealthRegeneration();
	void RechargeStaminaState();
	void IncreaseHunger(float Amount);
	void IncreaseThirst(float Amount);
	void DecreaseThirst(float Amount);
	void IncreaseHealth(int Amount);
	void DecreaseHealth(int Amount, bool PlayTakeDamageSound);
	void DecreaseStamina(float Amount);
	void UseStaminaState();
	void IncreaseStamina(float Amount);
	void StaminaStateCheck(TEnumAsByte<E_CharacterState> State, float Min_Stamina, bool* CanUseState);
	void OnRep_CurrentCharacterState();
	void OnRep_CurrentThirst();
	void OnRep_CurrentHunger();
	void OnRep_CurrentStamina();
	void OnRep_CurrentHealth();
	void FindQuickSlot(int QuickSlotIndex, class UBP_QuickSlot_C** OutputSlot);
	void RemoveQuickSlots(const struct FS_InvItem& EquipmentItem, class UBP_MasterInventory_C* Inventory);
	void ToggleBuildPartNameUI(bool Open);
	void UpdateQuickSlotItem(const struct FS_InvSlotID& InvSlotID, int QuickSlot);
	void AttemptToAddItem(const struct FS_InvItem& InvItem, bool StackSearch, bool ShowNotifications, bool* RemainingItem, struct FS_InvItem* RemainingInvItem, struct FS_InvSlotID* NewItemSlot);
	void IsInventoryEquipped(class UBP_MasterInventory_C* ItemInv, class UBP_EquipmentInventory_C* EquipmentInv, bool* IsEquipped);
	void UpdateItemQuickSlot(const struct FS_InvSlotID& Slot_ID, int QuickSlotIndex);
	void OpenEquipmentMenu(class UBP_EquipmentInventory_C* EquipmentInventory);
	void AddItemToContainer(const struct FS_InvItem& Item, const struct FS_InvSlot& ContainerSlot, bool* RemainingItem, struct FS_InvItem* InvItem);
	void AttemptToEquipItem(const struct FS_InvItem& InvItem, bool* ItemEquipped);
	void SwapEquipmentSlots(const struct FS_EquipmentSlotID& StartEquipmentSlotID, const struct FS_EquipmentSlotID& EndEquipmentSlotID);
	void SpawnDroppedItem(const struct FS_InvItem& InvItem);
	void EquipItemFromSlot(const struct FS_InvSlotID& SlotID, const struct FS_EquipmentSlotID& EquipmentSlotID);
	void UnequipItem(const struct FS_InvSlotID& EndSlotID, const struct FS_EquipmentSlotID& EquipmentSlotID, bool DropItem, bool Rotated, bool DestroyItem);
	void UpdateEquipmentSlotWidget(const struct FS_EquipmentSlot& EquipmentSlot);
	void DropItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split);
	void RemoveItemFromSlot(const struct FS_InvSlot& InvSlot, bool SpecialSlot);
	void LookAtTrace();
	void InteractionMath(TEnumAsByte<E_CameraType> CameraView, struct FVector* Start, struct FVector* End);
	void EndInteraction();
	void HitActor(const struct FHitResult& Hit, class AActor** HitActor, class UPrimitiveComponent** HitComponent);
	void InteractTrace(const struct FVector& Start, const struct FVector& End, TEnumAsByte<E_WorldActions> ActionType);
	void SetInvSlots(const struct FS_InvSlot& InvSlots, int Height, int Width, bool Rotated, TArray<struct FS_InvSlot>* UpdatedSlots);
	void MoveItem(const struct FS_InvSlotID& StartSlotID, const struct FS_InvSlotID& EndSlotID, bool Rotated, bool Split, TEnumAsByte<E_SpecialSlotType> SpecialType, bool ShowNotifications, bool* ItemMoved);
	void StaminaNom(float Stamina);
	void ServerUpdateRespawnPointName(const struct FText& Name);
	void ClientPlayerInventoryRepawned();
	void ServerPlayerInventoryRespawned();
	void ClientRemoveInventory();
	void ServerResetRespawn();
	void ServerRespawnPlayer(bool Random);
	void ClientRespawnPlayer(bool Random);
	void ClientShowRespawnScreen();
	void ServerKillPlayerCharacter();
	void ServerSprintKey(bool Down);
	void ClientUpdateState(TEnumAsByte<E_CharacterState> CharacterState);
	void ServerUpdateState(TEnumAsByte<E_CharacterState> CharacterState);
	void MovementInput();
	void ServerRemoveWeaponAttachment(const struct FS_AttachmentSlotID& AttachmentID, const struct FS_InvSlotID& EndSlotID, bool DropItem, bool Rotated);
	void ServerSwapAttachmentItems(const struct FS_AttachmentSlotID& AttachmentID, class UBP_WeaponInventory_C* WeaponInventory);
	void ServerAddAttachmentFromSlot(const struct FS_InvSlotID& AttachmentItemID, class UBP_WeaponInventory_C* WeaponInventory);
	void ClientUpdateAttachmentItems(TArray<struct FS_AttachmentSlot> Attachments, class UBP_WeaponInventory_C* WeaponInventory);
	void ServerDestroyAttachment();
	void ServerRemoveAttachment();
	void AttachNewAttachment();
	void ShowNewAttachment();
	void ClientUpdateAttachment(class UBP_MasterInventory_C* Inventory);
	void ClientSetDownItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split);
	void ServerSetDownItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split, const struct FVector& SetLocation, const struct FRotator& SetRotation);
	void ServerSetIgnoreActor(class AActor* Actor, float Time);
	void ClientSetIgnoreActor(class AActor* IgnoreInteractActor);
	void ServerRepairItem(const struct FS_InvSlotID& InvSlotID);
	void ServerAddAllQuickSlots();
	void ServerEmptyTargetInventory(class UBP_MasterInventory_C* StartInventory, class UBP_MasterInventory_C* TargetInventory);
	void ClientRemoveQuickSlots(int RemoveAmount);
	void ClientAddQuickSlots(int AddAmount);
	void ServerSetInventoryOpen(bool InventoryOpen);
	void ServerSplitStack(const struct FS_InvSlotID& InvSlotID);
	void UpdateDetails(const struct FS_ContainerDetails& InventoryDetails, class UBP_MasterInventory_C* Inventory);
	void ClientSetInventoryOpen(bool InventoryOpen);
	void ClientUpdateQuickSlot(const struct FS_InvSlotID& InvSlotID, int QuickSlotIndex);
	void ServerQuickMoveItem(class UBP_MasterInventory_C* Inventory, int ItemIndex);
	void ServerUpdateWeaponQuickSlot(const struct FS_WeaponSlotID& Weapon_Slot_ID, int QuickSlotIndex);
	void ServerUpdateItemQuickSlot(const struct FS_InvSlotID& Slot_ID, int QuickSlotIndex);
	void ServerUnequipWeapon(const struct FS_InvSlotID& EndInvSlotID, const struct FS_WeaponSlotID& WeaponSlotID, bool DropItem, bool Rotated, bool Destroy);
	void ServerSwapWeaponItems(const struct FS_WeaponSlotID& StartWeaponSlotID, const struct FS_WeaponSlotID& EndWeaponSlotID);
	void ServerEquipWeaponFromSlot(const struct FS_InvSlotID& Slot_ID, const struct FS_WeaponSlotID& Weapon_Slot_ID);
	void ServerSwapEquipmentItems(const struct FS_EquipmentSlotID& StartEquipmentSlotID, const struct FS_EquipmentSlotID& EndEquipmentSlotID);
	void ServerUnequipItem(const struct FS_InvSlotID& EndInvSlotID, const struct FS_EquipmentSlotID& EquipmentSlotID, bool DropItem, bool Rotated, bool DestroyItem);
	void ClientUpdateEquipmentSlot(const struct FS_EquipmentSlot& EquipmentSlot);
	void ServerEquipItemFromSlot(const struct FS_InvSlotID& SlotID, const struct FS_EquipmentSlotID& EquipmentSlotID);
	void ServerDropItemFromSlot(const struct FS_InvSlotID& SlotID, TEnumAsByte<E_SpecialSlotType> SpecialType, bool Split);
	void ServerMoveItem(const struct FS_InvSlotID& StartSlotID, const struct FS_InvSlotID& EndSlotID, bool Rotated, bool Split, TEnumAsByte<E_SpecialSlotType> SpecialType);
	void ServerOpenLockpad(bool SetCode, class AActor* Lock);
	void ServerSetCode(const struct FText& Code, class AActor* Actor);
	void ClientCloseLockpad();
	void ClientCodeResult(bool Accepted);
	void ServerCheckCode(const struct FText& Code, class AActor* Actor);
	void InGameLoadComponentData(class UBP_SGKSaveGame_C* Save);
	void SaveComponentData(class UBP_SGKSaveGame_C* SaveGame);
	void ServerFinishInGameLoad();
	void ServerLoadGame(const struct FString& SlotName, const struct FString& Level);
	void ServerSaveGame(const struct FString& SlotName);
	void test(class UBP_MasterInventory_C* NewParam);
	void ServerSellVenderItem(const struct FS_VendorSell& VenderSellItem, int Amount);
	void ServerBuyVenderItem(const struct FS_VendorBuy& VenderBuyListing, int Amount);
	void ServerCreateNewCraftingListing(class UBP_MasterInventory_C* CraftingInventory, const struct FName& CraftingRecipeRow, int Amount);
	void CancelCraftingQueue(const struct FS_CraftingQueue& CancelQueue, class UBP_MasterInventory_C* CraftingInventory);
	void ServerOpenExtEquipmentInv(class UBP_EquipmentInventory_C* EquipmentInventory);
	void ServerOpenContainerWindow(class UBP_MasterInventory_C* Inventory, bool ToggleInventory);
	void ClientOpenContainerInv(class UBP_MasterInventory_C* Inventory, bool ToggleInventory, TArray<struct FS_InvSlot> Inventory_Slots);
	void CreateNotificationInChild(const struct FS_NotificationDetails& NotificationDetails);
	void ClientCreateNotification(const struct FS_NotificationDetails& NotificationDetails);
	void ClientRefreshGrids();
	void ClientCloseInventory();
	void ClientUpdateWeaponSlot(const struct FS_WeaponSlot& Weapon_Slot);
	void ClientCloseContainerWindow(class UBP_MasterInventory_C* Inventory);
	void ClientRemoveInvPanel(class UBP_MasterInventory_C* Inventory, bool Condition);
	void AddNewInvPanel(class UBP_MasterInventory_C* Inventory, bool Internal);
	void ServerLoadEquipmentPanels();
	void ClientUpdateStatUI();
	void ClientOpenLockpad(bool SetCode, class AActor* Lock);
	void ServerOpenItemContainerWindow(class UBP_MasterInventory_C* Inventory, int Index, bool Toggle_Inventory);
	void ServerOpenItemWeaponWindow(class UBP_MasterInventory_C* Inventory, int Index, bool ToggleInventory);
	void ClientRefreshCraftingList(TArray<struct FDataTableRowHandle> Recipes);
	void ClientSelfInventoryPanel();
	void ClientOpenVenderMenu(class UBP_MasterInventory_C* VenderComponent, TArray<struct FS_InvSlot> Inventory);
	void ServerOpenVenderMenu(class UBP_MasterInventory_C* VenderInventory);
	void ClientResumeCraftingListing();
	void ClientPauseCraftingListing();
	void ClientRestartConvertSlotTimer(const struct FS_CookingSlot& CookingSlot);
	void ClientStartCookingSlotTimer(const struct FS_CookingSlot& CookingSlot);
	void ClientPauseAllCookingSlotTimers();
	void ClientResumeCookingSlotTimer(const struct FS_CookingSlot& CookingSlot);
	void ClientUpdateCookingSlot(const struct FS_InvSlot& CookingSlot);
	void ClientOpenExtCookingMenu(class UBP_MasterInventory_C* CookingInventory, TArray<struct FS_InvSlot> Inventory, TArray<struct FS_CookingSlot> CookingSlots);
	void ServerOpenExtCookingMenu(class UBP_MasterInventory_C* CookingInventory);
	void ClientOpenExtCraftingMenu(class UBP_MasterInventory_C* MasterInventory, TArray<struct FS_InvSlot> Inventory, TArray<struct FS_CraftingQueue> CraftingQueue, bool CraftingBlocked);
	void ServerOpenExtCraftingMenu(class UBP_MasterInventory_C* CraftingInventory);
	void ClientUpdateCraftingListing(const struct FS_CraftingQueue& ListingQueue, class UBP_MasterInventory_C* CraftingInventory);
	void ClientStartCraftingListingTimer(const struct FName& CraftingRecipe, class UBP_MasterInventory_C* CraftingInventory);
	void ClientAddCraftingListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory);
	void ClientOpenWeaponWindow(class UBP_WeaponInventory_C* Inventory, bool ToggleInventory);
	void ServerOpenWeaponWindow(class UBP_MasterInventory_C* Inventory, bool ToggleInventory);
	void ServerOpenExtInv(class UBP_MasterInventory_C* Inv);
	void ClientOpenExtInv(class UBP_MasterInventory_C* MasterInventory, TArray<struct FS_InvSlot> Inventory);
	void ClientQuickSlotHighlight(int QuickSlotIndex, bool Highlight);
	void ClientClearQuickSlotItem(int QuickSlotIndex);
	void ClientOpenExtEquipmentInv(class UBP_EquipmentInventory_C* EquipmentInventory, TArray<struct FS_InvSlot> Inventory);
	void ClientReloadChecks();
	void ServerToggleMeleeCollision(bool TraceOn);
	void ServerEndChamber(class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void ServerToggleFireMode();
	void ServerChamberWeapon();
	void ServerUpdateClientWeaponSlot(TEnumAsByte<E_WeaponSlots> WeaponSlot);
	void ClientUpdateWeaponQuickSlot(const struct FS_WeaponSlotID& WeaponSlotID, int QuickSlotID);
	void ClientClearInventory();
	void ServerUIFinishedCreating(class UBP_MasterInventory_C* Inventory);
	void ServerRemoveUsingPlayer(class UBP_MasterInventory_C* Inventory);
	void ClientSetExtInvDetails(const struct FS_ContainerDetails& Details, class UBP_MasterInventory_C* Inventory);
	void ClientUpdateSlotsWithItems(TArray<struct FS_InvSlot> Slots, class UBP_MasterInventory_C* Inventory);
	void ServerUpdateClientEquipmentSlot(TEnumAsByte<E_EquipmentType> EquipmentSlot);
	void ClientSetPlayerName(const struct FText& PlayerName, const struct FText& DisplayName);
	void ClientSetCookingInventorySlot(TArray<struct FS_InvSlot> NewParam);
	void ClientUpdateItemSlots(TArray<struct FS_InvSlot> Slots, const struct FS_ContainerDetails& NewParam, class UBP_MasterInventory_C* NewParam2);
	void ClientUpdateInvSlot(const struct FS_InvSlot& RootInvSlot, int HeightSlots, int WidthSlots, bool Rotated);
	void InteractServerCheck(TEnumAsByte<E_WorldActions> Action, const struct FHitResult& InteractTarget);
	void ClientSecondaryAction(bool KeyDown);
	void ClientPrimaryAction(bool KeyDown);
	void ServerSecondaryAction(bool KeyDown);
	void ServerPrimaryAction(bool KeyDown);
	void ServerUseWeaponAction(const struct FS_WeaponSlotID& WeaponSlotID, TEnumAsByte<E_InventoryActions> Action);
	void ServerUseItemAction(const struct FS_InvSlotID& InvSlotID, TEnumAsByte<E_InventoryActions> Action);
	void ClientUseQuickSlot(int QuickSlotIndex);
	void ServerToggleComponentInteractedActor();
	void ServerEndInteraction();
	void ServerInteract(const struct FVector& TraceStart, const struct FVector& TraceEnd, TEnumAsByte<E_WorldActions> ActionType);
	void ClientInteract();
	void ClientResetHoldable();
	void SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot);
	void ServerFinishHoldingNewItem();
	void ReceiveBeginPlay();
	void ClientPlaceNamedBuildPart(const struct FText& Name);
	void ServerSetBuildMode(bool BuildMode);
	void SGK_ItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType);
	void PlayItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType);
	void ServerEndMontage(class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void ClientSetControlRotation(class AController* Controller, const struct FRotator& Rotation);
	void ServerPlayMontage(class UAnimMontage* Montage, class UAnimMontage* FPMontage);
	void ConsumeItemTicker(const struct FS_InvItem& Item);
	void ExecuteUbergraph_BP_PlayerInventory(int EntryPoint);
	void RotateMoveWidget__DelegateSignature();
	void InventoryToggled__DelegateSignature(bool Open);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
