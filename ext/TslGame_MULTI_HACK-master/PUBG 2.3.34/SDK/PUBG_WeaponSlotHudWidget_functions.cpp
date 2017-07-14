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

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsInventoryShow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bShow                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::IsInventoryShow(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsInventoryShow");

	UWeaponSlotHudWidget_C_IsInventoryShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnPrepass_1");

	UWeaponSlotHudWidget_C_OnPrepass_1_Params params;
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

	UWeaponSlotHudWidget_C_OnUnarmWeapon_Params params;
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

	UWeaponSlotHudWidget_C_OnWeaponProcessorArmed_Params params;

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

	UWeaponSlotHudWidget_C_DoseSelectingWeaon_Params params;

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

	UWeaponSlotHudWidget_C_OnWeaponSlotFadeOutFinished_Params params;

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

	UWeaponSlotHudWidget_C_OnChangeWeapon_Params params;
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
// TEnumAsByte<ESlateVisibility>  InVisibility                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotHudWidget_C::SetSlotVisibility(int SlotIndex, TEnumAsByte<ESlateVisibility> InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.SetSlotVisibility");

	UWeaponSlotHudWidget_C_SetSlotVisibility_Params params;
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

	UWeaponSlotHudWidget_C_OnHiddenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UWeaponSlotHudWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.GetVisibility_1");

	UWeaponSlotHudWidget_C_GetVisibility_1_Params params;

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

	UWeaponSlotHudWidget_C_IsHiddenPlay_Params params;

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

	UWeaponSlotHudWidget_C_OnHiddenStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnShowFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowFinished");

	UWeaponSlotHudWidget_C_OnShowFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowStart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnShowStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowStart");

	UWeaponSlotHudWidget_C_OnShowStart_Params params;

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

	UWeaponSlotHudWidget_C_IsShowPlay_Params params;

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

	UWeaponSlotHudWidget_C_HiddenSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.ShowSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::ShowSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.ShowSlot");

	UWeaponSlotHudWidget_C_ShowSlot_Params params;

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

	UWeaponSlotHudWidget_C_MoveTick_Params params;
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

	UWeaponSlotHudWidget_C_GetSelectedWidgetSlot_Params params;

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

	UWeaponSlotHudWidget_C_SetWaepon_Params params;
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

	UWeaponSlotHudWidget_C_CheckChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.InitializeWeaponSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::InitializeWeaponSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.InitializeWeaponSlot");

	UWeaponSlotHudWidget_C_InitializeWeaponSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnRefleshWeaponSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::OnRefleshWeaponSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnRefleshWeaponSlot");

	UWeaponSlotHudWidget_C_OnRefleshWeaponSlot_Params params;

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

	UWeaponSlotHudWidget_C_IsFirstArmWeapon_Params params;

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

	UWeaponSlotHudWidget_C_OnArmWeapon_Params params;
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

	UWeaponSlotHudWidget_C_Construct_Params params;

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

	UWeaponSlotHudWidget_C_Tick_Params params;
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

	UWeaponSlotHudWidget_C_MoveFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::MoveStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveStart");

	UWeaponSlotHudWidget_C_MoveStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.StartMoveThorwableWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::StartMoveThorwableWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.StartMoveThorwableWeapon");

	UWeaponSlotHudWidget_C_StartMoveThorwableWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.FinishMoveThrowableWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotHudWidget_C::FinishMoveThrowableWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.FinishMoveThrowableWeapon");

	UWeaponSlotHudWidget_C_FinishMoveThrowableWeapon_Params params;

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

	UWeaponSlotHudWidget_C_ExecuteUbergraph_WeaponSlotHudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
