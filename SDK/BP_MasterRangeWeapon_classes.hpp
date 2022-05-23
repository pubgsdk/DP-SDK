#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterRangeWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterRangeWeapon.BP_MasterRangeWeapon_C
// 0x03B4 (0x09F4 - 0x0640)
class ABP_MasterRangeWeapon_C : public ABP_MasterWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0648(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             BulletSpawnLocation;                                      // 0x0650(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_0_6F2E135D4EE82100F05D2EBA0616F2AF;   // 0x0658(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6F2E135D4EE82100F05D2EBA0616F2AF;   // 0x065C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x065D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0660(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              ADSCameraTimeLine_NewTrack_0_F88105B54EB196497B80B1963E00CAF6;// 0x0668(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    ADSCameraTimeLine__Direction_F88105B54EB196497B80B1963E00CAF6;// 0x066C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x066D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ADSCameraTimeLine;                                        // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               Aimed;                                                    // 0x0678(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0679(0x0003) MISSED OFFSET
	int                                                MaxAmmo;                                                  // 0x067C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>                 AllowedAmmoTypes;                                         // 0x0680(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               PrimaryActionDown;                                        // 0x0690(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	struct FS_InvSlot                                  CurrentFireItem;                                          // 0x0698(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	float                                              BustFireDelay;                                            // 0x06E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AutoFireDelay;                                            // 0x06EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SingleFireDelay;                                          // 0x06F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AutoFireRate;                                             // 0x06F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                BurstFireCount;                                           // 0x06F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Range;                                                    // 0x06FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETraceTypeQuery>                       WeaponTraceChannel;                                       // 0x0700(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SingleShot;                                               // 0x0701(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0702(0x0002) MISSED OFFSET
	int                                                Multi_Shot_Count;                                         // 0x0704(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FireFromSocket;                                           // 0x0708(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                PerShotItemCost;                                          // 0x0710(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	TSet<TEnumAsByte<E_FireModes>>                     FireModes;                                                // 0x0718(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	int                                                CurrentBurstCount;                                        // 0x0768(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DistanceSpreadIncrease;                                   // 0x076C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseDistanceSpreadIncrease;                                // 0x0770(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	float                                              DistanceSpreadMax;                                        // 0x0774(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartDistanceSpreadIncrease;                              // 0x0778(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<E_CharacterState>, float>         Spread;                                                   // 0x0780(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MaxSpread;                                                // 0x07D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpreadIncreasePerShot;                                    // 0x07D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpreadReductionSpread;                                    // 0x07D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentSpread;                                            // 0x07DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  NoAmmoSound;                                              // 0x07E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  FireSound;                                                // 0x07E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                CharacterFireAnimation;                                   // 0x07F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           WeaponFireAnimation;                                      // 0x07F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             MuzzleFlashEffect;                                        // 0x0800(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       MuzzleFlashSocket;                                        // 0x0808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Muzzle_Effect;                                            // 0x0810(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowChamberingReload;                                    // 0x0818(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowChamberingReloadWithMagazineAttached;                // 0x0819(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x6];                                       // 0x081A(0x0006) MISSED OFFSET
	class UAnimMontage*                                CharacterChamberAnimation;                                // 0x0820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                FPCharacterChamberAnimation;                              // 0x0828(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           WeaponChamberAnimation;                                   // 0x0830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ChamberAddAmount;                                         // 0x0838(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData09[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	TArray<struct FName>                               AmmoItemNames;                                            // 0x0840(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               UseAmmoDamageValues;                                      // 0x0850(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	TArray<struct FS_Damage>                           AmmoDamage;                                               // 0x0858(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               DebugLineTrace;                                           // 0x0868(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanAim;                                                   // 0x0869(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ADSCameraDebug;                                           // 0x086A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData11[0x1];                                       // 0x086B(0x0001) MISSED OFFSET
	float                                              FirstPersonAimedFOV;                                      // 0x086C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ThirdPersonAimedFOV;                                      // 0x0870(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     ADSCameraLocation;                                        // 0x0874(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartingTPFOV;                                            // 0x0880(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartingFP_FOV;                                           // 0x0884(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimedSway;                                                // 0x0888(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TPStartFeildOfView;                                       // 0x088C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FPStartFieldOfView;                                       // 0x0890(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SightFPFOV;                                               // 0x0894(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SightTPFOV;                                               // 0x0898(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SightFOV;                                                 // 0x089C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData12[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	struct FVector                                     SightLocation;                                            // 0x08A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SightAiming;                                              // 0x08AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData13[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class USoundBase*                                  DefaultFireSound;                                         // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AttachmentSpreadMod;                                      // 0x08B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData14[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class ABP_MasterAttachment_C*                      Sight;                                                    // 0x08C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Min_Spread;                                               // 0x08C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DebugMode;                                                // 0x08CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData15[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	struct FS_WeaponRecoil                             PerShotRecoil;                                            // 0x08D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ChamberNextRound;                                         // 0x08E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData16[0x7];                                       // 0x08E1(0x0007) MISSED OFFSET
	class USoundBase*                                  ChamberSound;                                             // 0x08E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowChamberingWhenInInventory;                           // 0x08F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Reload;                                                   // 0x08F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData17[0x6];                                       // 0x08F2(0x0006) MISSED OFFSET
	struct FS_InvSlot                                  RemoveItemL;                                              // 0x08F8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData18[0x8];                                       // 0x0948(0x0008) MISSED OFFSET
	struct FTransform                                  ThirdPersonAimedHandIK;                                   // 0x0950(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  FirstPersonAimedHandIK;                                   // 0x0980(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor)
	class ABP_MasterAttachment_C*                      AimdSightReference;                                       // 0x09B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ADSCameraAlpha;                                           // 0x09B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData19[0x4];                                       // 0x09BC(0x0004) MISSED OFFSET
	class UAnimMontage*                                CharacterAimedFireAnimation;                              // 0x09C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     WeaponChannelName;                                        // 0x09C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	int                                                RemoveAmount;                                             // 0x09D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData20[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	class UCameraComponent*                            CurrentCamera;                                            // 0x09E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpringArmComponent*                         CurrentSpringArm;                                         // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ProjectileSpeedMultiply;                                  // 0x09F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterRangeWeapon.BP_MasterRangeWeapon_C"));
		return ptr;
	}


	void UpdateBulletSpawnLocation();
	void AimedLookAt();
	void SGK_Aimed(bool* Aimed);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void ApplyRangeWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment);
	void RemoveRangeWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment);
	void CalculateWeaponSway();
	void RemoveMagazineChecks(const struct FS_InvSlot& NewMagSlot);
	void ChamberAmmoCheck(bool* AmmoFound);
	void IncreaseSpread(float IncreaseAmount);
	void UpdateMinSpread(TEnumAsByte<E_CharacterState> CharacterState);
	void DecreaseSpread(float Amount);
	void HitscanTraces();
	void ProjectileCalculation();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ADSCameraTimeLine__FinishedFunc();
	void ADSCameraTimeLine__UpdateFunc();
	void OnNotifyEnd_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName);
	void OnNotifyBegin_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName);
	void OnInterrupted_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName);
	void OnBlendOut_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName);
	void OnCompleted_50B07BB945ECC720DEA04E837F2E618D(const struct FName& NotifyName);
	void OnNotifyEnd_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName);
	void OnNotifyBegin_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName);
	void OnInterrupted_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName);
	void OnBlendOut_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName);
	void OnCompleted_917101B3417C952AA8CFB6B82351D5EB(const struct FName& NotifyName);
	void ClientSetReload(bool Reload);
	void ServerPartReloadChecks();
	void SGK_ChamberWeaponAmmo();
	void ServerReloadChecks();
	void SGK_ClientReloadChecks();
	void SGK_ToggleFireMode();
	void ServerChamberCheckes();
	void SGK_ClientPrimaryAction(bool KeyDown);
	void SGK_ServerPrimaryAction(bool KeyDown);
	void ServerExitAim(bool ClientExit);
	void ADSCameraTimelineReverse();
	void ClientExitAim();
	void SGK_ClientSecondaryAction(bool KeyDown);
	void SGK_ServerSecondaryAction(bool KeyDown);
	void SGK_ResetHoldable();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void RemoveWeaponAttchmentStats(class ABP_MasterAttachment_C* Attachment);
	void ApplyWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment);
	void ServerUpdateBulletLocation(const struct FVector& Location);
	void ClientOwnerFireEffects();
	void MulticastFireEffects();
	void ClientFireWeapon();
	void MulticastProjectileSpawn(const struct FVector& Location, const struct FRotator& Rotation, const struct FName& AmmoID);
	void ServerFireWeapon();
	void CharacterSprinting(bool Sprinting);
	void CharacterFalling();
	void ServerUpdateTraceStart(const struct FVector& Location, bool Relative);
	void CalculateHoldableSway();
	void MulticastDebugSphere(const struct FVector& Center);
	void MulticastDebugLine(const struct FVector& LineStart, const struct FVector& LineEnd);
	void ClientOwnerNoAmmoSound();
	void MulticastNoAmmoSound();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterRangeWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
