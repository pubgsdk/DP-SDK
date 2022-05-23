#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKController.BP_SGKController_C
// 0x0060 (0x05D0 - 0x0570)
class ABP_SGKController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_PlayerBuildingComponent_C*               BP_PlayerBuildingComponent;                               // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                       BP_PlayerInventory;                                       // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_InventoryHUD_C*                          PlayerHUD;                                                // 0x0588(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_InGameMenu_C*                            EscMenu;                                                  // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACharacter*                                  MasterCharacter;                                          // 0x0598(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       Name;                                                     // 0x05A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       DisplayName;                                              // 0x05B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKController.BP_SGKController_C"));
		return ptr;
	}


	void SGK_AllowStartingItems(bool* AllowStartingItems);
	void SGK_SelfItem(struct FS_InvItem* SelfItem);
	void ToggleInGameMenu();
	void ReloadControllerCharacter(class UBP_SGKSaveGame_C* Save);
	void AddEquipmentComponent();
	void InpActEvt_Push_To_Talk_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Push_To_Talk_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnFailure_0D0C87DB4CF4558A85D1E1A098E99BAD();
	void OnSuccess_0D0C87DB4CF4558A85D1E1A098E99BAD();
	void OnFailure_62E4B8A142D952C87756DABCF4FCD5EA(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_62E4B8A142D952C87756DABCF4FCD5EA(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void SGK_ItemMovedInInventory();
	void SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot);
	void SGK_ToggleComponent();
	void SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot);
	void SGK_ItemSound(const struct FName& ItemId, TEnumAsByte<E_Sounds> SoundType);
	void SGK_UpdateAllAttachments();
	void SGK_DestroyWeaponAttachments();
	void SGK_RemoveAttachment(TEnumAsByte<E_AttachmentType> Attachment);
	void SGK_ShowAttachments();
	void SGK_LoadWeaponAttachments(bool Visible);
	void ReceiveDestroyed();
	void SGK_UpdateCharacterYaw(class APawn* Pawn);
	void ServerUpdateCharacterYaw(class APawn* Pawn);
	void ClientInitialize();
	void ReceiveBeginPlay();
	void VOIPing(bool Talking);
	void ClientPossess();
	void ClientEnableInput();
	void ReceivePossess(class APawn* PossessedPawn);
	void ClientRespawn();
	void ServerRespawn();
	void ClientInGameLoad();
	void SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem);
	void UnlockAchievement(const struct FName& Achievement);
	void ExecuteUbergraph_BP_SGKController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
