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

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnPrepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnUnarmWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUnarmed                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::OnUnarmWeapon(bool bIsUnarmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnUnarmWeapon");

	struct
	{
		bool                           bIsUnarmed;
	} params;
	params.bIsUnarmed = bIsUnarmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnWeaponProcessorArmed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnWeaponProcessorArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnWeaponProcessorArmed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.DoseSelectingWeaon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bSelect                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::DoseSelectingWeaon(bool* bSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.DoseSelectingWeaon");

	struct
	{
		bool                           bSelect;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSelect != nullptr)
		*bSelect = params.bSelect;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnWeaponSlotFadeOutFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnWeaponSlotFadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnWeaponSlotFadeOutFinished");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnChangeWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::OnChangeWeapon(int WeaponIndex, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnChangeWeapon");

	struct
	{
		int                            WeaponIndex;
		float                          Duration;
	} params;
	params.WeaponIndex = WeaponIndex;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.SetSlotVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class ESlateVisibility> InVisibility                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::SetSlotVisibility(int SlotIndex, TEnumAsByte<enum class ESlateVisibility> InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.SetSlotVisibility");

	struct
	{
		int                            SlotIndex;
		TEnumAsByte<enum class ESlateVisibility> InVisibility;
	} params;
	params.SlotIndex = SlotIndex;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnHiddenFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnHiddenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnHiddenFinished");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UWeaponSlotHudWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.GetVisibility_1");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsHiddenPlay
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPlay                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::IsHiddenPlay(bool* IsPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsHiddenPlay");

	struct
	{
		bool                           IsPlay;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlay != nullptr)
		*IsPlay = params.IsPlay;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnHiddenStart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnHiddenStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnHiddenStart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnShowFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowFinished");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowStart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnShowStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowStart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsShowPlay
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::IsShowPlay(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsShowPlay");

	struct
	{
		bool                           NewParam;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.HiddenSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::HiddenSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.HiddenSlot");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.ShowSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::ShowSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.ShowSlot");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::MoveTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveTick");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.GetSelectedWidgetSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWeaponSlotWidget_C*     WeaponSlot                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::GetSelectedWidgetSlot(class UWeaponSlotWidget_C** WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.GetSelectedWidgetSlot");

	struct
	{
		class UWeaponSlotWidget_C*     WeaponSlot;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponSlot != nullptr)
		*WeaponSlot = params.WeaponSlot;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.SetWaepon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMove                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::SetWaepon(int Index, bool bMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.SetWaepon");

	struct
	{
		int                            Index;
		bool                           bMove;
	} params;
	params.Index = Index;
	params.bMove = bMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.CheckChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::CheckChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.CheckChanged");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.InitializeWeaponSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::InitializeWeaponSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.InitializeWeaponSlot");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnRefleshWeaponSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnRefleshWeaponSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnRefleshWeaponSlot");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsFirstArmWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsFrist                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::IsFirstArmWeapon(bool* IsFrist)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsFirstArmWeapon");

	struct
	{
		bool                           IsFrist;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFrist != nullptr)
		*IsFrist = params.IsFrist;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnArmWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMove                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::OnArmWeapon(int WeaponIndex, bool bMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnArmWeapon");

	struct
	{
		int                            WeaponIndex;
		bool                           bMove;
	} params;
	params.WeaponIndex = WeaponIndex;
	params.bMove = bMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.Tick");

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


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::MoveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveFinished");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::MoveStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveStart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.StartMoveThorwableWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::StartMoveThorwableWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.StartMoveThorwableWeapon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.FinishMoveThrowableWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::FinishMoveThrowableWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.FinishMoveThrowableWeapon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.ExecuteUbergraph_WeaponSlotHudWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::ExecuteUbergraph_WeaponSlotHudWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.ExecuteUbergraph_WeaponSlotHudWidget");

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
