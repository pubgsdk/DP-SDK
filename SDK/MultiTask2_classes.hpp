#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MultiTask2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MultiTask2.MultiTaskBase
// 0x0078 (0x00A0 - 0x0028)
class UMultiTaskBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               bIsTickable;                                              // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsTickableInEditor;                                      // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsTickableWhenPaused;                                    // 0x0032(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6D];                                      // 0x0033(0x006D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiTaskBase"));
		return ptr;
	}


	void OnTick(float DeltaTime);
	void OnComplete();
	void OnCancel();
};


// Class MultiTask2.ThreadTaskBase
// 0x0020 (0x00C0 - 0x00A0)
class UThreadTaskBase : public UMultiTaskBase
{
public:
	class UMultiTaskThreadPool*                        ThreadPool;                                               // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.ThreadTaskBase"));
		return ptr;
	}


	void WaitToFinish();
};


// Class MultiTask2.MultiThreadTask
// 0x0020 (0x00E0 - 0x00C0)
class UMultiThreadTask : public UThreadTaskBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiThreadTask"));
		return ptr;
	}


	void TaskBody();
};


// Class MultiTask2.DelaunayTriangulation2DTask
// 0x0020 (0x0100 - 0x00E0)
class UDelaunayTriangulation2DTask : public UMultiThreadTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.DelaunayTriangulation2DTask"));
		return ptr;
	}

};


// Class MultiTask2.FileToPixelDataTask
// 0x0030 (0x0110 - 0x00E0)
class UFileToPixelDataTask : public UMultiThreadTask
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.FileToPixelDataTask"));
		return ptr;
	}

};


// Class MultiTask2.GenerateMarchingCubesTask
// 0x03C0 (0x04A0 - 0x00E0)
class UGenerateMarchingCubesTask : public UMultiThreadTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E0(0x0020) MISSED OFFSET
	struct FIntVector                                  ChunkSlot;                                                // 0x0100(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x394];                                     // 0x010C(0x0394) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.GenerateMarchingCubesTask"));
		return ptr;
	}


	void ConstructDensityPoint(const struct FIntVector& VoxelCoordinates, struct FMarchingCubesDensityPoint* DensityPoint);
};


// Class MultiTask2.MultiFrameAsyncTask
// 0x0020 (0x00C0 - 0x00A0)
class UMultiFrameAsyncTask : public UMultiTaskBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiFrameAsyncTask"));
		return ptr;
	}


	void TaskBody();
};


// Class MultiTask2.MultiFrameLoop1DTask
// 0x0030 (0x00D0 - 0x00A0)
class UMultiFrameLoop1DTask : public UMultiTaskBase
{
public:
	float                                              Delay;                                                    // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00A4(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiFrameLoop1DTask"));
		return ptr;
	}


	void TaskBody(int X);
};


// Class MultiTask2.MultiFrameLoop2DTask
// 0x0030 (0x00D0 - 0x00A0)
class UMultiFrameLoop2DTask : public UMultiTaskBase
{
public:
	int                                                IterationsPerTick;                                        // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Delay;                                                    // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiFrameLoop2DTask"));
		return ptr;
	}


	void TaskBody(int X, int Y);
};


// Class MultiTask2.MultiFrameLoop3DTask
// 0x0040 (0x00E0 - 0x00A0)
class UMultiFrameLoop3DTask : public UMultiTaskBase
{
public:
	int                                                ZSize;                                                    // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                IterationsPerTick;                                        // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Delay;                                                    // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x34];                                      // 0x00AC(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiFrameLoop3DTask"));
		return ptr;
	}


	void TaskBody(int X, int Y, int Z);
};


