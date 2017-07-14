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

// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.SubPrepass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::SubPrepass(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.SubPrepass");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.On_BluezoneLight_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::On_BluezoneLight_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.On_BluezoneLight_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.On_ImageBorder_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::On_ImageBorder_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.On_ImageBorder_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.TickReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::TickReset(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.TickReset");

	struct
	{
		float                          Time;
	} params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Circle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.ChildUpdateGauge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float*                         Gauge                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::ChildUpdateGauge(float* Gauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.ChildUpdateGauge");

	struct
	{
		float*                         Gauge;
	} params;
	params.Gauge = Gauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.MainPrepassWidgetVisibilitySetting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::MainPrepassWidgetVisibilitySetting(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.MainPrepassWidgetVisibilitySetting");

	struct
	{
		class UWidget**                BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Circle_C::OnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnWarning");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnEnterNextPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Circle_C::OnEnterNextPlayzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnEnterNextPlayzone");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnLeaveNextPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Circle_C::OnLeaveNextPlayzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnLeaveNextPlayzone");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.ExecuteUbergraph_BlueZoneGpsWidget_Circle
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::ExecuteUbergraph_BlueZoneGpsWidget_Circle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.ExecuteUbergraph_BlueZoneGpsWidget_Circle");

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
