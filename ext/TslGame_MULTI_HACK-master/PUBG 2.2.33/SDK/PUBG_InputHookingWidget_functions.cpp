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

// Function InputHookingWidget.InputHookingWidget_C.OnInputAxis
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInputHookingWidget_C::OnInputAxis(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputHookingWidget.InputHookingWidget_C.OnInputAxis");

	struct
	{
		float                          Scale;
	} params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputHookingWidget.InputHookingWidget_C.OnInputAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInputHookingWidget_C::OnInputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputHookingWidget.InputHookingWidget_C.OnInputAction");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
