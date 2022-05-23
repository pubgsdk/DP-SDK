#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterBuildPart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterBuildPart.BP_MasterBuildPart_C
// 0x00B8 (0x02D8 - 0x0220)
class ABP_MasterBuildPart_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDestructibleComponent*                      Destructible;                                             // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        ArrowMesh;                                                // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FText>                               Owners;                                                   // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	bool                                               PendingDestroy;                                           // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               InCheck;                                                  // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               InUpgrade;                                                // 0x0262(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0263(0x0005) MISSED OFFSET
	class ABP_SaveSystem_C*                            SaveSystem;                                               // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SaveLoaded;                                               // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SupportingDestroyedDone;                                  // 0x0271(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Preview;                                                  // 0x0272(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0273(0x0005) MISSED OFFSET
	struct FDataTableRowHandle                         BuildPart;                                                // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	class UClass* /*UBP_MasterRadialMenu_C*/           BuildingOptionMenu;                                       // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowHealthBarUI;                                          // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	int                                                CurrentHealth;                                            // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxHealth;                                                // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class USoundBase*                                  DestroySound;                                             // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     FurnitureCheckSize;                                       // 0x02A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowDamage;                                              // 0x02B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsDeco;                                                   // 0x02B5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	TArray<class UBP_GridComponent_C*>                 GridComponents;                                           // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>                 BuildCollisionComponents;                                 // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterBuildPart.BP_MasterBuildPart_C"));
		return ptr;
	}


	bool SGK_SetCurrentHealth(int NewHealthAmount);
	void SGK_ShowHealthWidget(bool* ShowHealthWidget, struct FText* HealthWidgetName);
	void SGK_MaxHealth(int* MaxHealth);
	void SGK_CurrentHealth(int* Health);
	void SGK_GetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	bool SGK_UpdateCode(const struct FText& Code);
	bool SGK_VerifyPlayer(const struct FText& Text);
	void SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	bool SGK_StartHighlight();
	bool SGK_EndHighlight();
	void SGK_InteractName(struct FText* InteractName);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_ItemAmount(int* Amount);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	void SGK_BPBuildCollision(TArray<class UPrimitiveComponent*>* Collision);
	void SGK_BPGrids(TArray<class UBP_GridComponent_C*>* Grids);
	bool SGK_Preview(bool Preview);
	bool SGK_AddMultipleOwners(TArray<struct FText>* Owners);
	bool SGK_ClearOwners();
	bool SGK_AddOwner(const struct FText& PlayerName);
	void SGK_IsOwner(const struct FText& PlayerName, bool* IsOwner);
	void SGK_BuildPart(struct FDataTableRowHandle* BuildPart);
	void SGK_IsPlaced(bool* IsPlaced);
	void SGK_SupportCheck(bool DestroyOnFail, bool DirectSupportOnly, bool* Supported, bool* IndirectSupportOnly);
	void SGK_IsPendingDestroy(bool* IsPendingDestroy);
	void SGK_BuildPartType(TEnumAsByte<E_BuildType>* Type);
	void CheckIfSupportingBuildParts(bool* Supporting);
	void AdminForcePickup(class UBP_PlayerInventory_C* Player);
	void SaveBuildPartData(class UBP_SGKSaveGame_C* SaveGame);
	void LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index);
	void SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData);
	void TakeDamage(int Damage);
	bool IsInNoDamageZone();
	void SupportCheck(bool DirectSupportOnly, bool* Supported);
	void FloorSupportCheck(bool DirectSupportOnly, bool* Supported, bool* IndirectSupportOnly);
	void DestroySupportingBuildParts();
	void AdjacentFloorSupportCheck();
	void DeleteBuildPart(class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent, bool ForceDestroy);
	bool IsOwner(const struct FText& PlayerName);
	void SGK_BleedDamage(int TickDamage, float TickTime, float BleedLength);
	void SGK_SetVerifiedPlayers(TArray<struct FText>* VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_PlayerOutProximity();
	void SGK_PlayerInProximity();
	void SGKSave(class UBP_SGKSaveGame_C* Save);
	void LoadBuildPart(class UBP_SGKSaveGame_C* SaveGame);
	void ReceiveBeginPlay();
	void MulticastDestroyed();
	void ReceiveDestroyed();
	void SGK_DeleteBuildPart(class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent, bool ForceDestroy);
	void MulticastBuildPartPlaced();
	void SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame);
	void SGK_Upgrade();
	void ServerBuildingOptions(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_BuildingOptions(class UBP_PlayerInventory_C* PlayerInventory);
	void PlaySound(class USoundBase* Sound);
	void MulticastSound(class USoundBase* Sound);
	void SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SGK_Damage(int BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox);
	void ExecuteUbergraph_BP_MasterBuildPart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
