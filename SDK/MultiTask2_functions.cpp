// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MultiTask2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MultiTask2.MultiTaskBase.OnTick
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTaskBase::OnTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTaskBase.OnTick"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTaskBase.OnComplete
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMultiTaskBase::OnComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTaskBase.OnComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTaskBase.OnCancel
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMultiTaskBase::OnCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTaskBase.OnCancel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.ThreadTaskBase.WaitToFinish
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UThreadTaskBase::WaitToFinish()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.ThreadTaskBase.WaitToFinish"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiThreadTask.TaskBody
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMultiThreadTask::TaskBody()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTask.TaskBody"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.GenerateMarchingCubesTask.ConstructDensityPoint
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FIntVector              VoxelCoordinates               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesDensityPoint DensityPoint                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGenerateMarchingCubesTask::ConstructDensityPoint(const struct FIntVector& VoxelCoordinates, struct FMarchingCubesDensityPoint* DensityPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.GenerateMarchingCubesTask.ConstructDensityPoint"));

	struct
	{
		struct FIntVector              VoxelCoordinates;
		struct FMarchingCubesDensityPoint DensityPoint;
	} params = {};

	params.VoxelCoordinates = VoxelCoordinates;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DensityPoint != nullptr)
		*DensityPoint = params.DensityPoint;
}


// Function MultiTask2.MultiFrameAsyncTask.TaskBody
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMultiFrameAsyncTask::TaskBody()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiFrameAsyncTask.TaskBody"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiFrameLoop1DTask.TaskBody
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiFrameLoop1DTask::TaskBody(int X)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiFrameLoop1DTask.TaskBody"));

	struct
	{
		int                            X;
	} params = {};

	params.X = X;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiFrameLoop2DTask.TaskBody
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Y                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiFrameLoop2DTask::TaskBody(int X, int Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiFrameLoop2DTask.TaskBody"));

	struct
	{
		int                            X;
		int                            Y;
	} params = {};

	params.X = X;
	params.Y = Y;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiFrameLoop3DTask.TaskBody
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Y                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Z                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiFrameLoop3DTask::TaskBody(int X, int Y, int Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiFrameLoop3DTask.TaskBody"));

	struct
	{
		int                            X;
		int                            Y;
		int                            Z;
	} params = {};

	params.X = X;
	params.Y = Y;
	params.Z = Z;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiFrameTaskLibrary.DoLoop3DTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2BranchesWithBody    Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UMultiFrameLoop3DTask*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            X                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Y                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Z                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            XSize                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            YSize                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ZSize                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            IterationsPerTick              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiFrameTaskLibrary::DoLoop3DTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiFrameLoop3DTask*/ Class, int XSize, int YSize, int ZSize, int IterationsPerTick, float Delay, EMultiTask2BranchesWithBody* Out, int* X, int* Y, int* Z, class UMultiTaskBase** Task)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiFrameTaskLibrary.DoLoop3DTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		EMultiTask2BranchesWithBody    Out;
		struct FLatentActionInfo       LatentInfo;
		class UClass* /*UMultiFrameLoop3DTask*/ Class;
		int                            X;
		int                            Y;
		int                            Z;
		class UMultiTaskBase*          Task;
		int                            XSize;
		int                            YSize;
		int                            ZSize;
		int                            IterationsPerTick;
		float                          Delay;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Class = Class;
	params.XSize = XSize;
	params.YSize = YSize;
	params.ZSize = ZSize;
	params.IterationsPerTick = IterationsPerTick;
	params.Delay = Delay;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
	if (Task != nullptr)
		*Task = params.Task;
}


// Function MultiTask2.MultiFrameTaskLibrary.DoLoop2DTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2BranchesWithBody    Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UMultiFrameLoop2DTask*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            X                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Y                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            XSize                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            YSize                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            IterationsPerTick              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiFrameTaskLibrary::DoLoop2DTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiFrameLoop2DTask*/ Class, int XSize, int YSize, int IterationsPerTick, float Delay, EMultiTask2BranchesWithBody* Out, int* X, int* Y, class UMultiTaskBase** Task)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiFrameTaskLibrary.DoLoop2DTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		EMultiTask2BranchesWithBody    Out;
		struct FLatentActionInfo       LatentInfo;
		class UClass* /*UMultiFrameLoop2DTask*/ Class;
		int                            X;
		int                            Y;
		class UMultiTaskBase*          Task;
		int                            XSize;
		int                            YSize;
		int                            IterationsPerTick;
		float                          Delay;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Class = Class;
	params.XSize = XSize;
	params.YSize = YSize;
	params.IterationsPerTick = IterationsPerTick;
	params.Delay = Delay;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Task != nullptr)
		*Task = params.Task;
}


// Function MultiTask2.MultiFrameTaskLibrary.DoLoop1DTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2BranchesWithBody    Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UMultiFrameLoop1DTask*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            X                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            XSize                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            IterationsPerTick              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiFrameTaskLibrary::DoLoop1DTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiFrameLoop1DTask*/ Class, int XSize, int IterationsPerTick, float Delay, EMultiTask2BranchesWithBody* Out, int* X, class UMultiTaskBase** Task)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiFrameTaskLibrary.DoLoop1DTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		EMultiTask2BranchesWithBody    Out;
		struct FLatentActionInfo       LatentInfo;
		class UClass* /*UMultiFrameLoop1DTask*/ Class;
		int                            X;
		class UMultiTaskBase*          Task;
		int                            XSize;
		int                            IterationsPerTick;
		float                          Delay;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Class = Class;
	params.XSize = XSize;
	params.IterationsPerTick = IterationsPerTick;
	params.Delay = Delay;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
	if (X != nullptr)
		*X = params.X;
	if (Task != nullptr)
		*Task = params.Task;
}


