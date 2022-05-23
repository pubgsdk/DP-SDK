#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterDecoPart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterDecoPart.BP_MasterDecoPart_C
// 0x0000 (0x02D8 - 0x02D8)
class ABP_MasterDecoPart_C : public ABP_MasterBuildPart_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterDecoPart.BP_MasterDecoPart_C"));
		return ptr;
	}


	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, TEnumAsByte<E_WorldActions> Action);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_InteractName(struct FText* InteractName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
