#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VendorTooltipEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_VendorTooltipEntry.BP_VendorTooltipEntry_C
// 0x0010 (0x0270 - 0x0260)
class UBP_VendorTooltipEntry_C : public UUserWidget
{
public:
	class UTextBlock*                                  VenderEntryAmount;                                        // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  VenderEntryName;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_VendorTooltipEntry.BP_VendorTooltipEntry_C"));
		return ptr;
	}


	void InitializeEntry(const struct FText& ItemName, int Amount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
