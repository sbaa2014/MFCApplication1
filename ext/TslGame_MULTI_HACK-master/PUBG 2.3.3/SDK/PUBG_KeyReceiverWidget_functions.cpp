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

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyDown");

	struct
	{
		struct FGeometry*              MyGeometry;
		struct FKeyEvent*              InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::UpdateKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKey");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.GetButtonSltateText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UKeyReceiverWidget_C::GetButtonSltateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.GetButtonSltateText");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry*              MyGeometry;
		struct FPointerEvent*          MouseEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnMouseButtonUp_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp_1");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown_1");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UKeyReceiverWidget_C::GetColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_2");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusReceived");

	struct
	{
		struct FGeometry*              MyGeometry;
		struct FFocusEvent*            InFocusEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry*              MyGeometry;
		struct FPointerEvent*          MouseEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.Keyup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UKeyReceiverWidget_C::Keyup(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.Keyup");

	struct
	{
		struct FKey                    Key;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.KeyDown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Input                          (CPF_Parm)

void UKeyReceiverWidget_C::KeyDown(const struct FKey& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.KeyDown");

	struct
	{
		struct FKey                    Input;
	} params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyUp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UKeyReceiverWidget_C::UpdateKeyUp(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyUp");

	struct
	{
		struct FKey                    Key;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyDown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UKeyReceiverWidget_C::UpdateKeyDown(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyDown");

	struct
	{
		struct FKey                    Key;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.IsInputKeyDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           KeyDown                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyReceiverWidget_C::IsInputKeyDown(bool* KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.IsInputKeyDown");

	struct
	{
		bool                           KeyDown;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyDown != nullptr)
		*KeyDown = params.KeyDown;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyUp");

	struct
	{
		struct FGeometry*              MyGeometry;
		struct FKeyEvent*              InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UKeyReceiverWidget_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_1");

	struct
	{
		struct FSlateColor             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnApplyKeyChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::OnApplyKeyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnApplyKeyChanged");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeySlotWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::UpdateKeySlotWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeySlotWidget");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.GetDownedKeyName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UKeyReceiverWidget_C::GetDownedKeyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.GetDownedKeyName");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)

void UKeyReceiverWidget_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusLost");

	struct
	{
		struct FFocusEvent*            InFocusEvent;
	} params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.ExecuteUbergraph_KeyReceiverWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyReceiverWidget_C::ExecuteUbergraph_KeyReceiverWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.ExecuteUbergraph_KeyReceiverWidget");

	struct
	{
		int                            EntryPoint;
	} params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnSettingLastDownedKey__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslInputKey            TslInputKey                    (CPF_Parm)

void UKeyReceiverWidget_C::OnSettingLastDownedKey__DelegateSignature(const struct FTslInputKey& TslInputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnSettingLastDownedKey__DelegateSignature");

	struct
	{
		struct FTslInputKey            TslInputKey;
	} params;
	params.TslInputKey = TslInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnSlotButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class KeyState> KeyState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            OriginKey                      (CPF_Parm)
// struct FTslInputKey            LastDownedKey                  (CPF_Parm)

void UKeyReceiverWidget_C::OnSlotButtonClicked__DelegateSignature(TEnumAsByte<enum class KeyState> KeyState, const struct FTslInputKey& OriginKey, const struct FTslInputKey& LastDownedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnSlotButtonClicked__DelegateSignature");

	struct
	{
		TEnumAsByte<enum class KeyState> KeyState;
		struct FTslInputKey            OriginKey;
		struct FTslInputKey            LastDownedKey;
	} params;
	params.KeyState = KeyState;
	params.OriginKey = OriginKey;
	params.LastDownedKey = LastDownedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