// Class MultiTask2.MultiFrameTaskLibrary
// 0x0000 (0x0028 - 0x0028)
class UMultiFrameTaskLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiFrameTaskLibrary"));
		return ptr;
	}


	static void DoLoop3DTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiFrameLoop3DTask*/ Class, int XSize, int YSize, int ZSize, int IterationsPerTick, float Delay, EMultiTask2BranchesWithBody* Out, int* X, int* Y, int* Z, class UMultiTaskBase** Task);
	static void DoLoop2DTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiFrameLoop2DTask*/ Class, int XSize, int YSize, int IterationsPerTick, float Delay, EMultiTask2BranchesWithBody* Out, int* X, int* Y, class UMultiTaskBase** Task);
	static void DoLoop1DTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiFrameLoop1DTask*/ Class, int XSize, int IterationsPerTick, float Delay, EMultiTask2BranchesWithBody* Out, int* X, class UMultiTaskBase** Task);
	static void DoAsyncTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiFrameAsyncTask*/ Class, int IterationsPerTick, float Delay, EMultiTask2BranchesNoCompleteWithBody* Out, class UMultiTaskBase** Task);
};


// Class MultiTask2.MultiTask2TraceLibrary
// 0x0000 (0x0028 - 0x0028)
class UMultiTask2TraceLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiTask2TraceLibrary"));
		return ptr;
	}


	static bool SphereTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool SphereTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool SphereTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool SphereTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool SphereTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool SphereTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool LineTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool LineTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool LineTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool LineTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool LineTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool LineTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool CapsuleTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool CapsuleTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool CapsuleTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool CapsuleTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool CapsuleTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool CapsuleTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool BoxTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool BoxTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool BoxTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	static bool BoxTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool BoxTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	static bool BoxTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
};


// Class MultiTask2.MultiTask2UtilitiesLibrary
// 0x0000 (0x0028 - 0x0028)
class UMultiTask2UtilitiesLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiTask2UtilitiesLibrary"));
		return ptr;
	}


	static void UpdateNavigationData(class UActorComponent* Component);
	static bool UpdateInstancePhysicsBody(class UHierarchicalInstancedStaticMeshComponent* HISM, int InstanceIndex, bool bTeleport);
	static void SetMaximumLoopIterations(int MaximumLoopIterations);
	static bool SegmentTriangleIntersection(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& A, const struct FVector& B, const struct FVector& C, struct FVector* OutIntersectPoint, struct FVector* OutTriangleNormal);
	static void ResetRunaway();
	static void RemoveFromRoot(class UObject* Object);
	static int MixThreeIntegers(int Integer1, int Integer2, int Integer3);
	static bool IsRunning(class UMultiTaskBase* Task);
	static bool IsCanceled(class UMultiTaskBase* Task);
	static float GetTriangleAreaSize(const struct FVector& A, const struct FVector& B, const struct FVector& C);
	static void GetRandomScale(const struct FVector& Min, const struct FVector& Max, EMultiTask2ScaleType Type, const struct FRandomStream& RandomStream, struct FVector* Scale);
	static void GetRandomPointInTriangle(const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FRandomStream& RandomStream, struct FVector* OutPoint);
	static class UObject* GetContextWorld(class UObject* WorldContextObject);
	static void Cancel(class UMultiTaskBase* Task);
	static void AddToRoot(class UObject* Object);
};


