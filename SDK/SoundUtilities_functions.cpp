// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoundUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// int                            BaseMidiNote                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TargetMidiNote                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch"));

	struct
	{
		int                            BaseMidiNote;
		int                            TargetMidiNote;
		float                          ReturnValue;
	} params = {};

	params.BaseMidiNote = BaseMidiNote;
	params.TargetMidiNote = TargetMidiNote;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// float                          Frequency                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(float Frequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency"));

	struct
	{
		float                          Frequency;
		int                            ReturnValue;
	} params = {};

	params.Frequency = Frequency;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// int                            MidiNote                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(int MidiNote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch"));

	struct
	{
		int                            MidiNote;
		float                          ReturnValue;
	} params = {};

	params.MidiNote = MidiNote;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// float                          BeatsPerMinute                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            BeatMultiplier                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            DivisionsOfWholeNote           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo"));

	struct
	{
		float                          BeatsPerMinute;
		int                            BeatMultiplier;
		int                            DivisionsOfWholeNote;
		float                          ReturnValue;
	} params = {};

	params.BeatsPerMinute = BeatsPerMinute;
	params.BeatMultiplier = BeatMultiplier;
	params.DivisionsOfWholeNote = DivisionsOfWholeNote;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
