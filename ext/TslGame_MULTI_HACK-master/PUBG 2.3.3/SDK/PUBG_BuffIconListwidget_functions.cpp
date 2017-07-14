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

// Function BuffIconListwidget.BuffIconListWidget_C.UpdateRunBuffIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuffIconListWidget_C::UpdateRunBuffIcon(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.UpdateRunBuffIcon");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuffIconListwidget.BuffIconListWidget_C.UpdateHealBuffIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuffIconListWidget_C::UpdateHealBuffIcon(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.UpdateHealBuffIcon");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuffIconListwidget.BuffIconListWidget_C.HealBuffIconVisibilityUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuffIconListWidget_C::HealBuffIconVisibilityUpdate(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.HealBuffIconVisibilityUpdate");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuffIconListwidget.BuffIconListWidget_C.RunBuffIconVisibilityUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuffIconListWidget_C::RunBuffIconVisibilityUpdate(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.RunBuffIconVisibilityUpdate");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuffIconListwidget.BuffIconListWidget_C.GetRunBuffVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UBuffIconListWidget_C::GetRunBuffVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.GetRunBuffVisibility");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuffIconListwidget.BuffIconListWidget_C.GeHealBufftVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UBuffIconListWidget_C::GeHealBufftVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.GeHealBufftVisibility");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuffIconListwidget.BuffIconListWidget_C.GetBoostPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuffIconListWidget_C::GetBoostPercent(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.GetBoostPercent");

	struct
	{
		float                          NewParam;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BuffIconListwidget.BuffIconListWidget_C.GetRunBuffIconOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UBuffIconListWidget_C::GetRunBuffIconOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.GetRunBuffIconOpacity");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuffIconListwidget.BuffIconListWidget_C.GetHealBuffIconOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UBuffIconListWidget_C::GetHealBuffIconOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.GetHealBuffIconOpacity");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuffIconListwidget.BuffIconListWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBuffIconListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuffIconListwidget.BuffIconListWidget_C.OnStartBuff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BuffName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStart                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuffIconListWidget_C::OnStartBuff(const struct FName& BuffName, bool bStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.OnStartBuff");

	struct
	{
		struct FName                   BuffName;
		bool                           bStart;
	} params;
	params.BuffName = BuffName;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuffIconListwidget.BuffIconListWidget_C.ExecuteUbergraph_BuffIconListWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuffIconListWidget_C::ExecuteUbergraph_BuffIconListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuffIconListwidget.BuffIconListWidget_C.ExecuteUbergraph_BuffIconListWidget");

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
