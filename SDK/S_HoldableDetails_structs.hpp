#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_HoldableDetails.S_HoldableDetails
// 0x0149
struct FS_HoldableDetails
{
	TSet<TEnumAsByte<E_WeaponSlots>>                   HoldableSlots_9_E504501F4C338FAADA1E59AFA1C6103B;         // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	class UClass* /*ABP_MasterHoldable_C*/             HoldableClass_17_7312536547A482EB0E2E0A966F90BF83;        // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<E_WeaponSlots>, struct FName>     HoldableSlotSockets_16_496EDE764CD0B41C63F43CA622933FAA;  // 0x0058(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*>    EquipMontage_30_88C2C4244D6EB03B5907D489ADEF96ED;         // 0x00A8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*>    UnequipMontage_33_1405C3A34BA962D01BC05787BDC6CC75;       // 0x00F8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               OnlyHoldableWhenEquipped_23_20943BA046E9AADA58540798889AD6FE;// 0x0148(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
