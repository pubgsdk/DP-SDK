#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SaveSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SaveSystem.BP_SaveSystem_C
// 0x01A5 (0x03C5 - 0x0220)
class ABP_SaveSystem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBillboardComponent*                         Billboard;                                                // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               LoadSaveOnBeginPlay;                                      // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FString                                     SlotName;                                                 // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash)
	bool                                               Show_Debug_Text;                                          // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              Debug_Text_Time;                                          // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    SaveData;                                                 // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    LoadData;                                                 // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               FirstLoadDone;                                            // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	struct FTimerHandle                                AutoSaveTimer;                                            // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SGKSaveGame_C*                           SaveGameData;                                             // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SGKSaveGame_C*                           LoadedSaveGameData;                                       // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AutoSave;                                                 // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              AutoSaveTime;                                             // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Loading;                                                  // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ChangeAutoSaveSlotOnSave;                                 // 0x0299(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x6];                                       // 0x029A(0x0006) MISSED OFFSET
	struct FString                                     SaveLevel;                                                // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               PlayerLoadSave;                                           // 0x02B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	TArray<class AActor*>                              SaveActors;                                               // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class UActorComponent*>                     SaveComponents;                                           // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FString                                     SavingSlot;                                               // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FS_LevelSaveData                            CurrentLevelSave;                                         // 0x02E8(0x00B0) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               InSave;                                                   // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<class AActor*>                              TempActors;                                               // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class UActorComponent*>                     TempComponents;                                           // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	int                                                PerDelay;                                                 // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ManualSave;                                               // 0x03C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SaveSystem.BP_SaveSystem_C"));
		return ptr;
	}


	class UBP_SGKSaveGameMetaData_C* GetMetaDataObject();
	class UBP_SGKSaveGame_C* GetSaveDataObject(const struct FString& SaveSlotName, bool* bAlreadyExisting, struct FString* SaveSlot);
	void SaveGame(const struct FString& SaveSlotName);
	void ItemSpawnSaveData(class ABP_MasterItemSpawner_C* ItemSpawner, class UBP_SGKSaveGame_C* SaveGame, bool* SaveFound, struct FS_MasterItemSave* ItemSave);
	void DeleteMetaData(const struct FString& SlotName);
	void SaveMetaData(const struct FString& SaveSlotName);
	void DebugText(const struct FString& DebugText, const struct FLinearColor& TextColour);
	void LoadSave(bool InGameLoad, const struct FString& SaveSlotName, const struct FString& LevelName);
	bool FindPlayerLocation(const struct FText& PlayerName, struct FTransform* Transform);
	void LoadBuildParts();
	void LoadSavedItems();
	void Completed_2E0E08C140CD9EA9A688ED8EE2D8D76F(class USaveGame* SaveGame, bool bSuccess);
	void Completed_8B8C45894D108124671519ADDFDB1EB5(class USaveGame* SaveGame, bool bSuccess);
	void Completed_E4E68CAB46C23F15046FDB8C35460535(class USaveGame* SaveGame, bool bSuccess);
	void CallSaveEvents(const struct FString& SaveSlot);
	void ServerSaveGame(const struct FString& SaveSlotName);
	void StartAutoSaveTimer();
	void AutoSaveGame();
	void SaveDataToSlot(const struct FString& SlotName, class USaveGame* SaveGameObject);
	void UpdatePlayerSave(const struct FString& SaveName, class UBP_PlayerInventory_C* PlayerInventory);
	void DeleteSettingsSave();
	void DeletePlayerSave(const struct FText& PlayerSave, const struct FString& SlotName);
	void DeleteSave();
	void ReceiveBeginPlay();
	void InitializeSaveSystem();
	void ExecuteUbergraph_BP_SaveSystem(int EntryPoint);
	void LoadData__DelegateSignature(class UBP_SGKSaveGame_C* SaveGame);
	void SaveData__DelegateSignature(class UBP_SGKSaveGame_C* SaveGame);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
