// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MasterRadialMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.SetSegmentOver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_MasterSegment_C*     Segment                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Rotation_                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Rotation_02                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ExtraChecks                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          ExtraRotation_                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ExtraRotation_02               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterRadialMenu_C::SetSegmentOver(class UBP_MasterSegment_C* Segment, float Rotation_, float Rotation_02, bool ExtraChecks, float ExtraRotation_, float ExtraRotation_02)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.SetSegmentOver"));

	struct
	{
		class UBP_MasterSegment_C*     Segment;
		float                          Rotation_;
		float                          Rotation_02;
		bool                           ExtraChecks;
		float                          ExtraRotation_;
		float                          ExtraRotation_02;
	} params = {};

	params.Segment = Segment;
	params.Rotation_ = Rotation_;
	params.Rotation_02 = Rotation_02;
	params.ExtraChecks = ExtraChecks;
	params.ExtraRotation_ = ExtraRotation_;
	params.ExtraRotation_02 = ExtraRotation_02;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.SelectSegment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterRadialMenu_C::SelectSegment()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.SelectSegment"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.GetMouseOver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterRadialMenu_C::GetMouseOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.GetMouseOver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.GetMouseRotation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MasterRadialMenu_C::GetMouseRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.GetMouseRotation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MasterRadialMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.ExecuteUbergraph_BP_MasterRadialMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MasterRadialMenu_C::ExecuteUbergraph_BP_MasterRadialMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.ExecuteUbergraph_BP_MasterRadialMenu"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
