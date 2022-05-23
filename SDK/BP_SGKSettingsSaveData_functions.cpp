// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKSettingsSaveData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.UpdateGameSettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_GameSettings         Game                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKSettingsSaveData_C::UpdateGameSettings(const struct FS_GameSettings& Game)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.UpdateGameSettings"));

	struct
	{
		struct FS_GameSettings         Game;
	} params = {};

	params.Game = Game;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.SaveSettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKSettingsSaveData_C::SaveSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.SaveSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.UpdateAudioSettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_AudioSave            Audio                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKSettingsSaveData_C::UpdateAudioSettings(const struct FS_AudioSave& Audio)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.UpdateAudioSettings"));

	struct
	{
		struct FS_AudioSave            Audio;
	} params = {};

	params.Audio = Audio;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.ExecuteUbergraph_BP_SGKSettingsSaveData
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKSettingsSaveData_C::ExecuteUbergraph_BP_SGKSettingsSaveData(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.ExecuteUbergraph_BP_SGKSettingsSaveData"));

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


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.SettingsChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C* SGKSettings                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKSettingsSaveData_C::SettingsChanged__DelegateSignature(class UBP_SGKSettingsSaveData_C* SGKSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.SettingsChanged__DelegateSignature"));

	struct
	{
		class UBP_SGKSettingsSaveData_C* SGKSettings;
	} params = {};

	params.SGKSettings = SGKSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
