#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UniversalVoiceChatPro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UniversalVoiceChatPro.AudioCaptureAndroid
// 0x0000 (0x0028 - 0x0028)
class UAudioCaptureAndroid : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UniversalVoiceChatPro.AudioCaptureAndroid"));
		return ptr;
	}


	static void AndroidMicrophoneStop(class UMicrophoneSpeakComponent* callbackComp);
	static bool AndroidMicrophoneStart(class UMicrophoneSpeakComponent* callbackComp, int sampleRateToUse);
	static bool AndroidHasPermission();
	static void AndroidAskPermission();
};


// Class UniversalVoiceChatPro.MicrophoneSpeakComponent
// 0x0130 (0x01E0 - 0x00B0)
class UMicrophoneSpeakComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnDataMicrophoneReceived;                                 // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET
	class UAudioComponent*                             VoiceCaptureAudioComponent;                               // 0x00E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundWaveProcedural*                        VoiceCaptureSoundWaveProcedural;                          // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x00F8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UniversalVoiceChatPro.MicrophoneSpeakComponent"));
		return ptr;
	}


	bool startSpeaking(bool _shouldHearMyOwnVoice, bool isGlobal, int radioChannel, bool useRange, float MaxRange);
	void SetVoiceVolume(float Volume);
	void setAttenuationAssetPath(bool enableAttenuation, const struct FString& _pathToAttenuationAsset);
	void RPCServerBroadcastVoiceData(TArray<unsigned char> Data, int SampleRate, int NumChannels, int PCMSize);
	void RPCReceiveVoiceFromServer(class UMicrophoneSpeakComponent* compToOutputVoice, TArray<unsigned char> dataEncoded, int SampleRate, int NumChannels, int PCMSize);
	void RPCClientTransmitVoiceData(TArray<unsigned char> Data, int SampleRate, int NumChannels, int PCMSize, bool _isGlobal, int _radioChannel, bool _useRange, float _maxRange);
	void payloadReceivedVoiceData(TArray<unsigned char> dataEncoded, int SampleRate, int NumChannels, int PCMSize);
	void muteAudio(bool _isMuted);
	bool isPlayingAudioVoice();
	bool initAudioResources(int voiceSampleRate, int _voiceNumChannels);
	void endSpeaking();
	void DataMicrophoneReceived__DelegateSignature(TArray<unsigned char> Data);
};


// Class UniversalVoiceChatPro.PlayerVoiceChatActor
// 0x0048 (0x0268 - 0x0220)
class APlayerVoiceChatActor : public AActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMicrophoneSpeakComponent*                   MicrophoneSpeakComponent;                                 // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class APlayerState*                                ownerPlayerState;                                         // 0x0230(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                idVoiceChat;                                              // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              voiceVolume;                                              // 0x023C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        radioChannelSubscribed;                                   // 0x0240(0x0010) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	struct FString                                     pathToAttenuationAsset;                                   // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_RepNotify, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ServerPerformAntiCheat;                                   // 0x0260(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AntiCheatAllowUseProximity;                               // 0x0261(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AntiCheatAllowUseGlobal;                                  // 0x0262(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0263(0x0001) MISSED OFFSET
	float                                              AntiCheatMaxProximityRange;                               // 0x0264(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UniversalVoiceChatPro.PlayerVoiceChatActor"));
		return ptr;
	}


	void ServerSetMaxProximityRange(float _maxProximityRange);
	void ServerSetAttenuation(bool enableAttenuation, const struct FString& _pathToAttenuationAsset);
	void ServerSetAllowUseProximity(bool _allowUseRange);
	void ServerSetAllowUseGlobal(bool _allowUseGlobal);
	void ServerRemoveChannel(int channelToRemove);
	void ServerAddChannel(int channelToAdd);
	void RPCServerUpdatePosAudioComp(const struct FVector& worldPos);
	void RPCClientSetMicrophoneVolume(float Volume);
	void RPCClientAskRemoveChannel(int channelToRemove);
	void RPCClientAskAddChannel(int channelToAdd);
	void RepNotifyVoiceVolume();
	void RepNotifyMicComp();
	void RepNotifyAttenuationAsset();
	void muteAudio(bool isMute);
	void DelegateEndPlayOwner(class AActor* act, TEnumAsByte<EEndPlayReason> EndPlayReason);
};


// Class UniversalVoiceChatPro.UniversalVoiceChat
// 0x0000 (0x0028 - 0x0028)
class UUniversalVoiceChat : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UniversalVoiceChatPro.UniversalVoiceChat"));
		return ptr;
	}


	static bool VoiceChatWasInitAudioVoiceChatQuality();
	static bool VoiceChatStopSpeak();
	static bool VoiceChatStartSpeak(bool _shouldHearMyOwnVoice, bool isGlobal, int radioChannel, bool useProximity, float maxProximityRange);
	static bool VoiceChatSetMicrophoneVolume(float Volume);
	static bool VoiceChatRemoveChannel(int channelToRemove);
	static void VoiceChatLocalMuteSomeone(class UObject* WorldContextObject, class APlayerState* playerToMute, bool shouldMute);
	static bool VoiceChatLocalIsMutedSomeone(class UObject* WorldContextObject, class APlayerState* playerToCheckMute);
	static bool VoiceChatInitAudioVoiceChatQuality(int _sampleRate, int _numChannels);
	static bool VoiceChatHasMicrophonePermission();
	static class APlayerVoiceChatActor* VoiceChatGetMyLocalPlayerVoiceChat();
	static bool VoiceChatCheckRegisteredToChannel(int channelToCheck);
	static void VoiceChatAskMicrophonePermission();
	static bool VoiceChatAddChannel(int channelToAdd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
