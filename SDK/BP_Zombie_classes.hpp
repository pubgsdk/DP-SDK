#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Zombie_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Zombie.BP_Zombie_C
// 0x0047 (0x0624 - 0x05DD)
class ABP_Zombie_C : public ABP_MasterAICharacter_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USkeletalMesh*                               Skin;                                                     // 0x05E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                       SkinChoices;                                              // 0x05F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               Randomize;                                                // 0x0600(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0601(0x0007) MISSED OFFSET
	TArray<class UMaterialInstance*>                   SkinVariations;                                           // 0x0608(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UMaterialInstance*                           SkinVariation;                                            // 0x0618(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DropChance;                                               // 0x0620(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Zombie.BP_Zombie_C"));
		return ptr;
	}


	void OnRep_SkinVariation();
	void OnRep_Skin();
	void ReceiveBeginPlay();
	void RandomZombieSkin();
	void ExecuteUbergraph_BP_Zombie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