// Function MultiTask2.MultiFrameTaskLibrary.DoAsyncTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2BranchesNoCompleteWithBody Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UMultiFrameAsyncTask*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            IterationsPerTick              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiFrameTaskLibrary::DoAsyncTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiFrameAsyncTask*/ Class, int IterationsPerTick, float Delay, EMultiTask2BranchesNoCompleteWithBody* Out, class UMultiTaskBase** Task)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiFrameTaskLibrary.DoAsyncTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		EMultiTask2BranchesNoCompleteWithBody Out;
		struct FLatentActionInfo       LatentInfo;
		class UClass* /*UMultiFrameAsyncTask*/ Class;
		class UMultiTaskBase*          Task;
		int                            IterationsPerTick;
		float                          Delay;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Class = Class;
	params.IterationsPerTick = IterationsPerTick;
	params.Delay = Delay;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
	if (Task != nullptr)
		*Task = params.Task;
}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		TEnumAsByte<ETraceTypeQuery>   TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleForObjectsThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleForObjectsThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleByProfileThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleByProfileThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		struct FName                   ProfileName;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		TEnumAsByte<ETraceTypeQuery>   TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiForObjectsThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiForObjectsThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiByProfileThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiByProfileThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		struct FName                   ProfileName;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		TEnumAsByte<ETraceTypeQuery>   TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleForObjectsThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleForObjectsThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleByProfileThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleByProfileThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		struct FName                   ProfileName;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		TEnumAsByte<ETraceTypeQuery>   TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiForObjectsThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiForObjectsThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiByProfileThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiByProfileThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		struct FName                   ProfileName;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HalfHeight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		float                          HalfHeight;
		TEnumAsByte<ETraceTypeQuery>   TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleForObjectsThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HalfHeight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleForObjectsThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		float                          HalfHeight;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleByProfileThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HalfHeight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleByProfileThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		float                          HalfHeight;
		struct FName                   ProfileName;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HalfHeight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		float                          HalfHeight;
		TEnumAsByte<ETraceTypeQuery>   TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiForObjectsThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HalfHeight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiForObjectsThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		float                          HalfHeight;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiByProfileThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HalfHeight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiByProfileThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Radius;
		float                          HalfHeight;
		struct FName                   ProfileName;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 HalfSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		struct FVector                 HalfSize;
		struct FRotator                Orientation;
		TEnumAsByte<ETraceTypeQuery>   TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleForObjectsThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 HalfSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleForObjectsThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		struct FVector                 HalfSize;
		struct FRotator                Orientation;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleByProfileThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 HalfSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleByProfileThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		struct FVector                 HalfSize;
		struct FRotator                Orientation;
		struct FName                   ProfileName;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		struct FHitResult              OutHit;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 HalfSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		struct FVector                 HalfSize;
		struct FRotator                Orientation;
		TEnumAsByte<ETraceTypeQuery>   TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiForObjectsThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 HalfSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiForObjectsThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		struct FVector                 HalfSize;
		struct FRotator                Orientation;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiByProfileThreadSafe
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 HalfSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiByProfileThreadSafe"));

	struct
	{
		class UObject*                 World;
		struct FVector                 Start;
		struct FVector                 End;
		struct FVector                 HalfSize;
		struct FRotator                Orientation;
		struct FName                   ProfileName;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TArray<struct FHitResult>      OutHits;
		bool                           ReturnValue;
	} params = {};

	params.World = World;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateNavigationData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UActorComponent*         Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::UpdateNavigationData(class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateNavigationData"));

	struct
	{
		class UActorComponent*         Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateInstancePhysicsBody
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UHierarchicalInstancedStaticMeshComponent* HISM                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InstanceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2UtilitiesLibrary::UpdateInstancePhysicsBody(class UHierarchicalInstancedStaticMeshComponent* HISM, int InstanceIndex, bool bTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateInstancePhysicsBody"));

	struct
	{
		class UHierarchicalInstancedStaticMeshComponent* HISM;
		int                            InstanceIndex;
		bool                           bTeleport;
		bool                           ReturnValue;
	} params = {};

	params.HISM = HISM;
	params.InstanceIndex = InstanceIndex;
	params.bTeleport = bTeleport;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.SetMaximumLoopIterations
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaximumLoopIterations          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::SetMaximumLoopIterations(int MaximumLoopIterations)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.SetMaximumLoopIterations"));

	struct
	{
		int                            MaximumLoopIterations;
	} params = {};

	params.MaximumLoopIterations = MaximumLoopIterations;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.SegmentTriangleIntersection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 StartPoint                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 EndPoint                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 C                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutIntersectPoint              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutTriangleNormal              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2UtilitiesLibrary::SegmentTriangleIntersection(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& A, const struct FVector& B, const struct FVector& C, struct FVector* OutIntersectPoint, struct FVector* OutTriangleNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.SegmentTriangleIntersection"));

	struct
	{
		struct FVector                 StartPoint;
		struct FVector                 EndPoint;
		struct FVector                 A;
		struct FVector                 B;
		struct FVector                 C;
		struct FVector                 OutIntersectPoint;
		struct FVector                 OutTriangleNormal;
		bool                           ReturnValue;
	} params = {};

	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;
	params.A = A;
	params.B = B;
	params.C = C;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutIntersectPoint != nullptr)
		*OutIntersectPoint = params.OutIntersectPoint;
	if (OutTriangleNormal != nullptr)
		*OutTriangleNormal = params.OutTriangleNormal;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.ResetRunaway
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UMultiTask2UtilitiesLibrary::ResetRunaway()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.ResetRunaway"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.RemoveFromRoot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::RemoveFromRoot(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.RemoveFromRoot"));

	struct
	{
		class UObject*                 Object;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.MixThreeIntegers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Integer1                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Integer2                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Integer3                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMultiTask2UtilitiesLibrary::MixThreeIntegers(int Integer1, int Integer2, int Integer3)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.MixThreeIntegers"));

	struct
	{
		int                            Integer1;
		int                            Integer2;
		int                            Integer3;
		int                            ReturnValue;
	} params = {};

	params.Integer1 = Integer1;
	params.Integer2 = Integer2;
	params.Integer3 = Integer3;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.IsRunning
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2UtilitiesLibrary::IsRunning(class UMultiTaskBase* Task)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.IsRunning"));

	struct
	{
		class UMultiTaskBase*          Task;
		bool                           ReturnValue;
	} params = {};

	params.Task = Task;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.IsCanceled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2UtilitiesLibrary::IsCanceled(class UMultiTaskBase* Task)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.IsCanceled"));

	struct
	{
		class UMultiTaskBase*          Task;
		bool                           ReturnValue;
	} params = {};

	params.Task = Task;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.GetTriangleAreaSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 C                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMultiTask2UtilitiesLibrary::GetTriangleAreaSize(const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.GetTriangleAreaSize"));

	struct
	{
		struct FVector                 A;
		struct FVector                 B;
		struct FVector                 C;
		float                          ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;
	params.C = C;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomScale
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Min                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Max                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2ScaleType           Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRandomStream           RandomStream                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::GetRandomScale(const struct FVector& Min, const struct FVector& Max, EMultiTask2ScaleType Type, const struct FRandomStream& RandomStream, struct FVector* Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomScale"));

	struct
	{
		struct FVector                 Min;
		struct FVector                 Max;
		EMultiTask2ScaleType           Type;
		struct FRandomStream           RandomStream;
		struct FVector                 Scale;
	} params = {};

	params.Min = Min;
	params.Max = Max;
	params.Type = Type;
	params.RandomStream = RandomStream;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomPointInTriangle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 C                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRandomStream           RandomStream                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutPoint                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::GetRandomPointInTriangle(const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FRandomStream& RandomStream, struct FVector* OutPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomPointInTriangle"));

	struct
	{
		struct FVector                 A;
		struct FVector                 B;
		struct FVector                 C;
		struct FRandomStream           RandomStream;
		struct FVector                 OutPoint;
	} params = {};

	params.A = A;
	params.B = B;
	params.C = C;
	params.RandomStream = RandomStream;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutPoint != nullptr)
		*OutPoint = params.OutPoint;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.GetContextWorld
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UObject* UMultiTask2UtilitiesLibrary::GetContextWorld(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.GetContextWorld"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UObject*                 ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.Cancel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::Cancel(class UMultiTaskBase* Task)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.Cancel"));

	struct
	{
		class UMultiTaskBase*          Task;
	} params = {};

	params.Task = Task;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.AddToRoot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::AddToRoot(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2UtilitiesLibrary.AddToRoot"));

	struct
	{
		class UObject*                 Object;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLocalLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 VoxelCoordinates               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::VoxelCoordinatesToLocalLocation(const struct FVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLocalLocation"));

	struct
	{
		struct FVector                 VoxelCoordinates;
		struct FMarchingCubesSettings  Settings;
		struct FVector                 ReturnValue;
	} params = {};

	params.VoxelCoordinates = VoxelCoordinates;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ReturnValue != nullptr)
		*ReturnValue = params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLinearIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FIntVector              VoxelCoordinates               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMultiTask2VoxelLibrary::VoxelCoordinatesToLinearIndex(const struct FIntVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLinearIndex"));

	struct
	{
		struct FIntVector              VoxelCoordinates;
		struct FMarchingCubesSettings  Settings;
		int                            ReturnValue;
	} params = {};

	params.VoxelCoordinates = VoxelCoordinates;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.LinearIndexToVoxelCoordinates
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            LinearIndex                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FIntVector              VoxelCoordinates               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::LinearIndexToVoxelCoordinates(int LinearIndex, const struct FMarchingCubesSettings& Settings, struct FIntVector* VoxelCoordinates)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.LinearIndexToVoxelCoordinates"));

	struct
	{
		int                            LinearIndex;
		struct FMarchingCubesSettings  Settings;
		struct FIntVector              VoxelCoordinates;
	} params = {};

	params.LinearIndex = LinearIndex;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (VoxelCoordinates != nullptr)
		*VoxelCoordinates = params.VoxelCoordinates;
}


// Function MultiTask2.MultiTask2VoxelLibrary.IsInRange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FIntVector              VoxelCoordinates               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2VoxelLibrary::IsInRange(const struct FIntVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.IsInRange"));

	struct
	{
		struct FIntVector              VoxelCoordinates;
		struct FMarchingCubesSettings  Settings;
		bool                           ReturnValue;
	} params = {};

	params.VoxelCoordinates = VoxelCoordinates;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesInRadius
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              GeometryTransform              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 BrushLocation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Radius                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FIntVector>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetVoxelCoordinatesInRadius(const struct FTransform& GeometryTransform, const struct FVector& BrushLocation, const struct FVector& Radius, const struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesInRadius"));

	struct
	{
		struct FTransform              GeometryTransform;
		struct FVector                 BrushLocation;
		struct FVector                 Radius;
		struct FMarchingCubesSettings  Settings;
		TArray<struct FIntVector>      ReturnValue;
	} params = {};

	params.GeometryTransform = GeometryTransform;
	params.BrushLocation = BrushLocation;
	params.Radius = Radius;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ReturnValue != nullptr)
		*ReturnValue = params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesAtLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              GeometryTransform              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FIntVector              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetVoxelCoordinatesAtLocation(const struct FTransform& GeometryTransform, const struct FVector& Location, const struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesAtLocation"));

	struct
	{
		struct FTransform              GeometryTransform;
		struct FVector                 Location;
		struct FMarchingCubesSettings  Settings;
		struct FIntVector              ReturnValue;
	} params = {};

	params.GeometryTransform = GeometryTransform;
	params.Location = Location;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ReturnValue != nullptr)
		*ReturnValue = params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetVerticeCount_VoxelData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMarchingCubesData      VoxelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMultiTask2VoxelLibrary::GetVerticeCount_VoxelData(const struct FMarchingCubesData& VoxelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetVerticeCount_VoxelData"));

	struct
	{
		struct FMarchingCubesData      VoxelData;
		int                            ReturnValue;
	} params = {};

	params.VoxelData = VoxelData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetVertice_VoxelData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMarchingCubesData      VoxelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            VerticeIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2VoxelLibrary::GetVertice_VoxelData(const struct FMarchingCubesData& VoxelData, int VerticeIndex, struct FVector* OutValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetVertice_VoxelData"));

	struct
	{
		struct FMarchingCubesData      VoxelData;
		int                            VerticeIndex;
		struct FVector                 OutValue;
		bool                           ReturnValue;
	} params = {};

	params.VoxelData = VoxelData;
	params.VerticeIndex = VerticeIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetTriangleCount_VoxelData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMarchingCubesData      VoxelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMultiTask2VoxelLibrary::GetTriangleCount_VoxelData(const struct FMarchingCubesData& VoxelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetTriangleCount_VoxelData"));

	struct
	{
		struct FMarchingCubesData      VoxelData;
		int                            ReturnValue;
	} params = {};

	params.VoxelData = VoxelData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetTriangle_VoxelData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMarchingCubesData      VoxelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            TriangleIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            A                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            B                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            C                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2VoxelLibrary::GetTriangle_VoxelData(const struct FMarchingCubesData& VoxelData, int TriangleIndex, int* A, int* B, int* C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetTriangle_VoxelData"));

	struct
	{
		struct FMarchingCubesData      VoxelData;
		int                            TriangleIndex;
		int                            A;
		int                            B;
		int                            C;
		bool                           ReturnValue;
	} params = {};

	params.VoxelData = VoxelData;
	params.TriangleIndex = TriangleIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
	if (C != nullptr)
		*C = params.C;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetRelevantSlots
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FIntVector              RootSlot                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FIntVector>      ExistingChunks                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FIntVector>      NewSlots                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FIntVector>      OldRelevantSlots               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetRelevantSlots(const struct FIntVector& RootSlot, int Radius, TArray<struct FIntVector> ExistingChunks, const struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* NewSlots, TArray<struct FIntVector>* OldRelevantSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetRelevantSlots"));

	struct
	{
		struct FIntVector              RootSlot;
		int                            Radius;
		TArray<struct FIntVector>      ExistingChunks;
		struct FMarchingCubesSettings  Settings;
		TArray<struct FIntVector>      NewSlots;
		TArray<struct FIntVector>      OldRelevantSlots;
	} params = {};

	params.RootSlot = RootSlot;
	params.Radius = Radius;
	params.ExistingChunks = ExistingChunks;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NewSlots != nullptr)
		*NewSlots = params.NewSlots;
	if (OldRelevantSlots != nullptr)
		*OldRelevantSlots = params.OldRelevantSlots;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetNeighbor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FIntVector              VoxelCoordinates               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FIntVector              Direction                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FIntVector              Neighbor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTask2VoxelLibrary::GetNeighbor(const struct FIntVector& VoxelCoordinates, const struct FIntVector& Direction, const struct FMarchingCubesSettings& Settings, struct FIntVector* Neighbor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetNeighbor"));

	struct
	{
		struct FIntVector              VoxelCoordinates;
		struct FIntVector              Direction;
		struct FMarchingCubesSettings  Settings;
		struct FIntVector              Neighbor;
		bool                           ReturnValue;
	} params = {};

	params.VoxelCoordinates = VoxelCoordinates;
	params.Direction = Direction;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Neighbor != nullptr)
		*Neighbor = params.Neighbor;

	return params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetLocationFromChunkSlot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FIntVector              ChunkSlot                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetLocationFromChunkSlot(const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetLocationFromChunkSlot"));

	struct
	{
		struct FIntVector              ChunkSlot;
		struct FMarchingCubesSettings  Settings;
		struct FVector                 ReturnValue;
	} params = {};

	params.ChunkSlot = ChunkSlot;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ReturnValue != nullptr)
		*ReturnValue = params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.GetChunkSlotFromLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FIntVector              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetChunkSlotFromLocation(const struct FVector& Location, const struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.GetChunkSlotFromLocation"));

	struct
	{
		struct FVector                 Location;
		struct FMarchingCubesSettings  Settings;
		struct FIntVector              ReturnValue;
	} params = {};

	params.Location = Location;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ReturnValue != nullptr)
		*ReturnValue = params.ReturnValue;
}


// Function MultiTask2.MultiTask2VoxelLibrary.DoGenerateMarchingCubesTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UGenerateMarchingCubesTask*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FIntVector              ChunkSlot                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EMarchingCubesAlgorithm        Algorithm                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bForceManifold                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseSharedPoints               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesData      VoxelData                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::DoGenerateMarchingCubesTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UGenerateMarchingCubesTask*/ Class, const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, EMarchingCubesAlgorithm Algorithm, bool bForceManifold, bool bUseSharedPoints, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, struct FMarchingCubesData* VoxelData, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.DoGenerateMarchingCubesTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UClass* /*UGenerateMarchingCubesTask*/ Class;
		struct FIntVector              ChunkSlot;
		struct FMarchingCubesSettings  Settings;
		EMarchingCubesAlgorithm        Algorithm;
		bool                           bForceManifold;
		bool                           bUseSharedPoints;
		class UMultiTaskBase*          Task;
		struct FMarchingCubesData      VoxelData;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Class = Class;
	params.ChunkSlot = ChunkSlot;
	params.Settings = Settings;
	params.Algorithm = Algorithm;
	params.bForceManifold = bForceManifold;
	params.bUseSharedPoints = bUseSharedPoints;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Task != nullptr)
		*Task = params.Task;
	if (VoxelData != nullptr)
		*VoxelData = params.VoxelData;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiTask2VoxelLibrary.DoConvertVoxelDataToMeshDataTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UGenerateMarchingCubesTask*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FIntVector              ChunkSlot                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings  Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EMarchingCubesNormal           NormalType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseFlatShading                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMarchingCubesData      VoxelData                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMarchingCubesSimplifierSettings> SimplifierSettings             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMarchingCubesMeshData> MeshData                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::DoConvertVoxelDataToMeshDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UGenerateMarchingCubesTask*/ Class, const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, EMarchingCubesNormal NormalType, bool bUseFlatShading, TArray<struct FMarchingCubesSimplifierSettings> SimplifierSettings, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, struct FMarchingCubesData* VoxelData, class UMultiTaskBase** Task, TArray<struct FMarchingCubesMeshData>* MeshData, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTask2VoxelLibrary.DoConvertVoxelDataToMeshDataTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UClass* /*UGenerateMarchingCubesTask*/ Class;
		struct FIntVector              ChunkSlot;
		struct FMarchingCubesSettings  Settings;
		EMarchingCubesNormal           NormalType;
		bool                           bUseFlatShading;
		struct FMarchingCubesData      VoxelData;
		TArray<struct FMarchingCubesSimplifierSettings> SimplifierSettings;
		class UMultiTaskBase*          Task;
		TArray<struct FMarchingCubesMeshData> MeshData;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Class = Class;
	params.ChunkSlot = ChunkSlot;
	params.Settings = Settings;
	params.NormalType = NormalType;
	params.bUseFlatShading = bUseFlatShading;
	params.SimplifierSettings = SimplifierSettings;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (VoxelData != nullptr)
		*VoxelData = params.VoxelData;
	if (Task != nullptr)
		*Task = params.Task;
	if (MeshData != nullptr)
		*MeshData = params.MeshData;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiTaskMutex.Unlock
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMultiTaskMutex::Unlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTaskMutex.Unlock"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTaskMutex.TryLock
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiTaskMutex::TryLock()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTaskMutex.TryLock"));

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


// Function MultiTask2.MultiTaskMutex.Lock
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMultiTaskMutex::Lock()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTaskMutex.Lock"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiTaskThreadPool.GetThreadsNum
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMultiTaskThreadPool::GetThreadsNum()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiTaskThreadPool.GetThreadsNum"));

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


// Function MultiTask2.MultiThreadTaskLibrary.Sleep
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Seconds                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::Sleep(float Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.Sleep"));

	struct
	{
		float                          Seconds;
	} params = {};

	params.Seconds = Seconds;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiThreadTaskLibrary.IsInGameThread
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiThreadTaskLibrary::IsInGameThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.IsInGameThread"));

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


// Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCoresIncludingHyperthreads
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMultiThreadTaskLibrary::GetNumberOfCoresIncludingHyperthreads()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCoresIncludingHyperthreads"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCores
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMultiThreadTaskLibrary::GetNumberOfCores()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCores"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances4
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent* HISM                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            StartIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Transforms                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector4>        CustomData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Chunks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUpdatePhysicsBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bMarkRenderStateDirty          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bCreateInternalDataCopies      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoUpdateInstances4(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector4> CustomData, int Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances4"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UHierarchicalInstancedStaticMeshComponent* HISM;
		int                            StartIndex;
		TArray<struct FTransform>      Transforms;
		TArray<struct FVector4>        CustomData;
		int                            Chunks;
		bool                           bWorldSpace;
		bool                           bTeleport;
		bool                           bUpdatePhysicsBodies;
		bool                           bMarkRenderStateDirty;
		bool                           bCreateInternalDataCopies;
		class UMultiTaskBase*          Task;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.HISM = HISM;
	params.StartIndex = StartIndex;
	params.Transforms = Transforms;
	params.CustomData = CustomData;
	params.Chunks = Chunks;
	params.bWorldSpace = bWorldSpace;
	params.bTeleport = bTeleport;
	params.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bCreateInternalDataCopies = bCreateInternalDataCopies;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Task != nullptr)
		*Task = params.Task;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances3
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent* HISM                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            StartIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Transforms                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         CustomData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Chunks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUpdatePhysicsBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bMarkRenderStateDirty          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bCreateInternalDataCopies      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoUpdateInstances3(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector> CustomData, int Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances3"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UHierarchicalInstancedStaticMeshComponent* HISM;
		int                            StartIndex;
		TArray<struct FTransform>      Transforms;
		TArray<struct FVector>         CustomData;
		int                            Chunks;
		bool                           bWorldSpace;
		bool                           bTeleport;
		bool                           bUpdatePhysicsBodies;
		bool                           bMarkRenderStateDirty;
		bool                           bCreateInternalDataCopies;
		class UMultiTaskBase*          Task;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.HISM = HISM;
	params.StartIndex = StartIndex;
	params.Transforms = Transforms;
	params.CustomData = CustomData;
	params.Chunks = Chunks;
	params.bWorldSpace = bWorldSpace;
	params.bTeleport = bTeleport;
	params.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bCreateInternalDataCopies = bCreateInternalDataCopies;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Task != nullptr)
		*Task = params.Task;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances2
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent* HISM                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            StartIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Transforms                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       CustomData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Chunks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUpdatePhysicsBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bMarkRenderStateDirty          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bCreateInternalDataCopies      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoUpdateInstances2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector2D> CustomData, int Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances2"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UHierarchicalInstancedStaticMeshComponent* HISM;
		int                            StartIndex;
		TArray<struct FTransform>      Transforms;
		TArray<struct FVector2D>       CustomData;
		int                            Chunks;
		bool                           bWorldSpace;
		bool                           bTeleport;
		bool                           bUpdatePhysicsBodies;
		bool                           bMarkRenderStateDirty;
		bool                           bCreateInternalDataCopies;
		class UMultiTaskBase*          Task;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.HISM = HISM;
	params.StartIndex = StartIndex;
	params.Transforms = Transforms;
	params.CustomData = CustomData;
	params.Chunks = Chunks;
	params.bWorldSpace = bWorldSpace;
	params.bTeleport = bTeleport;
	params.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bCreateInternalDataCopies = bCreateInternalDataCopies;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Task != nullptr)
		*Task = params.Task;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent* HISM                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            StartIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Transforms                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  CustomData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Chunks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUpdatePhysicsBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bMarkRenderStateDirty          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bCreateInternalDataCopies      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoUpdateInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int StartIndex, TArray<struct FTransform> Transforms, TArray<float> CustomData, int Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UHierarchicalInstancedStaticMeshComponent* HISM;
		int                            StartIndex;
		TArray<struct FTransform>      Transforms;
		TArray<float>                  CustomData;
		int                            Chunks;
		bool                           bWorldSpace;
		bool                           bTeleport;
		bool                           bUpdatePhysicsBodies;
		bool                           bMarkRenderStateDirty;
		bool                           bCreateInternalDataCopies;
		class UMultiTaskBase*          Task;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.HISM = HISM;
	params.StartIndex = StartIndex;
	params.Transforms = Transforms;
	params.CustomData = CustomData;
	params.Chunks = Chunks;
	params.bWorldSpace = bWorldSpace;
	params.bTeleport = bTeleport;
	params.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bCreateInternalDataCopies = bCreateInternalDataCopies;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Task != nullptr)
		*Task = params.Task;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoSpawnInstances
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent* HISM                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Transforms                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Chunks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bCreatePhysicsBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bCreateInternalDataCopies      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    NewInstances                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoSpawnInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, TArray<struct FTransform> Transforms, int Chunks, bool bWorldSpace, bool bCreatePhysicsBodies, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, TArray<int>* NewInstances, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoSpawnInstances"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UHierarchicalInstancedStaticMeshComponent* HISM;
		TArray<struct FTransform>      Transforms;
		int                            Chunks;
		bool                           bWorldSpace;
		bool                           bCreatePhysicsBodies;
		bool                           bCreateInternalDataCopies;
		class UMultiTaskBase*          Task;
		TArray<int>                    NewInstances;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.HISM = HISM;
	params.Transforms = Transforms;
	params.Chunks = Chunks;
	params.bWorldSpace = bWorldSpace;
	params.bCreatePhysicsBodies = bCreatePhysicsBodies;
	params.bCreateInternalDataCopies = bCreateInternalDataCopies;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Task != nullptr)
		*Task = params.Task;
	if (NewInstances != nullptr)
		*NewInstances = params.NewInstances;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask2
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2BranchesWithBody    Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoSingleThreadTask2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2BranchesWithBody* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask2"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UMultiTaskBase*          Task;
		EMultiTask2BranchesWithBody    Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Task != nullptr)
		*Task = params.Task;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UMultiThreadTask*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoSingleThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiThreadTask*/ Class, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UClass* /*UMultiThreadTask*/ Class;
		class UMultiTaskBase*          Task;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Class = Class;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Task != nullptr)
		*Task = params.Task;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoMultiThreadTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UMultiThreadTask*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UMultiTaskBase*>  Tasks                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMultiTask2BranchesNoCancel    Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoMultiThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiThreadTask*/ Class, int Count, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, TArray<class UMultiTaskBase*>* Tasks, EMultiTask2BranchesNoCancel* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoMultiThreadTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UClass* /*UMultiThreadTask*/ Class;
		int                            Count;
		TArray<class UMultiTaskBase*>  Tasks;
		EMultiTask2BranchesNoCancel    Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Class = Class;
	params.Count = Count;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Tasks != nullptr)
		*Tasks = params.Tasks;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DoDelaunayTriangulation2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       Points                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMultiTask2Delaunay2DTriangle> Triangles                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoDelaunayTriangulation2D(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, TArray<struct FVector2D>* Points, class UMultiTaskBase** Task, TArray<struct FMultiTask2Delaunay2DTriangle>* Triangles, EMultiTask2Branches* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DoDelaunayTriangulation2D"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		TArray<struct FVector2D>       Points;
		class UMultiTaskBase*          Task;
		TArray<struct FMultiTask2Delaunay2DTriangle> Triangles;
		EMultiTask2Branches            Out;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Points != nullptr)
		*Points = params.Points;
	if (Task != nullptr)
		*Task = params.Task;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function MultiTask2.MultiThreadTaskLibrary.DestroyThreadPoolImmediately
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DestroyThreadPoolImmediately(class UMultiTaskThreadPool* ThreadPool)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.DestroyThreadPoolImmediately"));

	struct
	{
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MultiTask2.MultiThreadTaskLibrary.CreateThreadPool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumQueuedThreads               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            StackSize                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMultiTaskThreadPriority       ThreadPriority                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMultiTaskThreadPool* UMultiThreadTaskLibrary::CreateThreadPool(class UObject* WorldContextObject, int NumQueuedThreads, int StackSize, EMultiTaskThreadPriority ThreadPriority, const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.CreateThreadPool"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            NumQueuedThreads;
		int                            StackSize;
		EMultiTaskThreadPriority       ThreadPriority;
		struct FString                 Name;
		class UMultiTaskThreadPool*    ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.NumQueuedThreads = NumQueuedThreads;
	params.StackSize = StackSize;
	params.ThreadPriority = ThreadPriority;
	params.Name = Name;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.MultiThreadTaskLibrary.CreateMutex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskMutex*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMultiTaskMutex* UMultiThreadTaskLibrary::CreateMutex(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.MultiThreadTaskLibrary.CreateMutex"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UMultiTaskMutex*         ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.PixelReaderLibrary.SetsRGB
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPixelData              PixelData                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPixelReaderLibrary::SetsRGB(bool NewValue, struct FPixelData* PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.SetsRGB"));

	struct
	{
		struct FPixelData              PixelData;
		bool                           NewValue;
	} params = {};

	params.NewValue = NewValue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PixelData != nullptr)
		*PixelData = params.PixelData;
}


// Function MultiTask2.PixelReaderLibrary.SetSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPixelData              PixelData                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPixelReaderLibrary::SetSize(int Width, int Height, struct FPixelData* PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.SetSize"));

	struct
	{
		struct FPixelData              PixelData;
		int                            Width;
		int                            Height;
	} params = {};

	params.Width = Width;
	params.Height = Height;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PixelData != nullptr)
		*PixelData = params.PixelData;
}


// Function MultiTask2.PixelReaderLibrary.SetPixel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FPixelData              PixelData                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FIntPoint               Coordinates                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FColor                  Pixel                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPixelReaderLibrary::SetPixel(const struct FIntPoint& Coordinates, const struct FColor& Pixel, struct FPixelData* PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.SetPixel"));

	struct
	{
		struct FPixelData              PixelData;
		struct FIntPoint               Coordinates;
		struct FColor                  Pixel;
		bool                           ReturnValue;
	} params = {};

	params.Coordinates = Coordinates;
	params.Pixel = Pixel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PixelData != nullptr)
		*PixelData = params.PixelData;

	return params.ReturnValue;
}


// Function MultiTask2.PixelReaderLibrary.IsPixelDataValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPixelData              PixelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPixelReaderLibrary::IsPixelDataValid(const struct FPixelData& PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.IsPixelDataValid"));

	struct
	{
		struct FPixelData              PixelData;
		bool                           ReturnValue;
	} params = {};

	params.PixelData = PixelData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.PixelReaderLibrary.GetWidth
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPixelData              PixelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPixelReaderLibrary::GetWidth(const struct FPixelData& PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.GetWidth"));

	struct
	{
		struct FPixelData              PixelData;
		int                            ReturnValue;
	} params = {};

	params.PixelData = PixelData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.PixelReaderLibrary.GetPixel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPixelData              PixelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FIntPoint               Coordinates                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FColor                  Pixel                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPixelReaderLibrary::GetPixel(const struct FPixelData& PixelData, const struct FIntPoint& Coordinates, struct FColor* Pixel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.GetPixel"));

	struct
	{
		struct FPixelData              PixelData;
		struct FIntPoint               Coordinates;
		struct FColor                  Pixel;
		bool                           ReturnValue;
	} params = {};

	params.PixelData = PixelData;
	params.Coordinates = Coordinates;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Pixel != nullptr)
		*Pixel = params.Pixel;

	return params.ReturnValue;
}


// Function MultiTask2.PixelReaderLibrary.GetHeight
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPixelData              PixelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPixelReaderLibrary::GetHeight(const struct FPixelData& PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.GetHeight"));

	struct
	{
		struct FPixelData              PixelData;
		int                            ReturnValue;
	} params = {};

	params.PixelData = PixelData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.PixelReaderLibrary.DoReadUrlToPixelDataTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EMultiTask2Branches            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Timeout                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPixelData              PixelData                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskBase*          Task                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPixelReaderLibrary::DoReadUrlToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& URL, float Timeout, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, EMultiTask2Branches* Out, struct FPixelData* PixelData, class UMultiTaskBase** Task)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.DoReadUrlToPixelDataTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		EMultiTask2Branches            Out;
		struct FString                 URL;
		float                          Timeout;
		struct FPixelData              PixelData;
		class UMultiTaskBase*          Task;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.URL = URL;
	params.Timeout = Timeout;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
	if (PixelData != nullptr)
		*PixelData = params.PixelData;
	if (Task != nullptr)
		*Task = params.Task;
}


