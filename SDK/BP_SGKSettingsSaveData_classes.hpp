#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKSettingsSaveData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C
// 0x0030 (0x0058 - 0x0028)
class UBP_SGKSettingsSaveData_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FS_AudioSave                                AudioSettings;                                            // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_GameSettings                             GameSettings;                                             // 0x0040(0x0002) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FMulticastScriptDelegate                    SettingsChanged;                                          // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C"));
		return ptr;
	}


	void UpdateGameSettings(const struct FS_GameSettings& Game);
	void SaveSettings();
	void UpdateAudioSettings(const struct FS_AudioSave& Audio);
	void ExecuteUbergraph_BP_SGKSettingsSaveData(int EntryPoint);
	void SettingsChanged__DelegateSignature(class UBP_SGKSettingsSaveData_C* SGKSettings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
