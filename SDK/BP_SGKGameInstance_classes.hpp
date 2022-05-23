#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGameInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKGameInstance.BP_SGKGameInstance_C
// 0x0054 (0x027C - 0x0228)
class UBP_SGKGameInstance_C : public UAdvancedFriendsGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FString                                     SaveGameSlotName;                                         // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               MenuOpenedLevel;                                          // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UBP_SGKSettingsSaveData_C*                   OptionsSave;                                              // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LoadSaveGame;                                             // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    GameSettingsUpdated;                                      // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FSessionPropertyKeyPair>             SessionSettings;                                          // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                PlayerSlots;                                              // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKGameInstance.BP_SGKGameInstance_C"));
		return ptr;
	}


	void SGK_Options_Save(class UBP_SGKSettingsSaveData_C** Settings);
	void SGK_GetMenuOpenedLevel(bool* MenuOpenedLevel);
	void SGK_GetSaveGameSlotName(struct FString* SaveGameSlotName);
	void SGK_GetLoadSaveGame(bool* LoadSaveGame);
	void SetGameSettings(const struct FS_GameSettings& GameSettings);
	void Save_Settings();
	void LoadSettingsSave();
	void SetVolume(TEnumAsByte<E_SoundVolumes> Sound, float Volume);
	void LoadSoundVolumes();
	void OnFailure_088999994A8215FE4073C385D6D833A9();
	void OnSuccess_088999994A8215FE4073C385D6D833A9();
	void OnFailure_7AE45A324179F8915EC34F815ACD9D51();
	void OnSuccess_7AE45A324179F8915EC34F815ACD9D51();
	void ReceiveInit();
	void SGK_SetMenuOpenedLevel(bool MenuOpenedLevel);
	void SGK_SetLoadSaveGame(bool LoadSaveGame);
	void SGK_SetSaveGameSlotName(const struct FString& SaveGameSlotName);
	void SGK_SaveSettings();
	void SGK_SetVolume(TEnumAsByte<E_SoundVolumes> Sound, float Volume);
	void OnSessionInviteAccepted(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
	void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);
	void DiscordActivitySet(const struct FDiscordActivityInfo& Activity);
	void DiscordTicker();
	void ReceiveShutdown();
	void ExecuteUbergraph_BP_SGKGameInstance(int EntryPoint);
	void GameSettingsUpdated__DelegateSignature(class UBP_SGKSettingsSaveData_C* SettingsSave);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
