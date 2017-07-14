#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C
// 0x0FD4 (0x1854 - 0x0880)
class UABP_Motorbike_03_Sidecart_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                   		// 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C18CEEA9454DE330CA6D04A9DD0C31BA;		// 0x0888(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_15F271D1499C502C6E0C229A026FD4AB;		// 0x08D0(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_06E1963B4FB90A0EE538EE95DCF61920;		// 0x0958(0x0098)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B55149C0455C238B66D09991A1F7B71C;		// 0x09F0(0x00D8)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0AC8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B7DDAC124EDAE64B12D09FA7BE883344;		// 0x0AD0(0x0150)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3F94658641ED52A6D49C769ED0C843CC;		// 0x0C20(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_890B550C490FC073293628857561F9FC;		// 0x0C68(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_Root_E0337E584DCB18D90CC9EF8D8B20002D;		// 0x0CA0(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_0172EB50494AB898D46B0B9AF80797F6;		// 0x0CE8(0x0098)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_E6D4049E4A852034C00B63B9498110D2;		// 0x0D80(0x0098)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0E18(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D3CEFFF6432E7503DB28C1BE29B85433;		// 0x0E20(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_35851E2E4AE6A374B5577E99C4FB4129;		// 0x0F70(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0F56F954492DC7706E4F2F8C32181AE5;		// 0x10C0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0ED566E9482A8BEE79A50186543739B9;		// 0x1210(0x0150)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10B9B8314ACCE17F6380548C486F3E77;		// 0x1360(0x00B0)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_0657C0DE411E272B2CF3D89444074A8B;		// 0x1410(0x0098)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_AC3F31854A597DB7AA38B09E16BCB351;		// 0x14A8(0x00D8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_43A993304E1DF71826A01FB2C871315E;		// 0x1580(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_50DAC0624F5A3499CAAAA5AFACE4418A;		// 0x16D0(0x0150)
	class ABP_Motorbike_03_C*                          BikeRef;                                          		// 0x1820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SteerRoll;                                        		// 0x1828(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    BodyRot;                                          		// 0x182C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AD_Alpha;                                         		// 0x1838(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     LastVelocity;                                     		// 0x183C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     EF;                                               		// 0x1848(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Motorbike_03_Sidecart.ABP_Motorbike_03_Sidecart_C");
		return ptr;
	}


	void TickBikePose();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_Sidecart_AnimGraphNode_ModifyBone_10B9B8314ACCE17F6380548C486F3E77();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Motorbike_03_Sidecart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
