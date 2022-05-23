// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QC_Attackers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QC_Attackers.QC_Attackers_C.ProvideActorsSet
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  QuerierActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AActor*>          ResultingActorsSet             (CPF_Parm, CPF_OutParm)

void UQC_Attackers_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QC_Attackers.QC_Attackers_C.ProvideActorsSet"));

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		TArray<class AActor*>          ResultingActorsSet;
	} params = {};

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = params.ResultingActorsSet;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
