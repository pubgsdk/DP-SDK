#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FlashlightRedDevil_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FlashlightRedDevil.BP_FlashlightRedDevil_C
// 0x0020 (0x0458 - 0x0438)
class ABP_FlashlightRedDevil_C : public ABP_MasterHoldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UPointLightComponent*                        PointLight;                                               // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight;                                                // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Flashlight;                                               // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FlashlightRedDevil.BP_FlashlightRedDevil_C"));
		return ptr;
	}


	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void SGK_ServerPrimaryAction(bool KeyDown);
	void ExecuteUbergraph_BP_FlashlightRedDevil(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
