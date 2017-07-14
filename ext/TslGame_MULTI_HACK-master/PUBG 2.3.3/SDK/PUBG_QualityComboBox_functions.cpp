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

// Function QualityComboBox.QualityComboBox_C.GetDisplayTextByOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   DisplayText                    (CPF_Parm, CPF_OutParm)

void UQualityComboBox_C::GetDisplayTextByOption(struct FText* DisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.GetDisplayTextByOption");

	struct
	{
		struct FText                   DisplayText;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayText != nullptr)
		*DisplayText = params.DisplayText;
}


// Function QualityComboBox.QualityComboBox_C.Get_ComboBox_bIsEnabled_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UQualityComboBox_C::Get_ComboBox_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.Get_ComboBox_bIsEnabled_1");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualityComboBox.QualityComboBox_C.On_ComboBox_GenerateWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Item                           (CPF_Parm, CPF_ZeroConstructor)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UQualityComboBox_C::On_ComboBox_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.On_ComboBox_GenerateWidget_1");

	struct
	{
		struct FString                 Item;
		class UWidget*                 ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualityComboBox.QualityComboBox_C.RemoveOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Option                         (CPF_Parm, CPF_ZeroConstructor)

void UQualityComboBox_C::RemoveOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.RemoveOption");

	struct
	{
		struct FString                 Option;
	} params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.GetSelectedOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 SelectedOption                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UQualityComboBox_C::GetSelectedOption(struct FString* SelectedOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.GetSelectedOption");

	struct
	{
		struct FString                 SelectedOption;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedOption != nullptr)
		*SelectedOption = params.SelectedOption;
}


// Function QualityComboBox.QualityComboBox_C.SetSelectedOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Option                         (CPF_Parm, CPF_ZeroConstructor)

void UQualityComboBox_C::SetSelectedOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.SetSelectedOption");

	struct
	{
		struct FString                 Option;
	} params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.ClearOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQualityComboBox_C::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.ClearOptions");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.AddOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionName                     (CPF_Parm, CPF_ZeroConstructor)
// struct FText                   DisplayOptionName              (CPF_Parm)

void UQualityComboBox_C::AddOption(const struct FString& OptionName, const struct FText& DisplayOptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.AddOption");

	struct
	{
		struct FString                 OptionName;
		struct FText                   DisplayOptionName;
	} params;
	params.OptionName = OptionName;
	params.DisplayOptionName = DisplayOptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<enum class ESelectInfo> SelectionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQualityComboBox_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<enum class ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<enum class ESelectInfo> SelectionType;
	} params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.ExecuteUbergraph_QualityComboBox
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQualityComboBox_C::ExecuteUbergraph_QualityComboBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.ExecuteUbergraph_QualityComboBox");

	struct
	{
		int                            EntryPoint;
	} params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.OnSelectionChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<enum class ESelectInfo> SelectionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQualityComboBox_C::OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<enum class ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<enum class ESelectInfo> SelectionType;
	} params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