// Class MultiTask2.MultiTask2VoxelLibrary
// 0x0000 (0x0028 - 0x0028)
class UMultiTask2VoxelLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiTask2VoxelLibrary"));
		return ptr;
	}


	static void VoxelCoordinatesToLocalLocation(const struct FVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue);
	static int VoxelCoordinatesToLinearIndex(const struct FIntVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings);
	static void LinearIndexToVoxelCoordinates(int LinearIndex, const struct FMarchingCubesSettings& Settings, struct FIntVector* VoxelCoordinates);
	static bool IsInRange(const struct FIntVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings);
	static void GetVoxelCoordinatesInRadius(const struct FTransform& GeometryTransform, const struct FVector& BrushLocation, const struct FVector& Radius, const struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* ReturnValue);
	static void GetVoxelCoordinatesAtLocation(const struct FTransform& GeometryTransform, const struct FVector& Location, const struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue);
	static int GetVerticeCount_VoxelData(const struct FMarchingCubesData& VoxelData);
	static bool GetVertice_VoxelData(const struct FMarchingCubesData& VoxelData, int VerticeIndex, struct FVector* OutValue);
	static int GetTriangleCount_VoxelData(const struct FMarchingCubesData& VoxelData);
	static bool GetTriangle_VoxelData(const struct FMarchingCubesData& VoxelData, int TriangleIndex, int* A, int* B, int* C);
	static void GetRelevantSlots(const struct FIntVector& RootSlot, int Radius, TArray<struct FIntVector> ExistingChunks, const struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* NewSlots, TArray<struct FIntVector>* OldRelevantSlots);
	static bool GetNeighbor(const struct FIntVector& VoxelCoordinates, const struct FIntVector& Direction, const struct FMarchingCubesSettings& Settings, struct FIntVector* Neighbor);
	static void GetLocationFromChunkSlot(const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue);
	static void GetChunkSlotFromLocation(const struct FVector& Location, const struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue);
	static void DoGenerateMarchingCubesTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UGenerateMarchingCubesTask*/ Class, const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, EMarchingCubesAlgorithm Algorithm, bool bForceManifold, bool bUseSharedPoints, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, struct FMarchingCubesData* VoxelData, EMultiTask2Branches* Out);
	static void DoConvertVoxelDataToMeshDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UGenerateMarchingCubesTask*/ Class, const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, EMarchingCubesNormal NormalType, bool bUseFlatShading, TArray<struct FMarchingCubesSimplifierSettings> SimplifierSettings, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, struct FMarchingCubesData* VoxelData, class UMultiTaskBase** Task, TArray<struct FMarchingCubesMeshData>* MeshData, EMultiTask2Branches* Out);
};


// Class MultiTask2.MultiTaskMutex
// 0x0028 (0x0050 - 0x0028)
class UMultiTaskMutex : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiTaskMutex"));
		return ptr;
	}


	void Unlock();
	bool TryLock();
	void Lock();
};


// Class MultiTask2.MultiTaskThreadPool
// 0x0010 (0x0038 - 0x0028)
class UMultiTaskThreadPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiTaskThreadPool"));
		return ptr;
	}


	int GetThreadsNum();
};


// Class MultiTask2.MultiThreadTaskLibrary
// 0x0000 (0x0028 - 0x0028)
class UMultiThreadTaskLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.MultiThreadTaskLibrary"));
		return ptr;
	}


	static void Sleep(float Seconds);
	static bool IsInGameThread();
	static int GetNumberOfCoresIncludingHyperthreads();
	static int GetNumberOfCores();
	static void DoUpdateInstances4(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector4> CustomData, int Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out);
	static void DoUpdateInstances3(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector> CustomData, int Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out);
	static void DoUpdateInstances2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector2D> CustomData, int Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out);
	static void DoUpdateInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int StartIndex, TArray<struct FTransform> Transforms, TArray<float> CustomData, int Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out);
	static void DoSpawnInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, TArray<struct FTransform> Transforms, int Chunks, bool bWorldSpace, bool bCreatePhysicsBodies, bool bCreateInternalDataCopies, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, TArray<int>* NewInstances, EMultiTask2Branches* Out);
	static void DoSingleThreadTask2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2BranchesWithBody* Out);
	static void DoSingleThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiThreadTask*/ Class, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, class UMultiTaskBase** Task, EMultiTask2Branches* Out);
	static void DoMultiThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* /*UMultiThreadTask*/ Class, int Count, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, TArray<class UMultiTaskBase*>* Tasks, EMultiTask2BranchesNoCancel* Out);
	static void DoDelaunayTriangulation2D(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, TArray<struct FVector2D>* Points, class UMultiTaskBase** Task, TArray<struct FMultiTask2Delaunay2DTriangle>* Triangles, EMultiTask2Branches* Out);
	static void DestroyThreadPoolImmediately(class UMultiTaskThreadPool* ThreadPool);
	static class UMultiTaskThreadPool* CreateThreadPool(class UObject* WorldContextObject, int NumQueuedThreads, int StackSize, EMultiTaskThreadPriority ThreadPriority, const struct FString& Name);
	static class UMultiTaskMutex* CreateMutex(class UObject* WorldContextObject);
};


