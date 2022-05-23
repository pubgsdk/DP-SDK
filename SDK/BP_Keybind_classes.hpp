#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Keybind_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_Keybind.BP_Keybind_C
// 0x002E (0x028E - 0x0260)
class UBP_Keybind_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTextBlock*                                  BindNameText;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInputKeySelector*                           KeySelector1;                                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInputKeySelector*                           KeySelector2;                                             // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsAxisBind;                                               // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	struct FName                                       BindName;                                                 // 0x0284(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               KeySelect1;                                               // 0x028C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               KeySelect2;                                               // 0x028D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_Keybind.BP_Keybind_C"));
		return ptr;
	}


	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void InitializeKeybind(const struct FName& BindName, bool IsAxis);
	void FindAxisBind(const struct FName& ActionBindName, int BindIndex, bool* BindFound, struct FInputAxisKeyMapping* ActionBind);
	void FindActionBind(const struct FName& ActionBindName, int BindIndex, bool* BindFound, struct FInputActionKeyMapping* ActionBind);
	void RebindAction(const struct FInputChord& Key, int RebindIndex);
	void RebindAxis(const struct FInputChord& Key, int RebindIndex);
	void BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature();
	void KeySelect1Scroll(bool Up);
	void KeySelect2Scroll(bool Up);
	void BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void ExecuteUbergraph_BP_Keybind(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
