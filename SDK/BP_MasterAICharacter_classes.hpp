#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterAICharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterAICharacter.BP_MasterAICharacter_C
// 0x011D (0x05DD - 0x04C0)
class ABP_MasterAICharacter_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_MasterInventory_C*                       BP_MasterInventory;                                       // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             RangeStartPoint;                                          // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                      BP_AIComponent;                                           // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Edge_Timeline_NewTrack_0_E35BA4E241D5E59A8EB450B4FEA52937;// 0x04E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Edge_Timeline__Direction_E35BA4E241D5E59A8EB450B4FEA52937;// 0x04E4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Edge_Timeline;                                            // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Smooth_Move_Lerp_C8A3EC80484780C3B672F688B96D1C2A;        // 0x04F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Smooth_Move__Direction_C8A3EC80484780C3B672F688B96D1C2A;  // 0x04F4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Smooth_Move;                                              // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Valt_Timeline_Up_Alpha_D0168D9449470A31646DA0ADA61D8223;  // 0x0500(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Valt_Timeline__Direction_D0168D9449470A31646DA0ADA61D8223;// 0x0504(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Valt_Timeline;                                            // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Climb_Timeline_Across_Alpha_ABEC2831489E1A5D1118BC8DC7BB5664;// 0x0510(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Climb_Timeline_Up_Alpha_ABEC2831489E1A5D1118BC8DC7BB5664; // 0x0514(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Climb_Timeline__Direction_ABEC2831489E1A5D1118BC8DC7BB5664;// 0x0518(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Climb_Timeline;                                           // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Debug_Mode;                                               // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              Debug_Text_Duration;                                      // 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_AIMasterHoldable_C*                      Holdable_Actor;                                           // 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     End_Climb_Location;                                       // 0x0538(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     End_Climb_Hight;                                          // 0x0544(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Up_Movement_Done;                                         // 0x0550(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	struct FVector                                     Edge_Impact_Point;                                        // 0x0554(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Edge_Start_Location;                                      // 0x0560(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	struct FTransform                                  End_Location;                                             // 0x0570(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  Start_Transform;                                          // 0x05A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     Start_Climb_Location;                                     // 0x05D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OneTap;                                                   // 0x05DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterAICharacter.BP_MasterAICharacter_C"));
		return ptr;
	}


	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_InteractName(struct FText* InteractName);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	bool SGK_StartHighlight();
	bool SGK_EndHighlight();
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	void SGK_ItemAmount(int* Amount);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	bool SGK_VerifyPlayer(const struct FText& Text);
	bool SGK_UpdateCode(const struct FText& Code);
	void SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted);
	void SGK_CurrentHealth(int* Health);
	void SGK_MaxHealth(int* MaxHealth);
	void SGK_ShowHealthWidget(bool* ShowHealthWidget, struct FText* HealthWidgetName);
	bool SGK_SetCurrentHealth(int NewHealthAmount);
	void Actor_Attack_Target(class AActor** Attack_Target);
	void AI_Can_Interact_(bool* Can_Interact);
	void AI_Is_Dead_(bool* Dead);
	void Debug_Text(const struct FString& inString, const struct FLinearColor& TextColor);
	void Climb_Timeline__FinishedFunc();
	void Climb_Timeline__UpdateFunc();
	void Valt_Timeline__FinishedFunc();
	void Valt_Timeline__UpdateFunc();
	void Smooth_Move__FinishedFunc();
	void Smooth_Move__UpdateFunc();
	void Edge_Timeline__FinishedFunc();
	void Edge_Timeline__UpdateFunc();
	void SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_BleedDamage(int TickDamage, float TickTime, float BleedLength);
	void AI_Dead();
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Turret_Destroyed_Effect();
	void Turret_Idle_Start();
	void Turret_Idle_Stop();
	void Turret_Start_Reload();
	void Turret_End_Reload();
	void AI_End_Alert();
	void AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour);
	void AI_Camera_Activate(bool Activate);
	void AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker);
	void Actor_Aim_Focus(class AActor* Instigator);
	void ReceivePossessed(class AController* NewController);
	void OnLanded(const struct FHitResult& Hit);
	void Climb_Location_Movement(bool Is_Valting, const struct FVector& End_Climb_Location, float Play_Rate);
	void Smooth_Move_AI_Actor(const struct FTransform& End_Location, float Play_Time);
	void AI_Alert(class AActor* Alert_Actor);
	void SGK_Damage(int BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox);
	void HeadshotSound();
	void SGK_PlayerInProximity();
	void SGK_PlayerOutProximity();
	void ExecuteUbergraph_BP_MasterAICharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
