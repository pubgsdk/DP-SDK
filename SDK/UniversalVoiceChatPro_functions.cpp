// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UniversalVoiceChatPro_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidMicrophoneStop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UMicrophoneSpeakComponent* callbackComp                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioCaptureAndroid::AndroidMicrophoneStop(class UMicrophoneSpeakComponent* callbackComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidMicrophoneStop"));

	struct
	{
		class UMicrophoneSpeakComponent* callbackComp;
	} params = {};

	params.callbackComp = callbackComp;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidMicrophoneStart
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UMicrophoneSpeakComponent* callbackComp                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            sampleRateToUse                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAudioCaptureAndroid::AndroidMicrophoneStart(class UMicrophoneSpeakComponent* callbackComp, int sampleRateToUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidMicrophoneStart"));

	struct
	{
		class UMicrophoneSpeakComponent* callbackComp;
		int                            sampleRateToUse;
		bool                           ReturnValue;
	} params = {};

	params.callbackComp = callbackComp;
	params.sampleRateToUse = sampleRateToUse;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidHasPermission
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAudioCaptureAndroid::AndroidHasPermission()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidHasPermission"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidAskPermission
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)

void UAudioCaptureAndroid::AndroidAskPermission()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidAskPermission"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.startSpeaking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           _shouldHearMyOwnVoice          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           isGlobal                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            radioChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           useRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMicrophoneSpeakComponent::startSpeaking(bool _shouldHearMyOwnVoice, bool isGlobal, int radioChannel, bool useRange, float MaxRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.startSpeaking"));

	struct
	{
		bool                           _shouldHearMyOwnVoice;
		bool                           isGlobal;
		int                            radioChannel;
		bool                           useRange;
		float                          MaxRange;
		bool                           ReturnValue;
	} params = {};

	params._shouldHearMyOwnVoice = _shouldHearMyOwnVoice;
	params.isGlobal = isGlobal;
	params.radioChannel = radioChannel;
	params.useRange = useRange;
	params.MaxRange = MaxRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.SetVoiceVolume
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMicrophoneSpeakComponent::SetVoiceVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.SetVoiceVolume"));

	struct
	{
		float                          Volume;
	} params = {};

	params.Volume = Volume;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.setAttenuationAssetPath
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           enableAttenuation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 _pathToAttenuationAsset        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMicrophoneSpeakComponent::setAttenuationAssetPath(bool enableAttenuation, const struct FString& _pathToAttenuationAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.setAttenuationAssetPath"));

	struct
	{
		bool                           enableAttenuation;
		struct FString                 _pathToAttenuationAsset;
	} params = {};

	params.enableAttenuation = enableAttenuation;
	params._pathToAttenuationAsset = _pathToAttenuationAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCServerBroadcastVoiceData
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// TArray<unsigned char>          Data                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            SampleRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumChannels                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PCMSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMicrophoneSpeakComponent::RPCServerBroadcastVoiceData(TArray<unsigned char> Data, int SampleRate, int NumChannels, int PCMSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCServerBroadcastVoiceData"));

	struct
	{
		TArray<unsigned char>          Data;
		int                            SampleRate;
		int                            NumChannels;
		int                            PCMSize;
	} params = {};

	params.Data = Data;
	params.SampleRate = SampleRate;
	params.NumChannels = NumChannels;
	params.PCMSize = PCMSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCReceiveVoiceFromServer
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// class UMicrophoneSpeakComponent* compToOutputVoice              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<unsigned char>          dataEncoded                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            SampleRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumChannels                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PCMSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMicrophoneSpeakComponent::RPCReceiveVoiceFromServer(class UMicrophoneSpeakComponent* compToOutputVoice, TArray<unsigned char> dataEncoded, int SampleRate, int NumChannels, int PCMSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCReceiveVoiceFromServer"));

	struct
	{
		class UMicrophoneSpeakComponent* compToOutputVoice;
		TArray<unsigned char>          dataEncoded;
		int                            SampleRate;
		int                            NumChannels;
		int                            PCMSize;
	} params = {};

	params.compToOutputVoice = compToOutputVoice;
	params.dataEncoded = dataEncoded;
	params.SampleRate = SampleRate;
	params.NumChannels = NumChannels;
	params.PCMSize = PCMSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCClientTransmitVoiceData
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// TArray<unsigned char>          Data                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            SampleRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumChannels                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PCMSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           _isGlobal                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            _radioChannel                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           _useRange                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          _maxRange                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMicrophoneSpeakComponent::RPCClientTransmitVoiceData(TArray<unsigned char> Data, int SampleRate, int NumChannels, int PCMSize, bool _isGlobal, int _radioChannel, bool _useRange, float _maxRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCClientTransmitVoiceData"));

	struct
	{
		TArray<unsigned char>          Data;
		int                            SampleRate;
		int                            NumChannels;
		int                            PCMSize;
		bool                           _isGlobal;
		int                            _radioChannel;
		bool                           _useRange;
		float                          _maxRange;
	} params = {};

	params.Data = Data;
	params.SampleRate = SampleRate;
	params.NumChannels = NumChannels;
	params.PCMSize = PCMSize;
	params._isGlobal = _isGlobal;
	params._radioChannel = _radioChannel;
	params._useRange = _useRange;
	params._maxRange = _maxRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.payloadReceivedVoiceData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<unsigned char>          dataEncoded                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            SampleRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumChannels                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PCMSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMicrophoneSpeakComponent::payloadReceivedVoiceData(TArray<unsigned char> dataEncoded, int SampleRate, int NumChannels, int PCMSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.payloadReceivedVoiceData"));

	struct
	{
		TArray<unsigned char>          dataEncoded;
		int                            SampleRate;
		int                            NumChannels;
		int                            PCMSize;
	} params = {};

	params.dataEncoded = dataEncoded;
	params.SampleRate = SampleRate;
	params.NumChannels = NumChannels;
	params.PCMSize = PCMSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.muteAudio
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           _isMuted                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMicrophoneSpeakComponent::muteAudio(bool _isMuted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.muteAudio"));

	struct
	{
		bool                           _isMuted;
	} params = {};

	params._isMuted = _isMuted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.isPlayingAudioVoice
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMicrophoneSpeakComponent::isPlayingAudioVoice()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.isPlayingAudioVoice"));

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


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.initAudioResources
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            voiceSampleRate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            _voiceNumChannels              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMicrophoneSpeakComponent::initAudioResources(int voiceSampleRate, int _voiceNumChannels)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.initAudioResources"));

	struct
	{
		int                            voiceSampleRate;
		int                            _voiceNumChannels;
		bool                           ReturnValue;
	} params = {};

	params.voiceSampleRate = voiceSampleRate;
	params._voiceNumChannels = _voiceNumChannels;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.MicrophoneSpeakComponent.endSpeaking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMicrophoneSpeakComponent::endSpeaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.MicrophoneSpeakComponent.endSpeaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction UniversalVoiceChatPro.MicrophoneSpeakComponent.DataMicrophoneReceived__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UMicrophoneSpeakComponent::DataMicrophoneReceived__DelegateSignature(TArray<unsigned char> Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UniversalVoiceChatPro.MicrophoneSpeakComponent.DataMicrophoneReceived__DelegateSignature"));

	struct
	{
		TArray<unsigned char>          Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetMaxProximityRange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          _maxProximityRange             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::ServerSetMaxProximityRange(float _maxProximityRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetMaxProximityRange"));

	struct
	{
		float                          _maxProximityRange;
	} params = {};

	params._maxProximityRange = _maxProximityRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAttenuation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           enableAttenuation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 _pathToAttenuationAsset        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::ServerSetAttenuation(bool enableAttenuation, const struct FString& _pathToAttenuationAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAttenuation"));

	struct
	{
		bool                           enableAttenuation;
		struct FString                 _pathToAttenuationAsset;
	} params = {};

	params.enableAttenuation = enableAttenuation;
	params._pathToAttenuationAsset = _pathToAttenuationAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAllowUseProximity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           _allowUseRange                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::ServerSetAllowUseProximity(bool _allowUseRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAllowUseProximity"));

	struct
	{
		bool                           _allowUseRange;
	} params = {};

	params._allowUseRange = _allowUseRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAllowUseGlobal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           _allowUseGlobal                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::ServerSetAllowUseGlobal(bool _allowUseGlobal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAllowUseGlobal"));

	struct
	{
		bool                           _allowUseGlobal;
	} params = {};

	params._allowUseGlobal = _allowUseGlobal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerRemoveChannel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            channelToRemove                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::ServerRemoveChannel(int channelToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerRemoveChannel"));

	struct
	{
		int                            channelToRemove;
	} params = {};

	params.channelToRemove = channelToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerAddChannel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            channelToAdd                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::ServerAddChannel(int channelToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerAddChannel"));

	struct
	{
		int                            channelToAdd;
	} params = {};

	params.channelToAdd = channelToAdd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCServerUpdatePosAudioComp
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector                 worldPos                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::RPCServerUpdatePosAudioComp(const struct FVector& worldPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCServerUpdatePosAudioComp"));

	struct
	{
		struct FVector                 worldPos;
	} params = {};

	params.worldPos = worldPos;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientSetMicrophoneVolume
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::RPCClientSetMicrophoneVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientSetMicrophoneVolume"));

	struct
	{
		float                          Volume;
	} params = {};

	params.Volume = Volume;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientAskRemoveChannel
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// int                            channelToRemove                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::RPCClientAskRemoveChannel(int channelToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientAskRemoveChannel"));

	struct
	{
		int                            channelToRemove;
	} params = {};

	params.channelToRemove = channelToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientAskAddChannel
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// int                            channelToAdd                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::RPCClientAskAddChannel(int channelToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientAskAddChannel"));

	struct
	{
		int                            channelToAdd;
	} params = {};

	params.channelToAdd = channelToAdd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyVoiceVolume
// (FUNC_Final, FUNC_Native, FUNC_Public)

void APlayerVoiceChatActor::RepNotifyVoiceVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyVoiceVolume"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyMicComp
// (FUNC_Final, FUNC_Native, FUNC_Public)

void APlayerVoiceChatActor::RepNotifyMicComp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyMicComp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyAttenuationAsset
// (FUNC_Final, FUNC_Native, FUNC_Public)

void APlayerVoiceChatActor::RepNotifyAttenuationAsset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyAttenuationAsset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.muteAudio
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           isMute                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::muteAudio(bool isMute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.muteAudio"));

	struct
	{
		bool                           isMute;
	} params = {};

	params.isMute = isMute;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.PlayerVoiceChatActor.DelegateEndPlayOwner
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class AActor*                  act                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APlayerVoiceChatActor::DelegateEndPlayOwner(class AActor* act, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.PlayerVoiceChatActor.DelegateEndPlayOwner"));

	struct
	{
		class AActor*                  act;
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.act = act;
	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatWasInitAudioVoiceChatQuality
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatWasInitAudioVoiceChatQuality()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatWasInitAudioVoiceChatQuality"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatStopSpeak
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatStopSpeak()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatStopSpeak"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatStartSpeak
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           _shouldHearMyOwnVoice          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           isGlobal                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            radioChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           useProximity                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          maxProximityRange              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatStartSpeak(bool _shouldHearMyOwnVoice, bool isGlobal, int radioChannel, bool useProximity, float maxProximityRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatStartSpeak"));

	struct
	{
		bool                           _shouldHearMyOwnVoice;
		bool                           isGlobal;
		int                            radioChannel;
		bool                           useProximity;
		float                          maxProximityRange;
		bool                           ReturnValue;
	} params = {};

	params._shouldHearMyOwnVoice = _shouldHearMyOwnVoice;
	params.isGlobal = isGlobal;
	params.radioChannel = radioChannel;
	params.useProximity = useProximity;
	params.maxProximityRange = maxProximityRange;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatSetMicrophoneVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatSetMicrophoneVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatSetMicrophoneVolume"));

	struct
	{
		float                          Volume;
		bool                           ReturnValue;
	} params = {};

	params.Volume = Volume;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatRemoveChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            channelToRemove                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatRemoveChannel(int channelToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatRemoveChannel"));

	struct
	{
		int                            channelToRemove;
		bool                           ReturnValue;
	} params = {};

	params.channelToRemove = channelToRemove;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatLocalMuteSomeone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerState*            playerToMute                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           shouldMute                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUniversalVoiceChat::VoiceChatLocalMuteSomeone(class UObject* WorldContextObject, class APlayerState* playerToMute, bool shouldMute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatLocalMuteSomeone"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerState*            playerToMute;
		bool                           shouldMute;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.playerToMute = playerToMute;
	params.shouldMute = shouldMute;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatLocalIsMutedSomeone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerState*            playerToCheckMute              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatLocalIsMutedSomeone(class UObject* WorldContextObject, class APlayerState* playerToCheckMute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatLocalIsMutedSomeone"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerState*            playerToCheckMute;
		bool                           ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.playerToCheckMute = playerToCheckMute;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatInitAudioVoiceChatQuality
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            _sampleRate                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            _numChannels                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatInitAudioVoiceChatQuality(int _sampleRate, int _numChannels)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatInitAudioVoiceChatQuality"));

	struct
	{
		int                            _sampleRate;
		int                            _numChannels;
		bool                           ReturnValue;
	} params = {};

	params._sampleRate = _sampleRate;
	params._numChannels = _numChannels;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatHasMicrophonePermission
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatHasMicrophonePermission()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatHasMicrophonePermission"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatGetMyLocalPlayerVoiceChat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerVoiceChatActor*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APlayerVoiceChatActor* UUniversalVoiceChat::VoiceChatGetMyLocalPlayerVoiceChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatGetMyLocalPlayerVoiceChat"));

	struct
	{
		class APlayerVoiceChatActor*   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatCheckRegisteredToChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            channelToCheck                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatCheckRegisteredToChannel(int channelToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatCheckRegisteredToChannel"));

	struct
	{
		int                            channelToCheck;
		bool                           ReturnValue;
	} params = {};

	params.channelToCheck = channelToCheck;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatAskMicrophonePermission
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UUniversalVoiceChat::VoiceChatAskMicrophonePermission()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatAskMicrophonePermission"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatAddChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            channelToAdd                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUniversalVoiceChat::VoiceChatAddChannel(int channelToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatAddChannel"));

	struct
	{
		int                            channelToAdd;
		bool                           ReturnValue;
	} params = {};

	params.channelToAdd = channelToAdd;

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
