#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VaRest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VaRest.VaRestJsonObject
// 0x0010 (0x0038 - 0x0028)
class UVaRestJsonObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VaRest.VaRestJsonObject"));
		return ptr;
	}


	bool WriteToFilePath(const struct FString& Path, bool bIsRelativeToProjectDir);
	void SetStringField(const struct FString& FieldName, const struct FString& StringValue);
	void SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray);
	void SetObjectField(const struct FString& FieldName, class UVaRestJsonObject* JsonObject);
	void SetObjectArrayField(const struct FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray);
	void SetNumberField(const struct FString& FieldName, float Number);
	void SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray);
	void SetMapFields_uint8(TMap<struct FString, unsigned char> Fields);
	void SetMapFields_string(TMap<struct FString, struct FString> Fields);
	void SetMapFields_int64(TMap<struct FString, int64_t> Fields);
	void SetMapFields_int32(TMap<struct FString, int> Fields);
	void SetMapFields_bool(TMap<struct FString, bool> Fields);
	void SetIntegerField(const struct FString& FieldName, int Number);
	void SetInt64Field(const struct FString& FieldName, int64_t Number);
	void SetField(const struct FString& FieldName, class UVaRestJsonValue* JsonValue);
	void SetBoolField(const struct FString& FieldName, bool InValue);
	void SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray);
	void SetArrayField(const struct FString& FieldName, TArray<class UVaRestJsonValue*> inArray);
	void Reset();
	void RemoveField(const struct FString& FieldName);
	void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const struct FString& FieldName);
	struct FString GetStringField(const struct FString& FieldName);
	TArray<struct FString> GetStringArrayField(const struct FString& FieldName);
	class UVaRestJsonObject* GetObjectField(const struct FString& FieldName);
	TArray<class UVaRestJsonObject*> GetObjectArrayField(const struct FString& FieldName);
	float GetNumberField(const struct FString& FieldName);
	TArray<float> GetNumberArrayField(const struct FString& FieldName);
	int GetIntegerField(const struct FString& FieldName);
	TArray<int> GetIntegerArrayField(const struct FString& FieldName);
	int64_t GetInt64Field(const struct FString& FieldName);
	TArray<struct FString> GetFieldNames();
	class UVaRestJsonValue* GetField(const struct FString& FieldName);
	bool GetBoolField(const struct FString& FieldName);
	TArray<bool> GetBoolArrayField(const struct FString& FieldName);
	TArray<class UVaRestJsonValue*> GetArrayField(const struct FString& FieldName);
	struct FString EncodeJsonToSingleString();
	struct FString EncodeJson();
	bool DecodeJson(const struct FString& JsonString, bool bUseIncrementalParser);
};


// Class VaRest.VaRestJsonValue
// 0x0010 (0x0038 - 0x0028)
class UVaRestJsonValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VaRest.VaRestJsonValue"));
		return ptr;
	}


	void Reset();
	bool IsNull();
	struct FString GetTypeString();
	EVaJson GetType();
	struct FString AsString();
	class UVaRestJsonObject* AsObject();
	float AsNumber();
	int64_t AsInt64();
	int AsInt32();
	bool AsBool();
	TArray<class UVaRestJsonValue*> AsArray();
};


// Class VaRest.VaRestLibrary
// 0x0000 (0x0028 - 0x0028)
class UVaRestLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VaRest.VaRestLibrary"));
		return ptr;
	}


	static struct FString StringToSha1(const struct FString& StringToHash);
	static struct FString StringToMd5(const struct FString& StringToHash);
	static struct FString PercentEncode(const struct FString& Source);
	static TEnumAsByte<EVaRestHttpStatusCode> HTTPStatusIntToEnum(int StatusCode);
	static struct FVaRestURL GetWorldURL(class UObject* WorldContextObject);
	static struct FString GetVaRestVersion();
	static class UVaRestSettings* GetVaRestSettings();
	static bool Base64EncodeData(TArray<unsigned char> Data, struct FString* Dest);
	static struct FString Base64Encode(const struct FString& Source);
	static bool Base64DecodeData(const struct FString& Source, TArray<unsigned char>* Dest);
	static bool Base64Decode(const struct FString& Source, struct FString* Dest);
};


