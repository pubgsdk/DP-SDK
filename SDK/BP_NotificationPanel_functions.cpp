// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_NotificationPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NotificationPanel.BP_NotificationPanel_C.CreateNotification
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FS_NotificationDetails  NotificationDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           EnableSounds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_NotificationPanel_C::CreateNotification(const struct FS_NotificationDetails& NotificationDetails, bool EnableSounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_NotificationPanel.BP_NotificationPanel_C.CreateNotification"));

	struct
	{
		struct FS_NotificationDetails  NotificationDetails;
		bool                           EnableSounds;
	} params = {};

	params.NotificationDetails = NotificationDetails;
	params.EnableSounds = EnableSounds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
