#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RoadRuntime.CrossActor.UpdateSideMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::UpdateSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideMesh");

	struct
	{
		class UStaticMesh*             InPrototype;
		struct FVector                 MeshRelativeLocation;
		struct FRotator                MeshRelativeRotation;
		int                            SocketIndex;
		bool                           IsEnable;
		bool                           IsNormalized;
	} params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.UpdateSideActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideActor");

	struct
	{
		class UClass*                  InPrototype;
		struct FVector                 ActorRelativeLocation;
		struct FRotator                ActorRelativeRotation;
		int                            SocketIndex;
		bool                           IsEnable;
		bool                           IsNormalized;
	} params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideMesh");

	struct
	{
		class UStaticMesh*             InPrototype;
		struct FVector                 MeshRelativeLocation;
		struct FRotator                MeshRelativeRotation;
		int                            SocketIndex;
		bool                           IsEnable;
		bool                           IsNormalized;
	} params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideActor");

	struct
	{
		class UClass*                  InPrototype;
		struct FVector                 ActorRelativeLocation;
		struct FRotator                ActorRelativeRotation;
		int                            SocketIndex;
		bool                           IsEnable;
		bool                           IsNormalized;
	} params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.DestroySideObjects
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrossActor::DestroySideObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.DestroySideObjects");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSplineMesh
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            MeshIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSplineMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSplineMesh");

	struct
	{
		int                            MeshIndex;
	} params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideMeshes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSideMeshes(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideMeshes");

	struct
	{
		class UStaticMesh*             InPrototype;
		struct FVector                 MeshRelativeLocation;
		struct FRotator                MeshRelativeRotation;
		int                            SocketIndex;
		int                            InShift;
		int                            InSpacing;
		bool                           IsEnable;
		bool                           IsNormalized;
	} params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideActor");

	struct
	{
		class UClass*                  InPrototype;
		struct FVector                 ActorRelativeLocation;
		struct FRotator                ActorRelativeRotation;
		int                            SocketIndex;
		int                            InShift;
		int                            InSpacing;
		bool                           IsEnable;
		bool                           IsNormalized;
	} params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSegment
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            SegmentIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USplineComponent*        SplineComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class ESplineMeshAxis> InAxis                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<enum class ESplineMeshAxis> InAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSegment");

	struct
	{
		int                            SegmentIndex;
		class USplineComponent*        SplineComponent;
		class UStaticMesh*             StaticMesh;
		TEnumAsByte<enum class ESplineMeshAxis> InAxis;
	} params;
	params.SegmentIndex = SegmentIndex;
	params.SplineComponent = SplineComponent;
	params.StaticMesh = StaticMesh;
	params.InAxis = InAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideMesh");

	struct
	{
		class UStaticMesh*             InPrototype;
		struct FVector                 MeshRelativeLocation;
		struct FRotator                MeshRelativeRotation;
		int                            SocketIndex;
		int                            InShift;
		int                            InSpacing;
		bool                           IsEnable;
		bool                           IsNormalized;
	} params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideActor");

	struct
	{
		class UClass*                  InPrototype;
		struct FVector                 ActorRelativeLocation;
		struct FRotator                ActorRelativeRotation;
		int                            SocketIndex;
		int                            InShift;
		int                            InSpacing;
		bool                           IsEnable;
		bool                           IsNormalized;
	} params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.DestroySideObjects
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ARoadActor::DestroySideObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.DestroySideObjects");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ClearSplineMeshes
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ARoadActor::ClearSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ClearSplineMeshes");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ApproxLength
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FInterpCurveVector      SplineInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          Start                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          End                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ApproxSections                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ARoadActor::STATIC_ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ApproxLength");

	struct
	{
		struct FInterpCurveVector      SplineInfo;
		float                          Start;
		float                          End;
		int                            ApproxSections;
		float                          ReturnValue;
	} params;
	params.SplineInfo = SplineInfo;
	params.Start = Start;
	params.End = End;
	params.ApproxSections = ApproxSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RoadRuntime.RoadActor.AddSplineMesh
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            MeshIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::AddSplineMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.AddSplineMesh");

	struct
	{
		int                            MeshIndex;
	} params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
