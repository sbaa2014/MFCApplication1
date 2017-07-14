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

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsWarningBp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsWarning                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::IsWarningBp(bool* bIsWarning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsWarningBp");

	struct
	{
		bool                           bIsWarning;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsWarning != nullptr)
		*bIsWarning = params.bIsWarning;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.TickWaning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::TickWaning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.TickWaning");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bReset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::SetReset(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetReset");

	struct
	{
		bool                           bReset;
	} params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetResetTimeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ResetTimeCheck                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::SetResetTimeCheck(float ResetTimeCheck, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetResetTimeCheck");

	struct
	{
		float                          ResetTimeCheck;
		float                          Result;
	} params;
	params.ResetTimeCheck = ResetTimeCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetResetTimeCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ResetTimeCheck                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetResetTimeCheck(float* ResetTimeCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetResetTimeCheck");

	struct
	{
		float                          ResetTimeCheck;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResetTimeCheck != nullptr)
		*ResetTimeCheck = params.ResetTimeCheck;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetPlayzoneReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewPlayzoneReset              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::SetPlayzoneReset(bool bNewPlayzoneReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetPlayzoneReset");

	struct
	{
		bool                           bNewPlayzoneReset;
	} params;
	params.bNewPlayzoneReset = bNewPlayzoneReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsPlayzoneReset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bReset                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::IsPlayzoneReset(bool* bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsPlayzoneReset");

	struct
	{
		bool                           bReset;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReset != nullptr)
		*bReset = params.bReset;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetBluezoneReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewBluezoneReset              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::SetBluezoneReset(bool bNewBluezoneReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetBluezoneReset");

	struct
	{
		bool                           bNewBluezoneReset;
	} params;
	params.bNewBluezoneReset = bNewBluezoneReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsBluezoneReset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bBluezoneReset                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::IsBluezoneReset(bool* bBluezoneReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsBluezoneReset");

	struct
	{
		bool                           bBluezoneReset;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bBluezoneReset != nullptr)
		*bBluezoneReset = params.bBluezoneReset;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayZoneRadius
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          CurrentPlayzoneRadius          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetCurrentPlayZoneRadius(float* CurrentPlayzoneRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayZoneRadius");

	struct
	{
		float                          CurrentPlayzoneRadius;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentPlayzoneRadius != nullptr)
		*CurrentPlayzoneRadius = params.CurrentPlayzoneRadius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayZonePosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class Vector3D                 CurrentPlayzonePosition        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetCurrentPlayZonePosition(class Vector3D* CurrentPlayzonePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayZonePosition");

	struct
	{
		class Vector3D                 CurrentPlayzonePosition;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentPlayzonePosition != nullptr)
		*CurrentPlayzonePosition = params.CurrentPlayzonePosition;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsResetBp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bReset                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::IsResetBp(bool* bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsResetBp");

	struct
	{
		bool                           bReset;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReset != nullptr)
		*bReset = params.bReset;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextplayzoneRadiusBp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          NextPlayzoneRadius             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetNextplayzoneRadiusBp(float* NextPlayzoneRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextplayzoneRadiusBp");

	struct
	{
		float                          NextPlayzoneRadius;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextPlayzoneRadius != nullptr)
		*NextPlayzoneRadius = params.NextPlayzoneRadius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayzonePositionBp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class Vector3D                 NextPlayzonePosition           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetNextPlayzonePositionBp(class Vector3D* NextPlayzonePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayzonePositionBp");

	struct
	{
		class Vector3D                 NextPlayzonePosition;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextPlayzonePosition != nullptr)
		*NextPlayzonePosition = params.NextPlayzonePosition;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezoneStateBp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Stae                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetBluezoneStateBp(int* Stae)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezoneStateBp");

	struct
	{
		int                            Stae;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stae != nullptr)
		*Stae = params.Stae;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsStateBluezoneReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           IsReady                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::IsStateBluezoneReady(bool* IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsStateBluezoneReady");

	struct
	{
		bool                           IsReady;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReady != nullptr)
		*IsReady = params.IsReady;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezoneTimeText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBlueZoneGpsWidget_Base_C::GetBluezoneTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezoneTimeText");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.UpdateGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::UpdateGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.UpdateGauge");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.BluezoneGpsMainPrepass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::BluezoneGpsMainPrepass(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.BluezoneGpsMainPrepass");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetTslCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetTslCharacter(class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetTslCharacter");

	struct
	{
		class ACharacter*              Character;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetIsInNextPlayzone
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UBlueZoneGpsWidget_Base_C::GetIsInNextPlayzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetIsInNextPlayzone");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsInNextPlayzoneBp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsIn                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::IsInNextPlayzoneBp(bool* bIsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsInNextPlayzoneBp");

	struct
	{
		bool                           bIsIn;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsIn != nullptr)
		*bIsIn = params.bIsIn;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayerzoneToCurrentBlueZoneLength
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Length                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetNextPlayerzoneToCurrentBlueZoneLength(float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayerzoneToCurrentBlueZoneLength");

	struct
	{
		float                          Length;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetPlayerLength
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          PlayerLength                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetPlayerLength(float* PlayerLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetPlayerLength");

	struct
	{
		float                          PlayerLength;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerLength != nullptr)
		*PlayerLength = params.PlayerLength;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayerzoneToCharacterDirection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetNextPlayerzoneToCharacterDirection(float Scale, class Vector3D* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayerzoneToCharacterDirection");

	struct
	{
		float                          Scale;
		class Vector3D                 Direction;
	} params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetSafeLength
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          SafeLength                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 A                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 B                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetSafeLength(float* SafeLength, class Vector3D* A, class Vector3D* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetSafeLength");

	struct
	{
		float                          SafeLength;
		class Vector3D                 A;
		class Vector3D                 B;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SafeLength != nullptr)
		*SafeLength = params.SafeLength;
	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezonePositionAndRadius
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class Vector3D                 BluezonePosition               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BluezoneRadius                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetBluezonePositionAndRadius(class Vector3D* BluezonePosition, float* BluezoneRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezonePositionAndRadius");

	struct
	{
		class Vector3D                 BluezonePosition;
		float                          BluezoneRadius;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BluezonePosition != nullptr)
		*BluezonePosition = params.BluezonePosition;
	if (BluezoneRadius != nullptr)
		*BluezoneRadius = params.BluezoneRadius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayzonePositionAndRadius
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class Vector3D                 CurrentPlayzonePosition        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentPlayzoneRadius          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetCurrentPlayzonePositionAndRadius(class Vector3D* CurrentPlayzonePosition, float* CurrentPlayzoneRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayzonePositionAndRadius");

	struct
	{
		class Vector3D                 CurrentPlayzonePosition;
		float                          CurrentPlayzoneRadius;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentPlayzonePosition != nullptr)
		*CurrentPlayzonePosition = params.CurrentPlayzonePosition;
	if (CurrentPlayzoneRadius != nullptr)
		*CurrentPlayzoneRadius = params.CurrentPlayzoneRadius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayzonePositionAndRadius
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class Vector3D                 NextPlayzonePosition           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetNextPlayzonePositionAndRadius(class Vector3D* NextPlayzonePosition, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayzonePositionAndRadius");

	struct
	{
		class Vector3D                 NextPlayzonePosition;
		float                          Radius;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextPlayzonePosition != nullptr)
		*NextPlayzonePosition = params.NextPlayzonePosition;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetDangerLength
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          DangerLength                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 A                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 B                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::GetDangerLength(float* DangerLength, class Vector3D* A, class Vector3D* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetDangerLength");

	struct
	{
		float                          DangerLength;
		class Vector3D                 A;
		class Vector3D                 B;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DangerLength != nullptr)
		*DangerLength = params.DangerLength;
	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.MainPrepassWidgetVisibilitySetting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::MainPrepassWidgetVisibilitySetting(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.MainPrepassWidgetVisibilitySetting");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::OnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnWarning");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnLeaveNextPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::OnLeaveNextPlayzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnLeaveNextPlayzone");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnEnterNextPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::OnEnterNextPlayzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnEnterNextPlayzone");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildResetBluezone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Gauge                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::ChildResetBluezone(float Gauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildResetBluezone");

	struct
	{
		float                          Gauge;
	} params;
	params.Gauge = Gauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildResetPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Gauge                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::ChildResetPlayzone(float Gauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildResetPlayzone");

	struct
	{
		float                          Gauge;
	} params;
	params.Gauge = Gauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildUpdateGauge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Gauge                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::ChildUpdateGauge(float Gauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildUpdateGauge");

	struct
	{
		float                          Gauge;
	} params;
	params.Gauge = Gauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ExecuteUbergraph_BlueZoneGpsWidget_Base
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Base_C::ExecuteUbergraph_BlueZoneGpsWidget_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ExecuteUbergraph_BlueZoneGpsWidget_Base");

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
