// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKCharacterInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanValues
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Lean_Alpha                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TargetCamera                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKCharacterInterface_C::SGK_LeanValues(float* Lean_Alpha, float* TargetCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanValues"));

	struct
	{
		float                          Lean_Alpha;
		float                          TargetCamera;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Lean_Alpha != nullptr)
		*Lean_Alpha = params.Lean_Alpha;
	if (TargetCamera != nullptr)
		*TargetCamera = params.TargetCamera;
}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Lean                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          CameraLean                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ThirdPersonCameraOffset        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKCharacterInterface_C::SGK_LeanRight(bool Lean, float CameraLean, float ThirdPersonCameraOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanRight"));

	struct
	{
		bool                           Lean;
		float                          CameraLean;
		float                          ThirdPersonCameraOffset;
	} params = {};

	params.Lean = Lean;
	params.CameraLean = CameraLean;
	params.ThirdPersonCameraOffset = ThirdPersonCameraOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Lean                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          CameraLean                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ThirdPersonCameraOffset        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKCharacterInterface_C::SGK_LeanLeft(bool Lean, float CameraLean, float ThirdPersonCameraOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanLeft"));

	struct
	{
		bool                           Lean;
		float                          CameraLean;
		float                          ThirdPersonCameraOffset;
	} params = {};

	params.Lean = Lean;
	params.CameraLean = CameraLean;
	params.ThirdPersonCameraOffset = ThirdPersonCameraOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LookAtRotation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               LookAtRotation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKCharacterInterface_C::SGK_LookAtRotation(struct FVector2D* LookAtRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LookAtRotation"));

	struct
	{
		struct FVector2D               LookAtRotation;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LookAtRotation != nullptr)
		*LookAtRotation = params.LookAtRotation;
}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK CharacterSockets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sockets>         Sockets                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         Component                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKCharacterInterface_C::SGK_CharacterSockets(TEnumAsByte<E_Sockets> Sockets, class USceneComponent** Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK CharacterSockets"));

	struct
	{
		TEnumAsByte<E_Sockets>         Sockets;
		class USceneComponent*         Component;
	} params = {};

	params.Sockets = Sockets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK CharacterCamera
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CameraType>      CameraType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCameraComponent*        CurrentCamera                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USpringArmComponent*     CurrentSpringArm               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKCharacterInterface_C::SGK_CharacterCamera(TEnumAsByte<E_CameraType> CameraType, class UCameraComponent** CurrentCamera, class USpringArmComponent** CurrentSpringArm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK CharacterCamera"));

	struct
	{
		TEnumAsByte<E_CameraType>      CameraType;
		class UCameraComponent*        CurrentCamera;
		class USpringArmComponent*     CurrentSpringArm;
	} params = {};

	params.CameraType = CameraType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrentCamera != nullptr)
		*CurrentCamera = params.CurrentCamera;
	if (CurrentSpringArm != nullptr)
		*CurrentSpringArm = params.CurrentSpringArm;
}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK HideComponents
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Components                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBP_SGKCharacterInterface_C::SGK_HideComponents(TArray<class UPrimitiveComponent*> Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK HideComponents"));

	struct
	{
		TArray<class UPrimitiveComponent*> Components;
	} params = {};

	params.Components = Components;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK GetMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BodyMesh>        MeshType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SGKCharacterInterface_C::SGK_GetMesh(TEnumAsByte<E_BodyMesh> MeshType, class UPrimitiveComponent** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK GetMesh"));

	struct
	{
		TEnumAsByte<E_BodyMesh>        MeshType;
		class UPrimitiveComponent*     Mesh;
	} params = {};

	params.MeshType = MeshType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
