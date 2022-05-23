#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GroundCheckComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GroundCheckComponent.BP_GroundCheckComponent_C
// 0x0030 (0x0230 - 0x0200)
class UBP_GroundCheckComponent_C : public USceneComponent
{
public:
	float                                              GroundTraceDistance;                                      // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               TraceDown;                                                // 0x0204(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<EDrawDebugTrace>                       TraceVisibility;                                          // 0x0205(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETraceTypeQuery>                       GroundTraceChannel;                                       // 0x0206(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0207(0x0001) MISSED OFFSET
	TArray<class UClass* /*AActor*/>                   IgnoreActorClasses;                                       // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_InventoryRestrictionType>            UseSurfaceRestrictions;                                   // 0x0218(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EPhysicalSurface>>              RestrictedSurfaces;                                       // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GroundCheckComponent.BP_GroundCheckComponent_C"));
		return ptr;
	}


	bool SurfaceRestrictionsCheck(class UPhysicalMaterial* Surface);
	bool GroundTrace(class AActor* Actor, struct FHitResult* OutHit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
