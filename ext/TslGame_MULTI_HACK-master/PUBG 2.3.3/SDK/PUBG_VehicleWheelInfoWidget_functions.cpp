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

// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetWheelColorAndOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UVehicleWheelInfoWidget_C::GetWheelColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetWheelColorAndOpacity");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetWheelLifePercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          LifePercent                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleWheelInfoWidget_C::GetWheelLifePercent(float* LifePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetWheelLifePercent");

	struct
	{
		float                          LifePercent;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LifePercent != nullptr)
		*LifePercent = params.LifePercent;
}


// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.Get_PunctureImage_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UVehicleWheelInfoWidget_C::Get_PunctureImage_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.Get_PunctureImage_Visibility");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetBrush_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UVehicleWheelInfoWidget_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetBrush_1");

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleWheelInfoWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.Tick");

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


// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.ExecuteUbergraph_VehicleWheelInfoWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleWheelInfoWidget_C::ExecuteUbergraph_VehicleWheelInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.ExecuteUbergraph_VehicleWheelInfoWidget");

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
