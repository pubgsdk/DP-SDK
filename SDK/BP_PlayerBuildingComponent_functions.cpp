// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PlayerBuildingComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ToggleBuildMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::ToggleBuildMenu(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ToggleBuildMenu"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.Toggle Name Panel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::Toggle_Name_Panel(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.Toggle Name Panel"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.CreateRadialMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UBP_MasterRadialMenu_C*/ Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::CreateRadialMenu(class UClass* /*UBP_MasterRadialMenu_C*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.CreateRadialMenu"));

	struct
	{
		class UClass* /*UBP_MasterRadialMenu_C*/ Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ToggleBuildOptionsMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::ToggleBuildOptionsMenu(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ToggleBuildOptionsMenu"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateIgnoreGrids
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ABP_MasterGrid_C*/ Grid                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::UpdateIgnoreGrids(class UClass* /*ABP_MasterGrid_C*/ Grid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateIgnoreGrids"));

	struct
	{
		class UClass* /*ABP_MasterGrid_C*/ Grid;
	} params = {};

	params.Grid = Grid;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.IsOnGrid
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           OnGrid                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::IsOnGrid(bool* OnGrid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.IsOnGrid"));

	struct
	{
		bool                           OnGrid;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OnGrid != nullptr)
		*OnGrid = params.OnGrid;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SelectClosestFoundationGrid
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ClosestGrid                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ChecksDone                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::SelectClosestFoundationGrid(class UPrimitiveComponent** ClosestGrid, bool* ChecksDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SelectClosestFoundationGrid"));

	struct
	{
		class UPrimitiveComponent*     ClosestGrid;
		bool                           ChecksDone;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ClosestGrid != nullptr)
		*ClosestGrid = params.ClosestGrid;
	if (ChecksDone != nullptr)
		*ChecksDone = params.ChecksDone;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SelectClosestFloorGrid
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ClosestGrid                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SupportingGridFound            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           NonSuppored                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Hide                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::SelectClosestFloorGrid(class UPrimitiveComponent** ClosestGrid, bool* SupportingGridFound, bool* NonSuppored, bool* Hide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SelectClosestFloorGrid"));

	struct
	{
		class UPrimitiveComponent*     ClosestGrid;
		bool                           SupportingGridFound;
		bool                           NonSuppored;
		bool                           Hide;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ClosestGrid != nullptr)
		*ClosestGrid = params.ClosestGrid;
	if (SupportingGridFound != nullptr)
		*SupportingGridFound = params.SupportingGridFound;
	if (NonSuppored != nullptr)
		*NonSuppored = params.NonSuppored;
	if (Hide != nullptr)
		*Hide = params.Hide;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SetCollision
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Placed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::SetCollision(bool Placed, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SetCollision"));

	struct
	{
		bool                           Placed;
		class AActor*                  Actor;
	} params = {};

	params.Placed = Placed;
	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.CollisionCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CollisionBlocked               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           HidePreview                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* UBP_PlayerBuildingComponent_C::CollisionCheck(class AActor* Actor, bool* CollisionBlocked, bool* HidePreview)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.CollisionCheck"));

	struct
	{
		class AActor*                  Actor;
		bool                           CollisionBlocked;
		bool                           HidePreview;
		class AActor*                  ReturnValue;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CollisionBlocked != nullptr)
		*CollisionBlocked = params.CollisionBlocked;
	if (HidePreview != nullptr)
		*HidePreview = params.HidePreview;

	return params.ReturnValue;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ItemCostCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RemoveItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ItemsFound                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::ItemCostCheck(bool RemoveItems, bool* ItemsFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ItemCostCheck"));

	struct
	{
		bool                           RemoveItems;
		bool                           ItemsFound;
	} params = {};

	params.RemoveItems = RemoveItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemsFound != nullptr)
		*ItemsFound = params.ItemsFound;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SelectBuildPart
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemRowName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::SelectBuildPart(const struct FName& ItemRowName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SelectBuildPart"));

	struct
	{
		struct FName                   ItemRowName;
	} params = {};

	params.ItemRowName = ItemRowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.PickupActor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::PickupActor(class UObject* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.PickupActor"));

	struct
	{
		class UObject*                 Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.RepairActor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::RepairActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.RepairActor"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpgradeActor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::UpgradeActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpgradeActor"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExitBuildingMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ExitBuildingMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExitBuildingMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SelectBuildMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BuildingMode>    BuildMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::SelectBuildMode(TEnumAsByte<E_BuildingMode> BuildMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SelectBuildMode"));

	struct
	{
		TEnumAsByte<E_BuildingMode>    BuildMode;
	} params = {};

	params.BuildMode = BuildMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.DisablePlacement
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hide                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::DisablePlacement(bool Hide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.DisablePlacement"));

	struct
	{
		bool                           Hide;
	} params = {};

	params.Hide = Hide;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ApplyRotation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                NewRotation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::ApplyRotation(const struct FRotator& Rotation, struct FRotator* NewRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ApplyRotation"));

	struct
	{
		struct FRotator                Rotation;
		struct FRotator                NewRotation;
	} params = {};

	params.Rotation = Rotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ApplyHeightAdjust
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 StartLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 EndLocation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ApplyHeightAdjust(const struct FVector& StartLocation, struct FVector* EndLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ApplyHeightAdjust"));

	struct
	{
		struct FVector                 StartLocation;
		struct FVector                 EndLocation;
	} params = {};

	params.StartLocation = StartLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EndLocation != nullptr)
		*EndLocation = params.EndLocation;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ChangeHeightAdjustment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Increase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::ChangeHeightAdjustment(bool Increase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ChangeHeightAdjustment"));

	struct
	{
		bool                           Increase;
	} params = {};

	params.Increase = Increase;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ResetFloorCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ResetFloorCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ResetFloorCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.HitGridComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Grid                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UBP_GridComponent_C*     GridComponent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UBP_PlayerBuildingComponent_C::HitGridComponent(class UPrimitiveComponent* Grid, class UBP_GridComponent_C** GridComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.HitGridComponent"));

	struct
	{
		class UPrimitiveComponent*     Grid;
		bool                           ReturnValue;
		class UBP_GridComponent_C*     GridComponent;
	} params = {};

	params.Grid = Grid;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GridComponent != nullptr)
		*GridComponent = params.GridComponent;

	return params.ReturnValue;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.RotateBuildPart
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::RotateBuildPart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.RotateBuildPart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.PlaceBuildPart
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OnGrid                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class USceneComponent*         AttachComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_PlayerBuildingComponent_C::PlaceBuildPart(const struct FName& RowName, const struct FVector& Location, const struct FRotator& Rotation, bool OnGrid, class USceneComponent* AttachComponent, const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.PlaceBuildPart"));

	struct
	{
		struct FName                   RowName;
		struct FVector                 Location;
		struct FRotator                Rotation;
		bool                           OnGrid;
		class USceneComponent*         AttachComponent;
		struct FText                   Name;
	} params = {};

	params.RowName = RowName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.OnGrid = OnGrid;
	params.AttachComponent = AttachComponent;
	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.DestroyPlaced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::DestroyPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.DestroyPlaced"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.EnablePlacement
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_GridComponent_C*     GridComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::EnablePlacement(class UBP_GridComponent_C* GridComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.EnablePlacement"));

	struct
	{
		class UBP_GridComponent_C*     GridComponent;
	} params = {};

	params.GridComponent = GridComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.PreviewLocation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::PreviewLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.PreviewLocation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.GroundCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           GroundFound                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::GroundCheck(class AActor* Actor, bool* GroundFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.GroundCheck"));

	struct
	{
		class AActor*                  Actor;
		bool                           GroundFound;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GroundFound != nullptr)
		*GroundFound = params.GroundFound;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.TraceMath
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_CameraType>      CameraType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Start                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::TraceMath(TEnumAsByte<E_CameraType> CameraType, struct FVector* Start, struct FVector* End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.TraceMath"));

	struct
	{
		TEnumAsByte<E_CameraType>      CameraType;
		struct FVector                 Start;
		struct FVector                 End;
	} params = {};

	params.CameraType = CameraType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.HitActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  HitActor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::HitActor(class AActor** HitActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.HitActor"));

	struct
	{
		class AActor*                  HitActor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HitActor != nullptr)
		*HitActor = params.HitActor;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.HitComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::HitComponent(class UPrimitiveComponent** HitComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.HitComponent"));

	struct
	{
		class UPrimitiveComponent*     HitComponent;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HitComponent != nullptr)
		*HitComponent = params.HitComponent;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.HitLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::HitLocation(struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.HitLocation"));

	struct
	{
		struct FVector                 Location;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.BuildTrace
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::BuildTrace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.BuildTrace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientRemoveMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ClientRemoveMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientRemoveMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientCreateMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UBP_MasterRadialMenu_C*/ Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ClientCreateMenu(class UClass* /*UBP_MasterRadialMenu_C*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientCreateMenu"));

	struct
	{
		class UClass* /*UBP_MasterRadialMenu_C*/ Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientPlaceSoundEffect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ClientPlaceSoundEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientPlaceSoundEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientPlaceNamedBuildPart
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_PlayerBuildingComponent_C::ClientPlaceNamedBuildPart(const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientPlaceNamedBuildPart"));

	struct
	{
		struct FText                   Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerPlaceBuildPart
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BuildPartRowName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OnGrid                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class USceneComponent*         AttachComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_PlayerBuildingComponent_C::ServerPlaceBuildPart(const struct FName& BuildPartRowName, const struct FVector& Location, const struct FRotator& Rotation, bool OnGrid, class USceneComponent* AttachComponent, const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerPlaceBuildPart"));

	struct
	{
		struct FName                   BuildPartRowName;
		struct FVector                 Location;
		struct FRotator                Rotation;
		bool                           OnGrid;
		class USceneComponent*         AttachComponent;
		struct FText                   Name;
	} params = {};

	params.BuildPartRowName = BuildPartRowName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.OnGrid = OnGrid;
	params.AttachComponent = AttachComponent;
	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientTraces
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ClientTraces()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientTraces"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientExitBuildMode
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ClientExitBuildMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientExitBuildMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientPrimaryAction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ClientPrimaryAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientPrimaryAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientSelectBuildPart
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemRowName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ClientSelectBuildPart(const struct FName& ItemRowName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientSelectBuildPart"));

	struct
	{
		struct FName                   ItemRowName;
	} params = {};

	params.ItemRowName = ItemRowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientSelectBuildMode
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BuildingMode>    BuildMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ClientSelectBuildMode(TEnumAsByte<E_BuildingMode> BuildMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientSelectBuildMode"));

	struct
	{
		TEnumAsByte<E_BuildingMode>    BuildMode;
	} params = {};

	params.BuildMode = BuildMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerOpenBuildingMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ServerOpenBuildingMenu(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerOpenBuildingMenu"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerUpgradeActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ServerUpgradeActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerUpgradeActor"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerRepairActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ServerRepairActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerRepairActor"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerPickupActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PickupActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ServerPickupActor(class AActor* PickupActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerPickupActor"));

	struct
	{
		class AActor*                  PickupActor;
	} params = {};

	params.PickupActor = PickupActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerDeleteActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DeleteActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceDestroy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_PlayerBuildingComponent_C::ServerDeleteActor(class AActor* DeleteActor, bool ForceDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerDeleteActor"));

	struct
	{
		class AActor*                  DeleteActor;
		bool                           ForceDestroy;
	} params = {};

	params.DeleteActor = DeleteActor;
	params.ForceDestroy = ForceDestroy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnGridManager
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::SpawnGridManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnGridManager"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerInitialize
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ServerInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientInitialize
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerBuildingComponent_C::ClientInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ClientInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerUpdateSelectedActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ServerUpdateSelectedActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerUpdateSelectedActor"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerSetBuildPart
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BuildPartRowName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ServerSetBuildPart(const struct FName& BuildPartRowName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ServerSetBuildPart"));

	struct
	{
		struct FName                   BuildPartRowName;
	} params = {};

	params.BuildPartRowName = BuildPartRowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExecuteUbergraph_BP_PlayerBuildingComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerBuildingComponent_C::ExecuteUbergraph_BP_PlayerBuildingComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExecuteUbergraph_BP_PlayerBuildingComponent"));

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
