#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterGrid.BP_MasterGrid_C
// 0x0048 (0x0268 - 0x0220)
class ABP_MasterGrid_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0220(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_BuildType>                           GridType;                                                 // 0x0228(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	struct FString                                     BuildGridChannel;                                         // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	struct FString                                     BuildGridObjectType;                                      // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	bool                                               ShowGrids;                                                // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	TArray<class AActor*>                              BuildParts;                                               // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterGrid.BP_MasterGrid_C"));
		return ptr;
	}


	int AddBuildPartReference(class UActorComponent* GridComponent);
	void CreateGrid(class UBP_GridComponent_C* GridComponent, class UBoxComponent** Grid);
	void DeleteGrid(class UBoxComponent* Grid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
