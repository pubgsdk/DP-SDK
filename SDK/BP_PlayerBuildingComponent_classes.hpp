#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PlayerBuildingComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C
// 0x0250 (0x0300 - 0x00B0)
class UBP_PlayerBuildingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FHitResult                                  ClientHitResult;                                          // 0x00B8(0x008C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class AActor*                                      PreviewActor;                                             // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_Placement>                           PlacementEnabled;                                         // 0x0150(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              Rotation;                                                 // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       BuildPartRowName;                                         // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      PlacedActor;                                              // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      PreviewCollision;                                         // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LastHitGridLocation;                                      // 0x0170(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PlacementOnGrid;                                          // 0x017C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowFloorCheck;                                          // 0x017D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x017E(0x0002) MISSED OFFSET
	struct FTimerHandle                                FloorSupportTimer;                                        // 0x0180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BuildMenuOpen;                                            // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	class AActor*                                      SelectedActor;                                            // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ECollisionChannel>                     BuildPartCollisionType;                                   // 0x0198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	float                                              HeightAdjust;                                             // 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UUserWidget*                                 MenuWidget;                                               // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_BuildType>                           BuildPartType;                                            // 0x01A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	class ABP_GridManager_C*                           GridManager;                                              // 0x01B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              Ignore;                                                   // 0x01B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TEnumAsByte<E_BuildingMode>                        BuildingMode;                                             // 0x01C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	class ACharacter*                                  OwningCharacter;                                          // 0x01D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_CharacterComponent_C*                    CharacterComponent;                                       // 0x01D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraComponent*                            CurrentCamera;                                            // 0x01E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpringArmComponent*                         CurrentSpringArm;                                         // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETraceTypeQuery>                       GridTraceChannel;                                         // 0x01F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EDrawDebugTrace>                       GridTraceVisibility;                                      // 0x01F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x2];                                       // 0x01F2(0x0002) MISSED OFFSET
	float                                              FoundationDepth;                                          // 0x01F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BuildDistance;                                            // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	class UBP_PlayerInventory_C*                       PlayerInventory;                                          // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInterface*                          DisabledMaterial;                                         // 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInterface*                          EnabledMaterial;                                          // 0x0210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSet<class UStaticMesh*>                           FloorStaticMeshes;                                        // 0x0218(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TSet<class UClass* /*AActor*/>                     FloorActorClasses;                                        // 0x0268(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EObjectTypeQuery>                      BuildPartCollisionObjectType;                             // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData09[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	struct FName                                       BuildPreviewCollisionProfileName;                         // 0x02BC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DeductBuildingCost;                                       // 0x02C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugPlacementCollision;                                  // 0x02C5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x2];                                       // 0x02C6(0x0002) MISSED OFFSET
	class UPrimitiveComponent*                         LastHitComponent;                                         // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPrimitiveComponent*                         FloorGridEnabled;                                         // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPrimitiveComponent*                         LastHitGrid;                                              // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*UBP_MasterRadialMenu_C*/           StartBuildMenu;                                           // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             AttachParent;                                             // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_GridComponent_C*                         HitGridComp;                                              // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  PlaceSound;                                               // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C"));
		return ptr;
	}


	void ToggleBuildMenu(bool Open);
	void Toggle_Name_Panel(bool Open);
	void CreateRadialMenu(class UClass* /*UBP_MasterRadialMenu_C*/ Widget);
	void ToggleBuildOptionsMenu(bool Open);
	void UpdateIgnoreGrids(class UClass* /*ABP_MasterGrid_C*/ Grid);
	void IsOnGrid(bool* OnGrid);
	void SelectClosestFoundationGrid(class UPrimitiveComponent** ClosestGrid, bool* ChecksDone);
	void SelectClosestFloorGrid(class UPrimitiveComponent** ClosestGrid, bool* SupportingGridFound, bool* NonSuppored, bool* Hide);
	void SetCollision(bool Placed, class AActor* Actor);
	class AActor* CollisionCheck(class AActor* Actor, bool* CollisionBlocked, bool* HidePreview);
	void ItemCostCheck(bool RemoveItems, bool* ItemsFound);
	void SelectBuildPart(const struct FName& ItemRowName);
	void PickupActor(class UObject* Actor);
	void RepairActor(class AActor* Actor);
	void UpgradeActor(class AActor* Actor);
	void ExitBuildingMode();
	void SelectBuildMode(TEnumAsByte<E_BuildingMode> BuildMode);
	void DisablePlacement(bool Hide);
	void ApplyRotation(const struct FRotator& Rotation, struct FRotator* NewRotation);
	void ApplyHeightAdjust(const struct FVector& StartLocation, struct FVector* EndLocation);
	void ChangeHeightAdjustment(bool Increase);
	void ResetFloorCheck();
	bool HitGridComponent(class UPrimitiveComponent* Grid, class UBP_GridComponent_C** GridComponent);
	void RotateBuildPart();
	void PlaceBuildPart(const struct FName& RowName, const struct FVector& Location, const struct FRotator& Rotation, bool OnGrid, class USceneComponent* AttachComponent, const struct FText& Name);
	void DestroyPlaced();
	void EnablePlacement(class UBP_GridComponent_C* GridComponent);
	void PreviewLocation();
	void GroundCheck(class AActor* Actor, bool* GroundFound);
	void TraceMath(TEnumAsByte<E_CameraType> CameraType, struct FVector* Start, struct FVector* End);
	void HitActor(class AActor** HitActor);
	void HitComponent(class UPrimitiveComponent** HitComponent);
	void HitLocation(struct FVector* Location);
	void BuildTrace();
	void ClientRemoveMenu();
	void ClientCreateMenu(class UClass* /*UBP_MasterRadialMenu_C*/ Widget);
	void ClientPlaceSoundEffect();
	void ClientPlaceNamedBuildPart(const struct FText& Name);
	void ServerPlaceBuildPart(const struct FName& BuildPartRowName, const struct FVector& Location, const struct FRotator& Rotation, bool OnGrid, class USceneComponent* AttachComponent, const struct FText& Name);
	void ClientTraces();
	void ClientExitBuildMode();
	void ClientPrimaryAction();
	void ClientSelectBuildPart(const struct FName& ItemRowName);
	void ClientSelectBuildMode(TEnumAsByte<E_BuildingMode> BuildMode);
	void ServerOpenBuildingMenu(class AActor* Actor);
	void ServerUpgradeActor(class AActor* Actor);
	void ServerRepairActor(class AActor* Actor);
	void ServerPickupActor(class AActor* PickupActor);
	void ServerDeleteActor(class AActor* DeleteActor, bool ForceDestroy);
	void SpawnGridManager();
	void ServerInitialize();
	void ClientInitialize();
	void ServerUpdateSelectedActor(class AActor* Actor);
	void ServerSetBuildPart(const struct FName& BuildPartRowName);
	void ExecuteUbergraph_BP_PlayerBuildingComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
