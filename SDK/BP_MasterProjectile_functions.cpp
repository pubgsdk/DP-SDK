// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterProjectile.BP_MasterProjectile_C.SetupProjectile
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_Damage>       Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> HitSurfaceParticles            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> HitSurfaceSounds               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> HitSurfaceDecals               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<E_DamageType>      DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TMap<TEnumAsByte<EPhysicalSurface>, struct FVector> DecalSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          DecalLifeSpan                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Decal_Fade_Distance            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BleedDamage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TickTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BleedLength                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           DoBleedDamage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_MasterProjectile_C::SetupProjectile(TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> HitSurfaceParticles, TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> HitSurfaceSounds, TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> HitSurfaceDecals, TEnumAsByte<E_DamageType> DamageType, TMap<TEnumAsByte<EPhysicalSurface>, struct FVector> DecalSize, float DecalLifeSpan, float Decal_Fade_Distance, int BleedDamage, float TickTime, float BleedLength, bool DoBleedDamage, TArray<struct FS_Damage>* Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.SetupProjectile"));

	struct
	{
		TArray<struct FS_Damage>       Damage;
		TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> HitSurfaceParticles;
		TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> HitSurfaceSounds;
		TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> HitSurfaceDecals;
		TEnumAsByte<E_DamageType>      DamageType;
		TMap<TEnumAsByte<EPhysicalSurface>, struct FVector> DecalSize;
		float                          DecalLifeSpan;
		float                          Decal_Fade_Distance;
		int                            BleedDamage;
		float                          TickTime;
		float                          BleedLength;
		bool                           DoBleedDamage;
	} params = {};

	params.HitSurfaceParticles = HitSurfaceParticles;
	params.HitSurfaceSounds = HitSurfaceSounds;
	params.HitSurfaceDecals = HitSurfaceDecals;
	params.DamageType = DamageType;
	params.DecalSize = DecalSize;
	params.DecalLifeSpan = DecalLifeSpan;
	params.Decal_Fade_Distance = Decal_Fade_Distance;
	params.BleedDamage = BleedDamage;
	params.TickTime = TickTime;
	params.BleedLength = BleedLength;
	params.DoBleedDamage = DoBleedDamage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.DistanceDestroy
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterProjectile_C::DistanceDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.DistanceDestroy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.HitActorDebug
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterProjectile_C::HitActorDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.HitActorDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ApplyHitActorDamage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterProjectile_C::ApplyHitActorDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.ApplyHitActorDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.HitSurfaceType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterProjectile_C::HitSurfaceType(TEnumAsByte<EPhysicalSurface>* SurfaceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.HitSurfaceType"));

	struct
	{
		TEnumAsByte<EPhysicalSurface>  SurfaceType;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SurfaceType != nullptr)
		*SurfaceType = params.SurfaceType;
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceParticle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterProjectile_C::SpawnHitSurfaceParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceParticle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceDecal
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterProjectile_C::SpawnHitSurfaceDecal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceDecal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterProjectile_C::SpawnHitSurfaceSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MasterProjectile_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MasterProjectile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveHit
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSelfMoved                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 HitLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 HitNormal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_MasterProjectile_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveHit"));

	struct
	{
		class UPrimitiveComponent*     MyComp;
		class AActor*                  Other;
		class UPrimitiveComponent*     OtherComp;
		bool                           bSelfMoved;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params = {};

	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ExecuteUbergraph_BP_MasterProjectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_MasterProjectile_C::ExecuteUbergraph_BP_MasterProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterProjectile.BP_MasterProjectile_C.ExecuteUbergraph_BP_MasterProjectile"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
