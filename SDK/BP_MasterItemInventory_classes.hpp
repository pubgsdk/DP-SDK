#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterItemInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterItemInventory.BP_MasterItemInventory_C
// 0x0011 (0x0291 - 0x0280)
class UBP_MasterItemInventory_C : public UBP_MasterInventory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FName                                       SelfItem;                                                 // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               AllowStartingItems;                                       // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MasterItemInventory.BP_MasterItemInventory_C"));
		return ptr;
	}


	void SGK_AllowStartingItems(bool* AllowStartingItems);
	void SGK_SelfItem(struct FS_InvItem* SelfItem);
	void RetrieveItemContainerDetails();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterItemInventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
