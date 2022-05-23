#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "E_InventoryRestrictionType_classes.hpp"
#include "S_CraftingCost_classes.hpp"
#include "Engine_classes.hpp"
#include "E_ContainerType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_ContainerDetails.S_ContainerDetails
// 0x0070
struct FS_ContainerDetails
{
	bool                                               CanContainItems_9_25B233D543AED7B2D8CF249BD72C953A;       // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       ContainerName_12_EE9C9F0B4A29370B9E8EF09A188E8C15;        // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                ContainerInventoryCells_13_269D7DB442A1056CD715DEA438F850A2;// 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ContainerColumns_14_F97E5A5744D6545EC3C5FD967C512BF1;     // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseWeight_16_3F94FD134C121CE317A6D2A0C2938171;            // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              MaxWeight_20_5CDB778F4D6FE3E65C8DD1A7E8722133;            // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_InventoryRestrictionType>            ContainerRestrictionType_23_EC5805D64D1B1EF6093FA8B19DBF48C5;// 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FDataTableRowHandle>                 RestrictionItems_27_B3D5BDB6404ACC06A8D798BDB3047E0E;     // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_ContainerType>                       ContainerType_33_C2D0977F47C071D4354A4BB1817475AD;        // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowContainerWindow_39_9420D45D470E700EA550EF9030EE64B4; // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseItemCountLimit_38_585327964096457C6B3EF697DA170C6F;    // 0x004A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	int                                                ItemCountLimit_42_1BB0344A44E3DB354AC3DB9A4917C186;       // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         CustomGridLayout_68_16D7144B4546126174180297FA5ED745;     // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	TArray<struct FS_CraftingCost>                     StartingItems_65_659DE77E404552EC2048FBB7A2C12C0C;        // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
