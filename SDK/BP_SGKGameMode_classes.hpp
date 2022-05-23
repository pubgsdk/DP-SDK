#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKGameMode.BP_SGKGameMode_C
// 0x005C (0x031C - 0x02C0)
class ABP_SGKGameMode_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SGKSaveGame_C*                           UMISaveGame;                                              // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_SaveSystem_C*                            SaveSystem;                                               // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterGrid_C*                            FoundationGrid;                                           // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_ResourceManager_C*                       ResourceManager;                                          // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_MasterGrid_C*                            WallGrid;                                                 // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_GlobalInventoryManager_C*                GlobalInventoryManager;                                   // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    CreateInventory;                                          // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class ABP_AIManager_C*                             AI_Manager;                                               // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RaStartTime;                                              // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKGameMode.BP_SGKGameMode_C"));
		return ptr;
	}


	void Return_AI_Manager_Settings(struct FS_AIOptimization* AI_Settings);
	void Return_AI_Manager(class ABP_AIManager_C** AI_Manager);
	void SGK_GetResourceManager(class ABP_ResourceManager_C** ResourceManager);
	void SGK_GetSaveGame(class ABP_SaveSystem_C** SaveGame);
	void SGK_GetGlobalInventory(class ABP_GlobalInventoryManager_C** GlobalInventory);
	void HostChecking();
	void Garbo();
	void UpdatePlayerCount();
	class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
	void OnFailure_61AEF0854FDF14E393E7BEA7596A6A67();
	void OnSuccess_61AEF0854FDF14E393E7BEA7596A6A67();
	void OnFailure_3D80F6714E696C274E08E99924A3B3EC();
	void OnSuccess_3D80F6714E696C274E08E99924A3B3EC();
	void SGK_SaveGame();
	void K2_PostLogin(class APlayerController* NewPlayer);
	void AdvertiseCoop();
	void StartDedi();
	void ReceiveBeginPlay();
	void SGK_SetSaveSystem(class ABP_SaveSystem_C* SaveSystem);
	void ExecuteUbergraph_BP_SGKGameMode(int EntryPoint);
	void CreateInventory__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
