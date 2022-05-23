#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterLock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterLock.BP_MasterLock_C
// 0x0051 (0x0329 - 0x02D8)
class ABP_MasterLock_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FText                                       Code;                                                     // 0x02E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               Locked;                                                   // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	TArray<struct FText>                               VerifiedPlayers;                                          // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	class USoundBase*                                  UnlockSound;                                              // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  LockSound;                                                // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  ErrorSound;                                               // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RemoveVerifiedPlayersOnCodeChange;                        // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterLock.BP_MasterLock_C"));
		return ptr;
	}


	void SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData);
	bool SGK_AddMultipleOwners(TArray<struct FText>* Owners);
	bool SGK_AddOwner(const struct FText& PlayerName);
	bool SGK_UpdateCode(const struct FText& Code);
	void SGK_CodeCheck(const struct FText& Code, bool* CodeAccepted);
	void OnRep_Locked();
	int SaveLockData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, struct FS_LevelSaveData* NewLevelSaveData);
	void LoadLockData(class UBP_SGKSaveGame_C* SaveGame, int Index, struct FVector* OwnerLocation);
	bool SGK_VerifyPlayer(const struct FText& Text);
	void IsVerifiedPlayer(const struct FText& PlayerName, bool* IsVerified);
	void CanOpen(const struct FText& Name, bool* AllowOpen);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index);
	void LockEffects(bool Locked);
	void SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame);
	void ExecuteUbergraph_BP_MasterLock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