// Function MultiTask2.PixelReaderLibrary.DoReadPixelsTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EMultiTask2BranchesNoCancel    Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture*                Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPixelData              PixelData                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UPixelReaderLibrary::DoReadPixelsTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UTexture* Texture, EMultiTask2BranchesNoCancel* Out, struct FPixelData* PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.DoReadPixelsTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		EMultiTask2BranchesNoCancel    Out;
		class UTexture*                Texture;
		struct FPixelData              PixelData;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Texture = Texture;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
	if (PixelData != nullptr)
		*PixelData = params.PixelData;
}


// Function MultiTask2.PixelReaderLibrary.DoReadFileToPixelDataTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EMultiTask2BranchesNoCancel    Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 File                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPixelData              PixelData                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// ETaskExecutionType             ExecutionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*    ThreadPool                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPixelReaderLibrary::DoReadFileToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& File, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, EMultiTask2BranchesNoCancel* Out, struct FPixelData* PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.DoReadFileToPixelDataTask"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		EMultiTask2BranchesNoCancel    Out;
		struct FString                 File;
		struct FPixelData              PixelData;
		ETaskExecutionType             ExecutionType;
		class UMultiTaskThreadPool*    ThreadPool;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.File = File;
	params.ExecutionType = ExecutionType;
	params.ThreadPool = ThreadPool;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
	if (PixelData != nullptr)
		*PixelData = params.PixelData;
}


