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
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHitEffectWidget_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.GetVisibility_2");

	UHitEffectWidget_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HitEffectWidget.HitEffectWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHitEffectWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.GetVisibility_1");

	UHitEffectWidget_C_GetVisibility_1_Params params;

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

	UHitEffectWidget_C_GetColorAndOpacity_2_Params params;

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

	UHitEffectWidget_C_CalcAlphaOffset_Params params;
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

	UHitEffectWidget_C_GetColorAndOpacity_1_Params params;

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

	UHitEffectWidget_C_SetTexture_Params params;
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

	UHitEffectWidget_C_OnHit_Params params;
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

	UHitEffectWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.BrightStartEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::BrightStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.BrightStartEvent");

	UHitEffectWidget_C_BrightStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.BrightToOriginEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::BrightToOriginEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.BrightToOriginEvent");

	UHitEffectWidget_C_BrightToOriginEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.FadeOutEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::FadeOutEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.FadeOutEvent");

	UHitEffectWidget_C_FadeOutEvent_Params params;

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

	UHitEffectWidget_C_Tick_Params params;
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

	UHitEffectWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitEffectWidget.HitEffectWidget_C.BrightStay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitEffectWidget_C::BrightStay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitEffectWidget.HitEffectWidget_C.BrightStay");

	UHitEffectWidget_C_BrightStay_Params params;

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

	UHitEffectWidget_C_ExecuteUbergraph_HitEffectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