// Class MultiTask2.PixelReaderLibrary
// 0x0000 (0x0028 - 0x0028)
class UPixelReaderLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.PixelReaderLibrary"));
		return ptr;
	}


	static void SetsRGB(bool NewValue, struct FPixelData* PixelData);
	static void SetSize(int Width, int Height, struct FPixelData* PixelData);
	static bool SetPixel(const struct FIntPoint& Coordinates, const struct FColor& Pixel, struct FPixelData* PixelData);
	static bool IsPixelDataValid(const struct FPixelData& PixelData);
	static int GetWidth(const struct FPixelData& PixelData);
	static bool GetPixel(const struct FPixelData& PixelData, const struct FIntPoint& Coordinates, struct FColor* Pixel);
	static int GetHeight(const struct FPixelData& PixelData);
	static void DoReadUrlToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& URL, float Timeout, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, EMultiTask2Branches* Out, struct FPixelData* PixelData, class UMultiTaskBase** Task);
	static void DoReadPixelsTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UTexture* Texture, EMultiTask2BranchesNoCancel* Out, struct FPixelData* PixelData);
	static void DoReadFileToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& File, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool, EMultiTask2BranchesNoCancel* Out, struct FPixelData* PixelData);
	static class UTexture2D* CreateTextureFromPixelData(class UObject* Outer, const struct FPixelData& PixelData);
};


// Class MultiTask2.PixelReaderTask
// 0x0030 (0x0110 - 0x00E0)
class UPixelReaderTask : public UMultiThreadTask
{
public:
	struct FPixelData                                  PixelData;                                                // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.PixelReaderTask"));
		return ptr;
	}

};


// Class MultiTask2.SpawnInstancesTask
// 0x0100 (0x01E0 - 0x00E0)
class USpawnInstancesTask : public UMultiThreadTask
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x00E0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.SpawnInstancesTask"));
		return ptr;
	}

};


// Class MultiTask2.SyncUtilitiesLibrary
// 0x0000 (0x0028 - 0x0028)
class USyncUtilitiesLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.SyncUtilitiesLibrary"));
		return ptr;
	}


	static void ThreadSafeIntegerSetThreadSafeInteger(const struct FThreadSafeInteger& B, struct FThreadSafeInteger* A);
	static void ThreadSafeIntegerSetInteger(int B, struct FThreadSafeInteger* A);
	static void ThreadSafeIntegerIncrement(struct FThreadSafeInteger* ThreadSafeInteger);
	static bool ThreadSafeIntegerEqualsThreadSafeInteger(const struct FThreadSafeInteger& A, const struct FThreadSafeInteger& B);
	static bool ThreadSafeIntegerEqualsInt32(const struct FThreadSafeInteger& A, int B);
	static void ThreadSafeIntegerDecrement(struct FThreadSafeInteger* ThreadSafeInteger);
	static void ThreadSafeBooleanSetThreadSafeBoolean(const struct FThreadSafeBoolean& B, struct FThreadSafeBoolean* A);
	static void ThreadSafeBooleanSetBoolean(bool B, struct FThreadSafeBoolean* A);
	static bool ThreadSafeBooleanEqualsThreadSafeBoolean(const struct FThreadSafeBoolean& A, const struct FThreadSafeBoolean& B);
	static bool ThreadSafeBooleanEqualsBoolean(const struct FThreadSafeBoolean& A, bool B);
	static struct FString Conv_ThreadSafeIntegerToString(const struct FThreadSafeInteger& ThreadSafeInteger);
	static int Conv_ThreadSafeIntegerToInt32(const struct FThreadSafeInteger& ThreadSafeInteger);
	static struct FString Conv_ThreadSafeBooleanToString(const struct FThreadSafeBoolean& ThreadSafeBoolean);
	static bool Conv_ThreadSafeBooleanToBool(const struct FThreadSafeBoolean& ThreadSafeBoolean);
};


// Class MultiTask2.UpdateInstancesTask
// 0x0140 (0x0220 - 0x00E0)
class UUpdateInstancesTask : public UMultiThreadTask
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x00E0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.UpdateInstancesTask"));
		return ptr;
	}

};


// Class MultiTask2.UrlToPixelDataTask
// 0x0050 (0x0130 - 0x00E0)
class UUrlToPixelDataTask : public UMultiThreadTask
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MultiTask2.UrlToPixelDataTask"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
