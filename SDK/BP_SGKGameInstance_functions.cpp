// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK Options Save
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C* Settings                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_Options_Save(class UBP_SGKSettingsSaveData_C** Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK Options Save"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetMenuOpenedLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MenuOpenedLevel                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstance_C::SGK_GetMenuOpenedLevel(bool* MenuOpenedLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetMenuOpenedLevel"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetSaveGameSlotName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveGameSlotName               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_GetSaveGameSlotName(struct FString* SaveGameSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetSaveGameSlotName"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetLoadSaveGame
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           LoadSaveGame                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstance_C::SGK_GetLoadSaveGame(bool* LoadSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetLoadSaveGame"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetGameSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_GameSettings         GameSettings                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SetGameSettings(const struct FS_GameSettings& GameSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetGameSettings"));

	struct
	{
		struct FS_GameSettings         GameSettings;
	} params = {};

	params.GameSettings = GameSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.Save Settings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::Save_Settings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.Save Settings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadSettingsSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::LoadSettingsSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadSettingsSave"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetVolume
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SoundVolumes>    Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Volume                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SetVolume(TEnumAsByte<E_SoundVolumes> Sound, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetVolume"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadSoundVolumes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::LoadSoundVolumes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadSoundVolumes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnFailure_088999994A8215FE4073C385D6D833A9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::OnFailure_088999994A8215FE4073C385D6D833A9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnFailure_088999994A8215FE4073C385D6D833A9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSuccess_088999994A8215FE4073C385D6D833A9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::OnSuccess_088999994A8215FE4073C385D6D833A9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSuccess_088999994A8215FE4073C385D6D833A9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnFailure_7AE45A324179F8915EC34F815ACD9D51
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::OnFailure_7AE45A324179F8915EC34F815ACD9D51()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnFailure_7AE45A324179F8915EC34F815ACD9D51"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSuccess_7AE45A324179F8915EC34F815ACD9D51
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::OnSuccess_7AE45A324179F8915EC34F815ACD9D51()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSuccess_7AE45A324179F8915EC34F815ACD9D51"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ReceiveInit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::ReceiveInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.ReceiveInit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetMenuOpenedLevel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MenuOpenedLevel                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstance_C::SGK_SetMenuOpenedLevel(bool MenuOpenedLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetMenuOpenedLevel"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetLoadSaveGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           LoadSaveGame                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstance_C::SGK_SetLoadSaveGame(bool LoadSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetLoadSaveGame"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetSaveGameSlotName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SaveGameSlotName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_SetSaveGameSlotName(const struct FString& SaveGameSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetSaveGameSlotName"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SaveSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::SGK_SaveSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SaveSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetVolume
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SoundVolumes>    Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Volume                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_SetVolume(TEnumAsByte<E_SoundVolumes> Sound, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetVolume"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSessionInviteAccepted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// int                            LocalPlayerNum                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FBPUniqueNetId          PersonInvited                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FBlueprintSessionResult SessionToJoin                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_SGKGameInstance_C::OnSessionInviteAccepted(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSessionInviteAccepted"));

	struct
	{
		int                            LocalPlayerNum;
		struct FBPUniqueNetId          PersonInvited;
		struct FBlueprintSessionResult SessionToJoin;
	} params = {};

	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInvited = PersonInvited;
	params.SessionToJoin = SessionToJoin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.HandleNetworkError
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>   FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsServer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKGameInstance_C::HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.HandleNetworkError"));

	struct
	{
		TEnumAsByte<ENetworkFailure>   FailureType;
		bool                           bIsServer;
	} params = {};

	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.DiscordActivitySet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDiscordActivityInfo    Activity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_SGKGameInstance_C::DiscordActivitySet(const struct FDiscordActivityInfo& Activity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.DiscordActivitySet"));

	struct
	{
		struct FDiscordActivityInfo    Activity;
	} params = {};

	params.Activity = Activity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.DiscordTicker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::DiscordTicker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.DiscordTicker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ReceiveShutdown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_SGKGameInstance_C::ReceiveShutdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.ReceiveShutdown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ExecuteUbergraph_BP_SGKGameInstance
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstance_C::ExecuteUbergraph_BP_SGKGameInstance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.ExecuteUbergraph_BP_SGKGameInstance"));

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


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.GameSettingsUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C* SettingsSave                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKGameInstance_C::GameSettingsUpdated__DelegateSignature(class UBP_SGKSettingsSaveData_C* SettingsSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKGameInstance.BP_SGKGameInstance_C.GameSettingsUpdated__DelegateSignature"));

	struct
	{
		class UBP_SGKSettingsSaveData_C* SettingsSave;
	} params = {};

	params.SettingsSave = SettingsSave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
