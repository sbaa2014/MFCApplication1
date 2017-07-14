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

// Function HitEffectWidget.HitEffectWidget_C.GetVisibility_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UHitEffectWidget_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.GetVisibility_2");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HitEffectWidget.HitEffectWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UHitEffectWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.GetVisibility_1");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HitEffectWidget.HitEffectWidget_C.GetColorAndOpacity_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UHitEffectWidget_C::GetColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.GetColorAndOpacity_2");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HitEffectWidget.HitEffectWidget_C.CalcAlphaOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCurveFloat*             Curve                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Offset                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitEffectWidget_C::CalcAlphaOffset(class UCurveFloat* Curve, float DeltaTime, float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.CalcAlphaOffset");

	struct
	{
		class UCurveFloat*             Curve;
		float                          DeltaTime;
		float                          Offset;
	} params;
	params.Curve = Curve;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function HitEffectWidget.HitEffectWidget_C.GetColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UHitEffectWidget_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.GetColorAndOpacity_1");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HitEffectWidget.HitEffectWidget_C.SetTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                HitTexture                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitEffectWidget_C::SetTexture(class UTexture* HitTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.SetTexture");

	struct
	{
		class UTexture*                HitTexture;
	} params;
	params.HitTexture = HitTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.OnHit
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewDamage                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitEffectWidget_C::OnHit(float NewDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.OnHit");

	struct
	{
		float                          NewDamage;
	} params;
	params.NewDamage = NewDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.CustomEvent_1");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.BrightStartEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::BrightStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.BrightStartEvent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.BrightToOriginEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::BrightToOriginEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.BrightToOriginEvent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.FadeOutEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::FadeOutEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.FadeOutEvent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitEffectWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.Tick");

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


// Function HitEffectWidget.HitEffectWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHitEffectWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.BrightStay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::BrightStay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.BrightStay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.ExecuteUbergraph_HitEffectWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitEffectWidget_C::ExecuteUbergraph_HitEffectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.ExecuteUbergraph_HitEffectWidget");

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
