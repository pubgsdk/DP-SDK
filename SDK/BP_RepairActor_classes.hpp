#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RepairActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_RepairActor.BP_RepairActor_C
// 0x0058 (0x02B8 - 0x0260)
class UBP_RepairActor_C : public UUserWidget
{
public:
	class UTextBlock*                                  NameText;                                                 // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 EnabledColor;                                             // 0x0268(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 DisabledColor;                                            // 0x0290(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_RepairActor.BP_RepairActor_C"));
		return ptr;
	}


	void Initialize(const struct FText& Actor_Name, bool Enabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
