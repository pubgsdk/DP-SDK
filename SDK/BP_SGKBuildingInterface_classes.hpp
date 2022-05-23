#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKBuildingInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKBuildingInterface.BP_SGKBuildingInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKBuildingInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKBuildingInterface.BP_SGKBuildingInterface_C"));
		return ptr;
	}


	void SGK_BPBuildCollision(TArray<class UPrimitiveComponent*>* Collision);
	void SGK_BPGrids(TArray<class UBP_GridComponent_C*>* Grids);
	void SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index);
	bool SGK_Preview(bool Preview);
	bool SGK_AddMultipleOwners(TArray<struct FText>* Owners);
	bool SGK_ClearOwners();
	bool SGK_AddOwner(const struct FText& PlayerName);
	void SGK_Upgrade();
	void SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame);
	void SGK_IsOwner(const struct FText& PlayerName, bool* IsOwner);
	void SGK_BuildPart(struct FDataTableRowHandle* BuildPart);
	void SGK_BuildingOptions(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_IsPlaced(bool* IsPlaced);
	void SGK_SupportCheck(bool DestroyOnFail, bool DirectSupportOnly, bool* Supported, bool* IndirectSupportOnly);
	void SGK_IsPendingDestroy(bool* IsPendingDestroy);
	void SGK_BuildPartType(TEnumAsByte<E_BuildType>* Type);
	void SGK_DeleteBuildPart(class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent, bool ForceDestroy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
