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

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_ColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UAlivePlayerInfoWidget_C::Get_SurvivorCount_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_ColorAndOpacity_1");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_AdditionalInfo_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAlivePlayerInfoWidget_C::Get_AdditionalInfo_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_AdditionalInfo_Text_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.OnPrepass_AlivePlayerInfoVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlivePlayerInfoWidget_C::OnPrepass_AlivePlayerInfoVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.OnPrepass_AlivePlayerInfoVisibility");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAlivePlayerInfoWidget_C::Get_SurvivorCount_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_Text_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_PlayerCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlivePlayerInfoWidget_C::Get_PlayerCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_PlayerCount");

	struct
	{
		int                            Count;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAlivePlayerInfoWidget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.GetText_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UAlivePlayerInfoWidget_C::BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlivePlayerInfoWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Tick");

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


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UAlivePlayerInfoWidget_C::BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlivePlayerInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.ExecuteUbergraph_AlivePlayerInfoWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlivePlayerInfoWidget_C::ExecuteUbergraph_AlivePlayerInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.ExecuteUbergraph_AlivePlayerInfoWidget");

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
