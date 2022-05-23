#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DynamicDataTable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DynamicDataTable.RuntimeDataTableActor
// 0x00E0 (0x0300 - 0x0220)
class ARuntimeDataTableActor : public AActor
{
public:
	struct FCSV_Info                                   CSV_Info;                                                 // 0x0220(0x0070) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0290(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DynamicDataTable.RuntimeDataTableActor"));
		return ptr;
	}


	static void UpdateArrayFromCSV_Info(TArray<int> ArrayToUpdate, const struct FCSV_Info& CSVInfo, bool MatchStructMemberNames, class UObject* OwningObject, bool* Successful);
	static bool SaveStringToFile(const struct FString& inString, const struct FString& InDirectory, const struct FString& Filename, const struct FString& Extension);
	static struct FString LoadStringFromFile(const struct FString& InPath, bool* Success);
	struct FString GetRowValueAsString(const struct FString& ColumnName, const struct FName& RowKey, bool* Success);
	TArray<struct FName> GetMapKeys();
	int GetMapKeyIndex(const struct FName& Key);
	TArray<struct FString> GetColumnAsStringArray(const struct FString& ColumnName, bool* Success);
	static struct FString GetAllObjectVariableNames(class UObject* Object, bool IncludeInheritedVariables, const struct FString& MemberBlacklist);
	static void FillStructArrayFromGoogleSheetsOrLocalCSV(TArray<int> ArrayToUpdate, const struct FScriptDelegate& CallOnComplete, const struct FString& GoogleSheetURL, const struct FString& CSV_SavePath, const struct FString& BackupCSV_LoadPath, bool MatchStructMemberNames, class UObject* OwningObject);
	static void ExportArrayToString(TArray<int> ArrayToExport, TArray<struct FName> Keys, const struct FString& MembersToInclude, class UObject* OwningObject, struct FString* OutCSV_String);
	static TArray<struct FName> AutoGenerateKeys();
};


// Class DynamicDataTable.EasyCSV
// 0x0000 (0x0028 - 0x0028)
class UEasyCSV : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DynamicDataTable.EasyCSV"));
		return ptr;
	}


	static bool SaveStringToFile(const struct FString& inString, const struct FString& InDirectory, const struct FString& Filename, const struct FString& Extension);
	static struct FString ReplaceEscapedCharacters(const struct FString& inString);
	static bool MakeCsvInfoStructFromString(const struct FString& inString, bool ParseHeaders, bool ParseKeys, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter, struct FCSV_Info* OutCsvInfo);
	static bool MakeCsvInfoStructFromFile(const struct FString& InPath, bool ParseHeaders, bool ParseKeys, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter, struct FCSV_Info* OutCsvInfo);
	static struct FCSV_Info MakeCSV_InfoFromString(const struct FString& inString, bool ParseHeaders, bool ParseKeys, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter);
	static struct FCSV_Info MakeCSV_InfoFromFile(const struct FString& InPath, bool ParseHeaders, bool ParseKeys, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter);
	static struct FString LoadStringFromFile(const struct FString& InPath, bool* Success);
	static struct FString GetRowValueAsString(const struct FCSV_Info& CSV_Info, const struct FString& ColumnName, const struct FName& RowKey, bool* Success);
	static int GetRowCount(const struct FCSV_Info& CSV_Info);
	static TArray<struct FString> GetRowAsStringArray(const struct FCSV_Info& CSV_Info, const struct FName& RowKey, bool* Success);
	static TArray<struct FName> GetMapKeys(const struct FCSV_Info& CSV_Info);
	static int GetMapKeyIndex(const struct FCSV_Info& CSV_Info, const struct FName& Key);
	static TArray<struct FString> GetMapHeaders(const struct FCSV_Info& CSV_Info);
	static void GetFTextComponentsFromRepresentativeFString(const struct FString& inString, struct FString* Namespace, struct FString* Key, struct FString* SourceString);
	static int GetColumnCount(const struct FCSV_Info& CSV_Info);
	static TArray<struct FString> GetColumnAsStringArray(const struct FCSV_Info& CSV_Info, const struct FString& ColumnName, bool* Success);
	static struct FString EscapeCharacters(const struct FString& inString);
	static bool DoesStringRepresentContainer(const struct FString& inString, const struct FString& WrapperCharacter);
	static TArray<struct FRotator> ConvertStringToRotatorArray(const struct FString& inString, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter);
	static struct FRotator ConvertStringToRotator(const struct FString& inString);
	static TArray<struct FQuat> ConvertStringToQuatArray(const struct FString& inString, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter);
	static struct FQuat ConvertStringToQuat(const struct FString& inString);
	static TArray<struct FRotator> ConvertQuatStringToRotatorArray(const struct FString& inString, const struct FString& DelimiterCharacter, const struct FString& WrapperCharacter);
	static struct FRotator ConvertQuatStringToRotator(const struct FString& inString);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
