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

// Function StanceManagerWidget.StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStanceManagerWidget_C::On_StanceManagerCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.TickCheckRiderorDriver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::TickCheckRiderorDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.TickCheckRiderorDriver");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.TickCheckStance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::TickCheckStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.TickCheckStance");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.VehicleStanceToChracterStance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::VehicleStanceToChracterStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.VehicleStanceToChracterStance");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.OnRider
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::OnRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.OnRider");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.OnDriver
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::OnDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.OnDriver");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.CharacterStanceToVehicleStance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::CharacterStanceToVehicleStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.CharacterStanceToVehicleStance");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStanceManagerWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.Tick");

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


// Function StanceManagerWidget.StanceManagerWidget_C.ExecuteUbergraph_StanceManagerWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStanceManagerWidget_C::ExecuteUbergraph_StanceManagerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.ExecuteUbergraph_StanceManagerWidget");

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
