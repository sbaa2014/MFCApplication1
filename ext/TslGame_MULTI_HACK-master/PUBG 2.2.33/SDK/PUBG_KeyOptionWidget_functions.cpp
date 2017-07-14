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

// Function KeyOptionWidget.KeyOptionWidget_C.IsKeyUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Keyup                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::IsKeyUp(bool* Keyup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.IsKeyUp");

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


// Function KeyOptionWidget.KeyOptionWidget_C.DuplicateKeyPopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class EPopupButtonID> PopupButtonId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::DuplicateKeyPopup(TEnumAsByte<enum class EPopupButtonID> PopupButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.DuplicateKeyPopup");

	struct
	{
		TEnumAsByte<enum class EPopupButtonID> PopupButtonId;
	} params;
	params.PopupButtonId = PopupButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.OnChangeKey
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USingKeyDisplayWidget_C* SingleKeyDisplayWidget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            TslInputKey                    (CPF_Parm)

void UKeyOptionWidget_C::OnChangeKey(class USingKeyDisplayWidget_C* SingleKeyDisplayWidget, const struct FTslInputKey& TslInputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.OnChangeKey");

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


// Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyAndMouseSetting
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::InitializeKeyAndMouseSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyAndMouseSetting");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.IsEnableApply
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::IsEnableApply(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.IsEnableApply");

	struct
	{
		bool                           bResult;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function KeyOptionWidget.KeyOptionWidget_C.IsChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bChanged                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::IsChanged(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.IsChanged");

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


// Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::InitializeKeyOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyOption");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.OnDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.OnDefault");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.OnApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.OnApply");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.OnReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.OnReset");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.ExecuteUbergraph_KeyOptionWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::ExecuteUbergraph_KeyOptionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.ExecuteUbergraph_KeyOptionWidget");

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
