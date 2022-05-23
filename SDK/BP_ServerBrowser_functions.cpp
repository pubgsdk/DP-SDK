// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ServerBrowser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ServerBrowser.BP_ServerBrowser_C.SortByPing
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HeighestFirst                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FBlueprintSessionResult> Servers                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FBlueprintSessionResult> SortedServer                   (CPF_Parm, CPF_OutParm)

void UBP_ServerBrowser_C::SortByPing(bool HeighestFirst, TArray<struct FBlueprintSessionResult>* Servers, TArray<struct FBlueprintSessionResult>* SortedServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.SortByPing"));

	struct
	{
		bool                           HeighestFirst;
		TArray<struct FBlueprintSessionResult> Servers;
		TArray<struct FBlueprintSessionResult> SortedServer;
	} params = {};

	params.HeighestFirst = HeighestFirst;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Servers != nullptr)
		*Servers = params.Servers;
	if (SortedServer != nullptr)
		*SortedServer = params.SortedServer;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.PingClicked
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_ServerBrowser_C::PingClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.PingClicked"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.SortList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Servers                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FBlueprintSessionResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TArray<struct FBlueprintSessionResult> UBP_ServerBrowser_C::SortList(TArray<struct FBlueprintSessionResult>* Servers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.SortList"));

	struct
	{
		TArray<struct FBlueprintSessionResult> Servers;
		TArray<struct FBlueprintSessionResult> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Servers != nullptr)
		*Servers = params.Servers;

	return params.ReturnValue;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.PlayerCountClicked
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_ServerBrowser_C::PlayerCountClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.PlayerCountClicked"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.SortByPlayerCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HeighestFirst                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FBlueprintSessionResult> Servers                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FBlueprintSessionResult> SortedServer                   (CPF_Parm, CPF_OutParm)

void UBP_ServerBrowser_C::SortByPlayerCount(bool HeighestFirst, TArray<struct FBlueprintSessionResult>* Servers, TArray<struct FBlueprintSessionResult>* SortedServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.SortByPlayerCount"));

	struct
	{
		bool                           HeighestFirst;
		TArray<struct FBlueprintSessionResult> Servers;
		TArray<struct FBlueprintSessionResult> SortedServer;
	} params = {};

	params.HeighestFirst = HeighestFirst;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Servers != nullptr)
		*Servers = params.Servers;
	if (SortedServer != nullptr)
		*SortedServer = params.SortedServer;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.PopulateServerList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Servers                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_ServerBrowser_C::PopulateServerList(TArray<struct FBlueprintSessionResult>* Servers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.PopulateServerList"));

	struct
	{
		TArray<struct FBlueprintSessionResult> Servers;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Servers != nullptr)
		*Servers = params.Servers;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.ClearServerList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ServerBrowser_C::ClearServerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.ClearServerList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_FB0F39084404EE85CD452E860E2A916E
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_ServerBrowser_C::OnFailure_FB0F39084404EE85CD452E860E2A916E(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_FB0F39084404EE85CD452E860E2A916E"));

	struct
	{
		TArray<struct FBlueprintSessionResult> Results;
	} params = {};

	params.Results = Results;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_FB0F39084404EE85CD452E860E2A916E
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_ServerBrowser_C::OnSuccess_FB0F39084404EE85CD452E860E2A916E(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_FB0F39084404EE85CD452E860E2A916E"));

	struct
	{
		TArray<struct FBlueprintSessionResult> Results;
	} params = {};

	params.Results = Results;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_1908370B44A7987A34BF08ABA766B33F
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_ServerBrowser_C::OnFailure_1908370B44A7987A34BF08ABA766B33F(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_1908370B44A7987A34BF08ABA766B33F"));

	struct
	{
		TArray<struct FBlueprintSessionResult> Results;
	} params = {};

	params.Results = Results;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_1908370B44A7987A34BF08ABA766B33F
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_ServerBrowser_C::OnSuccess_1908370B44A7987A34BF08ABA766B33F(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_1908370B44A7987A34BF08ABA766B33F"));

	struct
	{
		TArray<struct FBlueprintSessionResult> Results;
	} params = {};

	params.Results = Results;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_ServerBrowser_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__CheckBox_473_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_ServerBrowser_C::BndEvt__CheckBox_473_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__CheckBox_473_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.RefreshServerList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ServerBrowser_C::RefreshServerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.RefreshServerList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_ServerBrowser_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ServerBrowser_C::ExecuteUbergraph_BP_ServerBrowser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser"));

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
