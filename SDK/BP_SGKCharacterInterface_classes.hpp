#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKCharacterInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKCharacterInterface.BP_SGKCharacterInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKCharacterInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKCharacterInterface.BP_SGKCharacterInterface_C"));
		return ptr;
	}


	void SGK_LeanValues(float* Lean_Alpha, float* TargetCamera);
	void SGK_LeanRight(bool Lean, float CameraLean, float ThirdPersonCameraOffset);
	void SGK_LeanLeft(bool Lean, float CameraLean, float ThirdPersonCameraOffset);
	void SGK_LookAtRotation(struct FVector2D* LookAtRotation);
	void SGK_CharacterSockets(TEnumAsByte<E_Sockets> Sockets, class USceneComponent** Component);
	void SGK_CharacterCamera(TEnumAsByte<E_CameraType> CameraType, class UCameraComponent** CurrentCamera, class USpringArmComponent** CurrentSpringArm);
	void SGK_HideComponents(TArray<class UPrimitiveComponent*> Components);
	void SGK_GetMesh(TEnumAsByte<E_BodyMesh> MeshType, class UPrimitiveComponent** Mesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
