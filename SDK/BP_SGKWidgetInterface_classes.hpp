#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKWidgetInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKWidgetInterface.BP_SGKWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKWidgetInterface.BP_SGKWidgetInterface_C"));
		return ptr;
	}


	bool SGK_MenuReference(class UWidget* Menu);
	void SGK_ConnectingScreen(class UBP_AttemptingToConnect_C** ServerConnecting);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
