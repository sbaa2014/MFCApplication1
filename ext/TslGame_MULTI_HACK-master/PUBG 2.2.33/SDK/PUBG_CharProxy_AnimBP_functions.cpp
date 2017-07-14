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

// Function CharProxy_AnimBP.CharProxy_AnimBP_C.UpdateBlink
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::UpdateBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.UpdateBlink");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.GetAnimWeaponIKLeft
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              IKLeft                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UCharProxy_AnimBP_C::GetAnimWeaponIKLeft(struct FTransform* IKLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.GetAnimWeaponIKLeft");

	struct
	{
		struct FTransform              IKLeft;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IKLeft != nullptr)
		*IKLeft = params.IKLeft;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.GetAnimWeaponType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class EAnimWeaponType> AnimWeaponType                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharProxy_AnimBP_C::GetAnimWeaponType(TEnumAsByte<enum class EAnimWeaponType>* AnimWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.GetAnimWeaponType");

	struct
	{
		TEnumAsByte<enum class EAnimWeaponType> AnimWeaponType;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimWeaponType != nullptr)
		*AnimWeaponType = params.AnimWeaponType;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9
// (FUNC_BlueprintEvent)

void UCharProxy_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharProxy_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.BlueprintUpdateAnimation");

	struct
	{
		float*                         DeltaTimeX;
	} params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharProxy_AnimBP.CharProxy_AnimBP_C.ExecuteUbergraph_CharProxy_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharProxy_AnimBP_C::ExecuteUbergraph_CharProxy_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharProxy_AnimBP.CharProxy_AnimBP_C.ExecuteUbergraph_CharProxy_AnimBP");

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
