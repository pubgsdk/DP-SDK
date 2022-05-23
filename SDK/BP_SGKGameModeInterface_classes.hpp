#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGameModeInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKGameModeInterface.BP_SGKGameModeInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKGameModeInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKGameModeInterface.BP_SGKGameModeInterface_C"));
		return ptr;
	}


	void SGK_GetResourceManager(class ABP_ResourceManager_C** ResourceManager);
	void SGK_GetSaveGame(class ABP_SaveSystem_C** SaveGame);
	void SGK_SetSaveSystem(class ABP_SaveSystem_C* SaveSystem);
	void SGK_SaveGame();
	void SGK_GetGlobalInventory(class ABP_GlobalInventoryManager_C** GlobalInventory);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
