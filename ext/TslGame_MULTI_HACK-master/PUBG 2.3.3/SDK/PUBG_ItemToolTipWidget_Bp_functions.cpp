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

// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetItemDetailedName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UEquipableItem*          NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)

void UItemToolTipWidget_Bp_C::GetItemDetailedName(class UEquipableItem* NewParam, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetItemDetailedName");

	struct
	{
		class UEquipableItem*          NewParam;
		struct FText                   Name;
	} params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.On_MagazineIcon_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::On_MagazineIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.On_MagazineIcon_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetFiringRate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AmmoClip                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FullReloadingTime              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FringRate                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetFiringRate(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, int AmmoClip, float FullReloadingTime, float* FringRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetFiringRate");

	struct
	{
		class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory;
		int                            AmmoClip;
		float                          FullReloadingTime;
		float                          FringRate;
	} params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;
	params.AmmoClip = AmmoClip;
	params.FullReloadingTime = FullReloadingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FringRate != nullptr)
		*FringRate = params.FringRate;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetShooterWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslWeapon*              ShooterWeapon                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetShooterWeapon(class UEquipableItem* EquipableItem, class ATslWeapon** ShooterWeapon, class ATslWeapon_Trajectory** ShooterWeapon_Trajectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetShooterWeapon");

	struct
	{
		class UEquipableItem*          EquipableItem;
		class ATslWeapon*              ShooterWeapon;
		class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory;
	} params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterWeapon != nullptr)
		*ShooterWeapon = params.ShooterWeapon;
	if (ShooterWeapon_Trajectory != nullptr)
		*ShooterWeapon_Trajectory = params.ShooterWeapon_Trajectory;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateEquipmentSlotItemToolTip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::OnUpdateEquipmentSlotItemToolTip(class UEquipableItem* EquipableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateEquipmentSlotItemToolTip");

	struct
	{
		class UEquipableItem*          EquipableItem;
	} params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateVicinityOrInventorySlotItemToolTip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEquipableItem*          EquipmentSlotItem              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::OnUpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem* EquipableItem, class UEquipableItem* EquipmentSlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateVicinityOrInventorySlotItemToolTip");

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


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Clear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Bp_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Clear");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWeaponItem*             WeaponItem                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AmmoClip                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAttachedAmmo(class UWeaponItem* WeaponItem, int* AmmoClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedAmmo");

	struct
	{
		class UWeaponItem*             WeaponItem;
		int                            AmmoClip;
	} params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoClip != nullptr)
		*AmmoClip = params.AmmoClip;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponItem*             WeaponItem                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AmmoClip                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAmmo(class UWeaponItem* WeaponItem, int* AmmoClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAmmo");

	struct
	{
		class UWeaponItem*             WeaponItem;
		int                            AmmoClip;
	} params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoClip != nullptr)
		*AmmoClip = params.AmmoClip;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedStability
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Accuracy                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAttachedStability(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedStability");

	struct
	{
		class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory;
		float                          Accuracy;
	} params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetStability
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Accuracy                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetStability(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetStability");

	struct
	{
		class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory;
		float                          Accuracy;
	} params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponEffectiveRange
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EffectRange                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetWeaponEffectiveRange(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* EffectRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponEffectiveRange");

	struct
	{
		class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory;
		float                          EffectRange;
	} params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectRange != nullptr)
		*EffectRange = params.EffectRange;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponPower
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon*              ShooterWeapon                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetWeaponPower(class ATslWeapon* ShooterWeapon, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponPower");

	struct
	{
		class ATslWeapon*              ShooterWeapon;
		float                          Damage;
	} params;
	params.ShooterWeapon = ShooterWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.FadeIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Bp_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.FadeIn");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateDefaultInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateDefaultInfo(const TScriptInterface<class USlotInterface>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateDefaultInfo");

	struct
	{
		TScriptInterface<class USlotInterface> Item;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.SetItemByInterface
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::SetItemByInterface(const TScriptInterface<class USlotInterface>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.SetItemByInterface");

	struct
	{
		TScriptInterface<class USlotInterface> Item;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateItemDetailInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateItemDetailInfo(class UItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateItemDetailInfo");

	struct
	{
		class UItem*                   Item;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemToolTipWidget_Bp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateSlotInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateSlotInfo(TScriptInterface<class USlotInterface>* SlotInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateSlotInfo");

	struct
	{
		TScriptInterface<class USlotInterface>* SlotInterface;
	} params;
	params.SlotInterface = SlotInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateEquipmentSlotItemToolTip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem**         EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateEquipmentSlotItemToolTip(class UEquipableItem** EquipableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateEquipmentSlotItemToolTip");

	struct
	{
		class UEquipableItem**         EquipableItem;
	} params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateVicinityOrInventorySlotItemToolTip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem**         EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEquipableItem**         EquipmentSlotItem              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem** EquipableItem, class UEquipableItem** EquipmentSlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateVicinityOrInventorySlotItemToolTip");

	struct
	{
		class UEquipableItem**         EquipableItem;
		class UEquipableItem**         EquipmentSlotItem;
	} params;
	params.EquipableItem = EquipableItem;
	params.EquipmentSlotItem = EquipmentSlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ExecuteUbergraph_ItemToolTipWidget_Bp
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::ExecuteUbergraph_ItemToolTipWidget_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ExecuteUbergraph_ItemToolTipWidget_Bp");

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
