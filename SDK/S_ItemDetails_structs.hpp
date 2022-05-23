#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "S_InventoryAction_classes.hpp"
#include "S_WorldAction_classes.hpp"
#include "E_InventoryActions_classes.hpp"
#include "S_ContainerDetails_classes.hpp"
#include "S_DurabilityDetails_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "S_UIDetails_classes.hpp"
#include "S_EquipmentDetails_classes.hpp"
#include "S_HoldableDetails_classes.hpp"
#include "S_ConsumableDetails_classes.hpp"
#include "S_AttachmentDetails_classes.hpp"
#include "S_AmmoDetails_classes.hpp"
#include "S_RecipeDetails_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_ItemDetails.S_ItemDetails
// 0x0840
struct FS_ItemDetails
{
	struct FText                                       Name_26_D03100674B3BD75EEF9FD9A1E4F9CC34;                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ShortName_53_3FDED9954C8DBFC313F77D9D147163D6;            // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description_27_39047AE74BB18D53DE9D998ABDC7090D;          // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Weight_7_794436A247BB7BC85C7BF3BC8B1D13BA;                // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Width_12_AF2CA71343924568731BA285FA9ABEA0;                // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Height_10_E54E86E64E73A3ACD86E358532FC6061;               // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowStacking_48_02CFD0D74B05709E8E432E824709C714;        // 0x0054(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowQuickBind_65_ABE4ABEB4EC0B8EC89B4A9A18E208874;       // 0x0055(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowDroppingItem_67_10BDCFBC4E21AD7EE24CE79692B3342C;    // 0x0056(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	int                                                MaxStack_18_C57243124FFDE0AB28797AA6F2C1E5F5;             // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FS_InventoryAction>                  InventoryActions_112_685EE89C49954FBB235025AD602B3208;    // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FS_WorldAction>                      WorldActions_116_B4CAF39A421B065A46DEACBC5DBD40EE;        // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_InventoryActions>                    QuickUseAction_74_8B10470848EA26CF6644E1BB82F4B516;       // 0x0080(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh_30_DB8565E8487831578F6D18823B88B876;           // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMesh*                               SkeletalMesh_98_983FF1EB4798AEEFCA843F981AEC9BF6;         // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*AActor*/                           WorldClass_45_6718387F4F5D57BE9909639A237E57A3;           // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                PickupAnimation_119_0B5E9F0B4C814F6522050FB1A71E95A6;     // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                IconBackroundColor_50_40C7AE2A48A835A274DB4CB563DFA34C;   // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_UIDetails                                UIDetails_63_DCA69CE34B9042F4D9EA6C862C26A705;            // 0x00B8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_EquipmentDetails                         EquipmentDetails_56_1E20C13B455D79552E44429F0E68CA79;     // 0x00F8(0x0170) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_ContainerDetails                         ContainerDetails_59_DA2434FE4D9CB983040BE3B6CDDD8852;     // 0x0268(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FS_HoldableDetails                          HoldableDetails_71_199B05A6441AA3B385D577B58EE4A1DB;      // 0x02D8(0x0150) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_ConsumableDetails                        ConsumableDetails_77_3E970B0D497E2A71D3B074A210E6F3F1;    // 0x0428(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FS_AttachmentDetails                        AttachmentDetails_80_218697824814D06EE30E6BA8584BAA18;    // 0x0470(0x02A0) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_AmmoDetails                              AmmoDetails_83_41493C4144BBB33F238D1CA11921F0E9;          // 0x0710(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_DurabilityDetails                        DurabilityDetails_90_B75E4B1C4EDEECACC047149CE7D922F6;    // 0x0730(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FS_RecipeDetails                            RecipeDetails_106_D99355E845F52FD673BFE9A15047FDFF;       // 0x0788(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         BuildPartDetails_111_17D3336D4A6E6601AF1D7495EDA5B60B;    // 0x07A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	float                                              FuelTime_87_FA2864E1445BEDCA473E40A9E167C9B5;             // 0x07B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0xC];                                       // 0x07B4(0x000C) MISSED OFFSET
	struct FTransform                                  ItemOffsets_94_00D968744A67B380EF0ADAB62D803A4C;          // 0x07C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor)
	TMap<TEnumAsByte<E_Sounds>, class USoundBase*>     ItemSounds_103_4BD8E03A4D601B11AF665B946B56EEFA;          // 0x07F0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