// Class VaRest.VaRestRequestJSON
// 0x01A0 (0x01C8 - 0x0028)
class UVaRestRequestJSON : public UObject
{
public:
	struct FMulticastScriptDelegate                    OnRequestComplete;                                        // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnRequestFail;                                            // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET
	int                                                ResponseSize;                                             // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     ResponseContent;                                          // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsValidJsonResponse;                                     // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
	class UVaRestJsonObject*                           RequestJsonObj;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET
	class UVaRestJsonObject*                           ResponseJsonObj;                                          // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UVaRestJsonValue*                            ResponseJsonValue;                                        // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0xD0];                                      // 0x00F8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VaRest.VaRestRequestJSON"));
		return ptr;
	}


	void SetVerb(EVaRestRequestVerb Verb);
	void SetURL(const struct FString& URL);
	void SetStringRequestContent(const struct FString& Content);
	void SetResponseObject(class UVaRestJsonObject* JsonObject);
	void SetRequestObject(class UVaRestJsonObject* JsonObject);
	void SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	void SetCustomVerb(const struct FString& Verb);
	void SetContentType(EVaRestRequestContentType ContentType);
	void SetBinaryRequestContent(TArray<unsigned char> Content);
	void SetBinaryContentType(const struct FString& ContentType);
	void ResetResponseData();
	void ResetRequestData();
	void ResetData();
	int RemoveTag(const struct FName& Tag);
	void ProcessURL(const struct FString& URL);
	bool HasTag(const struct FName& Tag);
	EVaRestRequestVerb GetVerb();
	struct FString GetURL();
	EVaRestRequestStatus GetStatus();
	class UVaRestJsonValue* GetResponseValue();
	class UVaRestJsonObject* GetResponseObject();
	struct FString GetResponseHeader(const struct FString& HeaderName);
	struct FString GetResponseContentAsString(bool bCacheResponseContent);
	int GetResponseCode();
	class UVaRestJsonObject* GetRequestObject();
	TArray<struct FString> GetAllResponseHeaders();
	void ExecuteProcessRequest();
	void Cancel();
	void ApplyURL(const struct FString& URL, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UVaRestJsonObject** Result);
	void AddTag(const struct FName& Tag);
};


// Class VaRest.VaRestSettings
// 0x0008 (0x0030 - 0x0028)
class UVaRestSettings : public UObject
{
public:
	bool                                               bExtendedLog;                                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseChunkedParser;                                        // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VaRest.VaRestSettings"));
		return ptr;
	}

};


// Class VaRest.VaRestSubsystem
// 0x0050 (0x0080 - 0x0030)
class UVaRestSubsystem : public UEngineSubsystem
{
public:
	TMap<class UVaRestRequestJSON*, struct FVaRestCallResponse> RequestMap;                                               // 0x0030(0x0050) (CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VaRest.VaRestSubsystem"));
		return ptr;
	}


	static class UVaRestJsonObject* StaticConstructVaRestJsonObject();
	class UVaRestJsonObject* LoadJsonFromFile(const struct FString& Path, bool bIsRelativeToContentDir);
	class UVaRestJsonValue* DecodeJsonValue(const struct FString& JsonString);
	class UVaRestJsonObject* DecodeJsonObject(const struct FString& JsonString);
	class UVaRestRequestJSON* ConstructVaRestRequestExt(EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType);
	class UVaRestRequestJSON* ConstructVaRestRequest();
	class UVaRestJsonObject* ConstructVaRestJsonObject();
	class UVaRestJsonValue* ConstructJsonValueString(const struct FString& StringValue);
	class UVaRestJsonValue* ConstructJsonValueObject(class UVaRestJsonObject* JsonObject);
	class UVaRestJsonValue* ConstructJsonValueNumber(float Number);
	class UVaRestJsonValue* ConstructJsonValueBool(bool InValue);
	class UVaRestJsonValue* ConstructJsonValueArray(TArray<class UVaRestJsonValue*> inArray);
	void CallURL(const struct FString& URL, EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
