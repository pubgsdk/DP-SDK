#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AIInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIInterface.BP_AIInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AIInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AIInterface.BP_AIInterface_C"));
		return ptr;
	}


	void AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker);
	void AI_Camera_Activate(bool Activate);
	void AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour);
	void AI_End_Alert();
	void AI_Alert(class AActor* Alert_Actor);
	void Turret_End_Reload();
	void Turret_Start_Reload();
	void Turret_Idle_Stop();
	void Turret_Idle_Start();
	void Turret_Destroyed_Effect();
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Actor_Attack_Target(class AActor** Attack_Target);
	void Actor_Aim_Focus(class AActor* Instigator);
	void AI_Dead();
	void AI_Can_Interact_(bool* Can_Interact);
	void AI_Is_Dead_(bool* Dead);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
