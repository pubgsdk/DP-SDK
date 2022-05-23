#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGameInstanceInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKGameInstanceInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C"));
		return ptr;
	}


	void SGK_SetVolume(TEnumAsByte<E_SoundVolumes> Sound, float Volume);
	void SGK_Options_Save(class UBP_SGKSettingsSaveData_C** Settings);
	void SGK_SaveSettings();
	void SGK_GetMenuOpenedLevel(bool* MenuOpenedLevel);
	void SGK_SetMenuOpenedLevel(bool MenuOpenedLevel);
	void SGK_GetLoadSaveGame(bool* LoadSaveGame);
	void SGK_SetLoadSaveGame(bool LoadSaveGame);
	void SGK_SetSaveGameSlotName(const struct FString& SaveGameSlotName);
	void SGK_GetSaveGameSlotName(struct FString* SaveGameSlotName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
