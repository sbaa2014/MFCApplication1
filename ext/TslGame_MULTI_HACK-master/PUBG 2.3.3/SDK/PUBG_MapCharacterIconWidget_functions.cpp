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

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_TslHealthGaugeBpWidget_C_1_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::On_TslHealthGaugeBpWidget_C_1_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_TslHealthGaugeBpWidget_C_1_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_HealthGaugeLayer_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::On_HealthGaugeLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_HealthGaugeLayer_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnPrepass_3
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::OnPrepass_3(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnPrepass_3");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetObserving
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bOserver                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::SetObserving(bool bOserver)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetObserving");

	struct
	{
		bool                           bOserver;
	} params;
	params.bOserver = bOserver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetTslCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           TslCharacter                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::GetTslCharacter(class ATslCharacter** TslCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetTslCharacter");

	struct
	{
		class ATslCharacter*           TslCharacter;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslCharacter != nullptr)
		*TslCharacter = params.TslCharacter;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnPrepass_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::OnPrepass_2(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnPrepass_2");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_Icon_MouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMapCharacterIconWidget_C::On_Icon_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_Icon_MouseButtonDown_1");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            State                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::SetState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetState");

	struct
	{
		int                            State;
	} params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnMainPrepass
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::OnMainPrepass(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnMainPrepass");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetAngle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::SetAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetAngle");

	struct
	{
		float                          Angle;
	} params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   PlayerName                     (CPF_Parm, CPF_OutParm)

void UMapCharacterIconWidget_C::GetName(struct FText* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetName");

	struct
	{
		struct FText                   PlayerName;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_PlayerName_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::On_PlayerName_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_PlayerName_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_Icon_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::On_Icon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_Icon_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetRotation_MC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Rotatoin                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::GetRotation_MC(float* Rotatoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetRotation_MC");

	struct
	{
		float                          Rotatoin;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotatoin != nullptr)
		*Rotatoin = params.Rotatoin;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetPosition_MC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class Vector2D                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class Vector2D UMapCharacterIconWidget_C::GetPosition_MC()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetPosition_MC");

	struct
	{
		class Vector2D                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMapCharacterIconWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMapCharacterIconWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCharacterIconWidget.MapCharacterIconWidget_C.ExecuteUbergraph_MapCharacterIconWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapCharacterIconWidget_C::ExecuteUbergraph_MapCharacterIconWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCharacterIconWidget.MapCharacterIconWidget_C.ExecuteUbergraph_MapCharacterIconWidget");

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