// Function MultiTask2.PixelReaderLibrary.CreateTextureFromPixelData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPixelData              PixelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* UPixelReaderLibrary::CreateTextureFromPixelData(class UObject* Outer, const struct FPixelData& PixelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.PixelReaderLibrary.CreateTextureFromPixelData"));

	struct
	{
		class UObject*                 Outer;
		struct FPixelData              PixelData;
		class UTexture2D*              ReturnValue;
	} params = {};

	params.Outer = Outer;
	params.PixelData = PixelData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetThreadSafeInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FThreadSafeInteger      A                              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FThreadSafeInteger      B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeIntegerSetThreadSafeInteger(const struct FThreadSafeInteger& B, struct FThreadSafeInteger* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetThreadSafeInteger"));

	struct
	{
		struct FThreadSafeInteger      A;
		struct FThreadSafeInteger      B;
	} params = {};

	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (A != nullptr)
		*A = params.A;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FThreadSafeInteger      A                              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeIntegerSetInteger(int B, struct FThreadSafeInteger* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetInteger"));

	struct
	{
		struct FThreadSafeInteger      A;
		int                            B;
	} params = {};

	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (A != nullptr)
		*A = params.A;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerIncrement
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FThreadSafeInteger      ThreadSafeInteger              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeIntegerIncrement(struct FThreadSafeInteger* ThreadSafeInteger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerIncrement"));

	struct
	{
		struct FThreadSafeInteger      ThreadSafeInteger;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ThreadSafeInteger != nullptr)
		*ThreadSafeInteger = params.ThreadSafeInteger;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsThreadSafeInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FThreadSafeInteger      A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FThreadSafeInteger      B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::ThreadSafeIntegerEqualsThreadSafeInteger(const struct FThreadSafeInteger& A, const struct FThreadSafeInteger& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsThreadSafeInteger"));

	struct
	{
		struct FThreadSafeInteger      A;
		struct FThreadSafeInteger      B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsInt32
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FThreadSafeInteger      A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::ThreadSafeIntegerEqualsInt32(const struct FThreadSafeInteger& A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsInt32"));

	struct
	{
		struct FThreadSafeInteger      A;
		int                            B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerDecrement
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FThreadSafeInteger      ThreadSafeInteger              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeIntegerDecrement(struct FThreadSafeInteger* ThreadSafeInteger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerDecrement"));

	struct
	{
		struct FThreadSafeInteger      ThreadSafeInteger;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ThreadSafeInteger != nullptr)
		*ThreadSafeInteger = params.ThreadSafeInteger;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetThreadSafeBoolean
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FThreadSafeBoolean      A                              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FThreadSafeBoolean      B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeBooleanSetThreadSafeBoolean(const struct FThreadSafeBoolean& B, struct FThreadSafeBoolean* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetThreadSafeBoolean"));

	struct
	{
		struct FThreadSafeBoolean      A;
		struct FThreadSafeBoolean      B;
	} params = {};

	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (A != nullptr)
		*A = params.A;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetBoolean
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FThreadSafeBoolean      A                              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeBooleanSetBoolean(bool B, struct FThreadSafeBoolean* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetBoolean"));

	struct
	{
		struct FThreadSafeBoolean      A;
		bool                           B;
	} params = {};

	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (A != nullptr)
		*A = params.A;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsThreadSafeBoolean
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FThreadSafeBoolean      A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FThreadSafeBoolean      B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::ThreadSafeBooleanEqualsThreadSafeBoolean(const struct FThreadSafeBoolean& A, const struct FThreadSafeBoolean& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsThreadSafeBoolean"));

	struct
	{
		struct FThreadSafeBoolean      A;
		struct FThreadSafeBoolean      B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsBoolean
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FThreadSafeBoolean      A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::ThreadSafeBooleanEqualsBoolean(const struct FThreadSafeBoolean& A, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsBoolean"));

	struct
	{
		struct FThreadSafeBoolean      A;
		bool                           B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FThreadSafeInteger      ThreadSafeInteger              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString USyncUtilitiesLibrary::Conv_ThreadSafeIntegerToString(const struct FThreadSafeInteger& ThreadSafeInteger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToString"));

	struct
	{
		struct FThreadSafeInteger      ThreadSafeInteger;
		struct FString                 ReturnValue;
	} params = {};

	params.ThreadSafeInteger = ThreadSafeInteger;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToInt32
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FThreadSafeInteger      ThreadSafeInteger              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USyncUtilitiesLibrary::Conv_ThreadSafeIntegerToInt32(const struct FThreadSafeInteger& ThreadSafeInteger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToInt32"));

	struct
	{
		struct FThreadSafeInteger      ThreadSafeInteger;
		int                            ReturnValue;
	} params = {};

	params.ThreadSafeInteger = ThreadSafeInteger;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FThreadSafeBoolean      ThreadSafeBoolean              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString USyncUtilitiesLibrary::Conv_ThreadSafeBooleanToString(const struct FThreadSafeBoolean& ThreadSafeBoolean)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToString"));

	struct
	{
		struct FThreadSafeBoolean      ThreadSafeBoolean;
		struct FString                 ReturnValue;
	} params = {};

	params.ThreadSafeBoolean = ThreadSafeBoolean;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FThreadSafeBoolean      ThreadSafeBoolean              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::Conv_ThreadSafeBooleanToBool(const struct FThreadSafeBoolean& ThreadSafeBoolean)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToBool"));

	struct
	{
		struct FThreadSafeBoolean      ThreadSafeBoolean;
		bool                           ReturnValue;
	} params = {};

	params.ThreadSafeBoolean = ThreadSafeBoolean;

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
