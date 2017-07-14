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

// Function PlayerListWidget.PlayerListWidget_C.CheckChangeList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bChange                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerListWidget_C::CheckChangeList(bool* bChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.CheckChangeList");

	struct
	{
		bool                           bChange;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChange != nullptr)
		*bChange = params.bChange;
}


// Function PlayerListWidget.PlayerListWidget_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPlayerListWidget_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.OnPreviewKeyDown");

	struct
	{
		struct FGeometry*              MyGeometry;
		struct FKeyEvent*              InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerListWidget.PlayerListWidget_C.IsIncludeDyingPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerListWidget_C::IsIncludeDyingPlayer(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.IsIncludeDyingPlayer");

	struct
	{
		bool                           NewParam;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PlayerListWidget.PlayerListWidget_C.UpdatePlayerList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InputPin                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerListWidget_C::UpdatePlayerList(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.UpdatePlayerList");

	struct
	{
		float                          InputPin;
	} params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.GetPlayersInDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class ATslCharacter*>   PlayerList                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UPlayerListWidget_C::GetPlayersInDistance(TArray<class ATslCharacter*>* PlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.GetPlayersInDistance");

	struct
	{
		TArray<class ATslCharacter*>   PlayerList;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerList != nullptr)
		*PlayerList = params.PlayerList;
}


// Function PlayerListWidget.PlayerListWidget_C.CheckUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListWidget_C::CheckUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.CheckUpdate");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.CreateOrUpdatePlayerInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            IndexToTest                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPlayerInfoWidget_C*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPlayerInfoWidget_C* UPlayerListWidget_C::CreateOrUpdatePlayerInfo(int IndexToTest, class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.CreateOrUpdatePlayerInfo");

	struct
	{
		int                            IndexToTest;
		class ATslCharacter*           Character;
		class UPlayerInfoWidget_C*     ReturnValue;
	} params;
	params.IndexToTest = IndexToTest;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerListWidget.PlayerListWidget_C.RefreshList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListWidget_C::RefreshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.RefreshList");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerListWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.Tick");

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


// Function PlayerListWidget.PlayerListWidget_C.BndEvt__DistanceSliderWidget_K2Node_ComponentBoundEvent_81_ChagedDistance__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          NewDistance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerListWidget_C::BndEvt__DistanceSliderWidget_K2Node_ComponentBoundEvent_81_ChagedDistance__DelegateSignature(float NewDistance, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.BndEvt__DistanceSliderWidget_K2Node_ComponentBoundEvent_81_ChagedDistance__DelegateSignature");

	struct
	{
		float                          NewDistance;
		float                          Value;
	} params;
	params.NewDistance = NewDistance;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.CheckChangeTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListWidget_C::CheckChangeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.CheckChangeTimer");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.OnTurn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerListWidget_C::OnTurn(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.OnTurn");

	struct
	{
		float                          Scale;
	} params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.OnLookUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerListWidget_C::OnLookUp(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.OnLookUp");

	struct
	{
		float                          Scale;
	} params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Custom Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListWidget_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.Custom Event_1");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Custom Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListWidget_C::Custom_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.Custom Event_2");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerListWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.Destruct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.ExecuteUbergraph_PlayerListWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerListWidget_C::ExecuteUbergraph_PlayerListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerListWidget.PlayerListWidget_C.ExecuteUbergraph_PlayerListWidget");

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
