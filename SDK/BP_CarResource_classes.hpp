#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CarResource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CarResource.BP_CarResource_C
// 0x0026 (0x02D8 - 0x02B2)
class ABP_CarResource_C : public ABP_MasterResource_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x02B2(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UMaterialInstance*                           Color;                                                    // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   ColorChoices;                                             // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CarResource.BP_CarResource_C"));
		return ptr;
	}


	void OnRep_Color();
	void ResourceSetup();
	void LoadResourceSaveGame(class UBP_SGKSaveGame_C* SaveGame);
	void RespawnResource();
	void HideResource();
	void ShowResource();
	void ChangeMaterial();
	void ExecuteUbergraph_BP_CarResource(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
