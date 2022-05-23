#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MultiTask2.EMarchingCubesNormal
enum class EMarchingCubesNormal : uint8_t
{
	EMarchingCubesNormal__GradientAdvanced = 0,
	EMarchingCubesNormal__GradientBasic = 1,
	EMarchingCubesNormal__Triangle = 2,
	EMarchingCubesNormal__EMarchingCubesNormal_MAX = 3
};


// Enum MultiTask2.EMarchingCubesSimplifierType
enum class EMarchingCubesSimplifierType : uint8_t
{
	EMarchingCubesSimplifierType__Vertex = 0,
	EMarchingCubesSimplifierType__Triangle = 1,
	EMarchingCubesSimplifierType__EMarchingCubesSimplifierType_MAX = 2
};


// Enum MultiTask2.EMarchingCubesSimplifierMethod
enum class EMarchingCubesSimplifierMethod : uint8_t
{
	EMarchingCubesSimplifierMethod__QEM = 0,
	EMarchingCubesSimplifierMethod__VolumePreservation = 1,
	EMarchingCubesSimplifierMethod__EMarchingCubesSimplifierMethod_MAX = 2
};


// Enum MultiTask2.EMarchingCubesAlgorithm
enum class EMarchingCubesAlgorithm : uint8_t
{
	EMarchingCubesAlgorithm__Simple = 0,
	EMarchingCubesAlgorithm__Dual  = 1,
	EMarchingCubesAlgorithm__Tetrahedrons = 2,
	EMarchingCubesAlgorithm__EMarchingCubesAlgorithm_MAX = 3
};


// Enum MultiTask2.EMultiTask2ScaleType
enum class EMultiTask2ScaleType : uint8_t
{
	EMultiTask2ScaleType__Uniform  = 0,
	EMultiTask2ScaleType__Free     = 1,
	EMultiTask2ScaleType__LockXY   = 2,
	EMultiTask2ScaleType__LockXZ   = 3,
	EMultiTask2ScaleType__LockYZ   = 4,
	EMultiTask2ScaleType__EMultiTask2ScaleType_MAX = 5
};


// Enum MultiTask2.ERuntimeStaticMeshCollisionType
enum class ERuntimeStaticMeshCollisionType : uint8_t
{
	ERuntimeStaticMeshCollisionType__None = 0,
	ERuntimeStaticMeshCollisionType__Simple = 1,
	ERuntimeStaticMeshCollisionType__Convex = 2,
	ERuntimeStaticMeshCollisionType__ERuntimeStaticMeshCollisionType_MAX = 3
};


// Enum MultiTask2.EMultiTask2BranchesNoCompleteWithBody
enum class EMultiTask2BranchesNoCompleteWithBody : uint8_t
{
	EMultiTask2BranchesNoCompleteWithBody__OnStart = 0,
	EMultiTask2BranchesNoCompleteWithBody__OnTaskBody = 1,
	EMultiTask2BranchesNoCompleteWithBody__OnCanceled = 2,
	EMultiTask2BranchesNoCompleteWithBody__EMultiTask2BranchesNoCompleteWithBody_MAX = 3
};


// Enum MultiTask2.EMultiTask2BranchesNoComplete
enum class EMultiTask2BranchesNoComplete : uint8_t
{
	EMultiTask2BranchesNoComplete__OnStart = 0,
	EMultiTask2BranchesNoComplete__OnCanceled = 1,
	EMultiTask2BranchesNoComplete__EMultiTask2BranchesNoComplete_MAX = 2
};


// Enum MultiTask2.EMultiTask2BranchesNoCancel
enum class EMultiTask2BranchesNoCancel : uint8_t
{
	EMultiTask2BranchesNoCancel__OnStart = 0,
	EMultiTask2BranchesNoCancel__OnCompleted = 1,
	EMultiTask2BranchesNoCancel__EMultiTask2BranchesNoCancel_MAX = 2
};


// Enum MultiTask2.EMultiTask2BranchesWithBody
enum class EMultiTask2BranchesWithBody : uint8_t
{
	EMultiTask2BranchesWithBody__OnStart = 0,
	EMultiTask2BranchesWithBody__OnTaskBody = 1,
	EMultiTask2BranchesWithBody__OnCompleted = 2,
	EMultiTask2BranchesWithBody__OnCanceled = 3,
	EMultiTask2BranchesWithBody__EMultiTask2BranchesWithBody_MAX = 4
};


// Enum MultiTask2.EMultiTask2Branches
enum class EMultiTask2Branches : uint8_t
{
	EMultiTask2Branches__OnStart   = 0,
	EMultiTask2Branches__OnCompleted = 1,
	EMultiTask2Branches__OnCanceled = 2,
	EMultiTask2Branches__EMultiTask2Branches_MAX = 3
};


// Enum MultiTask2.EMultiTaskThreadPriority
enum class EMultiTaskThreadPriority : uint8_t
{
	EMultiTaskThreadPriority__Normal = 0,
	EMultiTaskThreadPriority__AboveNormal = 1,
	EMultiTaskThreadPriority__BelowNormal = 2,
	EMultiTaskThreadPriority__Highest = 3,
	EMultiTaskThreadPriority__Lowest = 4,
	EMultiTaskThreadPriority__SlightlyBelowNormal = 5,
	EMultiTaskThreadPriority__TimeCritical = 6,
	EMultiTaskThreadPriority__EMultiTaskThreadPriority_MAX = 7
};


// Enum MultiTask2.ETaskExecutionType
enum class ETaskExecutionType : uint8_t
{
	ETaskExecutionType__TaskGraph  = 0,
	ETaskExecutionType__Thread     = 1,
	ETaskExecutionType__ThreadPool = 2,
	ETaskExecutionType__ETaskExecutionType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
