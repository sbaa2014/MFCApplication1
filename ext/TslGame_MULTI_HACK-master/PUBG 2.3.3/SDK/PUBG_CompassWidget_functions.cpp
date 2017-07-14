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

// Function CompassWidget.CompassWidget_C.CalcCompassMarkerDir
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class Vector2D                 A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Dir                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCompassWidget_C::CalcCompassMarkerDir(const class Vector2D& A, float* Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.CalcCompassMarkerDir");

	struct
	{
		class Vector2D                 A;
		float                          Dir;
	} params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dir != nullptr)
		*Dir = params.Dir;
}


// Function CompassWidget.CompassWidget_C.CreateCompassMarkerWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Number                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCompassMarkerWidget_C*  CompassMarker                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCompassWidget_C::CreateCompassMarkerWidget(int Number, class UCompassMarkerWidget_C** CompassMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.CreateCompassMarkerWidget");

	struct
	{
		int                            Number;
		class UCompassMarkerWidget_C*  CompassMarker;
	} params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompassMarker != nullptr)
		*CompassMarker = params.CompassMarker;
}


// Function CompassWidget.CompassWidget_C.InitCompassWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCompassWidget_C::InitCompassWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.InitCompassWidget");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassWidget.CompassWidget_C.Get_Compass_Arrow_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UCompassWidget_C::Get_Compass_Arrow_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.Get_Compass_Arrow_Visibility_1");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CompassWidget.CompassWidget_C.ConvertAngleToUV
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCompassWidget_C::ConvertAngleToUV(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.ConvertAngleToUV");

	struct
	{
		float                          Angle;
		float                          ReturnValue;
	} params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CompassWidget.CompassWidget_C.UpdateDirection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCompassWidget_C::UpdateDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.UpdateDirection");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassWidget.CompassWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCompassWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassWidget.CompassWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCompassWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.Tick");

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


// Function CompassWidget.CompassWidget_C.ExecuteUbergraph_CompassWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCompassWidget_C::ExecuteUbergraph_CompassWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.ExecuteUbergraph_CompassWidget");

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
