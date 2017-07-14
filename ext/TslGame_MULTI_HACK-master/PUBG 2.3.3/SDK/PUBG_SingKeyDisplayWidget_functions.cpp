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

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.IsKeyUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Keyup                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USingKeyDisplayWidget_C::IsKeyUp(bool* Keyup)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.IsKeyUp");

	struct
	{
		bool                           Keyup;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keyup != nullptr)
		*Keyup = params.Keyup;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.UpdateKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USingKeyDisplayWidget_C::UpdateKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.UpdateKey");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.IsChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bChanged                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USingKeyDisplayWidget_C::IsChanged(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.IsChanged");

	struct
	{
		bool                           bChanged;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanged != nullptr)
		*bChanged = params.bChanged;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.InitializeKeyDIsplayWIdget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USingKeyDisplayWidget_C::InitializeKeyDIsplayWIdget(bool bDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.InitializeKeyDIsplayWIdget");

	struct
	{
		bool                           bDefault;
	} params;
	params.bDefault = bDefault;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USingKeyDisplayWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USingKeyDisplayWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnApply");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USingKeyDisplayWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnDefault");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USingKeyDisplayWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnReset");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.BndEvt__KeySlotWidget_2_K2Node_ComponentBoundEvent_12_OnSettingLastDownedKey__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FTslInputKey            TslInputKey                    (CPF_Parm)

void USingKeyDisplayWidget_C::BndEvt__KeySlotWidget_2_K2Node_ComponentBoundEvent_12_OnSettingLastDownedKey__DelegateSignature(const struct FTslInputKey& TslInputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.BndEvt__KeySlotWidget_2_K2Node_ComponentBoundEvent_12_OnSettingLastDownedKey__DelegateSignature");

	struct
	{
		struct FTslInputKey            TslInputKey;
	} params;
	params.TslInputKey = TslInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.ExecuteUbergraph_SingKeyDisplayWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USingKeyDisplayWidget_C::ExecuteUbergraph_SingKeyDisplayWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.ExecuteUbergraph_SingKeyDisplayWidget");

	struct
	{
		int                            EntryPoint;
	} params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnInputedKey__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USingKeyDisplayWidget_C* SingleKeyDisplayWidget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            TslInputKey                    (CPF_Parm)

void USingKeyDisplayWidget_C::OnInputedKey__DelegateSignature(class USingKeyDisplayWidget_C* SingleKeyDisplayWidget, const struct FTslInputKey& TslInputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnInputedKey__DelegateSignature");

	struct
	{
		class USingKeyDisplayWidget_C* SingleKeyDisplayWidget;
		struct FTslInputKey            TslInputKey;
	} params;
	params.SingleKeyDisplayWidget = SingleKeyDisplayWidget;
	params.TslInputKey = TslInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
