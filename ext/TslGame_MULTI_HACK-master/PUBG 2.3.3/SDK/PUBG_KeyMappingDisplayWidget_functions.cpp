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

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.UPdateKeySlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyMappingDisplayWidget_C::UPdateKeySlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.UPdateKeySlot");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.GetCurrentSettingsKeyList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FTslInputKey>    CurrentKeyList                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UKeyMappingDisplayWidget_C::GetCurrentSettingsKeyList(TArray<struct FTslInputKey>* CurrentKeyList)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.GetCurrentSettingsKeyList");

	struct
	{
		TArray<struct FTslInputKey>    CurrentKeyList;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentKeyList != nullptr)
		*CurrentKeyList = params.CurrentKeyList;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.IsChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bChanged                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyMappingDisplayWidget_C::IsChanged(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.IsChanged");

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


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslInputKey            OriginKey                      (CPF_Parm)
// struct FTslInputKey            ChangeKey                      (CPF_Parm)

void UKeyMappingDisplayWidget_C::OnChange(const struct FTslInputKey& OriginKey, const struct FTslInputKey& ChangeKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnChange");

	struct
	{
		struct FTslInputKey            OriginKey;
		struct FTslInputKey            ChangeKey;
	} params;
	params.OriginKey = OriginKey;
	params.ChangeKey = ChangeKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnDelete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslInputKey            DeleteKey                      (CPF_Parm)

void UKeyMappingDisplayWidget_C::OnDelete(const struct FTslInputKey& DeleteKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnDelete");

	struct
	{
		struct FTslInputKey            DeleteKey;
	} params;
	params.DeleteKey = DeleteKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnAdd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslInputKey            NewKey                         (CPF_Parm)

void UKeyMappingDisplayWidget_C::OnAdd(const struct FTslInputKey& NewKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnAdd");

	struct
	{
		struct FTslInputKey            NewKey;
	} params;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.UpdateKeyList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyMappingDisplayWidget_C::UpdateKeyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.UpdateKeyList");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnKeySlotButtonClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class KeyState> KeyState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            OriginKey                      (CPF_Parm)
// struct FTslInputKey            LastDownKey                    (CPF_Parm)

void UKeyMappingDisplayWidget_C::OnKeySlotButtonClicked(TEnumAsByte<enum class KeyState> KeyState, const struct FTslInputKey& OriginKey, const struct FTslInputKey& LastDownKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnKeySlotButtonClicked");

	struct
	{
		TEnumAsByte<enum class KeyState> KeyState;
		struct FTslInputKey            OriginKey;
		struct FTslInputKey            LastDownKey;
	} params;
	params.KeyState = KeyState;
	params.OriginKey = OriginKey;
	params.LastDownKey = LastDownKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.InitializeMappingDisplaySlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyMappingDisplayWidget_C::InitializeMappingDisplaySlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.InitializeMappingDisplaySlot");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.GetDisplayName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UKeyMappingDisplayWidget_C::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.GetDisplayName");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeyMappingDisplayWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyMappingDisplayWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnApply");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.ExecuteUbergraph_KeyMappingDisplayWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyMappingDisplayWidget_C::ExecuteUbergraph_KeyMappingDisplayWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.ExecuteUbergraph_KeyMappingDisplayWidget");

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
