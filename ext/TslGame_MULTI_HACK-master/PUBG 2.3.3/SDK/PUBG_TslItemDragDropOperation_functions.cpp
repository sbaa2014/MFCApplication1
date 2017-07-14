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

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemAttachment
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAttachment                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::IsDragDroppingItemAttachment(bool* IsAttachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemAttachment");

	struct
	{
		bool                           IsAttachment;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttachment != nullptr)
		*IsAttachment = params.IsAttachment;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsWeapon                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::IsDragDroppingItemWeapon(bool* IsWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemWeapon");

	struct
	{
		bool                           IsWeapon;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsInEquipment
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::IsInEquipment(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsInEquipment");

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


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetCurrentOtherContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::GetCurrentOtherContainer(TScriptInterface<class USlotContainerInterface>* OtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetCurrentOtherContainer");

	struct
	{
		TScriptInterface<class USlotContainerInterface> OtherContainer;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherContainer != nullptr)
		*OtherContainer = params.OtherContainer;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.LeaveOtherContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslItemDragDropOperation_C::LeaveOtherContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.LeaveOtherContainer");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.EnterOtherContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> NewOtherContainer              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::EnterOtherContainer(const TScriptInterface<class USlotContainerInterface>& NewOtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.EnterOtherContainer");

	struct
	{
		TScriptInterface<class USlotContainerInterface> NewOtherContainer;
	} params;
	params.NewOtherContainer = NewOtherContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsEnableAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsEnableAction                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::IsEnableAction(bool* IsEnableAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsEnableAction");

	struct
	{
		bool                           IsEnableAction;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnableAction != nullptr)
		*IsEnableAction = params.IsEnableAction;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetActionName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::GetActionName(struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetActionName");

	struct
	{
		struct FName                   ActionName;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Options                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UTslItemDragDropOperation_C::GetOptions(struct FString* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetOptions");

	struct
	{
		struct FString                 Options;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
