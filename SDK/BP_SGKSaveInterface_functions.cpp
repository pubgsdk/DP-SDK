// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKSaveInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKSaveInterface.BP_SGKSaveInterface_C.SGKSave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       Save                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKSaveInterface_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKSaveInterface.BP_SGKSaveInterface_C.SGKSave"));

	struct
	{
		class UBP_SGKSaveGame_C*       Save;
	} params = {};

	params.Save = Save;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
