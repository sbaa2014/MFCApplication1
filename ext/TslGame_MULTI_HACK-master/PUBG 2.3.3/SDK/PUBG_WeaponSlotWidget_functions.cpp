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

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetTslCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetTslCharacter(class ATslCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetTslCharacter");

	struct
	{
		class ATslCharacter*           Character;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.CheckChangeAndUpdateTslWeaponInstance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::CheckChangeAndUpdateTslWeaponInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.CheckChangeAndUpdateTslWeaponInstance");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.UpdateIcon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetWeaponIndex(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponIndex");

	struct
	{
		int                            SlotIndex;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotIndex != nullptr)
		*SlotIndex = params.SlotIndex;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponImageSizeBox_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponImageSizeBox_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponImageSizeBox_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_ZeroingDistanceBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_ZeroingDistanceBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_ZeroingDistanceBlock_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIconBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnAmmoIconBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIconBlock_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCountBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponListLoadedAmmoCountBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCountBlock_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringModeBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponFiringModeBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringModeBlock_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnUnloadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIcon_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnAmmoIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIcon_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponImage_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponListLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCount_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringMode_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponFiringMode_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringMode_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_Zeroingdistance_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_Zeroingdistance_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_Zeroingdistance_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.OnPrepass_WeaponSlotVisiblity_BP
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::OnPrepass_WeaponSlotVisiblity_BP(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.OnPrepass_WeaponSlotVisiblity_BP");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetZeroingDistanceVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UWeaponSlotWidget_C::GetZeroingDistanceVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetZeroingDistanceVisibility");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoCountColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UWeaponSlotWidget_C::GetWeaponAmmoCountColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoCountColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoVisiblity_SelectSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UWeaponSlotWidget_C::GetWeaponAmmoVisiblity_SelectSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoVisiblity_SelectSlot");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleDownAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::PlayScaleDownAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleDownAnimation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleUpAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::PlayScaleUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleUpAnimation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetAmmoImage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture*                AmmoTexture                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AmmoIconRatio                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetAmmoImage(class UTexture** AmmoTexture, float* AmmoIconRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetAmmoImage");

	struct
	{
		class UTexture*                AmmoTexture;
		float                          AmmoIconRatio;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoTexture != nullptr)
		*AmmoTexture = params.AmmoTexture;
	if (AmmoIconRatio != nullptr)
		*AmmoIconRatio = params.AmmoIconRatio;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCurrentWeaponAmmoVisibility_ListIn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UWeaponSlotWidget_C::GetCurrentWeaponAmmoVisibility_ListIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetCurrentWeaponAmmoVisibility_ListIn");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedThrowableWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Throwable*    NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetCastedThrowableWeapon(class ATslWeapon_Throwable** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedThrowableWeapon");

	struct
	{
		class ATslWeapon_Throwable*    NewParam;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedMeleeWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Melee*        ShooterMeleeWeapon             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetCastedMeleeWeapon(class ATslWeapon_Melee** ShooterMeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedMeleeWeapon");

	struct
	{
		class ATslWeapon_Melee*        ShooterMeleeWeapon;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterMeleeWeapon != nullptr)
		*ShooterMeleeWeapon = params.ShooterMeleeWeapon;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedGunWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Gun*          GunWeapon                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetCastedGunWeapon(class ATslWeapon_Gun** GunWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedGunWeapon");

	struct
	{
		class ATslWeapon_Gun*          GunWeapon;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GunWeapon != nullptr)
		*GunWeapon = params.GunWeapon;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.IsCurrentWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCurrentWeapon                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::IsCurrentWeapon(bool* bCurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.IsCurrentWeapon");

	struct
	{
		bool                           bCurrentWeapon;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCurrentWeapon != nullptr)
		*bCurrentWeapon = params.bCurrentWeapon;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetWeaponAmmo(int* Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmo");

	struct
	{
		int                            Ammo;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetInventoryInAmmo(int* Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmo");

	struct
	{
		int                            Ammo;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UWeaponSlotWidget_C::GetInventoryInAmmoVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoVisibility");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetSlotSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Ratio                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetSlotSize(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetSlotSize");

	struct
	{
		float                          Ratio;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.SetSlotSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Ratio                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::SetSlotSize(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.SetSlotSize");

	struct
	{
		float                          Ratio;
	} params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponSlotWidget_C::GetWeaponAmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoText");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponSlotWidget_C::GetInventoryInAmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoText");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetAutoVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UWeaponSlotWidget_C::GetAutoVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetAutoVisibility");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayHiddenAnimaton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::PlayHiddenAnimaton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.PlayHiddenAnimaton");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayShowAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsWantoToNextHidden           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::PlayShowAnimation(bool bIsWantoToNextHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.PlayShowAnimation");

	struct
	{
		bool                           bIsWantoToNextHidden;
	} params;
	params.bIsWantoToNextHidden = bIsWantoToNextHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.Get_Zeroing_Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponSlotWidget_C::Get_Zeroing_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.Get_Zeroing_Text");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetFireModeText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponSlotWidget_C::GetFireModeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetFireModeText");

	struct
	{
		struct FText                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.IsNoAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bNoAmmo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::IsNoAmmo(bool* bNoAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.IsNoAmmo");

	struct
	{
		bool                           bNoAmmo;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNoAmmo != nullptr)
		*bNoAmmo = params.bNoAmmo;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UWeaponSlotWidget_C::GetWeaponVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponVisibility");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UWeaponSlotWidget_C::GetWeaponColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture*                Tex                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetIcon(class UTexture** Tex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetIcon");

	struct
	{
		class UTexture*                Tex;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tex != nullptr)
		*Tex = params.Tex;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::ShowAnimationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationStart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationFinish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::ShowAnimationFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationFinish");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_1");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_2");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ExecuteUbergraph_WeaponSlotWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::ExecuteUbergraph_WeaponSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ExecuteUbergraph_WeaponSlotWidget");

	struct
	{
		int                            EntryPoint;
	} params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::HIddenEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenEnd__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::HIddenStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenStart__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::ShowEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ShowEnd__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::ShowStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ShowStart__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
