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

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.On_SubPrepass
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_RoundType_C::On_SubPrepass(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.On_SubPrepass");

	UBlueZoneGpsWidget_RoundType_C_On_SubPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.On_BluezoneGauge_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_RoundType_C::On_BluezoneGauge_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.On_BluezoneGauge_Prepass_1");

	UBlueZoneGpsWidget_RoundType_C_On_BluezoneGauge_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetBluezoneTimeColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UBlueZoneGpsWidget_RoundType_C::GetBluezoneTimeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetBluezoneTimeColor");

	UBlueZoneGpsWidget_RoundType_C_GetBluezoneTimeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetBluezoneTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBlueZoneGpsWidget_RoundType_C::GetBluezoneTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetBluezoneTime");

	UBlueZoneGpsWidget_RoundType_C_GetBluezoneTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetIsStateBluezoneReady_Pending
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UBlueZoneGpsWidget_RoundType_C::GetIsStateBluezoneReady_Pending()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetIsStateBluezoneReady_Pending");

	UBlueZoneGpsWidget_RoundType_C_GetIsStateBluezoneReady_Pending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetPlayerPositoin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          PlayerPosition                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_RoundType_C::GetPlayerPositoin(float* PlayerPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetPlayerPositoin");

	UBlueZoneGpsWidget_RoundType_C_GetPlayerPositoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerPosition != nullptr)
		*PlayerPosition = params.PlayerPosition;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.TickReset_Pending
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_RoundType_C::TickReset_Pending(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.TickReset_Pending");

	UBlueZoneGpsWidget_RoundType_C_TickReset_Pending_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.UpdatePlayerPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_RoundType_C::UpdatePlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.UpdatePlayerPosition");

	UBlueZoneGpsWidget_RoundType_C_UpdatePlayerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Get_BluezoneGPSGauge_ColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UBlueZoneGpsWidget_RoundType_C::Get_BluezoneGPSGauge_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Get_BluezoneGPSGauge_ColorAndOpacity_1");

	UBlueZoneGpsWidget_RoundType_C_Get_BluezoneGPSGauge_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_RoundType_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Construct");

	UBlueZoneGpsWidget_RoundType_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.MainPrepassWidgetVisibilitySetting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_RoundType_C::MainPrepassWidgetVisibilitySetting(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.MainPrepassWidgetVisibilitySetting");

	UBlueZoneGpsWidget_RoundType_C_MainPrepassWidgetVisibilitySetting_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.ChildUpdateGauge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float*                         Gauge                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_RoundType_C::ChildUpdateGauge(float* Gauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.ChildUpdateGauge");

	UBlueZoneGpsWidget_RoundType_C_ChildUpdateGauge_Params params;
	params.Gauge = Gauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_RoundType_C::OnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnWarning");

	UBlueZoneGpsWidget_RoundType_C_OnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnEnterNextPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_RoundType_C::OnEnterNextPlayzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnEnterNextPlayzone");

	UBlueZoneGpsWidget_RoundType_C_OnEnterNextPlayzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnLeaveNextPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_RoundType_C::OnLeaveNextPlayzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnLeaveNextPlayzone");

	UBlueZoneGpsWidget_RoundType_C_OnLeaveNextPlayzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_RoundType_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.CustomEvent_1");

	UBlueZoneGpsWidget_RoundType_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_RoundType_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.CustomEvent_2");

	UBlueZoneGpsWidget_RoundType_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_RoundType_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Destruct");

	UBlueZoneGpsWidget_RoundType_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.ExecuteUbergraph_BlueZoneGpsWidget_RoundType
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_RoundType_C::ExecuteUbergraph_BlueZoneGpsWidget_RoundType(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.ExecuteUbergraph_BlueZoneGpsWidget_RoundType");

	UBlueZoneGpsWidget_RoundType_C_ExecuteUbergraph_BlueZoneGpsWidget_RoundType_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
