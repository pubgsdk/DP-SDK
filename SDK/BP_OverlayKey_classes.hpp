#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_OverlayKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_OverlayKey.BP_OverlayKey_C
// 0x00A8 (0x0308 - 0x0260)
class UBP_OverlayKey_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTextBlock*                                  ActionTextWidget;                                         // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  DescriptionTextWidget;                                    // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      KeyIcon;                                                  // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FName                                       MappingName;                                              // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       DescriptionText;                                          // 0x0288(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ActionText;                                               // 0x02A0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TMap<struct FKey, class UTexture2D*>               KeyIcons;                                                 // 0x02B8(0x0050) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_OverlayKey.BP_OverlayKey_C"));
		return ptr;
	}


	void GetKeyIcon(class UTexture2D** Icon);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_OverlayKey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
