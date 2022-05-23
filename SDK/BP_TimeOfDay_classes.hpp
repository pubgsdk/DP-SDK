#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TimeOfDay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TimeOfDay.BP_TimeOfDay_C
// 0x0051 (0x0271 - 0x0220)
class ABP_TimeOfDay_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ADirectionalLight*                           Directional_Light;                                        // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASkyLight*                                   SkyLight;                                                 // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_Sky_Sphere_C*                            Sky_Sphere;                                               // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Sun_Speed;                                                // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Tick;                                                     // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimespan                                   Time;                                                     // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              New_Time_Delta;                                           // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Night;                                                    // 0x025C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	struct FMulticastScriptDelegate                    Time_Hour;                                                // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               Debug_Text;                                               // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TimeOfDay.BP_TimeOfDay_C"));
		return ptr;
	}


	void AI_Is_Dead_(bool* Dead);
	void AI_Can_Interact_(bool* Can_Interact);
	void Actor_Attack_Target(class AActor** Attack_Target);
	void Update_Time(float Delta);
	void Day_Lighting(float Delta);
	void Night_Lighting(float Delta);
	void Turret_Idle_Start();
	void Turret_Idle_Stop();
	void Turret_Start_Reload();
	void Turret_End_Reload();
	void AI_Alert(class AActor* Alert_Actor);
	void AI_End_Alert();
	void AI_Animation_Switch(TEnumAsByte<E_AIBehaviour> Behaviour);
	void AI_Camera_Activate(bool Activate);
	void AI_Block(TEnumAsByte<E_BlockType> Block_Type, class AActor* Block_Attacker);
	void ReceiveTick(float DeltaSeconds);
	void Turret_Destroyed_Effect();
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Actor_Aim_Focus(class AActor* Instigator);
	void AI_Dead();
	void ExecuteUbergraph_BP_TimeOfDay(int EntryPoint);
	void Time_Hour__DelegateSignature(int Hours);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
