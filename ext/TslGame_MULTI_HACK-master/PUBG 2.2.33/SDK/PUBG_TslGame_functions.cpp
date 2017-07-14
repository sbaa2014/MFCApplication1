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

// Function TslGame.TslPopupInterface.SetPopup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class EPopupStyle> PopupStyle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UTslPopupInterface::SetPopup(TEnumAsByte<enum class EPopupStyle> PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPopupInterface.SetPopup");

	struct
	{
		TEnumAsByte<enum class EPopupStyle> PopupStyle;
		struct FText                   Message;
		struct FScriptDelegate         PressedDelegate;
	} params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBaseHUD.WidgetToggle
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 WidgetName                     (CPF_Parm, CPF_ZeroConstructor)

void ATslBaseHUD::WidgetToggle(const struct FString& WidgetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.WidgetToggle");

	struct
	{
		struct FString                 WidgetName;
	} params;
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBaseHUD.WidgetShow
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 WidgetName                     (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<enum class EWidgetShowType> ShowType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 OptionalParam                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslBaseHUD::WidgetShow(const struct FString& WidgetName, TEnumAsByte<enum class EWidgetShowType> ShowType, class UObject* OptionalParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.WidgetShow");

	struct
	{
		struct FString                 WidgetName;
		TEnumAsByte<enum class EWidgetShowType> ShowType;
		class UObject*                 OptionalParam;
	} params;
	params.WidgetName = WidgetName;
	params.ShowType = ShowType;
	params.OptionalParam = OptionalParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBaseHUD.WidgetCreate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 WidgetName                     (CPF_Parm, CPF_ZeroConstructor)
// struct FTslWidgetConfig        Config                         (CPF_Parm)

void ATslBaseHUD::WidgetCreate(const struct FString& WidgetName, const struct FTslWidgetConfig& Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.WidgetCreate");

	struct
	{
		struct FString                 WidgetName;
		struct FTslWidgetConfig        Config;
	} params;
	params.WidgetName = WidgetName;
	params.Config = Config;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBaseHUD.UnbindActionKeyDelegateEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EInputEvent> InputEvent                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslBaseHUD::UnbindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<enum class EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.UnbindActionKeyDelegateEvent");

	struct
	{
		struct FName                   ActionName;
		TEnumAsByte<enum class EInputEvent> InputEvent;
	} params;
	params.ActionName = ActionName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBaseHUD.ShowPopupDialog
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PopupWidgetName                (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<enum class EPopupStyle> PopupStyle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)
// struct FScriptDelegate         PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ATslBaseHUD::ShowPopupDialog(const struct FString& PopupWidgetName, TEnumAsByte<enum class EPopupStyle> PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.ShowPopupDialog");

	struct
	{
		struct FString                 PopupWidgetName;
		TEnumAsByte<enum class EPopupStyle> PopupStyle;
		struct FText                   Message;
		struct FScriptDelegate         PressedDelegate;
	} params;
	params.PopupWidgetName = PopupWidgetName;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBaseHUD.IsWidgetShow
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 WidgetName                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslBaseHUD::IsWidgetShow(const struct FString& WidgetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.IsWidgetShow");

	struct
	{
		struct FString                 WidgetName;
		bool                           ReturnValue;
	} params;
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslBaseHUD.HideWidgetByEscape
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslBaseHUD::HideWidgetByEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.HideWidgetByEscape");

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


// Function TslGame.TslBaseHUD.HidePopupDialog
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PopupWidgetName                (CPF_Parm, CPF_ZeroConstructor)

void ATslBaseHUD::HidePopupDialog(const struct FString& PopupWidgetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.HidePopupDialog");

	struct
	{
		struct FString                 PopupWidgetName;
	} params;
	params.PopupWidgetName = PopupWidgetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBaseHUD.GetWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 WidgetName                     (CPF_Parm, CPF_ZeroConstructor)
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* ATslBaseHUD::GetWidget(const struct FString& WidgetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.GetWidget");

	struct
	{
		struct FString                 WidgetName;
		class UUserWidget*             ReturnValue;
	} params;
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslBaseHUD.GetMainUMGHud
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* ATslBaseHUD::GetMainUMGHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.GetMainUMGHud");

	struct
	{
		class UUserWidget*             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslBaseHUD.BindActionKeyDelegateEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EInputEvent> InputEvent                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         ActionKeyDelegate              (CPF_Parm, CPF_ZeroConstructor)

void ATslBaseHUD::BindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<enum class EInputEvent> InputEvent, const struct FScriptDelegate& ActionKeyDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBaseHUD.BindActionKeyDelegateEvent");

	struct
	{
		struct FName                   ActionName;
		TEnumAsByte<enum class EInputEvent> InputEvent;
		struct FScriptDelegate         ActionKeyDelegate;
	} params;
	params.ActionName = ActionName;
	params.InputEvent = InputEvent;
	params.ActionKeyDelegate = ActionKeyDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.AnimDB.GetBlendSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAnimStanceType> AnimStance                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBlendSpace*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UBlendSpace* UAnimDB::GetBlendSpace(TEnumAsByte<enum class EAnimStanceType> AnimStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AnimDB.GetBlendSpace");

	struct
	{
		TEnumAsByte<enum class EAnimStanceType> AnimStance;
		class UBlendSpace*             ReturnValue;
	} params;
	params.AnimStance = AnimStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.AnimDB.GetAnimSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAnimStanceType> AnimStance                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InSpeed                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PlayRate                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SprintAlpha                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimDB::GetAnimSpeed(TEnumAsByte<enum class EAnimStanceType> AnimStance, float Direction, float InSpeed, float* PlayRate, float* SprintAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AnimDB.GetAnimSpeed");

	struct
	{
		TEnumAsByte<enum class EAnimStanceType> AnimStance;
		float                          Direction;
		float                          InSpeed;
		float                          PlayRate;
		float                          SprintAlpha;
		float                          ReturnValue;
	} params;
	params.AnimStance = AnimStance;
	params.Direction = Direction;
	params.InSpeed = InSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayRate != nullptr)
		*PlayRate = params.PlayRate;
	if (SprintAlpha != nullptr)
		*SprintAlpha = params.SprintAlpha;

	return params.ReturnValue;
}


// Function TslGame.AsyncStaticMeshComponent.SetStaticMeshAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TAssetPtr<class UStaticMesh>   Asset                          (CPF_Parm)

void UAsyncStaticMeshComponent::SetStaticMeshAsset(TAssetPtr<class UStaticMesh> Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AsyncStaticMeshComponent.SetStaticMeshAsset");

	struct
	{
		TAssetPtr<class UStaticMesh>   Asset;
	} params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.AsyncStaticMeshComponent.IsSameMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TAssetPtr<class UStaticMesh>   Asset                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAsyncStaticMeshComponent::IsSameMesh(TAssetPtr<class UStaticMesh> Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AsyncStaticMeshComponent.IsSameMesh");

	struct
	{
		TAssetPtr<class UStaticMesh>   Asset;
		bool                           ReturnValue;
	} params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.AsyncStaticMeshComponent.GetStaticMeshAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TAssetPtr<class UStaticMesh>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TAssetPtr<class UStaticMesh> UAsyncStaticMeshComponent::GetStaticMeshAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AsyncStaticMeshComponent.GetStaticMeshAsset");

	struct
	{
		TAssetPtr<class UStaticMesh>   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.AsyncStaticMeshComponent.ClearStaticMeshAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAsyncStaticMeshComponent::ClearStaticMeshAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AsyncStaticMeshComponent.ClearStaticMeshAsset");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBuff.TickBuff
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATslBuff::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBuff.TickBuff");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBuff.StopBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCanceled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslBuff::StopBuffBlueprint(bool bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBuff.StopBuffBlueprint");

	struct
	{
		bool                           bCanceled;
	} params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBuff.StartBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATslBuff::StartBuffBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBuff.StartBuffBlueprint");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslBuff.GetOwnerPawn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* ATslBuff::GetOwnerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBuff.GetOwnerPawn");

	struct
	{
		class APawn*                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslBuff.GetAttackId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FAttackId               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAttackId ATslBuff::GetAttackId()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBuff.GetAttackId");

	struct
	{
		struct FAttackId               ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslBuff.CanApplyBuff
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslBuff::CanApplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslBuff.CanApplyBuff");

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


// Function TslGame.BuffComponet.RemoveBuff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   OverlapId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuffComponet::RemoveBuff(const struct FName& OverlapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.BuffComponet.RemoveBuff");

	struct
	{
		struct FName                   OverlapId;
	} params;
	params.OverlapId = OverlapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.BuffComponet.FindBuffWithOverlapId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   BuffOverlapId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslBuff*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslBuff* UBuffComponet::FindBuffWithOverlapId(const struct FName& BuffOverlapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.BuffComponet.FindBuffWithOverlapId");

	struct
	{
		struct FName                   BuffOverlapId;
		class ATslBuff*                ReturnValue;
	} params;
	params.BuffOverlapId = BuffOverlapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.BuffComponet.AddBuff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  TslBuffClass                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslBuff*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslBuff* UBuffComponet::AddBuff(class UClass* TslBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.BuffComponet.AddBuff");

	struct
	{
		class UClass*                  TslBuffClass;
		class ATslBuff*                ReturnValue;
	} params;
	params.TslBuffClass = TslBuffClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastableInterface.IsCastable
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCastableInterface::IsCastable(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastableInterface.IsCastable");

	struct
	{
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastableInterface.GetCastFailMessage
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UCastableInterface::GetCastFailMessage(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastableInterface.GetCastFailMessage");

	struct
	{
		class ATslCharacter*           Character;
		struct FText                   ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastableInterface.GetCastConfig
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FCastConfig             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FCastConfig UCastableInterface::GetCastConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastableInterface.GetCastConfig");

	struct
	{
		struct FCastConfig             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastComponent.StartCast
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UCastableInterface> CastableInterface              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCastComponent::StartCast(const TScriptInterface<class UCastableInterface>& CastableInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastComponent.StartCast");

	struct
	{
		TScriptInterface<class UCastableInterface> CastableInterface;
		bool                           ReturnValue;
	} params;
	params.CastableInterface = CastableInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastComponent.GetTotalCastTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCastComponent::GetTotalCastTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastComponent.GetTotalCastTime");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastComponent.GetElapsedCastTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCastComponent::GetElapsedCastTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastComponent.GetElapsedCastTime");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastComponent.GetCastPriority
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class ECastPriority> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ECastPriority> UCastComponent::GetCastPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastComponent.GetCastPriority");

	struct
	{
		TEnumAsByte<enum class ECastPriority> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastComponent.GetCastObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UCastComponent::GetCastObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastComponent.GetCastObject");

	struct
	{
		class UObject*                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastComponent.GetCastName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UCastComponent::GetCastName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastComponent.GetCastName");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastComponent.GetCastLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class ECastLevel> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ECastLevel> UCastComponent::GetCastLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastComponent.GetCastLevel");

	struct
	{
		TEnumAsByte<enum class ECastLevel> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CastComponent.CancelCast
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCastComponent::CancelCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CastComponent.CancelCast");

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


// Function TslGame.CharacterBreathComponent.OnRep_Breath
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          LastBreath                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterBreathComponent::OnRep_Breath(float LastBreath)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.OnRep_Breath");

	struct
	{
		float                          LastBreath;
	} params;
	params.LastBreath = LastBreath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CharacterBreathComponent.IsInApnea
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCharacterBreathComponent::IsInApnea()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.IsInApnea");

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


// Function TslGame.CharacterBreathComponent.IsConsuming
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCharacterBreathComponent::IsConsuming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.IsConsuming");

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


// Function TslGame.CharacterBreathComponent.GetBreathRatio
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCharacterBreathComponent::GetBreathRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.GetBreathRatio");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CharacterBreathComponent.GetBreathMax
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCharacterBreathComponent::GetBreathMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.GetBreathMax");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CharacterBreathComponent.GetBreath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCharacterBreathComponent::GetBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.GetBreath");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CharacterBreathComponent.CanStartSprinting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCharacterBreathComponent::CanStartSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.CanStartSprinting");

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


// Function TslGame.CharacterBreathComponent.CanStartHoldingBreath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCharacterBreathComponent::CanStartHoldingBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.CanStartHoldingBreath");

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


// Function TslGame.CharacterBreathComponent.AddBreath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterBreathComponent::AddBreath(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathComponent.AddBreath");

	struct
	{
		float                          Value;
	} params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CharacterStudio.Update
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACharacterStudio::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterStudio.Update");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CharacterStudio.SetCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterStudio::SetCharacter(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterStudio.SetCharacter");

	struct
	{
		class ATslCharacter*           Character;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CharacterStudio.IsCharacterValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ACharacterStudio::IsCharacterValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterStudio.IsCharacterValid");

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


// Function TslGame.CharacterStudio.AddYaw
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Yaw                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterStudio::AddYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterStudio.AddYaw");

	struct
	{
		float                          Yaw;
	} params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CoherentCommonBinder.BindUI
// (FUNC_Native, FUNC_Protected)

void UCoherentCommonBinder::BindUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CoherentCommonBinder.BindUI");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.SlotInterface.IsWeapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlotInterface::IsWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.IsWeapon");

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


// Function TslGame.SlotInterface.IsStackable
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlotInterface::IsStackable()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.IsStackable");

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


// Function TslGame.SlotInterface.IsPackageItem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlotInterface::IsPackageItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.IsPackageItem");

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


// Function TslGame.SlotInterface.IsEquipable
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlotInterface::IsEquipable()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.IsEquipable");

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


// Function TslGame.SlotInterface.IsCastableItem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlotInterface::IsCastableItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.IsCastableItem");

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


// Function TslGame.SlotInterface.IsAttachment
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlotInterface::IsAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.IsAttachment");

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


// Function TslGame.SlotInterface.GetUnitSpace
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USlotInterface::GetUnitSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetUnitSpace");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetToolTipIconTexture
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTexture*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture* USlotInterface::GetToolTipIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetToolTipIconTexture");

	struct
	{
		class UTexture*                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetToolTipIconSizeRatio
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USlotInterface::GetToolTipIconSizeRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetToolTipIconSizeRatio");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetStackCountMax
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int USlotInterface::GetStackCountMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetStackCountMax");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetStackCount
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int USlotInterface::GetStackCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetStackCount");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetSpace
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USlotInterface::GetSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetSpace");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetSortPriority
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int USlotInterface::GetSortPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetSortPriority");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetSlotName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USlotInterface::GetSlotName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetSlotName");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetSlotDetailedName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USlotInterface::GetSlotDetailedName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetSlotDetailedName");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetSlotDescription
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USlotInterface::GetSlotDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetSlotDescription");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetSlotCategory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USlotInterface::GetSlotCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetSlotCategory");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetIconTexture
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture* USlotInterface::GetIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetIconTexture");

	struct
	{
		class UTexture*                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetIconSizeRatio
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USlotInterface::GetIconSizeRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetIconSizeRatio");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotInterface.GetDropSound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAkAudioEvent* USlotInterface::GetDropSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotInterface.GetDropSound");

	struct
	{
		class UAkAudioEvent*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.ShowSlotContextMenu
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USlotContainerInterface::ShowSlotContextMenu(const TScriptInterface<class USlotInterface>& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.ShowSlotContextMenu");

	struct
	{
		TScriptInterface<class USlotInterface> Slot;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.SlotContainerInterface.IsEnableAction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlotContainerInterface::IsEnableAction(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.IsEnableAction");

	struct
	{
		TScriptInterface<class USlotInterface> Slot;
		TScriptInterface<class USlotContainerInterface> OtherContainer;
		struct FString                 Options;
		bool                           ReturnValue;
	} params;
	params.Slot = Slot;
	params.OtherContainer = OtherContainer;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.HideSlotContextMenu
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USlotContainerInterface::HideSlotContextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.HideSlotContextMenu");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.SlotContainerInterface.GetSlotContext
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class USlotInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TScriptInterface<class USlotInterface> USlotContainerInterface::GetSlotContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.GetSlotContext");

	struct
	{
		TScriptInterface<class USlotInterface> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.GetSlotContainerOwner
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* USlotContainerInterface::GetSlotContainerOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.GetSlotContainerOwner");

	struct
	{
		class AActor*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.GetSlotContainerName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName USlotContainerInterface::GetSlotContainerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.GetSlotContainerName");

	struct
	{
		struct FName                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.GetDefaultActionName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName USlotContainerInterface::GetDefaultActionName(const TScriptInterface<class USlotInterface>& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.GetDefaultActionName");

	struct
	{
		TScriptInterface<class USlotInterface> Slot;
		struct FName                   ReturnValue;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.GetAvailableSlotActions
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> USlotContainerInterface::GetAvailableSlotActions(const TScriptInterface<class USlotInterface>& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.GetAvailableSlotActions");

	struct
	{
		TScriptInterface<class USlotInterface> Slot;
		TArray<struct FName>           ReturnValue;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.GetAllSlots
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<TScriptInterface<class USlotInterface>> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<TScriptInterface<class USlotInterface>> USlotContainerInterface::GetAllSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.GetAllSlots");

	struct
	{
		TArray<TScriptInterface<class USlotInterface>> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.GetActionName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName USlotContainerInterface::GetActionName(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.GetActionName");

	struct
	{
		TScriptInterface<class USlotInterface> Slot;
		TScriptInterface<class USlotContainerInterface> OtherContainer;
		struct FString                 Options;
		struct FName                   ReturnValue;
	} params;
	params.Slot = Slot;
	params.OtherContainer = OtherContainer;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SlotContainerInterface.DropSlotOnOtherContainer
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)

void USlotContainerInterface::DropSlotOnOtherContainer(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.DropSlotOnOtherContainer");

	struct
	{
		TScriptInterface<class USlotInterface> Slot;
		TScriptInterface<class USlotContainerInterface> OtherContainer;
		struct FString                 Options;
	} params;
	params.Slot = Slot;
	params.OtherContainer = OtherContainer;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.SlotContainerInterface.DoSlotActionDefault
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USlotContainerInterface::DoSlotActionDefault(const TScriptInterface<class USlotInterface>& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.DoSlotActionDefault");

	struct
	{
		TScriptInterface<class USlotInterface> Slot;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.SlotContainerInterface.DoSlotAction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)

void USlotContainerInterface::DoSlotAction(const struct FName& ActionName, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.DoSlotAction");

	struct
	{
		struct FName                   ActionName;
		struct FString                 Options;
	} params;
	params.ActionName = ActionName;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.SlotContainerInterface.DoActionWithSlot
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)

void USlotContainerInterface::DoActionWithSlot(const TScriptInterface<class USlotInterface>& Slot, const struct FName& ActionName, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SlotContainerInterface.DoActionWithSlot");

	struct
	{
		TScriptInterface<class USlotInterface> Slot;
		struct FName                   ActionName;
		struct FString                 Options;
	} params;
	params.Slot = Slot;
	params.ActionName = ActionName;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemExplorerInterface.UpdateItemList
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UItemExplorerInterface::UpdateItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemExplorerInterface.UpdateItemList");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemExplorerInterface.GetExplorableItemSlotList
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<TScriptInterface<class USlotInterface>> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<TScriptInterface<class USlotInterface>> UItemExplorerInterface::GetExplorableItemSlotList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemExplorerInterface.GetExplorableItemSlotList");

	struct
	{
		TArray<TScriptInterface<class USlotInterface>> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ExplorableItemInterface.IsValidExplorableItem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UExplorableItemInterface::IsValidExplorableItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ExplorableItemInterface.IsValidExplorableItem");

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


// Function TslGame.ExplorableItemInterface.GetInteractiveActionName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UExplorableItemInterface::GetInteractiveActionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ExplorableItemInterface.GetInteractiveActionName");

	struct
	{
		struct FName                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ExplorableItemInterface.GetExplorationDistance
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UExplorableItemInterface::GetExplorationDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ExplorableItemInterface.GetExplorationDistance");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Item.UseBy
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem::UseBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.UseBy");

	struct
	{
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Item.PickUpBy
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TargetContainer                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem::PickUpBy(class ATslCharacter* Character, const struct FName& TargetContainer, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.PickUpBy");

	struct
	{
		class ATslCharacter*           Character;
		struct FName                   TargetContainer;
		struct FString                 Options;
		bool                           ReturnValue;
	} params;
	params.Character = Character;
	params.TargetContainer = TargetContainer;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Item.IsWeapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem::IsWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.IsWeapon");

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


// Function TslGame.Item.IsToy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem::IsToy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.IsToy");

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


// Function TslGame.Item.IsPackageItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem::IsPackageItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.IsPackageItem");

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


// Function TslGame.Item.IsEquipable
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem::IsEquipable()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.IsEquipable");

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


// Function TslGame.Item.IsCastableItem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem::IsCastableItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.IsCastableItem");

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


// Function TslGame.Item.IsAttachment
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem::IsAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.IsAttachment");

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


// Function TslGame.Item.GetIconTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture* UItem::GetIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Item.GetIconTexture");

	struct
	{
		class UTexture*                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ItemPackage.Items_RepNotify
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AItemPackage::Items_RepNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemPackage.Items_RepNotify");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemPackage.IsOpenedBy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AItemPackage::IsOpenedBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemPackage.IsOpenedBy");

	struct
	{
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ItemPackage.ClientOnInteractBy
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AItemPackage::ClientOnInteractBy(class ATslCharacter* OtherCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemPackage.ClientOnInteractBy");

	struct
	{
		class ATslCharacter*           OtherCharacter;
	} params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.DroppedItemInterface.GetDroppedItem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UItem*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UItem* UDroppedItemInterface::GetDroppedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.DroppedItemInterface.GetDroppedItem");

	struct
	{
		class UItem*                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.DroppedItem.OnInteractBy
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADroppedItem::OnInteractBy(class ATslCharacter* OtherCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.DroppedItem.OnInteractBy");

	struct
	{
		class ATslCharacter*           OtherCharacter;
	} params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.DroppedItem.Item_RepNotify
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ADroppedItem::Item_RepNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.DroppedItem.Item_RepNotify");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.DroppedItemGroup.AddItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UItem*                   NewItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NewWorldLocation               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                NewWorldRotation               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADroppedItemGroup::AddItem(class UItem* NewItem, const struct FVector& NewWorldLocation, const struct FRotator& NewWorldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.DroppedItemGroup.AddItem");

	struct
	{
		class UItem*                   NewItem;
		struct FVector                 NewWorldLocation;
		struct FRotator                NewWorldRotation;
		bool                           ReturnValue;
	} params;
	params.NewItem = NewItem;
	params.NewWorldLocation = NewWorldLocation;
	params.NewWorldRotation = NewWorldRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.FlashBangCaptureActor.CaptureScreen
// (FUNC_Final, FUNC_Native, FUNC_Public)

void AFlashBangCaptureActor::CaptureScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.FlashBangCaptureActor.CaptureScreen");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.FlashBangCaptureActor.CaptureINIT
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bDoDelay                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CaptureDelay                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   PlayerRef                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTextureRenderTarget2D*  RenderTexture                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPostProcessSettings    PP_Settings                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bHidePawn                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AFlashBangCaptureActor::CaptureINIT(bool bDoDelay, float CaptureDelay, class APawn* PlayerRef, class UTextureRenderTarget2D* RenderTexture, const struct FPostProcessSettings& PP_Settings, bool bHidePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.FlashBangCaptureActor.CaptureINIT");

	struct
	{
		bool                           bDoDelay;
		float                          CaptureDelay;
		class APawn*                   PlayerRef;
		class UTextureRenderTarget2D*  RenderTexture;
		struct FPostProcessSettings    PP_Settings;
		bool                           bHidePawn;
	} params;
	params.bDoDelay = bDoDelay;
	params.CaptureDelay = CaptureDelay;
	params.PlayerRef = PlayerRef;
	params.RenderTexture = RenderTexture;
	params.PP_Settings = PP_Settings;
	params.bHidePawn = bHidePawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.GeneralItemSpawner.CreateItems
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UItem*>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UItem*> UGeneralItemSpawner::CreateItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.GeneralItemSpawner.CreateItems");

	struct
	{
		TArray<class UItem*>           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.GeneralItemSpawner.CreateItemInitiators
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FItemInitiator>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FItemInitiator> UGeneralItemSpawner::CreateItemInitiators()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.GeneralItemSpawner.CreateItemInitiators");

	struct
	{
		TArray<struct FItemInitiator>  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.InteractionComponent.AllowInteractBy
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATslCharacter*           Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UInteractionComponent::AllowInteractBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InteractionComponent.AllowInteractBy");

	struct
	{
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SeperatedInteractionComponent.SetInteractiveObjectName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   NewInteractiveObjectName       (CPF_Parm)

void USeperatedInteractionComponent::SetInteractiveObjectName(const struct FText& NewInteractiveObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SeperatedInteractionComponent.SetInteractiveObjectName");

	struct
	{
		struct FText                   NewInteractiveObjectName;
	} params;
	params.NewInteractiveObjectName = NewInteractiveObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.SeperatedInteractionComponent.SetInteractionVerb
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   NewInteractionVerb             (CPF_Parm)

void USeperatedInteractionComponent::SetInteractionVerb(const struct FText& NewInteractionVerb)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SeperatedInteractionComponent.SetInteractionVerb");

	struct
	{
		struct FText                   NewInteractionVerb;
	} params;
	params.NewInteractionVerb = NewInteractionVerb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.DroppedItemInteractionComponent.OnRep_Item
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UDroppedItemInteractionComponent::OnRep_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.DroppedItemInteractionComponent.OnRep_Item");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.InteractionHubComponent.GetInteractionComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     TargetLinkedComponent          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USeperatedInteractionComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USeperatedInteractionComponent* UInteractionHubComponent::GetInteractionComponent(class UPrimitiveComponent* TargetLinkedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InteractionHubComponent.GetInteractionComponent");

	struct
	{
		class UPrimitiveComponent*     TargetLinkedComponent;
		class USeperatedInteractionComponent* ReturnValue;
	} params;
	params.TargetLinkedComponent = TargetLinkedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.InteractionHubComponent.CreateInteractionComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  TargetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     LinkedComponent                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USeperatedInteractionComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USeperatedInteractionComponent* UInteractionHubComponent::CreateInteractionComponent(class UClass* TargetClass, class UPrimitiveComponent* LinkedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InteractionHubComponent.CreateInteractionComponent");

	struct
	{
		class UClass*                  TargetClass;
		class UPrimitiveComponent*     LinkedComponent;
		class USeperatedInteractionComponent* ReturnValue;
	} params;
	params.TargetClass = TargetClass;
	params.LinkedComponent = LinkedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.AttachableItem.GetAttachmentSlotID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   WeaponTag                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EWeaponAttachmentSlotID> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EWeaponAttachmentSlotID> UAttachableItem::GetAttachmentSlotID(const struct FName& WeaponTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AttachableItem.GetAttachmentSlotID");

	struct
	{
		struct FName                   WeaponTag;
		TEnumAsByte<enum class EWeaponAttachmentSlotID> ReturnValue;
	} params;
	params.WeaponTag = WeaponTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.AttachableItem.GetAttachmentData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   WeaponTag                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWeaponAttachmentData   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWeaponAttachmentData UAttachableItem::GetAttachmentData(const struct FName& WeaponTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AttachableItem.GetAttachmentData");

	struct
	{
		struct FName                   WeaponTag;
		struct FWeaponAttachmentData   ReturnValue;
	} params;
	params.WeaponTag = WeaponTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.EquipableItem.UnequipBy
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipableItem::UnequipBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.EquipableItem.UnequipBy");

	struct
	{
		class ATslCharacter*           Character;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.EquipableItem.EquipBy
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEquipPosition          Position                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipableItem::EquipBy(class ATslCharacter* Character, const struct FEquipPosition& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.EquipableItem.EquipBy");

	struct
	{
		class ATslCharacter*           Character;
		struct FEquipPosition          Position;
		bool                           ReturnValue;
	} params;
	params.Character = Character;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.EquipableItem.CanEquipTo
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipableItem::CanEquipTo(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.EquipableItem.CanEquipTo");

	struct
	{
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CustomEquipableItem.GetOffset_Thrown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UCustomEquipableItem::GetOffset_Thrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CustomEquipableItem.GetOffset_Thrown");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CustomEquipableItem.GetOffset_SideArm
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UCustomEquipableItem::GetOffset_SideArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CustomEquipableItem.GetOffset_SideArm");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CustomEquipableItem.GetOffset_Secondary
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UCustomEquipableItem::GetOffset_Secondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CustomEquipableItem.GetOffset_Secondary");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CustomEquipableItem.GetOffset_Primary
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UCustomEquipableItem::GetOffset_Primary()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CustomEquipableItem.GetOffset_Primary");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CustomEquipableItem.GetOffset_Melee
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UCustomEquipableItem::GetOffset_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CustomEquipableItem.GetOffset_Melee");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CustomEquipableItem.GetItemLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomEquipableItem::GetItemLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CustomEquipableItem.GetItemLevel");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ThrowableItem.GetEquippedWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* UThrowableItem::GetEquippedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ThrowableItem.GetEquippedWeapon");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ThrowableItem.GetDefaultWeaponObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* UThrowableItem::GetDefaultWeaponObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ThrowableItem.GetDefaultWeaponObject");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.Weapon_AttachShoulder
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslWeapon::Weapon_AttachShoulder()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.Weapon_AttachShoulder");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.Weapon_AttachHand
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslWeapon::Weapon_AttachHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.Weapon_AttachHand");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.UpdateAttachedItemClient
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FWeaponAttachmentData   NewAttachmentData              (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FWeaponAttachmentData   PastAttachmentData             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ATslWeapon::UpdateAttachedItemClient(const struct FWeaponAttachmentData& NewAttachmentData, const struct FWeaponAttachmentData& PastAttachmentData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.UpdateAttachedItemClient");

	struct
	{
		struct FWeaponAttachmentData   NewAttachmentData;
		struct FWeaponAttachmentData   PastAttachmentData;
	} params;
	params.NewAttachmentData = NewAttachmentData;
	params.PastAttachmentData = PastAttachmentData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.SimulatePhysicalBodyHit
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ShotDirection                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslWeapon::SimulatePhysicalBodyHit(const struct FHitResult& Impact, const struct FVector& ShotDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.SimulatePhysicalBodyHit");

	struct
	{
		struct FHitResult              Impact;
		struct FVector                 ShotDirection;
	} params;
	params.Impact = Impact;
	params.ShotDirection = ShotDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.SetCurrentWeaponZero
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          newZero                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon::SetCurrentWeaponZero(float newZero)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.SetCurrentWeaponZero");

	struct
	{
		float                          newZero;
	} params;
	params.newZero = newZero;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.ServerLogFireWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FAttackId               AttackId                       (CPF_Parm)

void ATslWeapon::ServerLogFireWeapon(const struct FAttackId& AttackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.ServerLogFireWeapon");

	struct
	{
		struct FAttackId               AttackId;
	} params;
	params.AttackId = AttackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.OnRep_MyPawn
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon::OnRep_MyPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.OnRep_MyPawn");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.OnRep_AttachedItemData
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon::OnRep_AttachedItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.OnRep_AttachedItemData");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.OnRep_AttachedItemAssets
// (FUNC_Native, FUNC_Protected)

void ATslWeapon::OnRep_AttachedItemAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.OnRep_AttachedItemAssets");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.OnAnimationNotify
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   NotifyName                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslWeapon::OnAnimationNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.OnAnimationNotify");

	struct
	{
		struct FName                   NotifyName;
	} params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.IsWeaponAttachedToShoulder
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWeapon::IsWeaponAttachedToShoulder()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.IsWeaponAttachedToShoulder");

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


// Function TslGame.TslWeapon.IsCustomSightAttached
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWeapon::IsCustomSightAttached(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.IsCustomSightAttached");

	struct
	{
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		bool                           ReturnValue;
	} params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponReadyDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon::GetWeaponReadyDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponReadyDuration");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USkeletalMeshComponent* ATslWeapon::GetWeaponMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponMesh");

	struct
	{
		class USkeletalMeshComponent*  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponGripTypeLeft
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponGripLeftHand> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EWeaponGripLeftHand> ATslWeapon::GetWeaponGripTypeLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponGripTypeLeft");

	struct
	{
		TEnumAsByte<enum class EWeaponGripLeftHand> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponEquipDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon::GetWeaponEquipDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponEquipDuration");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponDamage
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon::GetWeaponDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponDamage");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponConfig
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FWeaponData             ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)

struct FWeaponData ATslWeapon::GetWeaponConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponConfig");

	struct
	{
		struct FWeaponData             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponClassEnum
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponClass> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EWeaponClass> ATslWeapon::GetWeaponClassEnum()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponClassEnum");

	struct
	{
		TEnumAsByte<enum class EWeaponClass> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponAttachmentPoint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName ATslWeapon::GetWeaponAttachmentPoint(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponAttachmentPoint");

	struct
	{
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		struct FName                   Tag;
		struct FName                   ReturnValue;
	} params;
	params.SlotID = SlotID;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponAttachmentData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWeaponAttachmentData   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)

struct FWeaponAttachmentData ATslWeapon::GetWeaponAttachmentData(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponAttachmentData");

	struct
	{
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		struct FWeaponAttachmentData   ReturnValue;
	} params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponAttachmentAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWeaponAttachmentAssetDataReplicate ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)

struct FWeaponAttachmentAssetDataReplicate ATslWeapon::GetWeaponAttachmentAsset(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponAttachmentAsset");

	struct
	{
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		struct FWeaponAttachmentAssetDataReplicate ReturnValue;
	} params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetWeaponAnimationKick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon::GetWeaponAnimationKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetWeaponAnimationKick");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetThrownType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EThrownWeaponType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EThrownWeaponType> ATslWeapon::GetThrownType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetThrownType");

	struct
	{
		TEnumAsByte<enum class EThrownWeaponType> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetSwayModifier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslWeapon::GetSwayModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetSwayModifier");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetStanceSwayModifier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAnimStance> Stance                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon::GetStanceSwayModifier(TEnumAsByte<enum class EAnimStance> Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetStanceSwayModifier");

	struct
	{
		TEnumAsByte<enum class EAnimStance> Stance;
		float                          ReturnValue;
	} params;
	params.Stance = Stance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetRecoilMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon::GetRecoilMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetRecoilMontage");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetPawnOwner
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ATslWeapon::GetPawnOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetPawnOwner");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetLowerRailOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslWeapon::GetLowerRailOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetLowerRailOffset");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetItemName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText ATslWeapon::GetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetItemName");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetHandIK_Right
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* ATslWeapon::GetHandIK_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetHandIK_Right");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetHandIK_Left
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* ATslWeapon::GetHandIK_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetHandIK_Left");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetDoGripPose
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWeapon::GetDoGripPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetDoGripPose");

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


// Function TslGame.TslWeapon.GetCurrentWeaponZero
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon::GetCurrentWeaponZero()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetCurrentWeaponZero");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetAttachedMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UAsyncStaticMeshComponent*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UAsyncStaticMeshComponent*> ATslWeapon::GetAttachedMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetAttachedMesh");

	struct
	{
		TArray<class UAsyncStaticMeshComponent*> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetAnimWeaponType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAnimWeaponType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EAnimWeaponType> ATslWeapon::GetAnimWeaponType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetAnimWeaponType");

	struct
	{
		TEnumAsByte<enum class EAnimWeaponType> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetAllWeaponAttachmentData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FWeaponAttachmentData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FWeaponAttachmentData> ATslWeapon::GetAllWeaponAttachmentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetAllWeaponAttachmentData");

	struct
	{
		TArray<struct FWeaponAttachmentData> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.GetAllWeaponAttachmentAssets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FWeaponAttachmentAssetDataReplicate> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FWeaponAttachmentAssetDataReplicate> ATslWeapon::GetAllWeaponAttachmentAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.GetAllWeaponAttachmentAssets");

	struct
	{
		TArray<struct FWeaponAttachmentAssetDataReplicate> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon.ClientOnUnArmed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)

void ATslWeapon::ClientOnUnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.ClientOnUnArmed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.AttachWeaponToSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon::AttachWeaponToSlot(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.AttachWeaponToSlot");

	struct
	{
		int                            SlotIndex;
	} params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon.AttachWeaponToMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslWeapon::AttachWeaponToMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon.AttachWeaponToMesh");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponItem.IsAttachable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAttachableItem*         Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponItem::IsAttachable(class UAttachableItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.IsAttachable");

	struct
	{
		class UAttachableItem*         Item;
		bool                           ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponItem.HasAttachmentSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponItem::HasAttachmentSlot(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.HasAttachmentSlot");

	struct
	{
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		bool                           ReturnValue;
	} params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponItem.GetEquippedWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* UWeaponItem::GetEquippedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.GetEquippedWeapon");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponItem.GetDefaultWeaponObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* UWeaponItem::GetDefaultWeaponObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.GetDefaultWeaponObject");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponItem.GetAttachedItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAttachableItem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAttachableItem* UWeaponItem::GetAttachedItem(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.GetAttachedItem");

	struct
	{
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		class UAttachableItem*         ReturnValue;
	} params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponItem.GetAttachableItemCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWeaponItem::GetAttachableItemCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.GetAttachableItemCount");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponItem.GetAllAttachedItems
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UAttachableItem*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UAttachableItem*> UWeaponItem::GetAllAttachedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.GetAllAttachedItems");

	struct
	{
		TArray<class UAttachableItem*> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponItem.DetachItem
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAttachableItem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAttachableItem* UWeaponItem::DetachItem(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.DetachItem");

	struct
	{
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		class UAttachableItem*         ReturnValue;
	} params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponItem.AttachItem
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UAttachableItem*         Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponItem::AttachItem(class UAttachableItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponItem.AttachItem");

	struct
	{
		class UAttachableItem*         Item;
		bool                           ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ItemSpawnProcessor.ProcessSpawnItem
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UItemSpotGroupComponent* Spawner                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UItemSpawnProcessor::ProcessSpawnItem(class UItemSpotGroupComponent* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemSpawnProcessor.ProcessSpawnItem");

	struct
	{
		class UItemSpotGroupComponent* Spawner;
	} params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemSpawnProcessor.ProcessGroup
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UItemSpotGroupComponent* SpotGroup                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<class UItemSpotComponent*> Spots                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UItemSpawnProcessor::ProcessGroup(class UItemSpotGroupComponent* SpotGroup, TArray<class UItemSpotComponent*> Spots)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemSpawnProcessor.ProcessGroup");

	struct
	{
		class UItemSpotGroupComponent* SpotGroup;
		TArray<class UItemSpotComponent*> Spots;
	} params;
	params.SpotGroup = SpotGroup;
	params.Spots = Spots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemSpawnProcessor.CheckItemGroup
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UItemSpotGroupComponent* SpotGroup                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItemSpawnProcessor::CheckItemGroup(class UItemSpotGroupComponent* SpotGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemSpawnProcessor.CheckItemGroup");

	struct
	{
		class UItemSpotGroupComponent* SpotGroup;
		bool                           ReturnValue;
	} params;
	params.SpotGroup = SpotGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ItemStudio.UpdateComponentToWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMeshComponent*          Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AItemStudio::UpdateComponentToWorld(class UMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemStudio.UpdateComponentToWorld");

	struct
	{
		class UMeshComponent*          Mesh;
	} params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemStudio.SetTextureRenderTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  NewTextureTarget               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AItemStudio::SetTextureRenderTarget(class UTextureRenderTarget2D* NewTextureTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemStudio.SetTextureRenderTarget");

	struct
	{
		class UTextureRenderTarget2D*  NewTextureTarget;
	} params;
	params.NewTextureTarget = NewTextureTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemStudio.SetItem
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AItemStudio::SetItem(class UItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemStudio.SetItem");

	struct
	{
		class UItem*                   Item;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemStudio.AddYaw
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AItemStudio::AddYaw(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemStudio.AddYaw");

	struct
	{
		float                          Value;
	} params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemToolTipWidget.UpdateVicinityOrInventorySlotItemToolTip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEquipableItem*          EquipmentSlotItem              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget::UpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem* EquipableItem, class UEquipableItem* EquipmentSlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemToolTipWidget.UpdateVicinityOrInventorySlotItemToolTip");

	struct
	{
		class UEquipableItem*          EquipableItem;
		class UEquipableItem*          EquipmentSlotItem;
	} params;
	params.EquipableItem = EquipableItem;
	params.EquipmentSlotItem = EquipmentSlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemToolTipWidget.UpdateToolTipBySlotInterface
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> Container                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget::UpdateToolTipBySlotInterface(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemToolTipWidget.UpdateToolTipBySlotInterface");

	struct
	{
		TScriptInterface<class USlotInterface> SlotInterface;
		TScriptInterface<class USlotContainerInterface> Container;
	} params;
	params.SlotInterface = SlotInterface;
	params.Container = Container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemToolTipWidget.UpdateSlotInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UItemToolTipWidget::UpdateSlotInfo(const TScriptInterface<class USlotInterface>& SlotInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemToolTipWidget.UpdateSlotInfo");

	struct
	{
		TScriptInterface<class USlotInterface> SlotInterface;
	} params;
	params.SlotInterface = SlotInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemToolTipWidget.UpdateEquipmentSlotItemToolTip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget::UpdateEquipmentSlotItemToolTip(class UEquipableItem* EquipableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemToolTipWidget.UpdateEquipmentSlotItemToolTip");

	struct
	{
		class UEquipableItem*          EquipableItem;
	} params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.LobbyWidget.GameStateChanging
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   OldState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWidget::GameStateChanging(const struct FName& NewState, const struct FName& OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.LobbyWidget.GameStateChanging");

	struct
	{
		struct FName                   NewState;
		struct FName                   OldState;
	} params;
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MatchPreparer.TimerGameStartCountDown
// (FUNC_Native, FUNC_Protected)

void UMatchPreparer::TimerGameStartCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MatchPreparer.TimerGameStartCountDown");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.AirborneMatchPreparer.AllowDealDamage
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UAirborneMatchPreparer::AllowDealDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AirborneMatchPreparer.AllowDealDamage");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ModeController.SendSystemMessageToAll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)
// float                          MessageDuration                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AModeController::SendSystemMessageToAll(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ModeController.SendSystemMessageToAll");

	struct
	{
		TEnumAsByte<enum class ESystemMessageType> MessageType;
		struct FText                   Message;
		float                          MessageDuration;
	} params;
	params.MessageType = MessageType;
	params.Message = Message;
	params.MessageDuration = MessageDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ModeController.IsPlayInEditor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AModeController::IsPlayInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ModeController.IsPlayInEditor");

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


// Function TslGame.ModeController.HandleServerAdminBlueprint
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AdminCommand                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AModeController::HandleServerAdminBlueprint(const struct FString& AdminCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ModeController.HandleServerAdminBlueprint");

	struct
	{
		struct FString                 AdminCommand;
		bool                           ReturnValue;
	} params;
	params.AdminCommand = AdminCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ModeController.GetGameState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslGameState*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslGameState* AModeController::GetGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ModeController.GetGameState");

	struct
	{
		class ATslGameState*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ModeController.GetGameMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslGameMode*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslGameMode* AModeController::GetGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ModeController.GetGameMode");

	struct
	{
		class ATslGameMode*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ModeController.CanDealDamage
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATslPlayerState*         DamageInstigator               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslPlayerState*         DamagedPlayer                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AModeController::CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ModeController.CanDealDamage");

	struct
	{
		class ATslPlayerState*         DamageInstigator;
		class ATslPlayerState*         DamagedPlayer;
		bool                           ReturnValue;
	} params;
	params.DamageInstigator = DamageInstigator;
	params.DamagedPlayer = DamagedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.BattleRoyaleModeController.SetNextGasInBlackboard
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABattleRoyaleModeController::SetNextGasInBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.BattleRoyaleModeController.SetNextGasInBlackboard");

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


// Function TslGame.BattleRoyaleModeController.InitRadius
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ABattleRoyaleModeController::InitRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.BattleRoyaleModeController.InitRadius");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.BattleRoyaleModeController.GetPoisonGasDamagePerSecond
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ABattleRoyaleModeController::GetPoisonGasDamagePerSecond()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.BattleRoyaleModeController.GetPoisonGasDamagePerSecond");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CarePackageController.SpawnAircraftCarePackage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           CopyIntersectionInfo           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ACarePackageController::SpawnAircraftCarePackage(bool CopyIntersectionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CarePackageController.SpawnAircraftCarePackage");

	struct
	{
		bool                           CopyIntersectionInfo;
		struct FVector                 ReturnValue;
	} params;
	params.CopyIntersectionInfo = CopyIntersectionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CarePackageController.SetNextCarePackageInBlackboard
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ACarePackageController::SetNextCarePackageInBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CarePackageController.SetNextCarePackageInBlackboard");

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


// Function TslGame.CarePackageController.InitCarePackageSetting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACarePackageController::InitCarePackageSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CarePackageController.InitCarePackageSetting");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CarePackageController.GetSpawnInterval
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ACarePackageController::GetSpawnInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CarePackageController.GetSpawnInterval");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.RedZoneController.SpawnBombProjectile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ARedZoneController::SpawnBombProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.RedZoneController.SpawnBombProjectile");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.RedZoneController.SetNextRedZoneInBlackboard
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ARedZoneController::SetNextRedZoneInBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.RedZoneController.SetNextRedZoneInBlackboard");

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


// Function TslGame.RedZoneController.InitRedZoneSetting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ARedZoneController::InitRedZoneSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.RedZoneController.InitRedZoneSetting");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.RedZoneController.GetRandomBombingInterval
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ARedZoneController::GetRandomBombingInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.RedZoneController.GetRandomBombingInterval");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MutableCharacter.OnRep_InstanceDescriptor
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AMutableCharacter::OnRep_InstanceDescriptor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MutableCharacter.OnRep_InstanceDescriptor");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MutableCharacter.GetGender
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EGender> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EGender> AMutableCharacter::GetGender()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MutableCharacter.GetGender");

	struct
	{
		TEnumAsByte<enum class EGender> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.WeaponCycleDone
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWeapon_Gun::WeaponCycleDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.WeaponCycleDone");

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


// Function TslGame.TslWeapon_Gun.UpdateAttachedItemClient
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FWeaponAttachmentData   NewAttachmentData              (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FWeaponAttachmentData   PastAttachmentData             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ATslWeapon_Gun::UpdateAttachedItemClient(const struct FWeaponAttachmentData& NewAttachmentData, const struct FWeaponAttachmentData& PastAttachmentData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.UpdateAttachedItemClient");

	struct
	{
		struct FWeaponAttachmentData   NewAttachmentData;
		struct FWeaponAttachmentData   PastAttachmentData;
	} params;
	params.NewAttachmentData = NewAttachmentData;
	params.PastAttachmentData = PastAttachmentData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.StopReloadAnimByOne
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)

void ATslWeapon_Gun::StopReloadAnimByOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.StopReloadAnimByOne");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.StartManualFireCycle
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon_Gun::StartManualFireCycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.StartManualFireCycle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.SimulateWeaponReload
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)
// Parameters:
// TEnumAsByte<enum class EWeaponReloadAnimExec> ReloadAnimExec                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslWeapon_Gun::SimulateWeaponReload(TEnumAsByte<enum class EWeaponReloadAnimExec> ReloadAnimExec)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.SimulateWeaponReload");

	struct
	{
		TEnumAsByte<enum class EWeaponReloadAnimExec> ReloadAnimExec;
	} params;
	params.ReloadAnimExec = ReloadAnimExec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.SetWeaponReloadInterrupted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsInterrupted                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Gun::SetWeaponReloadInterrupted(bool bIsInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.SetWeaponReloadInterrupted");

	struct
	{
		bool                           bIsInterrupted;
	} params;
	params.bIsInterrupted = bIsInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.SetSpawnBulletFromBarrel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           DoSpawnBulletFromBarrel        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Gun::SetSpawnBulletFromBarrel(bool DoSpawnBulletFromBarrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.SetSpawnBulletFromBarrel");

	struct
	{
		bool                           DoSpawnBulletFromBarrel;
	} params;
	params.DoSpawnBulletFromBarrel = DoSpawnBulletFromBarrel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ServerStopReload
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Gun::ServerStopReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ServerStopReload");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ServerStopFire
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Gun::ServerStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ServerStopFire");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ServerStartReload
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Gun::ServerStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ServerStartReload");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ServerStartFire
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Gun::ServerStartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ServerStartFire");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ServerSetHip
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewIsHipped                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Gun::ServerSetHip(bool bNewIsHipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ServerSetHip");

	struct
	{
		bool                           bNewIsHipped;
	} params;
	params.bNewIsHipped = bNewIsHipped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ServerHandleFiring
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Gun::ServerHandleFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ServerHandleFiring");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ServerCancelReload
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Gun::ServerCancelReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ServerCancelReload");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.Server_StartManualFireCycle
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Gun::Server_StartManualFireCycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.Server_StartManualFireCycle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.PlayWeaponCycleCameraAnim
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon_Gun::PlayWeaponCycleCameraAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.PlayWeaponCycleCameraAnim");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.PlayLongTailSound
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon_Gun::PlayLongTailSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.PlayLongTailSound");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.OnRep_AttachedItemAssets
// (FUNC_Native, FUNC_Protected)

void ATslWeapon_Gun::OnRep_AttachedItemAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.OnRep_AttachedItemAssets");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.OnRep_AmmoCount
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon_Gun::OnRep_AmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.OnRep_AmmoCount");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.OnAttachmentScopeLoaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon_Gun::OnAttachmentScopeLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.OnAttachmentScopeLoaded");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ManualFireCycleFinished
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon_Gun::ManualFireCycleFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ManualFireCycleFinished");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.IsWeaponCycleInProgress
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWeapon_Gun::IsWeaponCycleInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.IsWeaponCycleInProgress");

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


// Function TslGame.TslWeapon_Gun.IsReloadInterrupted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWeapon_Gun::IsReloadInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.IsReloadInterrupted");

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


// Function TslGame.TslWeapon_Gun.IsReloading
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWeapon_Gun::IsReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.IsReloading");

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


// Function TslGame.TslWeapon_Gun.GetWeaponHandOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslWeapon_Gun::GetWeaponHandOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetWeaponHandOffset");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetWeaponGunConfig
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FWeaponGunData          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWeaponGunData ATslWeapon_Gun::GetWeaponGunConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetWeaponGunConfig");

	struct
	{
		struct FWeaponGunData          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetWeaponGunAnimConfig
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FWeaponGunAnim          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWeaponGunAnim ATslWeapon_Gun::GetWeaponGunAnimConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetWeaponGunAnimConfig");

	struct
	{
		struct FWeaponGunAnim          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetWeaponFullReloadTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetWeaponFullReloadTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetWeaponFullReloadTime");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetWeaponFullRealoadTimeWithAttachments
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetWeaponFullRealoadTimeWithAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetWeaponFullRealoadTimeWithAttachments");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetWeaponCurrentRecoilValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetWeaponCurrentRecoilValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetWeaponCurrentRecoilValue");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetWeaponCurrentDeviationValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetWeaponCurrentDeviationValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetWeaponCurrentDeviationValue");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetReloadAnimationPlayRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetReloadAnimationPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetReloadAnimationPlayRate");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetNumOfFiringMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Gun::GetNumOfFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetNumOfFiringMode");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetMovementModifierScope
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetMovementModifierScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetMovementModifierScope");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetMovementModifierAim
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetMovementModifierAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetMovementModifierAim");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetMaxAmmo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Gun::GetMaxAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetMaxAmmo");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetMagOutDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetMagOutDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetMagOutDuration");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetMagDropLinearVelocity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslWeapon_Gun::GetMagDropLinearVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetMagDropLinearVelocity");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetMagDropAngularVelocity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslWeapon_Gun::GetMagDropAngularVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetMagDropAngularVelocity");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetGripTypeIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Gun::GetGripTypeIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetGripTypeIndex");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetFiringMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EFiringMode> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EFiringMode> ATslWeapon_Gun::GetFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetFiringMode");

	struct
	{
		TEnumAsByte<enum class EFiringMode> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetDefaultAmmoObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAmmoItem*               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAmmoItem* ATslWeapon_Gun::GetDefaultAmmoObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetDefaultAmmoObject");

	struct
	{
		class UAmmoItem*               ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCurrentDeviation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetCurrentDeviation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCurrentDeviation");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCurrentAmmoInInventory
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Gun::GetCurrentAmmoInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCurrentAmmoInInventory");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCurrentAmmoInClip
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Gun::GetCurrentAmmoInClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCurrentAmmoInClip");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCurrentAmmo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Gun::GetCurrentAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCurrentAmmo");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterReloadTacticalMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon_Gun::GetCharacterReloadTacticalMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterReloadTacticalMontage");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterReloadChargeMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon_Gun::GetCharacterReloadChargeMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterReloadChargeMontage");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneStopMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon_Gun::GetCharacterReloadByOneStopMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneStopMontage");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneStartMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon_Gun::GetCharacterReloadByOneStartMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneStartMontage");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneSingleMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon_Gun::GetCharacterReloadByOneSingleMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneSingleMontage");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterLHGripBlendspace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBlendSpaceBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UBlendSpaceBase* ATslWeapon_Gun::GetCharacterLHGripBlendspace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterLHGripBlendspace");

	struct
	{
		class UBlendSpaceBase*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterGripBlendspace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBlendSpace1D*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UBlendSpace1D* ATslWeapon_Gun::GetCharacterGripBlendspace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterGripBlendspace");

	struct
	{
		class UBlendSpace1D*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterFireSelectorMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon_Gun::GetCharacterFireSelectorMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterFireSelectorMontage");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterFireMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon_Gun::GetCharacterFireMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterFireMontage");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetCharacterFireCycle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* ATslWeapon_Gun::GetCharacterFireCycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetCharacterFireCycle");

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetAmmoPerClip
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Gun::GetAmmoPerClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetAmmoPerClip");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetAmmoItemClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* ATslWeapon_Gun::GetAmmoItemClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetAmmoItemClass");

	struct
	{
		class UClass*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.GetADSRecoilKick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Gun::GetADSRecoilKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.GetADSRecoilKick");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Gun.ClientStopSimulatingWeaponFire
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)

void ATslWeapon_Gun::ClientStopSimulatingWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ClientStopSimulatingWeaponFire");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ClientSimulateWeaponFire
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)

void ATslWeapon_Gun::ClientSimulateWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ClientSimulateWeaponFire");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ClientNotifyStopReloadByOne
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)

void ATslWeapon_Gun::ClientNotifyStopReloadByOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ClientNotifyStopReloadByOne");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.ClientCancelReload
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)

void ATslWeapon_Gun::ClientCancelReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.ClientCancelReload");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.Client_StartManualFireCycle
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)

void ATslWeapon_Gun::Client_StartManualFireCycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.Client_StartManualFireCycle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.CheckMiddlePointCollision
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWeapon_Gun::CheckMiddlePointCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.CheckMiddlePointCollision");

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


// Function TslGame.TslWeapon_Gun.CancelReloadImpl
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslWeapon_Gun::CancelReloadImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.CancelReloadImpl");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.AnimCall_ToggleFireMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslWeapon_Gun::AnimCall_ToggleFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.AnimCall_ToggleFireMode");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.AnimCall_ReloadTacticalWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslWeapon_Gun::AnimCall_ReloadTacticalWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.AnimCall_ReloadTacticalWeapon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.AnimCall_ReloadChargeWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslWeapon_Gun::AnimCall_ReloadChargeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.AnimCall_ReloadChargeWeapon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.AnimCall_FireWeaponCycle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslWeapon_Gun::AnimCall_FireWeaponCycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.AnimCall_FireWeaponCycle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Gun.AnimCall_FireWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslWeapon_Gun::AnimCall_FireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Gun.AnimCall_FireWeapon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VehicleSeatActor.OnRep_Rider
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AVehicleSeatActor::OnRep_Rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.OnRep_Rider");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VehicleSeatActor.IsWeaponClassAllowed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EWeaponClass> InClass                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AVehicleSeatActor::IsWeaponClassAllowed(TEnumAsByte<enum class EWeaponClass> InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.IsWeaponClassAllowed");

	struct
	{
		TEnumAsByte<enum class EWeaponClass> InClass;
		bool                           ReturnValue;
	} params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetVehicleSeatComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTslVehicleSeatComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslVehicleSeatComponent* AVehicleSeatActor::GetVehicleSeatComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetVehicleSeatComponent");

	struct
	{
		class UTslVehicleSeatComponent* ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetVehiclePawn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* AVehicleSeatActor::GetVehiclePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetVehiclePawn");

	struct
	{
		class APawn*                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetVehicleInterface
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TScriptInterface<class UTslVehicleInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TScriptInterface<class UTslVehicleInterface> AVehicleSeatActor::GetVehicleInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetVehicleInterface");

	struct
	{
		TScriptInterface<class UTslVehicleInterface> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetVehicleAnimType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EVehicleAnimType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EVehicleAnimType> AVehicleSeatActor::GetVehicleAnimType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetVehicleAnimType");

	struct
	{
		TEnumAsByte<enum class EVehicleAnimType> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetTransitionOutBlendspace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBlendSpaceBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UBlendSpaceBase* AVehicleSeatActor::GetTransitionOutBlendspace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetTransitionOutBlendspace");

	struct
	{
		class UBlendSpaceBase*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetTransitionInBlendspace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBlendSpaceBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UBlendSpaceBase* AVehicleSeatActor::GetTransitionInBlendspace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetTransitionInBlendspace");

	struct
	{
		class UBlendSpaceBase*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetSeatIdleAO
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAimOffsetBlendSpace*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAimOffsetBlendSpace* AVehicleSeatActor::GetSeatIdleAO()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetSeatIdleAO");

	struct
	{
		class UAimOffsetBlendSpace*    ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetSeatIdleAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimSequenceBase*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimSequenceBase* AVehicleSeatActor::GetSeatIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetSeatIdleAnimation");

	struct
	{
		class UAnimSequenceBase*       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetSeatAimingBlendspace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBlendSpaceBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UBlendSpaceBase* AVehicleSeatActor::GetSeatAimingBlendspace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetSeatAimingBlendspace");

	struct
	{
		class UBlendSpaceBase*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetRider
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* AVehicleSeatActor::GetRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetRider");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetMinPitchByYaw
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          CurrentYaw                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AVehicleSeatActor::GetMinPitchByYaw(float CurrentYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetMinPitchByYaw");

	struct
	{
		float                          CurrentYaw;
		float                          ReturnValue;
	} params;
	params.CurrentYaw = CurrentYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetMaxPitchByYaw
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          CurrentYaw                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AVehicleSeatActor::GetMaxPitchByYaw(float CurrentYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetMaxPitchByYaw");

	struct
	{
		float                          CurrentYaw;
		float                          ReturnValue;
	} params;
	params.CurrentYaw = CurrentYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VehicleSeatActor.GetCanFireOnlyWhileAimed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AVehicleSeatActor::GetCanFireOnlyWhileAimed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VehicleSeatActor.GetCanFireOnlyWhileAimed");

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


// Function TslGame.WeaponProcessor.SimulateArmWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bNeedAnimation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeaponProcessor::SimulateArmWeapon(int WeaponIndex, bool bNeedAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.SimulateArmWeapon");

	struct
	{
		int                            WeaponIndex;
		bool                           bNeedAnimation;
	} params;
	params.WeaponIndex = WeaponIndex;
	params.bNeedAnimation = bNeedAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponProcessor.ServerUnarmCurrentWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void AWeaponProcessor::ServerUnarmCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.ServerUnarmCurrentWeapon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponProcessor.ServerArmWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bNeedAnimation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeaponProcessor::ServerArmWeapon(int WeaponIndex, bool bNeedAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.ServerArmWeapon");

	struct
	{
		int                            WeaponIndex;
		bool                           bNeedAnimation;
	} params;
	params.WeaponIndex = WeaponIndex;
	params.bNeedAnimation = bNeedAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponProcessor.OnRep_EquippedWeapons
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// TArray<class ATslWeapon*>      LastEquippedWeapons            (CPF_Parm, CPF_ZeroConstructor)

void AWeaponProcessor::OnRep_EquippedWeapons(TArray<class ATslWeapon*> LastEquippedWeapons)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.OnRep_EquippedWeapons");

	struct
	{
		TArray<class ATslWeapon*>      LastEquippedWeapons;
	} params;
	params.LastEquippedWeapons = LastEquippedWeapons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponProcessor.OnRep_CurrentWeaponIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int                            LastWeaponIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeaponProcessor::OnRep_CurrentWeaponIndex(int LastWeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.OnRep_CurrentWeaponIndex");

	struct
	{
		int                            LastWeaponIndex;
	} params;
	params.LastWeaponIndex = LastWeaponIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponProcessor.IsUnarmedWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AWeaponProcessor::IsUnarmedWeapon(int WeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.IsUnarmedWeapon");

	struct
	{
		int                            WeaponIndex;
		bool                           ReturnValue;
	} params;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponProcessor.IsUnarmed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AWeaponProcessor::IsUnarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.IsUnarmed");

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


// Function TslGame.WeaponProcessor.GetWeaponIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AWeaponProcessor::GetWeaponIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.GetWeaponIndex");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponProcessor.GetWeaponGun
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon_Gun*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon_Gun* AWeaponProcessor::GetWeaponGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.GetWeaponGun");

	struct
	{
		class ATslWeapon_Gun*          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponProcessor.GetWeaponByIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* AWeaponProcessor::GetWeaponByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.GetWeaponByIndex");

	struct
	{
		int                            Index;
		class ATslWeapon*              ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponProcessor.GetWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* AWeaponProcessor::GetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.GetWeapon");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponProcessor.GetUnarmedWeaponIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AWeaponProcessor::GetUnarmedWeaponIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.GetUnarmedWeaponIndex");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponProcessor.GetCurrentWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* AWeaponProcessor::GetCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.GetCurrentWeapon");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponProcessor.FindWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  WeaponClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* AWeaponProcessor::FindWeapon(class UClass* WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.FindWeapon");

	struct
	{
		class UClass*                  WeaponClass;
		class ATslWeapon*              ReturnValue;
	} params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponProcessor.ClientSetWeaponIndex
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeaponProcessor::ClientSetWeaponIndex(int WeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.ClientSetWeaponIndex");

	struct
	{
		int                            WeaponIndex;
	} params;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponProcessor.ClientForceRemoveWeapon
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeaponProcessor::ClientForceRemoveWeapon(int WeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponProcessor.ClientForceRemoveWeapon");

	struct
	{
		int                            WeaponIndex;
	} params;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.UpdateWeaponAttachPoint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::UpdateWeaponAttachPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.UpdateWeaponAttachPoint");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ToggleAnimDynamics
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void ATslCharacter::ToggleAnimDynamics()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ToggleAnimDynamics");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.StopAllAnimMontages
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::StopAllAnimMontages()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.StopAllAnimMontages");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SpawnPunchImpact_Reliable
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector                 InLocation                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                InRotation                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SpawnPunchImpact_Reliable(const struct FVector& InLocation, const struct FRotator& InRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SpawnPunchImpact_Reliable");

	struct
	{
		struct FVector                 InLocation;
		struct FRotator                InRotation;
	} params;
	params.InLocation = InLocation;
	params.InRotation = InRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SpawnPunchImpact
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector                 InLocation                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                InRotation                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SpawnPunchImpact(const struct FVector& InLocation, const struct FRotator& InRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SpawnPunchImpact");

	struct
	{
		struct FVector                 InLocation;
		struct FRotator                InRotation;
	} params;
	params.InLocation = InLocation;
	params.InRotation = InRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SpawnBulletPassByEffect
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BulletVelocity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SpawnBulletPassByEffect(const struct FVector& Location, float BulletVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SpawnBulletPassByEffect");

	struct
	{
		struct FVector                 Location;
		float                          BulletVelocity;
	} params;
	params.Location = Location;
	params.BulletVelocity = BulletVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SimulatePhysicalHitRecovery
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslCharacter::SimulatePhysicalHitRecovery()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SimulatePhysicalHitRecovery");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SimulateHeadShot
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FTransform              ImpactTransform                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslCharacter::SimulateHeadShot(const struct FTransform& SpawnTransform, const struct FTransform& ImpactTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SimulateHeadShot");

	struct
	{
		struct FTransform              SpawnTransform;
		struct FTransform              ImpactTransform;
	} params;
	params.SpawnTransform = SpawnTransform;
	params.ImpactTransform = ImpactTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ShowDynamicCrosshair
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ShowDynamicCrosshair(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ShowDynamicCrosshair");

	struct
	{
		bool                           bShow;
	} params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetWorldTransformIdentity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::SetWorldTransformIdentity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetWorldTransformIdentity");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetWeaponInertia
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                InInertia                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetWeaponInertia(const struct FRotator& InInertia)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetWeaponInertia");

	struct
	{
		struct FRotator                InInertia;
	} params;
	params.InInertia = InInertia;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetupWeaponBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATslCharacter::SetupWeaponBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetupWeaponBlueprint");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetTPPSpringarmOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          VerticalOffset                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetTPPSpringarmOffset(float VerticalOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetTPPSpringarmOffset");

	struct
	{
		float                          VerticalOffset;
	} params;
	params.VerticalOffset = VerticalOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetSwayDebuffParameters
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SwaySpeed                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SwayVerticalMultiplier         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SwayHorizontalMultiplier       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetSwayDebuffParameters(float SwaySpeed, float SwayVerticalMultiplier, float SwayHorizontalMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetSwayDebuffParameters");

	struct
	{
		float                          SwaySpeed;
		float                          SwayVerticalMultiplier;
		float                          SwayHorizontalMultiplier;
	} params;
	params.SwaySpeed = SwaySpeed;
	params.SwayVerticalMultiplier = SwayVerticalMultiplier;
	params.SwayHorizontalMultiplier = SwayHorizontalMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetQuickThrowHigh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           NewQuickThrowHigh              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetQuickThrowHigh(bool NewQuickThrowHigh)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetQuickThrowHigh");

	struct
	{
		bool                           NewQuickThrowHigh;
	} params;
	params.NewQuickThrowHigh = NewQuickThrowHigh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetParachuteLandingAssist
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bAssistActive                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetParachuteLandingAssist(bool bAssistActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetParachuteLandingAssist");

	struct
	{
		bool                           bAssistActive;
	} params;
	params.bAssistActive = bAssistActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetOutSidePlayerArea
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewOutSidePlayerArea          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetOutSidePlayerArea(bool bNewOutSidePlayerArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetOutSidePlayerArea");

	struct
	{
		bool                           bNewOutSidePlayerArea;
	} params;
	params.bNewOutSidePlayerArea = bNewOutSidePlayerArea;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetMovementEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetMovementEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetMovementEnabled");

	struct
	{
		bool                           IsEnabled;
	} params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetLaunchEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FAttackId               AttackId                       (CPF_Parm)
// class ATslPlayerState*         InPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Causer                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetLaunchEvent(const struct FAttackId& AttackId, class ATslPlayerState* InPlayerState, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetLaunchEvent");

	struct
	{
		struct FAttackId               AttackId;
		class ATslPlayerState*         InPlayerState;
		class AActor*                  Causer;
	} params;
	params.AttackId = AttackId;
	params.InPlayerState = InPlayerState;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetCanGroggyDamage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInCanGroggyDamage             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetCanGroggyDamage(bool bInCanGroggyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetCanGroggyDamage");

	struct
	{
		bool                           bInCanGroggyDamage;
	} params;
	params.bInCanGroggyDamage = bInCanGroggyDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetBuffFinalSpreadFactor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          FinalSpreadFactor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetBuffFinalSpreadFactor(float FinalSpreadFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetBuffFinalSpreadFactor");

	struct
	{
		float                          FinalSpreadFactor;
	} params;
	params.FinalSpreadFactor = FinalSpreadFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAnimationAkSwitch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SwitchGroup                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 SwitchState                    (CPF_Parm, CPF_ZeroConstructor)

void ATslCharacter::SetAnimationAkSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAnimationAkSwitch");

	struct
	{
		struct FString                 SwitchGroup;
		struct FString                 SwitchState;
	} params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAnimationAkRTPC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 RTPCName                       (CPF_Parm, CPF_ZeroConstructor)
// float                          RTPCValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetAnimationAkRTPC(const struct FString& RTPCName, float RTPCValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAnimationAkRTPC");

	struct
	{
		struct FString                 RTPCName;
		float                          RTPCValue;
	} params;
	params.RTPCName = RTPCName;
	params.RTPCValue = RTPCValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAimStateActive
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// bool                           IsActive                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetAimStateActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAimStateActive");

	struct
	{
		bool                           IsActive;
	} params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetADSSocketOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 NewOffset                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetADSSocketOffset(const struct FVector& NewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetADSSocketOffset");

	struct
	{
		struct FVector                 NewOffset;
	} params;
	params.NewOffset = NewOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAccessorySlot_Thrown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslAccessoryComponent*  AccessoryComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslCharacter::SetAccessorySlot_Thrown(class UTslAccessoryComponent* AccessoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAccessorySlot_Thrown");

	struct
	{
		class UTslAccessoryComponent*  AccessoryComponent;
	} params;
	params.AccessoryComponent = AccessoryComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAccessorySlot_SideArm
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslAccessoryComponent*  AccessoryComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslCharacter::SetAccessorySlot_SideArm(class UTslAccessoryComponent* AccessoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAccessorySlot_SideArm");

	struct
	{
		class UTslAccessoryComponent*  AccessoryComponent;
	} params;
	params.AccessoryComponent = AccessoryComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAccessorySlot_Secondary
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslAccessoryComponent*  AccessoryComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslCharacter::SetAccessorySlot_Secondary(class UTslAccessoryComponent* AccessoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAccessorySlot_Secondary");

	struct
	{
		class UTslAccessoryComponent*  AccessoryComponent;
	} params;
	params.AccessoryComponent = AccessoryComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAccessorySlot_Primary
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslAccessoryComponent*  AccessoryComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslCharacter::SetAccessorySlot_Primary(class UTslAccessoryComponent* AccessoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAccessorySlot_Primary");

	struct
	{
		class UTslAccessoryComponent*  AccessoryComponent;
	} params;
	params.AccessoryComponent = AccessoryComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAccessorySlot_Melee
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslAccessoryComponent*  AccessoryComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslCharacter::SetAccessorySlot_Melee(class UTslAccessoryComponent* AccessoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAccessorySlot_Melee");

	struct
	{
		class UTslAccessoryComponent*  AccessoryComponent;
	} params;
	params.AccessoryComponent = AccessoryComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SetAccessorySlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslAccessoryComponent*  AccessoryComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<enum class EAccessorySlot> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent, TEnumAsByte<enum class EAccessorySlot> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SetAccessorySlot");

	struct
	{
		class UTslAccessoryComponent*  AccessoryComponent;
		TEnumAsByte<enum class EAccessorySlot> Slot;
	} params;
	params.AccessoryComponent = AccessoryComponent;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetTargeting
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<enum class ETargetingType> NewTargetingType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ServerSetTargeting(TEnumAsByte<enum class ETargetingType> NewTargetingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetTargeting");

	struct
	{
		TEnumAsByte<enum class ETargetingType> NewTargetingType;
	} params;
	params.NewTargetingType = NewTargetingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetSprintingAuto
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewSprintingAuto              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ServerSetSprintingAuto(bool bNewSprintingAuto)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetSprintingAuto");

	struct
	{
		bool                           bNewSprintingAuto;
	} params;
	params.bNewSprintingAuto = bNewSprintingAuto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetSprinting
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewSprinting                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ServerSetSprinting(bool bNewSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetSprinting");

	struct
	{
		bool                           bNewSprinting;
	} params;
	params.bNewSprinting = bNewSprinting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetRunning
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewRunning                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ServerSetRunning(bool bNewRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetRunning");

	struct
	{
		bool                           bNewRunning;
	} params;
	params.bNewRunning = bNewRunning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetRolling
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewRolling                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsLeft                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ServerSetRolling(bool bNewRolling, bool bIsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetRolling");

	struct
	{
		bool                           bNewRolling;
		bool                           bIsLeft;
	} params;
	params.bNewRolling = bNewRolling;
	params.bIsLeft = bIsLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetPeekRight
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewPeekRight                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ServerSetPeekRight(bool bNewPeekRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetPeekRight");

	struct
	{
		bool                           bNewPeekRight;
	} params;
	params.bNewPeekRight = bNewPeekRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetPeekLeft
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewPeekLeft                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ServerSetPeekLeft(bool bNewPeekLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetPeekLeft");

	struct
	{
		bool                           bNewPeekLeft;
	} params;
	params.bNewPeekLeft = bNewPeekLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetHoldingBreath
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewHoldingBreath              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ServerSetHoldingBreath(bool bNewHoldingBreath)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetHoldingBreath");

	struct
	{
		bool                           bNewHoldingBreath;
	} params;
	params.bNewHoldingBreath = bNewHoldingBreath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerSetAimOffsets
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FVector_NetQuantizeNormal NewAimOffsets                  (CPF_Parm)

void ATslCharacter::ServerSetAimOffsets(const struct FVector_NetQuantizeNormal& NewAimOffsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerSetAimOffsets");

	struct
	{
		struct FVector_NetQuantizeNormal NewAimOffsets;
	} params;
	params.NewAimOffsets = NewAimOffsets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerPickUpItemFromPackage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AItemPackage*            Package                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TargetContainer                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)

void ATslCharacter::ServerPickUpItemFromPackage(class UItem* Item, class AItemPackage* Package, const struct FName& TargetContainer, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerPickUpItemFromPackage");

	struct
	{
		class UItem*                   Item;
		class AItemPackage*            Package;
		struct FName                   TargetContainer;
		struct FString                 Options;
	} params;
	params.Item = Item;
	params.Package = Package;
	params.TargetContainer = TargetContainer;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ServerPickUpDroppedItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UObject*                 DroppedItemObject              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TargetContainer                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)

void ATslCharacter::ServerPickUpDroppedItem(class UObject* DroppedItemObject, const struct FName& TargetContainer, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ServerPickUpDroppedItem");

	struct
	{
		class UObject*                 DroppedItemObject;
		struct FName                   TargetContainer;
		struct FString                 Options;
	} params;
	params.DroppedItemObject = DroppedItemObject;
	params.TargetContainer = TargetContainer;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Server_UnarmedHitNotify
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FHitResult              Hit                            (CPF_Parm, CPF_IsPlainOldData)
// float                          Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       HitSeq                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Server_UnarmedHitNotify(const struct FHitResult& Hit, float Damage, uint32_t HitSeq)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Server_UnarmedHitNotify");

	struct
	{
		struct FHitResult              Hit;
		float                          Damage;
		uint32_t                       HitSeq;
	} params;
	params.Hit = Hit;
	params.Damage = Damage;
	params.HitSeq = HitSeq;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Server_SetWeaponObstruction
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewObstruction                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Server_SetWeaponObstruction(bool bNewObstruction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Server_SetWeaponObstruction");

	struct
	{
		bool                           bNewObstruction;
	} params;
	params.bNewObstruction = bNewObstruction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Server_SetQuickThrowHigh
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           NewQuickThrowHigh              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Server_SetQuickThrowHigh(bool NewQuickThrowHigh)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Server_SetQuickThrowHigh");

	struct
	{
		bool                           NewQuickThrowHigh;
	} params;
	params.NewQuickThrowHigh = NewQuickThrowHigh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Server_SetParachuteLandingAssist
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_NetValidate)
// Parameters:
// bool                           bAssistActive                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Server_SetParachuteLandingAssist(bool bAssistActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Server_SetParachuteLandingAssist");

	struct
	{
		bool                           bAssistActive;
	} params;
	params.bAssistActive = bAssistActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Server_SetCanGroggyDamage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bInCanGroggyDamage             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Server_SetCanGroggyDamage(bool bInCanGroggyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Server_SetCanGroggyDamage");

	struct
	{
		bool                           bInCanGroggyDamage;
	} params;
	params.bInCanGroggyDamage = bInCanGroggyDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Server_SetAimState
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           IsActive                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Server_SetAimState(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Server_SetAimState");

	struct
	{
		bool                           IsActive;
	} params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Server_PlayUnarmedAttack
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            AnimationIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Server_PlayUnarmedAttack(int AnimationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Server_PlayUnarmedAttack");

	struct
	{
		int                            AnimationIndex;
	} params;
	params.AnimationIndex = AnimationIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.SendSystemMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATslCharacter::SendSystemMessage(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.SendSystemMessage");

	struct
	{
		TEnumAsByte<enum class ESystemMessageType> MessageType;
		struct FText                   Message;
	} params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ResetUnarmedAttack
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslCharacter::ResetUnarmedAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ResetUnarmedAttack");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ResetParachute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::ResetParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ResetParachute");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.PunchStart
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          PunchDamage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PunchDistance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PunchRadius                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::PunchStart(float PunchDamage, float PunchDistance, float PunchRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.PunchStart");

	struct
	{
		float                          PunchDamage;
		float                          PunchDistance;
		float                          PunchRadius;
	} params;
	params.PunchDamage = PunchDamage;
	params.PunchDistance = PunchDistance;
	params.PunchRadius = PunchRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.PrepareParachute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ParachuteType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::PrepareParachute(class UClass* ParachuteType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.PrepareParachute");

	struct
	{
		class UClass*                  ParachuteType;
	} params;
	params.ParachuteType = ParachuteType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.PlayCameraAnim
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UCameraAnim*             CameraAnim                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::PlayCameraAnim(class UCameraAnim* CameraAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.PlayCameraAnim");

	struct
	{
		class UCameraAnim*             CameraAnim;
	} params;
	params.CameraAnim = CameraAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.PickUpItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TargetContainer                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::PickUpItem(class UItem* Item, const struct FName& TargetContainer, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.PickUpItem");

	struct
	{
		class UItem*                   Item;
		struct FName                   TargetContainer;
		struct FString                 Options;
		bool                           ReturnValue;
	} params;
	params.Item = Item;
	params.TargetContainer = TargetContainer;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.OnWeapon_6
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnWeapon_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnWeapon_6");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnWeapon_5
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnWeapon_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnWeapon_5");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnWeapon_4
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnWeapon_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnWeapon_4");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnWeapon_3
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnWeapon_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnWeapon_3");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnWeapon_2
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnWeapon_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnWeapon_2");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnUnarm
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnUnarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnUnarm");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnStopTargeting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnStopTargeting");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnStartInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::OnStartInteractBy(class ATslCharacter* OtherCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnStartInteractBy");

	struct
	{
		class ATslCharacter*           OtherCharacter;
	} params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_ShoesSoundType
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslCharacter::OnRep_ShoesSoundType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_ShoesSoundType");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_OutSidePlayerArea
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// bool                           bLastOutSidePlayerArea         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::OnRep_OutSidePlayerArea(bool bLastOutSidePlayerArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_OutSidePlayerArea");

	struct
	{
		bool                           bLastOutSidePlayerArea;
	} params;
	params.bLastOutSidePlayerArea = bLastOutSidePlayerArea;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_LastTakeHitInfo
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslCharacter::OnRep_LastTakeHitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_LastTakeHitInfo");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_IsGroggying
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslCharacter::OnRep_IsGroggying()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_IsGroggying");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_IsCrouched
// (FUNC_Native, FUNC_Public)

void ATslCharacter::OnRep_IsCrouched()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_IsCrouched");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_Health
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// float                          LastHealth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::OnRep_Health(float LastHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_Health");

	struct
	{
		float                          LastHealth;
	} params;
	params.LastHealth = LastHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_GroggyHealth
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// float                          LastGroggyHealth               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::OnRep_GroggyHealth(float LastGroggyHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_GroggyHealth");

	struct
	{
		float                          LastGroggyHealth;
	} params;
	params.LastGroggyHealth = LastGroggyHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_CharacterState
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslCharacter::OnRep_CharacterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_CharacterState");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_BoostGauge
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// float                          LastBoostGauge                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::OnRep_BoostGauge(float LastBoostGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_BoostGauge");

	struct
	{
		float                          LastBoostGauge;
	} params;
	params.LastBoostGauge = LastBoostGauge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnRep_AimOffsets
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FVector_NetQuantizeNormal PrevAimOffsets                 (CPF_Parm)

void ATslCharacter::OnRep_AimOffsets(const struct FVector_NetQuantizeNormal& PrevAimOffsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnRep_AimOffsets");

	struct
	{
		struct FVector_NetQuantizeNormal PrevAimOffsets;
	} params;
	params.PrevAimOffsets = PrevAimOffsets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::OnInteractBy(class ATslCharacter* OtherCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnInteractBy");

	struct
	{
		class ATslCharacter*           OtherCharacter;
	} params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnHoldBreathStop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnHoldBreathStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnHoldBreathStop");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnHoldBreathStart
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::OnHoldBreathStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnHoldBreathStart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnChangeBreath
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          Breath                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LastBreath                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BreathMax                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::OnChangeBreath(float Breath, float LastBreath, float BreathMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnChangeBreath");

	struct
	{
		float                          Breath;
		float                          LastBreath;
		float                          BreathMax;
	} params;
	params.Breath = Breath;
	params.LastBreath = LastBreath;
	params.BreathMax = BreathMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.OnCancelInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::OnCancelInteractBy(class ATslCharacter* OtherCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.OnCancelInteractBy");

	struct
	{
		class ATslCharacter*           OtherCharacter;
	} params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.NotHaveHealItemNotifyMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATslCharacter::NotHaveHealItemNotifyMessage(const struct FText& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.NotHaveHealItemNotifyMessage");

	struct
	{
		struct FText                   ItemName;
	} params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.NotHaveBoostItemNotifyMessage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATslCharacter::NotHaveBoostItemNotifyMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.NotHaveBoostItemNotifyMessage");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.LocalMagazineDrop
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InitialVelocity                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::LocalMagazineDrop(const struct FVector& InitialVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.LocalMagazineDrop");

	struct
	{
		struct FVector                 InitialVelocity;
	} params;
	params.InitialVelocity = InitialVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.IsZooming
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsZooming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsZooming");

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


// Function TslGame.TslCharacter.IsVehiclePassenger
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsVehiclePassenger()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsVehiclePassenger");

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


// Function TslGame.TslCharacter.IsVehicleDriver
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsVehicleDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsVehicleDriver");

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


// Function TslGame.TslCharacter.IsUsingRightShoulderAiming
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsUsingRightShoulderAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsUsingRightShoulderAiming");

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


// Function TslGame.TslCharacter.IsUpperCollision
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsUpperCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsUpperCollision");

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


// Function TslGame.TslCharacter.IsUnderwater
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsUnderwater");

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


// Function TslGame.TslCharacter.IsTeamMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsTeamMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsTeamMatch");

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


// Function TslGame.TslCharacter.IsTargeting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsTargeting");

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


// Function TslGame.TslCharacter.IsSwimming
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsSwimming");

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


// Function TslGame.TslCharacter.IsSprinting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsSprinting");

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


// Function TslGame.TslCharacter.IsSpectatingCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsSpectatingCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsSpectatingCharacter");

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


// Function TslGame.TslCharacter.IsSitting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsSitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsSitting");

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


// Function TslGame.TslCharacter.IsScoping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsScoping()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsScoping");

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


// Function TslGame.TslCharacter.IsRunning
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsRunning");

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


// Function TslGame.TslCharacter.IsRolling
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsRolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsRolling");

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


// Function TslGame.TslCharacter.IsReviving
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsReviving()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsReviving");

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


// Function TslGame.TslCharacter.IsReadyState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsReadyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsReadyState");

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


// Function TslGame.TslCharacter.IsQuitter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsQuitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsQuitter");

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


// Function TslGame.TslCharacter.IsQuickThrowHigh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsQuickThrowHigh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsQuickThrowHigh");

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


// Function TslGame.TslCharacter.IsPeekRight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsPeekRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsPeekRight");

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


// Function TslGame.TslCharacter.IsPeekLeft
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsPeekLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsPeekLeft");

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


// Function TslGame.TslCharacter.IsParachuting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsParachuting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsParachuting");

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


// Function TslGame.TslCharacter.IsOutSidePlayerArea
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsOutSidePlayerArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsOutSidePlayerArea");

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


// Function TslGame.TslCharacter.IsMoving
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsMoving");

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


// Function TslGame.TslCharacter.IsMouseUse
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsMouseUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsMouseUse");

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


// Function TslGame.TslCharacter.IsMeleeAttacking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsMeleeAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsMeleeAttacking");

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


// Function TslGame.TslCharacter.IsMagazineHandAttached
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsMagazineHandAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsMagazineHandAttached");

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


// Function TslGame.TslCharacter.IsMagazineGunAttached
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsMagazineGunAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsMagazineGunAttached");

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


// Function TslGame.TslCharacter.IsLocalOrSpectating
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsLocalOrSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsLocalOrSpectating");

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


// Function TslGame.TslCharacter.IsInWaterVolume
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsInWaterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsInWaterVolume");

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


// Function TslGame.TslCharacter.IsInVehicle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsInVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsInVehicle");

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


// Function TslGame.TslCharacter.IsInteracting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsInteracting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsInteracting");

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


// Function TslGame.TslCharacter.IsIndoor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsIndoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsIndoor");

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


// Function TslGame.TslCharacter.IsInAircraft
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsInAircraft()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsInAircraft");

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


// Function TslGame.TslCharacter.IsHoldingBreath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsHoldingBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsHoldingBreath");

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


// Function TslGame.TslCharacter.IsHitted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsHitted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsHitted");

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


// Function TslGame.TslCharacter.IsHipped
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsHipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsHipped");

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


// Function TslGame.TslCharacter.IsGroggying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsGroggying()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsGroggying");

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


// Function TslGame.TslCharacter.IsFreelooking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsFreelooking()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsFreelooking");

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


// Function TslGame.TslCharacter.IsForcingFall
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsForcingFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsForcingFall");

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


// Function TslGame.TslCharacter.IsForceRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsForceRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsForceRotation");

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


// Function TslGame.TslCharacter.IsForcedProneAfterFall
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsForcedProneAfterFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsForcedProneAfterFall");

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


// Function TslGame.TslCharacter.IsFirstPerson
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsFirstPerson");

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


// Function TslGame.TslCharacter.IsFiring
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsFiring");

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


// Function TslGame.TslCharacter.IsFallingWithParachute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsFallingWithParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsFallingWithParachute");

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


// Function TslGame.TslCharacter.IsFallingFromHighAltitude
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsFallingFromHighAltitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsFallingFromHighAltitude");

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


// Function TslGame.TslCharacter.IsCycleInProgress
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsCycleInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsCycleInProgress");

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


// Function TslGame.TslCharacter.IsCasting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsCasting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsCasting");

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


// Function TslGame.TslCharacter.IsCameraUnderwater
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsCameraUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsCameraUnderwater");

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


// Function TslGame.TslCharacter.IsAudioTestEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsAudioTestEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsAudioTestEnabled");

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


// Function TslGame.TslCharacter.IsAttacked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsAttacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsAttacked");

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


// Function TslGame.TslCharacter.IsAnimDynamicsEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsAnimDynamicsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsAnimDynamicsEnabled");

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


// Function TslGame.TslCharacter.IsAlive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.IsAlive");

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


// Function TslGame.TslCharacter.HiddenCrosshair
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATslCharacter::HiddenCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.HiddenCrosshair");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.HasWeaponLeftHandIKSocket
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::HasWeaponLeftHandIKSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.HasWeaponLeftHandIKSocket");

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


// Function TslGame.TslCharacter.HasWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  WeaponClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::HasWeapon(class UClass* WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.HasWeapon");

	struct
	{
		class UClass*                  WeaponClass;
		bool                           ReturnValue;
	} params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.HandleCapsuleCollision
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::HandleCapsuleCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.HandleCapsuleCollision");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.GiveWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  WeaponClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::GiveWeapon(class UClass* WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GiveWeapon");

	struct
	{
		class UClass*                  WeaponClass;
	} params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.GetWeaponReloadPlayRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetWeaponReloadPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponReloadPlayRate");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponProcessor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AWeaponProcessor*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AWeaponProcessor* ATslCharacter::GetWeaponProcessor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponProcessor");

	struct
	{
		class AWeaponProcessor*        ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponObstructionRemote
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::GetWeaponObstructionRemote()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponObstructionRemote");

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


// Function TslGame.TslCharacter.GetWeaponMovementModifierScope
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetWeaponMovementModifierScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponMovementModifierScope");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponMovementModifierAim
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetWeaponMovementModifierAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponMovementModifierAim");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponLeftHandIKTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform ATslCharacter::GetWeaponLeftHandIKTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponLeftHandIKTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponInertia
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATslCharacter::GetWeaponInertia()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponInertia");

	struct
	{
		struct FRotator                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponHandIK_Right
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform ATslCharacter::GetWeaponHandIK_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponHandIK_Right");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponHandIK_Left
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform ATslCharacter::GetWeaponHandIK_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponHandIK_Left");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponGunCollisionAlpha
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetWeaponGunCollisionAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponGunCollisionAlpha");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponGun
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon_Gun*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon_Gun* ATslCharacter::GetWeaponGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponGun");

	struct
	{
		class ATslWeapon_Gun*          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeaponADSTimeModifier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetWeaponADSTimeModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeaponADSTimeModifier");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* ATslCharacter::GetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWeapon");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetWantsToJump
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::GetWantsToJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetWantsToJump");

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


// Function TslGame.TslCharacter.GetVehicleSeatComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTslVehicleSeatComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslVehicleSeatComponent* ATslCharacter::GetVehicleSeatComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetVehicleSeatComponent");

	struct
	{
		class UTslVehicleSeatComponent* ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetVehicleSeat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AVehicleSeatActor*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AVehicleSeatActor* ATslCharacter::GetVehicleSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetVehicleSeat");

	struct
	{
		class AVehicleSeatActor*       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetVehicleRiderComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UVehicleRiderComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UVehicleRiderComponent* ATslCharacter::GetVehicleRiderComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetVehicleRiderComponent");

	struct
	{
		class UVehicleRiderComponent*  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetVehiclePawn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* ATslCharacter::GetVehiclePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetVehiclePawn");

	struct
	{
		class APawn*                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetVehicleInterface
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TScriptInterface<class UTslVehicleInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TScriptInterface<class UTslVehicleInterface> ATslCharacter::GetVehicleInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetVehicleInterface");

	struct
	{
		TScriptInterface<class UTslVehicleInterface> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetTslPlayerState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslPlayerState*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslPlayerState* ATslCharacter::GetTslPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetTslPlayerState");

	struct
	{
		class ATslPlayerState*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetTslPlayerController
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslPlayerController*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslPlayerController* ATslCharacter::GetTslPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetTslPlayerController");

	struct
	{
		class ATslPlayerController*    ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetTPPSpringarmOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetTPPSpringarmOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetTPPSpringarmOffset");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetTPPCameraCurve
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCurveFloat*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCurveFloat* ATslCharacter::GetTPPCameraCurve()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetTPPCameraCurve");

	struct
	{
		class UCurveFloat*             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetTeam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATeam*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATeam* ATslCharacter::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetTeam");

	struct
	{
		class ATeam*                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetTargetingSpeedModifier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetTargetingSpeedModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetTargetingSpeedModifier");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetStance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EStanceMode> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EStanceMode> ATslCharacter::GetStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetStance");

	struct
	{
		TEnumAsByte<enum class EStanceMode> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Stand
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetSprintingSpeedModifier_Stand()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetSprintingSpeedModifier_Stand");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Prone
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetSprintingSpeedModifier_Prone()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetSprintingSpeedModifier_Prone");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Crouch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetSprintingSpeedModifier_Crouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetSprintingSpeedModifier_Crouch");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetSprintCurrentValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetSprintCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetSprintCurrentValue");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetSpeedModifierByWeaponClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetSpeedModifierByWeaponClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetSpeedModifierByWeaponClass");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetShortPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATslCharacter::GetShortPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetShortPlayerName");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetRunningSpeedModifier_Stand
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetRunningSpeedModifier_Stand()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetRunningSpeedModifier_Stand");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetRunningSpeedModifier_Prone
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetRunningSpeedModifier_Prone()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetRunningSpeedModifier_Prone");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetRunningSpeedModifier_Crouch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetRunningSpeedModifier_Crouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetRunningSpeedModifier_Crouch");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetReactionBone
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName ATslCharacter::GetReactionBone(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetReactionBone");

	struct
	{
		struct FName                   BoneName;
		struct FName                   ReturnValue;
	} params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATslCharacter::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetPlayerName");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetParachuteLandingAssist
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::GetParachuteLandingAssist()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetParachuteLandingAssist");

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


// Function TslGame.TslCharacter.GetParachute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AParachuteVehicle*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AParachuteVehicle* ATslCharacter::GetParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetParachute");

	struct
	{
		class AParachuteVehicle*       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetMaxSprintSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetMaxSprintSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetMaxSprintSpeed");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetMaxGroundSpeedOnSlope
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetMaxGroundSpeedOnSlope()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetMaxGroundSpeedOnSlope");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetLocationString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATslCharacter::GetLocationString()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetLocationString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetLeanRightAlpha
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetLeanRightAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetLeanRightAlpha");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetLeanLeftAlpha
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetLeanLeftAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetLeanLeftAlpha");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetLastMoveRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATslCharacter::GetLastMoveRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetLastMoveRotation");

	struct
	{
		struct FRotator                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetInventoryFacade
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AInventoryFacade*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AInventoryFacade* ATslCharacter::GetInventoryFacade()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetInventoryFacade");

	struct
	{
		class AInventoryFacade*        ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetInteractObjectLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslCharacter::GetInteractObjectLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetInteractObjectLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetInteractionString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATslCharacter::GetInteractionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetInteractionString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetIndoorFactor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetIndoorFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetIndoorFactor");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetDynamicCrosshairHidden
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::GetDynamicCrosshairHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetDynamicCrosshairHidden");

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


// Function TslGame.TslCharacter.GetDropPackageType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* ATslCharacter::GetDropPackageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetDropPackageType");

	struct
	{
		class UClass*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetDirectionString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATslCharacter::GetDirectionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetDirectionString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetDirectionalSpeedModifier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EMovementType> StanceType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetDirectionalSpeedModifier(TEnumAsByte<enum class EMovementType> StanceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetDirectionalSpeedModifier");

	struct
	{
		TEnumAsByte<enum class EMovementType> StanceType;
		float                          ReturnValue;
	} params;
	params.StanceType = StanceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetDesiredRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATslCharacter::GetDesiredRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetDesiredRotation");

	struct
	{
		struct FRotator                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCurrentWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* ATslCharacter::GetCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCurrentWeapon");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCurrentWaterSurfaceZ
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetCurrentWaterSurfaceZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCurrentWaterSurfaceZ");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCurrentWaterDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetCurrentWaterDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCurrentWaterDepth");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCurrentSway
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATslCharacter::GetCurrentSway()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCurrentSway");

	struct
	{
		struct FRotator                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCurrentMagazineMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UStaticMesh*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UStaticMesh* ATslCharacter::GetCurrentMagazineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCurrentMagazineMesh");

	struct
	{
		class UStaticMesh*             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCurrentMagazineLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform ATslCharacter::GetCurrentMagazineLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCurrentMagazineLocation");

	struct
	{
		struct FTransform              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCurrentHeightFromWaterFloor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetCurrentHeightFromWaterFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCurrentHeightFromWaterFloor");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetComponentCanInteract
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USeperatedInteractionComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USeperatedInteractionComponent* ATslCharacter::GetComponentCanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetComponentCanInteract");

	struct
	{
		class USeperatedInteractionComponent* ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCastObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* ATslCharacter::GetCastObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCastObject");

	struct
	{
		class UObject*                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetCameraDOF
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslCharacter::GetCameraDOF()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetCameraDOF");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetBuffComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UBuffComponet*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UBuffComponet* ATslCharacter::GetBuffComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetBuffComponent");

	struct
	{
		class UBuffComponet*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetBreathComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCharacterBreathComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCharacterBreathComponent* ATslCharacter::GetBreathComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetBreathComponent");

	struct
	{
		class UCharacterBreathComponent* ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetAnimWeaponType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAnimWeaponType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EAnimWeaponType> ATslCharacter::GetAnimWeaponType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetAnimWeaponType");

	struct
	{
		TEnumAsByte<enum class EAnimWeaponType> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetAnimStance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAnimStance> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EAnimStance> ATslCharacter::GetAnimStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetAnimStance");

	struct
	{
		TEnumAsByte<enum class EAnimStance> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetAimStateTimer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetAimStateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetAimStateTimer");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetAimStateAlpha
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslCharacter::GetAimStateAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetAimStateAlpha");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetAimOffsets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATslCharacter::GetAimOffsets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetAimOffsets");

	struct
	{
		struct FRotator                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetADSSocketOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslCharacter::GetADSSocketOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetADSSocketOffset");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetActorCanInteract
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ATslCharacter::GetActorCanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetActorCanInteract");

	struct
	{
		class AActor*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetActiveCamera
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCameraComponent* ATslCharacter::GetActiveCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetActiveCamera");

	struct
	{
		class UCameraComponent*        ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.GetAccessorySlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAccessorySlot> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTslAccessoryComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslAccessoryComponent* ATslCharacter::GetAccessorySlot(TEnumAsByte<enum class EAccessorySlot> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.GetAccessorySlot");

	struct
	{
		TEnumAsByte<enum class EAccessorySlot> Slot;
		class UTslAccessoryComponent*  ReturnValue;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.FindWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  WeaponClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* ATslCharacter::FindWeapon(class UClass* WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.FindWeapon");

	struct
	{
		class UClass*                  WeaponClass;
		class ATslWeapon*              ReturnValue;
	} params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.EnableAudioTest
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void ATslCharacter::EnableAudioTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.EnableAudioTest");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.DisableCollision
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslCharacter::DisableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.DisableCollision");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.DelayedFire
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslCharacter::DelayedFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.DelayedFire");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ClientSoundPlay
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// class UAkAudioEvent*           SoundAk                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ClientSoundPlay(class UAkAudioEvent* SoundAk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ClientSoundPlay");

	struct
	{
		class UAkAudioEvent*           SoundAk;
	} params;
	params.SoundAk = SoundAk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ClientSimulationArmorDestruction
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// TEnumAsByte<enum class EEquipSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Impact                         (CPF_Parm, CPF_IsPlainOldData)

void ATslCharacter::ClientSimulationArmorDestruction(TEnumAsByte<enum class EEquipSlotID> SlotID, const struct FTransform& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ClientSimulationArmorDestruction");

	struct
	{
		TEnumAsByte<enum class EEquipSlotID> SlotID;
		struct FTransform              Impact;
	} params;
	params.SlotID = SlotID;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ClientSendGroggyMessage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// class ATslPlayerState*         GroggyCauserPlayerState        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslPlayerState*         VictimPlayerState              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             GroggyCauserDamageType         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EDamageReason> DamageReason                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   DamageCauserName               (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ATslCharacter::ClientSendGroggyMessage(class ATslPlayerState* GroggyCauserPlayerState, class ATslPlayerState* VictimPlayerState, class UDamageType* GroggyCauserDamageType, TEnumAsByte<enum class EDamageReason> DamageReason, const struct FText& DamageCauserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ClientSendGroggyMessage");

	struct
	{
		class ATslPlayerState*         GroggyCauserPlayerState;
		class ATslPlayerState*         VictimPlayerState;
		class UDamageType*             GroggyCauserDamageType;
		TEnumAsByte<enum class EDamageReason> DamageReason;
		struct FText                   DamageCauserName;
	} params;
	params.GroggyCauserPlayerState = GroggyCauserPlayerState;
	params.VictimPlayerState = VictimPlayerState;
	params.GroggyCauserDamageType = GroggyCauserDamageType;
	params.DamageReason = DamageReason;
	params.DamageCauserName = DamageCauserName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ClientRevivedCastingWidgetShow
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ClientRevivedCastingWidgetShow(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ClientRevivedCastingWidgetShow");

	struct
	{
		bool                           bVisible;
	} params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ClientPlayPickUpAnimation
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FVector_NetQuantize     InteractionObject              (CPF_ConstParm, CPF_Parm)

void ATslCharacter::ClientPlayPickUpAnimation(const struct FVector_NetQuantize& InteractionObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ClientPlayPickUpAnimation");

	struct
	{
		struct FVector_NetQuantize     InteractionObject;
	} params;
	params.InteractionObject = InteractionObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ClientNotifyCrack
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FVector_NetQuantize     LocationRelative               (CPF_Parm)
// float                          BulletVelocity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ClientNotifyCrack(const struct FVector_NetQuantize& LocationRelative, float BulletVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ClientNotifyCrack");

	struct
	{
		struct FVector_NetQuantize     LocationRelative;
		float                          BulletVelocity;
	} params;
	params.LocationRelative = LocationRelative;
	params.BulletVelocity = BulletVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ClientForceInitStance
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class EStanceMode> ToStance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::ClientForceInitStance(TEnumAsByte<enum class EStanceMode> ToStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ClientForceInitStance");

	struct
	{
		TEnumAsByte<enum class EStanceMode> ToStance;
	} params;
	params.ToStance = ToStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Client_PlayUnarmedAttack
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// int                            AnimationIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Client_PlayUnarmedAttack(int AnimationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Client_PlayUnarmedAttack");

	struct
	{
		int                            AnimationIndex;
	} params;
	params.AnimationIndex = AnimationIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.CheckMuzzleCollision
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslCharacter::CheckMuzzleCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.CheckMuzzleCollision");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.CheckMuzzleBulletSpawn
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslCharacter::CheckMuzzleBulletSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.CheckMuzzleBulletSpawn");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.CanSwim
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::CanSwim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.CanSwim");

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


// Function TslGame.TslCharacter.Camera_AimoffsetFix_TppToFpp
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATslCharacter::Camera_AimoffsetFix_TppToFpp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Camera_AimoffsetFix_TppToFpp");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Camera_AimoffsetFix_FppToTpp
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATslCharacter::Camera_AimoffsetFix_FppToTpp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Camera_AimoffsetFix_FppToTpp");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.ApplyRagdollPhysicsForce
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslCharacter::ApplyRagdollPhysicsForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.ApplyRagdollPhysicsForce");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Anim_MagazineShow
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Anim_MagazineShow(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Anim_MagazineShow");

	struct
	{
		bool                           bShow;
	} params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Anim_MagazineHandAttach
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bAttach                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::Anim_MagazineHandAttach(bool bAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Anim_MagazineHandAttach");

	struct
	{
		bool                           bAttach;
	} params;
	params.bAttach = bAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacter.Anim_IsMagazineVisible
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::Anim_IsMagazineVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.Anim_IsMagazineVisible");

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


// Function TslGame.TslCharacter.AllowInteract
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslCharacter::AllowInteract(class ATslCharacter* OtherCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.AllowInteract");

	struct
	{
		class ATslCharacter*           OtherCharacter;
		bool                           ReturnValue;
	} params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacter.AddBuffMoveSpeedFactor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          MoveSpeedFactor                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacter::AddBuffMoveSpeedFactor(float MoveSpeedFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacter.AddBuffMoveSpeedFactor");

	struct
	{
		float                          MoveSpeedFactor;
	} params;
	params.MoveSpeedFactor = MoveSpeedFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ObserverTagWidget.SetCharacterIconPosition_UC
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Pos_UC                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsHidden                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTagWidget::SetCharacterIconPosition_UC(const struct FVector2D& Pos_UC, bool IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ObserverTagWidget.SetCharacterIconPosition_UC");

	struct
	{
		struct FVector2D               Pos_UC;
		bool                           IsHidden;
	} params;
	params.Pos_UC = Pos_UC;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ObserverTagWidget.IsTeamMember
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UObserverTagWidget::IsTeamMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ObserverTagWidget.IsTeamMember");

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


// Function TslGame.ObserverTagWidget.IsLastSpectatedCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UObserverTagWidget::IsLastSpectatedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ObserverTagWidget.IsLastSpectatedCharacter");

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


// Function TslGame.TslVehicleInterface.GetVehicleMeshComponent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USkeletalMeshComponent* UTslVehicleInterface::GetVehicleMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleInterface.GetVehicleMeshComponent");

	struct
	{
		class USkeletalMeshComponent*  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleInterface.GetTslPlayerController
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslPlayerController*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslPlayerController* UTslVehicleInterface::GetTslPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleInterface.GetTslPlayerController");

	struct
	{
		class ATslPlayerController*    ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ParachuteVehicle.ServerRelease
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void AParachuteVehicle::ServerRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.ServerRelease");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.PhysicsVolumeChanged
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class APhysicsVolume*          NewVolume                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AParachuteVehicle::PhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.PhysicsVolumeChanged");

	struct
	{
		class APhysicsVolume*          NewVolume;
	} params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.OnSecondInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AParachuteVehicle::OnSecondInteractBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.OnSecondInteractBy");

	struct
	{
		class ATslCharacter*           Character;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.OnRide
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AVehicleSeatActor*       Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AParachuteVehicle::OnRide(class ATslCharacter* Rider, class AVehicleSeatActor* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.OnRide");

	struct
	{
		class ATslCharacter*           Rider;
		class AVehicleSeatActor*       Seat;
	} params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.OnRep_IsReleased
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AParachuteVehicle::OnRep_IsReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.OnRep_IsReleased");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.OnRep_IsDriven
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AParachuteVehicle::OnRep_IsDriven()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.OnRep_IsDriven");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.OnPostDriverLeave
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AParachuteVehicle::OnPostDriverLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.OnPostDriverLeave");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.OnInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AParachuteVehicle::OnInteractBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.OnInteractBy");

	struct
	{
		class ATslCharacter*           Character;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.OnDriverRide
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AParachuteVehicle::OnDriverRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.OnDriverRide");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.OnDriverLeave
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AParachuteVehicle::OnDriverLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.OnDriverLeave");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.Land
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private)

void AParachuteVehicle::Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.Land");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicle.IsStuck
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AParachuteVehicle::IsStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.IsStuck");

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


// Function TslGame.ParachuteVehicle.IsReleased
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AParachuteVehicle::IsReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.IsReleased");

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


// Function TslGame.ParachuteVehicle.IsDriven
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AParachuteVehicle::IsDriven()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.IsDriven");

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


// Function TslGame.ParachuteVehicle.GetAltitudeFromFloor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AParachuteVehicle::GetAltitudeFromFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.GetAltitudeFromFloor");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ParachuteVehicle.CanReleaseByInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AParachuteVehicle::CanReleaseByInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.CanReleaseByInput");

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


// Function TslGame.ParachuteVehicle.CanRelease
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AParachuteVehicle::CanRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.CanRelease");

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


// Function TslGame.ParachuteVehicle.AllowSecondInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AParachuteVehicle::AllowSecondInteractBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.AllowSecondInteractBy");

	struct
	{
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ParachuteVehicle.AllowInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AParachuteVehicle::AllowInteractBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicle.AllowInteractBy");

	struct
	{
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ReplicationTrigger.EnableReplicationGroup
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AReplicationTrigger::EnableReplicationGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ReplicationTrigger.EnableReplicationGroup");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.FreeFallMovement.ServerUpdateInput
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// float                          InForwardInput                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRightInput                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InDesiredPitchRotation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InDesiredYawRotation           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFreeFallMovement::ServerUpdateInput(float InForwardInput, float InRightInput, float InDesiredPitchRotation, float InDesiredYawRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.FreeFallMovement.ServerUpdateInput");

	struct
	{
		float                          InForwardInput;
		float                          InRightInput;
		float                          InDesiredPitchRotation;
		float                          InDesiredYawRotation;
	} params;
	params.InForwardInput = InForwardInput;
	params.InRightInput = InRightInput;
	params.InDesiredPitchRotation = InDesiredPitchRotation;
	params.InDesiredYawRotation = InDesiredYawRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.FreeFallMovement.GetRightInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFreeFallMovement::GetRightInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.FreeFallMovement.GetRightInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.FreeFallMovement.GetForwardInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFreeFallMovement::GetForwardInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.FreeFallMovement.GetForwardInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ParachuteVehicleMovement.ServerUpdateInput
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// float                          InForwardInput                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRotationInput                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParachuteVehicleMovement::ServerUpdateInput(float InForwardInput, float InRotationInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicleMovement.ServerUpdateInput");

	struct
	{
		float                          InForwardInput;
		float                          InRotationInput;
	} params;
	params.InForwardInput = InForwardInput;
	params.InRotationInput = InRotationInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ParachuteVehicleMovement.GetRotationYawRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UParachuteVehicleMovement::GetRotationYawRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicleMovement.GetRotationYawRate");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ParachuteVehicleMovement.GetRotationInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UParachuteVehicleMovement::GetRotationInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicleMovement.GetRotationInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ParachuteVehicleMovement.GetForwardInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UParachuteVehicleMovement::GetForwardInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicleMovement.GetForwardInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.ParachuteVehicleMovement.GetClientRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UParachuteVehicleMovement::GetClientRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ParachuteVehicleMovement.GetClientRotation");

	struct
	{
		struct FRotator                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.StanceComponent.ServerForceInitStance
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)

void UStanceComponent::ServerForceInitStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.StanceComponent.ServerForceInitStance");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.StanceComponent.ServerChangeStance
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<enum class EStanceMode> ToStance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStanceComponent::ServerChangeStance(TEnumAsByte<enum class EStanceMode> ToStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.StanceComponent.ServerChangeStance");

	struct
	{
		TEnumAsByte<enum class EStanceMode> ToStance;
	} params;
	params.ToStance = ToStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.StanceComponent.OnRep_CurrentStance
// (FUNC_Native, FUNC_Public)

void UStanceComponent::OnRep_CurrentStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.StanceComponent.OnRep_CurrentStance");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerStart.GetRandomStartYawRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslPlayerStart::GetRandomStartYawRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerStart.GetRandomStartYawRotation");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerStart.GetRandomStartLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslPlayerStart::GetRandomStartLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerStart.GetRandomStartLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.InventoryFacade.IsAutoSwappable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EEquipSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInventoryFacade::IsAutoSwappable(TEnumAsByte<enum class EEquipSlotID> SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InventoryFacade.IsAutoSwappable");

	struct
	{
		TEnumAsByte<enum class EEquipSlotID> SlotID;
		bool                           ReturnValue;
	} params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.InventoryFacade.HasItemByClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  ItemClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInventoryFacade::HasItemByClass(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InventoryFacade.HasItemByClass");

	struct
	{
		class UClass*                  ItemClass;
		bool                           ReturnValue;
	} params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.InventoryFacade.GiveItem_Admin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ItemClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInventoryFacade::GiveItem_Admin(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InventoryFacade.GiveItem_Admin");

	struct
	{
		class UClass*                  ItemClass;
	} params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.InventoryFacade.GetOwnerCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* AInventoryFacade::GetOwnerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InventoryFacade.GetOwnerCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.InventoryFacade.GetInventory
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AInventory*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AInventory* AInventoryFacade::GetInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InventoryFacade.GetInventory");

	struct
	{
		class AInventory*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.InventoryFacade.GetEquipment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AEquipment*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AEquipment* AInventoryFacade::GetEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.InventoryFacade.GetEquipment");

	struct
	{
		class AEquipment*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.WeaponIndexToEquipPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEquipPosition          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEquipPosition AEquipment::WeaponIndexToEquipPosition(int WeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.WeaponIndexToEquipPosition");

	struct
	{
		int                            WeaponIndex;
		struct FEquipPosition          ReturnValue;
	} params;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.WeaponAttachmentSwap
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FEquipPosition          SourceWeapon                   (CPF_Parm)
// struct FEquipPosition          TargetWeapon                   (CPF_Parm)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EWeaponAttachmentSlotID> AttachmentSlotID               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEquipment::WeaponAttachmentSwap(const struct FEquipPosition& SourceWeapon, const struct FEquipPosition& TargetWeapon, const struct FName& ItemClassForVerify, TEnumAsByte<enum class EWeaponAttachmentSlotID> AttachmentSlotID, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.WeaponAttachmentSwap");

	struct
	{
		struct FEquipPosition          SourceWeapon;
		struct FEquipPosition          TargetWeapon;
		struct FName                   ItemClassForVerify;
		TEnumAsByte<enum class EWeaponAttachmentSlotID> AttachmentSlotID;
		bool                           bSoundPlay;
	} params;
	params.SourceWeapon = SourceWeapon;
	params.TargetWeapon = TargetWeapon;
	params.ItemClassForVerify = ItemClassForVerify;
	params.AttachmentSlotID = AttachmentSlotID;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Equipment.UnequipItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FEquipPosition          Position                       (CPF_Parm)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEquipment::UnequipItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.UnequipItem");

	struct
	{
		struct FEquipPosition          Position;
		struct FName                   ItemClassForVerify;
		bool                           bSoundPlay;
	} params;
	params.Position = Position;
	params.ItemClassForVerify = ItemClassForVerify;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Equipment.TryEquipItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AEquipment::TryEquipItem(class UItem* Item, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.TryEquipItem");

	struct
	{
		class UItem*                   Item;
		bool                           bSoundPlay;
		bool                           ReturnValue;
	} params;
	params.Item = Item;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.PrimaryWeaponSwap
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FEquipPosition          EquipPosition                  (CPF_Parm)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)

void AEquipment::PrimaryWeaponSwap(const struct FEquipPosition& EquipPosition, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.PrimaryWeaponSwap");

	struct
	{
		struct FEquipPosition          EquipPosition;
		struct FString                 Options;
	} params;
	params.EquipPosition = EquipPosition;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Equipment.Items_RepNotify
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AEquipment::Items_RepNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.Items_RepNotify");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Equipment.IsSwapablePrimaryWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEquipPosition          EquipPosition                  (CPF_Parm)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AEquipment::IsSwapablePrimaryWeapon(const struct FEquipPosition& EquipPosition, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.IsSwapablePrimaryWeapon");

	struct
	{
		struct FEquipPosition          EquipPosition;
		struct FString                 Options;
		bool                           ReturnValue;
	} params;
	params.EquipPosition = EquipPosition;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.IsAttachableToWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WeaponIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAttachableItem*         AttachableItem                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bOnlyFree                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AEquipment::IsAttachableToWeapon(int WeaponIndex, class UAttachableItem* AttachableItem, bool bOnlyFree)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.IsAttachableToWeapon");

	struct
	{
		int                            WeaponIndex;
		class UAttachableItem*         AttachableItem;
		bool                           bOnlyFree;
		bool                           ReturnValue;
	} params;
	params.WeaponIndex = WeaponIndex;
	params.AttachableItem = AttachableItem;
	params.bOnlyFree = bOnlyFree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.GetOwnerCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* AEquipment::GetOwnerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.GetOwnerCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.GetItemCountByClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  ItemClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AEquipment::GetItemCountByClass(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.GetItemCountByClass");

	struct
	{
		class UClass*                  ItemClass;
		int                            ReturnValue;
	} params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.GetItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEquipPosition          Position                       (CPF_Parm)
// class UEquipableItem*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UEquipableItem* AEquipment::GetItem(const struct FEquipPosition& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.GetItem");

	struct
	{
		struct FEquipPosition          Position;
		class UEquipableItem*          ReturnValue;
	} params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.GetInventoryFacade
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AInventoryFacade*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AInventoryFacade* AEquipment::GetInventoryFacade()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.GetInventoryFacade");

	struct
	{
		class AInventoryFacade*        ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.FindPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEquipPosition          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEquipPosition AEquipment::FindPosition(class UItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.FindPosition");

	struct
	{
		class UItem*                   Item;
		struct FEquipPosition          ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.FindEquipPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EEquipSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bOnlyFree                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEquipPosition          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEquipPosition AEquipment::FindEquipPosition(TEnumAsByte<enum class EEquipSlotID> SlotID, bool bOnlyFree)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.FindEquipPosition");

	struct
	{
		TEnumAsByte<enum class EEquipSlotID> SlotID;
		bool                           bOnlyFree;
		struct FEquipPosition          ReturnValue;
	} params;
	params.SlotID = SlotID;
	params.bOnlyFree = bOnlyFree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.FindEquipableWeaponPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)
// struct FEquipPosition          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEquipPosition AEquipment::FindEquipableWeaponPosition(class UEquipableItem* EquipableItem, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.FindEquipableWeaponPosition");

	struct
	{
		class UEquipableItem*          EquipableItem;
		struct FString                 Options;
		struct FEquipPosition          ReturnValue;
	} params;
	params.EquipableItem = EquipableItem;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.FindAttachableWeaponIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAttachableItem*         AttachableItem                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AEquipment::FindAttachableWeaponIndex(class UAttachableItem* AttachableItem, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.FindAttachableWeaponIndex");

	struct
	{
		class UAttachableItem*         AttachableItem;
		struct FString                 Options;
		int                            ReturnValue;
	} params;
	params.AttachableItem = AttachableItem;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.EquipPositionToWeaponIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEquipPosition          Position                       (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AEquipment::EquipPositionToWeaponIndex(const struct FEquipPosition& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.EquipPositionToWeaponIndex");

	struct
	{
		struct FEquipPosition          Position;
		int                            ReturnValue;
	} params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.EquipItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FEquipPosition          Position                       (CPF_Parm)
// class UEquipableItem*          Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCheckViaCanEquipTo            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AEquipment::EquipItem(const struct FEquipPosition& Position, class UEquipableItem* Item, bool bCheckViaCanEquipTo, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.EquipItem");

	struct
	{
		struct FEquipPosition          Position;
		class UEquipableItem*          Item;
		bool                           bCheckViaCanEquipTo;
		bool                           bSoundPlay;
		bool                           ReturnValue;
	} params;
	params.Position = Position;
	params.Item = Item;
	params.bCheckViaCanEquipTo = bCheckViaCanEquipTo;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Equipment.DropItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FEquipPosition          Position                       (CPF_Parm)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsForce                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEquipment::DropItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bIsForce, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.DropItem");

	struct
	{
		struct FEquipPosition          Position;
		struct FName                   ItemClassForVerify;
		bool                           bIsForce;
		bool                           bSoundPlay;
	} params;
	params.Position = Position;
	params.ItemClassForVerify = ItemClassForVerify;
	params.bIsForce = bIsForce;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Equipment.DropAttachedItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FEquipPosition          EquipPosition                  (CPF_Parm)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEquipment::DropAttachedItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.DropAttachedItem");

	struct
	{
		struct FEquipPosition          EquipPosition;
		struct FName                   ItemClassForVerify;
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		bool                           bSoundPlay;
	} params;
	params.EquipPosition = EquipPosition;
	params.ItemClassForVerify = ItemClassForVerify;
	params.SlotID = SlotID;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Equipment.DetachItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FEquipPosition          EquipPosition                  (CPF_Parm)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEquipment::DetachItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Equipment.DetachItem");

	struct
	{
		struct FEquipPosition          EquipPosition;
		struct FName                   ItemClassForVerify;
		TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID;
		bool                           bSoundPlay;
	} params;
	params.EquipPosition = EquipPosition;
	params.ItemClassForVerify = ItemClassForVerify;
	params.SlotID = SlotID;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Inventory.UseItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInventory::UseItem(int Index, const struct FName& ItemClassForVerify)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.UseItem");

	struct
	{
		int                            Index;
		struct FName                   ItemClassForVerify;
	} params;
	params.Index = Index;
	params.ItemClassForVerify = ItemClassForVerify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Inventory.OnFinishUseCast
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UObject*                 CastObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInventory::OnFinishUseCast(class UObject* CastObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.OnFinishUseCast");

	struct
	{
		class UObject*                 CastObject;
	} params;
	params.CastObject = CastObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Inventory.Items_RepNotify
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AInventory::Items_RepNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.Items_RepNotify");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Inventory.GetOwnerCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* AInventory::GetOwnerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetOwnerCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.GetMaxSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInventory::GetMaxSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetMaxSpace");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.GetItemCountByClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  ItemClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AInventory::GetItemCountByClass(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetItemCountByClass");

	struct
	{
		class UClass*                  ItemClass;
		int                            ReturnValue;
	} params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.GetItemCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AInventory::GetItemCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetItemCount");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.GetInventoryFacade
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AInventoryFacade*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AInventoryFacade* AInventory::GetInventoryFacade()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetInventoryFacade");

	struct
	{
		class AInventoryFacade*        ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.GetCurrentSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInventory::GetCurrentSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetCurrentSpace");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.GetAllItemsByType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  ItemSuperClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FInventoryItem>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FInventoryItem> AInventory::GetAllItemsByType(class UClass* ItemSuperClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetAllItemsByType");

	struct
	{
		class UClass*                  ItemSuperClass;
		TArray<struct FInventoryItem>  ReturnValue;
	} params;
	params.ItemSuperClass = ItemSuperClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.GetAllItems
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FInventoryItem>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FInventoryItem> AInventory::GetAllItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetAllItems");

	struct
	{
		TArray<struct FInventoryItem>  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.GetAdditionalMaxCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AInventory::GetAdditionalMaxCount(class UItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.GetAdditionalMaxCount");

	struct
	{
		class UItem*                   Item;
		int                            ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.FindItemIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AInventory::FindItemIndex(class UItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.FindItemIndex");

	struct
	{
		class UItem*                   Item;
		int                            ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.FindItemHasMinStack
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ItemClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UItem*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UItem* AInventory::FindItemHasMinStack(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.FindItemHasMinStack");

	struct
	{
		class UClass*                  ItemClass;
		class UItem*                   ReturnValue;
	} params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.FindItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ItemClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UItem*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UItem* AInventory::FindItem(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.FindItem");

	struct
	{
		class UClass*                  ItemClass;
		class UItem*                   ReturnValue;
	} params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.EquipOrDropItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInventory::EquipOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.EquipOrDropItem");

	struct
	{
		int                            Index;
		struct FName                   ItemClassForVerify;
		bool                           bSoundPlay;
	} params;
	params.Index = Index;
	params.ItemClassForVerify = ItemClassForVerify;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Inventory.EquipItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInventory::EquipItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.EquipItem");

	struct
	{
		int                            Index;
		struct FName                   ItemClassForVerify;
		bool                           bSoundPlay;
	} params;
	params.Index = Index;
	params.ItemClassForVerify = ItemClassForVerify;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Inventory.DropItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Options                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInventory::DropItem(int Index, const struct FName& ItemClassForVerify, const struct FString& Options, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.DropItem");

	struct
	{
		int                            Index;
		struct FName                   ItemClassForVerify;
		struct FString                 Options;
		bool                           bSoundPlay;
	} params;
	params.Index = Index;
	params.ItemClassForVerify = ItemClassForVerify;
	params.Options = Options;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Inventory.ConsumeItemByClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ItemClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInventory::ConsumeItemByClass(class UClass* ItemClass, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.ConsumeItemByClass");

	struct
	{
		class UClass*                  ItemClass;
		int                            Count;
		bool                           ReturnValue;
	} params;
	params.ItemClass = ItemClass;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Inventory.AttachOrDropItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInventory::AttachOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.AttachOrDropItem");

	struct
	{
		int                            Index;
		struct FName                   ItemClassForVerify;
		bool                           bSoundPlay;
	} params;
	params.Index = Index;
	params.ItemClassForVerify = ItemClassForVerify;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Inventory.AttachItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ItemClassForVerify             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEquipPosition          EquipPosition                  (CPF_Parm)
// bool                           bSoundPlay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInventory::AttachItem(int Index, const struct FName& ItemClassForVerify, const struct FEquipPosition& EquipPosition, bool bSoundPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Inventory.AttachItem");

	struct
	{
		int                            Index;
		struct FName                   ItemClassForVerify;
		struct FEquipPosition          EquipPosition;
		bool                           bSoundPlay;
	} params;
	params.Index = Index;
	params.ItemClassForVerify = ItemClassForVerify;
	params.EquipPosition = EquipPosition;
	params.bSoundPlay = bSoundPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemExplorerProxy.PropagateUpdateItemList
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AItemExplorerProxy::PropagateUpdateItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemExplorerProxy.PropagateUpdateItemList");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemExplorerProxy.PropagateDestroyContextMenuWidget
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AItemExplorerProxy::PropagateDestroyContextMenuWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemExplorerProxy.PropagateDestroyContextMenuWidget");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemExplorerProxy.PropagateCreateAndShowContextMenuWidget
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// TScriptInterface<class USlotContainerInterface> Param                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AItemExplorerProxy::PropagateCreateAndShowContextMenuWidget(const TScriptInterface<class USlotContainerInterface>& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemExplorerProxy.PropagateCreateAndShowContextMenuWidget");

	struct
	{
		TScriptInterface<class USlotContainerInterface> Param;
	} params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemExplorerProxy.Pop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AItemExplorerProxy::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemExplorerProxy.Pop");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.ItemExplorerProxy.IsBaseExplorer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AItemExplorerProxy::IsBaseExplorer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.ItemExplorerProxy.IsBaseExplorer");

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


// Function TslGame.Team.ServerSetShowMapMarker
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_NetValidate)
// Parameters:
// bool                           bNewShowMapMarker              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATeam::ServerSetShowMapMarker(bool bNewShowMapMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.ServerSetShowMapMarker");

	struct
	{
		bool                           bNewShowMapMarker;
	} params;
	params.bNewShowMapMarker = bNewShowMapMarker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Team.ServerSetMapMarkerPosition
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_NetValidate)
// Parameters:
// struct FVector2D               NewMapMarkerPosition           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATeam::ServerSetMapMarkerPosition(const struct FVector2D& NewMapMarkerPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.ServerSetMapMarkerPosition");

	struct
	{
		struct FVector2D               NewMapMarkerPosition;
	} params;
	params.NewMapMarkerPosition = NewMapMarkerPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.Team.IsShowMapMarker
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATeam::IsShowMapMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.IsShowMapMarker");

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


// Function TslGame.Team.IsQuitter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATeam::IsQuitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.IsQuitter");

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


// Function TslGame.Team.IsGroggying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATeam::IsGroggying()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.IsGroggying");

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


// Function TslGame.Team.IsDying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATeam::IsDying()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.IsDying");

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


// Function TslGame.Team.GetUniqueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATeam::GetUniqueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetUniqueId");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetTslCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ATeam::GetTslCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetTslCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetRideVehicle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class ETeamVehicleType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ETeamVehicleType> ATeam::GetRideVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetRideVehicle");

	struct
	{
		TEnumAsByte<enum class ETeamVehicleType> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATeam::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetPlayerName");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetPlayerLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATeam::GetPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetPlayerLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetMemberNumber
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATeam::GetMemberNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetMemberNumber");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetMapMarkerPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D ATeam::GetMapMarkerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetMapMarkerPosition");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetHealthMax
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATeam::GetHealthMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetHealthMax");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetHealth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATeam::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetHealth");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetGroggyHealthMax
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATeam::GetGroggyHealthMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetGroggyHealthMax");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.Team.GetGroggyHealth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATeam::GetGroggyHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.Team.GetGroggyHealth");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TeamMarkWidget.SetCharacterIconPosition_UC
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Pos_UC                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OutRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsHidden                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamMarkWidget::SetCharacterIconPosition_UC(const struct FVector2D& Pos_UC, bool OutRange, float Angle, bool IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TeamMarkWidget.SetCharacterIconPosition_UC");

	struct
	{
		struct FVector2D               Pos_UC;
		bool                           OutRange;
		float                          Angle;
		bool                           IsHidden;
	} params;
	params.Pos_UC = Pos_UC;
	params.OutRange = OutRange;
	params.Angle = Angle;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TeamMarkWidget.InitializeTeamMarkGrid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTeamMarkWidget::InitializeTeamMarkGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TeamMarkWidget.InitializeTeamMarkGrid");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslAccessoryComponent.SetPhysicsSimulation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSimulatePhysics               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslAccessoryComponent::SetPhysicsSimulation(bool bSimulatePhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslAccessoryComponent.SetPhysicsSimulation");

	struct
	{
		bool                           bSimulatePhysics;
	} params;
	params.bSimulatePhysics = bSimulatePhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslAccessoryComponent.InitSetupComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSimulatePhysics               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslAccessoryComponent::InitSetupComponent(bool bSimulatePhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslAccessoryComponent.InitSetupComponent");

	struct
	{
		bool                           bSimulatePhysics;
	} params;
	params.bSimulatePhysics = bSimulatePhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslAIController.ShootEnemy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslAIController::ShootEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslAIController.ShootEnemy");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslAIController.FindClosestEnemyWithLOS
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATslCharacter*           ExcludeEnemy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslAIController::FindClosestEnemyWithLOS(class ATslCharacter* ExcludeEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslAIController.FindClosestEnemyWithLOS");

	struct
	{
		class ATslCharacter*           ExcludeEnemy;
		bool                           ReturnValue;
	} params;
	params.ExcludeEnemy = ExcludeEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslAIController.FindClosestEnemy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslAIController::FindClosestEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslAIController.FindClosestEnemy");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.AircraftCarePackage.IsPlayInEditor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AAircraftCarePackage::IsPlayInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.AircraftCarePackage.IsPlayInEditor");

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


// Function TslGame.TransportAircraftVehicle.OnRide
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AVehicleSeatActor*       Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATransportAircraftVehicle::OnRide(class ATslCharacter* Rider, class AVehicleSeatActor* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TransportAircraftVehicle.OnRide");

	struct
	{
		class ATslCharacter*           Rider;
		class AVehicleSeatActor*       Seat;
	} params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TransportAircraftVehicle.OnLocalPlayerRide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATransportAircraftVehicle::OnLocalPlayerRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TransportAircraftVehicle.OnLocalPlayerRide");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TransportAircraftVehicle.OnLocalPlayerLeave
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATransportAircraftVehicle::OnLocalPlayerLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TransportAircraftVehicle.OnLocalPlayerLeave");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TransportAircraftVehicle.OnLeave
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AVehicleSeatActor*       Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATransportAircraftVehicle::OnLeave(class ATslCharacter* Rider, class AVehicleSeatActor* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TransportAircraftVehicle.OnLeave");

	struct
	{
		class ATslCharacter*           Rider;
		class AVehicleSeatActor*       Seat;
	} params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TransportAircraftVehicle.OnInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATransportAircraftVehicle::OnInteractBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TransportAircraftVehicle.OnInteractBy");

	struct
	{
		class ATslCharacter*           Character;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TransportAircraftVehicle.EnterAtEjectionArea
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATransportAircraftVehicle::EnterAtEjectionArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TransportAircraftVehicle.EnterAtEjectionArea");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TransportAircraftVehicle.EjectAll
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATransportAircraftVehicle::EjectAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TransportAircraftVehicle.EjectAll");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TransportAircraftVehicle.AllowInteractBy
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ATslCharacter*           Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATransportAircraftVehicle::AllowInteractBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TransportAircraftVehicle.AllowInteractBy");

	struct
	{
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslAnimInstance.FindPositionFromDistanceCurve
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Distance                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UAnimSequenceBase*       InAnimSequence                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslAnimInstance::FindPositionFromDistanceCurve(float Distance, class UAnimSequenceBase* InAnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslAnimInstance.FindPositionFromDistanceCurve");

	struct
	{
		float                          Distance;
		class UAnimSequenceBase*       InAnimSequence;
		float                          ReturnValue;
	} params;
	params.Distance = Distance;
	params.InAnimSequence = InAnimSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslHUD.TestSendSystemMessage
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FText                   Message                        (CPF_Parm)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslHUD::TestSendSystemMessage(const struct FText& Message, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.TestSendSystemMessage");

	struct
	{
		struct FText                   Message;
		float                          Duration;
	} params;
	params.Message = Message;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslHUD.TestSendImportantMessage
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FText                   Message                        (CPF_Parm)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslHUD::TestSendImportantMessage(const struct FText& Message, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.TestSendImportantMessage");

	struct
	{
		struct FText                   Message;
		float                          Duration;
	} params;
	params.Message = Message;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslHUD.TestKillMessage
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 KillerName                     (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VictimName                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           bKillerIsOwner                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bVictimIsOwner                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslHUD::TestKillMessage(const struct FString& KillerName, const struct FString& VictimName, bool bKillerIsOwner, bool bVictimIsOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.TestKillMessage");

	struct
	{
		struct FString                 KillerName;
		struct FString                 VictimName;
		bool                           bKillerIsOwner;
		bool                           bVictimIsOwner;
	} params;
	params.KillerName = KillerName;
	params.VictimName = VictimName;
	params.bKillerIsOwner = bKillerIsOwner;
	params.bVictimIsOwner = bVictimIsOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslHUD.SpawnActorInSceneCaptureWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              SpawnTransform                 (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FScriptDelegate         DelegateToCall                 (CPF_Parm, CPF_ZeroConstructor)

void ATslHUD::SpawnActorInSceneCaptureWorld(class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FScriptDelegate& DelegateToCall)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.SpawnActorInSceneCaptureWorld");

	struct
	{
		class UClass*                  ActorClass;
		struct FTransform              SpawnTransform;
		struct FScriptDelegate         DelegateToCall;
	} params;
	params.ActorClass = ActorClass;
	params.SpawnTransform = SpawnTransform;
	params.DelegateToCall = DelegateToCall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslHUD.NotifyDropSlotOnOtherContainer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class USlotContainerInterface> Container                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslHUD::NotifyDropSlotOnOtherContainer(const TScriptInterface<class USlotContainerInterface>& Container, const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.NotifyDropSlotOnOtherContainer");

	struct
	{
		TScriptInterface<class USlotContainerInterface> Container;
		TScriptInterface<class USlotInterface> Slot;
		TScriptInterface<class USlotContainerInterface> OtherContainer;
	} params;
	params.Container = Container;
	params.Slot = Slot;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslHUD.IsGameEnded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslHUD::IsGameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.IsGameEnded");

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


// Function TslGame.TslHUD.InitCaptureWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslHUD::InitCaptureWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.InitCaptureWorld");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslHUD.GoToLobby
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslHUD::GoToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.GoToLobby");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslHUD.GetPossessPawn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* ATslHUD::GetPossessPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.GetPossessPawn");

	struct
	{
		class APawn*                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslHUD.GetPossessCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ATslHUD::GetPossessCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHUD.GetPossessCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyHUD.SetWidgetForBinding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ViewIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCoherentUIGTWidget*     Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALobbyHUD::SetWidgetForBinding(int ViewIndex, class UCoherentUIGTWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.LobbyHUD.SetWidgetForBinding");

	struct
	{
		int                            ViewIndex;
		class UCoherentUIGTWidget*     Widget;
	} params;
	params.ViewIndex = ViewIndex;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.LobbyHUD.GetStartUrl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ALobbyHUD::GetStartUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.LobbyHUD.GetStartUrl");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyHUD.ClearAllWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ALobbyHUD::ClearAllWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.LobbyHUD.ClearAllWidget");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.UnreliablePong
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            SeqID                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int64_t                        DateTimeTickFromServer         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::UnreliablePong(int SeqID, int64_t DateTimeTickFromServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.UnreliablePong");

	struct
	{
		int                            SeqID;
		int64_t                        DateTimeTickFromServer;
	} params;
	params.SeqID = SeqID;
	params.DateTimeTickFromServer = DateTimeTickFromServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.UnreliablePing
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetClient)
// Parameters:
// int                            SeqID                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int64_t                        DateTimeTick                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::UnreliablePing(int SeqID, int64_t DateTimeTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.UnreliablePing");

	struct
	{
		int                            SeqID;
		int64_t                        DateTimeTick;
	} params;
	params.SeqID = SeqID;
	params.DateTimeTick = DateTimeTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.Suicide
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void ATslPlayerController::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.Suicide");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.SimulateInputKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::SimulateInputKey(const struct FKey& Key, bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.SimulateInputKey");

	struct
	{
		struct FKey                    Key;
		bool                           bPressed;
	} params;
	params.Key = Key;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ShowTeamDeathPopup
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslPlayerController::ShowTeamDeathPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ShowTeamDeathPopup");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ShowPlayerControllerBindActions_Admin
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void ATslPlayerController::ShowPlayerControllerBindActions_Admin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ShowPlayerControllerBindActions_Admin");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ShowMatchResult
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslPlayerController::ShowMatchResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ShowMatchResult");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ShowGotoLobbyPopUp
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class EPopupButtonID> ButtonID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ShowGotoLobbyPopUp(TEnumAsByte<enum class EPopupButtonID> ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ShowGotoLobbyPopUp");

	struct
	{
		TEnumAsByte<enum class EPopupButtonID> ButtonID;
	} params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerViewTargetReplicateUpdate
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ATslPlayerController::ServerViewTargetReplicateUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerViewTargetReplicateUpdate");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerTryInteractByComponent
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class USeperatedInteractionComponent* TargetComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslPlayerController::ServerTryInteractByComponent(class USeperatedInteractionComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerTryInteractByComponent");

	struct
	{
		class USeperatedInteractionComponent* TargetComponent;
	} params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerTryInteract
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerTryInteract(class AActor* TargetObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerTryInteract");

	struct
	{
		class AActor*                  TargetObject;
	} params;
	params.TargetObject = TargetObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSuicide
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void ATslPlayerController::ServerSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSuicide");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerStartInteractionByComponent
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class USeperatedInteractionComponent* InteractionComponent           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslPlayerController::ServerStartInteractionByComponent(class USeperatedInteractionComponent* InteractionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerStartInteractionByComponent");

	struct
	{
		class USeperatedInteractionComponent* InteractionComponent;
	} params;
	params.InteractionComponent = InteractionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerStartInteraction
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UInteractionComponent*   InteractionComponent           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslPlayerController::ServerStartInteraction(class UInteractionComponent* InteractionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerStartInteraction");

	struct
	{
		class UInteractionComponent*   InteractionComponent;
	} params;
	params.InteractionComponent = InteractionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSpawnVehicle
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)

void ATslPlayerController::ServerSpawnVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSpawnVehicle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSetViewTarget
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_NetValidate)
// Parameters:
// class AActor*                  NewViewTarget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerSetViewTarget(class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSetViewTarget");

	struct
	{
		class AActor*                  NewViewTarget;
	} params;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSetThirdPerson
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewThirdPerson                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerSetThirdPerson(bool bNewThirdPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSetThirdPerson");

	struct
	{
		bool                           bNewThirdPerson;
	} params;
	params.bNewThirdPerson = bNewThirdPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSetIsReviving
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           InbIsReviving                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerSetIsReviving(bool InbIsReviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSetIsReviving");

	struct
	{
		bool                           InbIsReviving;
	} params;
	params.InbIsReviving = InbIsReviving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSetAccumViewRotation
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FVector_NetQuantizeNormal InAccumViewRotation            (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ATslPlayerController::ServerSetAccumViewRotation(const struct FVector_NetQuantizeNormal& InAccumViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSetAccumViewRotation");

	struct
	{
		struct FVector_NetQuantizeNormal InAccumViewRotation;
	} params;
	params.InAccumViewRotation = InAccumViewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSendPacketUnreliable
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TArray<unsigned char>          Packet                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ATslPlayerController::ServerSendPacketUnreliable(TArray<unsigned char> Packet)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSendPacketUnreliable");

	struct
	{
		TArray<unsigned char>          Packet;
	} params;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSendPacketReliable
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TArray<unsigned char>          Packet                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ATslPlayerController::ServerSendPacketReliable(TArray<unsigned char> Packet)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSendPacketReliable");

	struct
	{
		TArray<unsigned char>          Packet;
	} params;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerSay
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 Msg                            (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::ServerSay(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerSay");

	struct
	{
		struct FString                 Msg;
	} params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerNotifyHitToGlassWindowInst
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UTslInstancedGlassWindowComponent* GlassWindowInstComponent       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslPlayerController::ServerNotifyHitToGlassWindowInst(class UTslInstancedGlassWindowComponent* GlassWindowInstComponent, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerNotifyHitToGlassWindowInst");

	struct
	{
		class UTslInstancedGlassWindowComponent* GlassWindowInstComponent;
		struct FHitResult              Hit;
	} params;
	params.GlassWindowInstComponent = GlassWindowInstComponent;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerNotifyHitToGlassWindow
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UTslGlassWindowComponent* GlassWindowComponent           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslPlayerController::ServerNotifyHitToGlassWindow(class UTslGlassWindowComponent* GlassWindowComponent, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerNotifyHitToGlassWindow");

	struct
	{
		class UTslGlassWindowComponent* GlassWindowComponent;
		struct FHitResult              Hit;
	} params;
	params.GlassWindowComponent = GlassWindowComponent;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerNextSetViewTarget
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bIsPrev                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerNextSetViewTarget(bool bIsPrev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerNextSetViewTarget");

	struct
	{
		bool                           bIsPrev;
	} params;
	params.bIsPrev = bIsPrev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerMoveToVehicleSeat
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            SeatIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerMoveToVehicleSeat(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerMoveToVehicleSeat");

	struct
	{
		int                            SeatIndex;
	} params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerMapLoadFinishedOnClient
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void ATslPlayerController::ServerMapLoadFinishedOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerMapLoadFinishedOnClient");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerHoldRotation
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerHoldRotation(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerHoldRotation");

	struct
	{
		bool                           bEnable;
	} params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerCheat
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 Msg                            (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::ServerCheat(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerCheat");

	struct
	{
		struct FString                 Msg;
	} params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerCancelInteraction
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UObject*                 CastObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerCancelInteraction(class UObject* CastObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerCancelInteraction");

	struct
	{
		class UObject*                 CastObject;
	} params;
	params.CastObject = CastObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerBroadCastUsedUpdateCameraMode
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FName                   InCameraName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbFirstPerson                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbIsInVehicle                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbIsScoping                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerBroadCastUsedUpdateCameraMode(const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerBroadCastUsedUpdateCameraMode");

	struct
	{
		struct FName                   InCameraName;
		bool                           InbFirstPerson;
		bool                           InbIsInVehicle;
		bool                           InbIsScoping;
	} params;
	params.InCameraName = InCameraName;
	params.InbFirstPerson = InbFirstPerson;
	params.InbIsInVehicle = InbIsInVehicle;
	params.InbIsScoping = InbIsScoping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerBroadCastCastingBar
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// float                          CastTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   CastName                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// bool                           OnOff                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ServerBroadCastCastingBar(float CastTime, const struct FText& CastName, bool OnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerBroadCastCastingBar");

	struct
	{
		float                          CastTime;
		struct FText                   CastName;
		bool                           OnOff;
	} params;
	params.CastTime = CastTime;
	params.CastName = CastName;
	params.OnOff = OnOff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerBEServerCommand
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Arg0                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Arg1                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Arg2                           (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::ServerBEServerCommand(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerBEServerCommand");

	struct
	{
		struct FString                 Command;
		struct FString                 Arg0;
		struct FString                 Arg1;
		struct FString                 Arg2;
	} params;
	params.Command = Command;
	params.Arg0 = Arg0;
	params.Arg1 = Arg1;
	params.Arg2 = Arg2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ServerAdmin
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 AdminCommand                   (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::ServerAdmin(const struct FString& AdminCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ServerAdmin");

	struct
	{
		struct FString                 AdminCommand;
	} params;
	params.AdminCommand = AdminCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.SendSystemMessage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// float                          MessageDuration                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::SendSystemMessage(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.SendSystemMessage");

	struct
	{
		TEnumAsByte<enum class ESystemMessageType> MessageType;
		struct FText                   Message;
		float                          MessageDuration;
	} params;
	params.MessageType = MessageType;
	params.Message = Message;
	params.MessageDuration = MessageDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.Say
// (FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Msg                            (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::Say(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.Say");

	struct
	{
		struct FString                 Msg;
	} params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ReliablePong
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            SeqID                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int64_t                        DateTimeTickFromServer         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ReliablePong(int SeqID, int64_t DateTimeTickFromServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ReliablePong");

	struct
	{
		int                            SeqID;
		int64_t                        DateTimeTickFromServer;
	} params;
	params.SeqID = SeqID;
	params.DateTimeTickFromServer = DateTimeTickFromServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ReliablePing
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetClient)
// Parameters:
// int                            SeqID                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int64_t                        DateTimeTick                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ReliablePing(int SeqID, int64_t DateTimeTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ReliablePing");

	struct
	{
		int                            SeqID;
		int64_t                        DateTimeTick;
	} params;
	params.SeqID = SeqID;
	params.DateTimeTick = DateTimeTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.OnUpdateSpectatorCameraMode
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class ATslCharacter*           TslCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   InCameraName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbFirstPerson                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbIsInVehicle                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbIsScoping                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::OnUpdateSpectatorCameraMode(class ATslCharacter* TslCharacter, const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.OnUpdateSpectatorCameraMode");

	struct
	{
		class ATslCharacter*           TslCharacter;
		struct FName                   InCameraName;
		bool                           InbFirstPerson;
		bool                           InbIsInVehicle;
		bool                           InbIsScoping;
	} params;
	params.TslCharacter = TslCharacter;
	params.InCameraName = InCameraName;
	params.InbFirstPerson = InbFirstPerson;
	params.InbIsInVehicle = InbIsInVehicle;
	params.InbIsScoping = InbIsScoping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.OnShowCastingBarWidget
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// float                          CastTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   CastName                       (CPF_Parm)
// bool                           OnOff                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::OnShowCastingBarWidget(float CastTime, const struct FText& CastName, bool OnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.OnShowCastingBarWidget");

	struct
	{
		float                          CastTime;
		struct FText                   CastName;
		bool                           OnOff;
	} params;
	params.CastTime = CastTime;
	params.CastName = CastName;
	params.OnOff = OnOff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.OnRep_Team
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslPlayerController::OnRep_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.OnRep_Team");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.OnRep_CameraViewBehaviour
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslPlayerController::OnRep_CameraViewBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.OnRep_CameraViewBehaviour");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.OnItemStackCountHandlingMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslPlayerController::OnItemStackCountHandlingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.OnItemStackCountHandlingMode");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.OnFinishInteractionCast
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UObject*                 CastObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::OnFinishInteractionCast(class UObject* CastObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.OnFinishInteractionCast");

	struct
	{
		class UObject*                 CastObject;
	} params;
	params.CastObject = CastObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.OnCancelInteractionCast
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UObject*                 CastObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::OnCancelInteractionCast(class UObject* CastObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.OnCancelInteractionCast");

	struct
	{
		class UObject*                 CastObject;
	} params;
	params.CastObject = CastObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.OffItemStackCountHandlingMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslPlayerController::OffItemStackCountHandlingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.OffItemStackCountHandlingMode");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ObserverTeleportTo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ObserverTeleportTo(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ObserverTeleportTo");

	struct
	{
		struct FVector                 Location;
	} params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.NextSetViewTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslPlayerController::NextSetViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.NextSetViewTarget");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.IsSpectatorState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerController::IsSpectatorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.IsSpectatorState");

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


// Function TslGame.TslPlayerController.IsSpectating
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerController::IsSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.IsSpectating");

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


// Function TslGame.TslPlayerController.IsSameObservingCameraMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EObserverCameraMode> CameraType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerController::IsSameObservingCameraMode(TEnumAsByte<enum class EObserverCameraMode> CameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.IsSameObservingCameraMode");

	struct
	{
		TEnumAsByte<enum class EObserverCameraMode> CameraType;
		bool                           ReturnValue;
	} params;
	params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.IsObserving
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerController::IsObserving()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.IsObserving");

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


// Function TslGame.TslPlayerController.IsItemStackCountHandlingMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerController::IsItemStackCountHandlingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.IsItemStackCountHandlingMode");

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


// Function TslGame.TslPlayerController.IsGroggying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerController::IsGroggying()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.IsGroggying");

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


// Function TslGame.TslPlayerController.IsGameInputAllowed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerController::IsGameInputAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.IsGameInputAllowed");

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


// Function TslGame.TslPlayerController.HideMatchResult
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslPlayerController::HideMatchResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.HideMatchResult");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.GetVivoxComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UVivoxComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UVivoxComponent* ATslPlayerController::GetVivoxComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetVivoxComponent");

	struct
	{
		class UVivoxComponent*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetViewTargetTslCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ATslPlayerController::GetViewTargetTslCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetViewTargetTslCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetViewTargetTeam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATeam*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATeam* ATslPlayerController::GetViewTargetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetViewTargetTeam");

	struct
	{
		class ATeam*                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetTslPlayerMatchResultInfos
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FTslPlayerMatchResultInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FTslPlayerMatchResultInfo> ATslPlayerController::GetTslPlayerMatchResultInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetTslPlayerMatchResultInfos");

	struct
	{
		TArray<struct FTslPlayerMatchResultInfo> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetTslCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ATslPlayerController::GetTslCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetTslCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetTargetViewRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATslPlayerController::GetTargetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetTargetViewRotation");

	struct
	{
		struct FRotator                ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetReplicateTeamMembers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class ATslCharacter*>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class ATslCharacter*> ATslPlayerController::GetReplicateTeamMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetReplicateTeamMembers");

	struct
	{
		TArray<class ATslCharacter*>   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetReplicateCharacters
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class ATslCharacter*>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class ATslCharacter*> ATslPlayerController::GetReplicateCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetReplicateCharacters");

	struct
	{
		TArray<class ATslCharacter*>   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetOtherElapsedCastTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslPlayerController::GetOtherElapsedCastTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetOtherElapsedCastTime");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetOtherCastTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslPlayerController::GetOtherCastTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetOtherCastTime");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetOtherCastingName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText ATslPlayerController::GetOtherCastingName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetOtherCastingName");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetObserverCameraMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EObserverCameraMode> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EObserverCameraMode> ATslPlayerController::GetObserverCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetObserverCameraMode");

	struct
	{
		TEnumAsByte<enum class EObserverCameraMode> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetObserverAuthorityType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EObserverAuthorityType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EObserverAuthorityType> ATslPlayerController::GetObserverAuthorityType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetObserverAuthorityType");

	struct
	{
		TEnumAsByte<enum class EObserverAuthorityType> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetHudDebugText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText ATslPlayerController::GetHudDebugText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetHudDebugText");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetClientTeam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           IncludeSelf                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class ATeam*>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class ATeam*> ATslPlayerController::GetClientTeam(bool IncludeSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetClientTeam");

	struct
	{
		bool                           IncludeSelf;
		TArray<class ATeam*>           ReturnValue;
	} params;
	params.IncludeSelf = IncludeSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.GetCanAllSpectate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerController::GetCanAllSpectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetCanAllSpectate");

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


// Function TslGame.TslPlayerController.GetAliveTeamMemberCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslPlayerController::GetAliveTeamMemberCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.GetAliveTeamMemberCount");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerController.DumpActorDetailByRaycast
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void ATslPlayerController::DumpActorDetailByRaycast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.DumpActorDetailByRaycast");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.DropItem
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ItemTypeName                   (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::DropItem(const struct FString& ItemTypeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.DropItem");

	struct
	{
		struct FString                 ItemTypeName;
	} params;
	params.ItemTypeName = ItemTypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientUpdateSpectatorCameraMode
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FName                   InCameraName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbFirstPerson                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbIsInVehicle                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InbIsScoping                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientUpdateSpectatorCameraMode(const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientUpdateSpectatorCameraMode");

	struct
	{
		struct FName                   InCameraName;
		bool                           InbFirstPerson;
		bool                           InbIsInVehicle;
		bool                           InbIsScoping;
	} params;
	params.InCameraName = InCameraName;
	params.InbFirstPerson = InbFirstPerson;
	params.InbIsInVehicle = InbIsInVehicle;
	params.InbIsScoping = InbIsScoping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientStartOnlineGame
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ATslPlayerController::ClientStartOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientStartOnlineGame");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientShowMatchResult
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)

void ATslPlayerController::ClientShowMatchResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientShowMatchResult");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientShowCastingBar
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// float                          CastTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   CastName                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// bool                           OnOff                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientShowCastingBar(float CastTime, const struct FText& CastName, bool OnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientShowCastingBar");

	struct
	{
		float                          CastTime;
		struct FText                   CastName;
		bool                           OnOff;
	} params;
	params.CastTime = CastTime;
	params.CastName = CastName;
	params.OnOff = OnOff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientSetTslPlayerMatchResultInfos
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TArray<struct FTslPlayerMatchResultInfo> InTslPlayerMatchResultInfos    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ATslPlayerController::ClientSetTslPlayerMatchResultInfos(TArray<struct FTslPlayerMatchResultInfo> InTslPlayerMatchResultInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientSetTslPlayerMatchResultInfos");

	struct
	{
		TArray<struct FTslPlayerMatchResultInfo> InTslPlayerMatchResultInfos;
	} params;
	params.InTslPlayerMatchResultInfos = InTslPlayerMatchResultInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientSetSpectatorCamera
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_NetClient)
// Parameters:
// struct FVector                 CameraLocation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                CameraRotation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientSetSpectatorCamera");

	struct
	{
		struct FVector                 CameraLocation;
		struct FRotator                CameraRotation;
	} params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientSetCanAllSpectate
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// bool                           InbCanSpectate                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientSetCanAllSpectate(bool InbCanSpectate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientSetCanAllSpectate");

	struct
	{
		bool                           InbCanSpectate;
	} params;
	params.InbCanSpectate = InbCanSpectate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientSendRoundEndEvent
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// bool                           bIsWinner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ExpendedTimeInSeconds          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientSendRoundEndEvent");

	struct
	{
		bool                           bIsWinner;
		int                            ExpendedTimeInSeconds;
	} params;
	params.bIsWinner = bIsWinner;
	params.ExpendedTimeInSeconds = ExpendedTimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientSendPacketUnreliable
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TArray<unsigned char>          Packet                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ATslPlayerController::ClientSendPacketUnreliable(TArray<unsigned char> Packet)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientSendPacketUnreliable");

	struct
	{
		TArray<unsigned char>          Packet;
	} params;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientSendPacketReliable
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TArray<unsigned char>          Packet                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ATslPlayerController::ClientSendPacketReliable(TArray<unsigned char> Packet)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientSendPacketReliable");

	struct
	{
		TArray<unsigned char>          Packet;
	} params;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientOnCharacterRestart
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ATslPlayerController::ClientOnCharacterRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientOnCharacterRestart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientOnCharacterDeath
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// bool                           bIsTeamMatch                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bHasAliveTeamMember            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientOnCharacterDeath(bool bIsTeamMatch, bool bHasAliveTeamMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientOnCharacterDeath");

	struct
	{
		bool                           bIsTeamMatch;
		bool                           bHasAliveTeamMember;
	} params;
	params.bIsTeamMatch = bIsTeamMatch;
	params.bHasAliveTeamMember = bHasAliveTeamMember;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyStartBuff
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   BuffName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStart                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifyStartBuff(const struct FName& BuffName, bool bStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyStartBuff");

	struct
	{
		struct FName                   BuffName;
		bool                           bStart;
	} params;
	params.BuffName = BuffName;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifySpeedBoost
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// float                          Boost                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifySpeedBoost(float Boost)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifySpeedBoost");

	struct
	{
		float                          Boost;
	} params;
	params.Boost = Boost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyRestrictingPlayArea
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)

void ATslPlayerController::ClientNotifyRestrictingPlayArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyRestrictingPlayArea");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyNextGasIn
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// struct FVector_NetQuantize     PoisonGasWarningPosition       (CPF_Parm)
// float                          PoisonGasWarningRadius         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifyNextGasIn(const struct FVector_NetQuantize& PoisonGasWarningPosition, float PoisonGasWarningRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyNextGasIn");

	struct
	{
		struct FVector_NetQuantize     PoisonGasWarningPosition;
		float                          PoisonGasWarningRadius;
	} params;
	params.PoisonGasWarningPosition = PoisonGasWarningPosition;
	params.PoisonGasWarningRadius = PoisonGasWarningRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyHealAmount_Unreliable
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// float                          Heal                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifyHealAmount_Unreliable(float Heal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyHealAmount_Unreliable");

	struct
	{
		float                          Heal;
	} params;
	params.Heal = Heal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyHealAmount_Reliable
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// float                          Heal                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifyHealAmount_Reliable(float Heal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyHealAmount_Reliable");

	struct
	{
		float                          Heal;
	} params;
	params.Heal = Heal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyHealAmount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Heal                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifyHealAmount(float Heal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyHealAmount");

	struct
	{
		float                          Heal;
	} params;
	params.Heal = Heal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyHeal_Unreliable
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// float                          HealthStart                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Health                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxHealth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifyHeal_Unreliable(float HealthStart, float Health, float MaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyHeal_Unreliable");

	struct
	{
		float                          HealthStart;
		float                          Health;
		float                          MaxHealth;
	} params;
	params.HealthStart = HealthStart;
	params.Health = Health;
	params.MaxHealth = MaxHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyHeal_Reliable
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// float                          HealthStart                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Health                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxHealth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifyHeal_Reliable(float HealthStart, float Health, float MaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyHeal_Reliable");

	struct
	{
		float                          HealthStart;
		float                          Health;
		float                          MaxHealth;
	} params;
	params.HealthStart = HealthStart;
	params.Health = Health;
	params.MaxHealth = MaxHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientNotifyHeal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          HealthStart                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Health                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxHealth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientNotifyHeal(float HealthStart, float Health, float MaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientNotifyHeal");

	struct
	{
		float                          HealthStart;
		float                          Health;
		float                          MaxHealth;
	} params;
	params.HealthStart = HealthStart;
	params.Health = Health;
	params.MaxHealth = MaxHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientInteractByComponent
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// class USeperatedInteractionComponent* TargetComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslPlayerController::ClientInteractByComponent(class USeperatedInteractionComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientInteractByComponent");

	struct
	{
		class USeperatedInteractionComponent* TargetComponent;
	} params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientInteract
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// class AActor*                  TargetObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerController::ClientInteract(class AActor* TargetObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientInteract");

	struct
	{
		class AActor*                  TargetObject;
	} params;
	params.TargetObject = TargetObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientGameStarted
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ATslPlayerController::ClientGameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientGameStarted");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientEndOnlineGame
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ATslPlayerController::ClientEndOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientEndOnlineGame");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.ClientAdminCopyString
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetClient)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::ClientAdminCopyString(const struct FString& inString)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.ClientAdminCopyString");

	struct
	{
		struct FString                 inString;
	} params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.BEServer
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Private)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Arg0                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Arg1                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Arg2                           (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::BEServer(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.BEServer");

	struct
	{
		struct FString                 Command;
		struct FString                 Arg0;
		struct FString                 Arg1;
		struct FString                 Arg2;
	} params;
	params.Command = Command;
	params.Arg0 = Arg0;
	params.Arg1 = Arg1;
	params.Arg2 = Arg2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.BEClient
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Private)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::BEClient(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.BEClient");

	struct
	{
		struct FString                 Command;
	} params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerController.Admin
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ServerAdminCommand             (CPF_Parm, CPF_ZeroConstructor)

void ATslPlayerController::Admin(const struct FString& ServerAdminCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerController.Admin");

	struct
	{
		struct FString                 ServerAdminCommand;
	} params;
	params.ServerAdminCommand = ServerAdminCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.PerfBotPlayerController.ServerMoveToLocation
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APerfBotPlayerController::ServerMoveToLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.PerfBotPlayerController.ServerMoveToLocation");

	struct
	{
		struct FVector                 Location;
	} params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.PerfBotPlayerController.ClientQuit
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void APerfBotPlayerController::ClientQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.PerfBotPlayerController.ClientQuit");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CharacterBreathBuff.GetCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ACharacterBreathBuff::GetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathBuff.GetCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.CharacterBreathBuff.GetBreathComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCharacterBreathComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCharacterBreathComponent* ACharacterBreathBuff::GetBreathComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.CharacterBreathBuff.GetBreathComponent");

	struct
	{
		class UCharacterBreathComponent* ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCharacterProxy.UpdateEquippedWeapons
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslCharacterProxy::UpdateEquippedWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacterProxy.UpdateEquippedWeapons");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacterProxy.UpdateCharacterAppearance
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslCharacterProxy::UpdateCharacterAppearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacterProxy.UpdateCharacterAppearance");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacterProxy.UpdateArmedWeapons
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslCharacterProxy::UpdateArmedWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacterProxy.UpdateArmedWeapons");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacterProxy.SetAccessorySlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslAccessoryComponent*  AccessoryComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<enum class EAccessorySlot> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslCharacterProxy::SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent, TEnumAsByte<enum class EAccessorySlot> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacterProxy.SetAccessorySlot");

	struct
	{
		class UTslAccessoryComponent*  AccessoryComponent;
		TEnumAsByte<enum class EAccessorySlot> Slot;
	} params;
	params.AccessoryComponent = AccessoryComponent;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCharacterProxy.GetAccessorySlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAccessorySlot> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTslAccessoryComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslAccessoryComponent* ATslCharacterProxy::GetAccessorySlot(TEnumAsByte<enum class EAccessorySlot> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCharacterProxy.GetAccessorySlot");

	struct
	{
		TEnumAsByte<enum class EAccessorySlot> Slot;
		class UTslAccessoryComponent*  ReturnValue;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslCheatManager.ToggleVisibilityOfDestructibleComponents
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::ToggleVisibilityOfDestructibleComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.ToggleVisibilityOfDestructibleComponents");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.ToggleMatchTimer
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::ToggleMatchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.ToggleMatchTimer");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.ToggleCollisionOfDestructibleComponents
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::ToggleCollisionOfDestructibleComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.ToggleCollisionOfDestructibleComponents");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.TestVoiceAccessToken
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::TestVoiceAccessToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.TestVoiceAccessToken");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.SpawnBot
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::SpawnBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.SpawnBot");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.SetVehicleRepRotCorrection
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// float                          AngularDeltaThreshold          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AngularInterpAlpha             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AngularRecipFixTime            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslCheatManager::SetVehicleRepRotCorrection(float AngularDeltaThreshold, float AngularInterpAlpha, float AngularRecipFixTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.SetVehicleRepRotCorrection");

	struct
	{
		float                          AngularDeltaThreshold;
		float                          AngularInterpAlpha;
		float                          AngularRecipFixTime;
	} params;
	params.AngularDeltaThreshold = AngularDeltaThreshold;
	params.AngularInterpAlpha = AngularInterpAlpha;
	params.AngularRecipFixTime = AngularRecipFixTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.SetVehicleRepPosCorrection
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// float                          LinearDeltaThresholdSq         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LinearInterpAlpha              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LinearRecipFixTime             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BodySpeedThresholdSq           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslCheatManager::SetVehicleRepPosCorrection(float LinearDeltaThresholdSq, float LinearInterpAlpha, float LinearRecipFixTime, float BodySpeedThresholdSq)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.SetVehicleRepPosCorrection");

	struct
	{
		float                          LinearDeltaThresholdSq;
		float                          LinearInterpAlpha;
		float                          LinearRecipFixTime;
		float                          BodySpeedThresholdSq;
	} params;
	params.LinearDeltaThresholdSq = LinearDeltaThresholdSq;
	params.LinearInterpAlpha = LinearInterpAlpha;
	params.LinearRecipFixTime = LinearRecipFixTime;
	params.BodySpeedThresholdSq = BodySpeedThresholdSq;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.ReturnLookAt
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::ReturnLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.ReturnLookAt");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.MoveVehicleOnClient
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// float                          X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Y                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Z                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslCheatManager::MoveVehicleOnClient(float X, float Y, float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.MoveVehicleOnClient");

	struct
	{
		float                          X;
		float                          Y;
		float                          Z;
	} params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.LookAt
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// float                          Pitch                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Yaw                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Roll                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslCheatManager::LookAt(float Pitch, float Yaw, float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.LookAt");

	struct
	{
		float                          Pitch;
		float                          Yaw;
		float                          Roll;
	} params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.ForceMatchStart
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::ForceMatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.ForceMatchStart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.DumpVoiceDevices
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::DumpVoiceDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.DumpVoiceDevices");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.DumpDestructibleComponents
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::DumpDestructibleComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.DumpDestructibleComponents");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.DrawVehicleCenterOfMass
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::DrawVehicleCenterOfMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.DrawVehicleCenterOfMass");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.CopyDebugInfo
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UTslCheatManager::CopyDebugInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.CopyDebugInfo");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.Cheat
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Msg                            (CPF_Parm, CPF_ZeroConstructor)

void UTslCheatManager::Cheat(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.Cheat");

	struct
	{
		struct FString                 Msg;
	} params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslCheatManager.ChangeTeam
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// int                            NewTeamNumber                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslCheatManager::ChangeTeam(int NewTeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslCheatManager.ChangeTeam");

	struct
	{
		int                            NewTeamNumber;
	} params;
	params.NewTeamNumber = NewTeamNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslDestructibleComponent.ClientReceiveComponentDamage
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private)
// Parameters:
// float                          DamageAmount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslDestructibleComponent::ClientReceiveComponentDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslDestructibleComponent.ClientReceiveComponentDamage");

	struct
	{
		float                          DamageAmount;
		struct FDamageEvent            DamageEvent;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
	} params;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslDestructibleContainer.OnRep_Flag
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslDestructibleContainer::OnRep_Flag()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslDestructibleContainer.OnRep_Flag");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslDoor.OnRep_DoorOpened
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslDoor::OnRep_DoorOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslDoor.OnRep_DoorOpened");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslDoor.OnRep_DoorBreakingState
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslDoor::OnRep_DoorBreakingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslDoor.OnRep_DoorBreakingState");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslDoor.OnInteractBy
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslDoor::OnInteractBy(class ATslCharacter* OtherCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslDoor.OnInteractBy");

	struct
	{
		class ATslCharacter*           OtherCharacter;
	} params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslDoor.ClientTakeDamage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)
// Parameters:
// float                          Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize     HitLocation                    (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// float                          DamageRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Impulse                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslDoor::ClientTakeDamage(float Damage, const struct FVector_NetQuantize& HitLocation, float DamageRadius, float Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslDoor.ClientTakeDamage");

	struct
	{
		float                          Damage;
		struct FVector_NetQuantize     HitLocation;
		float                          DamageRadius;
		float                          Impulse;
	} params;
	params.Damage = Damage;
	params.HitLocation = HitLocation;
	params.DamageRadius = DamageRadius;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslExplosionEffect.OnParticleCollide
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslExplosionEffect::OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslExplosionEffect.OnParticleCollide");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleTime;
		struct FVector                 Location;
		struct FVector                 Velocity;
		struct FVector                 Direction;
		struct FVector                 Normal;
		struct FName                   BoneName;
	} params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslExplosionReactionInterface.OnExplode
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DamageAmout                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FHitResult>      ComponentHits                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslExplosionReactionInterface::OnExplode(float DamageAmout, const struct FVector& Origin, TArray<struct FHitResult> ComponentHits, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslExplosionReactionInterface.OnExplode");

	struct
	{
		float                          DamageAmout;
		struct FVector                 Origin;
		TArray<struct FHitResult>      ComponentHits;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
	} params;
	params.DamageAmout = DamageAmout;
	params.Origin = Origin;
	params.ComponentHits = ComponentHits;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslFence.GetSplineComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USplineComponent*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USplineComponent* ATslFence::GetSplineComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFence.GetSplineComponent");

	struct
	{
		class USplineComponent*        ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslReactionComponent.OnRep_PendingDestroy
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UTslReactionComponent::OnRep_PendingDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslReactionComponent.OnRep_PendingDestroy");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslReactionComponent.Client_ReactByVehicle
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FVector                 Impact                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ImpulseDir                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UTslReactionComponent::Client_ReactByVehicle(const struct FVector& Impact, const struct FVector& ImpulseDir, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslReactionComponent.Client_ReactByVehicle");

	struct
	{
		struct FVector                 Impact;
		struct FVector                 ImpulseDir;
		struct FVector                 Velocity;
	} params;
	params.Impact = Impact;
	params.ImpulseDir = ImpulseDir;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslReactionComponent.Client_ReactByRadialDamage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// float                          DamageAmount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Impact                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ImpulseDir                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OuterRadius                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslReactionComponent::Client_ReactByRadialDamage(float DamageAmount, const struct FVector& Origin, const struct FVector& Impact, const struct FVector& ImpulseDir, float OuterRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslReactionComponent.Client_ReactByRadialDamage");

	struct
	{
		float                          DamageAmount;
		struct FVector                 Origin;
		struct FVector                 Impact;
		struct FVector                 ImpulseDir;
		float                          OuterRadius;
	} params;
	params.DamageAmount = DamageAmount;
	params.Origin = Origin;
	params.Impact = Impact;
	params.ImpulseDir = ImpulseDir;
	params.OuterRadius = OuterRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslReactionComponent.Client_ReactByPointDamage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// float                          DamageAmount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Impact                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ImpulseDir                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslReactionComponent::Client_ReactByPointDamage(float DamageAmount, const struct FVector& Impact, const struct FVector& ImpulseDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslReactionComponent.Client_ReactByPointDamage");

	struct
	{
		float                          DamageAmount;
		struct FVector                 Impact;
		struct FVector                 ImpulseDir;
	} params;
	params.DamageAmount = DamageAmount;
	params.Impact = Impact;
	params.ImpulseDir = ImpulseDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslFloatingVehicle.IsBoosting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslFloatingVehicle::IsBoosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicle.IsBoosting");

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


// Function TslGame.TslFloatingVehicle.GetVehicleEngineImmersionDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslFloatingVehicle::GetVehicleEngineImmersionDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicle.GetVehicleEngineImmersionDepth");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslFloatingVehicle.GetVehicleAcceleration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATslFloatingVehicle::GetVehicleAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicle.GetVehicleAcceleration");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslFloatingVehicleMovement.ServerUpdateInput
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// float                          InForwardInput                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRotationInput                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInIsBoosting                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslFloatingVehicleMovement::ServerUpdateInput(float InForwardInput, float InRotationInput, bool bInIsBoosting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicleMovement.ServerUpdateInput");

	struct
	{
		float                          InForwardInput;
		float                          InRotationInput;
		bool                           bInIsBoosting;
	} params;
	params.InForwardInput = InForwardInput;
	params.InRotationInput = InRotationInput;
	params.bInIsBoosting = bInIsBoosting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslFloatingVehicleMovement.OnDriverLeave
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UTslFloatingVehicleMovement::OnDriverLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicleMovement.OnDriverLeave");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslFloatingVehicleMovement.IsBoosting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslFloatingVehicleMovement::IsBoosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicleMovement.IsBoosting");

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


// Function TslGame.TslFloatingVehicleMovement.GetRotationYawAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslFloatingVehicleMovement::GetRotationYawAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicleMovement.GetRotationYawAngle");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslFloatingVehicleMovement.GetMaxRotationYawAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslFloatingVehicleMovement::GetMaxRotationYawAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicleMovement.GetMaxRotationYawAngle");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslFloatingVehicleMovement.GetMaxAcceleration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslFloatingVehicleMovement::GetMaxAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicleMovement.GetMaxAcceleration");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslFloatingVehicleMovement.GetCalculatedAcceleration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTslFloatingVehicleMovement::GetCalculatedAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicleMovement.GetCalculatedAcceleration");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslFloatingVehicleMovement.GetAcceleration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslFloatingVehicleMovement::GetAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslFloatingVehicleMovement.GetAcceleration");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslSettings.GetTslSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslSettings*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTslSettings* UTslSettings::STATIC_GetTslSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSettings.GetTslSettings");

	struct
	{
		class UTslSettings*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameInstance.UseLobbyWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameInstance::UseLobbyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameInstance.UseLobbyWidget");

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


// Function TslGame.TslGameInstance.GetStartParameterStringValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 NotFoundValue                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTslGameInstance::GetStartParameterStringValue(const struct FString& Key, const struct FString& NotFoundValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameInstance.GetStartParameterStringValue");

	struct
	{
		struct FString                 Key;
		struct FString                 NotFoundValue;
		struct FString                 ReturnValue;
	} params;
	params.Key = Key;
	params.NotFoundValue = NotFoundValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameInstance.GetStartParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTslStartParameter      ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)

struct FTslStartParameter UTslGameInstance::GetStartParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameInstance.GetStartParameter");

	struct
	{
		struct FTslStartParameter      ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameInstance.GetCurrentGameState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UTslGameInstance::GetCurrentGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameInstance.GetCurrentGameState");

	struct
	{
		struct FName                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameMode.SendSystemMessageToAll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)
// float                          MessageDuration                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslGameMode::SendSystemMessageToAll(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.SendSystemMessageToAll");

	struct
	{
		TEnumAsByte<enum class ESystemMessageType> MessageType;
		struct FText                   Message;
		float                          MessageDuration;
	} params;
	params.MessageType = MessageType;
	params.Message = Message;
	params.MessageDuration = MessageDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameMode.NotifyRestrictingPlayAreaToAll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslGameMode::NotifyRestrictingPlayAreaToAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.NotifyRestrictingPlayAreaToAll");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameMode.NotifyNextGasInToAll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 PoisonGasWarningPosition       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PoisonGasWarningRadius         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslGameMode::NotifyNextGasInToAll(const struct FVector& PoisonGasWarningPosition, float PoisonGasWarningRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.NotifyNextGasInToAll");

	struct
	{
		struct FVector                 PoisonGasWarningPosition;
		float                          PoisonGasWarningRadius;
	} params;
	params.PoisonGasWarningPosition = PoisonGasWarningPosition;
	params.PoisonGasWarningRadius = PoisonGasWarningRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameMode.IsPreventFinishMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslGameMode::IsPreventFinishMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.IsPreventFinishMatch");

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


// Function TslGame.TslGameMode.IsPlayInEditor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslGameMode::IsPlayInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.IsPlayInEditor");

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


// Function TslGame.TslGameMode.GetVivoxManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UVivoxManager*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UVivoxManager* ATslGameMode::GetVivoxManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.GetVivoxManager");

	struct
	{
		class UVivoxManager*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameMode.GetThingSpawnProcessor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UThingSpawnProcessor*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UThingSpawnProcessor* ATslGameMode::GetThingSpawnProcessor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.GetThingSpawnProcessor");

	struct
	{
		class UThingSpawnProcessor*    ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameMode.GetLobbyLink
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ULobbyLink*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULobbyLink* ATslGameMode::GetLobbyLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.GetLobbyLink");

	struct
	{
		class ULobbyLink*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameMode.GetItemSpawnProcessor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UItemSpawnProcessor*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UItemSpawnProcessor* ATslGameMode::GetItemSpawnProcessor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.GetItemSpawnProcessor");

	struct
	{
		class UItemSpawnProcessor*     ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameMode.GetAllPawns
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class APawn*>           OutPawns                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ATslGameMode::GetAllPawns(TArray<class APawn*>* OutPawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.GetAllPawns");

	struct
	{
		TArray<class APawn*>           OutPawns;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPawns != nullptr)
		*OutPawns = params.OutPawns;
}


// Function TslGame.TslGameMode.FinishMatch
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ATslGameMode::FinishMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.FinishMatch");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameMode.FindCharacterByPlayerState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerState*            State                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ATslGameMode::FindCharacterByPlayerState(class APlayerState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.FindCharacterByPlayerState");

	struct
	{
		class APlayerState*            State;
		class ATslCharacter*           ReturnValue;
	} params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameMode.CanDealDamage
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslPlayerState*         DamageInstigator               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslPlayerState*         DamagedPlayer                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslGameMode::CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.CanDealDamage");

	struct
	{
		class ATslPlayerState*         DamageInstigator;
		class ATslPlayerState*         DamagedPlayer;
		bool                           ReturnValue;
	} params;
	params.DamageInstigator = DamageInstigator;
	params.DamagedPlayer = DamagedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameMode.BroadcastGameModeEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Parameter                      (CPF_Parm, CPF_ZeroConstructor)

void ATslGameMode::BroadcastGameModeEvent(const struct FName& EventName, const struct FString& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameMode.BroadcastGameModeEvent");

	struct
	{
		struct FName                   EventName;
		struct FString                 Parameter;
	} params;
	params.EventName = EventName;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetVoiceOutputMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsMute                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetVoiceOutputMute(bool bIsMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetVoiceOutputMute");

	struct
	{
		bool                           bIsMute;
	} params;
	params.bIsMute = bIsMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetVoiceInputMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsMute                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetVoiceInputMute(bool bIsMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetVoiceInputMute");

	struct
	{
		bool                           bIsMute;
	} params;
	params.bIsMute = bIsMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetUseTeamVoice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUse                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetUseTeamVoice(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetUseTeamVoice");

	struct
	{
		bool                           bUse;
	} params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetUsePushToTalk
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUse                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetUsePushToTalk(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetUsePushToTalk");

	struct
	{
		bool                           bUse;
	} params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetUseGlobalVoice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUse                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetUseGlobalVoice(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetUseGlobalVoice");

	struct
	{
		bool                           bUse;
	} params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetUISoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetUISoundVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetUISoundVolume");

	struct
	{
		float                          Volume;
	} params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetUISoundMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsMute                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetUISoundMute(bool bIsMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetUISoundMute");

	struct
	{
		bool                           bIsMute;
	} params;
	params.bIsMute = bIsMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetScreenScale
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetScreenScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetScreenScale");

	struct
	{
		float                          Value;
	} params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetScreenResoultion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScreenResolution       ScreenResolution               (CPF_Parm)

void UTslGameOption::STATIC_SetScreenResoultion(const struct FScreenResolution& ScreenResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetScreenResoultion");

	struct
	{
		struct FScreenResolution       ScreenResolution;
	} params;
	params.ScreenResolution = ScreenResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetQualityLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class EQualityType> Quality                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            QualityLevel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetQualityLevel(TEnumAsByte<enum class EQualityType> Quality, int QualityLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetQualityLevel");

	struct
	{
		TEnumAsByte<enum class EQualityType> Quality;
		int                            QualityLevel;
	} params;
	params.Quality = Quality;
	params.QualityLevel = QualityLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetOverallScalabilityLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetOverallScalabilityLevel(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetOverallScalabilityLevel");

	struct
	{
		int                            Value;
	} params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetMouseSensitivity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InMouseSensitiveName           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InMouseSensitivity             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetMouseSensitivity(const struct FName& InMouseSensitiveName, float InMouseSensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetMouseSensitivity");

	struct
	{
		struct FName                   InMouseSensitiveName;
		float                          InMouseSensitivity;
	} params;
	params.InMouseSensitiveName = InMouseSensitiveName;
	params.InMouseSensitivity = InMouseSensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetMotionBlur
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetMotionBlur(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetMotionBlur");

	struct
	{
		bool                           bEnabled;
	} params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetMasterSoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetMasterSoundVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetMasterSoundVolume");

	struct
	{
		float                          Volume;
	} params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetMasterSoundMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsMute                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetMasterSoundMute(bool bIsMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetMasterSoundMute");

	struct
	{
		bool                           bIsMute;
	} params;
	params.bIsMute = bIsMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetInvertMouse
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInvert                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetInvertMouse(bool bInvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetInvertMouse");

	struct
	{
		bool                           bInvert;
	} params;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetGamma
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Gamma                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetGamma(float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetGamma");

	struct
	{
		float                          Gamma;
	} params;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetFullScreen
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class EWindowMode> InFullscreenMode               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetFullScreen(TEnumAsByte<enum class EWindowMode> InFullscreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetFullScreen");

	struct
	{
		TEnumAsByte<enum class EWindowMode> InFullscreenMode;
	} params;
	params.InFullscreenMode = InFullscreenMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetEffectSoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetEffectSoundVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetEffectSoundVolume");

	struct
	{
		float                          Volume;
	} params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetEffectSoundMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsMute                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetEffectSoundMute(bool bIsMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetEffectSoundMute");

	struct
	{
		bool                           bIsMute;
	} params;
	params.bIsMute = bIsMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetCurrentCultureName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InCultureName                  (CPF_Parm, CPF_ZeroConstructor)

void UTslGameOption::STATIC_SetCurrentCultureName(const struct FString& InCultureName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetCurrentCultureName");

	struct
	{
		struct FString                 InCultureName;
	} params;
	params.InCultureName = InCultureName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetBGMSoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetBGMSoundVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetBGMSoundVolume");

	struct
	{
		float                          Volume;
	} params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetBGMSoundMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsMute                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_SetBGMSoundMute(bool bIsMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetBGMSoundMute");

	struct
	{
		bool                           bIsMute;
	} params;
	params.bIsMute = bIsMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetAxisKeys
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AxisName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FTslInputKey>    Keys                           (CPF_Parm, CPF_ZeroConstructor)

void UTslGameOption::STATIC_SetAxisKeys(const struct FName& AxisName, float Scale, bool bDefault, TArray<struct FTslInputKey> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetAxisKeys");

	struct
	{
		struct FName                   AxisName;
		float                          Scale;
		bool                           bDefault;
		TArray<struct FTslInputKey>    Keys;
	} params;
	params.AxisName = AxisName;
	params.Scale = Scale;
	params.bDefault = bDefault;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetAxisKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AxisName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bGamepad                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            Key                            (CPF_Parm)

void UTslGameOption::STATIC_SetAxisKey(const struct FName& AxisName, float Scale, bool bGamepad, bool bDefault, const struct FTslInputKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetAxisKey");

	struct
	{
		struct FName                   AxisName;
		float                          Scale;
		bool                           bGamepad;
		bool                           bDefault;
		struct FTslInputKey            Key;
	} params;
	params.AxisName = AxisName;
	params.Scale = Scale;
	params.bGamepad = bGamepad;
	params.bDefault = bDefault;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetActionKeys
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FTslInputKey>    Keys                           (CPF_Parm, CPF_ZeroConstructor)

void UTslGameOption::STATIC_SetActionKeys(const struct FName& ActionName, bool bDefault, TArray<struct FTslInputKey> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetActionKeys");

	struct
	{
		struct FName                   ActionName;
		bool                           bDefault;
		TArray<struct FTslInputKey>    Keys;
	} params;
	params.ActionName = ActionName;
	params.bDefault = bDefault;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.SetActionKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bGamepad                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            Key                            (CPF_Parm)

void UTslGameOption::STATIC_SetActionKey(const struct FName& ActionName, bool bGamepad, bool bDefault, const struct FTslInputKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.SetActionKey");

	struct
	{
		struct FName                   ActionName;
		bool                           bGamepad;
		bool                           bDefault;
		struct FTslInputKey            Key;
	} params;
	params.ActionName = ActionName;
	params.bGamepad = bGamepad;
	params.bDefault = bDefault;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.NotDuplicateCategoryNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   CatecoryName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UTslGameOption::STATIC_NotDuplicateCategoryNames(const struct FName& CatecoryName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.NotDuplicateCategoryNames");

	struct
	{
		struct FName                   CatecoryName;
		TArray<struct FName>           ReturnValue;
	} params;
	params.CatecoryName = CatecoryName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.IsVoiceOutputMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsVoiceOutputMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsVoiceOutputMute");

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


// Function TslGame.TslGameOption.IsVoiceInputMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsVoiceInputMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsVoiceInputMute");

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


// Function TslGame.TslGameOption.IsUISoundMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsUISoundMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsUISoundMute");

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


// Function TslGame.TslGameOption.IsModifierKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTslInputKey            Key                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsModifierKey(const struct FTslInputKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsModifierKey");

	struct
	{
		struct FTslInputKey            Key;
		bool                           ReturnValue;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.IsMasterSoundMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsMasterSoundMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsMasterSoundMute");

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


// Function TslGame.TslGameOption.IsKeyValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTslInputKey            Key                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsKeyValid(const struct FTslInputKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsKeyValid");

	struct
	{
		struct FTslInputKey            Key;
		bool                           ReturnValue;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.IsKeyUsed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTslInputKey            Key                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsKeyUsed(const struct FTslInputKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsKeyUsed");

	struct
	{
		struct FTslInputKey            Key;
		bool                           ReturnValue;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.IsInvertMouse
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsInvertMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsInvertMouse");

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


// Function TslGame.TslGameOption.IsGamepadKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTslInputKey            Key                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsGamepadKey(const struct FTslInputKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsGamepadKey");

	struct
	{
		struct FTslInputKey            Key;
		bool                           ReturnValue;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.IsEnabledMotionBlur
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsEnabledMotionBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsEnabledMotionBlur");

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


// Function TslGame.TslGameOption.IsEffectSoundMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsEffectSoundMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsEffectSoundMute");

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


// Function TslGame.TslGameOption.IsBGMSoundMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_IsBGMSoundMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.IsBGMSoundMute");

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


// Function TslGame.TslGameOption.GetUseTeamVoice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_GetUseTeamVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetUseTeamVoice");

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


// Function TslGame.TslGameOption.GetUsePushToTalk
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_GetUsePushToTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetUsePushToTalk");

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


// Function TslGame.TslGameOption.GetUseGlobalVoice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslGameOption::STATIC_GetUseGlobalVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetUseGlobalVoice");

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


// Function TslGame.TslGameOption.GetUISoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslGameOption::STATIC_GetUISoundVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetUISoundVolume");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetSupportedScreenResolutions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FScreenResolution> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FScreenResolution> UTslGameOption::STATIC_GetSupportedScreenResolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetSupportedScreenResolutions");

	struct
	{
		TArray<struct FScreenResolution> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetSupportedQualityLevels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FSurportQualityLevel> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FSurportQualityLevel> UTslGameOption::STATIC_GetSupportedQualityLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetSupportedQualityLevels");

	struct
	{
		TArray<struct FSurportQualityLevel> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetScreenScale
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslGameOption::STATIC_GetScreenScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetScreenScale");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetScreenResolution
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FScreenResolution       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FScreenResolution UTslGameOption::STATIC_GetScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetScreenResolution");

	struct
	{
		struct FScreenResolution       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetQualityLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class EQualityType> Quality                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTslGameOption::STATIC_GetQualityLevel(TEnumAsByte<enum class EQualityType> Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetQualityLevel");

	struct
	{
		TEnumAsByte<enum class EQualityType> Quality;
		int                            ReturnValue;
	} params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetOverallScalabilityLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTslGameOption::STATIC_GetOverallScalabilityLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetOverallScalabilityLevel");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetNativeLanguage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InCultureName                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTslGameOption::STATIC_GetNativeLanguage(const struct FString& InCultureName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetNativeLanguage");

	struct
	{
		struct FString                 InCultureName;
		struct FString                 ReturnValue;
	} params;
	params.InCultureName = InCultureName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetMouseSensitivity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   InMouseSensitiveName           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslGameOption::STATIC_GetMouseSensitivity(const struct FName& InMouseSensitiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetMouseSensitivity");

	struct
	{
		struct FName                   InMouseSensitiveName;
		float                          ReturnValue;
	} params;
	params.InMouseSensitiveName = InMouseSensitiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetMasterSoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslGameOption::STATIC_GetMasterSoundVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetMasterSoundVolume");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetKeyName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTslInputKey            Key                            (CPF_Parm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTslGameOption::STATIC_GetKeyName(const struct FTslInputKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetKeyName");

	struct
	{
		struct FTslInputKey            Key;
		struct FText                   ReturnValue;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetGamma
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslGameOption::STATIC_GetGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetGamma");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetFullScreenMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class EWindowMode> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EWindowMode> UTslGameOption::STATIC_GetFullScreenMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetFullScreenMode");

	struct
	{
		TEnumAsByte<enum class EWindowMode> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetEffectSoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslGameOption::STATIC_GetEffectSoundVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetEffectSoundVolume");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetDefaultCultureName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTslGameOption::STATIC_GetDefaultCultureName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetDefaultCultureName");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetCurrentCultureName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTslGameOption::STATIC_GetCurrentCultureName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetCurrentCultureName");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetConvertedMouseSensitivity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   InMouseSensitiveName           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslGameOption::STATIC_GetConvertedMouseSensitivity(const struct FName& InMouseSensitiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetConvertedMouseSensitivity");

	struct
	{
		struct FName                   InMouseSensitiveName;
		float                          ReturnValue;
	} params;
	params.InMouseSensitiveName = InMouseSensitiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetBGMSoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslGameOption::STATIC_GetBGMSoundVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetBGMSoundVolume");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetAxisKeys
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   AxisName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FTslInputKey>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FTslInputKey> UTslGameOption::STATIC_GetAxisKeys(const struct FName& AxisName, float Scale, bool bDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetAxisKeys");

	struct
	{
		struct FName                   AxisName;
		float                          Scale;
		bool                           bDefault;
		TArray<struct FTslInputKey>    ReturnValue;
	} params;
	params.AxisName = AxisName;
	params.Scale = Scale;
	params.bDefault = bDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetAxisKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   AxisName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bGamepad                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTslInputKey UTslGameOption::STATIC_GetAxisKey(const struct FName& AxisName, float Scale, bool bGamepad, bool bDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetAxisKey");

	struct
	{
		struct FName                   AxisName;
		float                          Scale;
		bool                           bGamepad;
		bool                           bDefault;
		struct FTslInputKey            ReturnValue;
	} params;
	params.AxisName = AxisName;
	params.Scale = Scale;
	params.bGamepad = bGamepad;
	params.bDefault = bDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetAutoQualityLevels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            WorkScale                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CPUMultiplier                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          GPUMultiplier                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FQualityLevelInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FQualityLevelInfo> UTslGameOption::STATIC_GetAutoQualityLevels(int WorkScale, float CPUMultiplier, float GPUMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetAutoQualityLevels");

	struct
	{
		int                            WorkScale;
		float                          CPUMultiplier;
		float                          GPUMultiplier;
		TArray<struct FQualityLevelInfo> ReturnValue;
	} params;
	params.WorkScale = WorkScale;
	params.CPUMultiplier = CPUMultiplier;
	params.GPUMultiplier = GPUMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetActionKeys
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FTslInputKey>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FTslInputKey> UTslGameOption::STATIC_GetActionKeys(const struct FName& ActionName, bool bDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetActionKeys");

	struct
	{
		struct FName                   ActionName;
		bool                           bDefault;
		TArray<struct FTslInputKey>    ReturnValue;
	} params;
	params.ActionName = ActionName;
	params.bDefault = bDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.GetActionKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bGamepad                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDefault                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTslInputKey UTslGameOption::STATIC_GetActionKey(const struct FName& ActionName, bool bGamepad, bool bDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.GetActionKey");

	struct
	{
		struct FName                   ActionName;
		bool                           bGamepad;
		bool                           bDefault;
		struct FTslInputKey            ReturnValue;
	} params;
	params.ActionName = ActionName;
	params.bGamepad = bGamepad;
	params.bDefault = bDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.CustomizableMouseSensitiveNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FCustomizableMouseSensitiveName> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FCustomizableMouseSensitiveName> UTslGameOption::STATIC_CustomizableMouseSensitiveNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.CustomizableMouseSensitiveNames");

	struct
	{
		TArray<struct FCustomizableMouseSensitiveName> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.CustomizableCategoryData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FTslGame_FCustomizableCategoryData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FTslGame_FCustomizableCategoryData> UTslGameOption::STATIC_CustomizableCategoryData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.CustomizableCategoryData");

	struct
	{
		TArray<struct FTslGame_FCustomizableCategoryData> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.CustomizableAxisName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FTslGame_FCustomizableAxisName> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FTslGame_FCustomizableAxisName> UTslGameOption::STATIC_CustomizableAxisName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.CustomizableAxisName");

	struct
	{
		TArray<struct FTslGame_FCustomizableAxisName> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.CustomizableActionNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FCustomizableActionName> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FCustomizableActionName> UTslGameOption::STATIC_CustomizableActionNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.CustomizableActionNames");

	struct
	{
		TArray<struct FCustomizableActionName> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.CultureNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FString> UTslGameOption::STATIC_CultureNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.CultureNames");

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGameOption.ApplyMouseSensitivity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UTslGameOption::STATIC_ApplyMouseSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.ApplyMouseSensitivity");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.ApplyGameUserSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bCheckForCommandLineOverrides  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGameOption::STATIC_ApplyGameUserSettings(bool bCheckForCommandLineOverrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.ApplyGameUserSettings");

	struct
	{
		bool                           bCheckForCommandLineOverrides;
	} params;
	params.bCheckForCommandLineOverrides = bCheckForCommandLineOverrides;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOption.ApplyAutoQualitySetting
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UTslGameOption::STATIC_ApplyAutoQualitySetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOption.ApplyAutoQualitySetting");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameState.UpdateWorldTimeSecondsDelta
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslGameState::UpdateWorldTimeSecondsDelta(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameState.UpdateWorldTimeSecondsDelta");

	struct
	{
		float                          DeltaSeconds;
	} params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameState.ShowPlayerStateList
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public, FUNC_Const)

void ATslGameState::ShowPlayerStateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameState.ShowPlayerStateList");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameState.OnStartGasRelease
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InbIsGasRelease                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslGameState::OnStartGasRelease(bool InbIsGasRelease)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameState.OnStartGasRelease");

	struct
	{
		bool                           InbIsGasRelease;
	} params;
	params.InbIsGasRelease = InbIsGasRelease;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameState.OnRep_MatchShortGuid
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslGameState::OnRep_MatchShortGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameState.OnRep_MatchShortGuid");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameState.IsMatchInProgressBP
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslGameState::IsMatchInProgressBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameState.IsMatchInProgressBP");

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


// Function TslGame.TslGameState.GetLevelAttribute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ALevelAttribute*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ALevelAttribute* ATslGameState::GetLevelAttribute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameState.GetLevelAttribute");

	struct
	{
		class ALevelAttribute*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslGlassWindowComponent.OnRep_ReplicatedOnClient
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// bool                           bLastReplicatedOnClient        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGlassWindowComponent::OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGlassWindowComponent.OnRep_ReplicatedOnClient");

	struct
	{
		bool                           bLastReplicatedOnClient;
	} params;
	params.bLastReplicatedOnClient = bLastReplicatedOnClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGlassWindowComponent.OnRep_Destroyed
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// bool                           bLastDestroyed                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGlassWindowComponent::OnRep_Destroyed(bool bLastDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGlassWindowComponent.OnRep_Destroyed");

	struct
	{
		bool                           bLastDestroyed;
	} params;
	params.bLastDestroyed = bLastDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGlassWindowComponent.ClientNotifyHit
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// bool                           bBlockingHit                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize     Location                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FVector_NetQuantizeNormal ImpactNormal                   (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void UTslGlassWindowComponent::ClientNotifyHit(bool bBlockingHit, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& ImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGlassWindowComponent.ClientNotifyHit");

	struct
	{
		bool                           bBlockingHit;
		struct FVector_NetQuantize     Location;
		struct FVector_NetQuantizeNormal ImpactNormal;
	} params;
	params.bBlockingHit = bBlockingHit;
	params.Location = Location;
	params.ImpactNormal = ImpactNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGunAnimInstance.HandleFiremodeMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAnimMontage*            FireModeMontage                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslGunAnimInstance::HandleFiremodeMontage(class UAnimMontage* FireModeMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGunAnimInstance.HandleFiremodeMontage");

	struct
	{
		class UAnimMontage*            FireModeMontage;
	} params;
	params.FireModeMontage = FireModeMontage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslHealthGaugeData.GetGaugeColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UTslHealthGaugeData::GetGaugeColor(float HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslHealthGaugeData.GetGaugeColor");

	struct
	{
		float                          HealthPercent;
		struct FLinearColor            ReturnValue;
	} params;
	params.HealthPercent = HealthPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslInstancedGlassWindowComponent.OnRep_ReplicatedOnClient
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// bool                           bLastReplicatedOnClient        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslInstancedGlassWindowComponent::OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslInstancedGlassWindowComponent.OnRep_ReplicatedOnClient");

	struct
	{
		bool                           bLastReplicatedOnClient;
	} params;
	params.bLastReplicatedOnClient = bLastReplicatedOnClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslInstancedGlassWindowComponent.OnRep_Destroyed
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UTslInstancedGlassWindowComponent::OnRep_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslInstancedGlassWindowComponent.OnRep_Destroyed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslInstancedGlassWindowComponent.ClientNotifyHit
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// bool                           bBlockingHit                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize     Location                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FVector_NetQuantizeNormal ImpactNormal                   (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// int                            InstanceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslInstancedGlassWindowComponent::ClientNotifyHit(bool bBlockingHit, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& ImpactNormal, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslInstancedGlassWindowComponent.ClientNotifyHit");

	struct
	{
		bool                           bBlockingHit;
		struct FVector_NetQuantize     Location;
		struct FVector_NetQuantizeNormal ImpactNormal;
		int                            InstanceIndex;
	} params;
	params.bBlockingHit = bBlockingHit;
	params.Location = Location;
	params.ImpactNormal = ImpactNormal;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.SetParticleParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEnableRTPC                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslParticle::SetParticleParameter(const struct FString& Name, float Value, bool bEnableRTPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.SetParticleParameter");

	struct
	{
		struct FString                 Name;
		float                          Value;
		bool                           bEnableRTPC;
	} params;
	params.Name = Name;
	params.Value = Value;
	params.bEnableRTPC = bEnableRTPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleFinish
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UParticleSystemComponent* PSystem                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslParticle::OnParticleFinish(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParticleFinish");

	struct
	{
		class UParticleSystemComponent* PSystem;
	} params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleCollide
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslParticle::OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParticleCollide");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleTime;
		struct FVector                 Location;
		struct FVector                 Velocity;
		struct FVector                 Direction;
		struct FVector                 Normal;
		struct FName                   BoneName;
		class UPhysicalMaterial*       PhysMat;
	} params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParameterUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATslParticle::OnParameterUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParameterUpdated");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.GetParticleParamter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// float                          DefaultValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslParticle::GetParticleParamter(const struct FString& Name, float DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetParticleParamter");

	struct
	{
		struct FString                 Name;
		float                          DefaultValue;
		float                          ReturnValue;
	} params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.AttachToParent
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslParticle::AttachToParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.AttachToParent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerState.OnRep_PlayerStatistics
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FTslPlayerStatistics    OldPlayerStatistics            (CPF_Parm)

void ATslPlayerState::OnRep_PlayerStatistics(const struct FTslPlayerStatistics& OldPlayerStatistics)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.OnRep_PlayerStatistics");

	struct
	{
		struct FTslPlayerStatistics    OldPlayerStatistics;
	} params;
	params.OldPlayerStatistics = OldPlayerStatistics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerState.IsQuitter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerState::IsQuitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.IsQuitter");

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


// Function TslGame.TslPlayerState.IsObserver
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPlayerState::IsObserver()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.IsObserver");

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


// Function TslGame.TslPlayerState.InformAboutKill
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// class UDamageType*             KillerDamageType               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslPlayerState*         KilledPlayerState              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerState::InformAboutKill(class UDamageType* KillerDamageType, class ATslPlayerState* KilledPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.InformAboutKill");

	struct
	{
		class UDamageType*             KillerDamageType;
		class ATslPlayerState*         KilledPlayerState;
	} params;
	params.KillerDamageType = KillerDamageType;
	params.KilledPlayerState = KilledPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPlayerState.GetTeamNum
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslPlayerState::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.GetTeamNum");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerState.GetShortPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ATslPlayerState::GetShortPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.GetShortPlayerName");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerState.GetPlayerScores
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTslPlayerScores        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTslPlayerScores ATslPlayerState::GetPlayerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.GetPlayerScores");

	struct
	{
		struct FTslPlayerScores        ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerState.GetPing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslPlayerState::GetPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.GetPing");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerState.GetKills
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslPlayerState::GetKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.GetKills");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPlayerState.BroadcastDeath
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// class ATslPlayerState*         KillerPlayerState              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             KillerDamageType               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EDamageReason> DamageReason                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   DamageCauserName               (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// int                            AlivePlayerNum                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AliveTeamNum                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslPlayerState::BroadcastDeath(class ATslPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, TEnumAsByte<enum class EDamageReason> DamageReason, const struct FText& DamageCauserName, int AlivePlayerNum, int AliveTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPlayerState.BroadcastDeath");

	struct
	{
		class ATslPlayerState*         KillerPlayerState;
		class UDamageType*             KillerDamageType;
		TEnumAsByte<enum class EDamageReason> DamageReason;
		struct FText                   DamageCauserName;
		int                            AlivePlayerNum;
		int                            AliveTeamNum;
	} params;
	params.KillerPlayerState = KillerPlayerState;
	params.KillerDamageType = KillerDamageType;
	params.DamageReason = DamageReason;
	params.DamageCauserName = DamageCauserName;
	params.AlivePlayerNum = AlivePlayerNum;
	params.AliveTeamNum = AliveTeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslPostProcessEffect.SetMaterialVectorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            Idx                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPostProcessEffect::SetMaterialVectorParameter(int Idx, const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPostProcessEffect.SetMaterialVectorParameter");

	struct
	{
		int                            Idx;
		struct FName                   ParameterName;
		struct FLinearColor            Value;
		bool                           ReturnValue;
	} params;
	params.Idx = Idx;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPostProcessEffect.SetMaterialParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Idx                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPostProcessEffect::SetMaterialParameter(int Idx, const struct FName& ParameterName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPostProcessEffect.SetMaterialParameter");

	struct
	{
		int                            Idx;
		struct FName                   ParameterName;
		float                          Value;
		bool                           ReturnValue;
	} params;
	params.Idx = Idx;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPostProcessEffect.SetMaterialBlendWeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Idx                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPostProcessEffect::SetMaterialBlendWeight(int Idx, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPostProcessEffect.SetMaterialBlendWeight");

	struct
	{
		int                            Idx;
		float                          Value;
		bool                           ReturnValue;
	} params;
	params.Idx = Idx;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPostProcessEffect.SetEffectParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ParameterName                  (CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslPostProcessEffect::SetEffectParameter(const struct FString& ParameterName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPostProcessEffect.SetEffectParameter");

	struct
	{
		struct FString                 ParameterName;
		float                          Value;
		bool                           ReturnValue;
	} params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslPostProcessEffect.GetEffectParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ParameterName                  (CPF_Parm, CPF_ZeroConstructor)
// float                          DefaultValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslPostProcessEffect::GetEffectParameter(const struct FString& ParameterName, float DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslPostProcessEffect.GetEffectParameter");

	struct
	{
		struct FString                 ParameterName;
		float                          DefaultValue;
		float                          ReturnValue;
	} params;
	params.ParameterName = ParameterName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Projectile.ServerFireProjectile
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FVector                 Origin                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (CPF_Parm)

void ATslWeapon_Projectile::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Projectile.ServerFireProjectile");

	struct
	{
		struct FVector                 Origin;
		struct FVector_NetQuantizeNormal ShootDir;
	} params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslProjectile.SetMeshRotationFromServer
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslProjectile::SetMeshRotationFromServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslProjectile.SetMeshRotationFromServer");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslProjectile.OnRep_Exploded
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslProjectile::OnRep_Exploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslProjectile.OnRep_Exploded");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslProjectile.OnRep_ClientActivate
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslProjectile::OnRep_ClientActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslProjectile.OnRep_ClientActivate");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslProjectile.OnRep_ActiveParticle
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslProjectile::OnRep_ActiveParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslProjectile.OnRep_ActiveParticle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslProjectile.OnImpact
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ImpactVelocity                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslProjectile::OnImpact(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslProjectile.OnImpact");

	struct
	{
		struct FHitResult              ImpactResult;
		struct FVector                 ImpactVelocity;
	} params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslProjectile.OnHit
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslProjectile::OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslProjectile.OnHit");

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslProjectile.ExplodeBP
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslProjectile::ExplodeBP(const struct FVector& Location, const struct FRotator& Rotation, const struct FHitResult& Impact, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslProjectile.ExplodeBP");

	struct
	{
		struct FVector                 Location;
		struct FRotator                Rotation;
		struct FHitResult              Impact;
		float                          Radius;
	} params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Impact = Impact;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslProjectile.CheckVelocityForStart
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslProjectile::CheckVelocityForStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslProjectile.CheckVelocityForStart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSceneCaptureComponent2D.CaptureScene
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTslSceneCaptureComponent2D::CaptureScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSceneCaptureComponent2D.CaptureScene");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSceneCaptureWorld.InitWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameInstance*           GameInstance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 SceneCapturePackageName        (CPF_Parm, CPF_ZeroConstructor)

void UTslSceneCaptureWorld::InitWorld(class UGameInstance* GameInstance, const struct FString& SceneCapturePackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSceneCaptureWorld.InitWorld");

	struct
	{
		class UGameInstance*           GameInstance;
		struct FString                 SceneCapturePackageName;
	} params;
	params.GameInstance = GameInstance;
	params.SceneCapturePackageName = SceneCapturePackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSceneCaptureWorld.DestroyWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTslSceneCaptureWorld::DestroyWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSceneCaptureWorld.DestroyWorld");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslServerParticle.StopParticleMulticast
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)

void ATslServerParticle::StopParticleMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslServerParticle.StopParticleMulticast");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslServerParticle.OnParticleFinish
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UParticleSystemComponent* PSystem                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ATslServerParticle::OnParticleFinish(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslServerParticle.OnParticleFinish");

	struct
	{
		class UParticleSystemComponent* PSystem;
	} params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.SetShowPlayerInfoDistance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslSpectatorPawn::SetShowPlayerInfoDistance(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.SetShowPlayerInfoDistance");

	struct
	{
		float                          Distance;
	} params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.OnViewTargetUpdate
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AActor*                  NewViewTarget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslSpectatorPawn::OnViewTargetUpdate(class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.OnViewTargetUpdate");

	struct
	{
		class AActor*                  NewViewTarget;
	} params;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.OnToggleShowObseverTagWeapon
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslSpectatorPawn::OnToggleShowObseverTagWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.OnToggleShowObseverTagWeapon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.OnToggleObseverTagWidget
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslSpectatorPawn::OnToggleObseverTagWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.OnToggleObseverTagWidget");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.OnStopSlowMove
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslSpectatorPawn::OnStopSlowMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.OnStopSlowMove");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.OnStopFastMove
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslSpectatorPawn::OnStopFastMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.OnStopFastMove");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.OnStartSlowMove
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslSpectatorPawn::OnStartSlowMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.OnStartSlowMove");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.OnStartFastMove
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslSpectatorPawn::OnStartFastMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.OnStartFastMove");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslSpectatorPawn.IsObserverTagWeaponShow
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslSpectatorPawn::IsObserverTagWeaponShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.IsObserverTagWeaponShow");

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


// Function TslGame.TslSpectatorPawn.GetSpectatableCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ATslSpectatorPawn::GetSpectatableCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.GetSpectatableCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslSpectatorPawn.GetShowPlayerInfoDistance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslSpectatorPawn::GetShowPlayerInfoDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.GetShowPlayerInfoDistance");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslSpectatorPawn.GetObserverTagShow
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslSpectatorPawn::GetObserverTagShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.GetObserverTagShow");

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


// Function TslGame.TslSpectatorPawn.GetLastSpectatedCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* ATslSpectatorPawn::GetLastSpectatedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.GetLastSpectatedCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslSpectatorPawn.GetCameraMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EObserverCameraMode> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EObserverCameraMode> ATslSpectatorPawn::GetCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslSpectatorPawn.GetCameraMode");

	struct
	{
		TEnumAsByte<enum class EObserverCameraMode> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.UseHighPrecisionMouseMovement
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslStatics::STATIC_UseHighPrecisionMouseMovement(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.UseHighPrecisionMouseMovement");

	struct
	{
		class APlayerController*       PlayerController;
	} params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslStatics.SetWorldOriginByDistance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          XYDistanceToShift              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslStatics::STATIC_SetWorldOriginByDistance(class APlayerController* Controller, float XYDistanceToShift)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.SetWorldOriginByDistance");

	struct
	{
		class APlayerController*       Controller;
		float                          XYDistanceToShift;
	} params;
	params.Controller = Controller;
	params.XYDistanceToShift = XYDistanceToShift;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslStatics.SetWorldOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslStatics::STATIC_SetWorldOrigin(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.SetWorldOrigin");

	struct
	{
		class APlayerController*       Controller;
	} params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslStatics.SetAnimationAkSwitch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 SwitchGroup                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 SwitchState                    (CPF_Parm, CPF_ZeroConstructor)

void UTslStatics::STATIC_SetAnimationAkSwitch(class ACharacter* Character, const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.SetAnimationAkSwitch");

	struct
	{
		class ACharacter*              Character;
		struct FString                 SwitchGroup;
		struct FString                 SwitchState;
	} params;
	params.Character = Character;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslStatics.SetAnimationAkRTPC
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 RTPCName                       (CPF_Parm, CPF_ZeroConstructor)
// float                          RTPCValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslStatics::STATIC_SetAnimationAkRTPC(class ACharacter* Character, const struct FString& RTPCName, float RTPCValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.SetAnimationAkRTPC");

	struct
	{
		class ACharacter*              Character;
		struct FString                 RTPCName;
		float                          RTPCValue;
	} params;
	params.Character = Character;
	params.RTPCName = RTPCName;
	params.RTPCValue = RTPCValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslStatics.ServerPositionToLocal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Server                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTslStatics::STATIC_ServerPositionToLocal(class UObject* WorldContextObject, const struct FVector& Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.ServerPositionToLocal");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Server;
		struct FVector                 ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;
	params.Server = Server;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.SafeDivide_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DivideByZeroValue              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTslStatics::STATIC_SafeDivide_IntInt(int A, int B, int DivideByZeroValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.SafeDivide_IntInt");

	struct
	{
		int                            A;
		int                            B;
		int                            DivideByZeroValue;
		int                            ReturnValue;
	} params;
	params.A = A;
	params.B = B;
	params.DivideByZeroValue = DivideByZeroValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.SafeDivide_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DivideByZeroValue              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslStatics::STATIC_SafeDivide_FloatFloat(float A, float B, float DivideByZeroValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.SafeDivide_FloatFloat");

	struct
	{
		float                          A;
		float                          B;
		float                          DivideByZeroValue;
		float                          ReturnValue;
	} params;
	params.A = A;
	params.B = B;
	params.DivideByZeroValue = DivideByZeroValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.ReleaseMouseCaptureFromPlayerController
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslStatics::STATIC_ReleaseMouseCaptureFromPlayerController(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.ReleaseMouseCaptureFromPlayerController");

	struct
	{
		class APlayerController*       PlayerController;
	} params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslStatics.ProjectPointToFloor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bOutHit                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Length                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTslStatics::STATIC_ProjectPointToFloor(class UObject* WorldContextObject, const struct FVector& Origin, float Length, bool* bOutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.ProjectPointToFloor");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Origin;
		bool                           bOutHit;
		float                          Length;
		struct FVector                 ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutHit != nullptr)
		*bOutHit = params.bOutHit;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.PhysicalSurfaceToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class EPhysicalSurface> Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTslStatics::STATIC_PhysicalSurfaceToString(TEnumAsByte<enum class EPhysicalSurface> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.PhysicalSurfaceToString");

	struct
	{
		TEnumAsByte<enum class EPhysicalSurface> Type;
		struct FString                 ReturnValue;
	} params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.PhysicalSurfaceToName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class EPhysicalSurface> Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UTslStatics::STATIC_PhysicalSurfaceToName(TEnumAsByte<enum class EPhysicalSurface> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.PhysicalSurfaceToName");

	struct
	{
		TEnumAsByte<enum class EPhysicalSurface> Type;
		struct FName                   ReturnValue;
	} params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.LocalPositionToServer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Local                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTslStatics::STATIC_LocalPositionToServer(class UObject* WorldContextObject, const struct FVector& Local)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.LocalPositionToServer");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Local;
		struct FVector                 ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;
	params.Local = Local;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.LineSphereIntersection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Intersection1                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Intersection2                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Center                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Origion                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslStatics::STATIC_LineSphereIntersection(const struct FVector& Center, const struct FVector& Origion, const struct FVector& Direction, float Radius, struct FVector* Intersection1, struct FVector* Intersection2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.LineSphereIntersection");

	struct
	{
		struct FVector                 Intersection1;
		struct FVector                 Intersection2;
		struct FVector                 Center;
		struct FVector                 Origion;
		struct FVector                 Direction;
		float                          Radius;
		bool                           ReturnValue;
	} params;
	params.Center = Center;
	params.Origion = Origion;
	params.Direction = Direction;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intersection1 != nullptr)
		*Intersection1 = params.Intersection1;
	if (Intersection2 != nullptr)
		*Intersection2 = params.Intersection2;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.IsShipping
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslStatics::STATIC_IsShipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.IsShipping");

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


// Function TslGame.TslStatics.IsServerActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslStatics::STATIC_IsServerActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.IsServerActor");

	struct
	{
		class AActor*                  Actor;
		bool                           ReturnValue;
	} params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.IsMapFullyLoaded
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslStatics::STATIC_IsMapFullyLoaded(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.IsMapFullyLoaded");

	struct
	{
		class UWorld*                  World;
		bool                           ReturnValue;
	} params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.IsClientActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslStatics::STATIC_IsClientActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.IsClientActor");

	struct
	{
		class AActor*                  Actor;
		bool                           ReturnValue;
	} params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetWaterSurfaceHeight
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class APhysicsVolume*          PhysicsVolume                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 CurLocation                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslStatics::STATIC_GetWaterSurfaceHeight(class APhysicsVolume* PhysicsVolume, const struct FVector& CurLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetWaterSurfaceHeight");

	struct
	{
		class APhysicsVolume*          PhysicsVolume;
		struct FVector                 CurLocation;
		float                          ReturnValue;
	} params;
	params.PhysicsVolume = PhysicsVolume;
	params.CurLocation = CurLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetVehicleSeatComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTslVehicleSeatComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslVehicleSeatComponent* UTslStatics::STATIC_GetVehicleSeatComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetVehicleSeatComponent");

	struct
	{
		class AActor*                  Actor;
		class UTslVehicleSeatComponent* ReturnValue;
	} params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetVehicleCommonComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTslVehicleCommonComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslVehicleCommonComponent* UTslStatics::STATIC_GetVehicleCommonComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetVehicleCommonComponent");

	struct
	{
		class AActor*                  Actor;
		class UTslVehicleCommonComponent* ReturnValue;
	} params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetTslPlayerController
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslPlayerController*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslPlayerController* UTslStatics::STATIC_GetTslPlayerController(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetTslPlayerController");

	struct
	{
		class APawn*                   Pawn;
		class ATslPlayerController*    ReturnValue;
	} params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetTslGameState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslGameState*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslGameState* UTslStatics::STATIC_GetTslGameState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetTslGameState");

	struct
	{
		class UObject*                 WorldContextObject;
		class ATslGameState*           ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetTslCharacter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* UTslStatics::STATIC_GetTslCharacter(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetTslCharacter");

	struct
	{
		class UObject*                 WorldContextObject;
		class ATslCharacter*           ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetSimplePhysicalMaterial
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UPhysicalMaterial*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPhysicalMaterial* UTslStatics::STATIC_GetSimplePhysicalMaterial(class UPrimitiveComponent* PrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetSimplePhysicalMaterial");

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		class UPhysicalMaterial*       ReturnValue;
	} params;
	params.PrimitiveComponent = PrimitiveComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetServerLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 ActorOrComponent               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTslStatics::STATIC_GetServerLocation(class UObject* ActorOrComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetServerLocation");

	struct
	{
		class UObject*                 ActorOrComponent;
		struct FVector                 ReturnValue;
	} params;
	params.ActorOrComponent = ActorOrComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetNextPlayzoneRadius
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslStatics::STATIC_GetNextPlayzoneRadius(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetNextPlayzoneRadius");

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetNextPlayzonePosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTslStatics::STATIC_GetNextPlayzonePosition(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetNextPlayzonePosition");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetGameVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTslStatics::STATIC_GetGameVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetGameVersion");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetBluezoneRadius
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslStatics::STATIC_GetBluezoneRadius(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetBluezoneRadius");

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.GetBluezonePosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTslStatics::STATIC_GetBluezonePosition(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.GetBluezonePosition");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.ApplyRadialDamageWithFalloff
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BaseDamage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MinimumDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          DamageInnerRadius              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageOuterRadius              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageFalloff                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  DamageTypeClass                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FAttackId               AttackId                       (CPF_Parm)
// bool                           bIsTargetDestructible          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             InstigatedByController         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class ECollisionChannel> DamagePreventionChannel        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bExplode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslStatics::STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<enum class ECollisionChannel> DamagePreventionChannel, bool bExplode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.ApplyRadialDamageWithFalloff");

	struct
	{
		class UObject*                 WorldContextObject;
		float                          BaseDamage;
		float                          MinimumDamage;
		struct FVector                 Origin;
		float                          DamageInnerRadius;
		float                          DamageOuterRadius;
		float                          DamageFalloff;
		class UClass*                  DamageTypeClass;
		TArray<class AActor*>          IgnoreActors;
		struct FAttackId               AttackId;
		bool                           bIsTargetDestructible;
		class AActor*                  DamageCauser;
		class AController*             InstigatedByController;
		TEnumAsByte<enum class ECollisionChannel> DamagePreventionChannel;
		bool                           bExplode;
		bool                           ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;
	params.BaseDamage = BaseDamage;
	params.MinimumDamage = MinimumDamage;
	params.Origin = Origin;
	params.DamageInnerRadius = DamageInnerRadius;
	params.DamageOuterRadius = DamageOuterRadius;
	params.DamageFalloff = DamageFalloff;
	params.DamageTypeClass = DamageTypeClass;
	params.IgnoreActors = IgnoreActors;
	params.AttackId = AttackId;
	params.bIsTargetDestructible = bIsTargetDestructible;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;
	params.DamagePreventionChannel = DamagePreventionChannel;
	params.bExplode = bExplode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.ApplyRadialDamage
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BaseDamage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          DamageRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  DamageTypeClass                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FAttackId               AttackId                       (CPF_Parm)
// bool                           bIsTargetDestructible          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             InstigatedByController         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDoFullDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class ECollisionChannel> DamagePreventionChannel        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bExplode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslStatics::STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<enum class ECollisionChannel> DamagePreventionChannel, bool bExplode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.ApplyRadialDamage");

	struct
	{
		class UObject*                 WorldContextObject;
		float                          BaseDamage;
		struct FVector                 Origin;
		float                          DamageRadius;
		class UClass*                  DamageTypeClass;
		TArray<class AActor*>          IgnoreActors;
		struct FAttackId               AttackId;
		bool                           bIsTargetDestructible;
		class AActor*                  DamageCauser;
		class AController*             InstigatedByController;
		bool                           bDoFullDamage;
		TEnumAsByte<enum class ECollisionChannel> DamagePreventionChannel;
		bool                           bExplode;
		bool                           ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;
	params.BaseDamage = BaseDamage;
	params.Origin = Origin;
	params.DamageRadius = DamageRadius;
	params.DamageTypeClass = DamageTypeClass;
	params.IgnoreActors = IgnoreActors;
	params.AttackId = AttackId;
	params.bIsTargetDestructible = bIsTargetDestructible;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;
	params.bDoFullDamage = bDoFullDamage;
	params.DamagePreventionChannel = DamagePreventionChannel;
	params.bExplode = bExplode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslStatics.ApplyDamage
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BaseDamage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             EventInstigator                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  DamageTypeClass                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAttackId               AttackId                       (CPF_Parm)

void UTslStatics::STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, const struct FAttackId& AttackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStatics.ApplyDamage");

	struct
	{
		class AActor*                  DamagedActor;
		float                          BaseDamage;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
		class UClass*                  DamageTypeClass;
		struct FAttackId               AttackId;
	} params;
	params.DamagedActor = DamagedActor;
	params.BaseDamage = BaseDamage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;
	params.AttackId = AttackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslStreamer.OnOriginShiftedInternal
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UWorld*                  InWorld                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FIntVector              From                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FIntVector              To                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslStreamer::OnOriginShiftedInternal(class UWorld* InWorld, const struct FIntVector& From, const struct FIntVector& To)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStreamer.OnOriginShiftedInternal");

	struct
	{
		class UWorld*                  InWorld;
		struct FIntVector              From;
		struct FIntVector              To;
	} params;
	params.InWorld = InWorld;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslStreamer.OnLevelChangedInternal
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UTslStreamer::OnLevelChangedInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslStreamer.OnLevelChangedInternal");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslUserWidget.StopListeningForAllInputAxises
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTslUserWidget::StopListeningForAllInputAxises()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslUserWidget.StopListeningForAllInputAxises");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslUserWidget.ListenForInputAxis
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AxisName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bConsume                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_ZeroConstructor)

void UTslUserWidget::ListenForInputAxis(const struct FName& AxisName, float Scale, bool bConsume, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslUserWidget.ListenForInputAxis");

	struct
	{
		struct FName                   AxisName;
		float                          Scale;
		bool                           bConsume;
		struct FScriptDelegate         Callback;
	} params;
	params.AxisName = AxisName;
	params.Scale = Scale;
	params.bConsume = bConsume;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslUserWidget.GetCachedViewTargetTslCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* UTslUserWidget::GetCachedViewTargetTslCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslUserWidget.GetCachedViewTargetTslCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslUserWidget.GetCachedGameState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslGameState*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslGameState* UTslUserWidget::GetCachedGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslUserWidget.GetCachedGameState");

	struct
	{
		class ATslGameState*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslUserWidget.GetCachedCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* UTslUserWidget::GetCachedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslUserWidget.GetCachedCharacter");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.UpdateZoomAndWidgetSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          Zoom                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               WidgetSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::UpdateZoomAndWidgetSize(float Zoom, const struct FVector2D& WidgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.UpdateZoomAndWidgetSize");

	struct
	{
		float                          Zoom;
		struct FVector2D               WidgetSize;
	} params;
	params.Zoom = Zoom;
	params.WidgetSize = WidgetSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.UpdateWidgetSize_UC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               WidgetSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::UpdateWidgetSize_UC(const struct FVector2D& WidgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.UpdateWidgetSize_UC");

	struct
	{
		struct FVector2D               WidgetSize;
	} params;
	params.WidgetSize = WidgetSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.UpdateRectangleViewByWidgetSize
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               WidgetSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::UpdateRectangleViewByWidgetSize(const struct FVector2D& WidgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.UpdateRectangleViewByWidgetSize");

	struct
	{
		struct FVector2D               WidgetSize;
	} params;
	params.WidgetSize = WidgetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.UpdateRectangleView
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMapGridWidget::UpdateRectangleView()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.UpdateRectangleView");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.UCtoMC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               UC                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UMapGridWidget::UCtoMC(const struct FVector2D& UC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.UCtoMC");

	struct
	{
		struct FVector2D               UC;
		struct FVector2D               ReturnValue;
	} params;
	params.UC = UC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.SetZoomLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewZoomLevel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::SetZoomLevel(float NewZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.SetZoomLevel");

	struct
	{
		float                          NewZoomLevel;
	} params;
	params.NewZoomLevel = NewZoomLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.SetImageBrush
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* NewMatInst                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::SetImageBrush(class UMaterialInstanceDynamic* NewMatInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.SetImageBrush");

	struct
	{
		class UMaterialInstanceDynamic* NewMatInst;
	} params;
	params.NewMatInst = NewMatInst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.SetCharacterIconPositionAndRotation_UC
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Pos_UC                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::SetCharacterIconPositionAndRotation_UC(const struct FVector2D& Pos_UC, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.SetCharacterIconPositionAndRotation_UC");

	struct
	{
		struct FVector2D               Pos_UC;
		float                          Angle;
	} params;
	params.Pos_UC = Pos_UC;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.SetCenter_MC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Center                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UMapGridWidget::SetCenter_MC(const struct FVector2D& Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.SetCenter_MC");

	struct
	{
		struct FVector2D               Center;
	} params;
	params.Center = Center;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.MCtoUC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               MapCoord                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UMapGridWidget::MCtoUC(const struct FVector2D& MapCoord)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.MCtoUC");

	struct
	{
		struct FVector2D               MapCoord;
		struct FVector2D               ReturnValue;
	} params;
	params.MapCoord = MapCoord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.GetZoomLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMapGridWidget::GetZoomLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.GetZoomLevel");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.GetWidgetSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UMapGridWidget::GetWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.GetWidgetSize");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.GetWidgetPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UMapGridWidget::GetWidgetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.GetWidgetPosition");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.GetScreenOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UMapGridWidget::GetScreenOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.GetScreenOffset");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.GetMapImageWigetSizeAndImageOffset
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               WidgetSize                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ImageOffset                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::GetMapImageWigetSizeAndImageOffset(struct FVector2D* WidgetSize, struct FVector2D* ImageOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.GetMapImageWigetSizeAndImageOffset");

	struct
	{
		struct FVector2D               WidgetSize;
		struct FVector2D               ImageOffset;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetSize != nullptr)
		*WidgetSize = params.WidgetSize;
	if (ImageOffset != nullptr)
		*ImageOffset = params.ImageOffset;
}


// Function TslGame.MapGridWidget.DrawRedZone_UC
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector2D               Center_UC                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Radius_UC                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::DrawRedZone_UC(const struct FVector2D& Center_UC, float Radius_UC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.DrawRedZone_UC");

	struct
	{
		struct FVector2D               Center_UC;
		float                          Radius_UC;
	} params;
	params.Center_UC = Center_UC;
	params.Radius_UC = Radius_UC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.DrawMarker_UC
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector2D               MarkerCenter_UC                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UMapGridWidget::DrawMarker_UC(const struct FVector2D& MarkerCenter_UC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.DrawMarker_UC");

	struct
	{
		struct FVector2D               MarkerCenter_UC;
	} params;
	params.MarkerCenter_UC = MarkerCenter_UC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapGridWidget.CursorUCtoCenterMC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               UC                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               Offest_MC                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUpdate                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget::CursorUCtoCenterMC(const struct FVector2D& UC, struct FVector2D* Offest_MC, bool* bUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.CursorUCtoCenterMC");

	struct
	{
		struct FVector2D               UC;
		struct FVector2D               Offest_MC;
		bool                           bUpdate;
	} params;
	params.UC = UC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offest_MC != nullptr)
		*Offest_MC = params.Offest_MC;
	if (bUpdate != nullptr)
		*bUpdate = params.bUpdate;
}


// Function TslGame.MapGridWidget.ClampPositionByWidgetSize_UC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               Positon                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               WidgetSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UMapGridWidget::ClampPositionByWidgetSize_UC(const struct FVector2D& Positon, const struct FVector2D& WidgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.ClampPositionByWidgetSize_UC");

	struct
	{
		struct FVector2D               Positon;
		struct FVector2D               WidgetSize;
		struct FVector2D               ReturnValue;
	} params;
	params.Positon = Positon;
	params.WidgetSize = WidgetSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.ClampPosition_UC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               Positon                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UMapGridWidget::ClampPosition_UC(const struct FVector2D& Positon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.ClampPosition_UC");

	struct
	{
		struct FVector2D               Positon;
		struct FVector2D               ReturnValue;
	} params;
	params.Positon = Positon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.MapGridWidget.AddCenter_UC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Offset_UC                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UMapGridWidget::AddCenter_UC(const struct FVector2D& Offset_UC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.MapGridWidget.AddCenter_UC");

	struct
	{
		struct FVector2D               Offset_UC;
	} params;
	params.Offset_UC = Offset_UC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleCommonComponent.SetVehicleFuelPercent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Percent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleCommonComponent::SetVehicleFuelPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.SetVehicleFuelPercent");

	struct
	{
		float                          Percent;
	} params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleCommonComponent.Repair
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTslVehicleCommonComponent::Repair()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.Repair");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleCommonComponent.OnRep_Health
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          LastHealth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleCommonComponent::OnRep_Health(float LastHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.OnRep_Health");

	struct
	{
		float                          LastHealth;
	} params;
	params.LastHealth = LastHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleCommonComponent.OnRep_Fuel
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          LastFuel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleCommonComponent::OnRep_Fuel(float LastFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.OnRep_Fuel");

	struct
	{
		float                          LastFuel;
	} params;
	params.LastFuel = LastFuel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleCommonComponent.OnRep_Dying
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UTslVehicleCommonComponent::OnRep_Dying()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.OnRep_Dying");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleCommonComponent.OnRep_Broken
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UTslVehicleCommonComponent::OnRep_Broken()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.OnRep_Broken");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleCommonComponent.IsDying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslVehicleCommonComponent::IsDying()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.IsDying");

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


// Function TslGame.TslVehicleCommonComponent.IsBroken
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslVehicleCommonComponent::IsBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.IsBroken");

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


// Function TslGame.TslVehicleCommonComponent.GetVehicleHealthPercent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslVehicleCommonComponent::GetVehicleHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.GetVehicleHealthPercent");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleCommonComponent.GetVehicleHealth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslVehicleCommonComponent::GetVehicleHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.GetVehicleHealth");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleCommonComponent.GetVehicleFuelPercent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslVehicleCommonComponent::GetVehicleFuelPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.GetVehicleFuelPercent");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleCommonComponent.GetVehicleFuel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslVehicleCommonComponent::GetVehicleFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.GetVehicleFuel");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleCommonComponent.GetVehicleBaseHealth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslVehicleCommonComponent::GetVehicleBaseHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.GetVehicleBaseHealth");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleCommonComponent.GetVehicleBaseFuel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslVehicleCommonComponent::GetVehicleBaseFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.GetVehicleBaseFuel");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleCommonComponent.CanIgnoreCharacterDamage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EDamageTypeCategory> DamageTypeCategory             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslVehicleCommonComponent::CanIgnoreCharacterDamage(TEnumAsByte<enum class EDamageTypeCategory> DamageTypeCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.CanIgnoreCharacterDamage");

	struct
	{
		TEnumAsByte<enum class EDamageTypeCategory> DamageTypeCategory;
		bool                           ReturnValue;
	} params;
	params.DamageTypeCategory = DamageTypeCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleCommonComponent.Break
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTslVehicleCommonComponent::Break()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.Break");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleCommonComponent.AddVehicleFuel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleCommonComponent::AddVehicleFuel(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleCommonComponent.AddVehicleFuel");

	struct
	{
		float                          Delta;
	} params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleEffectComponent.SetEngineSoundRTPC
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleEffectComponent::SetEngineSoundRTPC(const struct FString& RTPC, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleEffectComponent.SetEngineSoundRTPC");

	struct
	{
		struct FString                 RTPC;
		float                          Value;
	} params;
	params.RTPC = RTPC;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleEffectComponent.OnHit
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UTslVehicleEffectComponent::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleEffectComponent.OnHit");

	struct
	{
		class AActor*                  SelfActor;
		class AActor*                  OtherActor;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleEffectComponent.OnHealthChange
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LastHealth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HealthMax                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsDying                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleEffectComponent::OnHealthChange(float CurrentHealth, float LastHealth, float HealthMax, bool bIsDying)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleEffectComponent.OnHealthChange");

	struct
	{
		float                          CurrentHealth;
		float                          LastHealth;
		float                          HealthMax;
		bool                           bIsDying;
	} params;
	params.CurrentHealth = CurrentHealth;
	params.LastHealth = LastHealth;
	params.HealthMax = HealthMax;
	params.bIsDying = bIsDying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleEffectComponent.OnDeath
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float                          KillingDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATslPlayerState*         PlayerInstigator               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleEffectComponent::OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleEffectComponent.OnDeath");

	struct
	{
		float                          KillingDamage;
		struct FDamageEvent            DamageEvent;
		class ATslPlayerState*         PlayerInstigator;
		class AActor*                  DamageCauser;
	} params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.PlayerInstigator = PlayerInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleEffectComponent.GetEngineSoundComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAkComponent*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAkComponent* UTslVehicleEffectComponent::GetEngineSoundComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleEffectComponent.GetEngineSoundComponent");

	struct
	{
		class UAkComponent*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleHitComponent.OnSyncHit
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UTslVehicleHitComponent::OnSyncHit(const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleHitComponent.OnSyncHit");

	struct
	{
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleHitComponent.OnHit
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UTslVehicleHitComponent::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleHitComponent.OnHit");

	struct
	{
		class AActor*                  SelfActor;
		class AActor*                  OtherActor;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleHitComponent.OnDeath
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// float                          KillingDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATslPlayerState*         PlayerInstigator               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleHitComponent::OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleHitComponent.OnDeath");

	struct
	{
		float                          KillingDamage;
		struct FDamageEvent            DamageEvent;
		class ATslPlayerState*         PlayerInstigator;
		class AActor*                  DamageCauser;
	} params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.PlayerInstigator = PlayerInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleReactionInterface.OnImpactedByVehicle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UTslVehicleReactionInterface::OnImpactedByVehicle(const struct FHitResult& Hit, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleReactionInterface.OnImpactedByVehicle");

	struct
	{
		struct FHitResult              Hit;
		struct FVector                 Velocity;
	} params;
	params.Hit = Hit;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.TryToRide
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AVehicleSeatActor*       Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleSeatComponent::TryToRide(class ATslCharacter* Rider, class AVehicleSeatActor* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.TryToRide");

	struct
	{
		class ATslCharacter*           Rider;
		class AVehicleSeatActor*       Seat;
	} params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.TryToLeave
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleSeatComponent::TryToLeave(class ATslCharacter* Rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.TryToLeave");

	struct
	{
		class ATslCharacter*           Rider;
	} params;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.Ride
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AVehicleSeatActor*       Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleSeatComponent::Ride(class ATslCharacter* Rider, class AVehicleSeatActor* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.Ride");

	struct
	{
		class ATslCharacter*           Rider;
		class AVehicleSeatActor*       Seat;
	} params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.PostDriverRide
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)

void UTslVehicleSeatComponent::PostDriverRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.PostDriverRide");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.PostDriverLeave
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)

void UTslVehicleSeatComponent::PostDriverLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.PostDriverLeave");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.OnFuelChange
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          CurrentFuel                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LastFuel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FuelMax                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleSeatComponent::OnFuelChange(float CurrentFuel, float LastFuel, float FuelMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.OnFuelChange");

	struct
	{
		float                          CurrentFuel;
		float                          LastFuel;
		float                          FuelMax;
	} params;
	params.CurrentFuel = CurrentFuel;
	params.LastFuel = LastFuel;
	params.FuelMax = FuelMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.Leave
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AVehicleSeatActor*       Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleSeatComponent::Leave(class ATslCharacter* Rider, class AVehicleSeatActor* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.Leave");

	struct
	{
		class ATslCharacter*           Rider;
		class AVehicleSeatActor*       Seat;
	} params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.KillAllRiders
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// float                          KillingDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATslPlayerState*         PlayerInstigator               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleSeatComponent::KillAllRiders(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.KillAllRiders");

	struct
	{
		float                          KillingDamage;
		struct FDamageEvent            DamageEvent;
		class ATslPlayerState*         PlayerInstigator;
		class AActor*                  DamageCauser;
	} params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.PlayerInstigator = PlayerInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSeatComponent.GetVehicleSeatIndex
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AVehicleSeatActor*       Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTslVehicleSeatComponent::GetVehicleSeatIndex(class AVehicleSeatActor* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.GetVehicleSeatIndex");

	struct
	{
		class AVehicleSeatActor*       Seat;
		int                            ReturnValue;
	} params;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleSeatComponent.GetSeats
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class AVehicleSeatActor*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class AVehicleSeatActor*> UTslVehicleSeatComponent::GetSeats()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.GetSeats");

	struct
	{
		TArray<class AVehicleSeatActor*> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleSeatComponent.GetSeat
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            SeatIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AVehicleSeatActor*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AVehicleSeatActor* UTslVehicleSeatComponent::GetSeat(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.GetSeat");

	struct
	{
		int                            SeatIndex;
		class AVehicleSeatActor*       ReturnValue;
	} params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleSeatComponent.GetRiders
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class ATslCharacter*>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class ATslCharacter*> UTslVehicleSeatComponent::GetRiders()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.GetRiders");

	struct
	{
		TArray<class ATslCharacter*>   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleSeatComponent.GetLastDriver
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          LastDuration                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* UTslVehicleSeatComponent::GetLastDriver(float LastDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.GetLastDriver");

	struct
	{
		float                          LastDuration;
		class ATslCharacter*           ReturnValue;
	} params;
	params.LastDuration = LastDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleSeatComponent.GetDriver
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* UTslVehicleSeatComponent::GetDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSeatComponent.GetDriver");

	struct
	{
		class ATslCharacter*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslVehicleSyncComponent.SendServerMoveToClient
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetClient)
// Parameters:
// int                            InCorrectionId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize100  ServerLocation                 (CPF_Parm)
// struct FVector_NetQuantize100  ServerLinearVelocity           (CPF_Parm)
// struct FVector_NetQuantizeNormal ServerRotator                  (CPF_Parm)
// struct FVector_NetQuantize100  ServerAngularVelocity          (CPF_Parm)
// bool                           bIsSnap                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslVehicleSyncComponent::SendServerMoveToClient(int InCorrectionId, const struct FVector_NetQuantize100& ServerLocation, const struct FVector_NetQuantize100& ServerLinearVelocity, const struct FVector_NetQuantizeNormal& ServerRotator, const struct FVector_NetQuantize100& ServerAngularVelocity, bool bIsSnap)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSyncComponent.SendServerMoveToClient");

	struct
	{
		int                            InCorrectionId;
		struct FVector_NetQuantize100  ServerLocation;
		struct FVector_NetQuantize100  ServerLinearVelocity;
		struct FVector_NetQuantizeNormal ServerRotator;
		struct FVector_NetQuantize100  ServerAngularVelocity;
		bool                           bIsSnap;
	} params;
	params.InCorrectionId = InCorrectionId;
	params.ServerLocation = ServerLocation;
	params.ServerLinearVelocity = ServerLinearVelocity;
	params.ServerRotator = ServerRotator;
	params.ServerAngularVelocity = ServerAngularVelocity;
	params.bIsSnap = bIsSnap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSyncComponent.SendClientMoveToServerUnreliably
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            InCorrectionId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize100  ClientLocation                 (CPF_Parm)
// struct FVector_NetQuantize100  ClientLinearVelocity           (CPF_Parm)
// struct FVector_NetQuantizeNormal ClientRotator                  (CPF_Parm)
// struct FVector_NetQuantize100  ClientAngularVelocity          (CPF_Parm)

void UTslVehicleSyncComponent::SendClientMoveToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSyncComponent.SendClientMoveToServerUnreliably");

	struct
	{
		int                            InCorrectionId;
		struct FVector_NetQuantize100  ClientLocation;
		struct FVector_NetQuantize100  ClientLinearVelocity;
		struct FVector_NetQuantizeNormal ClientRotator;
		struct FVector_NetQuantize100  ClientAngularVelocity;
	} params;
	params.InCorrectionId = InCorrectionId;
	params.ClientLocation = ClientLocation;
	params.ClientLinearVelocity = ClientLinearVelocity;
	params.ClientRotator = ClientRotator;
	params.ClientAngularVelocity = ClientAngularVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSyncComponent.SendClientMoveToServerReliably
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            InCorrectionId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize100  ClientLocation                 (CPF_Parm)
// struct FVector_NetQuantize100  ClientLinearVelocity           (CPF_Parm)
// struct FVector_NetQuantizeNormal ClientRotator                  (CPF_Parm)
// struct FVector_NetQuantize100  ClientAngularVelocity          (CPF_Parm)

void UTslVehicleSyncComponent::SendClientMoveToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSyncComponent.SendClientMoveToServerReliably");

	struct
	{
		int                            InCorrectionId;
		struct FVector_NetQuantize100  ClientLocation;
		struct FVector_NetQuantize100  ClientLinearVelocity;
		struct FVector_NetQuantizeNormal ClientRotator;
		struct FVector_NetQuantize100  ClientAngularVelocity;
	} params;
	params.InCorrectionId = InCorrectionId;
	params.ClientLocation = ClientLocation;
	params.ClientLinearVelocity = ClientLinearVelocity;
	params.ClientRotator = ClientRotator;
	params.ClientAngularVelocity = ClientAngularVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSyncComponent.SendClientHitToServerUnreliably
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            InCorrectionId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize100  ClientLocation                 (CPF_Parm)
// struct FVector_NetQuantize100  ClientLinearVelocity           (CPF_Parm)
// struct FVector_NetQuantizeNormal ClientRotator                  (CPF_Parm)
// struct FVector_NetQuantize100  ClientAngularVelocity          (CPF_Parm)
// struct FVector_NetQuantize100  NormalImpulse                  (CPF_Parm)
// struct FHitResult              Hit                            (CPF_Parm, CPF_IsPlainOldData)

void UTslVehicleSyncComponent::SendClientHitToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSyncComponent.SendClientHitToServerUnreliably");

	struct
	{
		int                            InCorrectionId;
		struct FVector_NetQuantize100  ClientLocation;
		struct FVector_NetQuantize100  ClientLinearVelocity;
		struct FVector_NetQuantizeNormal ClientRotator;
		struct FVector_NetQuantize100  ClientAngularVelocity;
		struct FVector_NetQuantize100  NormalImpulse;
		struct FHitResult              Hit;
	} params;
	params.InCorrectionId = InCorrectionId;
	params.ClientLocation = ClientLocation;
	params.ClientLinearVelocity = ClientLinearVelocity;
	params.ClientRotator = ClientRotator;
	params.ClientAngularVelocity = ClientAngularVelocity;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSyncComponent.SendClientHitToServerReliably
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            InCorrectionId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize100  ClientLocation                 (CPF_Parm)
// struct FVector_NetQuantize100  ClientLinearVelocity           (CPF_Parm)
// struct FVector_NetQuantizeNormal ClientRotator                  (CPF_Parm)
// struct FVector_NetQuantize100  ClientAngularVelocity          (CPF_Parm)
// struct FVector_NetQuantize100  NormalImpulse                  (CPF_Parm)
// struct FHitResult              Hit                            (CPF_Parm, CPF_IsPlainOldData)

void UTslVehicleSyncComponent::SendClientHitToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSyncComponent.SendClientHitToServerReliably");

	struct
	{
		int                            InCorrectionId;
		struct FVector_NetQuantize100  ClientLocation;
		struct FVector_NetQuantize100  ClientLinearVelocity;
		struct FVector_NetQuantizeNormal ClientRotator;
		struct FVector_NetQuantize100  ClientAngularVelocity;
		struct FVector_NetQuantize100  NormalImpulse;
		struct FHitResult              Hit;
	} params;
	params.InCorrectionId = InCorrectionId;
	params.ClientLocation = ClientLocation;
	params.ClientLinearVelocity = ClientLinearVelocity;
	params.ClientRotator = ClientRotator;
	params.ClientAngularVelocity = ClientAngularVelocity;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSyncComponent.OnHitAtServer
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UTslVehicleSyncComponent::OnHitAtServer(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSyncComponent.OnHitAtServer");

	struct
	{
		class AActor*                  SelfActor;
		class AActor*                  OtherActor;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSyncComponent.OnHitAtClient
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UTslVehicleSyncComponent::OnHitAtClient(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSyncComponent.OnHitAtClient");

	struct
	{
		class AActor*                  SelfActor;
		class AActor*                  OtherActor;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslVehicleSyncComponent.OnDriverRide
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UTslVehicleSyncComponent::OnDriverRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslVehicleSyncComponent.OnDriverRide");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            RandomSeed                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReticleSpread                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 RelLocation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Trajectory::SimulateHit_UnReliable(const struct FHitResult& Impact, int RandomSeed, float ReticleSpread, const struct FVector& RelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable");

	struct
	{
		struct FHitResult              Impact;
		int                            RandomSeed;
		float                          ReticleSpread;
		struct FVector                 RelLocation;
	} params;
	params.Impact = Impact;
	params.RandomSeed = RandomSeed;
	params.ReticleSpread = ReticleSpread;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            RandomSeed                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReticleSpread                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 RelLocation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Trajectory::SimulateHit_Reliable(const struct FHitResult& Impact, int RandomSeed, float ReticleSpread, const struct FVector& RelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable");

	struct
	{
		struct FHitResult              Impact;
		int                            RandomSeed;
		float                          ReticleSpread;
		struct FVector                 RelLocation;
	} params;
	params.Impact = Impact;
	params.RandomSeed = RandomSeed;
	params.ReticleSpread = ReticleSpread;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyMiss
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FVector_NetQuantizeNormal ShootDir                       (CPF_Parm)
// int                            RandomSeed                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReticleSpread                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAttackId               AttackId                       (CPF_Parm)

void ATslWeapon_Trajectory::ServerNotifyMiss(const struct FVector_NetQuantizeNormal& ShootDir, int RandomSeed, float ReticleSpread, const struct FAttackId& AttackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerNotifyMiss");

	struct
	{
		struct FVector_NetQuantizeNormal ShootDir;
		int                            RandomSeed;
		float                          ReticleSpread;
		struct FAttackId               AttackId;
	} params;
	params.ShootDir = ShootDir;
	params.RandomSeed = RandomSeed;
	params.ReticleSpread = ReticleSpread;
	params.AttackId = AttackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyHit
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector_NetQuantize     Origin                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FVector_NetQuantizeNormal ShootDir                       (CPF_Parm)
// int                            RandomSeed                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReticleSpread                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TravelDistance                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAttackId               AttackId                       (CPF_Parm)
// uint32_t                       HitSeq                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 RelLocation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Trajectory::ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantize& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int RandomSeed, float ReticleSpread, float TravelDistance, const struct FAttackId& AttackId, uint32_t HitSeq, const struct FVector& RelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerNotifyHit");

	struct
	{
		struct FHitResult              Impact;
		struct FVector_NetQuantize     Origin;
		struct FVector_NetQuantizeNormal ShootDir;
		int                            RandomSeed;
		float                          ReticleSpread;
		float                          TravelDistance;
		struct FAttackId               AttackId;
		uint32_t                       HitSeq;
		struct FVector                 RelLocation;
	} params;
	params.Impact = Impact;
	params.Origin = Origin;
	params.ShootDir = ShootDir;
	params.RandomSeed = RandomSeed;
	params.ReticleSpread = ReticleSpread;
	params.TravelDistance = TravelDistance;
	params.AttackId = AttackId;
	params.HitSeq = HitSeq;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class ATslCharacter*           TargetCharacter                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize     LocationRelative               (CPF_Parm)
// float                          BulletVelocity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Trajectory::ServerNotifyCrack(class ATslCharacter* TargetCharacter, const struct FVector_NetQuantize& LocationRelative, float BulletVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack");

	struct
	{
		class ATslCharacter*           TargetCharacter;
		struct FVector_NetQuantize     LocationRelative;
		float                          BulletVelocity;
	} params;
	params.TargetCharacter = TargetCharacter;
	params.LocationRelative = LocationRelative;
	params.BulletVelocity = BulletVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTrajectoryWeaponData   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTrajectoryWeaponData ATslWeapon_Trajectory::GetTrajectoryConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig");

	struct
	{
		struct FTrajectoryWeaponData   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRecoilInfo             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRecoilInfo ATslWeapon_Trajectory::GetRecoilInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetRecoilInfo");

	struct
	{
		struct FRecoilInfo             ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Trajectory::GetCurrentStabilityVar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Trajectory::GetCurrentReoveryTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWeapon_Trajectory::GetCurrentRecoilValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D ATslWeapon_Trajectory::GetCurrentRecoilTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Melee.ServerNotifyHit
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TArray<struct FHitResult>      Impacts                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FAttackId               AttackId                       (CPF_Parm)
// uint32_t                       HitSeq                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Melee::ServerNotifyHit(TArray<struct FHitResult> Impacts, const struct FAttackId& AttackId, uint32_t HitSeq)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Melee.ServerNotifyHit");

	struct
	{
		TArray<struct FHitResult>      Impacts;
		struct FAttackId               AttackId;
		uint32_t                       HitSeq;
	} params;
	params.Impacts = Impacts;
	params.AttackId = AttackId;
	params.HitSeq = HitSeq;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Melee.ServerAttack
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            AnimIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Melee::ServerAttack(int AnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Melee.ServerAttack");

	struct
	{
		int                            AnimIndex;
	} params;
	params.AnimIndex = AnimIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Melee.OnMontageEnded
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Melee::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Melee.OnMontageEnded");

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Melee.OnAnimationNotify
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   NotifyName                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslWeapon_Melee::OnAnimationNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Melee.OnAnimationNotify");

	struct
	{
		struct FName                   NotifyName;
	} params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Melee.ClientHit_Confirmed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)
// Parameters:
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslWeapon_Melee::ClientHit_Confirmed(const struct FHitResult& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Melee.ClientHit_Confirmed");

	struct
	{
		struct FHitResult              Impact;
	} params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Melee.ClientAttack
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)
// Parameters:
// int                            AnimIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Melee::ClientAttack(int AnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Melee.ClientAttack");

	struct
	{
		int                            AnimIndex;
	} params;
	params.AnimIndex = AnimIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Throwable.ServerStartReady
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Throwable::ServerStartReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.ServerStartReady");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Throwable.ServerForceDropProjectile
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void ATslWeapon_Throwable::ServerForceDropProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.ServerForceDropProjectile");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Throwable.ServerFireProjectile
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FVector                 RelativeLocation               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ProjectileRotation             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWeapon_Throwable::ServerFireProjectile(const struct FVector& RelativeLocation, const struct FRotator& ProjectileRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.ServerFireProjectile");

	struct
	{
		struct FVector                 RelativeLocation;
		struct FRotator                ProjectileRotation;
	} params;
	params.RelativeLocation = RelativeLocation;
	params.ProjectileRotation = ProjectileRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Throwable.OnRep_ThrowableState
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ATslWeapon_Throwable::OnRep_ThrowableState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.OnRep_ThrowableState");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Throwable.OnAnimationNotify
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   NotifyName                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslWeapon_Throwable::OnAnimationNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.OnAnimationNotify");

	struct
	{
		struct FName                   NotifyName;
	} params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Throwable.GetThrowableState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class EThrowableState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EThrowableState> ATslWeapon_Throwable::GetThrowableState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.GetThrowableState");

	struct
	{
		TEnumAsByte<enum class EThrowableState> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Throwable.GetThrowableCountInInventory
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Throwable::GetThrowableCountInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.GetThrowableCountInInventory");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Throwable.GetThrowableCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATslWeapon_Throwable::GetThrowableCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.GetThrowableCount");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Throwable.Client_NotifyDrop
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected)

void ATslWeapon_Throwable::Client_NotifyDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Throwable.Client_NotifyDrop");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicle.ServerSetBoosting
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bNewBoosting                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWheeledVehicle::ServerSetBoosting(bool bNewBoosting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.ServerSetBoosting");

	struct
	{
		bool                           bNewBoosting;
	} params;
	params.bNewBoosting = bNewBoosting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicle.OnPostDriverRide
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ATslWheeledVehicle::OnPostDriverRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.OnPostDriverRide");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicle.OnBreak
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ATslWheeledVehicle::OnBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.OnBreak");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicle.IsSunken
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWheeledVehicle::IsSunken()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.IsSunken");

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


// Function TslGame.TslWheeledVehicle.IsStablizeOverrideActive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWheeledVehicle::IsStablizeOverrideActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.IsStablizeOverrideActive");

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


// Function TslGame.TslWheeledVehicle.IsStabilizeOverrideEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWheeledVehicle::IsStabilizeOverrideEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.IsStabilizeOverrideEnabled");

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


// Function TslGame.TslWheeledVehicle.IsInWaterVolume
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWheeledVehicle::IsInWaterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.IsInWaterVolume");

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


// Function TslGame.TslWheeledVehicle.IsBoosting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATslWheeledVehicle::IsBoosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.IsBoosting");

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


// Function TslGame.TslWheeledVehicle.GetTslVehicleMovement
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTslWheeledVehicleMovement* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslWheeledVehicleMovement* ATslWheeledVehicle::GetTslVehicleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.GetTslVehicleMovement");

	struct
	{
		class UTslWheeledVehicleMovement* ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicle.GetSteeringInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWheeledVehicle::GetSteeringInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.GetSteeringInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicle.GetCurrentWaterSurfaceZ
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATslWheeledVehicle::GetCurrentWaterSurfaceZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.GetCurrentWaterSurfaceZ");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicle.GetBuffComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBuffComponet*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UBuffComponet* ATslWheeledVehicle::GetBuffComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.GetBuffComponent");

	struct
	{
		class UBuffComponet*           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicle.ActivationTriggerEndOverlap
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  Other                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslWheeledVehicle::ActivationTriggerEndOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.ActivationTriggerEndOverlap");

	struct
	{
		class AActor*                  Other;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicle.ActivationTriggerBeginOverlap
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class AActor*                  Other                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              OverlapInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATslWheeledVehicle::ActivationTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicle.ActivationTriggerBeginOverlap");

	struct
	{
		class AActor*                  Other;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              OverlapInfo;
	} params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicleMovement.SetSimulateVehicle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSimulate                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslWheeledVehicleMovement::SetSimulateVehicle(bool bSimulate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.SetSimulateVehicle");

	struct
	{
		bool                           bSimulate;
	} params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicleMovement.ServerUpdateAdditionalState
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            TargetGear                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslWheeledVehicleMovement::ServerUpdateAdditionalState(int TargetGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.ServerUpdateAdditionalState");

	struct
	{
		int                            TargetGear;
	} params;
	params.TargetGear = TargetGear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicleMovement.OnDriverRide
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UTslWheeledVehicleMovement::OnDriverRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.OnDriverRide");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicleMovement.OnDriverLeave
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UTslWheeledVehicleMovement::OnDriverLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.OnDriverLeave");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicleMovement.OnBreak
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UTslWheeledVehicleMovement::OnBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.OnBreak");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWheeledVehicleMovement.IsSimulatingVehicle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTslWheeledVehicleMovement::IsSimulatingVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.IsSimulatingVehicle");

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


// Function TslGame.TslWheeledVehicleMovement.GetWheelWaterDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetWheelWaterDepth(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetWheelWaterDepth");

	struct
	{
		int                            Index;
		float                          ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetWheelSuspensionMaxRaise
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetWheelSuspensionMaxRaise(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetWheelSuspensionMaxRaise");

	struct
	{
		int                            Index;
		float                          ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetWheelSuspensionMaxDrop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetWheelSuspensionMaxDrop(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetWheelSuspensionMaxDrop");

	struct
	{
		int                            Index;
		float                          ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetWheelRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetWheelRotationSpeed(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetWheelRotationSpeed");

	struct
	{
		int                            Index;
		float                          ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetWheelHealthPercentages
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<float>                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<float> UTslWheeledVehicleMovement::GetWheelHealthPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetWheelHealthPercentages");

	struct
	{
		TArray<float>                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetWheelContactSurfaceMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPhysicalMaterial*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPhysicalMaterial* UTslWheeledVehicleMovement::GetWheelContactSurfaceMaterial(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetWheelContactSurfaceMaterial");

	struct
	{
		int                            Index;
		class UPhysicalMaterial*       ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetThrottleInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetThrottleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetThrottleInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetSteeringInputClamped
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetSteeringInputClamped()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetSteeringInputClamped");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetSteeringInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetSteeringInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetSteeringInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetHandbrakeInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetHandbrakeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetHandbrakeInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.GetBrakeInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTslWheeledVehicleMovement::GetBrakeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.GetBrakeInput");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWheeledVehicleMovement.ClientPunctureTire
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslWheeledVehicleMovement::ClientPunctureTire(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWheeledVehicleMovement.ClientPunctureTire");

	struct
	{
		int                            WheelIndex;
	} params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.UiHelperFunctions.SortPlayerMatchResultInfosByRanking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos         (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FTslPlayerMatchResultInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FTslPlayerMatchResultInfo> UUiHelperFunctions::STATIC_SortPlayerMatchResultInfosByRanking(TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.SortPlayerMatchResultInfosByRanking");

	struct
	{
		TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos;
		TArray<struct FTslPlayerMatchResultInfo> ReturnValue;
	} params;
	params.PlayerMatchResultInfos = PlayerMatchResultInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.SortItem
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<TScriptInterface<class USlotInterface>> InItemList                     (CPF_Parm, CPF_ZeroConstructor)
// TArray<TScriptInterface<class USlotInterface>> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<TScriptInterface<class USlotInterface>> UUiHelperFunctions::STATIC_SortItem(TArray<TScriptInterface<class USlotInterface>> InItemList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.SortItem");

	struct
	{
		TArray<TScriptInterface<class USlotInterface>> InItemList;
		TArray<TScriptInterface<class USlotInterface>> ReturnValue;
	} params;
	params.InItemList = InItemList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.IsLastSpectatedCharacter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUiHelperFunctions::STATIC_IsLastSpectatedCharacter(class UUserWidget* Widget, class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.IsLastSpectatedCharacter");

	struct
	{
		class UUserWidget*             Widget;
		class ATslCharacter*           Character;
		bool                           ReturnValue;
	} params;
	params.Widget = Widget;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.HaveDurability
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class USlotInterface> ItemSlot                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUiHelperFunctions::STATIC_HaveDurability(const TScriptInterface<class USlotInterface>& ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.HaveDurability");

	struct
	{
		TScriptInterface<class USlotInterface> ItemSlot;
		bool                           ReturnValue;
	} params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetTslSpectatorPawn
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslSpectatorPawn*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslSpectatorPawn* UUiHelperFunctions::STATIC_GetTslSpectatorPawn(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetTslSpectatorPawn");

	struct
	{
		class UUserWidget*             Widget;
		class ATslSpectatorPawn*       ReturnValue;
	} params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetTslHUD
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslHUD*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslHUD* UUiHelperFunctions::STATIC_GetTslHUD(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetTslHUD");

	struct
	{
		class UUserWidget*             Widget;
		class ATslHUD*                 ReturnValue;
	} params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetTeamId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UUiHelperFunctions::STATIC_GetTeamId(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetTeamId");

	struct
	{
		class ATslCharacter*           Character;
		int                            ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetTeamColors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            TeamCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FLinearColor> UUiHelperFunctions::STATIC_GetTeamColors(int TeamCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetTeamColors");

	struct
	{
		int                            TeamCount;
		TArray<struct FLinearColor>    ReturnValue;
	} params;
	params.TeamCount = TeamCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetSortedReplicateCharactersBySpectatorPawnDistance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class ATslCharacter*>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class ATslCharacter*> UUiHelperFunctions::STATIC_GetSortedReplicateCharactersBySpectatorPawnDistance(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetSortedReplicateCharactersBySpectatorPawnDistance");

	struct
	{
		class UUserWidget*             Widget;
		TArray<class ATslCharacter*>   ReturnValue;
	} params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UUiHelperFunctions::STATIC_GetPlayerName(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetPlayerName");

	struct
	{
		class ATslCharacter*           Character;
		struct FString                 ReturnValue;
	} params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetOwningTslPlayerController
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslPlayerController*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslPlayerController* UUiHelperFunctions::STATIC_GetOwningTslPlayerController(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetOwningTslPlayerController");

	struct
	{
		class UUserWidget*             Widget;
		class ATslPlayerController*    ReturnValue;
	} params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetOwningTslCharacter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* UUiHelperFunctions::STATIC_GetOwningTslCharacter(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetOwningTslCharacter");

	struct
	{
		class UUserWidget*             Widget;
		class ATslCharacter*           ReturnValue;
	} params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetLastSpectatedCharacter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslCharacter* UUiHelperFunctions::STATIC_GetLastSpectatedCharacter(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetLastSpectatedCharacter");

	struct
	{
		class UUserWidget*             Widget;
		class ATslCharacter*           ReturnValue;
	} params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.UiHelperFunctions.GetDurabilityRatio
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class USlotInterface> ItemSlot                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UUiHelperFunctions::STATIC_GetDurabilityRatio(const TScriptInterface<class USlotInterface>& ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.UiHelperFunctions.GetDurabilityRatio");

	struct
	{
		TScriptInterface<class USlotInterface> ItemSlot;
		float                          ReturnValue;
	} params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VivoxComponent.UpdatePosition
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UVivoxComponent::UpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.UpdatePosition");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.SetVoiceChannelType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<enum class EVivoxChannelType> ChannelType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxComponent::SetVoiceChannelType(TEnumAsByte<enum class EVivoxChannelType> ChannelType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.SetVoiceChannelType");

	struct
	{
		TEnumAsByte<enum class EVivoxChannelType> ChannelType;
	} params;
	params.ChannelType = ChannelType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.SetLocalVoiceOutputMuted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsMuted                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxComponent::SetLocalVoiceOutputMuted(bool bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.SetLocalVoiceOutputMuted");

	struct
	{
		bool                           bIsMuted;
	} params;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.SetLocalVoiceInputMuted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsMuted                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxComponent::SetLocalVoiceInputMuted(bool bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.SetLocalVoiceInputMuted");

	struct
	{
		bool                           bIsMuted;
	} params;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ServerTestAccessToken
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)

void UVivoxComponent::ServerTestAccessToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ServerTestAccessToken");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ServerLogin
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)

void UVivoxComponent::ServerLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ServerLogin");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ServerJoinTeamChannel
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)

void UVivoxComponent::ServerJoinTeamChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ServerJoinTeamChannel");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ServerJoinGlobalChannel
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)

void UVivoxComponent::ServerJoinGlobalChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ServerJoinGlobalChannel");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ResetTeamChannelJoinState
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UVivoxComponent::ResetTeamChannelJoinState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ResetTeamChannelJoinState");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ResetLoginState
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UVivoxComponent::ResetLoginState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ResetLoginState");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ResetGlobalChannelJoinState
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UVivoxComponent::ResetGlobalChannelJoinState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ResetGlobalChannelJoinState");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ResetConnectionState
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UVivoxComponent::ResetConnectionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ResetConnectionState");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.RefreshDevices
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UVivoxComponent::RefreshDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.RefreshDevices");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.GetVoiceChannelType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EVivoxChannelType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class EVivoxChannelType> UVivoxComponent::GetVoiceChannelType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.GetVoiceChannelType");

	struct
	{
		TEnumAsByte<enum class EVivoxChannelType> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.VivoxComponent.GetLocalVoiceOutputMuted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVivoxComponent::GetLocalVoiceOutputMuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.GetLocalVoiceOutputMuted");

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


// Function TslGame.VivoxComponent.GetLocalVoiceInputMuted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVivoxComponent::GetLocalVoiceInputMuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.GetLocalVoiceInputMuted");

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


// Function TslGame.VivoxComponent.ClientLogin
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetClient)
// Parameters:
// struct FString                 AccessToken                    (CPF_Parm, CPF_ZeroConstructor)

void UVivoxComponent::ClientLogin(const struct FString& AccessToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ClientLogin");

	struct
	{
		struct FString                 AccessToken;
	} params;
	params.AccessToken = AccessToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ClientJoinTeamChannel
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetClient)
// Parameters:
// struct FString                 AccessToken                    (CPF_Parm, CPF_ZeroConstructor)

void UVivoxComponent::ClientJoinTeamChannel(const struct FString& AccessToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ClientJoinTeamChannel");

	struct
	{
		struct FString                 AccessToken;
	} params;
	params.AccessToken = AccessToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxComponent.ClientJoinGlobalChannel
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetClient)
// Parameters:
// struct FString                 AccessToken                    (CPF_Parm, CPF_ZeroConstructor)

void UVivoxComponent::ClientJoinGlobalChannel(const struct FString& AccessToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxComponent.ClientJoinGlobalChannel");

	struct
	{
		struct FString                 AccessToken;
	} params;
	params.AccessToken = AccessToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxManager.OnRevokeKeySuccess
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UVivoxResponse*          Response                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxManager::OnRevokeKeySuccess(class UVivoxResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxManager.OnRevokeKeySuccess");

	struct
	{
		class UVivoxResponse*          Response;
	} params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxManager.OnRevokeKeyFail
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UVivoxResponse*          Response                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxManager::OnRevokeKeyFail(class UVivoxResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxManager.OnRevokeKeyFail");

	struct
	{
		class UVivoxResponse*          Response;
	} params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxManager.OnChannelSuccess
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UVivoxResponse*          Response                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxManager::OnChannelSuccess(class UVivoxResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxManager.OnChannelSuccess");

	struct
	{
		class UVivoxResponse*          Response;
	} params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxManager.OnChannelFail
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UVivoxResponse*          Response                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxManager::OnChannelFail(class UVivoxResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxManager.OnChannelFail");

	struct
	{
		class UVivoxResponse*          Response;
	} params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxManager.OnAddKeySuccess
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UVivoxResponse*          Response                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxManager::OnAddKeySuccess(class UVivoxResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxManager.OnAddKeySuccess");

	struct
	{
		class UVivoxResponse*          Response;
	} params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.VivoxManager.OnAddKeyFail
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UVivoxResponse*          Response                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVivoxManager::OnAddKeyFail(class UVivoxResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.VivoxManager.OnAddKeyFail");

	struct
	{
		class UVivoxResponse*          Response;
	} params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponAnimInfoComponent.SetAccessorySlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTslAccessoryComponent*  NewAccessoryComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<enum class EAccessorySlot> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAnimInfoComponent::SetAccessorySlot(class UTslAccessoryComponent* NewAccessoryComponent, TEnumAsByte<enum class EAccessorySlot> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponAnimInfoComponent.SetAccessorySlot");

	struct
	{
		class UTslAccessoryComponent*  NewAccessoryComponent;
		TEnumAsByte<enum class EAccessorySlot> Slot;
	} params;
	params.NewAccessoryComponent = NewAccessoryComponent;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.WeaponAnimInfoComponent.HasWeaponLeftHandIKSocket
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              Weapon                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAnimInfoComponent::HasWeaponLeftHandIKSocket(class ATslWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponAnimInfoComponent.HasWeaponLeftHandIKSocket");

	struct
	{
		class ATslWeapon*              Weapon;
		bool                           ReturnValue;
	} params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponAnimInfoComponent.GetWeaponLeftHandIKTransform
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              Weapon                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UWeaponAnimInfoComponent::GetWeaponLeftHandIKTransform(class ATslWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponAnimInfoComponent.GetWeaponLeftHandIKTransform");

	struct
	{
		class ATslWeapon*              Weapon;
		struct FTransform              ReturnValue;
	} params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponAnimInfoComponent.GetWeaponHandIK_Right
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              Weapon                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UWeaponAnimInfoComponent::GetWeaponHandIK_Right(class ATslWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponAnimInfoComponent.GetWeaponHandIK_Right");

	struct
	{
		class ATslWeapon*              Weapon;
		struct FTransform              ReturnValue;
	} params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponAnimInfoComponent.GetWeaponHandIK_Left
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              Weapon                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UWeaponAnimInfoComponent::GetWeaponHandIK_Left(class ATslWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponAnimInfoComponent.GetWeaponHandIK_Left");

	struct
	{
		class ATslWeapon*              Weapon;
		struct FTransform              ReturnValue;
	} params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponAnimInfoComponent.GetCurrentWeapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslWeapon*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ATslWeapon* UWeaponAnimInfoComponent::GetCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponAnimInfoComponent.GetCurrentWeapon");

	struct
	{
		class ATslWeapon*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponAnimInfoComponent.GetAccessorySlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<enum class EAccessorySlot> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTslAccessoryComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslAccessoryComponent* UWeaponAnimInfoComponent::GetAccessorySlot(TEnumAsByte<enum class EAccessorySlot> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponAnimInfoComponent.GetAccessorySlot");

	struct
	{
		TEnumAsByte<enum class EAccessorySlot> Slot;
		class UTslAccessoryComponent*  ReturnValue;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.WeaponClone.Update
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UWeaponClone::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.WeaponClone.Update");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
