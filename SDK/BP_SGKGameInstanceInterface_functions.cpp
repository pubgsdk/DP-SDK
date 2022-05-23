// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGameInstanceInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetVolume
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SoundVolumes>    Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Volume                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstanceInterface_C::SGK_SetVolume(TEnumAsByte<E_SoundVolumes> Sound, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetVolume"));

	struct
	{
		TEnumAsByte<E_SoundVolumes>    Sound;
		float                          Volume;
	} params = {};

	params.Sound = Sound;
	params.Volume = Volume;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK Options Save
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C* Settings                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstanceInterface_C::SGK_Options_Save(class UBP_SGKSettingsSaveData_C** Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK Options Save"));

	struct
	{
		class UBP_SGKSettingsSaveData_C* Settings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Settings != nullptr)
		*Settings = params.Settings;
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SaveSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstanceInterface_C::SGK_SaveSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SaveSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetMenuOpenedLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MenuOpenedLevel                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstanceInterface_C::SGK_GetMenuOpenedLevel(bool* MenuOpenedLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetMenuOpenedLevel"));

	struct
	{
		bool                           MenuOpenedLevel;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MenuOpenedLevel != nullptr)
		*MenuOpenedLevel = params.MenuOpenedLevel;
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetMenuOpenedLevel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MenuOpenedLevel                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstanceInterface_C::SGK_SetMenuOpenedLevel(bool MenuOpenedLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetMenuOpenedLevel"));

	struct
	{
		bool                           MenuOpenedLevel;
	} params = {};

	params.MenuOpenedLevel = MenuOpenedLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetLoadSaveGame
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           LoadSaveGame                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstanceInterface_C::SGK_GetLoadSaveGame(bool* LoadSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetLoadSaveGame"));

	struct
	{
		bool                           LoadSaveGame;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LoadSaveGame != nullptr)
		*LoadSaveGame = params.LoadSaveGame;
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetLoadSaveGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           LoadSaveGame                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstanceInterface_C::SGK_SetLoadSaveGame(bool LoadSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetLoadSaveGame"));

	struct
	{
		bool                           LoadSaveGame;
	} params = {};

	params.LoadSaveGame = LoadSaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetSaveGameSlotName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveGameSlotName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstanceInterface_C::SGK_SetSaveGameSlotName(const struct FString& SaveGameSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetSaveGameSlotName"));

	struct
	{
		struct FString                 SaveGameSlotName;
	} params = {};

	params.SaveGameSlotName = SaveGameSlotName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetSaveGameSlotName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveGameSlotName               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstanceInterface_C::SGK_GetSaveGameSlotName(struct FString* SaveGameSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetSaveGameSlotName"));

	struct
	{
		struct FString                 SaveGameSlotName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SaveGameSlotName != nullptr)
		*SaveGameSlotName = params.SaveGameSlotName;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
