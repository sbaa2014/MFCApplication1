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

// Function MessageHudWidget.MessageHudWidget_C.CreateGamePlayMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_Parm)
// TEnumAsByte<enum class ETextJustify> TextAlignment                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TextSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseFade_In                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAudioEvent*           Sound                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::CreateGamePlayMessage(const struct FText& Message, TEnumAsByte<enum class ETextJustify> TextAlignment, int TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.CreateGamePlayMessage");

	struct
	{
		struct FText                   Message;
		TEnumAsByte<enum class ETextJustify> TextAlignment;
		int                            TextSize;
		float                          Duration;
		bool                           bUseFade_In;
		class UAkAudioEvent*           Sound;
		class UNewSystemMessageWidget_C* MessageWidget;
	} params;
	params.Message = Message;
	params.TextAlignment = TextAlignment;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplayMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAudioEvent*           Sound                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::OnDisplayMessage(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message, float Duration, class UAkAudioEvent* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.OnDisplayMessage");

	struct
	{
		TEnumAsByte<enum class ESystemMessageType> MessageType;
		struct FText                   Message;
		float                          Duration;
		class UAkAudioEvent*           Sound;
	} params;
	params.MessageType = MessageType;
	params.Message = Message;
	params.Duration = Duration;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.CreateKillMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm)
// TEnumAsByte<enum class ETextJustify> TextAlignment                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateColor             TextColor                      (CPF_Parm)
// int                            TextSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseFade_In                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::CreateKillMessage(const struct FDeathMessage& DeathMessage, TEnumAsByte<enum class ETextJustify> TextAlignment, const struct FSlateColor& TextColor, int TextSize, float Duration, bool bUseFade_In, class UNewSystemMessageWidget_C** MessageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.CreateKillMessage");

	struct
	{
		struct FDeathMessage           DeathMessage;
		TEnumAsByte<enum class ETextJustify> TextAlignment;
		struct FSlateColor             TextColor;
		int                            TextSize;
		float                          Duration;
		bool                           bUseFade_In;
		class UNewSystemMessageWidget_C* MessageWidget;
	} params;
	params.DeathMessage = DeathMessage;
	params.TextAlignment = TextAlignment;
	params.TextColor = TextColor;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.CreateSystemMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_Parm)
// TEnumAsByte<enum class ETextJustify> TextAlignment                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateColor             TextColor                      (CPF_Parm)
// int                            TextSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseFade_In                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAudioEvent*           Sound                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::CreateSystemMessage(const struct FText& Message, TEnumAsByte<enum class ETextJustify> TextAlignment, const struct FSlateColor& TextColor, int TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.CreateSystemMessage");

	struct
	{
		struct FText                   Message;
		TEnumAsByte<enum class ETextJustify> TextAlignment;
		struct FSlateColor             TextColor;
		int                            TextSize;
		float                          Duration;
		bool                           bUseFade_In;
		class UAkAudioEvent*           Sound;
		class UNewSystemMessageWidget_C* MessageWidget;
	} params;
	params.Message = Message;
	params.TextAlignment = TextAlignment;
	params.TextColor = TextColor;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplayKilledMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm)

void UMessageHudWidget_C::OnDisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.OnDisplayKilledMessage");

	struct
	{
		struct FDeathMessage           DeathMessage;
	} params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplaySystemMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)

void UMessageHudWidget_C::OnDisplaySystemMessage(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.OnDisplaySystemMessage");

	struct
	{
		TEnumAsByte<enum class ESystemMessageType> MessageType;
		struct FText                   Message;
	} params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.InitializeMessageHUD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageHudWidget_C::InitializeMessageHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.InitializeMessageHUD");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMessageHudWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.ExecuteUbergraph_MessageHudWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::ExecuteUbergraph_MessageHudWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.ExecuteUbergraph_MessageHudWidget");

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
