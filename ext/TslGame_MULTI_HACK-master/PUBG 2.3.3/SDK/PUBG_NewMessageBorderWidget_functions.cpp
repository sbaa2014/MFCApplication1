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

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.TickMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::TickMove(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.TickMove");

	struct
	{
		float                          Time;
	} params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.UpdatePositionInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMessageBorderWidget_C::UpdatePositionInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.UpdatePositionInfo");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.IsFull
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Full                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::IsFull(bool* Full)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.IsFull");

	struct
	{
		bool                           Full;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Full != nullptr)
		*Full = params.Full;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.SetSizeRule
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class ESlateSizeRule> TopSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class ESlateSizeRule> BottomSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::SetSizeRule(TEnumAsByte<enum class ESlateSizeRule> TopSize, TEnumAsByte<enum class ESlateSizeRule> BottomSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.SetSizeRule");

	struct
	{
		TEnumAsByte<enum class ESlateSizeRule> TopSize;
		TEnumAsByte<enum class ESlateSizeRule> BottomSize;
	} params;
	params.TopSize = TopSize;
	params.BottomSize = BottomSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.OnRemoveMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNewSystemMessageWidget_C* SystemMessageWidget            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::OnRemoveMessage(class UNewSystemMessageWidget_C* SystemMessageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.OnRemoveMessage");

	struct
	{
		class UNewSystemMessageWidget_C* SystemMessageWidget;
	} params;
	params.SystemMessageWidget = SystemMessageWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.AddMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNewSystemMessageWidget_C* Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::AddMessage(class UNewSystemMessageWidget_C* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.AddMessage");

	struct
	{
		class UNewSystemMessageWidget_C* Message;
	} params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.DisplayKilledMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm)

void UNewMessageBorderWidget_C::DisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.DisplayKilledMessage");

	struct
	{
		struct FDeathMessage           DeathMessage;
	} params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewMessageBorderWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.Tick");

	struct
	{
		struct FGeometry*              MyGeometry;
		float*                         InDeltaTime;
	} params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.ExecuteUbergraph_NewMessageBorderWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::ExecuteUbergraph_NewMessageBorderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMessageBorderWidget.NewMessageBorderWidget_C.ExecuteUbergraph_NewMessageBorderWidget");

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
