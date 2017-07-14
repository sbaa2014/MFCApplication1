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

// Function SystemMessageWidget.SystemMessageWidget_C.AddMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USystemMessageWidget_C::AddMessage(class UMessageWidget_C* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SystemMessageWidget.SystemMessageWidget_C.AddMessage");

	struct
	{
		class UMessageWidget_C*        Message;
	} params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SystemMessageWidget.SystemMessageWidget_C.DisplaySystemMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)

void USystemMessageWidget_C::DisplaySystemMessage(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SystemMessageWidget.SystemMessageWidget_C.DisplaySystemMessage");

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
