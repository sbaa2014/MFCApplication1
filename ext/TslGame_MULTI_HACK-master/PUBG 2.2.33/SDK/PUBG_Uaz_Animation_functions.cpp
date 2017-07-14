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

// Function Uaz_Animation.Uaz_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_F45EEFEE4F1F650FBF78D1ACCB01BDDE
// (FUNC_BlueprintEvent)

void UUaz_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_F45EEFEE4F1F650FBF78D1ACCB01BDDE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Uaz_Animation.Uaz_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_F45EEFEE4F1F650FBF78D1ACCB01BDDE");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Uaz_Animation.Uaz_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_92CE5E20435206E5C4125B81AE2D5E5E
// (FUNC_BlueprintEvent)

void UUaz_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_92CE5E20435206E5C4125B81AE2D5E5E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Uaz_Animation.Uaz_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_92CE5E20435206E5C4125B81AE2D5E5E");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Uaz_Animation.Uaz_Animation_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUaz_Animation_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Uaz_Animation.Uaz_Animation_C.BlueprintUpdateAnimation");

	struct
	{
		float*                         DeltaTimeX;
	} params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Uaz_Animation.Uaz_Animation_C.ExecuteUbergraph_Uaz_Animation
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUaz_Animation_C::ExecuteUbergraph_Uaz_Animation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Uaz_Animation.Uaz_Animation_C.ExecuteUbergraph_Uaz_Animation");

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