#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterWeapon.BP_MasterWeapon_C
// 0x0208 (0x0640 - 0x0438)
class ABP_MasterWeapon_C : public ABP_MasterHoldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class UClass* /*AActor*/>                   AllowedAttachments;                                       // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FDataTableRowHandle>                 DefaultAttachments;                                       // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TSet<TEnumAsByte<E_AttachmentType>>                AvalibleAttachmentSlot;                                   // 0x0460(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	class UBP_WeaponInventory_C*                       WeaponInventory;                                          // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FS_Damage>                           Damage;                                                   // 0x04B8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class ABP_MasterAttachment_C*                      NewAttachment;                                            // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> HitSurfaceSounds;                                         // 0x04D0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> HitSurfaceDecals;                                         // 0x0520(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> HitSurfaceParticles;                                      // 0x0570(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FVector> DecalSize;                                                // 0x05C0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              DecalLifeSpan;                                            // 0x0610(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Decal_Fade_Distance;                                      // 0x0614(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseDurabilityCheck;                                       // 0x0618(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowAttackingInStandardStance;                           // 0x0619(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ApplyBleedDamage;                                         // 0x061A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x061B(0x0001) MISSED OFFSET
	float                                              BleedTickTime;                                            // 0x061C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RandomlyApplyBleed;                                       // 0x0620(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0621(0x0003) MISSED OFFSET
	struct FS_MinMax                                   BleedTickDamage;                                          // 0x0624(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BleedApplyChance;                                         // 0x062C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BleedLength;                                              // 0x0630(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_DamageType>                          DamageType;                                               // 0x0634(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0635(0x0003) MISSED OFFSET
	float                                              AISoundRange;                                             // 0x0638(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AISoundRangeCurrent;                                      // 0x063C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterWeapon.BP_MasterWeapon_C"));
		return ptr;
	}


	void AttackStanceCheck(bool* AllowAttack);
	bool DurabilityCheck();
	void SpawnHitSurfaceParticle(const struct FHitResult& HitResult);
	void SpawnHitSurfaceSound(const struct FHitResult& HitResult);
	void SpawnHitSurfaceDecal(const struct FHitResult& HitResult);
	bool PlayDetachWeaponAnim(class ABP_MasterAttachment_C* Attachment, const struct FS_AttachmentDetails& AttachmentDetails);
	bool PlayAttachWeaponAnim(class ABP_MasterAttachment_C* Attachment, const struct FS_AttachmentDetails& AttachmentDetails);
	void ApplyHitActorDamage(class AActor* HitActor, const struct FName& HitBone, TArray<struct FS_Damage>* Damage);
	void AddNewAttachment(class UClass* /*ABP_MasterAttachment_C*/ Class, const struct FS_InvItem& AttachmentItem, bool PlayAnim, class ABP_MasterAttachment_C** NewAttachment);
	void ApplyWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment);
	void RemoveWeaponAttchmentStats(class ABP_MasterAttachment_C* Attachment);
	void ApplyAttachmentDamage(class ABP_MasterAttachment_C* Attachment, bool Add);
	void OnNotifyEnd_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName);
	void OnNotifyBegin_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName);
	void OnInterrupted_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName);
	void OnBlendOut_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName);
	void OnCompleted_8390FA13400A16AA738DBD972414B766(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void SGK_AttachNewAttachment(class ABP_MasterAttachment_C* Attachment, const struct FS_InvItem& InvItem, TEnumAsByte<E_AttachmentType> AttachmentType);
	void SGK_ShowNewAttachment();
	void MulticastPlayWeaponMeshAnimation(class UAnimSequenceBase* Animation);
	void MulticastPlayMontage(class UAnimMontage* Montage);
	void WeaponNoiseEvent();
	void MulticastHitSurfaceEffects(const struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_MasterWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
