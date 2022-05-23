#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterProjectile.BP_MasterProjectile_C
// 0x0249 (0x0469 - 0x0220)
class ABP_MasterProjectile_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USphereComponent*                            Collision;                                                // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      HitActor;                                                 // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_Damage>                           Damage;                                                   // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FHitResult                                  HitResult;                                                // 0x0258(0x008C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
	struct FVector                                     StartLocation;                                            // 0x02E4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Range;                                                    // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FTimerHandle                                RangeDestroyTimer;                                        // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_DamageType>                          DamageType;                                               // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               UseWeaponEffects;                                         // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0309(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> HitSurfaceDecals;                                         // 0x0310(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> HitSurfaceSounds;                                         // 0x0360(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> HitSurfaceParticles;                                      // 0x03B0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FVector> DecalSize;                                                // 0x0400(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              DecalLifeSpan;                                            // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Decal_Fade_Distance;                                      // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DebugMode;                                                // 0x0458(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	int                                                BleedDamage;                                              // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TickTime;                                                 // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BleedLength;                                              // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DoBleedDamage;                                            // 0x0468(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterProjectile.BP_MasterProjectile_C"));
		return ptr;
	}


	void SetupProjectile(TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> HitSurfaceParticles, TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> HitSurfaceSounds, TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> HitSurfaceDecals, TEnumAsByte<E_DamageType> DamageType, TMap<TEnumAsByte<EPhysicalSurface>, struct FVector> DecalSize, float DecalLifeSpan, float Decal_Fade_Distance, int BleedDamage, float TickTime, float BleedLength, bool DoBleedDamage, TArray<struct FS_Damage>* Damage);
	void DistanceDestroy();
	void HitActorDebug();
	void ApplyHitActorDamage();
	void HitSurfaceType(TEnumAsByte<EPhysicalSurface>* SurfaceType);
	void SpawnHitSurfaceParticle();
	void SpawnHitSurfaceDecal();
	void SpawnHitSurfaceSound();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_MasterProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
