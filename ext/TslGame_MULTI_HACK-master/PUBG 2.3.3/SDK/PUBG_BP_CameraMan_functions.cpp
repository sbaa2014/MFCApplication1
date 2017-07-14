#pragma once

// PUBG (Beta) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CameraMan.BP_CameraMan_C.Init_Moto
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_Motorbike_03_C*      ParentRef                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CameraMan_C::Init_Moto(class ABP_Motorbike_03_C* ParentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraMan.BP_CameraMan_C.Init_Moto");

	struct
	{
		class ABP_Motorbike_03_C*      ParentRef;
	} params;
	params.ParentRef = ParentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           ParentRef                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CameraMan_C::Init(class ATslCharacter* ParentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraMan.BP_CameraMan_C.Init");

	struct
	{
		class ATslCharacter*           ParentRef;
	} params;
	params.ParentRef = ParentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CameraMan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CameraMan_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraMan.BP_CameraMan_C.ReceiveTick");

	struct
	{
		float*                         DeltaSeconds;
	} params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CameraMan_C::ExecuteUbergraph_BP_CameraMan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan");

	struct
	{
		int                            EntryPoint;
	} params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
