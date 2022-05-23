// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DynamicDataTable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DynamicDataTable.RuntimeDataTableActor.UpdateArrayFromCSV_Info
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    ArrayToUpdate                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           Successful                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCSV_Info               CSVInfo                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           MatchStructMemberNames         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 OwningObject                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ARuntimeDataTableActor::UpdateArrayFromCSV_Info(TArray<int> ArrayToUpdate, const struct FCSV_Info& CSVInfo, bool MatchStructMemberNames, class UObject* OwningObject, bool* Successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.UpdateArrayFromCSV_Info"));

	struct
	{
		TArray<int>                    ArrayToUpdate;
		bool                           Successful;
		struct FCSV_Info               CSVInfo;
		bool                           MatchStructMemberNames;
		class UObject*                 OwningObject;
	} params = {};

	params.ArrayToUpdate = ArrayToUpdate;
	params.CSVInfo = CSVInfo;
	params.MatchStructMemberNames = MatchStructMemberNames;
	params.OwningObject = OwningObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Successful != nullptr)
		*Successful = params.Successful;
}


// Function DynamicDataTable.RuntimeDataTableActor.SaveStringToFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InDirectory                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Extension                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ARuntimeDataTableActor::SaveStringToFile(const struct FString& inString, const struct FString& InDirectory, const struct FString& Filename, const struct FString& Extension)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.SaveStringToFile"));

	struct
	{
		struct FString                 inString;
		struct FString                 InDirectory;
		struct FString                 Filename;
		struct FString                 Extension;
		bool                           ReturnValue;
	} params = {};

	params.inString = inString;
	params.InDirectory = InDirectory;
	params.Filename = Filename;
	params.Extension = Extension;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.RuntimeDataTableActor.LoadStringFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 InPath                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString ARuntimeDataTableActor::LoadStringFromFile(const struct FString& InPath, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.LoadStringFromFile"));

	struct
	{
		struct FString                 InPath;
		bool                           Success;
		struct FString                 ReturnValue;
	} params = {};

	params.InPath = InPath;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function DynamicDataTable.RuntimeDataTableActor.GetRowValueAsString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   RowKey                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString ARuntimeDataTableActor::GetRowValueAsString(const struct FString& ColumnName, const struct FName& RowKey, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.GetRowValueAsString"));

	struct
	{
		struct FString                 ColumnName;
		struct FName                   RowKey;
		bool                           Success;
		struct FString                 ReturnValue;
	} params = {};

	params.ColumnName = ColumnName;
	params.RowKey = RowKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function DynamicDataTable.RuntimeDataTableActor.GetMapKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FName> ARuntimeDataTableActor::GetMapKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.GetMapKeys"));

	struct
	{
		TArray<struct FName>           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.RuntimeDataTableActor.GetMapKeyIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int ARuntimeDataTableActor::GetMapKeyIndex(const struct FName& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.GetMapKeyIndex"));

	struct
	{
		struct FName                   Key;
		int                            ReturnValue;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.RuntimeDataTableActor.GetColumnAsStringArray
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> ARuntimeDataTableActor::GetColumnAsStringArray(const struct FString& ColumnName, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.GetColumnAsStringArray"));

	struct
	{
		struct FString                 ColumnName;
		bool                           Success;
		TArray<struct FString>         ReturnValue;
	} params = {};

	params.ColumnName = ColumnName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function DynamicDataTable.RuntimeDataTableActor.GetAllObjectVariableNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 Object                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IncludeInheritedVariables      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 MemberBlacklist                (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString ARuntimeDataTableActor::GetAllObjectVariableNames(class UObject* Object, bool IncludeInheritedVariables, const struct FString& MemberBlacklist)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.GetAllObjectVariableNames"));

	struct
	{
		class UObject*                 Object;
		bool                           IncludeInheritedVariables;
		struct FString                 MemberBlacklist;
		struct FString                 ReturnValue;
	} params = {};

	params.Object = Object;
	params.IncludeInheritedVariables = IncludeInheritedVariables;
	params.MemberBlacklist = MemberBlacklist;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.RuntimeDataTableActor.FillStructArrayFromGoogleSheetsOrLocalCSV
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    ArrayToUpdate                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         CallOnComplete                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 GoogleSheetURL                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 CSV_SavePath                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 BackupCSV_LoadPath             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           MatchStructMemberNames         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 OwningObject                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ARuntimeDataTableActor::FillStructArrayFromGoogleSheetsOrLocalCSV(TArray<int> ArrayToUpdate, const struct FScriptDelegate& CallOnComplete, const struct FString& GoogleSheetURL, const struct FString& CSV_SavePath, const struct FString& BackupCSV_LoadPath, bool MatchStructMemberNames, class UObject* OwningObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.FillStructArrayFromGoogleSheetsOrLocalCSV"));

	struct
	{
		TArray<int>                    ArrayToUpdate;
		struct FScriptDelegate         CallOnComplete;
		struct FString                 GoogleSheetURL;
		struct FString                 CSV_SavePath;
		struct FString                 BackupCSV_LoadPath;
		bool                           MatchStructMemberNames;
		class UObject*                 OwningObject;
	} params = {};

	params.ArrayToUpdate = ArrayToUpdate;
	params.CallOnComplete = CallOnComplete;
	params.GoogleSheetURL = GoogleSheetURL;
	params.CSV_SavePath = CSV_SavePath;
	params.BackupCSV_LoadPath = BackupCSV_LoadPath;
	params.MatchStructMemberNames = MatchStructMemberNames;
	params.OwningObject = OwningObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DynamicDataTable.RuntimeDataTableActor.ExportArrayToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    ArrayToExport                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 OutCSV_String                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           Keys                           (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 MembersToInclude               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 OwningObject                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ARuntimeDataTableActor::ExportArrayToString(TArray<int> ArrayToExport, TArray<struct FName> Keys, const struct FString& MembersToInclude, class UObject* OwningObject, struct FString* OutCSV_String)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.ExportArrayToString"));

	struct
	{
		TArray<int>                    ArrayToExport;
		struct FString                 OutCSV_String;
		TArray<struct FName>           Keys;
		struct FString                 MembersToInclude;
		class UObject*                 OwningObject;
	} params = {};

	params.ArrayToExport = ArrayToExport;
	params.Keys = Keys;
	params.MembersToInclude = MembersToInclude;
	params.OwningObject = OwningObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutCSV_String != nullptr)
		*OutCSV_String = params.OutCSV_String;
}


// Function DynamicDataTable.RuntimeDataTableActor.AutoGenerateKeys
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FName> ARuntimeDataTableActor::AutoGenerateKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.RuntimeDataTableActor.AutoGenerateKeys"));

	struct
	{
		TArray<struct FName>           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.SaveStringToFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InDirectory                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Extension                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UEasyCSV::SaveStringToFile(const struct FString& inString, const struct FString& InDirectory, const struct FString& Filename, const struct FString& Extension)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.SaveStringToFile"));

	struct
	{
		struct FString                 inString;
		struct FString                 InDirectory;
		struct FString                 Filename;
		struct FString                 Extension;
		bool                           ReturnValue;
	} params = {};

	params.inString = inString;
	params.InDirectory = InDirectory;
	params.Filename = Filename;
	params.Extension = Extension;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.ReplaceEscapedCharacters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UEasyCSV::ReplaceEscapedCharacters(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.ReplaceEscapedCharacters"));

	struct
	{
		struct FString                 inString;
		struct FString                 ReturnValue;
	} params = {};

	params.inString = inString;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.MakeCsvInfoStructFromString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCSV_Info               OutCsvInfo                     (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ParseHeaders                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ParseKeys                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DelimiterCharacter             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 WrapperCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UEasyCSV::MakeCsvInfoStructFromString(const struct FString& inString, bool ParseHeaders, bool ParseKeys, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter, struct FCSV_Info* OutCsvInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.MakeCsvInfoStructFromString"));

	struct
	{
		struct FString                 inString;
		struct FCSV_Info               OutCsvInfo;
		bool                           ParseHeaders;
		bool                           ParseKeys;
		struct FString                 DelimiterCharacter;
		struct FString                 WrapperCharacter;
		bool                           ReturnValue;
	} params = {};

	params.inString = inString;
	params.ParseHeaders = ParseHeaders;
	params.ParseKeys = ParseKeys;
	params.DelimiterCharacter = DelimiterCharacter;
	params.WrapperCharacter = WrapperCharacter;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutCsvInfo != nullptr)
		*OutCsvInfo = params.OutCsvInfo;

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.MakeCsvInfoStructFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InPath                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCSV_Info               OutCsvInfo                     (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ParseHeaders                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ParseKeys                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DelimiterCharacter             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 WrapperCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UEasyCSV::MakeCsvInfoStructFromFile(const struct FString& InPath, bool ParseHeaders, bool ParseKeys, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter, struct FCSV_Info* OutCsvInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.MakeCsvInfoStructFromFile"));

	struct
	{
		struct FString                 InPath;
		struct FCSV_Info               OutCsvInfo;
		bool                           ParseHeaders;
		bool                           ParseKeys;
		struct FString                 DelimiterCharacter;
		struct FString                 WrapperCharacter;
		bool                           ReturnValue;
	} params = {};

	params.InPath = InPath;
	params.ParseHeaders = ParseHeaders;
	params.ParseKeys = ParseKeys;
	params.DelimiterCharacter = DelimiterCharacter;
	params.WrapperCharacter = WrapperCharacter;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutCsvInfo != nullptr)
		*OutCsvInfo = params.OutCsvInfo;

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.MakeCSV_InfoFromString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ParseHeaders                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ParseKeys                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DelimiterCharacter             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 WrapperCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCSV_Info               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FCSV_Info UEasyCSV::MakeCSV_InfoFromString(const struct FString& inString, bool ParseHeaders, bool ParseKeys, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.MakeCSV_InfoFromString"));

	struct
	{
		struct FString                 inString;
		bool                           ParseHeaders;
		bool                           ParseKeys;
		struct FString                 DelimiterCharacter;
		struct FString                 WrapperCharacter;
		struct FCSV_Info               ReturnValue;
	} params = {};

	params.inString = inString;
	params.ParseHeaders = ParseHeaders;
	params.ParseKeys = ParseKeys;
	params.DelimiterCharacter = DelimiterCharacter;
	params.WrapperCharacter = WrapperCharacter;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.MakeCSV_InfoFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 InPath                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ParseHeaders                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ParseKeys                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DelimiterCharacter             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 WrapperCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCSV_Info               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FCSV_Info UEasyCSV::MakeCSV_InfoFromFile(const struct FString& InPath, bool ParseHeaders, bool ParseKeys, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.MakeCSV_InfoFromFile"));

	struct
	{
		struct FString                 InPath;
		bool                           ParseHeaders;
		bool                           ParseKeys;
		struct FString                 DelimiterCharacter;
		struct FString                 WrapperCharacter;
		struct FCSV_Info               ReturnValue;
	} params = {};

	params.InPath = InPath;
	params.ParseHeaders = ParseHeaders;
	params.ParseKeys = ParseKeys;
	params.DelimiterCharacter = DelimiterCharacter;
	params.WrapperCharacter = WrapperCharacter;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.LoadStringFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InPath                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UEasyCSV::LoadStringFromFile(const struct FString& InPath, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.LoadStringFromFile"));

	struct
	{
		struct FString                 InPath;
		bool                           Success;
		struct FString                 ReturnValue;
	} params = {};

	params.InPath = InPath;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.GetRowValueAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCSV_Info               CSV_Info                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   RowKey                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UEasyCSV::GetRowValueAsString(const struct FCSV_Info& CSV_Info, const struct FString& ColumnName, const struct FName& RowKey, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetRowValueAsString"));

	struct
	{
		struct FCSV_Info               CSV_Info;
		struct FString                 ColumnName;
		struct FName                   RowKey;
		bool                           Success;
		struct FString                 ReturnValue;
	} params = {};

	params.CSV_Info = CSV_Info;
	params.ColumnName = ColumnName;
	params.RowKey = RowKey;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.GetRowCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCSV_Info               CSV_Info                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UEasyCSV::GetRowCount(const struct FCSV_Info& CSV_Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetRowCount"));

	struct
	{
		struct FCSV_Info               CSV_Info;
		int                            ReturnValue;
	} params = {};

	params.CSV_Info = CSV_Info;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.GetRowAsStringArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCSV_Info               CSV_Info                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   RowKey                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UEasyCSV::GetRowAsStringArray(const struct FCSV_Info& CSV_Info, const struct FName& RowKey, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetRowAsStringArray"));

	struct
	{
		struct FCSV_Info               CSV_Info;
		struct FName                   RowKey;
		bool                           Success;
		TArray<struct FString>         ReturnValue;
	} params = {};

	params.CSV_Info = CSV_Info;
	params.RowKey = RowKey;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.GetMapKeys
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCSV_Info               CSV_Info                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FName> UEasyCSV::GetMapKeys(const struct FCSV_Info& CSV_Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetMapKeys"));

	struct
	{
		struct FCSV_Info               CSV_Info;
		TArray<struct FName>           ReturnValue;
	} params = {};

	params.CSV_Info = CSV_Info;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.GetMapKeyIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCSV_Info               CSV_Info                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   Key                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UEasyCSV::GetMapKeyIndex(const struct FCSV_Info& CSV_Info, const struct FName& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetMapKeyIndex"));

	struct
	{
		struct FCSV_Info               CSV_Info;
		struct FName                   Key;
		int                            ReturnValue;
	} params = {};

	params.CSV_Info = CSV_Info;
	params.Key = Key;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.GetMapHeaders
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCSV_Info               CSV_Info                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UEasyCSV::GetMapHeaders(const struct FCSV_Info& CSV_Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetMapHeaders"));

	struct
	{
		struct FCSV_Info               CSV_Info;
		TArray<struct FString>         ReturnValue;
	} params = {};

	params.CSV_Info = CSV_Info;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.GetFTextComponentsFromRepresentativeFString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Namespace                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Key                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SourceString                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UEasyCSV::GetFTextComponentsFromRepresentativeFString(const struct FString& inString, struct FString* Namespace, struct FString* Key, struct FString* SourceString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetFTextComponentsFromRepresentativeFString"));

	struct
	{
		struct FString                 inString;
		struct FString                 Namespace;
		struct FString                 Key;
		struct FString                 SourceString;
	} params = {};

	params.inString = inString;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Namespace != nullptr)
		*Namespace = params.Namespace;
	if (Key != nullptr)
		*Key = params.Key;
	if (SourceString != nullptr)
		*SourceString = params.SourceString;
}


// Function DynamicDataTable.EasyCSV.GetColumnCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCSV_Info               CSV_Info                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UEasyCSV::GetColumnCount(const struct FCSV_Info& CSV_Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetColumnCount"));

	struct
	{
		struct FCSV_Info               CSV_Info;
		int                            ReturnValue;
	} params = {};

	params.CSV_Info = CSV_Info;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.GetColumnAsStringArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCSV_Info               CSV_Info                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UEasyCSV::GetColumnAsStringArray(const struct FCSV_Info& CSV_Info, const struct FString& ColumnName, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.GetColumnAsStringArray"));

	struct
	{
		struct FCSV_Info               CSV_Info;
		struct FString                 ColumnName;
		bool                           Success;
		TArray<struct FString>         ReturnValue;
	} params = {};

	params.CSV_Info = CSV_Info;
	params.ColumnName = ColumnName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.EscapeCharacters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UEasyCSV::EscapeCharacters(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.EscapeCharacters"));

	struct
	{
		struct FString                 inString;
		struct FString                 ReturnValue;
	} params = {};

	params.inString = inString;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.DoesStringRepresentContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 WrapperCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UEasyCSV::DoesStringRepresentContainer(const struct FString& inString, const struct FString& WrapperCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.DoesStringRepresentContainer"));

	struct
	{
		struct FString                 inString;
		struct FString                 WrapperCharacter;
		bool                           ReturnValue;
	} params = {};

	params.inString = inString;
	params.WrapperCharacter = WrapperCharacter;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.ConvertStringToRotatorArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DelimiterCharacter             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 WrapperCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FRotator>        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FRotator> UEasyCSV::ConvertStringToRotatorArray(const struct FString& inString, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.ConvertStringToRotatorArray"));

	struct
	{
		struct FString                 inString;
		struct FString                 DelimiterCharacter;
		struct FString                 WrapperCharacter;
		TArray<struct FRotator>        ReturnValue;
	} params = {};

	params.inString = inString;
	params.DelimiterCharacter = DelimiterCharacter;
	params.WrapperCharacter = WrapperCharacter;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.ConvertStringToRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator UEasyCSV::ConvertStringToRotator(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.ConvertStringToRotator"));

	struct
	{
		struct FString                 inString;
		struct FRotator                ReturnValue;
	} params = {};

	params.inString = inString;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.ConvertStringToQuatArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DelimiterCharacter             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 WrapperCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FQuat>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FQuat> UEasyCSV::ConvertStringToQuatArray(const struct FString& inString, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.ConvertStringToQuatArray"));

	struct
	{
		struct FString                 inString;
		struct FString                 DelimiterCharacter;
		struct FString                 WrapperCharacter;
		TArray<struct FQuat>           ReturnValue;
	} params = {};

	params.inString = inString;
	params.DelimiterCharacter = DelimiterCharacter;
	params.WrapperCharacter = WrapperCharacter;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.ConvertStringToQuat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FQuat UEasyCSV::ConvertStringToQuat(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.ConvertStringToQuat"));

	struct
	{
		struct FString                 inString;
		struct FQuat                   ReturnValue;
	} params = {};

	params.inString = inString;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.ConvertQuatStringToRotatorArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DelimiterCharacter             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 WrapperCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FRotator>        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FRotator> UEasyCSV::ConvertQuatStringToRotatorArray(const struct FString& inString, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.ConvertQuatStringToRotatorArray"));

	struct
	{
		struct FString                 inString;
		struct FString                 DelimiterCharacter;
		struct FString                 WrapperCharacter;
		TArray<struct FRotator>        ReturnValue;
	} params = {};

	params.inString = inString;
	params.DelimiterCharacter = DelimiterCharacter;
	params.WrapperCharacter = WrapperCharacter;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DynamicDataTable.EasyCSV.ConvertQuatStringToRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator UEasyCSV::ConvertQuatStringToRotator(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicDataTable.EasyCSV.ConvertQuatStringToRotator"));

	struct
	{
		struct FString                 inString;
		struct FRotator                ReturnValue;
	} params = {};

	params.inString = inString;

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
