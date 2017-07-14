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

// Function ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C.TickBikePose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Motorbike_03_Sidecart_C::TickBikePose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C.TickBikePose");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_Sidecart_AnimGraphNode_ModifyBone_10B9B8314ACCE17F6380548C486F3E77
// (FUNC_BlueprintEvent)

void UABP_Motorbike_03_Sidecart_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_Sidecart_AnimGraphNode_ModifyBone_10B9B8314ACCE17F6380548C486F3E77()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_Sidecart_AnimGraphNode_ModifyBone_10B9B8314ACCE17F6380548C486F3E77");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Motorbike_03_Sidecart_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C.BlueprintUpdateAnimation");

	struct
	{
		float*                         DeltaTimeX;
	} params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C.ExecuteUbergraph_ABP_Motorbike_03_Sidecart
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Motorbike_03_Sidecart_C::ExecuteUbergraph_ABP_Motorbike_03_Sidecart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C.ExecuteUbergraph_ABP_Motorbike_03_Sidecart");

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
