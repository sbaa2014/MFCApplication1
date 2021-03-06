#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StopWebCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StopBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            DesiredWebCamWidth             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DesiredWebCamHeight            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMirrorWebCamImage             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDrawSimpleWebCamVideo         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameLiveStreamingFunctionLibrary::STATIC_StartWebCam(int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam");

	struct
	{
		int                            DesiredWebCamWidth;
		int                            DesiredWebCamHeight;
		bool                           bMirrorWebCamImage;
		bool                           bDrawSimpleWebCamVideo;
	} params;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 LoginUserName                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 LoginPassword                  (CPF_Parm, CPF_ZeroConstructor)
// int                            FrameRate                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ScreenScaling                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStartWebCam                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DesiredWebCamWidth             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DesiredWebCamHeight            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMirrorWebCamImage             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDrawSimpleWebCamVideo         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCaptureAudioFromComputer      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCaptureAudioFromMicrophone    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              CoverUpImage                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameLiveStreamingFunctionLibrary::STATIC_StartBroadcastingGame(const struct FString& LoginUserName, const struct FString& LoginPassword, int FrameRate, float ScreenScaling, bool bStartWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame");

	struct
	{
		struct FString                 LoginUserName;
		struct FString                 LoginPassword;
		int                            FrameRate;
		float                          ScreenScaling;
		bool                           bStartWebCam;
		int                            DesiredWebCamWidth;
		int                            DesiredWebCamHeight;
		bool                           bMirrorWebCamImage;
		bool                           bDrawSimpleWebCamVideo;
		bool                           bCaptureAudioFromComputer;
		bool                           bCaptureAudioFromMicrophone;
		class UTexture2D*              CoverUpImage;
	} params;
	params.LoginUserName = LoginUserName;
	params.LoginPassword = LoginPassword;
	params.FrameRate = FrameRate;
	params.ScreenScaling = ScreenScaling;
	params.bStartWebCam = bStartWebCam;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
	params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	params.CoverUpImage = CoverUpImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameLiveStreamingFunctionLibrary::STATIC_IsWebCamEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameLiveStreamingFunctionLibrary::STATIC_IsBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 GameName                       (CPF_Parm, CPF_ZeroConstructor)
// class UQueryLiveStreamsCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::STATIC_QueryLiveStreams(const struct FString& GameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams");

	struct
	{
		struct FString                 GameName;
		class UQueryLiveStreamsCallbackProxy* ReturnValue;
	} params;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
