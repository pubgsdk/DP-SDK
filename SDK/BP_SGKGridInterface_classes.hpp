#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGridInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKGridInterface.BP_SGKGridInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKGridInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKGridInterface.BP_SGKGridInterface_C"));
		return ptr;
	}


	void SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets);
	void SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory);
	void SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
