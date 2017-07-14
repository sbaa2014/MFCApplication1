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

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.GetLineCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            LineCount                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameGroupWidget_C::GetLineCount(int* LineCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.GetLineCount");

	struct
	{
		int                            LineCount;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LineCount != nullptr)
		*LineCount = params.LineCount;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_TextBlock_4_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameGroupWidget_C::On_TextBlock_4_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_TextBlock_4_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.SetSmall
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSmall                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameGroupWidget_C::SetSmall(bool bSmall)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.SetSmall");

	struct
	{
		bool                           bSmall;
	} params;
	params.bSmall = bSmall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_GroupLayer_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameGroupWidget_C::On_GroupLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_GroupLayer_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Octa_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameGroupWidget_C::On_Octa_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Octa_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Hexa_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameGroupWidget_C::On_Hexa_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Hexa_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Squad_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameGroupWidget_C::On_Squad_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Squad_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_SoloOrDuo_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameGroupWidget_C::On_SoloOrDuo_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_SoloOrDuo_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.Get_TextBlock_4_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UObserverMatchResultNameGroupWidget_C::Get_TextBlock_4_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.Get_TextBlock_4_Text_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.AddPlayerMatchResultInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslPlayerMatchResultInfo NewItem                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UObserverMatchResultNameGroupWidget_C::AddPlayerMatchResultInfo(const struct FTslPlayerMatchResultInfo& NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.AddPlayerMatchResultInfo");

	struct
	{
		struct FTslPlayerMatchResultInfo NewItem;
	} params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
