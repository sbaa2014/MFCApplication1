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

// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UNiagaraEffect*          EffectTemplate                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<enum class EAttachLocation> LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoDestroy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const class Vector3D& Location, const class Rotator& Rotation, TEnumAsByte<enum class EAttachLocation> LocationType, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached");

	struct
	{
		class UNiagaraEffect*          EffectTemplate;
		class USceneComponent*         AttachToComponent;
		struct FName                   AttachPointName;
		class Vector3D                 Location;
		class Rotator                  Rotation;
		TEnumAsByte<enum class EAttachLocation> LocationType;
		bool                           bAutoDestroy;
		class UNiagaraComponent*       ReturnValue;
	} params;
	params.EffectTemplate = EffectTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNiagaraEffect*          EffectTemplate                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoDestroy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const class Vector3D& Location, const class Rotator& Rotation, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation");

	struct
	{
		class UObject*                 WorldContextObject;
		class UNiagaraEffect*          EffectTemplate;
		class Vector3D                 Location;
		class Rotator                  Rotation;
		bool                           bAutoDestroy;
		class UNiagaraComponent*       ReturnValue;
	} params;
	params.WorldContextObject = WorldContextObject;
	params.EffectTemplate = EffectTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SetUpdateScriptConstant
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   EmitterName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ConstantName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_SetUpdateScriptConstant(class UNiagaraComponent* Component, const struct FName& EmitterName, const struct FName& ConstantName, const class Vector3D& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetUpdateScriptConstant");

	struct
	{
		class UNiagaraComponent*       Component;
		struct FName                   EmitterName;
		struct FName                   ConstantName;
		class Vector3D                 Value;
	} params;
	params.Component = Component;
	params.EmitterName = EmitterName;
	params.ConstantName = ConstantName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
