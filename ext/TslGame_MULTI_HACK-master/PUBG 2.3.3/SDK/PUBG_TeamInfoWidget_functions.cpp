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

// Function TeamInfoWidget.TeamInfoWidget_C.OnMainPrepass
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::OnMainPrepass(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnMainPrepass");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.OnPrepassUpdateGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::OnPrepassUpdateGauge(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnPrepassUpdateGauge");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_InfoIcon_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_InfoIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_InfoIcon_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_TeamInfoIconLayer_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_TeamInfoIconLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_TeamInfoIconLayer_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.CheckTeamInstanceValid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::CheckTeamInstanceValid(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.CheckTeamInstanceValid");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.UpdateMapMarkerVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::UpdateMapMarkerVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.UpdateMapMarkerVisibility");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_MarkerImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_MarkerImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_MarkerImage_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_TeamNameBorder_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_TeamNameBorder_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_TeamNameBorder_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.IsOffline
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bOffline                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::IsOffline(bool* bOffline)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.IsOffline");

	struct
	{
		bool                           bOffline;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOffline != nullptr)
		*bOffline = params.bOffline;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_SpeakingImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_SpeakingImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_SpeakingImage_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.UpdateVivoxChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UniqueId                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           bIsTeamChannel                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsSpeaking                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Energy                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::UpdateVivoxChat(const struct FString& UniqueId, bool bIsTeamChannel, bool bIsSpeaking, float Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.UpdateVivoxChat");

	struct
	{
		struct FString                 UniqueId;
		bool                           bIsTeamChannel;
		bool                           bIsSpeaking;
		float                          Energy;
	} params;
	params.UniqueId = UniqueId;
	params.bIsTeamChannel = bIsTeamChannel;
	params.bIsSpeaking = bIsSpeaking;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.BindVoiceEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::BindVoiceEvent(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.BindVoiceEvent");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.OnPrepass_HPGaugeVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::OnPrepass_HPGaugeVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnPrepass_HPGaugeVisibility");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.IsDead
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::IsDead(bool* Dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.IsDead");

	struct
	{
		bool                           Dead;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dead != nullptr)
		*Dead = params.Dead;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UTeamInfoWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetVisibility_1");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetRideVehicleType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ETeamVehicleType> Vehicle                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::GetRideVehicleType(TEnumAsByte<enum class ETeamVehicleType>* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetRideVehicleType");

	struct
	{
		TEnumAsByte<enum class ETeamVehicleType> Vehicle;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vehicle != nullptr)
		*Vehicle = params.Vehicle;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetGroggyHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          GroggyHealthPercent            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::GetGroggyHealthPercent(float* GroggyHealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetGroggyHealthPercent");

	struct
	{
		float                          GroggyHealthPercent;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroggyHealthPercent != nullptr)
		*GroggyHealthPercent = params.GroggyHealthPercent;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTeamInfoWidget_C::GetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetIcon");

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoWidget.TeamInfoWidget_C.IsGroggy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bGroggy                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::IsGroggy(bool* bGroggy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.IsGroggy");

	struct
	{
		bool                           bGroggy;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bGroggy != nullptr)
		*bGroggy = params.bGroggy;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetLifePercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::GetLifePercent(float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetLifePercent");

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


// Function TeamInfoWidget.TeamInfoWidget_C.UpdateGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::UpdateGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.UpdateGauge");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetCharacterName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTeamInfoWidget_C::GetCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetCharacterName");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetFillColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UTeamInfoWidget_C::GetFillColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetFillColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoWidget.TeamInfoWidget_C.OnVoiceChat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSeaking                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Energy                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::OnVoiceChat(bool bSeaking, float Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnVoiceChat");

	struct
	{
		bool                           bSeaking;
		float                          Energy;
	} params;
	params.bSeaking = bSeaking;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On Animation Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::On_Animation_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On Animation Start");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.OnAnimationFinish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::OnAnimationFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnAnimationFinish");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.Destruct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.ExecuteUbergraph_TeamInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::ExecuteUbergraph_TeamInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.ExecuteUbergraph_TeamInfoWidget");

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
