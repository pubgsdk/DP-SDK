#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SGKDamageInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SGKDamageInterface.BP_SGKDamageInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SGKDamageInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SGKDamageInterface.BP_SGKDamageInterface_C"));
		return ptr;
	}


	void SGK_Damage(int BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, TEnumAsByte<E_DamageType> DamageType, TEnumAsByte<E_Hitbox> HitBox);
	bool SGK_SetCurrentHealth(int NewHealthAmount);
	void SGK_ShowHealthWidget(bool* ShowHealthWidget, struct FText* HealthWidgetName);
	void SGK_MaxHealth(int* MaxHealth);
	void SGK_CurrentHealth(int* Health);
	void SGK_BleedDamage(int TickDamage, float TickTime, float BleedLength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
