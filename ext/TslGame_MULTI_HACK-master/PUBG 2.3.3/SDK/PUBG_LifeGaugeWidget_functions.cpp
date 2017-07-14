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

// Function LifeGaugeWidget.LifeGaugeWidget_C.WaningCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULifeGaugeWidget_C::WaningCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.WaningCheck");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.GetGorryPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          GroggyPercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::GetGorryPercent(float* GroggyPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.GetGorryPercent");

	struct
	{
		float                          GroggyPercent;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroggyPercent != nullptr)
		*GroggyPercent = params.GroggyPercent;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.IsGroggy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsGroggy                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::IsGroggy(bool* IsGroggy)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.IsGroggy");

	struct
	{
		bool                           IsGroggy;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGroggy != nullptr)
		*IsGroggy = params.IsGroggy;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.Get_BarkGround_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> ULifeGaugeWidget_C::Get_BarkGround_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.Get_BarkGround_Visibility_1");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.Get_BarkGround_ColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor ULifeGaugeWidget_C::Get_BarkGround_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.Get_BarkGround_ColorAndOpacity_1");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.FinishHealEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULifeGaugeWidget_C::FinishHealEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.FinishHealEffect");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.Get_LifeGauage_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> ULifeGaugeWidget_C::Get_LifeGauage_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.Get_LifeGauage_Visibility_1");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.OnNotifyHeal
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          StartHealth                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Health                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxHealth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::OnNotifyHeal(float StartHealth, float Health, float MaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.OnNotifyHeal");

	struct
	{
		float                          StartHealth;
		float                          Health;
		float                          MaxHealth;
	} params;
	params.StartHealth = StartHealth;
	params.Health = Health;
	params.MaxHealth = MaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.CalcGoalHealthAmountPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          GoalHealth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HealthPercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::CalcGoalHealthAmountPercent(float GoalHealth, float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.CalcGoalHealthAmountPercent");

	struct
	{
		float                          GoalHealth;
		float                          HealthPercent;
	} params;
	params.GoalHealth = GoalHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.CheckUseFirstAidorMediKit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULifeGaugeWidget_C::CheckUseFirstAidorMediKit()
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.CheckUseFirstAidorMediKit");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.GetShooterCharacterHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::GetShooterCharacterHealthPercent(float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.GetShooterCharacterHealthPercent");

	struct
	{
		float                          HealthPercent;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.SetLifeProgressBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::SetLifeProgressBar(float HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.SetLifeProgressBar");

	struct
	{
		float                          HealthPercent;
	} params;
	params.HealthPercent = HealthPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.OnNotifyHealAmount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Heal                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::OnNotifyHealAmount(float Heal)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.OnNotifyHealAmount");

	struct
	{
		float                          Heal;
	} params;
	params.Heal = Heal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.NotifyHit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::NotifyHit(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.NotifyHit");

	struct
	{
		float                          Damage;
	} params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.InitializeLIfeGauage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULifeGaugeWidget_C::InitializeLIfeGauage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.InitializeLIfeGauage");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULifeGaugeWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LifeGaugeWidget.LifeGaugeWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.Tick");

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


// Function LifeGaugeWidget.LifeGaugeWidget_C.ExecuteUbergraph_LifeGaugeWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULifeGaugeWidget_C::ExecuteUbergraph_LifeGaugeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LifeGaugeWidget.LifeGaugeWidget_C.ExecuteUbergraph_LifeGaugeWidget");

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
