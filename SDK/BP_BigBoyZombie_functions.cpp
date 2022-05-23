// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BigBoyZombie_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BigBoyZombie.BP_BigBoyZombie_C.SGK InteractName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InteractName                   (CPF_Parm, CPF_OutParm)

void ABP_BigBoyZombie_C::SGK_InteractName(struct FText* InteractName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BigBoyZombie.BP_BigBoyZombie_C.SGK InteractName"));

	struct
	{
		struct FText                   InteractName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InteractName != nullptr)
		*InteractName = params.InteractName;
}


// Function BP_BigBoyZombie.BP_BigBoyZombie_C.OnRep_Skin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BigBoyZombie_C::OnRep_Skin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BigBoyZombie.BP_BigBoyZombie_C.OnRep_Skin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
