#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CraftingTooltipEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C
// 0x0010 (0x0270 - 0x0260)
class UBP_CraftingTooltipEntry_C : public UUserWidget
{
public:
	class UTextBlock*                                  CraftingEntryAmount;                                      // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  CraftingEntryName;                                        // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C"));
		return ptr;
	}


	void EntryCost(int Index, TArray<struct FS_CraftingCost>* Array, struct FText* Name, int* Amount);
	void InitializeEntry(const struct FS_CraftingRecipe& Recipe, int EntryIndex, bool IsItemCost, bool IsTools);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
