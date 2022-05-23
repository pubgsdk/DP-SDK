// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKBuildingInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BPBuildCollision
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Collision                      (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKBuildingInterface_C::SGK_BPBuildCollision(TArray<class UPrimitiveComponent*>* Collision)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BPBuildCollision"));

	struct
	{
		TArray<class UPrimitiveComponent*> Collision;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Collision != nullptr)
		*Collision = params.Collision;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BPGrids
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UBP_GridComponent_C*> Grids                          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UBP_SGKBuildingInterface_C::SGK_BPGrids(TArray<class UBP_GridComponent_C*>* Grids)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BPGrids"));

	struct
	{
		TArray<class UBP_GridComponent_C*> Grids;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Grids != nullptr)
		*Grids = params.Grids;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK LoadExtraData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*       SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKBuildingInterface_C::SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK LoadExtraData"));

	struct
	{
		class UBP_SGKSaveGame_C*       SaveGame;
		int                            Index;
	} params = {};

	params.SaveGame = SaveGame;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK Preview
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Preview                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_SGKBuildingInterface_C::SGK_Preview(bool Preview)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK Preview"));

	struct
	{
		bool                           Preview;
		bool                           ReturnValue;
	} params = {};

	params.Preview = Preview;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK AddMultipleOwners
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           Owners                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_SGKBuildingInterface_C::SGK_AddMultipleOwners(TArray<struct FText>* Owners)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK AddMultipleOwners"));

	struct
	{
		TArray<struct FText>           Owners;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Owners != nullptr)
		*Owners = params.Owners;

	return params.ReturnValue;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK ClearOwners
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_SGKBuildingInterface_C::SGK_ClearOwners()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK ClearOwners"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK AddOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_SGKBuildingInterface_C::SGK_AddOwner(const struct FText& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK AddOwner"));

	struct
	{
		struct FText                   PlayerName;
		bool                           ReturnValue;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK Upgrade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SGKBuildingInterface_C::SGK_Upgrade()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK Upgrade"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPartPlaced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FromSaveGame                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKBuildingInterface_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPartPlaced"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
		bool                           FromSaveGame;
	} params = {};

	params.PlayerInventory = PlayerInventory;
	params.FromSaveGame = FromSaveGame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsOwner                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKBuildingInterface_C::SGK_IsOwner(const struct FText& PlayerName, bool* IsOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsOwner"));

	struct
	{
		struct FText                   PlayerName;
		bool                           IsOwner;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsOwner != nullptr)
		*IsOwner = params.IsOwner;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPart
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     BuildPart                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBP_SGKBuildingInterface_C::SGK_BuildPart(struct FDataTableRowHandle* BuildPart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPart"));

	struct
	{
		struct FDataTableRowHandle     BuildPart;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BuildPart != nullptr)
		*BuildPart = params.BuildPart;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildingOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*   PlayerInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKBuildingInterface_C::SGK_BuildingOptions(class UBP_PlayerInventory_C* PlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildingOptions"));

	struct
	{
		class UBP_PlayerInventory_C*   PlayerInventory;
	} params = {};

	params.PlayerInventory = PlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsPlaced
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPlaced                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKBuildingInterface_C::SGK_IsPlaced(bool* IsPlaced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsPlaced"));

	struct
	{
		bool                           IsPlaced;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPlaced != nullptr)
		*IsPlaced = params.IsPlaced;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK SupportCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DestroyOnFail                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           DirectSupportOnly              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Supported                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IndirectSupportOnly            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKBuildingInterface_C::SGK_SupportCheck(bool DestroyOnFail, bool DirectSupportOnly, bool* Supported, bool* IndirectSupportOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK SupportCheck"));

	struct
	{
		bool                           DestroyOnFail;
		bool                           DirectSupportOnly;
		bool                           Supported;
		bool                           IndirectSupportOnly;
	} params = {};

	params.DestroyOnFail = DestroyOnFail;
	params.DirectSupportOnly = DirectSupportOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Supported != nullptr)
		*Supported = params.Supported;
	if (IndirectSupportOnly != nullptr)
		*IndirectSupportOnly = params.IndirectSupportOnly;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsPendingDestroy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPendingDestroy               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKBuildingInterface_C::SGK_IsPendingDestroy(bool* IsPendingDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsPendingDestroy"));

	struct
	{
		bool                           IsPendingDestroy;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPendingDestroy != nullptr)
		*IsPendingDestroy = params.IsPendingDestroy;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPartType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BuildType>       Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKBuildingInterface_C::SGK_BuildPartType(TEnumAsByte<E_BuildType>* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPartType"));

	struct
	{
		TEnumAsByte<E_BuildType>       Type;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK DeleteBuildPart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceDestroy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SGKBuildingInterface_C::SGK_DeleteBuildPart(class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent, bool ForceDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK DeleteBuildPart"));

	struct
	{
		class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent;
		bool                           ForceDestroy;
	} params = {};

	params.PlayerBuildingComponent = PlayerBuildingComponent;
	params.ForceDestroy = ForceDestroy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
