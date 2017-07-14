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

// Function LobbyWebView.LobbyWebView_C.WebViewBroadcast
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Parameter                      (CPF_Parm, CPF_ZeroConstructor)

void ULobbyWebView_C::WebViewBroadcast(const struct FString& EventName, const struct FString& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewBroadcast");

	struct
	{
		struct FString                 EventName;
		struct FString                 Parameter;
	} params;
	params.EventName = EventName;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewUnload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::WebViewUnload(int ViewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewUnload");

	struct
	{
		int                            ViewIndex;
	} params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            VeiwIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Visible                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::WebViewShow(int VeiwIndex, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewShow");

	struct
	{
		int                            VeiwIndex;
		bool                           Visible;
	} params;
	params.VeiwIndex = VeiwIndex;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload*  payload                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::HandleEventFromWeb(class UCoherentUIGTJSPayload* payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb");

	struct
	{
		class UCoherentUIGTJSPayload*  payload;
	} params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewInputFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::WebViewInputFocus(int ViewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewInputFocus");

	struct
	{
		int                            ViewIndex;
	} params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewLoad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor)

void ULobbyWebView_C::WebViewLoad(int ViewIndex, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewLoad");

	struct
	{
		int                            ViewIndex;
		struct FString                 URL;
	} params;
	params.ViewIndex = ViewIndex;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void ULobbyWebView_C::BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.J_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload*  payload                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::J_1(class UCoherentUIGTJSPayload* payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.J_1");

	struct
	{
		class UCoherentUIGTJSPayload*  payload;
	} params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_1_K2Node_ComponentBoundEvent_545_UIGTReadyForBindingsSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void ULobbyWebView_C::BndEvt__WebView_1_K2Node_ComponentBoundEvent_545_UIGTReadyForBindingsSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_1_K2Node_ComponentBoundEvent_545_UIGTReadyForBindingsSignature__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_2_K2Node_ComponentBoundEvent_548_UIGTReadyForBindingsSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void ULobbyWebView_C::BndEvt__WebView_2_K2Node_ComponentBoundEvent_548_UIGTReadyForBindingsSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_2_K2Node_ComponentBoundEvent_548_UIGTReadyForBindingsSignature__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULobbyWebView_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Tick");

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


// Function LobbyWebView.LobbyWebView_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULobbyWebView_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Destruct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.PressAKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyWebView_C::PressAKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.PressAKey");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.PressBKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyWebView_C::PressBKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.PressBKey");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::ExecuteUbergraph_LobbyWebView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView");

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
