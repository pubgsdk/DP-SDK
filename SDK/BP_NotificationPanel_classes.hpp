#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_NotificationPanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_NotificationPanel.BP_NotificationPanel_C
// 0x0008 (0x0268 - 0x0260)
class UBP_NotificationPanel_C : public UUserWidget
{
public:
	class UVerticalBox*                                VerticalGrid;                                             // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_NotificationPanel.BP_NotificationPanel_C"));
		return ptr;
	}


	void CreateNotification(const struct FS_NotificationDetails& NotificationDetails, bool EnableSounds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
