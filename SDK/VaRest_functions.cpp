// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VaRest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VaRest.VaRestJsonObject.WriteToFilePath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsRelativeToProjectDir        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestJsonObject::WriteToFilePath(const struct FString& Path, bool bIsRelativeToProjectDir)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.WriteToFilePath"));

	struct
	{
		struct FString                 Path;
		bool                           bIsRelativeToProjectDir;
		bool                           ReturnValue;
	} params = {};

	params.Path = Path;
	params.bIsRelativeToProjectDir = bIsRelativeToProjectDir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.SetStringField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 StringValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetStringField(const struct FString& FieldName, const struct FString& StringValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetStringField"));

	struct
	{
		struct FString                 FieldName;
		struct FString                 StringValue;
	} params = {};

	params.FieldName = FieldName;
	params.StringValue = StringValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetStringArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         StringArray                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetStringArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<struct FString>         StringArray;
	} params = {};

	params.FieldName = FieldName;
	params.StringArray = StringArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetObjectField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       JsonObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetObjectField(const struct FString& FieldName, class UVaRestJsonObject* JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetObjectField"));

	struct
	{
		struct FString                 FieldName;
		class UVaRestJsonObject*       JsonObject;
	} params = {};

	params.FieldName = FieldName;
	params.JsonObject = JsonObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetObjectArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*> ObjectArray                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetObjectArrayField(const struct FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetObjectArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<class UVaRestJsonObject*> ObjectArray;
	} params = {};

	params.FieldName = FieldName;
	params.ObjectArray = ObjectArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetNumberField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Number                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetNumberField(const struct FString& FieldName, float Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetNumberField"));

	struct
	{
		struct FString                 FieldName;
		float                          Number;
	} params = {};

	params.FieldName = FieldName;
	params.Number = Number;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetNumberArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  NumberArray                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetNumberArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<float>                  NumberArray;
	} params = {};

	params.FieldName = FieldName;
	params.NumberArray = NumberArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetMapFields_uint8
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TMap<struct FString, unsigned char> Fields                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_uint8(TMap<struct FString, unsigned char> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetMapFields_uint8"));

	struct
	{
		TMap<struct FString, unsigned char> Fields;
	} params = {};

	params.Fields = Fields;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetMapFields_string
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TMap<struct FString, struct FString> Fields                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_string(TMap<struct FString, struct FString> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetMapFields_string"));

	struct
	{
		TMap<struct FString, struct FString> Fields;
	} params = {};

	params.Fields = Fields;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetMapFields_int64
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TMap<struct FString, int64_t>  Fields                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_int64(TMap<struct FString, int64_t> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetMapFields_int64"));

	struct
	{
		TMap<struct FString, int64_t>  Fields;
	} params = {};

	params.Fields = Fields;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetMapFields_int32
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TMap<struct FString, int>      Fields                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_int32(TMap<struct FString, int> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetMapFields_int32"));

	struct
	{
		TMap<struct FString, int>      Fields;
	} params = {};

	params.Fields = Fields;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetMapFields_bool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TMap<struct FString, bool>     Fields                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_bool(TMap<struct FString, bool> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetMapFields_bool"));

	struct
	{
		TMap<struct FString, bool>     Fields;
	} params = {};

	params.Fields = Fields;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetIntegerField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Number                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetIntegerField(const struct FString& FieldName, int Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetIntegerField"));

	struct
	{
		struct FString                 FieldName;
		int                            Number;
	} params = {};

	params.FieldName = FieldName;
	params.Number = Number;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetInt64Field
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        Number                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetInt64Field(const struct FString& FieldName, int64_t Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetInt64Field"));

	struct
	{
		struct FString                 FieldName;
		int64_t                        Number;
	} params = {};

	params.FieldName = FieldName;
	params.Number = Number;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        JsonValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetField(const struct FString& FieldName, class UVaRestJsonValue* JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetField"));

	struct
	{
		struct FString                 FieldName;
		class UVaRestJsonValue*        JsonValue;
	} params = {};

	params.FieldName = FieldName;
	params.JsonValue = JsonValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetBoolField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetBoolField(const struct FString& FieldName, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetBoolField"));

	struct
	{
		struct FString                 FieldName;
		bool                           InValue;
	} params = {};

	params.FieldName = FieldName;
	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetBoolArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<bool>                   BoolArray                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetBoolArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<bool>                   BoolArray;
	} params = {};

	params.FieldName = FieldName;
	params.BoolArray = BoolArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.SetArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*> inArray                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetArrayField(const struct FString& FieldName, TArray<class UVaRestJsonValue*> inArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.SetArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<class UVaRestJsonValue*> inArray;
	} params = {};

	params.FieldName = FieldName;
	params.inArray = inArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.Reset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVaRestJsonObject::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.RemoveField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::RemoveField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.RemoveField"));

	struct
	{
		struct FString                 FieldName;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.MergeJsonObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       InJsonObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Overwrite                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestJsonObject::MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.MergeJsonObject"));

	struct
	{
		class UVaRestJsonObject*       InJsonObject;
		bool                           Overwrite;
	} params = {};

	params.InJsonObject = InJsonObject;
	params.Overwrite = Overwrite;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonObject.HasField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestJsonObject::HasField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.HasField"));

	struct
	{
		struct FString                 FieldName;
		bool                           ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetStringField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestJsonObject::GetStringField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetStringField"));

	struct
	{
		struct FString                 FieldName;
		struct FString                 ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetStringArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UVaRestJsonObject::GetStringArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetStringArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<struct FString>         ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetObjectField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetObjectField"));

	struct
	{
		struct FString                 FieldName;
		class UVaRestJsonObject*       ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetObjectArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetObjectArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<class UVaRestJsonObject*> ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetNumberField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UVaRestJsonObject::GetNumberField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetNumberField"));

	struct
	{
		struct FString                 FieldName;
		float                          ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetNumberArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<float> UVaRestJsonObject::GetNumberArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetNumberArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<float>                  ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetIntegerField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UVaRestJsonObject::GetIntegerField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetIntegerField"));

	struct
	{
		struct FString                 FieldName;
		int                            ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetIntegerArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<int> UVaRestJsonObject::GetIntegerArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetIntegerArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<int>                    ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetInt64Field
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int64_t UVaRestJsonObject::GetInt64Field(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetInt64Field"));

	struct
	{
		struct FString                 FieldName;
		int64_t                        ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetFieldNames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UVaRestJsonObject::GetFieldNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetFieldNames"));

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestJsonObject::GetField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetField"));

	struct
	{
		struct FString                 FieldName;
		class UVaRestJsonValue*        ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetBoolField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestJsonObject::GetBoolField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetBoolField"));

	struct
	{
		struct FString                 FieldName;
		bool                           ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetBoolArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<bool>                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<bool> UVaRestJsonObject::GetBoolArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetBoolArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<bool>                   ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.GetArrayField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 FieldName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.GetArrayField"));

	struct
	{
		struct FString                 FieldName;
		TArray<class UVaRestJsonValue*> ReturnValue;
	} params = {};

	params.FieldName = FieldName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.EncodeJsonToSingleString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestJsonObject::EncodeJsonToSingleString()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.EncodeJsonToSingleString"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.EncodeJson
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestJsonObject::EncodeJson()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.EncodeJson"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonObject.DecodeJson
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseIncrementalParser          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestJsonObject::DecodeJson(const struct FString& JsonString, bool bUseIncrementalParser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonObject.DecodeJson"));

	struct
	{
		struct FString                 JsonString;
		bool                           bUseIncrementalParser;
		bool                           ReturnValue;
	} params = {};

	params.JsonString = JsonString;
	params.bUseIncrementalParser = bUseIncrementalParser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonValue.Reset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVaRestJsonValue::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestJsonValue.IsNull
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestJsonValue::IsNull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.IsNull"));

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


// Function VaRest.VaRestJsonValue.GetTypeString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestJsonValue::GetTypeString()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.GetTypeString"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonValue.GetType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EVaJson                        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EVaJson UVaRestJsonValue::GetType()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.GetType"));

	struct
	{
		EVaJson                        ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonValue.AsString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestJsonValue::AsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.AsString"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonValue.AsObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestJsonValue::AsObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.AsObject"));

	struct
	{
		class UVaRestJsonObject*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonValue.AsNumber
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UVaRestJsonValue::AsNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.AsNumber"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonValue.AsInt64
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int64_t UVaRestJsonValue::AsInt64()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.AsInt64"));

	struct
	{
		int64_t                        ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonValue.AsInt32
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UVaRestJsonValue::AsInt32()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.AsInt32"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestJsonValue.AsBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestJsonValue::AsBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.AsBool"));

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


// Function VaRest.VaRestJsonValue.AsArray
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UVaRestJsonValue*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestJsonValue.AsArray"));

	struct
	{
		TArray<class UVaRestJsonValue*> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.StringToSha1
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 StringToHash                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestLibrary::StringToSha1(const struct FString& StringToHash)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.StringToSha1"));

	struct
	{
		struct FString                 StringToHash;
		struct FString                 ReturnValue;
	} params = {};

	params.StringToHash = StringToHash;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.StringToMd5
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 StringToHash                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestLibrary::StringToMd5(const struct FString& StringToHash)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.StringToMd5"));

	struct
	{
		struct FString                 StringToHash;
		struct FString                 ReturnValue;
	} params = {};

	params.StringToHash = StringToHash;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.PercentEncode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestLibrary::PercentEncode(const struct FString& Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.PercentEncode"));

	struct
	{
		struct FString                 Source;
		struct FString                 ReturnValue;
	} params = {};

	params.Source = Source;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.HTTPStatusIntToEnum
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            StatusCode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EVaRestHttpStatusCode> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TEnumAsByte<EVaRestHttpStatusCode> UVaRestLibrary::HTTPStatusIntToEnum(int StatusCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.HTTPStatusIntToEnum"));

	struct
	{
		int                            StatusCode;
		TEnumAsByte<EVaRestHttpStatusCode> ReturnValue;
	} params = {};

	params.StatusCode = StatusCode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.GetWorldURL
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVaRestURL              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FVaRestURL UVaRestLibrary::GetWorldURL(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.GetWorldURL"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVaRestURL              ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.GetVaRestVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestLibrary::GetVaRestVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.GetVaRestVersion"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.GetVaRestSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UVaRestSettings*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestSettings* UVaRestLibrary::GetVaRestSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.GetVaRestSettings"));

	struct
	{
		class UVaRestSettings*         ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.Base64EncodeData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 Dest                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64EncodeData(TArray<unsigned char> Data, struct FString* Dest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.Base64EncodeData"));

	struct
	{
		TArray<unsigned char>          Data;
		struct FString                 Dest;
		bool                           ReturnValue;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Dest != nullptr)
		*Dest = params.Dest;

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.Base64Encode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestLibrary::Base64Encode(const struct FString& Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.Base64Encode"));

	struct
	{
		struct FString                 Source;
		struct FString                 ReturnValue;
	} params = {};

	params.Source = Source;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.Base64DecodeData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<unsigned char>          Dest                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64DecodeData(const struct FString& Source, TArray<unsigned char>* Dest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.Base64DecodeData"));

	struct
	{
		struct FString                 Source;
		TArray<unsigned char>          Dest;
		bool                           ReturnValue;
	} params = {};

	params.Source = Source;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Dest != nullptr)
		*Dest = params.Dest;

	return params.ReturnValue;
}


// Function VaRest.VaRestLibrary.Base64Decode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Dest                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64Decode(const struct FString& Source, struct FString* Dest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestLibrary.Base64Decode"));

	struct
	{
		struct FString                 Source;
		struct FString                 Dest;
		bool                           ReturnValue;
	} params = {};

	params.Source = Source;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Dest != nullptr)
		*Dest = params.Dest;

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.SetVerb
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EVaRestRequestVerb             Verb                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetVerb(EVaRestRequestVerb Verb)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetVerb"));

	struct
	{
		EVaRestRequestVerb             Verb;
	} params = {};

	params.Verb = Verb;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetURL
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetURL(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetURL"));

	struct
	{
		struct FString                 URL;
	} params = {};

	params.URL = URL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetStringRequestContent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetStringRequestContent(const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetStringRequestContent"));

	struct
	{
		struct FString                 Content;
	} params = {};

	params.Content = Content;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetResponseObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetResponseObject(class UVaRestJsonObject* JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetResponseObject"));

	struct
	{
		class UVaRestJsonObject*       JsonObject;
	} params = {};

	params.JsonObject = JsonObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetRequestObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetRequestObject(class UVaRestJsonObject* JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetRequestObject"));

	struct
	{
		class UVaRestJsonObject*       JsonObject;
	} params = {};

	params.JsonObject = JsonObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetHeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 HeaderValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetHeader"));

	struct
	{
		struct FString                 HeaderName;
		struct FString                 HeaderValue;
	} params = {};

	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetCustomVerb
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Verb                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetCustomVerb(const struct FString& Verb)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetCustomVerb"));

	struct
	{
		struct FString                 Verb;
	} params = {};

	params.Verb = Verb;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetContentType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EVaRestRequestContentType      ContentType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetContentType(EVaRestRequestContentType ContentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetContentType"));

	struct
	{
		EVaRestRequestContentType      ContentType;
	} params = {};

	params.ContentType = ContentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetBinaryRequestContent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Content                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetBinaryRequestContent(TArray<unsigned char> Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetBinaryRequestContent"));

	struct
	{
		TArray<unsigned char>          Content;
	} params = {};

	params.Content = Content;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.SetBinaryContentType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ContentType                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetBinaryContentType(const struct FString& ContentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.SetBinaryContentType"));

	struct
	{
		struct FString                 ContentType;
	} params = {};

	params.ContentType = ContentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.ResetResponseData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVaRestRequestJSON::ResetResponseData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.ResetResponseData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.ResetRequestData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVaRestRequestJSON::ResetRequestData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.ResetRequestData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.ResetData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVaRestRequestJSON::ResetData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.ResetData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.RemoveTag
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UVaRestRequestJSON::RemoveTag(const struct FName& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.RemoveTag"));

	struct
	{
		struct FName                   Tag;
		int                            ReturnValue;
	} params = {};

	params.Tag = Tag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.ProcessURL
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::ProcessURL(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.ProcessURL"));

	struct
	{
		struct FString                 URL;
	} params = {};

	params.URL = URL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.HasTag
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVaRestRequestJSON::HasTag(const struct FName& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.HasTag"));

	struct
	{
		struct FName                   Tag;
		bool                           ReturnValue;
	} params = {};

	params.Tag = Tag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetVerb
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EVaRestRequestVerb             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EVaRestRequestVerb UVaRestRequestJSON::GetVerb()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetVerb"));

	struct
	{
		EVaRestRequestVerb             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetURL
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestRequestJSON::GetURL()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetURL"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetStatus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EVaRestRequestStatus           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EVaRestRequestStatus UVaRestRequestJSON::GetStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetStatus"));

	struct
	{
		EVaRestRequestStatus           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetResponseValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UVaRestJsonValue*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestRequestJSON::GetResponseValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetResponseValue"));

	struct
	{
		class UVaRestJsonValue*        ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetResponseObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetResponseObject"));

	struct
	{
		class UVaRestJsonObject*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetResponseHeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestRequestJSON::GetResponseHeader(const struct FString& HeaderName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetResponseHeader"));

	struct
	{
		struct FString                 HeaderName;
		struct FString                 ReturnValue;
	} params = {};

	params.HeaderName = HeaderName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetResponseContentAsString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bCacheResponseContent          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UVaRestRequestJSON::GetResponseContentAsString(bool bCacheResponseContent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetResponseContentAsString"));

	struct
	{
		bool                           bCacheResponseContent;
		struct FString                 ReturnValue;
	} params = {};

	params.bCacheResponseContent = bCacheResponseContent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetResponseCode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UVaRestRequestJSON::GetResponseCode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetResponseCode"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetRequestObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetRequestObject"));

	struct
	{
		class UVaRestJsonObject*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.GetAllResponseHeaders
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UVaRestRequestJSON::GetAllResponseHeaders()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.GetAllResponseHeaders"));

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestRequestJSON.ExecuteProcessRequest
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVaRestRequestJSON::ExecuteProcessRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.ExecuteProcessRequest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.Cancel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVaRestRequestJSON::Cancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.Cancel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestRequestJSON.ApplyURL
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::ApplyURL(const struct FString& URL, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UVaRestJsonObject** Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.ApplyURL"));

	struct
	{
		struct FString                 URL;
		class UVaRestJsonObject*       Result;
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
	} params = {};

	params.URL = URL;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function VaRest.VaRestRequestJSON.AddTag
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVaRestRequestJSON::AddTag(const struct FName& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestRequestJSON.AddTag"));

	struct
	{
		struct FName                   Tag;
	} params = {};

	params.Tag = Tag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestSubsystem::StaticConstructVaRestJsonObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject"));

	struct
	{
		class UVaRestJsonObject*       ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.LoadJsonFromFile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsRelativeToContentDir        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestSubsystem::LoadJsonFromFile(const struct FString& Path, bool bIsRelativeToContentDir)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.LoadJsonFromFile"));

	struct
	{
		struct FString                 Path;
		bool                           bIsRelativeToContentDir;
		class UVaRestJsonObject*       ReturnValue;
	} params = {};

	params.Path = Path;
	params.bIsRelativeToContentDir = bIsRelativeToContentDir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.DecodeJsonValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::DecodeJsonValue(const struct FString& JsonString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.DecodeJsonValue"));

	struct
	{
		struct FString                 JsonString;
		class UVaRestJsonValue*        ReturnValue;
	} params = {};

	params.JsonString = JsonString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.DecodeJsonObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestSubsystem::DecodeJsonObject(const struct FString& JsonString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.DecodeJsonObject"));

	struct
	{
		struct FString                 JsonString;
		class UVaRestJsonObject*       ReturnValue;
	} params = {};

	params.JsonString = JsonString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EVaRestRequestVerb             Verb                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EVaRestRequestContentType      ContentType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestRequestJSON*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestRequestJSON* UVaRestSubsystem::ConstructVaRestRequestExt(EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt"));

	struct
	{
		EVaRestRequestVerb             Verb;
		EVaRestRequestContentType      ContentType;
		class UVaRestRequestJSON*      ReturnValue;
	} params = {};

	params.Verb = Verb;
	params.ContentType = ContentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.ConstructVaRestRequest
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UVaRestRequestJSON*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestRequestJSON* UVaRestSubsystem::ConstructVaRestRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.ConstructVaRestRequest"));

	struct
	{
		class UVaRestRequestJSON*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestSubsystem::ConstructVaRestJsonObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject"));

	struct
	{
		class UVaRestJsonObject*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.ConstructJsonValueString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 StringValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueString(const struct FString& StringValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.ConstructJsonValueString"));

	struct
	{
		struct FString                 StringValue;
		class UVaRestJsonValue*        ReturnValue;
	} params = {};

	params.StringValue = StringValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.ConstructJsonValueObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueObject(class UVaRestJsonObject* JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.ConstructJsonValueObject"));

	struct
	{
		class UVaRestJsonObject*       JsonObject;
		class UVaRestJsonValue*        ReturnValue;
	} params = {};

	params.JsonObject = JsonObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.ConstructJsonValueNumber
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Number                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueNumber(float Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.ConstructJsonValueNumber"));

	struct
	{
		float                          Number;
		class UVaRestJsonValue*        ReturnValue;
	} params = {};

	params.Number = Number;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.ConstructJsonValueBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueBool(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.ConstructJsonValueBool"));

	struct
	{
		bool                           InValue;
		class UVaRestJsonValue*        ReturnValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.ConstructJsonValueArray
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UVaRestJsonValue*> inArray                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueArray(TArray<class UVaRestJsonValue*> inArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.ConstructJsonValueArray"));

	struct
	{
		TArray<class UVaRestJsonValue*> inArray;
		class UVaRestJsonValue*        ReturnValue;
	} params = {};

	params.inArray = inArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VaRest.VaRestSubsystem.CallURL
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EVaRestRequestVerb             Verb                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EVaRestRequestContentType      ContentType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       VaRestJson                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UVaRestSubsystem::CallURL(const struct FString& URL, EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VaRest.VaRestSubsystem.CallURL"));

	struct
	{
		struct FString                 URL;
		EVaRestRequestVerb             Verb;
		EVaRestRequestContentType      ContentType;
		class UVaRestJsonObject*       VaRestJson;
		struct FScriptDelegate         Callback;
	} params = {};

	params.URL = URL;
	params.Verb = Verb;
	params.ContentType = ContentType;
	params.VaRestJson = VaRestJson;
	params.Callback = Callback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
