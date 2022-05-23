#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AIMasterHoldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIMasterHoldable.BP_AIMasterHoldable_C
// 0x09A8 (0x0BC8 - 0x0220)
class ABP_AIMasterHoldable_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBillboardComponent*                         End_Trace;                                                // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBillboardComponent*                         Start_Trace;                                              // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Particle_Socket;                                          // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Attach_Point;                                             // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             RangeStartPoint;                                          // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                    // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               Use_Equip_Animation;                                      // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	class UAnimMontage*                                Equip_Animation;                                          // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Equip_Attach_Socket;                                      // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Unequip_Animation;                                    // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	class UAnimMontage*                                Unequip_Animation;                                        // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Unequip_Attach_Socket;                                    // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<E_HitboxTypeAI>, float>           Damage;                                                   // 0x02A0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	class UBP_SmartAIComponent_C*                      AI_Component;                                             // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	int                                                Max_Number_Of_Hits;                                       // 0x02F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_OrderOptions>                        Melee_Attack_Anims_Order;                                 // 0x02FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	TArray<class UAnimMontage*>                        Melee_Animations;                                         // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UAnimMontage*>                        Lower_Melee_Animations;                                   // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Can_Melee_Attack_While_Moving;                            // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	float                                              Melee_Attack_Frequency;                                   // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Melee_Anim_Time_Frequancy;                            // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Can_Melee_Attack;                                         // 0x0329(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Reloading;                                                // 0x032A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x1];                                       // 0x032B(0x0001) MISSED OFFSET
	int                                                Current_Hits;                                             // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              Hit_Actors;                                               // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	int                                                Current_Ammo;                                             // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class USoundCue*                                   RangeAttackSound;                                         // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Can_Range_Attack;                                         // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	float                                              Range_Attack_Distance;                                    // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Range__Trace_;                                            // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Spread__Trace_;                                           // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> Surface_Emitters__Trace_;                                 // 0x0360(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> Surface_Decal__Trace_;                                    // 0x03B0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     Surface_Decal_Size__Trace_;                               // 0x0400(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Decal_LifeSpan__Trace_;                                   // 0x040C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Decal_Fade_Distance__Trace_;                              // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Radius__Trace_;                                           // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Max_Hit_Deviation__Projectile_;                           // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Projectile_Actor_Settings;                            // 0x041C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	float                                              Projectile_Homing_Acceleration_Magnitude;                 // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UClass* /*AActor*/                           Range_Projectile;                                         // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Accuracy__Projectile_;                                    // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Max_Miss_Deviation__Projectile_;                          // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Homing_Projectile;                                        // 0x0438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UAnimMontage*                                Character_Reload_Montage;                                 // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Can_Reload;                                               // 0x0448(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Use_Ammo;                                                 // 0x0449(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x2];                                       // 0x044A(0x0002) MISSED OFFSET
	int                                                Max_Total_Ammo;                                           // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Max_Magazine_Ammo;                                        // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_NoAmmo>                              No_Ammo_Behaviour;                                        // 0x0454(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Holdable_Anims;                                       // 0x0455(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0456(0x0002) MISSED OFFSET
	struct FS_AllAIAnims                               Weapon_Animations;                                        // 0x0458(0x04C8) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                Holdable_Mesh_Reload_Anim;                                // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Allow_Emote_Anims;                                        // 0x0928(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_OrderOptions>                        Range_Attack_Anims_Order;                                 // 0x0929(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData12[0x6];                                       // 0x092A(0x0006) MISSED OFFSET
	TArray<class UAnimMontage*>                        Range_Attack_Anims;                                       // 0x0930(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Range_Attack_Frequency;                                   // 0x0940(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Use_Range_Anim_Time_Frequancy;                            // 0x0944(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Can_Range_Attack_While_Moving;                            // 0x0945(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Start_With_Full_Magazine;                                 // 0x0946(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0947(0x0001) MISSED OFFSET
	class UAnimMontage*                                Holdable_Mesh_Shoot_Anim;                                 // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Muzzle_Effect;                                            // 0x0950(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Range_Attack_Particle_Effect;                             // 0x0958(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FHitResult                                  Effect_Hit_Result;                                        // 0x0960(0x008C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
	bool                                               Delay_Range_Attack;                                       // 0x09EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData14[0x3];                                       // 0x09ED(0x0003) MISSED OFFSET
	float                                              Range_Delay_Time;                                         // 0x09F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Melee_Trace_Radius;                                       // 0x09F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Melee_Timer;                                              // 0x09F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Can_Block;                                                // 0x0A00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0A01(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<E_BlockType>, int>                Block_Chances;                                            // 0x0A08(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Block_Cooldown;                                           // 0x0A58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        Melee_Block_Anims;                                        // 0x0A60(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UAnimMontage*>                        Blocked_Attack_Montage;                                   // 0x0A70(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> Melee_Emitters;                                           // 0x0A80(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Projectile_Speed;                                         // 0x0AD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Allow_Melee_Rotation;                                     // 0x0AD4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ProjectileUseWeaponDamage;                                // 0x0AD5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0AD6(0x0002) MISSED OFFSET
	TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> Surface_Sound__Trace_;                                    // 0x0AD8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> Melee_Surface_Sounds;                                     // 0x0B28(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> MeleeDecals;                                              // 0x0B78(0x0050) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AIMasterHoldable.BP_AIMasterHoldable_C"));
		return ptr;
	}


	void Update_Melee_Hit();
	void Add_Current_Ammo(int Add_Amount);
	void Remove_Total_Ammo(int Remove_Ammo, bool* Removed_All, int* Remaining_Ammo);
	void Total_Ammo_Check(bool* Has_Ammo, int* Ammo);
	void Remove_Current_Ammo(int Remove_Amount);
	void Current_Ammo_Check(bool* Has_Ammo, int* Ammo);
	void Melee_Hit(class AActor* Hit_Actor, class UPrimitiveComponent* Hit_Component, const struct FName& Bone_Name, const struct FHitResult& Hit);
	void OnNotifyEnd_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName);
	void OnNotifyBegin_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName);
	void OnInterrupted_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName);
	void OnBlendOut_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName);
	void OnCompleted_4840180348DE7FAC42113FADB8E440A3(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void Multicast_Play_Skeletal_Mesh_Montage(class UAnimMontage* Montage);
	void Server_Play_Shoot_Montage();
	void Server_Range_Attack_Muzzle_Effect(const struct FHitResult& Hit);
	void Multicast_Range_Attack_Effects(const struct FHitResult& Hit);
	void Server_Play_Skeletal_Mesh_Montage(class UAnimMontage* Montage);
	void Server_End_Melee_Attack();
	void Server_Melee_Attack();
	void Multicast_Melee_Emitter(const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_AIMasterHoldable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
